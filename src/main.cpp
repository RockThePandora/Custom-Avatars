#include "main.hpp"
#include "main.cs"

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
