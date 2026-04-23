// =============================================================================
// DIRECTSOUND SHIM - SDL2-backed DirectSound implementation
// =============================================================================
//
// Implements the DirectSound COM interfaces using SDL2 audio for
// cross-platform sound output. Same vtable shim pattern as ddraw.cpp.
//

#include <SDL.h>
#include <cstdlib>
#include <cstring>
#include <cmath>

#include "system/dsound.h"
#include "debug_log.h"

// =============================================================================
// DirectSound constants
// =============================================================================

#define DS_OK                       0
#define DSERR_GENERIC               0x80004005
#define DSERR_INVALIDPARAM          0x80070057
#define DSERR_OUTOFMEMORY           0x8007000E
#define DSERR_UNSUPPORTED           0x80004001
#define DSERR_NODRIVER              0x88780078

#define DSBCAPS_PRIMARYBUFFER       0x00000001
#define DSBCAPS_CTRLVOLUME          0x00000080
#define DSBCAPS_CTRLPAN             0x00000040
#define DSBCAPS_CTRLFREQUENCY       0x00000020
#define DSBCAPS_CTRL3D              0x00000010
#define DSBCAPS_LOCSOFTWARE         0x00000008

#define DSBPLAY_LOOPING             0x00000001

#define DSSCL_NORMAL                0x00000001
#define DSSCL_PRIORITY              0x00000002
#define DSSCL_EXCLUSIVE             0x00000003

#define DSBSTATUS_PLAYING           0x00000001
#define DSBSTATUS_LOOPING           0x00000004

#define DSCBSTART_LOOPING           0x00000001

#define WAVE_FORMAT_PCM             0x0001

// =============================================================================
// Internal shim data structures
// =============================================================================

struct DSound_ShimData;
struct DSoundBuffer_ShimData;
struct DSound3DBuffer_ShimData;
struct DSound3DListener_ShimData;
struct DSoundCapture_ShimData;
struct DSoundCaptureBuffer_ShimData;

// Forward declarations for vtable population
static void populate_dsound_vtable(IDirectSound_vtable* vt);
static void populate_dsbuffer_vtable(IDirectSoundBuffer_vtable* vt);
static void populate_ds3dbuffer_vtable(IDirectSound3DBuffer_vtable* vt);
static void populate_ds3dlistener_vtable(IDirectSound3DListener_vtable* vt);
static void populate_dscapture_vtable(IDirectSoundCapture_vtable* vt);
static void populate_dscapturebuffer_vtable(IDirectSoundCaptureBuffer_vtable* vt);

// COM vtable layout: the game reads offset 0 as a POINTER to the vtable
// struct, not the vtable struct itself. Each ShimData must start with a
// vtable POINTER, with the actual vtable data stored separately (inline
// as vtable_data here; wired up in the populate_*_vtable + assignment).

struct DSound_ShimData {
    IDirectSound_vtable* vtable;
    IDirectSound_vtable vtable_data;
    ULONG ref_count;
    SDL_AudioDeviceID device_id;
    SDL_AudioSpec obtained_spec;
    HWND cooperative_hwnd;
    DWORD cooperative_level;
    int initialized;
};

struct DSoundBuffer_ShimData {
    IDirectSoundBuffer_vtable* vtable;
    IDirectSoundBuffer_vtable vtable_data;
    ULONG ref_count;
    DSound_ShimData* dsound;
    Uint8* audio_data;
    DWORD buffer_size;
    DWORD play_cursor;
    DWORD write_cursor;
    SDL_AudioDeviceID device_id;
    int is_playing;
    int is_looping;
    int is_primary;
    int audio_data_shared; // 1 if audio_data is borrowed from the original buffer (DuplicateSoundBuffer)
    long volume;    // -10000 to 0 (hundredths of dB, 0 = full volume)
    long pan;       // -10000 to 10000
    DWORD frequency;
    WAVEFORMATEX format;
};

struct DSound3DBuffer_ShimData {
    IDirectSound3DBuffer_vtable* vtable;
    IDirectSound3DBuffer_vtable vtable_data;
    ULONG ref_count;
    DS3DBUFFER params;
};

struct DSound3DListener_ShimData {
    IDirectSound3DListener_vtable* vtable;
    IDirectSound3DListener_vtable vtable_data;
    ULONG ref_count;
    DS3DLISTENER params;
};

struct DSoundCapture_ShimData {
    IDirectSoundCapture_vtable* vtable;
    IDirectSoundCapture_vtable vtable_data;
    ULONG ref_count;
};

struct DSoundCaptureBuffer_ShimData {
    IDirectSoundCaptureBuffer_vtable* vtable;
    IDirectSoundCaptureBuffer_vtable vtable_data;
    ULONG ref_count;
};

// =============================================================================
// Audio callback for SDL
// =============================================================================

static void sdl_audio_callback(void* userdata, Uint8* stream, int len) {
    DSoundBuffer_ShimData* buf = (DSoundBuffer_ShimData*)userdata;
    SDL_memset(stream, 0, len);

    if (!buf) { DSND_LOG("cb: buf=NULL"); return; }
    DSND_LOG_RL(8, 200, "cb dev=%u play=%d loop=%d pc=%u size=%u data=%p len=%d",
                (unsigned)buf->device_id, buf->is_playing, buf->is_looping,
                (unsigned)buf->play_cursor, (unsigned)buf->buffer_size,
                (void*)buf->audio_data, len);
    if (!buf->is_playing || !buf->audio_data) return;

    DWORD remaining = len;
    DWORD dst_offset = 0;

    while (remaining > 0) {
        DWORD available = buf->buffer_size - buf->play_cursor;
        DWORD to_copy = (remaining < available) ? remaining : available;

        // Mix audio with volume scaling
        float vol_scale = 1.0f;
        if (buf->volume < 0) {
            // Convert from hundredths of dB to linear scale
            vol_scale = powf(10.0f, buf->volume / 2000.0f);
        }

        SDL_MixAudioFormat(stream + dst_offset,
                          buf->audio_data + buf->play_cursor,
                          AUDIO_S16LSB,
                          to_copy,
                          (int)(SDL_MIX_MAXVOLUME * vol_scale));

        buf->play_cursor += to_copy;
        dst_offset += to_copy;
        remaining -= to_copy;

        if (buf->play_cursor >= buf->buffer_size) {
            if (buf->is_looping) {
                buf->play_cursor = 0;
            } else {
                buf->is_playing = 0;
                break;
            }
        }
    }
}

// =============================================================================
// IDirectSound IUnknown methods
// =============================================================================

static HRESULT dsound_QueryInterface(IDirectSound* this_ptr, void* riid, void** ppv) {
    (void)this_ptr; (void)riid; (void)ppv;
    return DSERR_UNSUPPORTED;
}

static ULONG dsound_AddRef(IDirectSound* this_ptr) {
    DSound_ShimData* shim = reinterpret_cast<DSound_ShimData*>(this_ptr);
    return ++shim->ref_count;
}

static ULONG dsound_Release(IDirectSound* this_ptr) {
    DSound_ShimData* shim = reinterpret_cast<DSound_ShimData*>(this_ptr);
    if (--shim->ref_count == 0) {
        if (shim->device_id) SDL_CloseAudioDevice(shim->device_id);
        free(shim);
        return 0;
    }
    return shim->ref_count;
}

