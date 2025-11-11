# Sound System Structures Analysis

**Date**: 2025-01-10
**Focus**: CSfxSlot, CSfxSample, CSfxOptions structures
**Files Analyzed**: `sound/sndmain.cpp`

---

## Executive Summary

The Nocturne sound system uses **plain C structures** (not C++ classes with vtables) despite the 'C' prefix naming convention. The key finding is that **CSfxOptions is a prefix subset** of CSfxSlot - specifically the first 112 bytes (0x70).

**No inheritance or polymorphism** - these are Plain Old Data (POD) types with manual member functions.

---

## Structure Relationships

```
CSfxOptions (112 bytes / 0x70)
    ↓ (is a prefix of)
CSfxSlot (296 bytes / 0x128)
    ├─→ CSfxSample* sample (pointer at 0x78)
    │
    └─→ CSfxOptions occupies bytes [0x0 - 0x6F]

CSfxSample (384 bytes / 0x180)
    ├─→ CSampleInfo embedded at offset 0x4 (284 bytes)
    └─→ CMP3Decoder* mp3_data (pointer at 0x16c)
```

**Key Insight**: CSfxOptions and CSfxSlot share the same memory layout for the first 112 bytes. This is **composition via prefix** - a C technique for struct "inheritance".

---

## CSfxSlot (296 bytes / 0x128)

**File**: `include/Nocturne/Struct/Game/CSfxSlot.h`

### Current Definition (Partially Known)
```cpp
typedef struct CSfxSlot {
    int status;                      // 0x0 - Playback status
    void* sample_data;               // 0x4 - Sample data pointer
    int volume;                      // 0x8 - Volume level
    int position;                    // 0xc - Playback position
    int loop_count;                  // 0x10 - Loop counter
    char field_20[92];               // 0x14 - Unknown fields (many floats/doubles)
    void* dsound_buffer;             // 0x70 - IDirectSoundBuffer*
    int field_116;                   // 0x74 - Active/enabled flag
    CSfxSample* sample;              // 0x78 - Pointer to sample data
    char field_124[156];             // 0x7c - More unknown fields
    int is_active;                   // 0x118 - Slot active flag
    char field_284[12];              // 0x11c - Unknown trailing data
} CSfxSlot;
```

### Detailed Field Analysis (from assembly)

From `CSfxSlot_reset` and `CSfxSlot_compute` functions:

```cpp
typedef struct CSfxSlot {
    // === HEADER (0x0 - 0x13) ===
    int status;                      // 0x0 - 0 = stopped, non-zero = playing
    void* sample_data;               // 0x4 - Cached sample data pointer
    int volume;                      // 0x8 - Master volume
    int position;                    // 0xc - Current playback position
    int loop_count;                  // 0x10 - Number of loops remaining

    // === SPATIAL/AUDIO DATA (0x14 - 0x6F) === 92 bytes
    // This section contains:
    // - 3D position data (doubles at 0x14, 0x1c, 0x24)
    // - Velocity data (doubles at 0x2c, 0x34, 0x3c)
    // - Frequency/pitch (float at 0x44, 0x48)
    // - Delay/timing (double at 0x4c)
    // - Flags (byte at 0x54)
    // - Channel volumes (floats starting around 0x60)
    char field_20[92];               // 0x14 - Complex audio state

    // === CSfxOptions ends here (112 bytes total) ===

    // === DIRECTSOUND INTERFACE (0x70 - 0x7B) ===
    void* dsound_buffer;             // 0x70 - IDirectSoundBuffer*
    int field_116;                   // 0x74 - Buffer valid flag
    CSfxSample* sample;              // 0x78 - Link to sample

    // === COMPUTED/RUNTIME STATE (0x7C - 0x11B) === 156 bytes
    // This section contains computed values:
    // - Effective frequency (float at 0x7c)
    // - Per-channel volumes (floats)
    // - Interpolation state (floats at 0x10c+)
    char field_124[156];             // 0x7c - Runtime computed state

    // === STATUS FLAGS (0x118 - 0x127) ===
    int is_active;                   // 0x118 - Debug/active flag
    char field_284[12];              // 0x11c - Unknown trailing data
} CSfxSlot;
```

