#pragma once

// Function Definition: DirectSoundCreate
typedef HRESULT (*DirectSoundCreate)(LPGUID lpGuid, LPDIRECTSOUND* ppDS, LPUNKNOWN pUnkOuter);

// Function Definition: DirectSoundEnumerateA
typedef HRESULT (*DirectSoundEnumerateA)(LPDSENUMCALLBACKA lpDSEnumCallback, LPVOID lpContext);

// Function Definition: IDirectSound3DBuffer_GetAllParameters
typedef HRESULT (*IDirectSound3DBuffer_GetAllParameters)(IDirectSound3DBuffer* this_ptr, LPDS3DBUFFER pDs3dBuffer);

// Function Definition: IDirectSound3DBuffer_GetConeAngles
typedef HRESULT (*IDirectSound3DBuffer_GetConeAngles)(IDirectSound3DBuffer* this_ptr, LPDWORD pdwInsideConeAngle, LPDWORD pdwOutsideConeAngle);

// Function Definition: IDirectSound3DBuffer_GetConeOrientation
typedef HRESULT (*IDirectSound3DBuffer_GetConeOrientation)(IDirectSound3DBuffer* this_ptr, D3DVECTOR* pvOrientation);

// Function Definition: IDirectSound3DBuffer_GetConeOutsideVolume
typedef HRESULT (*IDirectSound3DBuffer_GetConeOutsideVolume)(IDirectSound3DBuffer* this_ptr, LPLONG plConeOutsideVolume);

// Function Definition: IDirectSound3DBuffer_GetMaxDistance
typedef HRESULT (*IDirectSound3DBuffer_GetMaxDistance)(IDirectSound3DBuffer* this_ptr, D3DVALUE* pflMaxDistance);

// Function Definition: IDirectSound3DBuffer_GetMinDistance
typedef HRESULT (*IDirectSound3DBuffer_GetMinDistance)(IDirectSound3DBuffer* this_ptr, D3DVALUE* pflMinDistance);

// Function Definition: IDirectSound3DBuffer_GetMode
typedef HRESULT (*IDirectSound3DBuffer_GetMode)(IDirectSound3DBuffer* this_ptr, LPDWORD pdwMode);

// Function Definition: IDirectSound3DBuffer_GetPosition
typedef HRESULT (*IDirectSound3DBuffer_GetPosition)(IDirectSound3DBuffer* this_ptr, D3DVECTOR* pvPosition);

// Function Definition: IDirectSound3DBuffer_GetVelocity
typedef HRESULT (*IDirectSound3DBuffer_GetVelocity)(IDirectSound3DBuffer* this_ptr, D3DVECTOR* pvVelocity);

// Function Definition: IDirectSound3DBuffer_SetAllParameters
typedef HRESULT (*IDirectSound3DBuffer_SetAllParameters)(IDirectSound3DBuffer* this_ptr, LPDS3DBUFFER pcDs3dBuffer, DWORD dwApply);

// Function Definition: IDirectSound3DBuffer_SetConeAngles
typedef HRESULT (*IDirectSound3DBuffer_SetConeAngles)(IDirectSound3DBuffer* this_ptr, DWORD dwInsideConeAngle, DWORD dwOutsideConeAngle, DWORD dwApply);

// Function Definition: IDirectSound3DBuffer_SetConeOrientation
typedef HRESULT (*IDirectSound3DBuffer_SetConeOrientation)(IDirectSound3DBuffer* this_ptr, D3DVALUE x, D3DVALUE y, D3DVALUE z, DWORD dwApply);

// Function Definition: IDirectSound3DBuffer_SetConeOutsideVolume
typedef HRESULT (*IDirectSound3DBuffer_SetConeOutsideVolume)(IDirectSound3DBuffer* this_ptr, long lConeOutsideVolume, DWORD dwApply);

// Function Definition: IDirectSound3DBuffer_SetMaxDistance
typedef HRESULT (*IDirectSound3DBuffer_SetMaxDistance)(IDirectSound3DBuffer* this_ptr, D3DVALUE flMaxDistance, DWORD dwApply);

// Function Definition: IDirectSound3DBuffer_SetMinDistance
typedef HRESULT (*IDirectSound3DBuffer_SetMinDistance)(IDirectSound3DBuffer* this_ptr, D3DVALUE flMinDistance, DWORD dwApply);

