# Mistyped String Buffer Report

Candidates where a `TerminatedCString` global is copied via Watcom's
`MOVS[BWD].REP` primitive with a byte count larger than the declared
string length. Ghidra treated these as string literals, but the original
binary declared them as fixed-size mutable buffers; writes through the
pointer crash on `.rodata`, and reads past the declared length pull
garbage from adjacent memory.

Fix each in Ghidra: retype from `TerminatedCString` to `char[N]` where N
matches the "Bytes copied" column below. Re-export; the `.cpp` declaration
will become `char g_X[N] = "…";` (writable buffer, zero-padded).

## Summary

- **Confirmed via MOVS.REP** (definitive): 3 globals — bytes copied > declared string length
- **Confirmed via call-site size** (strong): 63 globals — pushed as arg to a function alongside a plausible-buffer-size immediate
- **Layout-gap candidates** (heuristic): 69 globals — distance to next named symbol exceeds declared length, suggesting zero-padded buffer
- **Safe reads**: 1 globals (bytes copied ≤ declared length; no action)
- **Unknown symbols**: 63 references to symbols that aren't TerminatedCString

> MOVS.REP findings are definitive — the byte count comes directly from the
> copy instruction. Layout-gap candidates are heuristic: Ghidra may have
> simply failed to label intervening data as anything, so the gap is an
> *upper bound* on the real buffer size. Verify in Ghidra that the gap is
> all zero-padding before retyping, and use that observed size (not the raw
> gap) for the `char[N]`.

## Confirmed retype candidates

### `s_file_error_006818e0` (orig addr `0x006818e0`)

- String: `"(file error)"` (declared length 13 incl. null)
- Bytes copied: **260** (largest across 1 call site)
- Suggested retype: `char s_file_error_006818e0[260] = "(file error)";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/skeledit.cpp/CSkeleton_importSkeletonFile_FUN_00592690.asm` (MOVSD.REP, ECX=65 → 260 bytes)

### `s_gore_00681878` (orig addr `0x00681878`)

- String: `"gore"` (declared length 5 incl. null)
- Bytes copied: **100** (largest across 1 call site)
- Suggested retype: `char s_gore_00681878[100] = "gore";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/skeledit.cpp/CDeformableModel_determinePartsFromS3D_FUN_0058f810.asm` (MOVSD.REP, ECX=25 → 100 bytes)

### `s_s_10_0_0_105_0067b868` (orig addr `0x0067b868`)

- String: `"10.0.0.105"` (declared length 11 incl. null)
- Bytes copied: **100** (largest across 1 call site)
- Suggested retype: `char s_s_10_0_0_105_0067b868[100] = "10.0.0.105";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/game.cpp/joinNetworkGame_FUN_004e2fc0.asm` (MOVSD.REP, ECX=25 → 100 bytes)

## Confirmed via call-site size pattern

Globals pushed to a CALL as an argument alongside an immediate in the range
[8, 8192] that's larger than the declared string length. The immediate is
almost always the buffer-size parameter of the callee (e.g. dialog prompt,
`fgets`, `snprintf`, etc.). Use the size that's most frequent across sites;
if sites disagree, the MAX is the correct buffer length.

### `s_gameSettings_0063d9eb`

- String: `"gameSettings"` (declared length 13 incl. null)
- Sizes observed across 1 call site: 1×500 (buffer size = **500**)
- Suggested retype: `char s_gameSettings_0063d9eb[500] = "gameSettings";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/netgame.cpp/CNetGame_runLobby_FUN_00541390.asm` (pushed alongside size 500)

### `s_heroType_0063d9e2`

- String: `"heroType"` (declared length 9 incl. null)
- Sizes observed across 1 call site: 1×400 (buffer size = **400**)
- Suggested retype: `char s_heroType_0063d9e2[400] = "heroType";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/netgame.cpp/CNetGame_runLobby_FUN_00541390.asm` (pushed alongside size 400)

### `s_bugCount_00616e80`

- String: `"bugCount"` (declared length 9 incl. null)
- Sizes observed across 1 call site: 1×400 (buffer size = **400**)
- Suggested retype: `char s_bugCount_00616e80[400] = "bugCount";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/bugs.cpp/CBugs_getPropertyList_FUN_004277e0.asm` (pushed alongside size 400)

### `s_Ready_0063d9dc`

- String: `"Ready"` (declared length 6 incl. null)
- Sizes observed across 1 call site: 1×300 (buffer size = **300**)
- Suggested retype: `char s_Ready_0063d9dc[300] = "Ready";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/netgame.cpp/CNetGame_runLobby_FUN_00541390.asm` (pushed alongside size 300)

### `s_GroundTypes_006816d8`

- String: `".\GroundTypes"` (declared length 14 incl. null)
- Sizes observed across 1 call site: 1×260 (buffer size = **260**)
- Suggested retype: `char s_GroundTypes_006816d8[260] = ".\GroundTypes";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/setedit.cpp/CDemonSet_readIni_FUN_00584900.asm` (pushed alongside size 260)

### `s_m_d_Y_00627b65`

- String: `"%m/%d/%Y"` (declared length 9 incl. null)
- Sizes observed across 1 call site: 1×256 (buffer size = **256**)
- Suggested retype: `char s_m_d_Y_00627b65[256] = "%m/%d/%Y";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/engine/fileio.cpp/CFileManager_extractPodFile_FUN_004b6e10.asm` (pushed alongside size 256)

### `s_DeviceName_00650f37`

- String: `"DeviceName"` (declared length 11 incl. null)
- Sizes observed across 1 call site: 1×256 (buffer size = **256**)
- Suggested retype: `char s_DeviceName_00650f37[256] = "DeviceName";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/sound/sndmain.cpp/readIni_FUN_005abf20.asm` (pushed alongside size 256)

### `s_Send_chat_0063da3b`

- String: `"Send chat"` (declared length 10 incl. null)
- Sizes observed across 1 call site: 1×256 (buffer size = **256**)
- Suggested retype: `char s_Send_chat_0063da3b[256] = "Send chat";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/netgame.cpp/CNetGame_runLobby_FUN_00541390.asm` (pushed alongside size 256)

### `s_menucld2_00639f36`

- String: `"menucld2"` (declared length 9 incl. null)
- Sizes observed across 2 call sites: 2×256 (buffer size = **256**)
- Suggested retype: `char s_menucld2_00639f36[256] = "menucld2";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/moon.cpp/CMoon_init_FUN_00529ae0.asm` (pushed alongside size 256)

### `s_Ping_0063d9d7`