### Member Functions (No Vtable!)

**Constructor/Destructor**:
```cpp
CSfxSlot* CSfxSlot_ctor(CSfxSlot* this_ptr) {
    CSfxSlot_reset(this_ptr);  // Initialize all fields
    return this_ptr;
}

CSfxSlot* CSfxSlot_dtor(CSfxSlot* this_ptr) {
    return this_ptr;  // Empty destructor
}
```

**Evidence these are NOT C++ classes**:
1. ❌ No vtable pointer at offset 0x0
2. ❌ Destructor does nothing (no resource cleanup)
3. ❌ Constructor just zeros memory
4. ✅ Plain C-style member function naming: `CSfxSlot_methodName(CSfxSlot* this_ptr)`

### Key Member Functions
```cpp
void CSfxSlot_reset(CSfxSlot* this_ptr);           // Initialize to default state
void CSfxSlot_kill(CSfxSlot* this_ptr);            // Stop playback, cleanup
int CSfxSlot_compute(CSfxSlot* this_ptr);          // Compute 3D audio parameters
void CSfxSlot_mix(CSfxSlot* this_ptr);             // Mix audio for output
void CSfxSlot_pollStream(CSfxSlot* this_ptr);      // Stream next audio chunk
void CSfxSlot_seek(CSfxSlot* this_ptr, int pos);   // Seek to position
```

---

## CSfxOptions (112 bytes / 0x70)

**File**: `include/Nocturne/Struct/Game/CSfxOptions.h`

### Current Definition (Unknown)
```cpp
typedef struct CSfxOptions {
    char field_0[112]; // 0x0 - Currently unknown
} CSfxOptions;
```

### Actual Definition (Derived from CSfxSlot)

**CSfxOptions IS the first 112 bytes of CSfxSlot!**

```cpp
typedef struct CSfxOptions {
    // === Identical to CSfxSlot [0x0 - 0x6F] ===
    int status;                      // 0x0
    void* sample_data;               // 0x4
    int volume;                      // 0x8
    int position;                    // 0xc
    int loop_count;                  // 0x10
    char field_20[92];               // 0x14 - Spatial/audio parameters
    // === Ends at 0x70 (112 bytes) ===
} CSfxOptions;
```

### Evidence

1. **Constructor casts to CSfxSlot**:
   ```cpp
   CSfxOptions* SfxOptions_ctor(CSfxOptions* this_ptr) {
       // Cast to CSfxSlot and call its reset!
       CSfxSlot_reset((CSfxSlot*)this_ptr);
       return this_ptr;
   }
   ```

2. **Size calculation in pushSfxOptions**:
   ```cpp
   // Assembly at 005a8c6b: MOV ECX,0x1c
   // Copies 0x1c (28) DWORDs = 112 bytes
   for (int i = 0; i < 0x1c; i++) {
       dst[i] = src[i];  // Copy 4 bytes each iteration
   }
   ```

3. **Global stack**:
   ```cpp
   CSfxOptions[8] g_SfxOptionsStack;  // at 0x03f624a8
   // Used for push/pop sound options
   ```

### Purpose

**CSfxOptions is a "view" into CSfxSlot** that excludes DirectSound-specific data:
- Stores: Playback parameters, volume, position, 3D audio settings
- Excludes: DirectSound buffer pointer, runtime computed state

This allows **saving/restoring sound options** without disturbing DirectSound state.

---

## CSfxSample (384 bytes / 0x180)

**File**: `include/Nocturne/Struct/Game/CSfxSample.h`

