#include "sound/mp3/filebitstream.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::sound {
namespace {

TEST(CFileBitStream, IsConcrete) {
    static_assert(!std::is_abstract_v<CFileBitStream>);
}

TEST(CFileBitStream, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CFileBitStream::readBit), std::uint32_t (CFileBitStream::*)()>);
    static_assert(std::is_same_v<decltype(&CFileBitStream::readBits),
                                 std::uint32_t (CFileBitStream::*)(int)>);
    static_assert(std::is_same_v<decltype(&CFileBitStream::readFrameHeader),
                                 void (CFileBitStream::*)(SMpegFrameHeader **)>);
    static_assert(std::is_same_v<decltype(&CFileBitStream::readAllocationValues),
                                 void (CFileBitStream::*)(SMpegSubbandAllocation *, SMpegFrame *)>);
    static_assert(std::is_same_v<decltype(&CFileBitStream::readAllocationTable),
                                 void (CFileBitStream::*)(std::uint32_t *, SMpegFrame *)>);
    static_assert(
        std::is_same_v<decltype(&CFileBitStream::readScalefactors),
                       void (CFileBitStream::*)(SMpegSubbandAllocation *,
                                                SMpegSubbandScalefactors *, SMpegFrame *)>);
    static_assert(
        std::is_same_v<decltype(&CFileBitStream::readScaleFactorsSCFSI),
                       void (CFileBitStream::*)(SMpegSubbandSCFSI *, SMpegSubbandAllocation *,
                                                SMpegSubbandScalefactors *, SMpegFrame *)>);
    static_assert(std::is_same_v<decltype(&CFileBitStream::readQuantizedSamples),
                                 void (CFileBitStream::*)(SMpegSubbandScalefactors *,
                                                          SMpegSubbandAllocation *, SMpegFrame *)>);
    static_assert(std::is_same_v<decltype(&CFileBitStream::readQuantizedSamplesGrouped),
                                 void (CFileBitStream::*)(SMpegSubbandScalefactors *,
                                                          SMpegSubbandAllocation *, SMpegFrame *)>);
}

} // namespace
} // namespace nocturne::sound
