#pragma once

#include "engine/fwd.h"
#include "sound/fwd.h"
#include "sound/sndmain/sampleinfo.h"

#include <cstddef>
#include <memory>
#include <vector>

namespace nocturne::sound {

// A sound the voices play from: held whole in memory and shared by every voice playing it, or
// streamed for the one voice that started it.
class CSfxSample {
public:
    CSfxSample();
    ~CSfxSample();
    CSfxSample(const CSfxSample &) = delete;
    CSfxSample &operator=(const CSfxSample &) = delete;
    CSfxSample(CSfxSample &&) = delete;
    CSfxSample &operator=(CSfxSample &&) = delete;

    // Releasing one a voice still plays is fatal.
    void freeMemory();
    // The loop marker beside the sample (a .klp file) and its settings (a .sfx file).
    void parseConfigFile(const engine::CDosIo &dos_io);
    [[nodiscard]] int getBytesPerFrame() const;
    // A looping sample's position wraps into its length; any other one stops at its ends.
    [[nodiscard]] double normalizePlaybackPos(double position, EPlaybackPosType input_type) const;
    // What it holds against the sound memory budget: its data at the size the file stores it,
    // which is what the budget was set for, or a streamed one's buffer.
    [[nodiscard]] std::size_t getMemorySize() const;
    // The original's ring buffer for a streamed sample, two seconds at the file's size, which the
    // budget counts.
    [[nodiscard]] std::size_t getStreamBufferSize() const;

    CSampleInfo sample_info;
    // Whether it repeats (the name is Ghidra's).
    bool loop_marker_count = false;
    int ref_count = 0;
    // The slot a streamed sample plays in; -1 for one held in memory.
    int streaming_slot_index = -1;
    // In [-1, 1], channels interleaved: the mixer loses a sample's last read in any other format.
    std::vector<float> sample_data;
    std::unique_ptr<CSfxStream> stream;

private:
    static constexpr std::size_t kStreamBufferSeconds = 2;

    void freeSampleData();
};

} // namespace nocturne::sound