### Current Definition
```cpp
typedef struct CSfxSample {
    char name[4];                    // 0x0 - Sample name (truncated)
    char field_4[284];               // 0x4 - CSampleInfo embedded here
    void* sample_data;               // 0x120 - PCM data buffer
    char field_292[44];              // 0x124 - Loop points, metadata
    int field_336;                   // 0x150 - Unknown flag
    int ref_count;                   // 0x154 - Reference counter
    void* buffer_id;                 // 0x158 - DirectSound buffer ID
    int streaming_slot_index;        // 0x15c - If >= 0, streaming active
    char field_352[12];              // 0x160 - Stream state
    CMP3Decoder* mp3_data;           // 0x16c - MP3 decoder (if streaming)
    int field_368;                   // 0x170 - File offset
    FILE* file_handle;               // 0x174 - File handle (WAV streaming)
    void* field_376;                 // 0x178 - Unknown
    void* sound_buffer;              // 0x17c - DirectSound buffer pointer
} CSfxSample;
```

### Refined Definition (with CSampleInfo)

```cpp
typedef struct CSfxSample {
    // === HEADER (0x0 - 0x3) ===
    char name[4];                    // 0x0 - Sample name

    // === CSampleInfo EMBEDDED (0x4 - 0x11F) === 284 bytes
    struct CSampleInfo {
        // Format information (offsets relative to 0x4):
        // 0x100 (absolute): bit depth (16-bit)
        // 0x104 (absolute): sample rate
        // 0x108 (absolute): bytes per second
        // 0x10c (absolute): total length in samples
        char format_data[284];       // 0x4
    } sample_info;

    // === DATA POINTERS (0x120 - 0x127) ===
    void* sample_data;               // 0x120 - PCM data buffer

    // === LOOP/METADATA (0x124 - 0x14F) ===
    char field_292[44];              // 0x124 - Loop points, flags

    // === RUNTIME STATE (0x150 - 0x17F) ===
    int field_336;                   // 0x150 - Status flag
    int ref_count;                   // 0x154 - Reference count
    void* buffer_id;                 // 0x158 - DirectSound buffer
    int streaming_slot_index;        // 0x15c - Streaming slot (-1 if none)
    char field_352[12];              // 0x160 - Stream decode state
    CMP3Decoder* mp3_data;           // 0x16c - MP3 decoder pointer
    int field_368;                   // 0x170 - File position
    FILE* file_handle;               // 0x174 - File handle
    void* field_376;                 // 0x178 - Unknown
    void* sound_buffer;              // 0x17c - DirectSound IDirectSoundBuffer*
} CSfxSample;
```

### Key Observations

1. **CSampleInfo is NOT a separate structure** - it's embedded at offset 0x4 within CSfxSample
2. **Ghidra defines CSampleInfo as 1 byte** because it couldn't determine the layout
3. **Actual CSampleInfo is 284 bytes** (from 0x4 to 0x11F)

### Member Functions
```cpp
CSfxSample* CSfxSample_ctor(CSfxSample* this_ptr);
CSfxSample* CSfxSample_dtor(CSfxSample* this_ptr);
void CSfxSample_freeMemory(CSfxSample* this_ptr);      // Free all resources
void* CSfxSample_lock(CSfxSample* this_ptr);           // Lock DirectSound buffer
void CSfxSample_releaseSoundBuffer(CSfxSample* this_ptr);
void CSfxSample_seek(CSfxSample* this_ptr, int pos);
```

### Global Array
```cpp
CSfxSample[64] g_SfxSamples;  // at 0x03f6282c
// Pool of 64 sample slots
```

---

## CSampleInfo (284 bytes)

**File**: `include/Nocturne/Struct/Game/CSampleInfo.h`

### Current Definition (Incorrect)
```cpp
typedef struct CSampleInfo {
    // Ghidra thinks this is 1 byte, but it's actually 284 bytes!
} CSampleInfo;
```

### Actual Definition (Embedded in CSfxSample at 0x4)

