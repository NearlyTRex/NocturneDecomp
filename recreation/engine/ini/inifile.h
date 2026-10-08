#pragma once

#include "engine/fwd.h"

namespace nocturne::engine {

class CIniFile {
public:
    CIniFile(char *filename, char *section);

    void readIniHeader(char *section);
    void getString(char *key, char *output_buffer, int buffer_size);
    void setString(char *key, char *value);
    void getInteger(char *key_name, int *value_ptr);
    void setInteger(char *key, int value);
    void getFloat(char *key, float *output);
    void setFloatValue(char *key, float value);
};

} // namespace nocturne::engine