- String: `"Ping"` (declared length 5 incl. null)
- Sizes observed across 1 call site: 1×200 (buffer size = **200**)
- Suggested retype: `char s_Ping_0063d9d7[200] = "Ping";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/netgame.cpp/CNetGame_runLobby_FUN_00541390.asm` (pushed alongside size 200)

### `s_flyCount_0062a472`

- String: `"flyCount"` (declared length 9 incl. null)
- Sizes observed across 1 call site: 1×200 (buffer size = **200**)
- Suggested retype: `char s_flyCount_0062a472[200] = "flyCount";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/flies.cpp/CFlies_getPropertyList_FUN_004ccaa0.asm` (pushed alongside size 200)

### `s_d_006495b9`

- String: `"%d\n"` (declared length 4 incl. null)
- Sizes observed across 1 call site: 1×200 (buffer size = **200**)
- Suggested retype: `char s_d_006495b9[200] = "%d\n";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/setutil.cpp/C3DSLight_load_FUN_00586310.asm` (pushed alongside size 200)

### `s_CEnemy_006804b8`

- String: `"CEnemy"` (declared length 7 incl. null)
- Sizes observed across 1 call site: 1×200 (buffer size = **200**)
- Suggested retype: `char s_CEnemy_006804b8[200] = "CEnemy";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/msnedit.cpp/CDemonMission_enemyRandomizer_FUN_005379e0.asm` (pushed alongside size 200)

### `s_t_00670108`

- String: `"t:\"` (declared length 4 incl. null)
- Sizes observed across 1 call site: 1×200 (buffer size = **200**)
- Suggested retype: `char s_t_00670108[200] = "t:\";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/dmodel.cpp/CKeyFramedModel_showEditorMenu_FUN_0047cbc0.asm` (pushed alongside size 200)

### `s_m_d_y_0061d458`

- String: `"%m%d%y"` (declared length 7 incl. null)
- Sizes observed across 2 call sites: 2×200 (buffer size = **200**)
- Suggested retype: `char s_m_d_y_0061d458[200] = "%m%d%y";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/shape/design.c/embedCopyrightWatermark_FUN_0046b9a0.asm` (pushed alongside size 200)

### `s_Esc_00657f9a`

- String: `"Esc"` (declared length 4 incl. null)
- Sizes observed across 1 call site: 1×200 (buffer size = **200**)
- Suggested retype: `char s_Esc_00657f9a[200] = "Esc";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/wincore/winrun.cpp/getKeyName_FUN_005f3980.asm` (pushed alongside size 200)

### `s_EST_006850bc`

- String: `"EST"` (declared length 4 incl. null)
- Sizes observed across 1 call site: 1×128 (buffer size = **128**)
- Suggested retype: `char s_EST_006850bc[128] = "EST";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/crt/time.c/tzset_FUN_006072f8.asm` (pushed alongside size 128)

### `s_EDT_0068513d`

- String: `"EDT"` (declared length 4 incl. null)
- Sizes observed across 1 call site: 1×128 (buffer size = **128**)
- Suggested retype: `char s_EDT_0068513d[128] = "EDT";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/crt/time.c/tzset_FUN_006072f8.asm` (pushed alongside size 128)

### `s_conin_00659698`

- String: `"conin$"` (declared length 7 incl. null)
- Sizes observed across 1 call site: 1×128 (buffer size = **128**)
- Suggested retype: `char s_conin_00659698[128] = "conin$";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/crt/stdio.c/InitializeConsoleHandles_FUN_0060cdbc.asm` (pushed alongside size 128)

### `s_conout_006596a0`

- String: `"conout$"` (declared length 8 incl. null)
- Sizes observed across 1 call site: 1×128 (buffer size = **128**)
- Suggested retype: `char s_conout_006596a0[128] = "conout$";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/crt/stdio.c/InitializeConsoleHandles_FUN_0060cdbc.asm` (pushed alongside size 128)

### `s_at_006315cd`

- String: `"at"` (declared length 3 incl. null)
- Sizes observed across 1 call site: 1×128 (buffer size = **128**)
- Suggested retype: `char s_at_006315cd[128] = "at";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/main.c/displayErrorAndQuit_FUN_00506f10.asm` (pushed alongside size 128)

### `s_gtfo_txt_006315d0`

- String: `"gtfo.txt"` (declared length 9 incl. null)
- Sizes observed across 1 call site: 1×128 (buffer size = **128**)
- Suggested retype: `char s_gtfo_txt_006315d0[128] = "gtfo.txt";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/main.c/displayErrorAndQuit_FUN_00506f10.asm` (pushed alongside size 128)

### `s_where_mov_source_006581dd`

- String: `"where mov source"` (declared length 17 incl. null)
- Sizes observed across 3 call sites: 3×128 (buffer size = **128**)
- Suggested retype: `char s_where_mov_source_006581dd[128] = "where mov source";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/wincore/winvideo.cpp/openMovie_FUN_005f4700.asm` (pushed alongside size 128)
  - `annotations/nocedit.exe/pseudocode/src/wincore/winvideo.cpp/playMovie_FUN_005f4a00.asm` (pushed alongside size 128)
  - `annotations/nocedit.exe/pseudocode/src/wincore/winvideo.cpp/positionMovieWindow_FUN_005f4500.asm` (pushed alongside size 128)

### `s_anon_00621ed1`

- String: `"+"` (declared length 2 incl. null)
- Sizes observed across 1 call site: 1×100 (buffer size = **100**)
- Suggested retype: `char s_anon_00621ed1[100] = "+";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/cockpit/drawsurf.cpp/testDrawingSurface_FUN_00489d30.asm` (pushed alongside size 100)

### `s_anon_00621ef3`

- String: `"+"` (declared length 2 incl. null)
- Sizes observed across 1 call site: 1×100 (buffer size = **100**)
- Suggested retype: `char s_anon_00621ef3[100] = "+";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/cockpit/drawsurf.cpp/testDrawingSurface_FUN_00489d30.asm` (pushed alongside size 100)

### `s_s_00621efd`

- String: `"%s"` (declared length 3 incl. null)
- Sizes observed across 1 call site: 1×100 (buffer size = **100**)
- Suggested retype: `char s_s_00621efd[100] = "%s";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/cockpit/drawsurf.cpp/testDrawingSurface_FUN_00489d30.asm` (pushed alongside size 100)

### `s_s_00621f00`

- String: `"%s"` (declared length 3 incl. null)
- Sizes observed across 1 call site: 1×100 (buffer size = **100**)
- Suggested retype: `char s_s_00621f00[100] = "%s";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/cockpit/drawsurf.cpp/testDrawingSurface_FUN_00489d30.asm` (pushed alongside size 100)

