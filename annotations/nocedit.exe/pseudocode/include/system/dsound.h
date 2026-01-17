#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/d3d.h"
#include "system/mmsystem.h"
#include "system/unknwn.h"
#include "system/winbase.h"
#include "system/winnt.h"
#include "system/winuser.h"

// =============================================================================
// DSOUND - System Header
// =============================================================================

// Forward declarations
struct D3DVECTOR;
struct IDirectSound3DBuffer;
struct IDirectSound3DBuffer_vtable;
struct IDirectSound3DListener;
struct IDirectSound3DListener_vtable;
struct IDirectSoundBuffer_vtable;
struct IDirectSoundCapture;
struct IDirectSoundCaptureBuffer;
struct IDirectSoundCaptureBuffer_vtable;
struct IDirectSoundCapture_vtable;
struct IDirectSound_vtable;
struct IUnknown;

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

// Structure: IDirectSoundBufferMetadata
typedef struct IDirectSoundBufferMetadata {
    int field_0;
    int field_4;
    int field_8;
    int field_12;
    int ref_count;
} IDirectSoundBufferMetadata;

// Function Definition: IDirectSoundBuffer_GetCaps
typedef int (*IDirectSoundBuffer_GetCaps)(void* this_ptr, void* pDSBufferCaps);

// Typedef: LPDIRECTSOUND
// pointer to IDirectSound
typedef struct IDirectSound* LPDIRECTSOUND;

// Function Definition: DirectSoundCreate
typedef HRESULT (*DirectSoundCreate)(LPGUID lpGuid, LPDIRECTSOUND* ppDS, LPUNKNOWN pUnkOuter);

// Typedef: LPDIRECTSOUNDBUFFER
// pointer to IDirectSoundBuffer
typedef struct IDirectSoundBuffer* LPDIRECTSOUNDBUFFER;

// Typedef: LPDIRECTSOUNDCAPTURE
// pointer to IDirectSoundCapture
typedef struct IDirectSoundCapture* LPDIRECTSOUNDCAPTURE;

// Typedef: LPDIRECTSOUNDCAPTUREBUFFER
// pointer to IDirectSoundCaptureBuffer
typedef struct IDirectSoundCaptureBuffer* LPDIRECTSOUNDCAPTUREBUFFER;

// Typedef: LPDS3DBUFFER
// pointer to DS3DBUFFER
typedef struct DS3DBUFFER* LPDS3DBUFFER;

// Function Definition: IDirectSound3DBuffer_GetAllParameters
typedef HRESULT (*IDirectSound3DBuffer_GetAllParameters)(struct IDirectSound3DBuffer* this_ptr, LPDS3DBUFFER pDs3dBuffer);

// Function Definition: IDirectSound3DBuffer_GetConeAngles
typedef HRESULT (*IDirectSound3DBuffer_GetConeAngles)(struct IDirectSound3DBuffer* this_ptr, LPDWORD pdwInsideConeAngle, LPDWORD pdwOutsideConeAngle);

// Function Definition: IDirectSound3DBuffer_GetConeOrientation
typedef HRESULT (*IDirectSound3DBuffer_GetConeOrientation)(struct IDirectSound3DBuffer* this_ptr, struct D3DVECTOR* pvOrientation);

// Function Definition: IDirectSound3DBuffer_GetConeOutsideVolume
typedef HRESULT (*IDirectSound3DBuffer_GetConeOutsideVolume)(struct IDirectSound3DBuffer* this_ptr, LPLONG plConeOutsideVolume);

// Function Definition: IDirectSound3DBuffer_GetMaxDistance
typedef HRESULT (*IDirectSound3DBuffer_GetMaxDistance)(struct IDirectSound3DBuffer* this_ptr, D3DVALUE* pflMaxDistance);

// Function Definition: IDirectSound3DBuffer_GetMinDistance
typedef HRESULT (*IDirectSound3DBuffer_GetMinDistance)(struct IDirectSound3DBuffer* this_ptr, D3DVALUE* pflMinDistance);

