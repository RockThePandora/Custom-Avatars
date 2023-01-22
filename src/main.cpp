#include "main.hpp"
#include "Zenject/Internal/ZenjectHelper.cs"
#include "Avatar/FirstPersonVisibility.cs"
#include "scripts/build.ps1"
#include "scripts/createqmod.ps1
#include "scripts/ndk-stack.ps1"
#include "scripts/pull-tombstone.ps1"
#include "scripts/restart-game.ps1"
#include "scripts/start-logging.ps1"
#include "scripts/validate-modjson.ps1"

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
