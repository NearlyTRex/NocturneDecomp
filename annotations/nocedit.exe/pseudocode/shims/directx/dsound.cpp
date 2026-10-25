// =============================================================================
// DIRECTSOUND SHIM - SDL2-backed DirectSound implementation
// =============================================================================
//
// Implements the DirectSound COM interfaces using SDL2 audio for
// cross-platform sound output. Same vtable shim pattern as ddraw.cpp.
//
// Only the methods the game calls are implemented (snddx.cpp: the device and
// its caps, the primary buffer's format and 3D listener, secondary buffers and
// their duplicates, and their 3D views); the rest of each vtable is null. The
// game never adds a reference to anything, so each object's one Release frees
// it.
//

#include "system/dsound.h"

#include "core/debug_log.h"

#include <SDL.h>
#include <cmath>
#include <cstring>
#include <memory>
#include <vector>

// =============================================================================
// DirectSound constants
// =============================================================================

#define DS_OK 0
#define DSERR_UNSUPPORTED 0x80004001
#define DSERR_NODRIVER 0x88780078

#define DSBCAPS_PRIMARYBUFFER 0x00000001

#define DSBPLAY_LOOPING 0x00000001

#define DSBSTATUS_PLAYING 0x00000001
#define DSBSTATUS_LOOPING 0x00000004

// SetFrequency's "the buffer's own rate".
#define DSBFREQUENCY_ORIGINAL 0

// =============================================================================
// Internal shim data structures
// =============================================================================

struct DSound_ShimData;
struct DSoundBuffer_ShimData;
struct DSound3DBuffer_ShimData;
struct DSound3DListener_ShimData;

// Forward declarations for vtable population
static void populate_dsound_vtable(IDirectSound_vtable *vt);
static void populate_dsbuffer_vtable(IDirectSoundBuffer_vtable *vt);
static void populate_ds3dbuffer_vtable(IDirectSound3DBuffer_vtable *vt);
static void populate_ds3dlistener_vtable(IDirectSound3DListener_vtable *vt);

// COM vtable layout: the game reads offset 0 as a POINTER to the vtable
// struct, not the vtable struct itself. Each ShimData must start with a
// vtable POINTER, with the actual vtable data stored separately (inline
// as vtable_data here; wired up in the populate_*_vtable + assignment).

// The output: stereo S16 at 44.1kHz, exactly, since SDL is allowed no changes
// and converts to whatever the host has.
const int kDeviceRate = 44100;
const int kDeviceChannels = 2;

struct DSound_ShimData {
    IDirectSound_vtable *vtable;
    IDirectSound_vtable vtable_data;
    SDL_AudioDeviceID device_id;
    std::vector<int> mix; // the accumulator, a device buffer's worth of samples
};

struct DSoundBuffer_ShimData {
    IDirectSoundBuffer_vtable *vtable;
    IDirectSoundBuffer_vtable vtable_data;
    DSound_ShimData *dsound;
    // Shared with every duplicate, and kept while any of them is: freeSample
    // releases a sample's buffer whether or not its duplicates still play.
    std::shared_ptr<Uint8[]> samples;
    Uint8 *audio_data; // samples.get()
    DWORD buffer_size;
    DWORD play_cursor;
    int is_playing;
    int is_looping;
    int is_primary;
    int audio_data_shared; // 1 for a duplicate (DuplicateSoundBuffer)
    // long, as the generated SetVolume signature takes it; the value fits the
    // API's 32-bit LONG.
    long volume; // -10000 to 0 (hundredths of dB, 0 = full volume)
    DWORD frequency;
    WAVEFORMATEX format;
    DSound3DBuffer_ShimData *d3d; // 3D view of this buffer, if the game made one
    double play_pos_frames;       // fractional read position, for rate conversion
};

struct DSound3DBuffer_ShimData {
    IDirectSound3DBuffer_vtable *vtable;
    IDirectSound3DBuffer_vtable vtable_data;
    DS3DBUFFER params;
    // The sound buffer this 3D view belongs to. DirectSound's 3D buffer is a
    // second interface onto the SAME buffer, so its parameters have to reach
    // that buffer's mixing — otherwise they are write-only state.
    DSoundBuffer_ShimData *parent;
};

struct DSound3DListener_ShimData {
    IDirectSound3DListener_vtable *vtable;
    IDirectSound3DListener_vtable vtable_data;
    DS3DLISTENER params;
    DSound_ShimData *dsound; // whose mixer reads it
};

// The one 3D listener the game creates, remembered at QueryInterface time.
static DSound3DListener_ShimData *g_ds3d_listener = nullptr;