### `s_s_00621f03`

- String: `"%s"` (declared length 3 incl. null)
- Sizes observed across 1 call site: 1×100 (buffer size = **100**)
- Suggested retype: `char s_s_00621f03[100] = "%s";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/cockpit/drawsurf.cpp/testDrawingSurface_FUN_00489d30.asm` (pushed alongside size 100)

### `s_s_00621f09`

- String: `"%s"` (declared length 3 incl. null)
- Sizes observed across 1 call site: 1×100 (buffer size = **100**)
- Suggested retype: `char s_s_00621f09[100] = "%s";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/cockpit/drawsurf.cpp/testDrawingSurface_FUN_00489d30.asm` (pushed alongside size 100)

### `s_s_00621f18`

- String: `"%s"` (declared length 3 incl. null)
- Sizes observed across 1 call site: 1×100 (buffer size = **100**)
- Suggested retype: `char s_s_00621f18[100] = "%s";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/cockpit/drawsurf.cpp/testDrawingSurface_FUN_00489d30.asm` (pushed alongside size 100)

### `s_s_00621f1b`

- String: `"%s"` (declared length 3 incl. null)
- Sizes observed across 1 call site: 1×100 (buffer size = **100**)
- Suggested retype: `char s_s_00621f1b[100] = "%s";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/cockpit/drawsurf.cpp/testDrawingSurface_FUN_00489d30.asm` (pushed alongside size 100)

### `s_s_00621f1e`

- String: `"%s"` (declared length 3 incl. null)
- Sizes observed across 1 call site: 1×100 (buffer size = **100**)
- Suggested retype: `char s_s_00621f1e[100] = "%s";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/cockpit/drawsurf.cpp/testDrawingSurface_FUN_00489d30.asm` (pushed alongside size 100)

### `s_s_00621f24`

- String: `"%s"` (declared length 3 incl. null)
- Sizes observed across 1 call site: 1×100 (buffer size = **100**)
- Suggested retype: `char s_s_00621f24[100] = "%s";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/cockpit/drawsurf.cpp/testDrawingSurface_FUN_00489d30.asm` (pushed alongside size 100)

### `s_IP_0063d9d4`

- String: `"IP"` (declared length 3 incl. null)
- Sizes observed across 1 call site: 1×100 (buffer size = **100**)
- Suggested retype: `char s_IP_0063d9d4[100] = "IP";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/netgame.cpp/CNetGame_runLobby_FUN_00541390.asm` (pushed alongside size 100)

### `s_Edit_light_name_00647769`

- String: `"Edit light name"` (declared length 16 incl. null)
- Sizes observed across 1 call site: 1×100 (buffer size = **100**)
- Suggested retype: `char s_Edit_light_name_00647769[100] = "Edit light name";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/setedit.cpp/CDemonSet_positionLight_FUN_0057ae50.asm` (pushed alongside size 100)

### `s_Find_00643e61`

- String: `"Find"` (declared length 5 incl. null)
- Sizes observed across 1 call site: 1×100 (buffer size = **100**)
- Suggested retype: `char s_Find_00643e61[100] = "Find";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/script.cpp/CScript_processEditorInput_FUN_00565130.asm` (pushed alongside size 100)

### `s_Find_00643e7d`

- String: `"Find"` (declared length 5 incl. null)
- Sizes observed across 1 call site: 1×100 (buffer size = **100**)
- Suggested retype: `char s_Find_00643e7d[100] = "Find";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/script.cpp/CScript_processEditorInput_FUN_00565130.asm` (pushed alongside size 100)

### `s_Descriptive_name_00617758`

- String: `"Descriptive name"` (declared length 17 incl. null)
- Sizes observed across 1 call site: 1×100 (buffer size = **100**)
- Suggested retype: `char s_Descriptive_name_00617758[100] = "Descriptive name";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/charactr.cpp/CCharacter_getPropertyList_FUN_0042f730.asm` (pushed alongside size 100)

### `s_descriptiveName_0062f311`

- String: `"descriptiveName"` (declared length 16 incl. null)
- Sizes observed across 1 call site: 1×100 (buffer size = **100**)
- Suggested retype: `char s_descriptiveName_0062f311[100] = "descriptiveName";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/hostage.cpp/CHostage_getPropertyList_FUN_004f69c0.asm` (pushed alongside size 100)

### `s_Enter_Server_IP_0062d3a7`

- String: `"Enter Server IP"` (declared length 16 incl. null)
- Sizes observed across 1 call site: 1×100 (buffer size = **100**)
- Suggested retype: `char s_Enter_Server_IP_0062d3a7[100] = "Enter Server IP";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/game.cpp/joinNetworkGame_FUN_004e2fc0.asm` (pushed alongside size 100)

### `s_Raise_an_event_0062c2a2`

- String: `"Raise an event"` (declared length 15 incl. null)
- Sizes observed across 1 call site: 1×100 (buffer size = **100**)
- Suggested retype: `char s_Raise_an_event_0062c2a2[100] = "Raise an event";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/game.cpp/CGame_processCheatCodes_FUN_004ddaf0.asm` (pushed alongside size 100)

### `s_Enter_cheat_code_0062ba21`

- String: `"Enter cheat code"` (declared length 17 incl. null)
- Sizes observed across 1 call site: 1×100 (buffer size = **100**)
- Suggested retype: `char s_Enter_cheat_code_0062ba21[100] = "Enter cheat code";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/game.cpp/CGame_processCheatCodes_FUN_004ddaf0.asm` (pushed alongside size 100)

### `s_Actor_type_s_0065599e`

- String: `"Actor type(s)"` (declared length 14 incl. null)
- Sizes observed across 1 call site: 1×80 (buffer size = **80**)
- Suggested retype: `char s_Actor_type_s_0065599e[80] = "Actor type(s)";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/trigger.cpp/CTrigger_getPropertyList_FUN_005e0f70.asm` (pushed alongside size 80)

### `s_Actor_name_00655993`

- String: `"Actor name"` (declared length 11 incl. null)
- Sizes observed across 1 call site: 1×80 (buffer size = **80**)
- Suggested retype: `char s_Actor_name_00655993[80] = "Actor name";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/trigger.cpp/CTrigger_getPropertyList_FUN_005e0f70.asm` (pushed alongside size 80)

### `s_hbar1_00630439`

