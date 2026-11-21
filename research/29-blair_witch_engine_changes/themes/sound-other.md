# sound-other

[All themes](../README.md)

## `manifest`

| Function | nocedit | Builds | Root | Difference | Port | Evidence |
|---|---|---|---|---|---|---|
| `CSndMain::resetSoundSystemDefaults` | 0x005aae00 | bw3 |  | After the loop that sets all 32 channels to 1.0 and enabled, BW3 calls setSfxChannelVol(1, 0.25f*0.6), so SFX channel 1 defaults to 0.15. readIni can still override it from SfxChannel1Vol. bw1 and bw2 do not have this call. | Add a per-channel default SFX volume table to the game manifest (gamecontent.h schema, data/games/*.toml), defaulting to 1.0 for every channel. Nocturne, BW1 and BW2 stay all 1.0 and BW3 sets channel 1 to 0.15. resetSoundSystemDefaults applies the table instead of the constant. Test: the BW3 manifest yields getSfxChannelVol(1) == 0.15 after the reset, and Nocturne stays 1.0. | bw3 00557f60: setSfxChannelVol_FUN_00556c90(1, 0.25f * (float)0.6) after the do-while. It is absent from nocedit 005aae00 and bw2 005523d0. |

## `noop`

| Function | nocedit | Builds | Root | Difference | Port | Evidence |
|---|---|---|---|---|---|---|
| `CSndMain::analyzeFrequencyBand` | 0x005ac400 | bw1, bw2 |  | The FFT twiddle angle is (float)3.141593f / n instead of the double 3.1415926535 / n. Only the low bits of the spectrum change. | Nothing. CSfxAnalyzer's double transform keeps neither pi, and the band sums differ only below audible or visible precision. | bw1 00576590 line 85: (float10)3.141593f / iVar10. nocedit 005ac400 line 97: 3.1415926535000001. |
| `CSndMain::isSoundBusy` (refuted) | 0x005ab540 | bw1, bw2, bw3 |  | BW returns g_SoundBusyFlag without nocedit's isSoundSystemActive() guard. In the recreation the flag is set only inside enableSoundSystem after an isSoundSystemActive check, and resetSoundDevice clears it before closeSoundDevice marks the device inactive. busy therefore implies active, and the guard can never change the result. | Nothing. The guard is redundant in the recreation. | bw1 00575550: return g_SoundBusyFlag. nocedit 005ab540: isSoundSystemActive() ? g_SoundBusyFlag : 0. recreation sndmain.cpp: enableSoundSystem and resetSoundDevice/closeSoundDevice keep the invariant. |
| `CSndMain::logSoundError` | 0x005adba0 | bw1, bw2, bw3 |  | BW only vsprintf's the message and sends 'SOUND: ', the message and a newline to OutputDebugString. There is no console print and no sounderr.txt report (nocedit wrote one to a Terminal Reality network share). | Nothing. This is a diagnostic, and the recreation keeps its console line and sounderr.txt report on purpose. | bw1 005773f0: three outputDebugString calls. nocedit 005adba0: console printf and the \\q\xfer\fletch\sounderr.txt report. |
| `CSndMain::pollAllSfxSlots` | 0x005acdb0 | bw1, bw2, bw3 | multi-listener-sound | BW polls only when getTime has moved forward by at least 0x1cccc ticks (0.1 s at 8.477105e-7 s per tick) or gone backwards; otherwise the call does nothing. calculateVirtualSpeakerPositions runs only when the dual-listener flag is clear (bw1 g_INT_02c7fc8c, set only by setDualListenerEnabled, which has no callers). Otherwise the step math is the same (clamped to [0, 0.25], and 0 unless hasHardware3DSound > 0, where nocedit tests != 0), and the assert text changes. The throttle exists because BW's mix thread calls this every buffer. Fades still advance by the real elapsed time. | Nothing. The recreation polls once a frame with the frame's delta, already its own cadence. The speaker positions are kept current on every listener set, and with one listener the gate is always open. | bw1 00576f40: iVar3 = now - g_SoundStartTime; if (iVar3<0 \|\| 0x1cccb<iVar3) {...}; if (g_INT_02c7fc8c==0) calculateVirtualSpeakerPositions. setDualListenerEnabled 00573e50 has no cross_references in bw1, bw2 or bw3. |