// DirectSound's distance attenuation for a 3D buffer, as a linear gain.
//
// The engine leans on this entirely for positional sounds. CDirectSoundDevice::
// setSfxPos divides the channel volume back OUT of the value it passes to
// SetVolume and folds it into flMinDistance/flMaxDistance instead, leaving the
// falloff to DirectSound. Ignoring these parameters therefore plays every
// positional sound at its raw volume; only the software-mixed path attenuates
// on its own.
//
// DirectSound's model: no attenuation within flMinDistance, then falloff scaled
// by the listener's rolloff factor, and no further attenuation past
// flMaxDistance:
//     d    = clamp(|listener - source|, min, max)
//     gain = (min / d) ^ rolloff
// The game never sets the rolloff, so it is DirectSound's default of 1.
// Positions and min/max distances share the application's vector unit, so the
// listener's distance factor (metres per unit, 0.3048 here) does not enter.
static float ds3d_distance_gain(const DSoundBuffer_ShimData *buf) {
    const DSound3DBuffer_ShimData *d3d = buf->d3d;
    if (d3d == nullptr)
        return 1.0f;

    // DS3DMODE_DISABLE (2): no 3D processing at all. The engine sets this for
    // non-positional sounds, which carry their volume in SetVolume instead.
    if (d3d->params.dwMode == 2)
        return 1.0f;

    // DS3DMODE_HEADRELATIVE (1): the position is already relative to the
    // listener, so do not subtract it again.
    float lx = 0.0f, ly = 0.0f, lz = 0.0f;
    if (d3d->params.dwMode != 1 && g_ds3d_listener != nullptr) {
        lx = g_ds3d_listener->params.vPosition.x;
        ly = g_ds3d_listener->params.vPosition.y;
        lz = g_ds3d_listener->params.vPosition.z;
    }

    const float dx = d3d->params.vPosition.x - lx;
    const float dy = d3d->params.vPosition.y - ly;
    const float dz = d3d->params.vPosition.z - lz;

    float dist = sqrtf(dx * dx + dy * dy + dz * dz);

    // A NaN coordinate at either end would sail through everything below: NaN
    // compares false against everything, so the distance clamps become no-ops
    // and the NaN comes back as the gain.
    if (dist != dist) {
        DLOG_RL("sound", 4, 500,
                "3D state is NaN, ignoring attenuation: src=(%g,%g,%g) "
                "listener=(%g,%g,%g) mode=%u",
                d3d->params.vPosition.x, d3d->params.vPosition.y, d3d->params.vPosition.z, lx, ly,
                lz, d3d->params.dwMode);
        return 1.0f;
    }

    const float dmin = (d3d->params.flMinDistance > 0.0f) ? d3d->params.flMinDistance : 1.0f;
    const float dmax = (d3d->params.flMaxDistance > dmin) ? d3d->params.flMaxDistance : dmin;
    if (dist < dmin)
        dist = dmin;
    if (dist > dmax)
        dist = dmax;

    // dist is at least dmin, so the gain is within (0, 1].
    return dmin / dist;
}

// =============================================================================
// The mixer — one output stream, all voices summed into it
// =============================================================================
//
// DirectSound has ONE output stream. Secondary buffers are voices; the mixer
// (hardware or software) sums them into the primary buffer with saturation, and
// that single result is what reaches the card.
//
// So: one device, one accumulator, every playing buffer summed into it. Rate,
// depth and channel count are converted per voice, since a secondary buffer may
// be any format regardless of the output format.
//
// Giving each secondary buffer its own OS audio device instead would leave the
// summing to the host, with every voice at full scale on an independent clock
// and no shared headroom — which matches neither DirectSound nor the engine's
// own software mixer, and is loudest on the sounds that play continuously.

#define DSOUND_MAX_VOICES 64
static DSoundBuffer_ShimData *g_voices[DSOUND_MAX_VOICES];
static int g_voice_count = 0;

// Each secondary buffer and duplicate registers once, when it is made.
static void dsound_register_voice(DSoundBuffer_ShimData *buf) {
    if (g_voice_count < DSOUND_MAX_VOICES) {
        g_voices[g_voice_count++] = buf;
    } else {
        DLOG("sound", "voice registry full; buffer %p will be silent", (void *)buf);
    }
}

static void dsound_unregister_voice(DSoundBuffer_ShimData *buf) {
    for (int i = 0; i < g_voice_count; i++) {
        if (g_voices[i] == buf) {
            g_voices[i] = g_voices[--g_voice_count];
            g_voices[g_voice_count] = nullptr;
            return;
        }
    }
}

// One source frame -> one signed 16-bit sample per channel.
static inline void read_source_frame(const DSoundBuffer_ShimData *buf, size_t frame, int src_ch,
                                     int src_bytes, int *out_l, int *out_r) {
    const Uint8 *p = buf->audio_data + frame * (size_t)(src_ch * src_bytes);
    int l, r;
    if (src_bytes == 1) {
        // DirectSound 8-bit PCM is UNSIGNED, centred on 128.
        l = ((int)p[0] - 128) << 8;
        r = (src_ch > 1) ? (((int)p[1] - 128) << 8) : l;
    } else {
        l = (int)(Sint16)(p[0] | (p[1] << 8));
        r = (src_ch > 1) ? (int)(Sint16)(p[2] | (p[3] << 8)) : l;
    }
    *out_l = l;
    *out_r = r;
}

// The bytes in one frame of a buffer's format: the game gives every secondary
// buffer one, and 8 or 16 bits.
static DWORD frame_bytes_of(const WAVEFORMATEX &format) {
    return (DWORD)format.nChannels * ((format.wBitsPerSample == 8) ? 1 : 2);
}

