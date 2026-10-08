#pragma once

#include "support/codec/codec.h"
#include "support/fwd.h"

#include <istream>
#include <ostream>

namespace nocturne::support {

class CLZWDecompress : public CCodec {
public:
    CLZWDecompress(int buffer_size, int initial_bits);
    ~CLZWDecompress() override;

    void init() override;
    int process(std::istream *istream, int *byte_count, std::ostream *ostream) override;
    int finalize(std::ostream *ostream) override;
    int processBuffer(char *input, int *input_length, char *output, int *output_length,
                      int enable_callback) override;
};

} // namespace nocturne::support
