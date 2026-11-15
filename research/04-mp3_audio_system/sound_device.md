# The sound device interface

`CSoundDevice` is the output backend `sndmain.cpp` drives: `CDirectSoundDevice` (snddx.cpp) and
`CWavOutDevice` (sndwav.cpp) implement the full table, and `CWavInDevice`, the recording side,
the first five slots. Ghidra types: `CSoundDeviceFull_vtable`, `CSoundDeviceBasic_vtable`, one
`CSoundDevice_<slot>` funcdef per slot. Tables: nocedit `00663204` / `00663284` / `00663264`;
bw1 `00605b9c` / `00605c10` / `00605bf8`, bw2 `005fbcbc` / `005fbd30` / `005fbd18`, bw3
`005e48dc` / `005e4950` / `005e4938` (DirectSound / WavOut / WavIn).

Each slot's arguments were read from the callers' `ADD ESP,n`, its return from the stub's return
register, and its job from the COM methods the DirectSound body calls.

## Slots

| nocedit | BW | Slot | Arguments after `this` | Notes |
|---:|---:|---|---|---|
| 0x00 | 0x00 | close | | |
| 0x04 | 0x04 | start | | |
| 0x08 | 0x08 | reset | | |
| 0x0c | 0x0c | setMode | bits_per_sample, channels, sample_rate, `int *out_samples_per_block` | |
| 0x10 | 0x10 | poll | | Output devices take only `this` (callers `ADD ESP,4`). WavIn's poll takes `(short *output_buffer, int num_samples)` |
| 0x14 | 0x14 | hasHardware3D | | |
| — | 0x18 | commitDeferredSettings | | **BW only.** `IDirectSound3DListener::CommitDeferredSettings` (+0x44), called once at the end of `flushSoundChanges` |
| 0x18 | 0x1c | set3DListenerPos | x, y, z (`double`) | |
| 0x1c | 0x20 | set3DListenerOrient | front, top, right (9 values) | nocedit `double`, BW `float`, passed straight to `SetOrientation` (+0x34) |
| 0x20 | 0x24 | set3DListenerVelocity | x, y, z | nocedit `double`, BW `float` (`SetVelocity`, +0x40) |
| 0x24 | 0x28 | set3DListenerDistanceFactor | distance_in_feet | nocedit `double`, BW `float` (`SetDistanceFactor`, +0x2c) |
| 0x28 | 0x2c | setReverb | volume, decay_time, damping (`float`) | See [Reverb](#reverb). Named `commitDeferredSettings` before |
| 0x2c | 0x30 | allocateSample | nocedit bits_per_sample, channel_count, sample_rate, sample_count; BW `CSampleInfo *` | |
| 0x30 | 0x34 | freeSample | buffer_id | |
| 0x34 | 0x38 | lockSample | buffer_id, offset, size | Returns the locked pointer |
| 0x38 | 0x3c | unlockSample | buffer_id, offset, size | Returns nothing; the one caller ignores EAX |
| 0x3c | 0x40 | allocateSfx | sample_buffer_id | |
| 0x40 | 0x44 | applySfxChanges | `CSfxSlot *`, update_flags | Pushes the flagged slot properties to the device. Named `setSfxPos` before; the game's error string still says `setSfxPos` |
| 0x44 | 0x48 | getSfxPlaybackPos | `CSfxSlot *` | Returns a `double` in EDX:EAX |
| 0x48 | 0x4c | startSfx | `CSfxSlot *` | |
| 0x4c | 0x50 | killSfx | `CSfxSlot *` | |
| 0x50 | 0x54 | isSfxPlaying | `CSfxSlot *` | |

## Reverb

The DirectSound device's `setReverb` sends EAX 1.0 listener reverb through `IKsPropertySet`
(+0x10), and WavOut's is an empty stub. [eax.md](eax.md) covers the property set, the payload,
the 27 presets, and how a preset is chosen per camera.

- nocedit named all of this as a listener orientation: `set3DListenerOrientRight`,
  `g_DeferredOrientRight`, `SSoundModeEntry.listener_orient`.
- **The DirectSound shim refuses `IKsPropertySet`**, so reverb is never heard in the port. The
  decomp's `enableSoundSystem` keep used to call the slot with no arguments. That was harmless
  only because of this.