// Sum one voice into the accumulator, converting rate/depth/channels.
static void mix_voice(DSoundBuffer_ShimData *buf, int *acc, int frames) {
    if (!buf->is_playing)
        return;

    const int src_ch = buf->format.nChannels;
    const int src_bytes = (buf->format.wBitsPerSample == 8) ? 1 : 2;
    const size_t frame_bytes = frame_bytes_of(buf->format);
    const size_t total_frames = buf->buffer_size / frame_bytes;
    if (total_frames == 0)
        return;

    float gain = 1.0f;
    if (buf->volume < 0)
        gain = powf(10.0f, (float)buf->volume / 2000.0f);
    gain *= ds3d_distance_gain(buf);

    const double step = (double)buf->frequency / (double)kDeviceRate;
    double pos = buf->play_pos_frames;

    for (int i = 0; i < frames; i++) {
        if (pos >= (double)total_frames) {
            if (buf->is_looping) {
                pos = fmod(pos, (double)total_frames);
            } else {
                // A non-looping buffer that plays out stops with its cursor
                // back at 0, so a later Play starts it again from the top.
                buf->is_playing = 0;
                pos = 0.0;
                break;
            }
        }
        int l, r;
        read_source_frame(buf, (size_t)pos, src_ch, src_bytes, &l, &r);
        acc[i * kDeviceChannels + 0] += (int)((float)l * gain);
        acc[i * kDeviceChannels + 1] += (int)((float)r * gain);
        pos += step;
    }

    buf->play_pos_frames = pos;
    // Keep the byte cursor in step; the engine reads it to decide where to
    // write streaming data. A looping buffer's position may have run past its
    // end, to be wrapped on the next pass.
    size_t cur = (size_t)pos;
    if (cur >= total_frames)
        cur = total_frames - 1;
    buf->play_cursor = (DWORD)(cur * frame_bytes);
}

static void dsound_mix_callback(void *userdata, Uint8 *stream, int len) {
    DSound_ShimData *ds = (DSound_ShimData *)userdata;
    const int slots = len / 2; // device is S16
    const int frames = slots / kDeviceChannels;
    int *acc = ds->mix.data();
    memset(acc, 0, sizeof(acc[0]) * (size_t)slots);

    int active = 0;
    for (int i = 0; i < g_voice_count; i++) {
        DSoundBuffer_ShimData *buf = g_voices[i];
        if (buf->is_playing)
            active++;
        mix_voice(buf, acc, frames);
    }

    // Saturate, as DirectSound's mixer does — summed voices clip rather than
    // wrapping round.
    Sint16 *out = (Sint16 *)stream;
    for (int i = 0; i < slots; i++) {
        int s = acc[i];
        if (s > 32767)
            s = 32767;
        if (s < -32768)
            s = -32768;
        out[i] = (Sint16)s;
    }

    DLOG_RL("sound", 4, 400, "mix: voices=%d active=%d frames=%d", g_voice_count, active, frames);
}

// Bring up the single output device if it is not running yet. No device, no
// sound: the buffers carry on, unheard, and the next Play tries again.
static void dsound_ensure_device(DSound_ShimData *ds) {
    if (ds->device_id != 0)
        return;

    SDL_AudioSpec want;
    SDL_memset(&want, 0, sizeof(want));
    want.freq = kDeviceRate;
    want.format = AUDIO_S16SYS;
    want.channels = kDeviceChannels;
    want.samples = 1024;
    want.callback = dsound_mix_callback;
    want.userdata = ds;

    ds->mix.assign((size_t)want.samples * kDeviceChannels, 0);
    ds->device_id = SDL_OpenAudioDevice(nullptr, 0, &want, nullptr, 0);
    DLOG("sound", "mixer device: dev=%u", (unsigned)ds->device_id);
    if (ds->device_id)
        SDL_PauseAudioDevice(ds->device_id, 0);
}

// =============================================================================
// IDirectSound methods
// =============================================================================

static ULONG dsound_Release(IDirectSound *this_ptr) {
    DSound_ShimData *shim = reinterpret_cast<DSound_ShimData *>(this_ptr);
    if (shim->device_id)
        SDL_CloseAudioDevice(shim->device_id);
    delete shim;
    return 0;
}

// A new voice on `ds`'s mixer, sharing nothing.
static DSoundBuffer_ShimData *new_voice(DSound_ShimData *ds, DWORD bytes,
                                        const WAVEFORMATEX &format) {
    DSoundBuffer_ShimData *buf = new DSoundBuffer_ShimData();
    populate_dsbuffer_vtable(&buf->vtable_data);
    buf->vtable = &buf->vtable_data;
    buf->dsound = ds;
    buf->buffer_size = bytes;
    memcpy(&buf->format, &format, sizeof(WAVEFORMATEX));
    buf->frequency = format.nSamplesPerSec;
    return buf;
}

// A voice goes on the shared mixer, which sums it into the one output stream
// the way DirectSound sums voices into the primary buffer. It gets no device
// of its own.
static void add_voice(DSoundBuffer_ShimData *buf) {
    dsound_ensure_device(buf->dsound);
    SDL_LockAudioDevice(buf->dsound->device_id);
    dsound_register_voice(buf);
    SDL_UnlockAudioDevice(buf->dsound->device_id);
}