- String: `"hbar1"` (declared length 6 incl. null)
- Sizes observed across 1 call site: 1×64 (buffer size = **64**)
- Suggested retype: `char s_hbar1_00630439[64] = "hbar1";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/inv.cpp/loadAssets_FUN_004fd220.asm` (pushed alongside size 64)

### `s_hbar2_0063043f`

- String: `"hbar2"` (declared length 6 incl. null)
- Sizes observed across 1 call site: 1×64 (buffer size = **64**)
- Suggested retype: `char s_hbar2_0063043f[64] = "hbar2";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/inv.cpp/loadAssets_FUN_004fd220.asm` (pushed alongside size 64)

### `s_Weapon_00614c9f`

- String: `"Weapon"` (declared length 7 incl. null)
- Sizes observed across 1 call site: 1×64 (buffer size = **64**)
- Suggested retype: `char s_Weapon_00614c9f[64] = "Weapon";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/ammobox.cpp/CAmmoBox_getPropertyList_FUN_00411b30.asm` (pushed alongside size 64)

### `s_Weapon_00614adc`

- String: `"Weapon"` (declared length 7 incl. null)
- Sizes observed across 1 call site: 1×64 (buffer size = **64**)
- Suggested retype: `char s_Weapon_00614adc[64] = "Weapon";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/ammo.cpp/CAmmo_getPropertyList_FUN_00411360.asm` (pushed alongside size 64)

### `s_Edit_filter_name_00647a69`

- String: `"Edit filter name"` (declared length 17 incl. null)
- Sizes observed across 1 call site: 1×40 (buffer size = **40**)
- Suggested retype: `char s_Edit_filter_name_00647a69[40] = "Edit filter name";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/setedit.cpp/CDemonSet_showLightFilterEditor_FUN_0057bbe0.asm` (pushed alongside size 40)

### `s_morphActorType_00638949`

- String: `"morphActorType"` (declared length 15 incl. null)
- Sizes observed across 1 call site: 1×40 (buffer size = **40**)
- Suggested retype: `char s_morphActorType_00638949[40] = "morphActorType";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/mimic.cpp/CMimic_getPropertyList_FUN_00520d10.asm` (pushed alongside size 40)

### `s_anon_00621ed3`

- String: `"+"` (declared length 2 incl. null)
- Sizes observed across 1 call site: 1×32 (buffer size = **32**)
- Suggested retype: `char s_anon_00621ed3[32] = "+";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/cockpit/drawsurf.cpp/testDrawingSurface_FUN_00489d30.asm` (pushed alongside size 32)

### `s_Enter_user_name_00625ffe`

- String: `"Enter user name"` (declared length 16 incl. null)
- Sizes observed across 1 call site: 1×32 (buffer size = **32**)
- Suggested retype: `char s_Enter_user_name_00625ffe[32] = "Enter user name";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/engine/fileio.cpp/establishUserIdentity_FUN_004b1c00.asm` (pushed alongside size 32)

### `s_battery_00630431`

- String: `"battery"` (declared length 8 incl. null)
- Sizes observed across 2 call sites: 1×32, 1×16 (buffer size = **32**)
- Suggested retype: `char s_battery_00630431[32] = "battery";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/inv.cpp/loadAssets_FUN_004fd220.asm` (pushed alongside size 16)
  - `annotations/nocedit.exe/pseudocode/src/core/inv.cpp/loadAssets_FUN_004fd220.asm` (pushed alongside size 32)

### `s_Bip01_R_Forearm_00653ee4`

- String: `"Bip01 R Forearm"` (declared length 16 incl. null)
- Sizes observed across 1 call site: 1×32 (buffer size = **32**)
- Suggested retype: `char s_Bip01_R_Forearm_00653ee4[32] = "Bip01 R Forearm";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/stranger.cpp/CStranger_updateClothSimulation_FUN_005c6220.asm` (pushed alongside size 32)

### `s_tommyclip24x24_00630445`

- String: `"tommyclip24x24"` (declared length 15 incl. null)
- Sizes observed across 2 call sites: 2×24 (buffer size = **24**)
- Suggested retype: `char s_tommyclip24x24_00630445[24] = "tommyclip24x24";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/inv.cpp/loadAssets_FUN_004fd220.asm` (pushed alongside size 24)

### `s_bullet24x24_00630454`

- String: `"bullet24x24"` (declared length 12 incl. null)
- Sizes observed across 2 call sites: 2×24 (buffer size = **24**)
- Suggested retype: `char s_bullet24x24_00630454[24] = "bullet24x24";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/inv.cpp/loadAssets_FUN_004fd220.asm` (pushed alongside size 24)

### `s_lithium24x24_00630460`

- String: `"lithium24x24"` (declared length 13 incl. null)
- Sizes observed across 2 call sites: 2×24 (buffer size = **24**)
- Suggested retype: `char s_lithium24x24_00630460[24] = "lithium24x24";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/inv.cpp/loadAssets_FUN_004fd220.asm` (pushed alongside size 24)

### `s_shotshell24x24_00630480`

- String: `"shotshell24x24"` (declared length 15 incl. null)
- Sizes observed across 2 call sites: 2×24 (buffer size = **24**)
- Suggested retype: `char s_shotshell24x24_00630480[24] = "shotshell24x24";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/inv.cpp/loadAssets_FUN_004fd220.asm` (pushed alongside size 24)

### `s_holybullet24x24_006304a1`

- String: `"holybullet24x24"` (declared length 16 incl. null)
- Sizes observed across 2 call sites: 2×24 (buffer size = **24**)
- Suggested retype: `char s_holybullet24x24_006304a1[24] = "holybullet24x24";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/inv.cpp/loadAssets_FUN_004fd220.asm` (pushed alongside size 24)

### `s_Texture_0062e121`

- String: `"Texture"` (declared length 8 incl. null)
- Sizes observed across 1 call site: 1×16 (buffer size = **16**)
- Suggested retype: `char s_Texture_0062e121[16] = "Texture";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/glass.cpp/CGlass_getPropertyList_FUN_004eb3c0.asm` (pushed alongside size 16)

### `s_Broken_texture_0062e17e`

- String: `"Broken texture"` (declared length 15 incl. null)
- Sizes observed across 1 call site: 1×16 (buffer size = **16**)
- Suggested retype: `char s_Broken_texture_0062e17e[16] = "Broken texture";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/glass.cpp/CGlass_getPropertyList_FUN_004eb3c0.asm` (pushed alongside size 16)

### `s_Texture_00619d27`