// =============================================================================
// IDirectSound methods
// =============================================================================

static HRESULT dsound_CreateSoundBuffer(LPDIRECTSOUND this_ptr, LPDSBUFFERDESC pcDesc,
                                         LPLPDIRECTSOUNDBUFFER ppBuf, LPUNKNOWN pUnkOuter) {
    (void)pUnkOuter;
    DSound_ShimData* ds = reinterpret_cast<DSound_ShimData*>(this_ptr);

    DSoundBuffer_ShimData* buf = (DSoundBuffer_ShimData*)calloc(1, sizeof(DSoundBuffer_ShimData));
    if (!buf) return DSERR_OUTOFMEMORY;

    populate_dsbuffer_vtable(&buf->vtable_data);
    buf->vtable = &buf->vtable_data;
    buf->ref_count = 1;
    buf->dsound = ds;
    buf->volume = 0; // Full volume

    int is_primary = (pcDesc->dwFlags & DSBCAPS_PRIMARYBUFFER) != 0;
    buf->is_primary = is_primary;

    DSND_LOG("CreateSoundBuffer: primary=%d flags=0x%x bytes=%u fmt=tag%u ch%u rate%u bits%u",
         is_primary, (unsigned)pcDesc->dwFlags, (unsigned)pcDesc->dwBufferBytes,
         pcDesc->lpwfxFormat ? pcDesc->lpwfxFormat->wFormatTag : 0,
         pcDesc->lpwfxFormat ? pcDesc->lpwfxFormat->nChannels : 0,
         pcDesc->lpwfxFormat ? (unsigned)pcDesc->lpwfxFormat->nSamplesPerSec : 0u,
         pcDesc->lpwfxFormat ? pcDesc->lpwfxFormat->wBitsPerSample : 0);

    if (is_primary) {
        // Primary buffer: configure the audio device
        buf->buffer_size = 0;
        buf->audio_data = nullptr;
    } else {
        // Secondary buffer: allocate audio data
        buf->buffer_size = pcDesc->dwBufferBytes;
        buf->audio_data = (Uint8*)calloc(1, pcDesc->dwBufferBytes);
        if (!buf->audio_data) {
            free(buf);
            return DSERR_OUTOFMEMORY;
        }

        // Copy wave format
        if (pcDesc->lpwfxFormat) {
            memcpy(&buf->format, pcDesc->lpwfxFormat, sizeof(WAVEFORMATEX));
            buf->frequency = pcDesc->lpwfxFormat->nSamplesPerSec;
        }

        // Open an SDL audio device for this buffer
        SDL_AudioSpec want, have;
        SDL_memset(&want, 0, sizeof(want));
        want.freq = buf->frequency ? buf->frequency : 22050;
        want.format = AUDIO_S16LSB;
        want.channels = buf->format.nChannels ? buf->format.nChannels : 1;
        want.samples = 1024;
        want.callback = sdl_audio_callback;
        want.userdata = buf;

        buf->device_id = SDL_OpenAudioDevice(nullptr, 0, &want, &have, 0);
        DSND_LOG("  secondary SDL_OpenAudioDevice: dev=%u want(freq=%d ch=%u fmt=0x%x samp=%u) have(freq=%d ch=%u fmt=0x%x samp=%u)",
             (unsigned)buf->device_id,
             want.freq, want.channels, want.format, want.samples,
             have.freq, have.channels, have.format, have.samples);
    }

    *ppBuf = reinterpret_cast<IDirectSoundBuffer*>(buf);
    return DS_OK;
}

static HRESULT dsound_GetCaps(LPDIRECTSOUND this_ptr, LPDSCAPS pCaps) {
    (void)this_ptr;
    if (!pCaps) return DSERR_INVALIDPARAM;
    memset(pCaps, 0, sizeof(DSCAPS));
    pCaps->dwSize = sizeof(DSCAPS);
    pCaps->dwFlags = 0;
    pCaps->dwPrimaryBuffers = 1;
    pCaps->dwMaxHwMixingAllBuffers = 16;
    pCaps->dwMaxHwMixingStaticBuffers = 16;
    pCaps->dwMaxHwMixingStreamingBuffers = 16;
    return DS_OK;
}

static HRESULT dsound_DuplicateSoundBuffer(LPDIRECTSOUND this_ptr,
                                            LPDIRECTSOUNDBUFFER pOriginal,
                                            LPLPDIRECTSOUNDBUFFER ppDuplicate) {
    (void)this_ptr;
    DSoundBuffer_ShimData* orig = reinterpret_cast<DSoundBuffer_ShimData*>(pOriginal);
    DSound_ShimData* ds = orig->dsound;

    DSoundBuffer_ShimData* dup = (DSoundBuffer_ShimData*)calloc(1, sizeof(DSoundBuffer_ShimData));
    if (!dup) return DSERR_OUTOFMEMORY;

    populate_dsbuffer_vtable(&dup->vtable_data);
    dup->vtable = &dup->vtable_data;
    dup->ref_count = 1;
    dup->dsound = ds;
    dup->buffer_size = orig->buffer_size;
    dup->volume = orig->volume;
    dup->frequency = orig->frequency;
    memcpy(&dup->format, &orig->format, sizeof(WAVEFORMATEX));

    // Per DirectSound: duplicates share sample memory with the original so
    // that writes to the original (e.g. streamed music) are seen by the
    // duplicate's playback. Use a borrow + shared flag to avoid double-free.
    dup->audio_data = orig->audio_data;
    dup->audio_data_shared = 1;

    // Open a new audio device for the duplicate
    SDL_AudioSpec want, have;
    SDL_memset(&want, 0, sizeof(want));
    want.freq = dup->frequency ? dup->frequency : 22050;
    want.format = AUDIO_S16LSB;
    want.channels = dup->format.nChannels ? dup->format.nChannels : 1;
    want.samples = 1024;
    want.callback = sdl_audio_callback;
    want.userdata = dup;
    dup->device_id = SDL_OpenAudioDevice(nullptr, 0, &want, &have, 0);

    *ppDuplicate = reinterpret_cast<IDirectSoundBuffer*>(dup);
    return DS_OK;
}

static HRESULT dsound_SetCooperativeLevel(LPDIRECTSOUND this_ptr, HWND hwnd, DWORD dwLevel) {
    DSound_ShimData* ds = reinterpret_cast<DSound_ShimData*>(this_ptr);
    ds->cooperative_hwnd = hwnd;
    ds->cooperative_level = dwLevel;
    return DS_OK;
}

static HRESULT dsound_Compact(LPDIRECTSOUND this_ptr) {
    (void)this_ptr;
    return DS_OK;
}

static HRESULT dsound_GetSpeakerConfig(LPDIRECTSOUND this_ptr, LPDWORD pdwSpeakerConfig) {
    (void)this_ptr;
    if (pdwSpeakerConfig) *pdwSpeakerConfig = 0x00000002; // DSSPEAKER_STEREO
    return DS_OK;
}