static HRESULT dsound_CreateSoundBuffer(LPDIRECTSOUND this_ptr, LPDSBUFFERDESC pcDesc,
                                        LPLPDIRECTSOUNDBUFFER ppBuf, LPUNKNOWN pUnkOuter) {
    (void)pUnkOuter;
    DSound_ShimData *ds = reinterpret_cast<DSound_ShimData *>(this_ptr);

    int is_primary = (pcDesc->dwFlags & DSBCAPS_PRIMARYBUFFER) != 0;

    DLOG("sound", "CreateSoundBuffer: primary=%d flags=0x%x bytes=%u fmt=tag%u ch%u rate%u bits%u",
         is_primary, (unsigned)pcDesc->dwFlags, (unsigned)pcDesc->dwBufferBytes,
         pcDesc->lpwfxFormat ? pcDesc->lpwfxFormat->wFormatTag : 0,
         pcDesc->lpwfxFormat ? pcDesc->lpwfxFormat->nChannels : 0,
         pcDesc->lpwfxFormat ? (unsigned)pcDesc->lpwfxFormat->nSamplesPerSec : 0u,
         pcDesc->lpwfxFormat ? pcDesc->lpwfxFormat->wBitsPerSample : 0);

    DSoundBuffer_ShimData *buf;
    if (is_primary) {
        // The primary buffer is the output; it holds no samples, and its
        // format is the one SetFormat gives it.
        buf = new DSoundBuffer_ShimData();
        populate_dsbuffer_vtable(&buf->vtable_data);
        buf->vtable = &buf->vtable_data;
        buf->dsound = ds;
        buf->is_primary = 1;
    } else {
        // A secondary buffer is a voice, with the format the game always gives
        // one.
        buf = new_voice(ds, pcDesc->dwBufferBytes, *pcDesc->lpwfxFormat);
        buf->samples.reset(new Uint8[pcDesc->dwBufferBytes]());
        buf->audio_data = buf->samples.get();
        add_voice(buf);
        DLOG("sound", "  secondary voice registered: %ux%ubit @%uHz (voices=%d)",
             (unsigned)buf->format.nChannels, (unsigned)buf->format.wBitsPerSample,
             (unsigned)buf->frequency, g_voice_count);
    }

    *ppBuf = reinterpret_cast<IDirectSoundBuffer *>(buf);
    return DS_OK;
}

// What the enumeration callback asks before it lists the device: hardware
// mixing, as a card with sixteen voices would have.
static HRESULT dsound_GetCaps(LPDIRECTSOUND this_ptr, LPDSCAPS pCaps) {
    (void)this_ptr;
    memset(pCaps, 0, sizeof(DSCAPS));
    pCaps->dwSize = sizeof(DSCAPS);
    pCaps->dwPrimaryBuffers = 1;
    pCaps->dwMaxHwMixingAllBuffers = 16;
    pCaps->dwMaxHwMixingStaticBuffers = 16;
    pCaps->dwMaxHwMixingStreamingBuffers = 16;
    return DS_OK;
}

static HRESULT dsound_DuplicateSoundBuffer(LPDIRECTSOUND this_ptr, LPDIRECTSOUNDBUFFER pOriginal,
                                           LPLPDIRECTSOUNDBUFFER ppDuplicate) {
    (void)this_ptr;
    DSoundBuffer_ShimData *orig = reinterpret_cast<DSoundBuffer_ShimData *>(pOriginal);

    DSoundBuffer_ShimData *dup = new_voice(orig->dsound, orig->buffer_size, orig->format);
    dup->volume = orig->volume;
    dup->frequency = orig->frequency;

    // Per DirectSound: duplicates share sample memory with the original so
    // that writes to the original (e.g. streamed music) are seen by the
    // duplicate's playback.
    dup->samples = orig->samples;
    dup->audio_data = orig->audio_data;
    dup->audio_data_shared = 1;

    // Like the original, the duplicate is a voice on the shared mixer.
    add_voice(dup);

    *ppDuplicate = reinterpret_cast<IDirectSoundBuffer *>(dup);
    return DS_OK;
}

// One process, one output: the level asked for changes nothing.
static HRESULT dsound_SetCooperativeLevel(LPDIRECTSOUND this_ptr, HWND hwnd, DWORD dwLevel) {
    (void)this_ptr;
    (void)hwnd;
    (void)dwLevel;
    return DS_OK;
}

// =============================================================================
// IDirectSoundBuffer methods
// =============================================================================

static HRESULT dsbuf_QueryInterface(IDirectSoundBuffer *this_ptr, void *riid, void **ppv) {
    DSoundBuffer_ShimData *buf = reinterpret_cast<DSoundBuffer_ShimData *>(this_ptr);

    // Discriminate by GUID. The game queries for either:
    //   IID_IDirectSound3DBuffer   = {279AFA86-4981-11CE-A521-0020AF0BE560}
    //   IID_IDirectSound3DListener = {279AFA84-4981-11CE-A521-0020AF0BE560}
    // These differ only in Data1. Returning the wrong shim type silently
    // corrupts state: the game then calls vtable methods by slot, and
    // slot N of the Buffer vtable is a different method than slot N of the
    // Listener vtable.
    const GUID *g = reinterpret_cast<const GUID *>(riid);
    if (g->Data1 == 0x279AFA84) {
        // IDirectSound3DListener
        DSound3DListener_ShimData *lst = new DSound3DListener_ShimData();
        populate_ds3dlistener_vtable(&lst->vtable_data);
        lst->vtable = &lst->vtable_data;
        lst->params.dwSize = sizeof(DS3DLISTENER);
        lst->params.flDistanceFactor = 1.0f;
        lst->params.flRolloffFactor = 1.0f;
        lst->params.flDopplerFactor = 1.0f;
        lst->dsound = buf->dsound;
        // There is one listener; remember it so the mixer can read its position
        // when attenuating 3D buffers.
        g_ds3d_listener = lst;
        *ppv = lst;
        return DS_OK;
    }
    // IID_IDirectSound3DBuffer: 3D buffer shim.
    DSound3DBuffer_ShimData *d3d = new DSound3DBuffer_ShimData();
    populate_ds3dbuffer_vtable(&d3d->vtable_data);
    d3d->vtable = &d3d->vtable_data;
    d3d->params.dwSize = sizeof(DS3DBUFFER);
    d3d->params.flMinDistance = 1.0f;
    d3d->params.flMaxDistance = 1000000000.0f;
    // Wire both directions so the mixer can find these parameters. Without this
    // the 3D interface is write-only and every positional sound plays at full
    // volume — see ds3d_distance_gain().
    d3d->parent = buf;
    buf->d3d = d3d;
    *ppv = d3d;
    return DS_OK;
}