- String: `"Texture"` (declared length 8 incl. null)
- Sizes observed across 1 call site: 1×16 (buffer size = **16**)
- Suggested retype: `char s_Texture_00619d27[16] = "Texture";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/core/curtain.cpp/CCurtain_getPropertyList_FUN_0044b610.asm` (pushed alongside size 16)

### `s_d_006381fb`

- String: `"%d\n"` (declared length 4 incl. null)
- Sizes observed across 1 call site: 1×16 (buffer size = **16**)
- Suggested retype: `char s_d_006381fb[16] = "%d\n";`
- Sites:
  - `annotations/nocedit.exe/pseudocode/src/shape/meshlod.cpp/CLodMesh_gridSave_FUN_0051d420.asm` (pushed alongside size 16)

## Layout-gap candidates (heuristic — verify in Ghidra before retyping)

### `s_DirectDrawCreate_0061230e` (addr `0x61230e`)

- String: `"DirectDrawCreate"` (declared length 17 incl. null)
- Gap to next named symbol (`INT_00613000` @ `0x613000`): **3314 bytes**
- Likely retype: `char s_DirectDrawCreate_0061230e[3314] = "DirectDrawCreate";` (verify zero-padding in Ghidra first)

### `s_DEST_006869c2` (addr `0x6869c2`)

- String: `"DEST"` (declared length 5 incl. null)
- Gap to next named symbol (`GUID_00686d58` @ `0x686d58`): **918 bytes**
- Likely retype: `char s_DEST_006869c2[918] = "DEST";` (verify zero-padding in Ghidra first)

### `s_t_00670108` (addr `0x670108`)

- String: `"t:\"` (declared length 4 incl. null)
- Gap to next named symbol (`g_ModelLastScaleInput` @ `0x670210`): **264 bytes**
- Likely retype: `char s_t_00670108[264] = "t:\";` (verify zero-padding in Ghidra first)

### `s_CEnemy_006804b8` (addr `0x6804b8`)

- String: `"CEnemy"` (declared length 7 incl. null)
- Gap to next named symbol (`g_ActorWildcardBuffer` @ `0x680580`): **200 bytes**
- Likely retype: `char s_CEnemy_006804b8[200] = "CEnemy";` (verify zero-padding in Ghidra first)

### `s_EST_006850bc` (addr `0x6850bc`)

- String: `"EST"` (declared length 4 incl. null)
- Gap to next named symbol (`DAT_0068513c` @ `0x68513c`): **128 bytes**
- Likely retype: `char s_EST_006850bc[128] = "EST";` (verify zero-padding in Ghidra first)

### `s_DEST_006868d2` (addr `0x6868d2`)

- String: `"DEST"` (declared length 5 incl. null)
- Gap to next named symbol (`s_DEST_006868f2` @ `0x6868f2`): **32 bytes**
- Likely retype: `char s_DEST_006868d2[32] = "DEST";` (verify zero-padding in Ghidra first)

### `s_CPickList_0066e324` (addr `0x66e324`)

- String: `"$CPickList$$"` (declared length 13 incl. null)
- Gap to next named symbol (`s_CSlew_0066e344` @ `0x66e344`): **32 bytes**
- Likely retype: `char s_CPickList_0066e324[32] = "$CPickList$$";` (verify zero-padding in Ghidra first)

### `s_CEdButton_006792a4` (addr `0x6792a4`)

- String: `"$CEdButton$$"` (declared length 13 incl. null)
- Gap to next named symbol (`s_CEditorTools_006792c4` @ `0x6792c4`): **32 bytes**
- Likely retype: `char s_CEdButton_006792a4[32] = "$CEdButton$$";` (verify zero-padding in Ghidra first)

### `s_CRainDrop_0067aef4` (addr `0x67aef4`)

- String: `"$CRainDrop$$"` (declared length 13 incl. null)
- Gap to next named symbol (`s_CPopcorn_0067af14` @ `0x67af14`): **32 bytes**
- Likely retype: `char s_CRainDrop_0067aef4[32] = "$CRainDrop$$";` (verify zero-padding in Ghidra first)

### `s_CGunFlame_0067af64` (addr `0x67af64`)

- String: `"$CGunFlame$$"` (declared length 13 incl. null)
- Gap to next named symbol (`s_CCrater_0067af84` @ `0x67af84`): **32 bytes**
- Likely retype: `char s_CGunFlame_0067af64[32] = "$CGunFlame$$";` (verify zero-padding in Ghidra first)

### `s_CFireball_0067aff4` (addr `0x67aff4`)

- String: `"$CFireball$$"` (declared length 13 incl. null)
- Gap to next named symbol (`s_CBulletTrail_0067b014` @ `0x67b014`): **32 bytes**
- Likely retype: `char s_CFireball_0067aff4[32] = "$CFireball$$";` (verify zero-padding in Ghidra first)

### `s_CSpotView_0067d4e4` (addr `0x67d4e4`)

- String: `"$CSpotView$$"` (declared length 13 incl. null)
- Gap to next named symbol (`s_LodFace_0067d504` @ `0x67d504`): **32 bytes**
- Likely retype: `char s_CSpotView_0067d4e4[32] = "$CSpotView$$";` (verify zero-padding in Ghidra first)

### `s_SfxSample_00681d84` (addr `0x681d84`)

- String: `"$SfxSample$$"` (declared length 13 incl. null)
- Gap to next named symbol (`s_SfxOptions_00681da4` @ `0x681da4`): **32 bytes**
- Likely retype: `char s_SfxSample_00681d84[32] = "$SfxSample$$";` (verify zero-padding in Ghidra first)

### `s_CCharacter_0066e7a4` (addr `0x66e7a4`)

- String: `"$CCharacter$$"` (declared length 14 incl. null)
- Gap to next named symbol (`s_SPose_0066e7c4` @ `0x66e7c4`): **32 bytes**
- Likely retype: `char s_CCharacter_0066e7a4[32] = "$CCharacter$$";` (verify zero-padding in Ghidra first)

### `s_CExplosion_0067afa4` (addr `0x67afa4`)

- String: `"$CExplosion$$"` (declared length 14 incl. null)
- Gap to next named symbol (`s_CLaserBeam_0067afc4` @ `0x67afc4`): **32 bytes**
- Likely retype: `char s_CExplosion_0067afa4[32] = "$CExplosion$$";` (verify zero-padding in Ghidra first)

### `s_CLaserBeam_0067afc4` (addr `0x67afc4`)

- String: `"$CLaserBeam$$"` (declared length 14 incl. null)
- Gap to next named symbol (`s_CRock_0067afe4` @ `0x67afe4`): **32 bytes**
- Likely retype: `char s_CLaserBeam_0067afc4[32] = "$CLaserBeam$$";` (verify zero-padding in Ghidra first)