static HRESULT dsound_SetSpeakerConfig(LPDIRECTSOUND this_ptr, DWORD dwSpeakerConfig) {
    (void)this_ptr; (void)dwSpeakerConfig;
    return DS_OK;
}

static HRESULT dsound_Initialize(LPDIRECTSOUND this_ptr, LPGUID pcGuidDevice) {
    (void)pcGuidDevice;
    DSound_ShimData* ds = reinterpret_cast<DSound_ShimData*>(this_ptr);
    ds->initialized = 1;
    return DS_OK;
}

// =============================================================================
// IDirectSoundBuffer IUnknown
// =============================================================================

static HRESULT dsbuf_QueryInterface(IDirectSoundBuffer* this_ptr, void* riid, void** ppv) {
    DSoundBuffer_ShimData* buf = reinterpret_cast<DSoundBuffer_ShimData*>(this_ptr);
    (void)buf;
    if (!ppv) return DSERR_INVALIDPARAM;

    // Discriminate by GUID. The game queries for either:
    //   IID_IDirectSound3DBuffer   = {279AFA86-4981-11CE-A521-0020AF0BE560}
    //   IID_IDirectSound3DListener = {279AFA84-4981-11CE-A521-0020AF0BE560}
    // These differ only in Data1. Returning the wrong shim type silently
    // corrupts state: the game then calls vtable methods by slot, and
    // slot N of the Buffer vtable is a different method than slot N of the
    // Listener vtable.
    const GUID* g = reinterpret_cast<const GUID*>(riid);
    if (g && g->Data1 == 0x279AFA84) {
        // IDirectSound3DListener
        DSound3DListener_ShimData* lst = (DSound3DListener_ShimData*)calloc(1, sizeof(DSound3DListener_ShimData));
        if (!lst) return DSERR_OUTOFMEMORY;
        populate_ds3dlistener_vtable(&lst->vtable_data);
        lst->vtable = &lst->vtable_data;
        lst->ref_count = 1;
        lst->params.dwSize = sizeof(DS3DLISTENER);
        lst->params.flDistanceFactor = 1.0f;
        lst->params.flRolloffFactor = 1.0f;
        lst->params.flDopplerFactor = 1.0f;
        *ppv = lst;
        return DS_OK;
    }
    // Default / 0x279AFA86 (IID_IDirectSound3DBuffer): 3D buffer shim.
    DSound3DBuffer_ShimData* d3d = (DSound3DBuffer_ShimData*)calloc(1, sizeof(DSound3DBuffer_ShimData));
    if (!d3d) return DSERR_OUTOFMEMORY;
    populate_ds3dbuffer_vtable(&d3d->vtable_data);
    d3d->vtable = &d3d->vtable_data;
    d3d->ref_count = 1;
    d3d->params.dwSize = sizeof(DS3DBUFFER);
    d3d->params.flMinDistance = 1.0f;
    d3d->params.flMaxDistance = 1000000000.0f;
    *ppv = d3d;
    return DS_OK;
}

static ULONG dsbuf_AddRef(IDirectSoundBuffer* this_ptr) {
    DSoundBuffer_ShimData* buf = reinterpret_cast<DSoundBuffer_ShimData*>(this_ptr);
    return ++buf->ref_count;
}

static ULONG dsbuf_Release(IDirectSoundBuffer* this_ptr) {
    DSoundBuffer_ShimData* buf = reinterpret_cast<DSoundBuffer_ShimData*>(this_ptr);
    if (--buf->ref_count == 0) {
        if (buf->device_id) SDL_CloseAudioDevice(buf->device_id);
        if (!buf->audio_data_shared) free(buf->audio_data);
        free(buf);
        return 0;
    }
    return buf->ref_count;
}

// =============================================================================
// IDirectSoundBuffer methods
// =============================================================================

static int dsbuf_GetCaps(void* this_ptr, void* pDSBufferCaps) {
    DSoundBuffer_ShimData* buf = reinterpret_cast<DSoundBuffer_ShimData*>(this_ptr);
    DSBCAPS* caps = (DSBCAPS*)pDSBufferCaps;
    if (!caps) return DSERR_INVALIDPARAM;
    memset(caps, 0, sizeof(DSBCAPS));
    caps->dwSize = sizeof(DSBCAPS);
    caps->dwBufferBytes = buf->buffer_size;
    return DS_OK;
}

static HRESULT dsbuf_GetCurrentPosition(LPDIRECTSOUNDBUFFER this_ptr,
                                          LPDWORD pdwPlay, LPDWORD pdwWrite) {
    DSoundBuffer_ShimData* buf = reinterpret_cast<DSoundBuffer_ShimData*>(this_ptr);
    if (pdwPlay) *pdwPlay = buf->play_cursor;
    if (pdwWrite) *pdwWrite = buf->write_cursor;
    return DS_OK;
}

static HRESULT dsbuf_GetFormat(LPDIRECTSOUNDBUFFER this_ptr, LPWAVEFORMATEX pwfx,
                                DWORD dwSizeAllocated, LPDWORD pdwSizeWritten) {
    DSoundBuffer_ShimData* buf = reinterpret_cast<DSoundBuffer_ShimData*>(this_ptr);
    DWORD size = sizeof(WAVEFORMATEX);
    if (size > dwSizeAllocated) size = dwSizeAllocated;
    if (pwfx) memcpy(pwfx, &buf->format, size);
    if (pdwSizeWritten) *pdwSizeWritten = size;
    return DS_OK;
}

static HRESULT dsbuf_GetVolume(LPDIRECTSOUNDBUFFER this_ptr, LPLONG plVolume) {
    DSoundBuffer_ShimData* buf = reinterpret_cast<DSoundBuffer_ShimData*>(this_ptr);
    if (plVolume) *plVolume = buf->volume;
    return DS_OK;
}

static HRESULT dsbuf_GetPan(LPDIRECTSOUNDBUFFER this_ptr, LPLONG plPan) {
    DSoundBuffer_ShimData* buf = reinterpret_cast<DSoundBuffer_ShimData*>(this_ptr);
    if (plPan) *plPan = buf->pan;
    return DS_OK;
}

static HRESULT dsbuf_GetFrequency(LPDIRECTSOUNDBUFFER this_ptr, LPDWORD pdwFrequency) {
    DSoundBuffer_ShimData* buf = reinterpret_cast<DSoundBuffer_ShimData*>(this_ptr);
    if (pdwFrequency) *pdwFrequency = buf->frequency;
    return DS_OK;
}

static HRESULT dsbuf_GetStatus(LPDIRECTSOUNDBUFFER this_ptr, LPDWORD pdwStatus) {
    DSoundBuffer_ShimData* buf = reinterpret_cast<DSoundBuffer_ShimData*>(this_ptr);
    DWORD status = 0;
    if (buf->is_playing) status |= DSBSTATUS_PLAYING;
    if (buf->is_looping) status |= DSBSTATUS_LOOPING;
    if (pdwStatus) *pdwStatus = status;
    return DS_OK;
}

static HRESULT dsbuf_Initialize(LPDIRECTSOUNDBUFFER this_ptr, LPDIRECTSOUND pDS,
                                 LPDSBUFFERDESC pcDesc) {
    (void)this_ptr; (void)pDS; (void)pcDesc;
    return DS_OK;
}