static ULONG dsbuf_Release(IDirectSoundBuffer *this_ptr) {
    DSoundBuffer_ShimData *buf = reinterpret_cast<DSoundBuffer_ShimData *>(this_ptr);
    // Take it off the mixer before freeing, under the audio lock so the
    // callback cannot be walking the registry at the same time.
    SDL_AudioDeviceID dev = buf->dsound->device_id;
    SDL_LockAudioDevice(dev);
    dsound_unregister_voice(buf);
    SDL_UnlockAudioDevice(dev);
    // The 3D interface can outlive the buffer; ds3d_Release dereferences
    // this back-pointer to clear buf->d3d, so it must not survive the free.
    if (buf->d3d != nullptr)
        buf->d3d->parent = nullptr;
    delete buf;
    return 0;
}

static HRESULT dsbuf_GetCurrentPosition(LPDIRECTSOUNDBUFFER this_ptr, LPDWORD pdwPlay,
                                        LPDWORD pdwWrite) {
    DSoundBuffer_ShimData *buf = reinterpret_cast<DSoundBuffer_ShimData *>(this_ptr);
    *pdwPlay = buf->play_cursor;
    // The mixer copies a buffer's samples out as the device callback runs, so
    // nothing past the play cursor is committed yet: the safe write point is
    // the play cursor itself.
    *pdwWrite = buf->play_cursor;
    return DS_OK;
}

// The game asks with the Win32 WAVEFORMATEX's 18 bytes, which the host's
// struct rounds up past; no more than it allocated is written.
static HRESULT dsbuf_GetFormat(LPDIRECTSOUNDBUFFER this_ptr, LPWAVEFORMATEX pwfx,
                               DWORD dwSizeAllocated, LPDWORD pdwSizeWritten) {
    DSoundBuffer_ShimData *buf = reinterpret_cast<DSoundBuffer_ShimData *>(this_ptr);
    DWORD size = sizeof(WAVEFORMATEX);
    if (size > dwSizeAllocated)
        size = dwSizeAllocated;
    memcpy(pwfx, &buf->format, size);
    if (pdwSizeWritten)
        *pdwSizeWritten = size;
    return DS_OK;
}

static HRESULT dsbuf_GetStatus(LPDIRECTSOUNDBUFFER this_ptr, LPDWORD pdwStatus) {
    DSoundBuffer_ShimData *buf = reinterpret_cast<DSoundBuffer_ShimData *>(this_ptr);
    DWORD status = 0;
    if (buf->is_playing)
        status |= DSBSTATUS_PLAYING;
    if (buf->is_looping)
        status |= DSBSTATUS_LOOPING;
    *pdwStatus = status;
    return DS_OK;
}

static HRESULT dsbuf_Lock(LPDIRECTSOUNDBUFFER this_ptr, DWORD dwOffset, DWORD dwBytes,
                          LPVOID *ppvAudioPtr1, LPDWORD pdwAudioBytes1, LPVOID *ppvAudioPtr2,
                          LPDWORD pdwAudioBytes2, DWORD dwFlags) {
    (void)dwFlags;
    DSoundBuffer_ShimData *buf = reinterpret_cast<DSoundBuffer_ShimData *>(this_ptr);

    DLOG_RL("sound", 8, 1000, "Lock dev=%u off=%u bytes=%u size=%u pc=%u flags=0x%x",
            (unsigned)buf->dsound->device_id, (unsigned)dwOffset, (unsigned)dwBytes,
            (unsigned)buf->buffer_size, (unsigned)buf->play_cursor, (unsigned)dwFlags);

    // Handle wrap-around for circular buffer
    *ppvAudioPtr1 = buf->audio_data + dwOffset;
    if (dwOffset + dwBytes <= buf->buffer_size) {
        // No wrap
        *pdwAudioBytes1 = dwBytes;
        *ppvAudioPtr2 = nullptr;
        *pdwAudioBytes2 = 0;
    } else {
        // Wraps around
        DWORD first_part = buf->buffer_size - dwOffset;
        *pdwAudioBytes1 = first_part;
        *ppvAudioPtr2 = buf->audio_data;
        *pdwAudioBytes2 = dwBytes - first_part;
    }

    return DS_OK;
}

static HRESULT dsbuf_Play(LPDIRECTSOUNDBUFFER this_ptr, DWORD dwReserved1, DWORD dwPriority,
                          DWORD dwFlags) {
    (void)dwReserved1;
    (void)dwPriority;
    DSoundBuffer_ShimData *buf = reinterpret_cast<DSoundBuffer_ShimData *>(this_ptr);
    // Play never moves the cursor. On a playing buffer it only changes the
    // looping flag; a stopped one resumes where Stop, SetCurrentPosition or
    // the end of the buffer left it.
    SDL_AudioDeviceID dev = buf->dsound->device_id;
    SDL_LockAudioDevice(dev);
    buf->is_looping = (dwFlags & DSBPLAY_LOOPING) ? 1 : 0;
    buf->is_playing = 1;
    SDL_UnlockAudioDevice(dev);
    DLOG("sound", "Play: size=%u pc=%u flags=0x%x looping=%d primary=%d shared=%d",
         (unsigned)buf->buffer_size, (unsigned)buf->play_cursor, (unsigned)dwFlags, buf->is_looping,
         buf->is_primary, buf->audio_data_shared);
    // The shared mixer picks this voice up on its next callback; there is no
    // per-buffer device to unpause. Just make sure the output is running.
    dsound_ensure_device(buf->dsound);
    return DS_OK;
}