### `s_SfxOptions_00681da4` (addr `0x681da4`)

- String: `"$SfxOptions$$"` (declared length 14 incl. null)
- Gap to next named symbol (`s_SfxSlot_00681dc4` @ `0x681dc4`): **32 bytes**
- Likely retype: `char s_SfxOptions_00681da4[32] = "$SfxOptions$$";` (verify zero-padding in Ghidra first)

### `s_SDamageInfo_0066e354` (addr `0x66e354`)

- String: `"$SDamageInfo$$"` (declared length 15 incl. null)
- Gap to next named symbol (`s_CBoundingBox3D_0066e374` @ `0x66e374`): **32 bytes**
- Likely retype: `char s_SDamageInfo_0066e354[32] = "$SDamageInfo$$";` (verify zero-padding in Ghidra first)

### `s_CDemonActor_0066e394` (addr `0x66e394`)

- String: `"$CDemonActor$$"` (declared length 15 incl. null)
- Gap to next named symbol (`s_CVector_0066e3b4` @ `0x66e3b4`): **32 bytes**
- Likely retype: `char s_CDemonActor_0066e394[32] = "$CDemonActor$$";` (verify zero-padding in Ghidra first)

### `s_CBulletHole_0067b094` (addr `0x67b094`)

- String: `"$CBulletHole$$"` (declared length 15 incl. null)
- Gap to next named symbol (`s_CSmokeParticle_0067b0b4` @ `0x67b0b4`): **32 bytes**
- Likely retype: `char s_CBulletHole_0067b094[32] = "$CBulletHole$$";` (verify zero-padding in Ghidra first)

### `s_CMP3Decoder_00681d64` (addr `0x681d64`)

- String: `"$CMP3Decoder$$"` (declared length 15 incl. null)
- Gap to next named symbol (`s_SfxSample_00681d84` @ `0x681d84`): **32 bytes**
- Likely retype: `char s_CMP3Decoder_00681d64[32] = "$CMP3Decoder$$";` (verify zero-padding in Ghidra first)

### `s_STrainNoise_00682184` (addr `0x682184`)

- String: `"$STrainNoise$$"` (declared length 15 incl. null)
- Gap to next named symbol (`g_ScanlinePixelCount` @ `0x6821a4`): **32 bytes**
- Likely retype: `char s_STrainNoise_00682184[32] = "$STrainNoise$$";` (verify zero-padding in Ghidra first)

### `s_console_txt_0066e8e8` (addr `0x66e8e8`)

- String: `"console.txt"` (declared length 12 incl. null)
- Gap to next named symbol (`s_CConsole_0066e904` @ `0x66e904`): **28 bytes**
- Likely retype: `char s_console_txt_0066e8e8[28] = "console.txt";` (verify zero-padding in Ghidra first)

### `s_ra4hqpoint_00670284` (addr `0x670284`)

- String: `"$__ra4hqpoint$$"` (declared length 16 incl. null)
- Gap to next named symbol (`s_CCourse_006702a4` @ `0x6702a4`): **32 bytes**
- Likely retype: `char s_ra4hqpoint_00670284[32] = "$__ra4hqpoint$$";` (verify zero-padding in Ghidra first)

### `s_STriangleRef_00678a04` (addr `0x678a04`)

- String: `"$STriangleRef$$"` (declared length 16 incl. null)
- Gap to next named symbol (`s_CDemonCube_00678a24` @ `0x678a24`): **32 bytes**
- Likely retype: `char s_STriangleRef_00678a04[32] = "$STriangleRef$$";` (verify zero-padding in Ghidra first)

### `s_CBulletTrail_0067b014` (addr `0x67b014`)

- String: `"$CBulletTrail$$"` (declared length 16 incl. null)
- Gap to next named symbol (`s_CGlassParticle_0067b034` @ `0x67b034`): **32 bytes**
- Likely retype: `char s_CBulletTrail_0067b014[32] = "$CBulletTrail$$";` (verify zero-padding in Ghidra first)

### `s_CMuzzleFlash_0067b054` (addr `0x67b054`)

- String: `"$CMuzzleFlash$$"` (declared length 16 incl. null)
- Gap to next named symbol (`s_CSpark_0067b074` @ `0x67b074`): **32 bytes**
- Likely retype: `char s_CMuzzleFlash_0067b054[32] = "$CMuzzleFlash$$";` (verify zero-padding in Ghidra first)

### `s_CAlphaBitmap_0067b8d4` (addr `0x67b8d4`)

- String: `"$CAlphaBitmap$$"` (declared length 16 incl. null)
- Gap to next named symbol (`s_CGame_0067b8f4` @ `0x67b8f4`): **32 bytes**
- Likely retype: `char s_CAlphaBitmap_0067b8d4[32] = "$CAlphaBitmap$$";` (verify zero-padding in Ghidra first)

### `s_CEdScrollBar_0067d074` (addr `0x67d074`)

- String: `"$CEdScrollBar$$"` (declared length 16 incl. null)
- Gap to next named symbol (`s_CDemonFileManager_0067d094` @ `0x67d094`): **32 bytes**
- Likely retype: `char s_CEdScrollBar_0067d074[32] = "$CEdScrollBar$$";` (verify zero-padding in Ghidra first)

### `s_CMoon_0067d368` (addr `0x67d368`)

- String: `"$CMoon$$"` (declared length 9 incl. null)
- Gap to next named symbol (`g_TempNeighborFacesDestructorNode` @ `0x67d380`): **24 bytes**
- Likely retype: `char s_CMoon_0067d368[24] = "$CMoon$$";` (verify zero-padding in Ghidra first)

### `s_BatchDfm_log_00681a28` (addr `0x681a28`)

- String: `"BatchDfm.log"` (declared length 13 incl. null)
- Gap to next named symbol (`s_LodVert_00681a44` @ `0x681a44`): **28 bytes**
- Likely retype: `char s_BatchDfm_log_00681a28[28] = "BatchDfm.log";` (verify zero-padding in Ghidra first)

### `s_CBoundingBox3D_0066e374` (addr `0x66e374`)

- String: `"$CBoundingBox3D$$"` (declared length 18 incl. null)
- Gap to next named symbol (`s_CDemonActor_0066e394` @ `0x66e394`): **32 bytes**
- Likely retype: `char s_CBoundingBox3D_0066e374[32] = "$CBoundingBox3D$$";` (verify zero-padding in Ghidra first)

### `s_CLightningBolt_0067af44` (addr `0x67af44`)

