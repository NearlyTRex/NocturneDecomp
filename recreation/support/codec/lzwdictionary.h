#pragma once

#include "support/fwd.h"

#include <istream>
#include <ostream>

namespace nocturne::support {

class CLZWDictionary {
public:
    CLZWDictionary();
    ~CLZWDictionary();

    void init(int new_dict_size, int new_num_bits);
    int findCode(int search_code, int start_index);
    int addNode(int code, int parent_index);
    int readCodeFromStream(SBitBuffer *bit_buffer, std::istream *istream, int *bytes_remaining);
    int readCodeFromBuffer(SBitBuffer *bit_buffer, char **input_buffer, int *bytes_remaining);
    void writeCodeBits(int code_value, SBitBuffer *bit_buffer, std::ostream *ostream);
    int writeCodeSequence(int code, std::ostream *ostream);
    int decodeCodeToBuffer(int code, char **buffer_ptr_ptr);
};

} // namespace nocturne::support
