#pragma once

namespace nocturne::engine {

class CIni {
public:
    int getProfileString(char *section, char *key, char *default_value, char *output_buffer,
                         int buffer_size, char *filename);
    int writeProfileString(char *section, char *key, char *value, char *filename);
};

} // namespace nocturne::engine
