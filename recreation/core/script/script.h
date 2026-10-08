#pragma once

#include "core/fwd.h"

#include <cstdio>

namespace nocturne::core {

class CScript {
public:
    CScript();
    ~CScript();

    void clear();
    void process();
    int getLetterboxHeight();
    void renderSubtitles();
    void renderEditor(int left, int top, int right, int bottom);
    int loadScript(char *filename, int skip_validation);
    void initRuntime();
    void executeInitSection();
    void setSpeaker(CDemonActor *actor);
    void resetDialogState();
    int skipCinematic();
    void loadState(std::FILE *file_handle);
    void saveState(std::FILE *file_handle);
};

} // namespace nocturne::core