static HRESULT dsbuf_SetCurrentPosition(LPDIRECTSOUNDBUFFER this_ptr, DWORD dwNewPosition) {
    DSoundBuffer_ShimData *buf = reinterpret_cast<DSoundBuffer_ShimData *>(this_ptr);
    // The mixer reads play_pos_frames, so that is the position that has to
    // move; play_cursor is only what it reports back. Under the audio lock,
    // since the mixer writes its own position back at the end of each pass.
    const DWORD frame_bytes = frame_bytes_of(buf->format);
    DWORD pos = buf->buffer_size ? (dwNewPosition % buf->buffer_size) : 0;
    pos -= pos % frame_bytes;
    SDL_AudioDeviceID dev = buf->dsound->device_id;
    SDL_LockAudioDevice(dev);
    buf->play_cursor = pos;
    // A whole frame: pos was just aligned to one.
    const DWORD frame = pos / frame_bytes;
    buf->play_pos_frames = (double)frame;
    SDL_UnlockAudioDevice(dev);
    DLOG("sound", "SetCurrentPosition: dev=%u pos=%u -> pc=%u", (unsigned)dev,
         (unsigned)dwNewPosition, (unsigned)buf->play_cursor);
    return DS_OK;
}

// The primary buffer's: the output stays as it is, so this is only recorded,
// for GetFormat to give back.
static HRESULT dsbuf_SetFormat(LPDIRECTSOUNDBUFFER this_ptr, LPCWAVEFORMATEX pcfxFormat) {
    DSoundBuffer_ShimData *buf = reinterpret_cast<DSoundBuffer_ShimData *>(this_ptr);
    memcpy(&buf->format, pcfxFormat, sizeof(WAVEFORMATEX));
    buf->frequency = pcfxFormat->nSamplesPerSec;
    DLOG("sound", "SetFormat: primary=%d tag=%u ch=%u rate=%u bits=%u", buf->is_primary,
         pcfxFormat->wFormatTag, pcfxFormat->nChannels, (unsigned)pcfxFormat->nSamplesPerSec,
         pcfxFormat->wBitsPerSample);
    return DS_OK;
}

static HRESULT dsbuf_SetVolume(LPDIRECTSOUNDBUFFER this_ptr, long lVolume) {
    DSoundBuffer_ShimData *buf = reinterpret_cast<DSoundBuffer_ShimData *>(this_ptr);
    DLOG_RL("sound", 8, 100, "SetVolume buf=%p %ld -> %ld (linear %.3f)", (void *)buf, buf->volume,
            lVolume, (double)(lVolume < 0 ? powf(10.0f, lVolume / 2000.0f) : 1.0f));
    buf->volume = lVolume;
    return DS_OK;
}

// The rate the buffer plays at; DSBFREQUENCY_ORIGINAL, which setSfxPos sends
// for a sound with no frequency scale, is the buffer's own.
static HRESULT dsbuf_SetFrequency(LPDIRECTSOUNDBUFFER this_ptr, DWORD dwFrequency) {
    DSoundBuffer_ShimData *buf = reinterpret_cast<DSoundBuffer_ShimData *>(this_ptr);
    buf->frequency =
        dwFrequency == DSBFREQUENCY_ORIGINAL ? buf->format.nSamplesPerSec : dwFrequency;
    return DS_OK;
}

static HRESULT dsbuf_Stop(LPDIRECTSOUNDBUFFER this_ptr) {
    DSoundBuffer_ShimData *buf = reinterpret_cast<DSoundBuffer_ShimData *>(this_ptr);
    // Stopping a voice must not stop the output — other voices are still on it.
    buf->is_playing = 0;
    return DS_OK;
}

static HRESULT dsbuf_Unlock(LPDIRECTSOUNDBUFFER this_ptr, LPVOID pvAudioPtr1, DWORD dwAudioBytes1,
                            LPVOID pvAudioPtr2, DWORD dwAudioBytes2) {
    (void)this_ptr;
    (void)pvAudioPtr2;
    (void)dwAudioBytes2;
    // Peek at the first 16 bytes of what the game just wrote — helps
    // distinguish "real mixed audio" vs "silent zero-fill" vs "garbage".
    // Rate-limited to match Lock; same first-8-then-every-1000th cadence.
    static int unlock_tick = 0;
    unlock_tick++;
    if (unlock_tick > 8 && (unlock_tick % 1000) != 0)
        return DS_OK;

    if (dwAudioBytes1 >= 16) {
        const uint8_t *p = (const uint8_t *)pvAudioPtr1;
        int nonzero = 0;
        for (unsigned i = 0; i < 16; i++)
            if (p[i] != 0)
                nonzero++;
        DLOG("sound", "Unlock#%d: bytes1=%u nonzero/16=%d head=%02x%02x %02x%02x %02x%02x %02x%02x",
             unlock_tick, (unsigned)dwAudioBytes1, nonzero, p[0], p[1], p[2], p[3], p[4], p[5],
             p[6], p[7]);
    } else {
        DLOG("sound", "Unlock#%d: bytes1=%u (no peek)", unlock_tick, (unsigned)dwAudioBytes1);
    }
    return DS_OK;
}

