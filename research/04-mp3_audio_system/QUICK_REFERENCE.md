# MP3 Audio System - Quick Reference

## TL;DR

**What it does**: Decodes MP3 files to 16-bit PCM for DirectSound playback.

**Two modes**:
1. **Full decode** - Decode entire MP3 on load (small files)
2. **Streaming** - Decode chunks during playback (large files)

**For reimplementation**: Replace with dr_mp3, minimp3, or any library that outputs 16-bit PCM.

---

## Critical Interface

```cpp
class CMP3Decoder {
    // Only these functions are called by the game:
    void openFile(const char* filename);
    int read(short* pcm_buffer, int samples_requested);
    int seek(int sample_offset);
    int getTotalSamples();
    void free();
};
```

**Return value**: `read()` returns **number of samples decoded** (not bytes).

---

## Data Flow

```
MP3 File → CMP3Decoder::read() → 16-bit PCM samples → DirectSound buffer → Play
```

---

## Integration Points

1. `sound/sndmain.cpp:ReadingOrDecodingSoundFile` - Loads sounds
2. `sound/sndmain.cpp:SfxSlot_pollStream` - Streams during playback
3. `sound/snddx.cpp:DirectSoundDevice_*` - DirectSound interface

---

## Replacement Strategy

### Using dr_mp3 (Recommended)

```cpp
#include "dr_mp3.h"

class CMP3Decoder {
private:
    drmp3 mp3;

public:
    void openFile(const char* filename) {
        drmp3_init_file(&mp3, filename, NULL);
    }

    int read(short* output_buffer, int samples_requested) {
        // Returns actual samples decoded
        return drmp3_read_pcm_frames_s16(&mp3, samples_requested, output_buffer);
    }

    int getSampleRate() { return mp3.sampleRate; }
    int getNumChannels() { return mp3.channels; }
};
```

---

## Key Structures

### SfxSample (384 bytes)
```cpp
struct SfxSample {
    char name[4];
    // ... format metadata ...
    void* mp3_data;              // CMP3Decoder* for streaming
    int streaming_slot_index;    // >= 0 if streaming
    void* sound_buffer;          // DirectSound buffer
};
```

### Output Format
- **Format**: 16-bit signed PCM
- **Interleaved**: Stereo = [L, R, L, R, ...]
- **Byte order**: Little-endian (x86)
- **Sample rate**: Variable (typically 22050 or 44100 Hz)

---

## Unnamed Functions Found

1. **FUN_005303a0** → `applyScalefactorsToLayer2Samples` (unused)
2. **FUN_00530400** → `initializeSynthesisDctTable` (unused, inlined)

Both are dead code, not called by the game.

---

## Further Reading

See `mp3_audio_system_analysis.md` for complete technical analysis.
