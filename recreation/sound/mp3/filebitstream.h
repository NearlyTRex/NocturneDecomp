#pragma once

#include "sound/fwd.h"

#include <cstdint>

namespace nocturne::sound {

class CFileBitStream {
public:
    std::uint32_t readBit();
    std::uint32_t readBits(int num_bits);
    void readFrameHeader(SMpegFrameHeader **header_out);
    void readAllocationValues(SMpegSubbandAllocation *output_allocation, SMpegFrame *frame);
    void readAllocationTable(std::uint32_t *output_array, SMpegFrame *frame);
    void readScalefactors(SMpegSubbandAllocation *allocation_indices,
                          SMpegSubbandScalefactors *scalefactors, SMpegFrame *frame);
    void readScaleFactorsSCFSI(SMpegSubbandSCFSI *scfsi_array,
                               SMpegSubbandAllocation *allocation_array,
                               SMpegSubbandScalefactors *scalefactor_array, SMpegFrame *frame);
    void readQuantizedSamples(SMpegSubbandScalefactors *quantized_samples,
                              SMpegSubbandAllocation *allocation, SMpegFrame *frame);
    void readQuantizedSamplesGrouped(SMpegSubbandScalefactors *sample_array,
                                     SMpegSubbandAllocation *allocation_array, SMpegFrame *frame);
};

} // namespace nocturne::sound
