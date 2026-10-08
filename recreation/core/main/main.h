#pragma once

namespace nocturne::core {

void displayErrorAndQuit(char *format, ...);
void showDeveloperToolsMenu();
int enterMainGameMenu();
void initializeGameSystems(int argc, char **argv);
void finalizeGameSystems();

} // namespace nocturne::core