static HRESULT dsbuf_Lock(LPDIRECTSOUNDBUFFER this_ptr, DWORD dwOffset, DWORD dwBytes,
                           LPVOID* ppvAudioPtr1, LPDWORD pdwAudioBytes1,
                           LPVOID* ppvAudioPtr2, LPDWORD pdwAudioBytes2, DWORD dwFlags) {
    (void)dwFlags;
    DSoundBuffer_ShimData* buf = reinterpret_cast<DSoundBuffer_ShimData*>(this_ptr);

    DSND_LOG_RL(8, 1000, "Lock dev=%u off=%u bytes=%u size=%u pc=%u flags=0x%x",
                (unsigned)buf->device_id, (unsigned)dwOffset, (unsigned)dwBytes,
                (unsigned)buf->buffer_size, (unsigned)buf->play_cursor, (unsigned)dwFlags);

    if (!buf->audio_data) return DSERR_INVALIDPARAM;

    // Handle wrap-around for circular buffer
    if (dwOffset + dwBytes <= buf->buffer_size) {
        // No wrap
        if (ppvAudioPtr1) *ppvAudioPtr1 = buf->audio_data + dwOffset;
        if (pdwAudioBytes1) *pdwAudioBytes1 = dwBytes;
        if (ppvAudioPtr2) *ppvAudioPtr2 = nullptr;
        if (pdwAudioBytes2) *pdwAudioBytes2 = 0;
    } else {
        // Wraps around
        DWORD first_part = buf->buffer_size - dwOffset;
        DWORD second_part = dwBytes - first_part;
        if (ppvAudioPtr1) *ppvAudioPtr1 = buf->audio_data + dwOffset;
        if (pdwAudioBytes1) *pdwAudioBytes1 = first_part;
        if (ppvAudioPtr2) *ppvAudioPtr2 = buf->audio_data;
        if (pdwAudioBytes2) *pdwAudioBytes2 = second_part;
    }

    return DS_OK;
}

static HRESULT dsbuf_Play(LPDIRECTSOUNDBUFFER this_ptr, DWORD dwReserved1,
                           DWORD dwPriority, DWORD dwFlags) {
    (void)dwReserved1; (void)dwPriority;
    DSoundBuffer_ShimData* buf = reinterpret_cast<DSoundBuffer_ShimData*>(this_ptr);
    buf->is_playing = 1;
    buf->is_looping = (dwFlags & DSBPLAY_LOOPING) ? 1 : 0;
    DSND_LOG("Play: dev=%u size=%u pc=%u flags=0x%x looping=%d primary=%d shared=%d",
         (unsigned)buf->device_id, (unsigned)buf->buffer_size, (unsigned)buf->play_cursor,
         (unsigned)dwFlags, buf->is_looping, buf->is_primary, buf->audio_data_shared);
    if (buf->device_id) {
        SDL_PauseAudioDevice(buf->device_id, 0);
    }
    return DS_OK;
}

static HRESULT dsbuf_SetCurrentPosition(LPDIRECTSOUNDBUFFER this_ptr, DWORD dwNewPosition) {
    DSoundBuffer_ShimData* buf = reinterpret_cast<DSoundBuffer_ShimData*>(this_ptr);
    buf->play_cursor = buf->buffer_size ? (dwNewPosition % buf->buffer_size) : 0;
    DSND_LOG("SetCurrentPosition: dev=%u pos=%u -> pc=%u",
         (unsigned)buf->device_id, (unsigned)dwNewPosition, (unsigned)buf->play_cursor);
    return DS_OK;
}

static HRESULT dsbuf_SetFormat(LPDIRECTSOUNDBUFFER this_ptr, LPCWAVEFORMATEX pcfxFormat) {
    DSoundBuffer_ShimData* buf = reinterpret_cast<DSoundBuffer_ShimData*>(this_ptr);
    if (pcfxFormat) {
        memcpy(&buf->format, pcfxFormat, sizeof(WAVEFORMATEX));
        buf->frequency = pcfxFormat->nSamplesPerSec;
    }
    DSND_LOG("SetFormat: primary=%d tag=%u ch=%u rate=%u bits=%u",
         buf->is_primary,
         pcfxFormat ? pcfxFormat->wFormatTag : 0,
         pcfxFormat ? pcfxFormat->nChannels : 0,
         pcfxFormat ? (unsigned)pcfxFormat->nSamplesPerSec : 0u,
         pcfxFormat ? pcfxFormat->wBitsPerSample : 0);
    return DS_OK;
}

static HRESULT dsbuf_SetVolume(LPDIRECTSOUNDBUFFER this_ptr, long lVolume) {
    DSoundBuffer_ShimData* buf = reinterpret_cast<DSoundBuffer_ShimData*>(this_ptr);
    buf->volume = lVolume;
    return DS_OK;
}

static HRESULT dsbuf_SetPan(LPDIRECTSOUNDBUFFER this_ptr, long lPan) {
    DSoundBuffer_ShimData* buf = reinterpret_cast<DSoundBuffer_ShimData*>(this_ptr);
    buf->pan = lPan;
    return DS_OK;
}

static HRESULT dsbuf_SetFrequency(LPDIRECTSOUNDBUFFER this_ptr, DWORD dwFrequency) {
    DSoundBuffer_ShimData* buf = reinterpret_cast<DSoundBuffer_ShimData*>(this_ptr);
    buf->frequency = dwFrequency;
    // TODO: Reinitialize audio device with new frequency if playing
    return DS_OK;
}

static HRESULT dsbuf_Stop(LPDIRECTSOUNDBUFFER this_ptr) {
    DSoundBuffer_ShimData* buf = reinterpret_cast<DSoundBuffer_ShimData*>(this_ptr);
    buf->is_playing = 0;
    if (buf->device_id) {
        SDL_PauseAudioDevice(buf->device_id, 1);
    }
    return DS_OK;
}

static HRESULT dsbuf_Unlock(LPDIRECTSOUNDBUFFER this_ptr, LPVOID pvAudioPtr1,
                              DWORD dwAudioBytes1, LPVOID pvAudioPtr2, DWORD dwAudioBytes2) {
    (void)this_ptr; (void)pvAudioPtr2; (void)dwAudioBytes2;
    // Peek at the first 16 bytes of what the game just wrote — helps
    // distinguish "real mixed audio" vs "silent zero-fill" vs "garbage".
    // Rate-limited to match Lock; same first-8-then-every-1000th cadence.
    static int unlock_tick = 0;
    unlock_tick++;
    if (unlock_tick > 8 && (unlock_tick % 1000) != 0) return DS_OK;

    if (pvAudioPtr1 && dwAudioBytes1 >= 16) {
        const uint8_t* p = (const uint8_t*)pvAudioPtr1;
        int nonzero = 0;
        for (unsigned i = 0; i < 16; i++) if (p[i] != 0) nonzero++;
        DSND_LOG("Unlock#%d: bytes1=%u nonzero/16=%d head=%02x%02x %02x%02x %02x%02x %02x%02x",
             unlock_tick, (unsigned)dwAudioBytes1, nonzero,
             p[0], p[1], p[2], p[3], p[4], p[5], p[6], p[7]);
    } else {
        DSND_LOG("Unlock#%d: bytes1=%u (no peek)", unlock_tick, (unsigned)dwAudioBytes1);
    }
    return DS_OK;
}

