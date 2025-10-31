#pragma once

// Function Definition: DirectSoundCreate
typedef HRESULT (*DirectSoundCreate)(LPGUID lpGuid, LPDIRECTSOUND* ppDS, LPUNKNOWN pUnkOuter);

// Function Definition: DirectSoundEnumerateA
typedef HRESULT (*DirectSoundEnumerateA)(LPDSENUMCALLBACKA lpDSEnumCallback, LPVOID lpContext);

// Function Definition: LPDSENUMCALLBACKA_FUNC
typedef BOOL (*LPDSENUMCALLBACKA_FUNC)(LPGUID lpGuid, LPCSTR lpcstrDescription, LPCSTR lpcstrModule, LPVOID lpContext);

