#pragma once

#include "support/codec/codec.h"
#include "support/fwd.h"

#include <istream>
#include <ostream>

namespace nocturne::support {

class CLZWCompress : public CCodec {
public:
    CLZWCompress(int buffer_size, int num_bits);
    ~CLZWCompress() override;

    void init() override;
    int process(std::istream *istream, int *byte_count, std::ostream *ostream) override;
    int finalize(std::ostream *ostream) override;
};

} // namespace nocturne::support