static HRESULT dsbuf_Restore(LPDIRECTSOUNDBUFFER this_ptr) {
    (void)this_ptr;
    return DS_OK;
}

// =============================================================================
// IDirectSound3DBuffer methods (parameter storage only, no spatial audio)
// =============================================================================

static HRESULT ds3d_QueryInterface(IDirectSound3DBuffer* this_ptr, void* riid, void** ppv) {
    (void)this_ptr; (void)riid; (void)ppv;
    return DSERR_UNSUPPORTED;
}
static ULONG ds3d_AddRef(IDirectSound3DBuffer* this_ptr) {
    DSound3DBuffer_ShimData* s = reinterpret_cast<DSound3DBuffer_ShimData*>(this_ptr);
    return ++s->ref_count;
}
static ULONG ds3d_Release(IDirectSound3DBuffer* this_ptr) {
    DSound3DBuffer_ShimData* s = reinterpret_cast<DSound3DBuffer_ShimData*>(this_ptr);
    if (--s->ref_count == 0) { free(s); return 0; }
    return s->ref_count;
}

static HRESULT ds3d_GetAllParameters(IDirectSound3DBuffer* this_ptr, LPDS3DBUFFER p) {
    DSound3DBuffer_ShimData* s = reinterpret_cast<DSound3DBuffer_ShimData*>(this_ptr);
    if (p) memcpy(p, &s->params, sizeof(DS3DBUFFER));
    return DS_OK;
}
static HRESULT ds3d_GetConeAngles(IDirectSound3DBuffer* this_ptr, LPDWORD pIn, LPDWORD pOut) {
    DSound3DBuffer_ShimData* s = reinterpret_cast<DSound3DBuffer_ShimData*>(this_ptr);
    if (pIn) *pIn = s->params.dwInsideConeAngle;
    if (pOut) *pOut = s->params.dwOutsideConeAngle;
    return DS_OK;
}
static HRESULT ds3d_GetConeOrientation(IDirectSound3DBuffer* this_ptr, D3DVECTOR* pv) {
    DSound3DBuffer_ShimData* s = reinterpret_cast<DSound3DBuffer_ShimData*>(this_ptr);
    if (pv) *pv = s->params.vConeOrientation;
    return DS_OK;
}
static HRESULT ds3d_GetConeOutsideVolume(IDirectSound3DBuffer* this_ptr, LPLONG pl) {
    DSound3DBuffer_ShimData* s = reinterpret_cast<DSound3DBuffer_ShimData*>(this_ptr);
    if (pl) *pl = s->params.lConeOutsideVolume;
    return DS_OK;
}
static HRESULT ds3d_GetMaxDistance(IDirectSound3DBuffer* this_ptr, D3DVALUE* pfl) {
    DSound3DBuffer_ShimData* s = reinterpret_cast<DSound3DBuffer_ShimData*>(this_ptr);
    if (pfl) *pfl = s->params.flMaxDistance;
    return DS_OK;
}
static HRESULT ds3d_GetMinDistance(IDirectSound3DBuffer* this_ptr, D3DVALUE* pfl) {
    DSound3DBuffer_ShimData* s = reinterpret_cast<DSound3DBuffer_ShimData*>(this_ptr);
    if (pfl) *pfl = s->params.flMinDistance;
    return DS_OK;
}
static HRESULT ds3d_GetMode(IDirectSound3DBuffer* this_ptr, LPDWORD pdw) {
    DSound3DBuffer_ShimData* s = reinterpret_cast<DSound3DBuffer_ShimData*>(this_ptr);
    if (pdw) *pdw = s->params.dwMode;
    return DS_OK;
}
static HRESULT ds3d_GetPosition(IDirectSound3DBuffer* this_ptr, D3DVECTOR* pv) {
    DSound3DBuffer_ShimData* s = reinterpret_cast<DSound3DBuffer_ShimData*>(this_ptr);
    if (pv) *pv = s->params.vPosition;
    return DS_OK;
}
static HRESULT ds3d_GetVelocity(IDirectSound3DBuffer* this_ptr, D3DVECTOR* pv) {
    DSound3DBuffer_ShimData* s = reinterpret_cast<DSound3DBuffer_ShimData*>(this_ptr);
    if (pv) *pv = s->params.vVelocity;
    return DS_OK;
}

static HRESULT ds3d_SetAllParameters(IDirectSound3DBuffer* this_ptr, LPDS3DBUFFER p, DWORD apply) {
    (void)apply;
    DSound3DBuffer_ShimData* s = reinterpret_cast<DSound3DBuffer_ShimData*>(this_ptr);
    if (p) memcpy(&s->params, p, sizeof(DS3DBUFFER));
    return DS_OK;
}
static HRESULT ds3d_SetConeAngles(IDirectSound3DBuffer* this_ptr, DWORD in, DWORD out, DWORD apply) {
    (void)apply;
    DSound3DBuffer_ShimData* s = reinterpret_cast<DSound3DBuffer_ShimData*>(this_ptr);
    s->params.dwInsideConeAngle = in;
    s->params.dwOutsideConeAngle = out;
    return DS_OK;
}
static HRESULT ds3d_SetConeOrientation(IDirectSound3DBuffer* this_ptr, D3DVALUE x, D3DVALUE y, D3DVALUE z, DWORD apply) {
    (void)apply;
    DSound3DBuffer_ShimData* s = reinterpret_cast<DSound3DBuffer_ShimData*>(this_ptr);
    s->params.vConeOrientation.x = x;
    s->params.vConeOrientation.y = y;
    s->params.vConeOrientation.z = z;
    return DS_OK;
}
static HRESULT ds3d_SetConeOutsideVolume(IDirectSound3DBuffer* this_ptr, long vol, DWORD apply) {
    (void)apply;
    DSound3DBuffer_ShimData* s = reinterpret_cast<DSound3DBuffer_ShimData*>(this_ptr);
    s->params.lConeOutsideVolume = vol;
    return DS_OK;
}
static HRESULT ds3d_SetMaxDistance(IDirectSound3DBuffer* this_ptr, D3DVALUE fl, DWORD apply) {
    (void)apply;
    DSound3DBuffer_ShimData* s = reinterpret_cast<DSound3DBuffer_ShimData*>(this_ptr);
    s->params.flMaxDistance = fl;
    return DS_OK;
}
static HRESULT ds3d_SetMinDistance(IDirectSound3DBuffer* this_ptr, D3DVALUE fl, DWORD apply) {
    (void)apply;
    DSound3DBuffer_ShimData* s = reinterpret_cast<DSound3DBuffer_ShimData*>(this_ptr);
    s->params.flMinDistance = fl;
    return DS_OK;
}
static HRESULT ds3d_SetMode(IDirectSound3DBuffer* this_ptr, DWORD mode, DWORD apply) {
    (void)apply;
    DSound3DBuffer_ShimData* s = reinterpret_cast<DSound3DBuffer_ShimData*>(this_ptr);
    s->params.dwMode = mode;
    return DS_OK;
}
static HRESULT ds3d_SetPosition(IDirectSound3DBuffer* this_ptr, D3DVALUE x, D3DVALUE y, D3DVALUE z, DWORD apply) {
    (void)apply;
    DSound3DBuffer_ShimData* s = reinterpret_cast<DSound3DBuffer_ShimData*>(this_ptr);
    s->params.vPosition.x = x; s->params.vPosition.y = y; s->params.vPosition.z = z;
    return DS_OK;
}
static HRESULT ds3d_SetVelocity(IDirectSound3DBuffer* this_ptr, D3DVALUE x, D3DVALUE y, D3DVALUE z, DWORD apply) {
    (void)apply;
    DSound3DBuffer_ShimData* s = reinterpret_cast<DSound3DBuffer_ShimData*>(this_ptr);
    s->params.vVelocity.x = x; s->params.vVelocity.y = y; s->params.vVelocity.z = z;
    return DS_OK;
}

