#pragma once

#include "engine/fwd.h"

namespace nocturne::engine {

class CPodFile {
public:
    CPodFile();
    ~CPodFile();

    int mountFromFile(char *pod_filename);
    void cleanup();
    int findFileIndex(char *filename);
    void populateFileInfo(int file_index, SFoundFileInfo *output_info);
    int verifyChecksum();
};

} // namespace nocturne::engine