// =============================================================================
// IDirectSound3DBuffer methods (the parameters the mixer attenuates by)
// =============================================================================

// The game asks a 3D buffer for IKsPropertySet, for EAX, and plays on
// without it.
static HRESULT ds3d_QueryInterface(IDirectSound3DBuffer *this_ptr, void *riid, void **ppv) {
    (void)this_ptr;
    (void)riid;
    (void)ppv;
    return DSERR_UNSUPPORTED;
}

static ULONG ds3d_Release(IDirectSound3DBuffer *this_ptr) {
    DSound3DBuffer_ShimData *s = reinterpret_cast<DSound3DBuffer_ShimData *>(this_ptr);
    // Clear the buffer's back-pointer before freeing. The mixer reads
    // buf->d3d on every callback (ds3d_distance_gain), so leaving it set is a
    // use-after-free in the audio thread for any buffer that outlives its 3D
    // interface. Under the audio lock, as in dsbuf_Release, so the callback
    // cannot be part-way through reading it.
    if (s->parent != nullptr) {
        SDL_AudioDeviceID dev = s->parent->dsound->device_id;
        SDL_LockAudioDevice(dev);
        s->parent->d3d = nullptr;
        SDL_UnlockAudioDevice(dev);
    }
    delete s;
    return 0;
}

static HRESULT ds3d_SetMaxDistance(IDirectSound3DBuffer *this_ptr, D3DVALUE fl, DWORD apply) {
    (void)apply;
    DSound3DBuffer_ShimData *s = reinterpret_cast<DSound3DBuffer_ShimData *>(this_ptr);
    s->params.flMaxDistance = fl;
    return DS_OK;
}
static HRESULT ds3d_SetMinDistance(IDirectSound3DBuffer *this_ptr, D3DVALUE fl, DWORD apply) {
    (void)apply;
    DSound3DBuffer_ShimData *s = reinterpret_cast<DSound3DBuffer_ShimData *>(this_ptr);
    s->params.flMinDistance = fl;
    return DS_OK;
}
static HRESULT ds3d_SetMode(IDirectSound3DBuffer *this_ptr, DWORD mode, DWORD apply) {
    (void)apply;
    DSound3DBuffer_ShimData *s = reinterpret_cast<DSound3DBuffer_ShimData *>(this_ptr);
    s->params.dwMode = mode;
    return DS_OK;
}
static HRESULT ds3d_SetPosition(IDirectSound3DBuffer *this_ptr, D3DVALUE x, D3DVALUE y, D3DVALUE z,
                                DWORD apply) {
    (void)apply;
    DSound3DBuffer_ShimData *s = reinterpret_cast<DSound3DBuffer_ShimData *>(this_ptr);
    s->params.vPosition.x = x;
    s->params.vPosition.y = y;
    s->params.vPosition.z = z;
    return DS_OK;
}
// Recorded only: there is no Doppler shift.
static HRESULT ds3d_SetVelocity(IDirectSound3DBuffer *this_ptr, D3DVALUE x, D3DVALUE y, D3DVALUE z,
                                DWORD apply) {
    (void)apply;
    DSound3DBuffer_ShimData *s = reinterpret_cast<DSound3DBuffer_ShimData *>(this_ptr);
    s->params.vVelocity.x = x;
    s->params.vVelocity.y = y;
    s->params.vVelocity.z = z;
    return DS_OK;
}

// =============================================================================
// IDirectSound3DListener methods (its position is what the mixer reads)
// =============================================================================

static ULONG ds3dl_Release(IDirectSound3DListener *this_ptr) {
    DSound3DListener_ShimData *s = reinterpret_cast<DSound3DListener_ShimData *>(this_ptr);
    // The mixer reads the listener on every pass; it has to be forgotten
    // before it is freed, under the audio lock for the same reason.
    SDL_LockAudioDevice(s->dsound->device_id);
    if (g_ds3d_listener == s)
        g_ds3d_listener = nullptr;
    SDL_UnlockAudioDevice(s->dsound->device_id);
    delete s;
    return 0;
}

