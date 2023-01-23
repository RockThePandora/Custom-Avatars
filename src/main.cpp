#include "main.hpp"
using Zenject.Internal.ZenjectHelper.cs;
using Avatar.FirstPersonVisibility.cs;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading;
using System.Threading.Tasks;


static ModInfo modInfo;

// Configuration& getConfig() {
//     static Configuration config(modInfo);
//     return config;
// }

// Logger& getLogger() {
//     static Logger *logger = new Logger(modInfo);
//     return *logger;
// }

extern "C" void setup(ModInfo &info) {
    info.id = MOD_ID;
    info.version = VERSION;
    modInfo = info;

//  getConfig().Load();
}

extern "C" void load() {
    il2cpp_functions::Init();

    // Install Hooks, Installers...etc here.
}
