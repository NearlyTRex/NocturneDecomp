# EAX reverb

The engine drives Creative's EAX 1.0 listener reverb through DirectSound's `IKsPropertySet`.
nocedit and all three Blair Witch builds do it the same way. It is the only use of EAX: no
per-buffer EAX properties, and no EAX 2.0. The slot that sends it is `setReverb`, described in
[sound_device.md](sound_device.md). [headers/eax/eax1.h](../../headers/eax/eax1.h) gives the
GUIDs, the struct, the environments and the presets below as a C header.

## Getting the property set

`CDirectSoundDevice_setMode` does this after setting the primary buffer's format (nocedit
`005ae830`):

1. Release any previous `g_DirectSoundPropertySet`.
2. Create a temporary secondary buffer: 16-bit mono, 22050 Hz, 1 KB, flags `0x12`
   (`DSBCAPS_STATIC | DSBCAPS_CTRL3D`).
3. Query it for `IDirectSound3DBuffer`, query that for `IKsPropertySet`, and keep the result in
   `g_DirectSoundPropertySet`.
4. Release both buffers.

A card or driver without EAX leaves `g_DirectSoundPropertySet` null. Every later reverb call
then returns at once, and nothing is reported. `CDirectSoundDevice_initPropertySet` (`005ae660`)
is an unreferenced copy of steps 1–4.

### The voice manager

