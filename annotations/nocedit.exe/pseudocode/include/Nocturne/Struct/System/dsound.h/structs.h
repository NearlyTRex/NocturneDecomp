#pragma once

// Structure: DS3DBUFFER
typedef struct DS3DBUFFER {
    DWORD dwSize;
    D3DVECTOR vPosition;
    D3DVECTOR vVelocity;
    D3DVECTOR vConeOrientation;
    DWORD dwInsideConeAngle;
    DWORD dwOutsideConeAngle;
    long lConeOutsideVolume;
    D3DVALUE flMinDistance;
    D3DVALUE flMaxDistance;
    DWORD dwMode;
} DS3DBUFFER;

// Structure: DS3DLISTENER
typedef struct DS3DLISTENER {
    DWORD dwSize;
    D3DVECTOR vPosition;
    D3DVECTOR vVelocity;
    D3DVECTOR vOrientFront;
    D3DVECTOR vOrientTop;
    D3DVALUE flDistanceFactor;
    D3DVALUE flRolloffFactor;
    D3DVALUE flDopplerFactor;
} DS3DLISTENER;

// Structure: DSBCAPS
typedef struct DSBCAPS {
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwBufferBytes;
    DWORD dwUnlockTransferRate;
    DWORD dwPlayCpuOverhead;
} DSBCAPS;

// Structure: DSBUFFERDESC
typedef struct DSBUFFERDESC {
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwBufferBytes;
    DWORD dwReserved;
    LPWAVEFORMATEX lpwfxFormat;
} DSBUFFERDESC;

// Structure: DSCAPS
typedef struct DSCAPS {
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwMinSecondarySampleRate;
    DWORD dwMaxSecondarySampleRate;
    DWORD dwPrimaryBuffers;
    DWORD dwMaxHwMixingAllBuffers;
    DWORD dwMaxHwMixingStaticBuffers;
    DWORD dwMaxHwMixingStreamingBuffers;
    DWORD dwFreeHwMixingAllBuffers;
    DWORD dwFreeHwMixingStaticBuffers;
    DWORD dwFreeHwMixingStreamingBuffers;
    DWORD dwMaxHw3DAllBuffers;
    DWORD dwMaxHw3DStaticBuffers;
    DWORD dwMaxHw3DStreamingBuffers;
    DWORD dwFreeHw3DAllBuffers;
    DWORD dwFreeHw3DStaticBuffers;
    DWORD dwFreeHw3DStreamingBuffers;
    DWORD dwTotalHwMemBytes;
    DWORD dwFreeHwMemBytes;
    DWORD dwMaxContigFreeHwMemBytes;
    DWORD dwUnlockTransferRateHwBuffers;
    DWORD dwPlayCpuOverheadSwBuffers;
    DWORD dwReserved1;
    DWORD dwReserved2;
} DSCAPS;

// Structure: DSCBCAPS
typedef struct DSCBCAPS {
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwBufferBytes;
    DWORD dwReserved;
} DSCBCAPS;

// Structure: DSCBUFFERDESC
typedef struct DSCBUFFERDESC {
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwBufferBytes;
    DWORD dwReserved;
    LPWAVEFORMATEX lpwfxFormat;
    DWORD dwFXCount;
    LPVOID lpDSCFXDesc;
} DSCBUFFERDESC;

// Structure: DSCCAPS
typedef struct DSCCAPS {
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwFormats;
    DWORD dwChannels;
} DSCCAPS;

// Structure: IDirectSound
typedef struct IDirectSound {
    IDirectSound_vtable* vtable;
} IDirectSound;

// Structure: IDirectSound3DBuffer
typedef struct IDirectSound3DBuffer {
    IDirectSound3DBuffer_vtable* vtable;
} IDirectSound3DBuffer;