// =============================================================================
// IDirectSound3DListener methods (parameter storage only)
// =============================================================================

static HRESULT ds3dl_QueryInterface(IDirectSound3DListener* this_ptr, void* riid, void** ppv) {
    (void)this_ptr; (void)riid; (void)ppv;
    return DSERR_UNSUPPORTED;
}
static ULONG ds3dl_AddRef(IDirectSound3DListener* this_ptr) {
    DSound3DListener_ShimData* s = reinterpret_cast<DSound3DListener_ShimData*>(this_ptr);
    return ++s->ref_count;
}
static ULONG ds3dl_Release(IDirectSound3DListener* this_ptr) {
    DSound3DListener_ShimData* s = reinterpret_cast<DSound3DListener_ShimData*>(this_ptr);
    if (--s->ref_count == 0) { free(s); return 0; }
    return s->ref_count;
}

static HRESULT ds3dl_GetAllParameters(IDirectSound3DListener* this_ptr, LPDS3DLISTENER p) {
    DSound3DListener_ShimData* s = reinterpret_cast<DSound3DListener_ShimData*>(this_ptr);
    if (p) memcpy(p, &s->params, sizeof(DS3DLISTENER));
    return DS_OK;
}
static HRESULT ds3dl_GetDistanceFactor(IDirectSound3DListener* this_ptr, D3DVALUE* pfl) {
    DSound3DListener_ShimData* s = reinterpret_cast<DSound3DListener_ShimData*>(this_ptr);
    if (pfl) *pfl = s->params.flDistanceFactor;
    return DS_OK;
}
static HRESULT ds3dl_GetDopplerFactor(IDirectSound3DListener* this_ptr, D3DVALUE* pfl) {
    DSound3DListener_ShimData* s = reinterpret_cast<DSound3DListener_ShimData*>(this_ptr);
    if (pfl) *pfl = s->params.flDopplerFactor;
    return DS_OK;
}
static HRESULT ds3dl_GetOrientation(IDirectSound3DListener* this_ptr, D3DVECTOR* pFront, D3DVECTOR* pTop) {
    DSound3DListener_ShimData* s = reinterpret_cast<DSound3DListener_ShimData*>(this_ptr);
    if (pFront) *pFront = s->params.vOrientFront;
    if (pTop) *pTop = s->params.vOrientTop;
    return DS_OK;
}
static HRESULT ds3dl_GetPosition(IDirectSound3DListener* this_ptr, D3DVECTOR* pv) {
    DSound3DListener_ShimData* s = reinterpret_cast<DSound3DListener_ShimData*>(this_ptr);
    if (pv) *pv = s->params.vPosition;
    return DS_OK;
}
static HRESULT ds3dl_GetRolloffFactor(IDirectSound3DListener* this_ptr, D3DVALUE* pfl) {
    DSound3DListener_ShimData* s = reinterpret_cast<DSound3DListener_ShimData*>(this_ptr);
    if (pfl) *pfl = s->params.flRolloffFactor;
    return DS_OK;
}
static HRESULT ds3dl_GetVelocity(IDirectSound3DListener* this_ptr, D3DVECTOR* pv) {
    DSound3DListener_ShimData* s = reinterpret_cast<DSound3DListener_ShimData*>(this_ptr);
    if (pv) *pv = s->params.vVelocity;
    return DS_OK;
}

static HRESULT ds3dl_SetAllParameters(IDirectSound3DListener* this_ptr, LPDS3DLISTENER p, DWORD apply) {
    (void)apply;
    DSound3DListener_ShimData* s = reinterpret_cast<DSound3DListener_ShimData*>(this_ptr);
    if (p) memcpy(&s->params, p, sizeof(DS3DLISTENER));
    return DS_OK;
}
static HRESULT ds3dl_SetDistanceFactor(IDirectSound3DListener* this_ptr, D3DVALUE fl, DWORD apply) {
    (void)apply;
    DSound3DListener_ShimData* s = reinterpret_cast<DSound3DListener_ShimData*>(this_ptr);
    s->params.flDistanceFactor = fl;
    return DS_OK;
}
static HRESULT ds3dl_SetDopplerFactor(IDirectSound3DListener* this_ptr, D3DVALUE fl, DWORD apply) {
    (void)apply;
    DSound3DListener_ShimData* s = reinterpret_cast<DSound3DListener_ShimData*>(this_ptr);
    s->params.flDopplerFactor = fl;
    return DS_OK;
}
static HRESULT ds3dl_SetOrientation(IDirectSound3DListener* this_ptr,
                                     D3DVALUE xf, D3DVALUE yf, D3DVALUE zf,
                                     D3DVALUE xt, D3DVALUE yt, D3DVALUE zt, DWORD apply) {
    (void)apply;
    DSound3DListener_ShimData* s = reinterpret_cast<DSound3DListener_ShimData*>(this_ptr);
    s->params.vOrientFront.x = xf; s->params.vOrientFront.y = yf; s->params.vOrientFront.z = zf;
    s->params.vOrientTop.x = xt; s->params.vOrientTop.y = yt; s->params.vOrientTop.z = zt;
    return DS_OK;
}
static HRESULT ds3dl_SetPosition(IDirectSound3DListener* this_ptr, D3DVALUE x, D3DVALUE y, D3DVALUE z, DWORD apply) {
    (void)apply;
    DSound3DListener_ShimData* s = reinterpret_cast<DSound3DListener_ShimData*>(this_ptr);
    s->params.vPosition.x = x; s->params.vPosition.y = y; s->params.vPosition.z = z;
    return DS_OK;
}
static HRESULT ds3dl_SetRolloffFactor(IDirectSound3DListener* this_ptr, D3DVALUE fl, DWORD apply) {
    (void)apply;
    DSound3DListener_ShimData* s = reinterpret_cast<DSound3DListener_ShimData*>(this_ptr);
    s->params.flRolloffFactor = fl;
    return DS_OK;
}
static HRESULT ds3dl_SetVelocity(IDirectSound3DListener* this_ptr, D3DVALUE x, D3DVALUE y, D3DVALUE z, DWORD apply) {
    (void)apply;
    DSound3DListener_ShimData* s = reinterpret_cast<DSound3DListener_ShimData*>(this_ptr);
    s->params.vVelocity.x = x; s->params.vVelocity.y = y; s->params.vVelocity.z = z;
    return DS_OK;
}
static HRESULT ds3dl_CommitDeferredSettings(IDirectSound3DListener* this_ptr) {
    (void)this_ptr;
    return DS_OK;
}