// Function Definition: IDirectSound3DBuffer_GetMode
typedef HRESULT (*IDirectSound3DBuffer_GetMode)(struct IDirectSound3DBuffer* this_ptr, LPDWORD pdwMode);

// Function Definition: IDirectSound3DBuffer_GetPosition
typedef HRESULT (*IDirectSound3DBuffer_GetPosition)(struct IDirectSound3DBuffer* this_ptr, struct D3DVECTOR* pvPosition);

// Function Definition: IDirectSound3DBuffer_GetVelocity
typedef HRESULT (*IDirectSound3DBuffer_GetVelocity)(struct IDirectSound3DBuffer* this_ptr, struct D3DVECTOR* pvVelocity);

// Function Definition: IDirectSound3DBuffer_SetAllParameters
typedef HRESULT (*IDirectSound3DBuffer_SetAllParameters)(struct IDirectSound3DBuffer* this_ptr, LPDS3DBUFFER pcDs3dBuffer, DWORD dwApply);

// Function Definition: IDirectSound3DBuffer_SetConeAngles
typedef HRESULT (*IDirectSound3DBuffer_SetConeAngles)(struct IDirectSound3DBuffer* this_ptr, DWORD dwInsideConeAngle, DWORD dwOutsideConeAngle, DWORD dwApply);

// Function Definition: IDirectSound3DBuffer_SetConeOrientation
typedef HRESULT (*IDirectSound3DBuffer_SetConeOrientation)(struct IDirectSound3DBuffer* this_ptr, D3DVALUE x, D3DVALUE y, D3DVALUE z, DWORD dwApply);

// Function Definition: IDirectSound3DBuffer_SetConeOutsideVolume
typedef HRESULT (*IDirectSound3DBuffer_SetConeOutsideVolume)(struct IDirectSound3DBuffer* this_ptr, long lConeOutsideVolume, DWORD dwApply);

// Function Definition: IDirectSound3DBuffer_SetMaxDistance
typedef HRESULT (*IDirectSound3DBuffer_SetMaxDistance)(struct IDirectSound3DBuffer* this_ptr, D3DVALUE flMaxDistance, DWORD dwApply);

// Function Definition: IDirectSound3DBuffer_SetMinDistance
typedef HRESULT (*IDirectSound3DBuffer_SetMinDistance)(struct IDirectSound3DBuffer* this_ptr, D3DVALUE flMinDistance, DWORD dwApply);

// Function Definition: IDirectSound3DBuffer_SetMode
typedef HRESULT (*IDirectSound3DBuffer_SetMode)(struct IDirectSound3DBuffer* this_ptr, DWORD dwMode, DWORD dwApply);

// Function Definition: IDirectSound3DBuffer_SetPosition
typedef HRESULT (*IDirectSound3DBuffer_SetPosition)(struct IDirectSound3DBuffer* this_ptr, D3DVALUE x, D3DVALUE y, D3DVALUE z, DWORD dwApply);

// Function Definition: IDirectSound3DBuffer_SetVelocity
typedef HRESULT (*IDirectSound3DBuffer_SetVelocity)(struct IDirectSound3DBuffer* this_ptr, D3DVALUE x, D3DVALUE y, D3DVALUE z, DWORD dwApply);