// Structure: IDirectSound3DBuffer_vtable
typedef struct IDirectSound3DBuffer_vtable {
    IUnknown_QueryInterface* QueryInterface;
    IUnknown_AddRef* AddRef;
    IUnknown_Release* Release;
    IDirectSound3DBuffer_GetAllParameters* GetAllParameters;
    IDirectSound3DBuffer_GetConeAngles* GetConeAngles;
    IDirectSound3DBuffer_GetConeOrientation* GetConeOrientation;
    IDirectSound3DBuffer_GetConeOutsideVolume* GetConeOutsideVolume;
    IDirectSound3DBuffer_GetMaxDistance* GetMaxDistance;
    IDirectSound3DBuffer_GetMinDistance* GetMinDistance;
    IDirectSound3DBuffer_GetMode* GetMode;
    IDirectSound3DBuffer_GetPosition* GetPosition;
    IDirectSound3DBuffer_GetVelocity* GetVelocity;
    IDirectSound3DBuffer_SetAllParameters* SetAllParameters;
    IDirectSound3DBuffer_SetConeAngles* SetConeAngles;
    IDirectSound3DBuffer_SetConeOrientation* SetConeOrientation;
    IDirectSound3DBuffer_SetConeOutsideVolume* SetConeOutsideVolume;
    IDirectSound3DBuffer_SetMaxDistance* SetMaxDistance;
    IDirectSound3DBuffer_SetMinDistance* SetMinDistance;
    IDirectSound3DBuffer_SetMode* SetMode;
    IDirectSound3DBuffer_SetPosition* SetPosition;
    IDirectSound3DBuffer_SetVelocity* SetVelocity;
} IDirectSound3DBuffer_vtable;

// Structure: IDirectSound3DListener
typedef struct IDirectSound3DListener {
    IDirectSound3DListener_vtable* vtable;
} IDirectSound3DListener;

// Structure: IDirectSound3DListener_vtable
typedef struct IDirectSound3DListener_vtable {
    IUnknown_QueryInterface* QueryInterface;
    IUnknown_AddRef* AddRef;
    IUnknown_Release* Release;
    IDirectSound3DListener_GetAllParameters* GetAllParameters;
    IDirectSound3DListener_GetDistanceFactor* GetDistanceFactor;
    IDirectSound3DListener_GetDopplerFactor* GetDopplerFactor;
    IDirectSound3DListener_GetOrientation* GetOrientation;
    IDirectSound3DListener_GetPosition* GetPosition;
    IDirectSound3DListener_GetRolloffFactor* GetRolloffFactor;
    IDirectSound3DListener_GetVelocity* GetVelocity;
    IDirectSound3DListener_SetAllParameters* SetAllParameters;
    IDirectSound3DListener_SetDistanceFactor* SetDistanceFactor;
    IDirectSound3DListener_SetDopplerFactor* SetDopplerFactor;
    IDirectSound3DListener_SetOrientation* SetOrientation;
    IDirectSound3DListener_SetPosition* SetPosition;
    IDirectSound3DListener_SetRolloffFactor* SetRolloffFactor;
    IDirectSound3DListener_SetVelocity* SetVelocity;
    IDirectSound3DListener_CommitDeferredSettings* CommitDeferredSettings;
} IDirectSound3DListener_vtable;

// Structure: IDirectSoundBuffer
typedef struct IDirectSoundBuffer {
    IDirectSoundBuffer_vtable* vtable;
} IDirectSoundBuffer;

// Structure: IDirectSoundBufferMetadata
typedef struct IDirectSoundBufferMetadata {
    int field_0;
    int field_4;
    int field_8;
    int field_12;
    int ref_count;
} IDirectSoundBufferMetadata;