// =============================================================================
// IDirectSoundCapture methods (stubs)
// =============================================================================

static HRESULT dscap_QueryInterface(IDirectSoundCapture* this_ptr, void* riid, void** ppv) {
    (void)this_ptr; (void)riid; (void)ppv; return DSERR_UNSUPPORTED;
}
static ULONG dscap_AddRef(IDirectSoundCapture* this_ptr) {
    DSoundCapture_ShimData* s = reinterpret_cast<DSoundCapture_ShimData*>(this_ptr);
    return ++s->ref_count;
}
static ULONG dscap_Release(IDirectSoundCapture* this_ptr) {
    DSoundCapture_ShimData* s = reinterpret_cast<DSoundCapture_ShimData*>(this_ptr);
    if (--s->ref_count == 0) { free(s); return 0; }
    return s->ref_count;
}
static HRESULT dscap_CreateCaptureBuffer(IDirectSoundCapture* this_ptr, void* pcDesc,
                                          LPDIRECTSOUNDCAPTUREBUFFER* ppBuf, LPUNKNOWN outer) {
    (void)this_ptr; (void)pcDesc; (void)outer;
    DSoundCaptureBuffer_ShimData* buf = (DSoundCaptureBuffer_ShimData*)calloc(1, sizeof(DSoundCaptureBuffer_ShimData));
    if (!buf) return DSERR_OUTOFMEMORY;
    populate_dscapturebuffer_vtable(&buf->vtable_data);
    buf->vtable = &buf->vtable_data;
    buf->ref_count = 1;
    *ppBuf = reinterpret_cast<IDirectSoundCaptureBuffer*>(buf);
    return DS_OK;
}
static HRESULT dscap_GetCaps(IDirectSoundCapture* this_ptr, LPDSCCAPS pCaps) {
    (void)this_ptr;
    if (pCaps) { memset(pCaps, 0, sizeof(DSCCAPS)); pCaps->dwSize = sizeof(DSCCAPS); }
    return DS_OK;
}
static HRESULT dscap_Initialize(IDirectSoundCapture* this_ptr, LPGUID p) {
    (void)this_ptr; (void)p; return DS_OK;
}

// =============================================================================
// IDirectSoundCaptureBuffer methods (stubs)
// =============================================================================

static HRESULT dscapbuf_QueryInterface(IDirectSoundCaptureBuffer* p, void* r, void** ppv) {
    (void)p; (void)r; (void)ppv; return DSERR_UNSUPPORTED;
}
static ULONG dscapbuf_AddRef(IDirectSoundCaptureBuffer* p) {
    DSoundCaptureBuffer_ShimData* s = reinterpret_cast<DSoundCaptureBuffer_ShimData*>(p);
    return ++s->ref_count;
}
static ULONG dscapbuf_Release(IDirectSoundCaptureBuffer* p) {
    DSoundCaptureBuffer_ShimData* s = reinterpret_cast<DSoundCaptureBuffer_ShimData*>(p);
    if (--s->ref_count == 0) { free(s); return 0; }
    return s->ref_count;
}
static HRESULT dscapbuf_GetCaps(IDirectSoundCaptureBuffer* p, LPDSCCAPS c) {
    (void)p; if (c) { memset(c, 0, sizeof(DSCCAPS)); c->dwSize = sizeof(DSCCAPS); } return DS_OK;
}
static HRESULT dscapbuf_GetCurrentPosition(IDirectSoundCaptureBuffer* p, LPDWORD a, LPDWORD b) {
    (void)p; if (a) *a = 0; if (b) *b = 0; return DS_OK;
}
static HRESULT dscapbuf_GetFormat(IDirectSoundCaptureBuffer* p, LPWAVEFORMATEX w, DWORD s, LPDWORD pw) {
    (void)p; (void)w; (void)s; if (pw) *pw = 0; return DS_OK;
}
static HRESULT dscapbuf_GetStatus(IDirectSoundCaptureBuffer* p, LPDWORD s) {
    (void)p; if (s) *s = 0; return DS_OK;
}
static HRESULT dscapbuf_Initialize(IDirectSoundCaptureBuffer* p, LPDIRECTSOUNDCAPTURE ds, void* d) {
    (void)p; (void)ds; (void)d; return DS_OK;
}
static HRESULT dscapbuf_Lock(IDirectSoundCaptureBuffer* p, DWORD off, DWORD bytes,
                              LPVOID* p1, LPDWORD s1, LPVOID* p2, LPDWORD s2, DWORD f) {
    (void)p; (void)off; (void)bytes; (void)f;
    if (p1) *p1 = nullptr; if (s1) *s1 = 0;
    if (p2) *p2 = nullptr; if (s2) *s2 = 0;
    return DS_OK;
}
static HRESULT dscapbuf_Start(IDirectSoundCaptureBuffer* p, DWORD f) {
    (void)p; (void)f; return DS_OK;
}
static HRESULT dscapbuf_Stop(IDirectSoundCaptureBuffer* p) {
    (void)p; return DS_OK;
}
static HRESULT dscapbuf_Unlock(IDirectSoundCaptureBuffer* p, LPVOID a1, DWORD s1, LPVOID a2, DWORD s2) {
    (void)p; (void)a1; (void)s1; (void)a2; (void)s2; return DS_OK;
}

// =============================================================================
// Vtable population
// =============================================================================

static void populate_dsound_vtable(IDirectSound_vtable* vt) {
    vt->QueryInterface     = (IUnknown_QueryInterface*)dsound_QueryInterface;
    vt->AddRef             = (IUnknown_AddRef*)dsound_AddRef;
    vt->Release            = (IUnknown_Release*)dsound_Release;
    vt->CreateSoundBuffer  = dsound_CreateSoundBuffer;
    vt->GetCaps            = dsound_GetCaps;
    vt->DuplicateSoundBuffer = dsound_DuplicateSoundBuffer;
    vt->SetCooperativeLevel = dsound_SetCooperativeLevel;
    vt->Compact            = dsound_Compact;
    vt->GetSpeakerConfig   = dsound_GetSpeakerConfig;
    vt->SetSpeakerConfig   = dsound_SetSpeakerConfig;
    vt->Initialize         = dsound_Initialize;
}

static void populate_dsbuffer_vtable(IDirectSoundBuffer_vtable* vt) {
    vt->QueryInterface     = (IUnknown_QueryInterface*)dsbuf_QueryInterface;
    vt->AddRef             = (IUnknown_AddRef*)dsbuf_AddRef;
    vt->Release            = (IUnknown_Release*)dsbuf_Release;
    vt->GetCaps            = dsbuf_GetCaps;
    vt->GetCurrentPosition = dsbuf_GetCurrentPosition;
    vt->GetFormat          = dsbuf_GetFormat;
    vt->GetVolume          = dsbuf_GetVolume;
    vt->GetPan             = dsbuf_GetPan;
    vt->GetFrequency       = dsbuf_GetFrequency;
    vt->GetStatus          = dsbuf_GetStatus;
    vt->Initialize         = dsbuf_Initialize;
    vt->Lock               = dsbuf_Lock;
    vt->Play               = dsbuf_Play;
    vt->SetCurrentPosition = dsbuf_SetCurrentPosition;
    vt->SetFormat          = dsbuf_SetFormat;
    vt->SetVolume          = dsbuf_SetVolume;
    vt->SetPan             = dsbuf_SetPan;
    vt->SetFrequency       = dsbuf_SetFrequency;
    vt->Stop               = dsbuf_Stop;
    vt->Unlock             = dsbuf_Unlock;
    vt->Restore            = dsbuf_Restore;
}