- String: `"$CLightningBolt$$"` (declared length 18 incl. null)
- Gap to next named symbol (`s_CGunFlame_0067af64` @ `0x67af64`): **32 bytes**
- Likely retype: `char s_CLightningBolt_0067af44[32] = "$CLightningBolt$$";` (verify zero-padding in Ghidra first)

### `s_CGlassParticle_0067b034` (addr `0x67b034`)

- String: `"$CGlassParticle$$"` (declared length 18 incl. null)
- Gap to next named symbol (`s_CMuzzleFlash_0067b054` @ `0x67b054`): **32 bytes**
- Likely retype: `char s_CGlassParticle_0067b034[32] = "$CGlassParticle$$";` (verify zero-padding in Ghidra first)

### `s_CMelee_0067d1c8` (addr `0x67d1c8`)

- String: `"$CMelee$$"` (declared length 10 incl. null)
- Gap to next named symbol (`g_CLeakCheckerDestructorNode` @ `0x67d1e0`): **24 bytes**
- Likely retype: `char s_CMelee_0067d1c8[24] = "$CMelee$$";` (verify zero-padding in Ghidra first)

### `s_CDemonLight_006700c4` (addr `0x6700c4`)

- String: `"$CDemonLight$$"` (declared length 15 incl. null)
- Gap to next named symbol (`g_CKeyFramedModelPoolDestructorNode` @ `0x6700e0`): **28 bytes**
- Likely retype: `char s_CDemonLight_006700c4[28] = "$CDemonLight$$";` (verify zero-padding in Ghidra first)

### `s_CKeyFramedModel_006702b4` (addr `0x6702b4`)

- String: `"$CKeyFramedModel$$"` (declared length 19 incl. null)
- Gap to next named symbol (`s_CDemonTriangle_006702d4` @ `0x6702d4`): **32 bytes**
- Likely retype: `char s_CKeyFramedModel_006702b4[32] = "$CKeyFramedModel$$";` (verify zero-padding in Ghidra first)

### `s_none_0067d690` (addr `0x67d690`)

- String: `"(none)"` (declared length 7 incl. null)
- Gap to next named symbol (`s_CDemonMission_0067d6a4` @ `0x67d6a4`): **20 bytes**
- Likely retype: `char s_none_0067d690[20] = "(none)";` (verify zero-padding in Ghidra first)

### `s_CZThumb_00681688` (addr `0x681688`)

- String: `"$CZThumb$$"` (declared length 11 incl. null)
- Gap to next named symbol (`g_MissingBackdropFilesDestructorNode` @ `0x6816a0`): **24 bytes**
- Likely retype: `char s_CZThumb_00681688[24] = "$CZThumb$$";` (verify zero-padding in Ghidra first)

### `s_CDemonCamera_0066ed74` (addr `0x66ed74`)

- String: `"$CDemonCamera$$"` (declared length 16 incl. null)
- Gap to next named symbol (`g_VoxelGridBitmasks` @ `0x66ed90`): **28 bytes**
- Likely retype: `char s_CDemonCamera_0066ed74[28] = "$CDemonCamera$$";` (verify zero-padding in Ghidra first)

### `s_CMobster_0067d6ec` (addr `0x67d6ec`)

- String: `"$CMobster$$"` (declared length 12 incl. null)
- Gap to next named symbol (`g_CMolochClassVersion` @ `0x67d704`): **24 bytes**
- Likely retype: `char s_CMobster_0067d6ec[24] = "$CMobster$$";` (verify zero-padding in Ghidra first)

### `s_CDemonMission_0067d6a4` (addr `0x67d6a4`)

- String: `"$CDemonMission$$"` (declared length 17 incl. null)
- Gap to next named symbol (`s_GenuineIntel_0067d6c0` @ `0x67d6c0`): **28 bytes**
- Likely retype: `char s_CDemonMission_0067d6a4[28] = "$CDemonMission$$";` (verify zero-padding in Ghidra first)

### `s_DEST_00686842` (addr `0x686842`)

- String: `"DEST"` (declared length 5 incl. null)
- Gap to next named symbol (`s_DEST_00686852` @ `0x686852`): **16 bytes**
- Likely retype: `char s_DEST_00686842[16] = "DEST";` (verify zero-padding in Ghidra first)

### `s_DEST_00686852` (addr `0x686852`)

- String: `"DEST"` (declared length 5 incl. null)
- Gap to next named symbol (`s_DEST_00686862` @ `0x686862`): **16 bytes**
- Likely retype: `char s_DEST_00686852[16] = "DEST";` (verify zero-padding in Ghidra first)

### `s_DEST_00686862` (addr `0x686862`)

- String: `"DEST"` (declared length 5 incl. null)
- Gap to next named symbol (`s_DEST_00686872` @ `0x686872`): **16 bytes**
- Likely retype: `char s_DEST_00686862[16] = "DEST";` (verify zero-padding in Ghidra first)

### `s_DEST_00686872` (addr `0x686872`)

- String: `"DEST"` (declared length 5 incl. null)
- Gap to next named symbol (`s_DEST_00686882` @ `0x686882`): **16 bytes**
- Likely retype: `char s_DEST_00686872[16] = "DEST";` (verify zero-padding in Ghidra first)

### `s_DEST_00686882` (addr `0x686882`)

- String: `"DEST"` (declared length 5 incl. null)
- Gap to next named symbol (`s_DEST_00686892` @ `0x686892`): **16 bytes**
- Likely retype: `char s_DEST_00686882[16] = "DEST";` (verify zero-padding in Ghidra first)

### `s_DEST_00686892` (addr `0x686892`)

- String: `"DEST"` (declared length 5 incl. null)
- Gap to next named symbol (`s_DEST_006868a2` @ `0x6868a2`): **16 bytes**
- Likely retype: `char s_DEST_00686892[16] = "DEST";` (verify zero-padding in Ghidra first)

### `s_DEST_006868a2` (addr `0x6868a2`)

- String: `"DEST"` (declared length 5 incl. null)
- Gap to next named symbol (`s_DEST_006868b2` @ `0x6868b2`): **16 bytes**
- Likely retype: `char s_DEST_006868a2[16] = "DEST";` (verify zero-padding in Ghidra first)

### `s_DEST_006868b2` (addr `0x6868b2`)

- String: `"DEST"` (declared length 5 incl. null)
- Gap to next named symbol (`s_DEST_006868c2` @ `0x6868c2`): **16 bytes**
- Likely retype: `char s_DEST_006868b2[16] = "DEST";` (verify zero-padding in Ghidra first)