```cpp
typedef struct CSampleInfo {
    // Audio format information
    char unknown_header[256];        // 0x0 (0x4 absolute) - Unknown metadata
    int bit_depth;                   // 0x100 (0x104 absolute) - Bits per sample (usually 16)
    int sample_rate;                 // 0x104 (0x108 absolute) - Sample rate (Hz)
    int total_samples;               // 0x108 (0x10C absolute) - Total length in samples
    int bytes_per_second;            // 0x10c (0x110 absolute) - Byte rate
    char unknown_footer[12];         // 0x110 - Unknown trailing data
} CSampleInfo;
```

**Note**: Offsets shown are relative to CSampleInfo start (0x4 in CSfxSample).

### Evidence

From `CSfxSlot_compute_FUN_005a7100` line 188:
```cpp
// this_ptr->sample->field1_0x4 + 0x100
// = CSfxSample* + 0x4 + 0x100 = offset 0x104
int bit_depth = *(int*)(this_ptr->sample->field1_0x4 + 0x100);
```

This accesses CSampleInfo at offset 0x100 (256 bytes into the structure).

---

## Composition and Relationships

### No Inheritance - Just Composition!

```
┌──────────────────────────────────────┐
│ CSfxSlot (296 bytes)                 │
│                                      │
│ ┌──────────────────────────────┐    │
│ │ CSfxOptions (112 bytes)      │    │
│ │ - status                     │    │
│ │ - volume                     │    │
│ │ - position                   │    │
│ │ - loop_count                 │    │
│ │ - spatial audio params       │    │
│ └──────────────────────────────┘    │
│                                      │
│ - dsound_buffer                      │
│ - field_116                          │
│ - CSfxSample* sample ────────────┐  │
│ - runtime computed state         │  │
│ - is_active                      │  │
└──────────────────────────────────│───┘
                                   │
                                   ▼
        ┌────────────────────────────────────┐
        │ CSfxSample (384 bytes)             │
        │                                    │
        │ - name[4]                          │
        │ ┌────────────────────────────┐    │
        │ │ CSampleInfo (284 bytes)    │    │
        │ │ - format metadata          │    │
        │ │ - bit_depth                │    │
        │ │ - sample_rate              │    │
        │ │ - total_samples            │    │
        │ └────────────────────────────┘    │
        │ - sample_data (PCM buffer)         │
        │ - ref_count                        │
        │ - CMP3Decoder* mp3_data            │
        │ - FILE* file_handle                │
        └────────────────────────────────────┘
```

### Key Patterns

1. **Prefix Composition**: CSfxOptions is byte-for-byte identical to the first 112 bytes of CSfxSlot
2. **Embedded Composition**: CSampleInfo is embedded within CSfxSample at offset 0x4
3. **Pointer Composition**: CSfxSlot contains `CSfxSample*` pointer, not embedded

---

## No C++ Features

Despite the 'C' prefix suggesting "class", these are **plain C structures**:

| C++ Feature | Present? | Evidence |
|-------------|----------|----------|
| Vtable pointer | ❌ No | No pointer at offset 0x0 |
| Virtual methods | ❌ No | All functions use explicit `this_ptr` |
| Inheritance | ❌ No | Just struct composition |
| Constructors | ✅ Yes | But just initialization functions |
| Destructors | ✅ Yes | But empty (no cleanup) |
| Encapsulation | ❌ No | All fields public |

### Naming Convention

The 'C' prefix likely stands for **"Component"** or is just a naming convention, not C++ class syntax.

Watcom C++ in the late 90s supported C++ features, but Nocturne uses **C-style programming with C++ syntax** for organization.

---

## Function Naming Pattern

All "member functions" follow this pattern:

```cpp
// Pattern: StructName_methodName_FUN_address(StructName* this_ptr, ...)
CSfxSlot* CSfxSlot_ctor(CSfxSlot* this_ptr);
void CSfxSlot_reset(CSfxSlot* this_ptr);
void CSfxSlot_kill(CSfxSlot* this_ptr);
int CSfxSlot_compute(CSfxSlot* this_ptr);
```

