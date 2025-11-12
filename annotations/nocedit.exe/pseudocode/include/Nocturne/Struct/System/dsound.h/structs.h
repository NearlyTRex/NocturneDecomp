#pragma once

// Structure: IDirectSound
typedef struct IDirectSound {
    void** vtable;
} IDirectSound;

// Structure: IDirectSound3DBuffer
typedef struct IDirectSound3DBuffer {
    void* field_0;
} IDirectSound3DBuffer;

// Structure: IDirectSoundBuffer
typedef struct IDirectSoundBuffer {
    void* field_0;
} IDirectSoundBuffer;

// Structure: IDirectSoundBufferMetadata
typedef struct IDirectSoundBufferMetadata {
    int field_0;
    int field_4;
    int field_8;
    int field_12;
    int ref_count;
} IDirectSoundBufferMetadata;

// Structure: IDirectSoundCapture
typedef struct IDirectSoundCapture {
    IDirectSoundCapture_vtable* vtable;
} IDirectSoundCapture;

// Structure: IDirectSoundCapture_vtable
typedef struct IDirectSoundCapture_vtable {
    IUnknown_QueryInterface* QueryInterface;
    IUnknown_AddRef* AddRef;
    IUnknown_Release* Release;
} IDirectSoundCapture_vtable;