// Function Definition: IDirectSound3DBuffer_SetMode
typedef HRESULT (*IDirectSound3DBuffer_SetMode)(IDirectSound3DBuffer* this_ptr, DWORD dwMode, DWORD dwApply);

// Function Definition: IDirectSound3DBuffer_SetPosition
typedef HRESULT (*IDirectSound3DBuffer_SetPosition)(IDirectSound3DBuffer* this_ptr, D3DVALUE x, D3DVALUE y, D3DVALUE z, DWORD dwApply);

// Function Definition: IDirectSound3DBuffer_SetVelocity
typedef HRESULT (*IDirectSound3DBuffer_SetVelocity)(IDirectSound3DBuffer* this_ptr, D3DVALUE x, D3DVALUE y, D3DVALUE z, DWORD dwApply);

// Function Definition: IDirectSound3DListener_CommitDeferredSettings
typedef HRESULT (*IDirectSound3DListener_CommitDeferredSettings)(IDirectSound3DListener* this_ptr);

// Function Definition: IDirectSound3DListener_GetAllParameters
typedef HRESULT (*IDirectSound3DListener_GetAllParameters)(IDirectSound3DListener* this_ptr, LPDS3DLISTENER pListener);

// Function Definition: IDirectSound3DListener_GetDistanceFactor
typedef HRESULT (*IDirectSound3DListener_GetDistanceFactor)(IDirectSound3DListener* this_ptr, D3DVALUE* pflDistanceFactor);

// Function Definition: IDirectSound3DListener_GetDopplerFactor
typedef HRESULT (*IDirectSound3DListener_GetDopplerFactor)(IDirectSound3DListener* this_ptr, D3DVALUE* pflDopplerFactor);

// Function Definition: IDirectSound3DListener_GetOrientation
typedef HRESULT (*IDirectSound3DListener_GetOrientation)(IDirectSound3DListener* this_ptr, D3DVECTOR* pvOrientFront, D3DVECTOR* pvOrientTop);

// Function Definition: IDirectSound3DListener_GetPosition
typedef HRESULT (*IDirectSound3DListener_GetPosition)(IDirectSound3DListener* this_ptr, D3DVECTOR* pvPosition);

// Function Definition: IDirectSound3DListener_GetRolloffFactor
typedef HRESULT (*IDirectSound3DListener_GetRolloffFactor)(IDirectSound3DListener* this_ptr, D3DVALUE* pflRolloffFactor);

// Function Definition: IDirectSound3DListener_GetVelocity
typedef HRESULT (*IDirectSound3DListener_GetVelocity)(IDirectSound3DListener* this_ptr, D3DVECTOR* pvVelocity);

// Function Definition: IDirectSound3DListener_SetAllParameters
typedef HRESULT (*IDirectSound3DListener_SetAllParameters)(IDirectSound3DListener* this_ptr, LPDS3DLISTENER pcListener, DWORD dwApply);

// Function Definition: IDirectSound3DListener_SetDistanceFactor
typedef HRESULT (*IDirectSound3DListener_SetDistanceFactor)(IDirectSound3DListener* this_ptr, D3DVALUE flDistanceFactor, DWORD dwApply);

// Function Definition: IDirectSound3DListener_SetDopplerFactor
typedef HRESULT (*IDirectSound3DListener_SetDopplerFactor)(IDirectSound3DListener* this_ptr, D3DVALUE flDopplerFactor, DWORD dwApply);

// Function Definition: IDirectSound3DListener_SetOrientation
typedef HRESULT (*IDirectSound3DListener_SetOrientation)(IDirectSound3DListener* this_ptr, D3DVALUE xFront, D3DVALUE yFront, D3DVALUE zFront, D3DVALUE xTop, D3DVALUE yTop, D3DVALUE zTop, DWORD dwApply);

// Function Definition: IDirectSound3DListener_SetPosition
typedef HRESULT (*IDirectSound3DListener_SetPosition)(IDirectSound3DListener* this_ptr, D3DVALUE x, D3DVALUE y, D3DVALUE z, DWORD dwApply);

