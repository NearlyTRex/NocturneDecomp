#pragma once

#include "engine/fwd.h"

namespace nocturne::engine {

class CPod {
public:
    CPod();
    virtual ~CPod();

    virtual void load();
    virtual int findFile(SFoundFileInfo *found_file_info);
    virtual void mount(char *pod_filename);
    virtual void dismount(char *filename);
    virtual void remount();

    void init();
    void cleanup();
    void initSearch(char *search_pattern, CPodSearchContext *search_context);
    int getNextSearchResult(CPodSearchContext *search_context);
};

} // namespace nocturne::engine
