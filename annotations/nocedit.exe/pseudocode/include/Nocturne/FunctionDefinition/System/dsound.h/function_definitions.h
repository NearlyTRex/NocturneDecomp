#pragma once

// Function Definition: DirectSoundCreate
typedef HRESULT (*DirectSoundCreate)(LPGUID lpGuid, LPDIRECTSOUND* ppDS, LPUNKNOWN pUnkOuter);

// Function Definition: DirectSoundEnumerateA
typedef HRESULT (*DirectSoundEnumerateA)(LPDSENUMCALLBACKA lpDSEnumCallback, LPVOID lpContext);

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