// Function Definition: IDirectSound3DListener_SetRolloffFactor
typedef HRESULT (*IDirectSound3DListener_SetRolloffFactor)(IDirectSound3DListener* this_ptr, D3DVALUE flRolloffFactor, DWORD dwApply);

// Function Definition: IDirectSound3DListener_SetVelocity
typedef HRESULT (*IDirectSound3DListener_SetVelocity)(IDirectSound3DListener* this_ptr, D3DVALUE x, D3DVALUE y, D3DVALUE z, DWORD dwApply);

// Function Definition: IDirectSoundBuffer_GetCaps
typedef int (*IDirectSoundBuffer_GetCaps)(void* this_ptr, void* pDSBufferCaps);

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

// Function Definition: IDirectSoundCaptureBuffer_GetCaps
typedef HRESULT (*IDirectSoundCaptureBuffer_GetCaps)(IDirectSoundCaptureBuffer* this, LPDSCCAPS pDSCBCaps);

// Function Definition: IDirectSoundCaptureBuffer_GetCurrentPosition
typedef HRESULT (*IDirectSoundCaptureBuffer_GetCurrentPosition)(IDirectSoundCaptureBuffer* this, LPDWORD pdwCapturePosition, LPDWORD pdwReadPosition);

// Function Definition: IDirectSoundCaptureBuffer_GetFormat
typedef HRESULT (*IDirectSoundCaptureBuffer_GetFormat)(IDirectSoundCaptureBuffer* this, LPWAVEFORMATEX pwfxFormat, DWORD dwSizeAllocated, LPDWORD pdwSizeWritten);

// Function Definition: IDirectSoundCaptureBuffer_GetStatus
typedef HRESULT (*IDirectSoundCaptureBuffer_GetStatus)(IDirectSoundCaptureBuffer* this, LPDWORD pdwStatus);

// Function Definition: IDirectSoundCaptureBuffer_Initialize
typedef HRESULT (*IDirectSoundCaptureBuffer_Initialize)(IDirectSoundCaptureBuffer* this, LPDIRECTSOUNDCAPTURE pDirectSoundCapture, void* pcDSCBufferDesc);

// Function Definition: IDirectSoundCaptureBuffer_Lock
typedef HRESULT (*IDirectSoundCaptureBuffer_Lock)(IDirectSoundCaptureBuffer* this, DWORD dwOffset, DWORD dwBytes, LPVOID* ppvAudioPtr1, LPDWORD pdwAudioBytes1, LPVOID* ppvAudioPtr2, LPDWORD pdwAudioBytes2, DWORD dwFlags);

// Function Definition: IDirectSoundCaptureBuffer_Start
typedef HRESULT (*IDirectSoundCaptureBuffer_Start)(IDirectSoundCaptureBuffer* this, DWORD dwFlags);

// Function Definition: IDirectSoundCaptureBuffer_Stop
typedef HRESULT (*IDirectSoundCaptureBuffer_Stop)(IDirectSoundCaptureBuffer* this);

// Function Definition: IDirectSoundCaptureBuffer_Unlock
typedef HRESULT (*IDirectSoundCaptureBuffer_Unlock)(IDirectSoundCaptureBuffer* this, LPVOID pvAudioPtr1, DWORD dwAudioBytes1, LPVOID pvAudioPtr2, DWORD dwAudioBytes2);

// Function Definition: IDirectSoundCapture_CreateCaptureBuffer
typedef HRESULT (*IDirectSoundCapture_CreateCaptureBuffer)(IDirectSoundCapture* this, void* pcDSCBufferDesc, LPDIRECTSOUNDCAPTUREBUFFER* ppDSCBuffer, LPUNKNOWN pUnkOuter);

// Function Definition: IDirectSoundCapture_GetCaps
typedef HRESULT (*IDirectSoundCapture_GetCaps)(IDirectSoundCapture* this, LPDSCCAPS pDSCCaps);

// Function Definition: IDirectSoundCapture_Initialize
typedef HRESULT (*IDirectSoundCapture_Initialize)(IDirectSoundCapture* this, LPGUID pcGuidDevice);

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

// Function Definition: LPDSENUMCALLBACKA_FUNC
typedef BOOL (*LPDSENUMCALLBACKA_FUNC)(LPGUID lpGuid, LPCSTR lpcstrDescription, LPCSTR lpcstrModule, LPVOID lpContext);

