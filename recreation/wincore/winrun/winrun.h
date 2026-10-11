#pragma once

#include "common/fwd.h"
#include "engine/fwd.h"
#include "platform/fwd.h"

#include <string_view>

namespace nocturne::wincore {

// The Windows front end's state: the main window and its input queues.
class CWinRun {
public:
    // The retail build's title; the editor's is "Nocturne Editor".
    static constexpr std::string_view kApplicationTitle = "Nocturne";

    explicit CWinRun(platform::IWindow &window);

    int getTime();
    void clearKeypresses();
    int getNextKeypress();
    int wasKeyPressed();
    void enqueueInput(int input_value);
    void clearMouseClicks();
    void setCursorPosition(int x, int y);
    void processWindowMessages();
    void displayMessageBoxAndQuit(const common::CFatalError &error);
    char *getKeyName(engine::EInputCodeType keycode);

private:
    platform::IWindow &window_;
};

} // namespace nocturne::wincore
