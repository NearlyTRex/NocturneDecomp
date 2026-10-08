#pragma once

#include "engine/fwd.h"

namespace nocturne::engine {

class CFileFinder {
public:
    CFileFinder();
    ~CFileFinder();

    int openSearch(char *search_pattern);
    int findNext();
    void closeSearch();
};

} // namespace nocturne::engine