This is **manual name mangling** to organize code, not compiler-generated C++ mangling.

---

## Global Arrays

```cpp
// Sound slot pool (64 active sounds maximum)
CSfxSlot[64] g_SfxSlots;           // at 0x03f5164c

// Sound sample cache (64 samples maximum)
CSfxSample[64] g_SfxSamples;       // at 0x03f6282c

// Options stack (8 levels deep)
CSfxOptions[8] g_SfxOptionsStack;  // at 0x03f624a8
int g_SfxLastSlot;                 // at 0x03f624a4 - Stack pointer
```

---

## Usage Patterns

### Sound Options Stack

```cpp
// Save current audio options
void pushSfxOptions() {
    g_SfxLastSlot++;
    if (g_SfxLastSlot >= 8) error("stack full");

    // Copy current options to stack
    memcpy(&g_SfxOptionsStack[g_SfxLastSlot],
           &g_SfxOptionsStack[g_SfxLastSlot - 1],
           sizeof(CSfxOptions));  // 112 bytes
}

// Restore previous audio options
void popSfxOptions() {
    if (g_SfxLastSlot <= 0) error("stack empty");
    g_SfxLastSlot--;
}
```

This allows **hierarchical audio settings** - e.g., temporarily muffling sounds during cutscenes.

### Sample Lifecycle

```cpp
// 1. Allocate sample
CSfxSample* sample = find_free_slot(g_SfxSamples);
CSfxSample_ctor(sample);

// 2. Load audio data (MP3 or WAV)
if (is_mp3) {
    sample->mp3_data = CMP3Decoder_new();
    CMP3Decoder_openFile(sample->mp3_data, filename);
}

// 3. Allocate DirectSound buffer
sample->sound_buffer = DirectSound_allocate(...);

// 4. Play in slot
CSfxSlot* slot = find_free_slot(g_SfxSlots);
slot->sample = sample;
slot->status = PLAYING;

// 5. Stream decode loop
while (playing) {
    CSfxSlot_pollStream(slot);  // Decode next chunk
}

// 6. Cleanup
CSfxSlot_kill(slot);
CSfxSample_freeMemory(sample);
```

---

## Recommendations for Decompilation

### Structure Updates Needed

1. **CSfxOptions.h**: Replace `char field_0[112]` with actual CSfxSlot prefix fields
2. **CSampleInfo.h**: Define the 284-byte structure properly
3. **CSfxSample.h**: Replace `char field_4[284]` with embedded `CSampleInfo` struct
4. **CSfxSlot.h**: Add more specific field types based on usage patterns

### Code Patterns to Match

```cpp
// Use prefix composition for CSfxOptions
typedef struct CSfxOptions {
    int status;
    void* sample_data;
    int volume;
    int position;
    int loop_count;
    char spatial_audio_data[92];
} CSfxOptions;

// CSfxSlot inherits via prefix
typedef struct CSfxSlot {
    // First 112 bytes identical to CSfxOptions
    int status;
    void* sample_data;
    int volume;
    int position;
    int loop_count;
    char spatial_audio_data[92];

    // Additional CSfxSlot-only fields
    void* dsound_buffer;
    int field_116;
    CSfxSample* sample;
    char runtime_state[156];
    int is_active;
    char trailing_data[12];
} CSfxSlot;

// Cast between them safely
CSfxOptions* opts = (CSfxOptions*)slot;  // Always safe due to prefix
```

---

## Conclusion

The Nocturne sound system uses **plain C structures with manual "methods"** rather than true C++ classes. The relationships are:

1. **CSfxOptions** ⊂ **CSfxSlot** (prefix subset)
2. **CSampleInfo** ⊂ **CSfxSample** (embedded at offset 0x4)
3. **CSfxSlot** → **CSfxSample** (pointer composition)

No inheritance, no vtables, no polymorphism - just **well-organized C code with C++ naming conventions**.

---

**Document Version**: 1.0
**Last Updated**: 2025-01-10
