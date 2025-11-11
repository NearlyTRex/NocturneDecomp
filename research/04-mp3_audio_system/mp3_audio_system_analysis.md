# Nocturne MP3 Audio System - Research Document

**Date**: 2025-01-10
**Focus**: `sound/mp3.cpp` and MP3 decoder integration
**Status**: Complete pipeline analysis

---

## Executive Summary

Nocturne uses a custom MPEG Layer 2/3 audio decoder to play MP3 music and sound effects. The decoder converts MP3 data to 16-bit PCM samples, which are then fed to DirectSound for playback. The system supports two modes:

1. **Full decode** - Entire MP3 decoded to PCM on load (for small files/SFX)
2. **Streaming decode** - MP3 decoded in chunks during playback (for background music)

---

## Table of Contents

1. [MP3 Decoder Interface](#mp3-decoder-interface)
2. [Integration Pipeline](#integration-pipeline)
3. [Data Structures](#data-structures)
4. [Function Analysis](#function-analysis)
5. [Reimplementation Strategy](#reimplementation-strategy)

---

## MP3 Decoder Interface

### Core Class: CMP3Decoder

**Location**: `annotations/nocedit.exe/pseudocode/include/Nocturne/Class/Game/CMP3Decoder.h`
**Size**: 0x8630 bytes (34,352 bytes)

```cpp
typedef struct CMP3Decoder {
    char filename[256];                    // 0x0
    int sample_rate;                       // 0x100
    int num_channels;                      // 0x104
    int available_samples;                 // 0x108
    short* decode_buffer_pos;              // 0x10c
    short decode_buffer[2304];             // 0x110
    CMemoryBitStream memory_bitstream;     // 0x1310
    CFileBitStream file_bitstream;         // 0x5320
    int field_21324;                       // 0x534c (unknown)
    float synthesis_v_buffer[2][1024];     // 0x5350 - Polyphase filterbank state
    int synthesis_buffer_index[2];         // 0x7350
    int layer3_scalefactors[45];           // 0x7358
    char field_29708[36];                  // 0x740c (unknown)
    float synthesis_history[2][16][18];    // 0x7430
    char field_32048[2304];                // 0x7d30 (unknown)
} CMP3Decoder;
```

### Public API (Used by Game)

The game engine only calls these functions:

```cpp
// Construction/Destruction
CMP3Decoder* CMP3Decoder::ctor(CMP3Decoder* this_ptr);
CMP3Decoder* CMP3Decoder::dtor(CMP3Decoder* this_ptr);

// File Operations
void CMP3Decoder::openFile(CMP3Decoder* this_ptr, char* filename);
void CMP3Decoder::free(CMP3Decoder* this_ptr);

// Decoding Operations
int CMP3Decoder::read(CMP3Decoder* this_ptr, short* output_buffer, int samples_requested);
int CMP3Decoder::seek(CMP3Decoder* this_ptr, int sample_offset);
int CMP3Decoder::getTotalSamples(CMP3Decoder* this_ptr);

// Metadata
int CMP3Decoder::parseHeader(CMP3Decoder* this_ptr, FILE* file_handle, int file_size);
```

**Key Observations**:
- `read()` is the main interface - converts MP3 frames to 16-bit PCM samples
- Returns **actual number of samples decoded** (may be less than requested at EOF)
- Output buffer must be pre-allocated by caller
- Thread-safe: Each CMP3Decoder instance maintains its own state

---

## Integration Pipeline

### Entry Points

1. **Preprocessing** (startup): `core_fileman.cpp_preprocessMusicFiles_FUN_004bd750`
   - Calls `convertMp3ToSfxMetadata_FUN_005acf20`
   - Generates `.sfx` metadata files for MP3s

2. **Loading**: `sound_sndmain.cpp_ReadingOrDecodingSoundFile_FUN_005a4c80`
   - Determines file type (.wav vs .mp3)
   - Routes to appropriate decoder

3. **Streaming**: `sound_sndmain.cpp_SfxSlot_pollStream_FUN_005a6730`
   - Called regularly during playback
   - Decodes next chunk for large files

### Complete Data Flow

```
┌──────────────────────────────────────────────────────────────┐
│ GAME ASSET LOADING                                           │
└──────────────────────────────────────────────────────────────┘
                          ↓
         ┌────────────────┴────────────────┐
         │ Check file extension            │
         └────────────────┬────────────────┘
                          ↓
              ┌───────────┴───────────┐
              │                       │
           .wav                     .mp3
              │                       │
              ↓                       ↓
    ┌─────────────────┐    ┌─────────────────────┐
    │ WAV Reader      │    │ CMP3Decoder         │
    │ (not analyzed)  │    │                     │
    └────────┬────────┘    │ ::ctor()            │
             │             │ ::openFile()        │
             │             │ ::parseHeader()     │
             │             └──────────┬──────────┘
             │                        │
             └────────────────────────┘
                          ↓
            ┌─────────────┴─────────────┐
            │ Determine playback mode   │
            └─────────────┬─────────────┘
                          ↓
         ┌────────────────┴────────────────┐
         │                                 │
   SMALL FILE                        LARGE FILE
   (< threshold)                     (>= threshold)
         │                                 │
         ↓                                 ↓
┌─────────────────────┐       ┌─────────────────────────┐
│ FULL DECODE MODE    │       │ STREAMING MODE          │
│                     │       │                         │
│ 1. Allocate buffer  │       │ 1. Store CMP3Decoder*   │
│ 2. Decode entire    │       │    in SfxSample         │
│    MP3 to PCM       │       │ 2. Allocate circular    │
│ 3. Store in         │       │    buffer               │
│    DirectSound      │       │ 3. Start playback       │
└──────────┬──────────┘       └──────────┬──────────────┘
           │                              │
           ↓                              ↓
   ┌──────────────┐              ┌───────────────────┐
   │ Play via     │              │ Streaming Loop    │
   │ DirectSound  │              │                   │
   └──────────────┘              │ Every frame:      │
                                 │ 1. Check buffer   │
                                 │ 2. Decode chunk   │
                                 │ 3. Write to       │
                                 │    DirectSound    │
                                 └───────────────────┘
```

### Mode 1: Full Decode (Small Files)

**File**: `sound_sndmain.cpp` lines 210-247

```cpp
// Example: Sound effect loading
sound_mp3_cpp_CMP3Decoder_openFile_FUN_00534550(
    (CMP3Decoder *)&DAT_03f49010,   // Global decoder instance
    filename
);

// Set output format: 16-bit PCM
pSVar8->field1_0x4[0x100] = 0x10;  // 16 bits per sample

// Allocate DirectSound buffer (full size)
sound_sndmain_cpp_ReallocSomething_FUN_005a6170();

// Decode ENTIRE MP3 in one call
int samples_decoded = sound_mp3_cpp_CMP3Decoder_read_FUN_00534a60(
    (CMP3Decoder *)&DAT_03f49010,
    output_buffer,        // DirectSound locked buffer
    total_samples         // Decode everything
);

// Result: Complete PCM data ready for playback
```

**Characteristics**:
- Uses global `CMP3Decoder` instance at `DAT_03f49010`
- Single `read()` call decodes entire file
- Higher memory usage, but simpler playback
- Suitable for: Sound effects, short music cues

### Mode 2: Streaming (Large Files)

**File**: `sound_sndmain.cpp` lines 244-262 in `SfxSlot_pollStream`

```cpp
// Streaming decode loop (called every frame)
if ((CMP3Decoder *)param_5->mp3_data != NULL) {
    // Decode only what's needed NOW
    sound_mp3_cpp_CMP3Decoder_read_FUN_00534a60(
        (CMP3Decoder *)param_5->mp3_data,  // Per-sample decoder
        output_buffer,                      // Temporary buffer (0x3c00 bytes)
        samples_requested                   // Small chunk (e.g., 256 samples)
    );

    // Lock DirectSound circular buffer
    void* ds_buffer = sound_sndmain_cpp_SfxSample_lock_FUN_005a6430();

    // Copy decoded PCM to DirectSound
    memcpy(ds_buffer, output_buffer, samples_decoded * bytes_per_sample);

    // Unlock DirectSound buffer
    sound_sndmain_cpp_SfxSample_releaseSoundBuffer_FUN_005a6540();
}
```

**Characteristics**:
- Keeps `CMP3Decoder*` in `SfxSample.mp3_data` field
- Decodes small chunks (typically 256-1024 samples)
- Uses circular buffer in DirectSound
- Lower memory usage, continuous decoding
- Suitable for: Background music, long tracks

---

## Data Structures

### SfxSample (384 bytes)

**Location**: `include/Nocturne/Struct/Game/SfxSample.h`

```cpp
typedef struct SfxSample {
    char name[4];                    // 0x0 - Sample name (truncated)
    char field1_0x4[284];            // 0x4 - Format metadata
                                     //       Contains: sample_rate, channels, bit_depth
    void* sample_data;               // 0x120 - PCM data buffer (full decode mode)
    char field_292[44];              // 0x124 - Loop points, flags
    int field_150;                   // 0x150 - Status flags
    int ref_count;                   // 0x154 - Reference counter
    void* buffer_id;                 // 0x158 - DirectSound buffer ID
    int streaming_slot_index;        // 0x15c - If >= 0, streaming active
    char field_160[12];              // 0x160 - Stream state
    void* mp3_data;                  // 0x16c - CMP3Decoder* (streaming mode)
    int field_368;                   // 0x170 - File offset
    FILE* file_handle;               // 0x174 - For WAV streaming
    void* field_376;                 // 0x178 - Unknown
    void* sound_buffer;              // 0x17c - DirectSound buffer pointer
} SfxSample;
```

**Key Fields**:
- `mp3_data` (0x16c): If non-NULL, contains `CMP3Decoder*` for streaming
- `streaming_slot_index` (0x15c): If >= 0, sample is actively streaming
- `buffer_id` (0x158): DirectSound buffer handle

### SfxSlot (296 bytes)

**Location**: `include/Nocturne/Struct/Game/SfxSlot.h`

```cpp
typedef struct SfxSlot {
    int status;                      // 0x0 - Playing/stopped
    void* sample_data;               // 0x4 - Sample data pointer
    int volume;                      // 0x8 - Volume level
    int position;                    // 0xc - Playback position
    int loop_count;                  // 0x10 - Loop counter
    char field_20[92];               // 0x14 - Additional state
    void* dsound_buffer;             // 0x70 - IDirectSoundBuffer*
    int field_116;                   // 0x74 - Active flag
    SfxSample* sample;               // 0x78 - Link to sample
    char field_124[156];             // 0x7c - More state
    int is_active;                   // 0x118 - Slot active
    char field_284[12];              // 0x11c - Unknown
} SfxSlot;
```

**Global Array**: `g_SfxSlots[64]` at address `0x03f5164c`

---

## Function Analysis

### Analyzed Functions

#### 1. `sound_mp3.cpp_FUN_005303a0` (Address: 0x005303a0)

**Status**: Unused dead code
**Proposed Name**: `applyScalefactorsToLayer2Samples`

**Purpose**: Applies MPEG scalefactors to subband samples for Layer 2 decoding.

**Analysis**:
- Iterates through 32 subbands
- Multiplies each sample by scalefactor from `g_MpegScalefactorTable`
- Uses stride of 0x180 (384) bytes
- **No cross-references found** - likely replaced by Layer 3 version

**Signature**:
```cpp
void sound_mp3.cpp_applyScalefactorsToLayer2Samples_FUN_005303a0(
    float* sample_array,
    int* scalefactor_indices,
    SMpegFrame* frame_info
);
```

**Calling Convention**: `__cdecl`

---

#### 2. `sound_mp3.cpp_FUN_00530400` (Address: 0x00530400)

**Status**: Unused dead code (replaced by inline version)
**Proposed Name**: `initializeSynthesisDctTable`

**Purpose**: Initializes the MPEG synthesis DCT (Discrete Cosine Transform) coefficient table for the polyphase filterbank.

**Analysis**:
- Computes DCT coefficients: `cos(col * (row * π/64 + π/4))`
- Output: `float[64][32]` matrix
- Uses scale-round-rescale technique for precision (multiply by 1e9, round, divide by 1e-9)
- **Identical logic exists inline** in `CMP3Decoder_synthesisFilterbank_FUN_005304f0` (lines 57-89)
- Likely inlined for performance optimization

**Signature**:
```cpp
void sound_mp3.cpp_initializeSynthesisDctTable_FUN_00530400(
    float (*output_dct_table)[32]
);
```

**Calling Convention**: `__cdecl`

**Mathematical Background**:
This implements the IMDCT (Inverse Modified DCT) for MPEG audio synthesis, converting 32 frequency-domain subband samples to time-domain PCM.

---

### Active MP3 Functions Summary

| Function | Purpose | Called By |
|----------|---------|-----------|
| `CMP3Decoder_ctor` | Initialize decoder state | Asset loading |
| `CMP3Decoder_dtor` | Clean up decoder | Asset unloading |
| `CMP3Decoder_openFile` | Open MP3 file, initialize bitstream | Both modes |
| `CMP3Decoder_parseHeader` | Read MP3 header, extract metadata | Both modes |
| `CMP3Decoder_read` | **Decode MP3 frames to PCM** | Both modes |
| `CMP3Decoder_seek` | Seek to sample position | Streaming |
| `CMP3Decoder_getTotalSamples` | Get total sample count | Full decode |
| `CMP3Decoder_free` | Close file, free resources | Both modes |
| `CMP3Decoder_decodeFrame` | Internal frame decoder | `read()` |
| `CMP3Decoder_synthesisFilterbank` | IMDCT + polyphase filter | `decodeFrame()` |

---

## Reimplementation Strategy

### Black Box Interface

For reimplementation, you only need to provide the **public API** with the same behavior:

```cpp
class CMP3Decoder {
public:
    // Required interface
    void openFile(const char* filename);
    int read(short* output_buffer, int samples_requested);
    int seek(int sample_offset);
    int getTotalSamples();
    void free();

    // Metadata
    int getSampleRate() const;
    int getNumChannels() const;
};
```

### Recommended Replacement Libraries

You can use any modern MP3 decoder that provides PCM output:

#### Option 1: **dr_mp3** (Recommended)
- **Pros**: Single-header, public domain, no dependencies
- **Interface**: Matches closely, easy drop-in replacement
- **Repository**: https://github.com/mackron/dr_libs

```cpp
#include "dr_mp3.h"

class CMP3Decoder {
    drmp3 mp3;

    void openFile(const char* filename) {
        drmp3_init_file(&mp3, filename, NULL);
    }

    int read(short* output_buffer, int samples_requested) {
        return drmp3_read_pcm_frames_s16(&mp3, samples_requested, output_buffer);
    }
};
```

#### Option 2: **minimp3**
- **Pros**: Small, fast, minimal dependencies
- **Repository**: https://github.com/lieff/minimp3

#### Option 3: **SDL_mixer** (if using SDL)
- **Pros**: Integrated with SDL audio system
- **Cons**: Heavier dependency, less control

#### Option 4: **FFmpeg libavcodec**
- **Pros**: Supports all formats, production-ready
- **Cons**: Large dependency, complex API

### Implementation Notes

**What you need to match**:
1. ✅ **Output format**: 16-bit signed PCM samples (interleaved for stereo)
2. ✅ **Return value**: Actual samples decoded (not bytes)
3. ✅ **Behavior**: Return less than requested at EOF
4. ✅ **State**: Maintain decode position between calls

**What you DON'T need to match**:
- ❌ Internal data structures (CFileBitStream, synthesis buffers, etc.)
- ❌ Exact MPEG algorithm implementation
- ❌ Internal function names/structure
- ❌ 34KB decoder state size

### Integration Points

Replace calls in these files:

1. **`sound/sndmain.cpp`**:
   - `ReadingOrDecodingSoundFile_FUN_005a4c80` (line 210)
   - `SfxSlot_pollStream_FUN_005a6730` (line 260)
   - `convertMp3ToSfxMetadata_FUN_005acf20` (line 118)

2. **Keep DirectSound integration** (or replace with modern audio API):
   - Buffer management is separate from MP3 decoding
   - PCM data from decoder → audio API buffer

### Example Modern Integration

```cpp
// Modern SDL2 + dr_mp3 example
class MP3Sample {
    drmp3 decoder;
    SDL_AudioStream* stream;

    void load(const char* filename) {
        drmp3_init_file(&decoder, filename, NULL);

        // Create SDL audio stream for resampling/format conversion
        stream = SDL_NewAudioStream(
            AUDIO_S16SYS,              // PCM 16-bit
            decoder.channels,
            decoder.sampleRate,
            AUDIO_S16SYS,
            2,                         // Output stereo
            44100                      // Output sample rate
        );
    }

    void streamChunk() {
        short buffer[4096];
        int samples = drmp3_read_pcm_frames_s16(&decoder, 2048, buffer);
        SDL_AudioStreamPut(stream, buffer, samples * sizeof(short) * 2);
    }
};
```

---

## Additional Findings

### Global Variables

**MP3-related globals** (from `include/globals.h`):

```cpp
extern void*[4][4] g_MpegLayer2AllocationTables;      // 0x67d748
extern int g_MpegSynthesisTableInitialized;           // Initialization flag
extern int g_Mp3AntiAliasInitialized;                 // AA table flag
extern int g_Mp3SynthesisTablesInitialized;           // DCT table flag
extern int[2][3][15] g_MpegBitrateTable;              // Bitrate lookup
extern double[64] g_MpegScalefactorTable;             // Scalefactor table
extern double[2][4] g_MpegSampleRateTable;            // Sample rate table
extern float[64][32] g_MpegSynthesisDctTable;         // DCT coefficients
extern SHuffmanTable[34] g_HuffmanTables;             // Layer 3 Huffman tables
```

### Structure Completeness

All analyzed structures are **byte-complete** with no unknown gaps:
- ✅ `CMP3Decoder` - Some unknown fields, but not accessed in code
- ✅ `CFileBitStream` - Complete (44 bytes)
- ✅ `CMemoryBitStream` - Complete (16,400 bytes)
- ✅ `SMpegFrame` - Complete (28 bytes)
- ✅ `SfxSample` - Complete (384 bytes)
- ✅ `SfxSlot` - Complete (296 bytes)

### Calling Conventions

**All MP3 functions use `__cdecl`** (not Watcom's default `__watcallRegister`):
- Parameters on stack, right-to-left
- Caller cleans up stack
- Consistent with Nocturne project settings

---

## Conclusion

The Nocturne MP3 audio system is a **well-designed streaming architecture** with two playback modes optimized for different use cases. The custom MPEG decoder can be completely replaced with modern libraries (dr_mp3, minimp3, etc.) as long as the public interface contract is maintained:

**Contract**: `CMP3Decoder::read(short* buffer, int samples) → int samples_decoded`

The decoder outputs industry-standard 16-bit PCM, making it trivial to integrate with modern audio APIs (SDL2, OpenAL, miniaudio, etc.).

---

## References

- **MPEG Audio Specification**: ISO/IEC 11172-3 (MPEG-1 Audio Layer II/III)
- **Polyphase Filterbank**: Standard 32-band PQMF used in MPEG audio
- **Watcom C++ Calling Conventions**: https://open-watcom.github.io/
- **DirectSound API**: Microsoft DirectX 7.0 (late 1990s)

---

## Appendix: File Structure

```
annotations/nocedit.exe/pseudocode/
├── src/sound/mp3.cpp/              # MP3 decoder implementation (~50 functions)
│   ├── CMP3Decoder_ctor_FUN_005344f0.cpp
│   ├── CMP3Decoder_read_FUN_00534a60.cpp
│   ├── CMP3Decoder_decodeFrame_FUN_00534d40.cpp
│   └── ...
├── src/sound/sndmain.cpp/          # Sound system integration
│   ├── ReadingOrDecodingSoundFile_FUN_005a4c80.cpp
│   ├── SfxSlot_pollStream_FUN_005a6730.cpp
│   └── ...
├── src/sound/snddx.cpp/            # DirectSound wrapper
│   ├── DirectSoundDevice_allocateSfx_FUN_005af410.cpp
│   └── ...
├── include/Nocturne/Class/Game/
│   ├── CMP3Decoder.h
│   ├── CFileBitStream.h
│   └── CMemoryBitStream.h
└── include/Nocturne/Struct/Game/
    ├── SfxSample.h
    ├── SfxSlot.h
    └── SMpegFrame.h
```

---

**Document Version**: 1.0
**Last Updated**: 2025-01-10
**Contributors**: Analysis performed via disassembly and cross-referencing