### `s_DEST_006868c2` (addr `0x6868c2`)

- String: `"DEST"` (declared length 5 incl. null)
- Gap to next named symbol (`s_DEST_006868d2` @ `0x6868d2`): **16 bytes**
- Likely retype: `char s_DEST_006868c2[16] = "DEST";` (verify zero-padding in Ghidra first)

### `s_DEST_006868f2` (addr `0x6868f2`)

- String: `"DEST"` (declared length 5 incl. null)
- Gap to next named symbol (`s_DEST_00686902` @ `0x686902`): **16 bytes**
- Likely retype: `char s_DEST_006868f2[16] = "DEST";` (verify zero-padding in Ghidra first)

### `s_DEST_00686902` (addr `0x686902`)

- String: `"DEST"` (declared length 5 incl. null)
- Gap to next named symbol (`s_DEST_00686912` @ `0x686912`): **16 bytes**
- Likely retype: `char s_DEST_00686902[16] = "DEST";` (verify zero-padding in Ghidra first)

### `s_DEST_00686912` (addr `0x686912`)

- String: `"DEST"` (declared length 5 incl. null)
- Gap to next named symbol (`s_DEST_00686922` @ `0x686922`): **16 bytes**
- Likely retype: `char s_DEST_00686912[16] = "DEST";` (verify zero-padding in Ghidra first)

### `s_DEST_00686922` (addr `0x686922`)

- String: `"DEST"` (declared length 5 incl. null)
- Gap to next named symbol (`s_DEST_00686932` @ `0x686932`): **16 bytes**
- Likely retype: `char s_DEST_00686922[16] = "DEST";` (verify zero-padding in Ghidra first)

### `s_DEST_00686932` (addr `0x686932`)

- String: `"DEST"` (declared length 5 incl. null)
- Gap to next named symbol (`s_DEST_00686942` @ `0x686942`): **16 bytes**
- Likely retype: `char s_DEST_00686932[16] = "DEST";` (verify zero-padding in Ghidra first)

### `s_DEST_00686942` (addr `0x686942`)

- String: `"DEST"` (declared length 5 incl. null)
- Gap to next named symbol (`s_DEST_00686952` @ `0x686952`): **16 bytes**
- Likely retype: `char s_DEST_00686942[16] = "DEST";` (verify zero-padding in Ghidra first)

### `s_DEST_00686952` (addr `0x686952`)

- String: `"DEST"` (declared length 5 incl. null)
- Gap to next named symbol (`s_DEST_00686962` @ `0x686962`): **16 bytes**
- Likely retype: `char s_DEST_00686952[16] = "DEST";` (verify zero-padding in Ghidra first)

### `s_DEST_00686962` (addr `0x686962`)

- String: `"DEST"` (declared length 5 incl. null)
- Gap to next named symbol (`s_DEST_00686972` @ `0x686972`): **16 bytes**
- Likely retype: `char s_DEST_00686962[16] = "DEST";` (verify zero-padding in Ghidra first)

### `s_DEST_00686972` (addr `0x686972`)

- String: `"DEST"` (declared length 5 incl. null)
- Gap to next named symbol (`s_DEST_00686982` @ `0x686982`): **16 bytes**
- Likely retype: `char s_DEST_00686972[16] = "DEST";` (verify zero-padding in Ghidra first)

### `s_DEST_00686982` (addr `0x686982`)

- String: `"DEST"` (declared length 5 incl. null)
- Gap to next named symbol (`s_DEST_00686992` @ `0x686992`): **16 bytes**
- Likely retype: `char s_DEST_00686982[16] = "DEST";` (verify zero-padding in Ghidra first)

### `s_DEST_00686992` (addr `0x686992`)

- String: `"DEST"` (declared length 5 incl. null)
- Gap to next named symbol (`s_DEST_006869a2` @ `0x6869a2`): **16 bytes**
- Likely retype: `char s_DEST_00686992[16] = "DEST";` (verify zero-padding in Ghidra first)

### `s_DEST_006869a2` (addr `0x6869a2`)

- String: `"DEST"` (declared length 5 incl. null)
- Gap to next named symbol (`s_DEST_006869b2` @ `0x6869b2`): **16 bytes**
- Likely retype: `char s_DEST_006869a2[16] = "DEST";` (verify zero-padding in Ghidra first)

### `s_DEST_006869b2` (addr `0x6869b2`)

- String: `"DEST"` (declared length 5 incl. null)
- Gap to next named symbol (`s_DEST_006869c2` @ `0x6869c2`): **16 bytes**
- Likely retype: `char s_DEST_006869b2[16] = "DEST";` (verify zero-padding in Ghidra first)

### `s_CLightCone_0067cff8` (addr `0x67cff8`)

- String: `"$CLightCone$$"` (declared length 14 incl. null)
- Gap to next named symbol (`g_CDemonFileManagerDestructorNode` @ `0x67d010`): **24 bytes**
- Likely retype: `char s_CLightCone_0067cff8[24] = "$CLightCone$$";` (verify zero-padding in Ghidra first)

### `s_CZombie_00658425` (addr `0x658425`)

- String: `"CZombie"` (declared length 8 incl. null)
- Gap to next named symbol (`DOUBLE_00658435` @ `0x658435`): **16 bytes**
- Likely retype: `char s_CZombie_00658425[16] = "CZombie";` (verify zero-padding in Ghidra first)

### `s_SChainVertex_0066e7e8` (addr `0x66e7e8`)

- String: `"$SChainVertex$$"` (declared length 16 incl. null)
- Gap to next named symbol (`g_LineClippingDisabled` @ `0x66e800`): **24 bytes**
- Likely retype: `char s_SChainVertex_0066e7e8[24] = "$SChainVertex$$";` (verify zero-padding in Ghidra first)

### `s_cIni_0067ccd0` (addr `0x67ccd0`)

- String: `"$cIni$$"` (declared length 8 incl. null)
- Gap to next named symbol (`s_system_nocturne_ini_0067cce0` @ `0x67cce0`): **16 bytes**
- Likely retype: `char s_cIni_0067ccd0[16] = "$cIni$$";` (verify zero-padding in Ghidra first)

### `s_CNetGame_00680a5c` (addr `0x680a5c`)

- String: `"$CNetGame$$"` (declared length 12 incl. null)
- Gap to next named symbol (`g_OSFontName` @ `0x680a70`): **20 bytes**
- Likely retype: `char s_CNetGame_00680a5c[20] = "$CNetGame$$";` (verify zero-padding in Ghidra first)