// Structure: IDirectSoundBuffer_vtable
typedef struct IDirectSoundBuffer_vtable {
    IUnknown_QueryInterface* QueryInterface;
    IUnknown_AddRef* AddRef;
    IUnknown_Release* Release;
    IDirectSoundBuffer_GetCaps* GetCaps;
    IDirectSoundBuffer_GetCurrentPosition* GetCurrentPosition;
    IDirectSoundBuffer_GetFormat* GetFormat;
    IDirectSoundBuffer_GetVolume* GetVolume;
    IDirectSoundBuffer_GetPan* GetPan;
    IDirectSoundBuffer_GetFrequency* GetFrequency;
    IDirectSoundBuffer_GetStatus* GetStatus;
    IDirectSoundBuffer_Initialize* Initialize;
    IDirectSoundBuffer_Lock* Lock;
    IDirectSoundBuffer_Play* Play;
    IDirectSoundBuffer_SetCurrentPosition* SetCurrentPosition;
    IDirectSoundBuffer_SetFormat* SetFormat;
    IDirectSoundBuffer_SetVolume* SetVolume;
    IDirectSoundBuffer_SetPan* SetPan;
    IDirectSoundBuffer_SetFrequency* SetFrequency;
    IDirectSoundBuffer_Stop* Stop;
    IDirectSoundBuffer_Unlock* Unlock;
    IDirectSoundBuffer_Restore* Restore;
} IDirectSoundBuffer_vtable;

// Structure: IDirectSoundCapture
typedef struct IDirectSoundCapture {
    IDirectSoundCapture_vtable* vtable;
} IDirectSoundCapture;

// Structure: IDirectSoundCaptureBuffer
typedef struct IDirectSoundCaptureBuffer {
    IDirectSoundCaptureBuffer_vtable* vtable;
} IDirectSoundCaptureBuffer;

// Structure: IDirectSoundCaptureBuffer_vtable
typedef struct IDirectSoundCaptureBuffer_vtable {
    IUnknown_QueryInterface* QueryInterface;
    IUnknown_AddRef* AddRef;
    IUnknown_Release* Release;
    IDirectSoundCaptureBuffer_GetCaps* GetCaps;
    IDirectSoundCaptureBuffer_GetCurrentPosition* GetCurrentPosition;
    IDirectSoundCaptureBuffer_GetFormat* GetFormat;
    IDirectSoundCaptureBuffer_GetStatus* GetStatus;
    IDirectSoundCaptureBuffer_Initialize* Initialize;
    IDirectSoundCaptureBuffer_Lock* Lock;
    IDirectSoundCaptureBuffer_Start* Start;
    IDirectSoundCaptureBuffer_Stop* Stop;
    IDirectSoundCaptureBuffer_Unlock* Unlock;
} IDirectSoundCaptureBuffer_vtable;

// Structure: IDirectSoundCapture_vtable
typedef struct IDirectSoundCapture_vtable {
    IUnknown_QueryInterface* QueryInterface;
    IUnknown_AddRef* AddRef;
    IUnknown_Release* Release;
    IDirectSoundCapture_CreateCaptureBuffer* CreateCaptureBuffer;
    IDirectSoundCapture_GetCaps* GetCaps;
    IDirectSoundCapture_Initialize* Initialize;
} IDirectSoundCapture_vtable;

// Structure: IDirectSound_vtable
typedef struct IDirectSound_vtable {
    IUnknown_QueryInterface* QueryInterface;
    IUnknown_AddRef* AddRef;
    IUnknown_Release* Release;
    IDirectSound_CreateSoundBuffer* CreateSoundBuffer;
    IDirectSound_GetCaps* GetCaps;
    IDirectSound_DuplicateSoundBuffer* DuplicateSoundBuffer;
    IDirectSound_SetCooperativeLevel* SetCooperativeLevel;
    IDirectSound_Compact* Compact;
    IDirectSound_GetSpeakerConfig* GetSpeakerConfig;
    IDirectSound_SetSpeakerConfig* SetSpeakerConfig;
    IDirectSound_Initialize* Initialize;
} IDirectSound_vtable;

// Structure: tWAVEFORMAT
typedef struct tWAVEFORMAT {
    WORD wFormatTag;
    WORD nChannels;
    DWORD nSamplesPerSec;
    DWORD nAvgBytesPerSec;
    WORD nBlockAlign;
} tWAVEFORMAT;

// Structure: tWAVEFORMATEX
typedef struct tWAVEFORMATEX {
    WORD wFormatTag;
    WORD nChannels;
    DWORD nSamplesPerSec;
    DWORD nAvgBytesPerSec;
    WORD nBlockAlign;
    WORD wBitsPerSample;
    WORD cbSize;
} tWAVEFORMATEX;

