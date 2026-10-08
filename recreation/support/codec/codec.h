#pragma once

#include "support/fwd.h"

#include <istream>
#include <ostream>

namespace nocturne::support {

class CCodec {
public:
    CCodec();
    virtual ~CCodec();

    virtual void init();
    virtual int process(std::istream *istream, int *byte_count, std::ostream *ostream);
    virtual int finalize(std::ostream *ostream);
    virtual int processToBuffer(std::istream *ifstream, int *byte_count, char *output_buffer,
                                int *output_size, int enable_finalize);
    virtual int processFromBuffer(char *input, int *input_length, std::ostream *ostream);
    virtual int processBuffer(char *input, int *input_length, char *output, int *output_length,
                              int enable_callback);
    virtual int processFiles(char *input_file_path, char *output_file_path);
    virtual int finalizeBuffer(char *buffer_ptr, int *buffer_size_ptr);
};

} // namespace nocturne::support