Straight after this, `setMode` sends one more property on the same interface: property 0,
DWORD `1`, to GUID `62A69BAE-DF9D-11D1-99A6-00C04FC99D46`. That GUID is
`DSPROPSETID_VoiceManager` ([Wine's DirectSound tests][wine]), not a 3D-listener set. nocedit
labelled it `g_KSPROPSETID_DirectSound3DListener` (`00681de0`), and it is now
`g_DSPROPSETID_VoiceManager`. In DirectX 7's `dsound.h`, property 0 is the voice-manager mode, and
1 should be automatic voice management. That header was not checked here.

### GUID labels

Each GUID was found by its bytes in each PE and is labelled and typed `GUID` in all five
programs:

| Label | GUID | nocedit | nocturne | bw1 | bw2 | bw3 |
|---|---|---|---|---|---|---|
| `g_IID_IKsPropertySet` | `31EFAC30-515C-11D0-A9AA-00AA0061BE93` | `00681dd0` | `005bed10` | `006235a0` | `0061bf50` | `006044e0` |
| `g_DSPROPSETID_VoiceManager` | `62A69BAE-DF9D-11D1-99A6-00C04FC99D46` | `00681de0` | `005bed20` | `006235b0` | `0061bf60` | `006044f0` |
| `g_DSPROPSETID_EAX_ReverbProperties` | `4A4E6FC1-C341-11D1-B73A-444553540000` | `00681df0` | `005bed30` | `006235c0` | `0061bf70` | `00604500` |
| `g_IID_IDirectSound3DListener` | `279AFA84-4981-11CE-A521-0020AF0BE560` | `00686d58` | `005c3908` | `00627880` | `00621060` | `00608bc8` |
| `g_IID_IDirectSound3DBuffer` | `279AFA86-4981-11CE-A521-0020AF0BE560` | `00686d68` | `005c3918` | `00627870` | `00621070` | `00608bb8` |

`getDirectSoundDevice` queries the primary buffer with the listener IID, when hardware mixing is
on, to get `g_DirectSound3DListener`. `IKsPropertySet` has a second, unreferenced copy in each
program's DirectX GUID block (nocedit `00686da8`). It is left unlabelled.

## The reverb call

`setReverb(volume, decay_time, damping)` sends one 16-byte `EAX_REVERBPROPERTIES` as property 0
of `DSPROPSETID_EAX_ReverbProperties` (`4A4E6FC1-C341-11D1-B73A-444553540000`,
`g_DSPROPSETID_EAX_ReverbProperties`):

| Offset | Field | Sent | Range |
|---:|---|---|---|
| 0x0 | environment | always `0` (GENERIC) | 0–25 |
| 0x4 | volume | preset | 0.0 off – 1.0 max |
| 0x8 | decay_time | preset, seconds | 0.1 – 20.0 |
| 0xc | damping | preset | 0.0 highs decay fastest, 1.0 even, 2.0 lows fastest |

The ranges are EAX 1.0's, as BASS's wrapper of the same call documents them ([BASS][bass]).

**The environment is never sent.** Every preset goes out as GENERIC with that preset's three
values. Whatever the card does differently per environment beyond those three values, the game
never asks for it.

## Presets

`g_ReverbPresetTable` (nocedit `00681efc`; bw1 `006236bc`, bw2 `0061c06c`, bw3 `006045fc`) is
27 `SReverbPreset` entries, identical in every build. Entry 0 is OFF (all zero). Entries 1–26 are
EAX 1.0's 26 environments in enum order, so entry *n* is environment *n*−1, with the values of
the SDK's `EAX_PRESET_*` macros:

| # | Name | Volume | Decay (s) | Damping |
|---:|---|---:|---:|---:|
| 0 | OFF | 0 | 0 | 0 |
| 1 | GENERIC | 0.5 | 1.493 | 0.5 |
| 2 | PADDEDCELL | 0.25 | 0.1 | 0 |
| 3 | ROOM | 0.417 | 0.4 | 0.666 |
| 4 | BATHROOM | 0.653 | 1.499 | 0.166 |
| 5 | LIVINGROOM | 0.208 | 0.478 | 0 |
| 6 | STONEROOM | 0.5 | 2.309 | 0.888 |
| 7 | AUDITORIUM | 0.403 | 4.279 | 0.5 |
| 8 | CONCERTHALL | 0.5 | 3.961 | 0.5 |
| 9 | CAVE | 0.5 | 2.886 | 1.304 |
| 10 | ARENA | 0.361 | 7.284 | 0.332 |
| 11 | HANGAR | 0.5 | 10.0 | 0.3 |
| 12 | CARPETEDHALLWAY | 0.153 | 0.259 | 2.0 |
| 13 | HALLWAY | 0.361 | 1.493 | 0 |
| 14 | STONECORRIDOR | 0.444 | 2.697 | 0.638 |
| 15 | ALLEY | 0.25 | 1.752 | 0.776 |
| 16 | FOREST | 0.111 | 3.145 | 0.472 |
| 17 | CITY | 0.111 | 2.767 | 0.224 |
| 18 | MOUNTAINS | 0.194 | 7.841 | 0.472 |
| 19 | QUARRY | 1.0 | 1.499 | 0.5 |
| 20 | PLAIN | 0.097 | 2.767 | 0.224 |
| 21 | PARKINGLOT | 0.208 | 1.652 | 1.5 |
| 22 | SEWERPIPE | 0.652 | 2.886 | 0.25 |
| 23 | UNDERWATER | 1.0 | 1.499 | 0 |
| 24 | DRUGGED | 0.875 | 8.392 | 1.388 |
| 25 | DIZZY | 0.139 | 17.234 | 0.666 |
| 26 | PSYCHOTIC | 0.486 | 7.563 | 0.806 |

## Which preset plays

- **Per camera.** Each set camera has a `reverb_preset`. A camera with `use_global_fog` set uses
  the set's `default_master_reverb` instead: reverb follows the fog setting. `CDemonSet_setCameraView` applies it with
  `CSound_setReverbPreset(index)`, which looks the values up and calls `CSound_setReverb`.
- **Chosen in the editor's fog menu**: "Edit reverb for camera %s", or "Edit default set reverb"
  (`CSound_selectReverbPreset`, a pick list of the 27 names).
- **Kept across restarts.** `CSound_setReverb` stores the values in `g_SoundReverb`, and
  `sndmain`'s `setReverb` stores them in `g_CachedReverb` before calling the device.
  `enableSoundSystem` sends `g_CachedReverb` again when the device restarts.

## In the port

The DirectSound shim returns `DSERR_UNSUPPORTED` when asked for `IKsPropertySet`
(`ds3d_QueryInterface`). So `g_DirectSoundPropertySet` stays null and the port plays every set
dry, as the original did on a card without EAX. The voice-manager call is skipped for the same
reason.

To hear it, the shim or the recreation would need a reverb of its own, fed the three values per
camera. `decay_time` is a time in seconds and carries over directly. `volume` and `damping` have
no exact counterpart in OpenAL's EFX reverb. The usual mapping (volume to gain, damping to the
high-frequency decay ratio) is a guess people have reported as sounding different
([GameDev.net][gamedev]).

[wine]: https://goma.googlesource.com/wine/+/wine-1.9.5/dlls/dsound/tests/propset.c
[bass]: https://help.thinbasic.com/tbass_seteaxparameters.html
[gamedev]: https://gamedev.net/forums/topic/576206-convert-eax-10-parameters-to-openal-efx-eax-parameters/576206/