static void populate_ds3dbuffer_vtable(IDirectSound3DBuffer_vtable* vt) {
    vt->QueryInterface      = (IUnknown_QueryInterface*)ds3d_QueryInterface;
    vt->AddRef              = (IUnknown_AddRef*)ds3d_AddRef;
    vt->Release             = (IUnknown_Release*)ds3d_Release;
    vt->GetAllParameters    = ds3d_GetAllParameters;
    vt->GetConeAngles       = ds3d_GetConeAngles;
    vt->GetConeOrientation  = ds3d_GetConeOrientation;
    vt->GetConeOutsideVolume = ds3d_GetConeOutsideVolume;
    vt->GetMaxDistance      = ds3d_GetMaxDistance;
    vt->GetMinDistance      = ds3d_GetMinDistance;
    vt->GetMode             = ds3d_GetMode;
    vt->GetPosition         = ds3d_GetPosition;
    vt->GetVelocity         = ds3d_GetVelocity;
    vt->SetAllParameters    = ds3d_SetAllParameters;
    vt->SetConeAngles       = ds3d_SetConeAngles;
    vt->SetConeOrientation  = ds3d_SetConeOrientation;
    vt->SetConeOutsideVolume = ds3d_SetConeOutsideVolume;
    vt->SetMaxDistance      = ds3d_SetMaxDistance;
    vt->SetMinDistance      = ds3d_SetMinDistance;
    vt->SetMode             = ds3d_SetMode;
    vt->SetPosition         = ds3d_SetPosition;
    vt->SetVelocity         = ds3d_SetVelocity;
}

static void populate_ds3dlistener_vtable(IDirectSound3DListener_vtable* vt) {
    vt->QueryInterface           = (IUnknown_QueryInterface*)ds3dl_QueryInterface;
    vt->AddRef                   = (IUnknown_AddRef*)ds3dl_AddRef;
    vt->Release                  = (IUnknown_Release*)ds3dl_Release;
    vt->GetAllParameters         = ds3dl_GetAllParameters;
    vt->GetDistanceFactor        = ds3dl_GetDistanceFactor;
    vt->GetDopplerFactor         = ds3dl_GetDopplerFactor;
    vt->GetOrientation           = ds3dl_GetOrientation;
    vt->GetPosition              = ds3dl_GetPosition;
    vt->GetRolloffFactor         = ds3dl_GetRolloffFactor;
    vt->GetVelocity              = ds3dl_GetVelocity;
    vt->SetAllParameters         = ds3dl_SetAllParameters;
    vt->SetDistanceFactor        = ds3dl_SetDistanceFactor;
    vt->SetDopplerFactor         = ds3dl_SetDopplerFactor;
    vt->SetOrientation           = ds3dl_SetOrientation;
    vt->SetPosition              = ds3dl_SetPosition;
    vt->SetRolloffFactor         = ds3dl_SetRolloffFactor;
    vt->SetVelocity              = ds3dl_SetVelocity;
    vt->CommitDeferredSettings   = ds3dl_CommitDeferredSettings;
}

static void populate_dscapture_vtable(IDirectSoundCapture_vtable* vt) {
    vt->QueryInterface       = (IUnknown_QueryInterface*)dscap_QueryInterface;
    vt->AddRef               = (IUnknown_AddRef*)dscap_AddRef;
    vt->Release              = (IUnknown_Release*)dscap_Release;
    vt->CreateCaptureBuffer  = dscap_CreateCaptureBuffer;
    vt->GetCaps              = dscap_GetCaps;
    vt->Initialize           = dscap_Initialize;
}

static void populate_dscapturebuffer_vtable(IDirectSoundCaptureBuffer_vtable* vt) {
    vt->QueryInterface       = (IUnknown_QueryInterface*)dscapbuf_QueryInterface;
    vt->AddRef               = (IUnknown_AddRef*)dscapbuf_AddRef;
    vt->Release              = (IUnknown_Release*)dscapbuf_Release;
    vt->GetCaps              = dscapbuf_GetCaps;
    vt->GetCurrentPosition   = dscapbuf_GetCurrentPosition;
    vt->GetFormat            = dscapbuf_GetFormat;
    vt->GetStatus            = dscapbuf_GetStatus;
    vt->Initialize           = dscapbuf_Initialize;
    vt->Lock                 = dscapbuf_Lock;
    vt->Start                = dscapbuf_Start;
    vt->Stop                 = dscapbuf_Stop;
    vt->Unlock               = dscapbuf_Unlock;
}

// =============================================================================
// Public API
// =============================================================================

HRESULT DirectSoundCreate(LPGUID lpGuid, LPDIRECTSOUND* ppDS, LPUNKNOWN pUnkOuter) {
    (void)lpGuid; (void)pUnkOuter;

    if (!ppDS) return DSERR_INVALIDPARAM;

    if (!(SDL_WasInit(SDL_INIT_AUDIO))) {
        if (SDL_Init(SDL_INIT_AUDIO) < 0) {
            return DSERR_NODRIVER;
        }
    }

    DSound_ShimData* shim = (DSound_ShimData*)calloc(1, sizeof(DSound_ShimData));
    if (!shim) return DSERR_OUTOFMEMORY;

    populate_dsound_vtable(&shim->vtable_data);
    shim->vtable = &shim->vtable_data;
    shim->ref_count = 1;
    shim->initialized = 1;

    *ppDS = reinterpret_cast<IDirectSound*>(shim);
    return DS_OK;
}

HRESULT DirectSoundEnumerateA(LPDSENUMCALLBACKA lpDSEnumCallback, LPVOID lpContext) {
    if (!lpDSEnumCallback) return DSERR_INVALIDPARAM;

    // Report the default audio device
    int num_devices = SDL_GetNumAudioDevices(0);
    if (num_devices > 0) {
        const char* name = SDL_GetAudioDeviceName(0, 0);
        lpDSEnumCallback(nullptr, name ? name : "Default Audio Device",
                         "SDL2", lpContext);
    } else {
        lpDSEnumCallback(nullptr, "Default Audio Device", "SDL2", lpContext);
    }

    return DS_OK;
}

// =============================================================================
// Shim Init - Wire up global function pointers
// =============================================================================

#include "globals/globals_610000.h"

void shims_init_dsound() {
    g_DirectSoundCreateFunc = (DIRECT_SOUND_CREATE_FUNC*)DirectSoundCreate;
    g_DirectSoundEnumerateAFunc = (DIRECT_SOUND_ENUMERATE_A_FUNC*)DirectSoundEnumerateA;
}