// Recorded only: the distance factor converts units the attenuation does not
// need converted, and nothing reads the orientation or velocity.
static HRESULT ds3dl_SetDistanceFactor(IDirectSound3DListener *this_ptr, D3DVALUE fl, DWORD apply) {
    (void)apply;
    DSound3DListener_ShimData *s = reinterpret_cast<DSound3DListener_ShimData *>(this_ptr);
    s->params.flDistanceFactor = fl;
    return DS_OK;
}
static HRESULT ds3dl_SetOrientation(IDirectSound3DListener *this_ptr, D3DVALUE xf, D3DVALUE yf,
                                    D3DVALUE zf, D3DVALUE xt, D3DVALUE yt, D3DVALUE zt,
                                    DWORD apply) {
    (void)apply;
    DSound3DListener_ShimData *s = reinterpret_cast<DSound3DListener_ShimData *>(this_ptr);
    s->params.vOrientFront.x = xf;
    s->params.vOrientFront.y = yf;
    s->params.vOrientFront.z = zf;
    s->params.vOrientTop.x = xt;
    s->params.vOrientTop.y = yt;
    s->params.vOrientTop.z = zt;
    return DS_OK;
}
static HRESULT ds3dl_SetPosition(IDirectSound3DListener *this_ptr, D3DVALUE x, D3DVALUE y,
                                 D3DVALUE z, DWORD apply) {
    (void)apply;
    DSound3DListener_ShimData *s = reinterpret_cast<DSound3DListener_ShimData *>(this_ptr);
    s->params.vPosition.x = x;
    s->params.vPosition.y = y;
    s->params.vPosition.z = z;
    return DS_OK;
}
static HRESULT ds3dl_SetVelocity(IDirectSound3DListener *this_ptr, D3DVALUE x, D3DVALUE y,
                                 D3DVALUE z, DWORD apply) {
    (void)apply;
    DSound3DListener_ShimData *s = reinterpret_cast<DSound3DListener_ShimData *>(this_ptr);
    s->params.vVelocity.x = x;
    s->params.vVelocity.y = y;
    s->params.vVelocity.z = z;
    return DS_OK;
}
// Settings apply as they are made.
static HRESULT ds3dl_CommitDeferredSettings(IDirectSound3DListener *this_ptr) {
    (void)this_ptr;
    return DS_OK;
}

// =============================================================================
// Vtable population
// =============================================================================

// The slots the game does not call are left null.
static void populate_dsound_vtable(IDirectSound_vtable *vt) {
    vt->Release = (IUnknown_Release *)dsound_Release;
    vt->CreateSoundBuffer = dsound_CreateSoundBuffer;
    vt->GetCaps = dsound_GetCaps;
    vt->DuplicateSoundBuffer = dsound_DuplicateSoundBuffer;
    vt->SetCooperativeLevel = dsound_SetCooperativeLevel;
}

static void populate_dsbuffer_vtable(IDirectSoundBuffer_vtable *vt) {
    vt->QueryInterface = (IUnknown_QueryInterface *)dsbuf_QueryInterface;
    vt->Release = (IUnknown_Release *)dsbuf_Release;
    vt->GetCurrentPosition = dsbuf_GetCurrentPosition;
    vt->GetFormat = dsbuf_GetFormat;
    vt->GetStatus = dsbuf_GetStatus;
    vt->Lock = dsbuf_Lock;
    vt->Play = dsbuf_Play;
    vt->SetCurrentPosition = dsbuf_SetCurrentPosition;
    vt->SetFormat = dsbuf_SetFormat;
    vt->SetVolume = dsbuf_SetVolume;
    vt->SetFrequency = dsbuf_SetFrequency;
    vt->Stop = dsbuf_Stop;
    vt->Unlock = dsbuf_Unlock;
}

static void populate_ds3dbuffer_vtable(IDirectSound3DBuffer_vtable *vt) {
    vt->QueryInterface = (IUnknown_QueryInterface *)ds3d_QueryInterface;
    vt->Release = (IUnknown_Release *)ds3d_Release;
    vt->SetMaxDistance = ds3d_SetMaxDistance;
    vt->SetMinDistance = ds3d_SetMinDistance;
    vt->SetMode = ds3d_SetMode;
    vt->SetPosition = ds3d_SetPosition;
    vt->SetVelocity = ds3d_SetVelocity;
}

static void populate_ds3dlistener_vtable(IDirectSound3DListener_vtable *vt) {
    vt->Release = (IUnknown_Release *)ds3dl_Release;
    vt->SetDistanceFactor = ds3dl_SetDistanceFactor;
    vt->SetOrientation = ds3dl_SetOrientation;
    vt->SetPosition = ds3dl_SetPosition;
    vt->SetVelocity = ds3dl_SetVelocity;
    vt->CommitDeferredSettings = ds3dl_CommitDeferredSettings;
}

// =============================================================================
// Public API
// =============================================================================

HRESULT DirectSoundCreate(LPGUID lpGuid, LPDIRECTSOUND *ppDS, LPUNKNOWN pUnkOuter) {
    (void)lpGuid;
    (void)pUnkOuter;

    if (!(SDL_WasInit(SDL_INIT_AUDIO))) {
        if (SDL_Init(SDL_INIT_AUDIO) < 0) {
            return DSERR_NODRIVER;
        }
    }

    DSound_ShimData *shim = new DSound_ShimData();
    populate_dsound_vtable(&shim->vtable_data);
    shim->vtable = &shim->vtable_data;

    *ppDS = reinterpret_cast<IDirectSound *>(shim);
    return DS_OK;
}

// One device: SDL's default output, by its name once SDL's audio is up.
HRESULT DirectSoundEnumerateA(LPDSENUMCALLBACKA lpDSEnumCallback, LPVOID lpContext) {
    const char *name = SDL_GetNumAudioDevices(0) > 0 ? SDL_GetAudioDeviceName(0, 0) : nullptr;
    lpDSEnumCallback(nullptr, name ? name : "Default Audio Device", "SDL2", lpContext);
    return DS_OK;
}

// =============================================================================
// Shim Init - Wire up global function pointers
// =============================================================================

#include "globals/globals_610000.h"

void shims_init_dsound() {
    g_DirectSoundCreateFunc = (DIRECT_SOUND_CREATE_FUNC *)DirectSoundCreate;
    g_DirectSoundEnumerateAFunc = (DIRECT_SOUND_ENUMERATE_A_FUNC *)DirectSoundEnumerateA;
}