// Structure: IDirectSound3DBuffer
typedef struct IDirectSound3DBuffer {
    struct IDirectSound3DBuffer_vtable* vtable;
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

// Typedef: LPDS3DLISTENER
// pointer to DS3DLISTENER
typedef struct DS3DLISTENER* LPDS3DLISTENER;

// Function Definition: IDirectSound3DListener_CommitDeferredSettings
typedef HRESULT (*IDirectSound3DListener_CommitDeferredSettings)(struct IDirectSound3DListener* this_ptr);

// Function Definition: IDirectSound3DListener_GetAllParameters
typedef HRESULT (*IDirectSound3DListener_GetAllParameters)(struct IDirectSound3DListener* this_ptr, LPDS3DLISTENER pListener);

// Function Definition: IDirectSound3DListener_GetDistanceFactor
typedef HRESULT (*IDirectSound3DListener_GetDistanceFactor)(struct IDirectSound3DListener* this_ptr, D3DVALUE* pflDistanceFactor);

// Function Definition: IDirectSound3DListener_GetDopplerFactor
typedef HRESULT (*IDirectSound3DListener_GetDopplerFactor)(struct IDirectSound3DListener* this_ptr, D3DVALUE* pflDopplerFactor);

// Function Definition: IDirectSound3DListener_GetOrientation
typedef HRESULT (*IDirectSound3DListener_GetOrientation)(struct IDirectSound3DListener* this_ptr, struct D3DVECTOR* pvOrientFront, struct D3DVECTOR* pvOrientTop);

// Function Definition: IDirectSound3DListener_GetPosition
typedef HRESULT (*IDirectSound3DListener_GetPosition)(struct IDirectSound3DListener* this_ptr, struct D3DVECTOR* pvPosition);

// Function Definition: IDirectSound3DListener_GetRolloffFactor
typedef HRESULT (*IDirectSound3DListener_GetRolloffFactor)(struct IDirectSound3DListener* this_ptr, D3DVALUE* pflRolloffFactor);

// Function Definition: IDirectSound3DListener_GetVelocity
typedef HRESULT (*IDirectSound3DListener_GetVelocity)(struct IDirectSound3DListener* this_ptr, struct D3DVECTOR* pvVelocity);

// Function Definition: IDirectSound3DListener_SetAllParameters
typedef HRESULT (*IDirectSound3DListener_SetAllParameters)(struct IDirectSound3DListener* this_ptr, LPDS3DLISTENER pcListener, DWORD dwApply);

// Function Definition: IDirectSound3DListener_SetDistanceFactor
typedef HRESULT (*IDirectSound3DListener_SetDistanceFactor)(struct IDirectSound3DListener* this_ptr, D3DVALUE flDistanceFactor, DWORD dwApply);

// Function Definition: IDirectSound3DListener_SetDopplerFactor
typedef HRESULT (*IDirectSound3DListener_SetDopplerFactor)(struct IDirectSound3DListener* this_ptr, D3DVALUE flDopplerFactor, DWORD dwApply);

// Function Definition: IDirectSound3DListener_SetOrientation
typedef HRESULT (*IDirectSound3DListener_SetOrientation)(struct IDirectSound3DListener* this_ptr, D3DVALUE xFront, D3DVALUE yFront, D3DVALUE zFront, D3DVALUE xTop, D3DVALUE yTop, D3DVALUE zTop, DWORD dwApply);

// Function Definition: IDirectSound3DListener_SetPosition
typedef HRESULT (*IDirectSound3DListener_SetPosition)(struct IDirectSound3DListener* this_ptr, D3DVALUE x, D3DVALUE y, D3DVALUE z, DWORD dwApply);

// Function Definition: IDirectSound3DListener_SetRolloffFactor
typedef HRESULT (*IDirectSound3DListener_SetRolloffFactor)(struct IDirectSound3DListener* this_ptr, D3DVALUE flRolloffFactor, DWORD dwApply);

// Function Definition: IDirectSound3DListener_SetVelocity
typedef HRESULT (*IDirectSound3DListener_SetVelocity)(struct IDirectSound3DListener* this_ptr, D3DVALUE x, D3DVALUE y, D3DVALUE z, DWORD dwApply);

// Structure: IDirectSound3DListener
typedef struct IDirectSound3DListener {
    struct IDirectSound3DListener_vtable* vtable;
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

// Typedef: LPDSBCAPS
// pointer to DSBCAPS
typedef struct DSBCAPS* LPDSBCAPS;

// Typedef: LPDSBUFFERDESC
// pointer to DSBUFFERDESC
typedef struct DSBUFFERDESC* LPDSBUFFERDESC;

// Typedef: LPDSCAPS
// pointer to DSCAPS
typedef struct DSCAPS* LPDSCAPS;

// Typedef: LPDSCBUFFERDESC
// pointer to DSCBUFFERDESC
typedef struct DSCBUFFERDESC* LPDSCBUFFERDESC;

// Typedef: LPDSCCAPS
// pointer to DSCCAPS
typedef struct DSCCAPS* LPDSCCAPS;

// Function Definition: IDirectSoundCapture_CreateCaptureBuffer
typedef HRESULT (*IDirectSoundCapture_CreateCaptureBuffer)(struct IDirectSoundCapture* this, void* pcDSCBufferDesc, LPDIRECTSOUNDCAPTUREBUFFER* ppDSCBuffer, LPUNKNOWN pUnkOuter);

// Function Definition: IDirectSoundCapture_GetCaps
typedef HRESULT (*IDirectSoundCapture_GetCaps)(struct IDirectSoundCapture* this, LPDSCCAPS pDSCCaps);

// Function Definition: IDirectSoundCapture_Initialize
typedef HRESULT (*IDirectSoundCapture_Initialize)(struct IDirectSoundCapture* this, LPGUID pcGuidDevice);

// Structure: IDirectSoundCapture
typedef struct IDirectSoundCapture {
    struct IDirectSoundCapture_vtable* vtable;
} IDirectSoundCapture;

// Function Definition: IDirectSoundCaptureBuffer_GetCaps
typedef HRESULT (*IDirectSoundCaptureBuffer_GetCaps)(struct IDirectSoundCaptureBuffer* this, LPDSCCAPS pDSCBCaps);

// Function Definition: IDirectSoundCaptureBuffer_GetCurrentPosition
typedef HRESULT (*IDirectSoundCaptureBuffer_GetCurrentPosition)(struct IDirectSoundCaptureBuffer* this, LPDWORD pdwCapturePosition, LPDWORD pdwReadPosition);

// Function Definition: IDirectSoundCaptureBuffer_GetFormat
typedef HRESULT (*IDirectSoundCaptureBuffer_GetFormat)(struct IDirectSoundCaptureBuffer* this, LPWAVEFORMATEX pwfxFormat, DWORD dwSizeAllocated, LPDWORD pdwSizeWritten);

// Function Definition: IDirectSoundCaptureBuffer_GetStatus
typedef HRESULT (*IDirectSoundCaptureBuffer_GetStatus)(struct IDirectSoundCaptureBuffer* this, LPDWORD pdwStatus);

// Function Definition: IDirectSoundCaptureBuffer_Initialize
typedef HRESULT (*IDirectSoundCaptureBuffer_Initialize)(struct IDirectSoundCaptureBuffer* this, LPDIRECTSOUNDCAPTURE pDirectSoundCapture, void* pcDSCBufferDesc);

// Function Definition: IDirectSoundCaptureBuffer_Lock
typedef HRESULT (*IDirectSoundCaptureBuffer_Lock)(struct IDirectSoundCaptureBuffer* this, DWORD dwOffset, DWORD dwBytes, LPVOID* ppvAudioPtr1, LPDWORD pdwAudioBytes1, LPVOID* ppvAudioPtr2, LPDWORD pdwAudioBytes2, DWORD dwFlags);

// Function Definition: IDirectSoundCaptureBuffer_Start
typedef HRESULT (*IDirectSoundCaptureBuffer_Start)(struct IDirectSoundCaptureBuffer* this, DWORD dwFlags);

// Function Definition: IDirectSoundCaptureBuffer_Stop
typedef HRESULT (*IDirectSoundCaptureBuffer_Stop)(struct IDirectSoundCaptureBuffer* this);

// Function Definition: IDirectSoundCaptureBuffer_Unlock
typedef HRESULT (*IDirectSoundCaptureBuffer_Unlock)(struct IDirectSoundCaptureBuffer* this, LPVOID pvAudioPtr1, DWORD dwAudioBytes1, LPVOID pvAudioPtr2, DWORD dwAudioBytes2);

// Structure: IDirectSoundCaptureBuffer
typedef struct IDirectSoundCaptureBuffer {
    struct IDirectSoundCaptureBuffer_vtable* vtable;
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

// Function Definition: LPDSENUMCALLBACKA_FUNC
typedef BOOL (*LPDSENUMCALLBACKA_FUNC)(LPGUID lpGuid, LPCSTR lpcstrDescription, LPCSTR lpcstrModule, LPVOID lpContext);

// Typedef: LPDSENUMCALLBACKA
// pointer to LPDSENUMCALLBACKA_FUNC
typedef LPDSENUMCALLBACKA_FUNC* LPDSENUMCALLBACKA;

// Function Definition: DirectSoundEnumerateA
typedef HRESULT (*DirectSoundEnumerateA)(LPDSENUMCALLBACKA lpDSEnumCallback, LPVOID lpContext);

// Typedef: LPLPDIRECTSOUNDBUFFER
// pointer to pointer to IDirectSoundBuffer
typedef struct IDirectSoundBuffer** LPLPDIRECTSOUNDBUFFER;

// Typedef: LPWAVEFORMAT
// pointer to tWAVEFORMAT
typedef struct tWAVEFORMAT* LPWAVEFORMAT;

// Structure: tWAVEFORMAT
typedef struct tWAVEFORMAT {
    WORD wFormatTag;
    WORD nChannels;
    DWORD nSamplesPerSec;
    DWORD nAvgBytesPerSec;
    WORD nBlockAlign;
} tWAVEFORMAT;

// Function Definition: IDirectSound_Compact
typedef HRESULT (*IDirectSound_Compact)(LPDIRECTSOUND this_ptr);

// Function Definition: IDirectSound_CreateSoundBuffer
typedef HRESULT (*IDirectSound_CreateSoundBuffer)(LPDIRECTSOUND this_ptr, LPDSBUFFERDESC pcDSBufferDesc, LPLPDIRECTSOUNDBUFFER ppDSBuffer, LPUNKNOWN pUnkOuter);

// Function Definition: IDirectSound_DuplicateSoundBuffer
typedef HRESULT (*IDirectSound_DuplicateSoundBuffer)(LPDIRECTSOUND this_ptr, LPDIRECTSOUNDBUFFER pDSBufferOriginal, LPLPDIRECTSOUNDBUFFER ppDSBufferDuplicate);

// Function Definition: IDirectSound_GetCaps
typedef HRESULT (*IDirectSound_GetCaps)(LPDIRECTSOUND this_ptr, LPDSCAPS pDSCaps);

// Function Definition: IDirectSound_GetSpeakerConfig
typedef HRESULT (*IDirectSound_GetSpeakerConfig)(LPDIRECTSOUND this_ptr, LPDWORD pdwSpeakerConfig);

// Function Definition: IDirectSound_Initialize
typedef HRESULT (*IDirectSound_Initialize)(LPDIRECTSOUND this_ptr, LPGUID pcGuidDevice);

// Function Definition: IDirectSound_SetCooperativeLevel
typedef HRESULT (*IDirectSound_SetCooperativeLevel)(LPDIRECTSOUND this_ptr, HWND hwnd, DWORD dwLevel);

// Function Definition: IDirectSound_SetSpeakerConfig
typedef HRESULT (*IDirectSound_SetSpeakerConfig)(LPDIRECTSOUND this_ptr, DWORD dwSpeakerConfig);

// Function Definition: IDirectSoundBuffer_GetCurrentPosition
typedef HRESULT (*IDirectSoundBuffer_GetCurrentPosition)(LPDIRECTSOUNDBUFFER this_ptr, LPDWORD pdwCurrentPlayCursor, LPDWORD pdwCurrentWriteCursor);

// Function Definition: IDirectSoundBuffer_GetFormat
typedef HRESULT (*IDirectSoundBuffer_GetFormat)(LPDIRECTSOUNDBUFFER this_ptr, LPWAVEFORMATEX pwfxFormat, DWORD dwSizeAllocated, LPDWORD pdwSizeWritten);

// Function Definition: IDirectSoundBuffer_GetFrequency
typedef HRESULT (*IDirectSoundBuffer_GetFrequency)(LPDIRECTSOUNDBUFFER this_ptr, LPDWORD pdwFrequency);

// Function Definition: IDirectSoundBuffer_GetPan
typedef HRESULT (*IDirectSoundBuffer_GetPan)(LPDIRECTSOUNDBUFFER this_ptr, LPLONG plPan);

// Function Definition: IDirectSoundBuffer_GetStatus
typedef HRESULT (*IDirectSoundBuffer_GetStatus)(LPDIRECTSOUNDBUFFER this_ptr, LPDWORD pdwStatus);

// Function Definition: IDirectSoundBuffer_GetVolume
typedef HRESULT (*IDirectSoundBuffer_GetVolume)(LPDIRECTSOUNDBUFFER this_ptr, LPLONG plVolume);

// Function Definition: IDirectSoundBuffer_Initialize
typedef HRESULT (*IDirectSoundBuffer_Initialize)(LPDIRECTSOUNDBUFFER this_ptr, LPDIRECTSOUND pDirectSound, LPDSBUFFERDESC pcDSBufferDesc);

// Function Definition: IDirectSoundBuffer_Lock
typedef HRESULT (*IDirectSoundBuffer_Lock)(LPDIRECTSOUNDBUFFER this_ptr, DWORD dwOffset, DWORD dwBytes, LPVOID* ppvAudioPtr1, LPDWORD pdwAudioBytes1, LPVOID* ppvAudioPtr2, LPDWORD pdwAudioBytes2, DWORD dwFlags);

// Function Definition: IDirectSoundBuffer_Play
typedef HRESULT (*IDirectSoundBuffer_Play)(LPDIRECTSOUNDBUFFER this_ptr, DWORD dwReserved1, DWORD dwPriority, DWORD dwFlags);

// Function Definition: IDirectSoundBuffer_Restore
typedef HRESULT (*IDirectSoundBuffer_Restore)(LPDIRECTSOUNDBUFFER this_ptr);

// Function Definition: IDirectSoundBuffer_SetCurrentPosition
typedef HRESULT (*IDirectSoundBuffer_SetCurrentPosition)(LPDIRECTSOUNDBUFFER this_ptr, DWORD dwNewPosition);

// Function Definition: IDirectSoundBuffer_SetFormat
typedef HRESULT (*IDirectSoundBuffer_SetFormat)(LPDIRECTSOUNDBUFFER this_ptr, LPCWAVEFORMATEX pcfxFormat);

// Function Definition: IDirectSoundBuffer_SetFrequency
typedef HRESULT (*IDirectSoundBuffer_SetFrequency)(LPDIRECTSOUNDBUFFER this_ptr, DWORD dwFrequency);

// Function Definition: IDirectSoundBuffer_SetPan
typedef HRESULT (*IDirectSoundBuffer_SetPan)(LPDIRECTSOUNDBUFFER this_ptr, long lPan);

// Function Definition: IDirectSoundBuffer_SetVolume
typedef HRESULT (*IDirectSoundBuffer_SetVolume)(LPDIRECTSOUNDBUFFER this_ptr, long lVolume);

// Function Definition: IDirectSoundBuffer_Stop
typedef HRESULT (*IDirectSoundBuffer_Stop)(LPDIRECTSOUNDBUFFER this_ptr);

// Function Definition: IDirectSoundBuffer_Unlock
typedef HRESULT (*IDirectSoundBuffer_Unlock)(LPDIRECTSOUNDBUFFER this_ptr, LPVOID pvAudioPtr1, DWORD dwAudioBytes1, LPVOID pvAudioPtr2, DWORD dwAudioBytes2);

// Structure: IDirectSound
typedef struct IDirectSound {
    struct IDirectSound_vtable* vtable;
} IDirectSound;

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

// Structure: IDirectSoundBuffer
typedef struct IDirectSoundBuffer {
    struct IDirectSoundBuffer_vtable* vtable;
} IDirectSoundBuffer;

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

