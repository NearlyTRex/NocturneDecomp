#pragma once

// Structure: IDirectSound
typedef struct IDirectSound {
    void** vtable;
} IDirectSound;

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

