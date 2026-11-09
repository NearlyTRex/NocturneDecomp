; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_setCameraView_FUN_0054f0d0(CDemonSet *this_ptr,int index)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
; Local Variables:
; undefined        Stack[-0x198]:1  local_198
; undefined        Stack[-0x148]:1  local_148
; undefined        Stack[-0x120]:1  local_120
; undefined        Stack[-0xf8]:1  local_f8
; undefined        Stack[-0xe0]:1  local_e0
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined        Stack[-0xa4]:1  local_a4
; undefined        Stack[-0x98]:1  local_98
; undefined        Stack[-0x80]:1  local_80
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[8]:
;   core_game.cpp_CGame_processHotkeys_FUN_004d1a80 at 004d20ae
;   core_game.cpp_FUN_004cf5e0 at 004cfa39
;   core_game.cpp_FUN_004d1760 at 004d17a8
;   core_game.cpp_FUN_004d17c0 at 004d1808
;   core_script.cpp_CScript_step_FUN_00544460 at 00547e86
;   core_set.cpp_FUN_0054fbf0 at 0054fc0e
;   core_set.cpp_FUN_00555740 at 00555754
;   core_setdir.cpp_FUN_00559f80 at 00559fb9
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_005f07cc
;   TerminatedCString s_CDemonSet_setCameraView_005f07dc
;   TerminatedCString s_s_raw_005f0809
;   TerminatedCString s_core_set_cpp_005f0810
;   TerminatedCString s_CDemonSet_setCameraView_005f0820
;   undefined4 DAT_00605000
;   undefined4 DAT_00605004
;   undefined4 DAT_006144d0
;   undefined4 DAT_0061c010
;   CGore* g_CGorePtr = 01cd0e3c
;   undefined4 DAT_006236b8
;   CWater* g_CWaterPtr = 02c8afb0
;   undefined4 DAT_0062604c
;   undefined4 DAT_01c50948
;   undefined4 DAT_01c51cac
;   ... and 23 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_box.cpp_FUN_00420570
;   core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044d700
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044ceb0
;   core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044d8c0
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044d610
;   core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_004542a0
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044fff0
;   core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044e8e0
;   core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044ef30
;   core_dcamera.cpp_CDemonCamera_restoreZBufferScanlines_FUN_00455150
;   core_dcamera.cpp_CDemonCamera_saveZBufferScanlines_FUN_00455100
;   core_dcamera.cpp_FUN_0044ee30
;   core_dirmat.cpp_FUN_0045f840
;   core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_00462770
;   ... and 22 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054f0d0
        ;   Label: core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0
    PUSH ESI                            ; 0054f0d1
    PUSH EDI                            ; 0054f0d2
    PUSH EBP                            ; 0054f0d3
    SUB ESP,0x1e8                       ; 0054f0d4
    MOV EDX,dword ptr [ESP + 0x200]     ; 0054f0da
    TEST EDX,EDX                        ; 0054f0e1
    JL 0x0054f0f2                       ; 0054f0e3
        ;   XREF to: 0054f0f2 (CONDITIONAL_JUMP)  ; LAB_0054f0f2
    MOV EAX,EDX                         ; 0054f0e5
    MOV EDX,dword ptr [ESP + 0x1fc]     ; 0054f0e7
    CMP EAX,dword ptr [EDX]             ; 0054f0ee
    JL 0x0054f11d                       ; 0054f0f0
        ;   XREF to: 0054f11d (CONDITIONAL_JUMP)  ; LAB_0054f11d
    MOV EDI,dword ptr [ESP + 0x200]     ; 0054f0f2
        ;   Label: LAB_0054f0f2
    PUSH EDI                            ; 0054f0f9
    MOV EBX,0x5f07cc                    ; 0054f0fa | = "..\\core\\set.cpp"
    MOV ESI,0x476                       ; 0054f0ff
    PUSH 0x5f07dc                       ; 0054f104 | = "CDemonSet::setCameraView - invalid in..."
    MOV dword ptr [0x01d1d400],EBX      ; 0054f109 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0054f10f | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0054f115
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0054f11a
    MOV EBP,dword ptr [0x01fe55bc]      ; 0054f11d | DAT_01fe55bc
        ;   Label: LAB_0054f11d
    XOR EBX,EBX                         ; 0054f123
    TEST EBP,EBP                        ; 0054f125
    JLE 0x0054f150                      ; 0054f127
        ;   XREF to: 0054f150 (CONDITIONAL_JUMP)  ; LAB_0054f150
    XOR ESI,ESI                         ; 0054f129
    MOV EAX,dword ptr [ESI + 0x1fe55c0] ; 0054f12b
        ;   Label: LAB_0054f12b
    PUSH EAX                            ; 0054f131
    ADD ESI,0x4                         ; 0054f132
    INC EBX                             ; 0054f135
    CALL core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00462d20 ; 0054f136
        ;   XREF to: 00462d20 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00462d20(CDemonLight * this_ptr)
    MOV EDX,dword ptr [0x01fe55bc]      ; 0054f13b | DAT_01fe55bc
    ADD ESP,0x4                         ; 0054f141
    CMP EBX,EDX                         ; 0054f144
    JL 0x0054f12b                       ; 0054f146
        ;   XREF to: 0054f12b (CONDITIONAL_JUMP)  ; LAB_0054f12b
    LEA EAX,[EAX]                       ; 0054f148
    MOV EDX,EDX                         ; 0054f14e
    MOV ECX,dword ptr [0x01fe4e38]      ; 0054f150 | DAT_01fe4e38
        ;   Label: LAB_0054f150
    XOR ESI,ESI                         ; 0054f156
    TEST ECX,ECX                        ; 0054f158
    JLE 0x0054f180                      ; 0054f15a
        ;   XREF to: 0054f180 (CONDITIONAL_JUMP)  ; LAB_0054f180
    XOR EBX,EBX                         ; 0054f15c
    MOV EDI,dword ptr [EBX + 0x1fe4e3c] ; 0054f15e | DAT_01fe4e3c
        ;   Label: LAB_0054f15e
    PUSH EDI                            ; 0054f164
    ADD EBX,0x4                         ; 0054f165
    INC ESI                             ; 0054f168
    CALL core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00462d20 ; 0054f169
        ;   XREF to: 00462d20 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00462d20(CDemonLight * this_ptr)
    MOV EBP,dword ptr [0x01fe4e38]      ; 0054f16e | DAT_01fe4e38
    ADD ESP,0x4                         ; 0054f174
    CMP ESI,EBP                         ; 0054f177
    JL 0x0054f15e                       ; 0054f179
        ;   XREF to: 0054f15e (CONDITIONAL_JUMP)  ; LAB_0054f15e
    LEA EAX,[EAX]                       ; 0054f17b
    MOV ECX,ECX                         ; 0054f17e
    MOV EAX,[0x01fe4e38]                ; 0054f180 | DAT_01fe4e38
        ;   Label: LAB_0054f180
    XOR ESI,ESI                         ; 0054f185
    TEST EAX,EAX                        ; 0054f187
    JLE 0x0054f1b0                      ; 0054f189
        ;   XREF to: 0054f1b0 (CONDITIONAL_JUMP)  ; LAB_0054f1b0
    XOR EBX,EBX                         ; 0054f18b
    MOV EDX,dword ptr [EBX + 0x1fe4e3c] ; 0054f18d | DAT_01fe4e3c
        ;   Label: LAB_0054f18d
    PUSH EDX                            ; 0054f193
    ADD EBX,0x4                         ; 0054f194
    INC ESI                             ; 0054f197
    CALL core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_004627f0 ; 0054f198
        ;   XREF to: 004627f0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_004627f0(CDemonLight * this_ptr)
    MOV ECX,dword ptr [0x01fe4e38]      ; 0054f19d | DAT_01fe4e38
    ADD ESP,0x4                         ; 0054f1a3
    CMP ESI,ECX                         ; 0054f1a6
    JL 0x0054f18d                       ; 0054f1a8
        ;   XREF to: 0054f18d (CONDITIONAL_JUMP)  ; LAB_0054f18d
    LEA EAX,[EAX]                       ; 0054f1aa
    CALL core_dlight.cpp_resetRestoreMemoryAllocator_FUN_00462760 ; 0054f1b0
        ;   XREF to: 00462760 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_resetRestoreMemoryAllocator_FUN_00462760()
        ;   Label: LAB_0054f1b0
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0054f1b5
    MOV EDX,dword ptr [ESP + 0x1fc]     ; 0054f1bc
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 0054f1c3
    MOV dword ptr [EDX + 0x15aec0],0x3f000000 ; 0054f1c9
    MOV dword ptr [EDX + 0x15ac90],0x1  ; 0054f1d3
    XOR EBX,EBX                         ; 0054f1dd
    MOV dword ptr [EDX + 0x15f6f8],0x1  ; 0054f1df
    MOV dword ptr [0x01fe4e38],EBX      ; 0054f1e9 | DAT_01fe4e38
    MOV dword ptr [EDX + 0x15aebc],EAX  ; 0054f1ef
    MOV EAX,dword ptr [ESP + 0x200]     ; 0054f1f5
    MOV dword ptr [0x01fe5c88],EBX      ; 0054f1fc | DAT_01fe5c88
    MOV dword ptr [EDX + 0x15aeb8],EAX  ; 0054f202
    MOV dword ptr [0x01fe55d0],EBX      ; 0054f208 | DAT_01fe55d0
    MOV EDX,dword ptr [EDX + 0x14d164]  ; 0054f20e
    MOV dword ptr [0x01fe5764],EBX      ; 0054f214 | DAT_01fe5764
    TEST EDX,EDX                        ; 0054f21a
    JLE 0x0054f250                      ; 0054f21c
        ;   XREF to: 0054f250 (CONDITIONAL_JUMP)  ; LAB_0054f250
    MOV ESI,dword ptr [ESP + 0x1fc]     ; 0054f21e
    MOV EDI,dword ptr [ESP + 0x1fc]     ; 0054f225
    MOV ECX,dword ptr [ESI + 0x14d168]  ; 0054f22c
        ;   Label: LAB_0054f22c
    PUSH ECX                            ; 0054f232
    PUSH EDI                            ; 0054f233
    ADD ESI,0x4                         ; 0054f234
    INC EBX                             ; 0054f237
    CALL core_set.cpp_FUN_0054f060      ; 0054f238
        ;   XREF to: 0054f060 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_0054f060(CDemonSet * this_ptr, CDemonActor * actor)
    MOV EBP,dword ptr [EDI + 0x14d164]  ; 0054f23d
    ADD ESP,0x8                         ; 0054f243
    CMP EBX,EBP                         ; 0054f246
    JL 0x0054f22c                       ; 0054f248
        ;   XREF to: 0054f22c (CONDITIONAL_JUMP)  ; LAB_0054f22c
    LEA EAX,[EAX]                       ; 0054f24a
    IMUL EDI,dword ptr [ESP + 0x200],0x1a4 ; 0054f250
        ;   Label: LAB_0054f250
    MOV ESI,dword ptr [ESP + 0x1fc]     ; 0054f25b
    ADD ESI,EDI                         ; 0054f262
    CMP dword ptr [ESI + 0x144],0x0     ; 0054f264
    JZ 0x0054f67f                       ; 0054f26b
        ;   XREF to: 0054f67f (CONDITIONAL_JUMP)  ; LAB_0054f67f
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0054f271
        ;   Label: LAB_0054f271
    CMP dword ptr [EAX + 0x15ac94],0x0  ; 0054f278
    JZ 0x0054f8a2                       ; 0054f27f
        ;   XREF to: 0054f8a2 (CONDITIONAL_JUMP)  ; LAB_0054f8a2
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0054f285
        ;   Label: LAB_0054f285
    MOV ECX,dword ptr [ESP + 0x200]     ; 0054f28c
    MOV dword ptr [EAX + 0x15ac90],0x0  ; 0054f293
    IMUL EAX,ECX,0x1a4                  ; 0054f29d
    MOV EBX,dword ptr [ESP + 0x1fc]     ; 0054f2a3
    ADD EAX,EBX                         ; 0054f2aa
    MOV ESI,dword ptr [EAX + 0x144]     ; 0054f2ac
    TEST ESI,ESI                        ; 0054f2b2
    JZ 0x0054fab7                       ; 0054f2b4
        ;   XREF to: 0054fab7 (CONDITIONAL_JUMP)  ; LAB_0054fab7
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0054f2ba
        ;   Label: LAB_0054f2ba
    PUSH EAX                            ; 0054f2c1
    MOV dword ptr [EAX + 0x15f6f8],0x0  ; 0054f2c2
    CALL core_set.cpp_FUN_00550260      ; 0054f2cc
        ;   XREF to: 00550260 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_00550260(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0054f2d1
    IMUL EAX,dword ptr [ESP + 0x200],0x1a4 ; 0054f2d4
    MOV ECX,dword ptr [ESP + 0x1fc]     ; 0054f2df
    ADD EAX,ECX                         ; 0054f2e6
    CMP dword ptr [EAX + 0x154],0x0     ; 0054f2e8
    JZ 0x0054fb70                       ; 0054f2ef
        ;   XREF to: 0054fb70 (CONDITIONAL_JUMP)  ; LAB_0054fb70
    MOV EBP,dword ptr [ECX + 0x15ac8c]  ; 0054f2f5
    PUSH EBP                            ; 0054f2fb
    MOV EAX,[0x006236b8]                ; 0054f2fc | DAT_006236b8
    PUSH EAX                            ; 0054f301
    CALL core_sound.cpp_CSound_setReverbPreset_FUN_0057db00 ; 0054f302
        ;   XREF to: 0057db00 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_setReverbPreset_FUN_0057db00(CSound * this_ptr, int index)
        ;   Label: LAB_0054f302
    ADD ESP,0x8                         ; 0054f307
    LEA EDI,[ESP + 0x160]               ; 0054f30a
    MOV ESI,0x1fe37f0                   ; 0054f311
    MOVSD ES:EDI,ESI                    ; 0054f316 | g_CDemonCameraInstance.field4_0x4
    MOVSD ES:EDI,ESI                    ; 0054f317 | g_CDemonCameraInstance.field8_0x8
    MOVSD ES:EDI,ESI                    ; 0054f318 | g_CDemonCameraInstance.field12_0xc
    LEA EDI,[ESP + 0x1b4]               ; 0054f319
    LEA ESI,[ESP + 0x160]               ; 0054f320
    LEA EAX,[ESP + 0x1b4]               ; 0054f327
    LEA EDX,[ESP + 0x19c]               ; 0054f32e
    MOVSD ES:EDI,ESI                    ; 0054f335
    MOVSD ES:EDI,ESI                    ; 0054f336
    MOVSD ES:EDI,ESI                    ; 0054f337
    CMP EDX,EAX                         ; 0054f338
    JZ 0x0054f366                       ; 0054f33a
        ;   XREF to: 0054f366 (CONDITIONAL_JUMP)  ; LAB_0054f366
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 0054f33c
    MOV dword ptr [ESP + 0x19c],EAX     ; 0054f343
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 0054f34a
    MOV dword ptr [ESP + 0x1a0],EAX     ; 0054f351
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 0054f358
    MOV dword ptr [ESP + 0x1a4],EAX     ; 0054f35f
    MOV ECX,0xa                         ; 0054f366
        ;   Label: LAB_0054f366
    LEA EDI,[ESP + 0xb0]                ; 0054f36b
    MOV ESI,0x1fe37fc                   ; 0054f372
    MOVSD.REP ES:EDI,ESI                ; 0054f377 | g_CDemonCameraInstance.field16_0x10 | g_CDemonCameraInstance.field20_0x14
    MOV ECX,0xa                         ; 0054f379
    LEA EDI,[ESP + 0xd8]                ; 0054f37e
    LEA ESI,[ESP + 0xb0]                ; 0054f385
    LEA EAX,[ESP + 0xd8]                ; 0054f38c
    MOVSD.REP ES:EDI,ESI                ; 0054f393
    PUSH EAX                            ; 0054f395
    LEA ESI,[ESP + 0x158]               ; 0054f396
    LEA EDI,[ESP + 0x1ac]               ; 0054f39d
    CALL core_dirmat.cpp_FUN_0045f840   ; 0054f3a4
        ;   XREF to: 0045f840 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f840()
    LEA ESI,[ESP + 0x158]               ; 0054f3a9
    LEA EAX,[ESP + 0x1ac]               ; 0054f3b0
    ADD ESP,0x4                         ; 0054f3b7
    LEA EDX,[ESP + 0x148]               ; 0054f3ba
    MOVSD ES:EDI,ESI                    ; 0054f3c1
    MOVSD ES:EDI,ESI                    ; 0054f3c2
    MOVSD ES:EDI,ESI                    ; 0054f3c3
    CMP EDX,EAX                         ; 0054f3c4
    JZ 0x0054f3f2                       ; 0054f3c6
        ;   XREF to: 0054f3f2 (CONDITIONAL_JUMP)  ; LAB_0054f3f2
    MOV EAX,dword ptr [ESP + 0x1a8]     ; 0054f3c8
    MOV dword ptr [ESP + 0x148],EAX     ; 0054f3cf
    MOV EAX,dword ptr [ESP + 0x1ac]     ; 0054f3d6
    MOV dword ptr [ESP + 0x14c],EAX     ; 0054f3dd
    MOV EAX,dword ptr [ESP + 0x1b0]     ; 0054f3e4
    MOV dword ptr [ESP + 0x150],EAX     ; 0054f3eb
    LEA EAX,[ESP + 0x148]               ; 0054f3f2
        ;   Label: LAB_0054f3f2
    PUSH EAX                            ; 0054f3f9
    LEA EAX,[ESP + 0x1a0]               ; 0054f3fa
    PUSH EAX                            ; 0054f401
    MOV EDX,dword ptr [0x0062604c]      ; 0054f402 | DAT_0062604c
    PUSH EDX                            ; 0054f408
    CALL core_weather.cpp_CWeather_setOriginAndRotation_FUN_005af040 ; 0054f409
        ;   XREF to: 005af040 (UNCONDITIONAL_CALL)  ; void core_weather.cpp_CWeather_setOriginAndRotation_FUN_005af040(CWeather * this_ptr, CVector3f * direction, CVector3f * rotation)
    ADD ESP,0xc                         ; 0054f40e
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0054f411
    MOV ECX,dword ptr [EAX + 0x14d164]  ; 0054f418
    XOR ESI,ESI                         ; 0054f41e
    TEST ECX,ECX                        ; 0054f420
    JLE 0x0054f450                      ; 0054f422
        ;   XREF to: 0054f450 (CONDITIONAL_JUMP)  ; LAB_0054f450
    MOV EBP,dword ptr [ESP + 0x1fc]     ; 0054f424
    MOV EBX,EAX                         ; 0054f42b
    MOV EDI,dword ptr [EBX + 0x14d168]  ; 0054f42d
        ;   Label: LAB_0054f42d
    PUSH EDI                            ; 0054f433
    PUSH EBP                            ; 0054f434
    ADD EBX,0x4                         ; 0054f435
    INC ESI                             ; 0054f438
    CALL core_set.cpp_FUN_0054f060      ; 0054f439
        ;   XREF to: 0054f060 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_0054f060(CDemonSet * this_ptr, CDemonActor * actor)
    MOV EDX,dword ptr [EBP + 0x14d164]  ; 0054f43e
    ADD ESP,0x8                         ; 0054f444
    CMP ESI,EDX                         ; 0054f447
    JL 0x0054f42d                       ; 0054f449
        ;   XREF to: 0054f42d (CONDITIONAL_JUMP)  ; LAB_0054f42d
    LEA EAX,[EAX]                       ; 0054f44b
    MOV ECX,ECX                         ; 0054f44e
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0054f450
        ;   Label: LAB_0054f450
    XOR ECX,ECX                         ; 0054f457
    MOV EBX,dword ptr [EAX + 0x14d164]  ; 0054f459
    MOV dword ptr [ESP + 0x1dc],ECX     ; 0054f45f
    TEST EBX,EBX                        ; 0054f466
    JLE 0x0054f5ad                      ; 0054f468
        ;   XREF to: 0054f5ad (CONDITIONAL_JUMP)  ; LAB_0054f5ad
    MOV dword ptr [ESP + 0x1d8],EAX     ; 0054f46e
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 0054f475
        ;   Label: LAB_0054f475
    MOV EAX,dword ptr [EAX + 0x14d168]  ; 0054f47c
    MOV EDX,dword ptr [EAX + 0xfc]      ; 0054f482
    MOV dword ptr [ESP + 0x1e0],EAX     ; 0054f488
    TEST EDX,EDX                        ; 0054f48f
    JZ 0x0054fb83                       ; 0054f491
        ;   XREF to: 0054fb83 (CONDITIONAL_JUMP)  ; LAB_0054fb83
    MOV EBX,dword ptr [ESP + 0x1e0]     ; 0054f497
        ;   Label: LAB_0054f497
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 0054f49e
    PUSH EBX                            ; 0054f4a5
    MOV EAX,dword ptr [EAX + 0x154]     ; 0054f4a6
    LEA ESI,[ESP + 0x104]               ; 0054f4ac
    LEA EDI,[ESP + 0x11c]               ; 0054f4b3
    CALL dword ptr [EAX + 0x1c]         ; 0054f4ba
    MOV ECX,0x6                         ; 0054f4bd
    LEA ESI,[ESP + 0x104]               ; 0054f4c2
    LEA EAX,[ESP + 0x4]                 ; 0054f4c9
    ADD ESP,0x4                         ; 0054f4cd
    XOR EBP,EBP                         ; 0054f4d0
    MOV dword ptr [ESP + 0x1e4],EAX     ; 0054f4d2
    MOVSD.REP ES:EDI,ESI                ; 0054f4d9
    PUSH EBP                            ; 0054f4db
        ;   Label: LAB_0054f4db
    LEA EAX,[ESP + 0x11c]               ; 0054f4dc
    PUSH EAX                            ; 0054f4e3
    LEA ESI,[ESP + 0x18c]               ; 0054f4e4
    LEA EDI,[ESP + 0x138]               ; 0054f4eb
    CALL core_box.cpp_FUN_00420570      ; 0054f4f2
        ;   XREF to: 00420570 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_00420570()
    LEA ESI,[ESP + 0x18c]               ; 0054f4f7
    ADD ESP,0x8                         ; 0054f4fe
    LEA EAX,[ESP + 0x130]               ; 0054f501
    MOVSD ES:EDI,ESI                    ; 0054f508
    MOVSD ES:EDI,ESI                    ; 0054f509
    MOVSD ES:EDI,ESI                    ; 0054f50a
    PUSH EAX                            ; 0054f50b
    MOV ESI,dword ptr [ESP + 0x1e4]     ; 0054f50c
    PUSH ESI                            ; 0054f513
    LEA ESI,[ESP + 0x144]               ; 0054f514
    LEA EDI,[ESP + 0x174]               ; 0054f51b
    CALL core_actor.cpp_FUN_00408b40    ; 0054f522
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x144]               ; 0054f527
    ADD ESP,0x8                         ; 0054f52e
    LEA EAX,[ESP + 0x16c]               ; 0054f531
    MOV EBX,dword ptr [ESP + 0x1e4]     ; 0054f538
    MOVSD ES:EDI,ESI                    ; 0054f53f
    MOVSD ES:EDI,ESI                    ; 0054f540
    MOVSD ES:EDI,ESI                    ; 0054f541
    FLD float ptr [EAX]                 ; 0054f542
    FMUL float ptr [0x00605000]         ; 0054f544 | DAT_00605000
    FISTP dword ptr [EBX]               ; 0054f54a
    FLD float ptr [EAX + 0x4]           ; 0054f54c
    FMUL float ptr [0x00605000]         ; 0054f54f | DAT_00605000
    FISTP dword ptr [EBX + 0x4]         ; 0054f555
    FLD float ptr [EAX + 0x8]           ; 0054f558
    FMUL float ptr [0x00605000]         ; 0054f55b | DAT_00605000
    FISTP dword ptr [EBX + 0x8]         ; 0054f561
    LEA EDI,[EBX + 0xc]                 ; 0054f564
    INC EBP                             ; 0054f567
    MOV dword ptr [ESP + 0x1e4],EDI     ; 0054f568
    CMP EBP,0x8                         ; 0054f56f
    JL 0x0054f4db                       ; 0054f572
        ;   XREF to: 0054f4db (CONDITIONAL_JUMP)  ; LAB_0054f4db
    MOV ESI,dword ptr [ESP + 0x1d8]     ; 0054f578
        ;   Label: LAB_0054f578
    MOV EDI,dword ptr [ESP + 0x1dc]     ; 0054f57f
    MOV EDX,dword ptr [ESP + 0x1fc]     ; 0054f586
    ADD ESI,0x4                         ; 0054f58d
    INC EDI                             ; 0054f590
    MOV EBP,dword ptr [EDX + 0x14d164]  ; 0054f591
    MOV dword ptr [ESP + 0x1d8],ESI     ; 0054f597
    MOV dword ptr [ESP + 0x1dc],EDI     ; 0054f59e
    CMP EDI,EBP                         ; 0054f5a5
    JL 0x0054f475                       ; 0054f5a7
        ;   XREF to: 0054f475 (CONDITIONAL_JUMP)  ; LAB_0054f475
    MOV EBX,dword ptr [ESP + 0x1fc]     ; 0054f5ad
        ;   Label: LAB_0054f5ad
    FLD float ptr [EBX + 0x14d154]      ; 0054f5b4
    FMUL float ptr [EBX + 0x14d160]     ; 0054f5ba
    FLD float ptr [EBX + 0x14d158]      ; 0054f5c0
    FMUL float ptr [EBX + 0x14d160]     ; 0054f5c6
    FLD float ptr [EBX + 0x14d15c]      ; 0054f5cc
    FMUL float ptr [EBX + 0x14d160]     ; 0054f5d2
    MOV EAX,0x1                         ; 0054f5d8
    LEA EDI,[ESP + 0x1c0]               ; 0054f5dd
    LEA ESI,[ESP + 0x190]               ; 0054f5e4
    LEA EDX,[ESP + 0x178]               ; 0054f5eb
    MOV [0x0202636c],EAX                ; 0054f5f2 | DAT_0202636c
    LEA EAX,[ESP + 0x1c0]               ; 0054f5f7
    FXCH ST2                            ; 0054f5fe
    FSTP float ptr [ESP + 0x190]        ; 0054f600
    FSTP float ptr [ESP + 0x194]        ; 0054f607
    FSTP float ptr [ESP + 0x198]        ; 0054f60e
    MOVSD ES:EDI,ESI                    ; 0054f615
    MOVSD ES:EDI,ESI                    ; 0054f616
    MOVSD ES:EDI,ESI                    ; 0054f617
    CMP EDX,EAX                         ; 0054f618
    JZ 0x0054f646                       ; 0054f61a
        ;   XREF to: 0054f646 (CONDITIONAL_JUMP)  ; LAB_0054f646
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 0054f61c
    MOV dword ptr [ESP + 0x178],EAX     ; 0054f623
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 0054f62a
    MOV dword ptr [ESP + 0x17c],EAX     ; 0054f631
    MOV EAX,dword ptr [ESP + 0x1c8]     ; 0054f638
    MOV dword ptr [ESP + 0x180],EAX     ; 0054f63f
    MOV EBX,0x202634c                   ; 0054f646
        ;   Label: LAB_0054f646
    LEA EAX,[ESP + 0x178]               ; 0054f64b
    FLD float ptr [EAX]                 ; 0054f652
    FMUL float ptr [0x00605004]         ; 0054f654 | DAT_00605004
    FISTP dword ptr [EBX]               ; 0054f65a | DAT_0202634c
    FLD float ptr [EAX + 0x4]           ; 0054f65c
    FMUL float ptr [0x00605004]         ; 0054f65f | DAT_00605004
    FISTP dword ptr [EBX + 0x4]         ; 0054f665 | DAT_02026350
    FLD float ptr [EAX + 0x8]           ; 0054f668
    FMUL float ptr [0x00605004]         ; 0054f66b | DAT_00605004
    FISTP dword ptr [EBX + 0x8]         ; 0054f671 | DAT_02026354
    ADD ESP,0x1e8                       ; 0054f674
    POP EBP                             ; 0054f67a
    POP EDI                             ; 0054f67b
    POP ESI                             ; 0054f67c
    POP EBX                             ; 0054f67d
    RET                                 ; 0054f67e
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0054f67f
        ;   Label: LAB_0054f67f
    ADD EAX,0x4                         ; 0054f686
    PUSH 0x1fe37ec                      ; 0054f689
    ADD EDI,EAX                         ; 0054f68e
    PUSH EDI                            ; 0054f690
    CALL core_setutil.cpp_C3DSCamera_apply_FUN_0055c5f0 ; 0054f691
        ;   XREF to: 0055c5f0 (UNCONDITIONAL_CALL)  ; undefined core_setutil.cpp_C3DSCamera_apply_FUN_0055c5f0()
    ADD ESP,0x8                         ; 0054f696
    MOV ECX,dword ptr [ESI + 0x154]     ; 0054f699
    MOV EBX,dword ptr [ESP + 0x1fc]     ; 0054f69f
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0054f6a6
    ADD EBX,0x15ac64                    ; 0054f6ad
    ADD EAX,0x15ac70                    ; 0054f6b3
    TEST ECX,ECX                        ; 0054f6b8
    JZ 0x0054f85a                       ; 0054f6ba
        ;   XREF to: 0054f85a (CONDITIONAL_JUMP)  ; LAB_0054f85a
    MOV ESI,dword ptr [ESP + 0x1fc]     ; 0054f6c0
    MOV EDX,dword ptr [ESI + 0x15ac40]  ; 0054f6c7
    MOV dword ptr [EBX],EDX             ; 0054f6cd
    MOV EBP,EBX                         ; 0054f6cf
    MOV EDX,dword ptr [ESI + 0x15ac44]  ; 0054f6d1
    ADD ESI,0x15ac40                    ; 0054f6d7
    MOV dword ptr [EBX + 0x4],EDX       ; 0054f6dd
    MOV EDI,ESI                         ; 0054f6e0
    MOV EDX,dword ptr [ESI + 0x8]       ; 0054f6e2
    ADD ESI,0xc                         ; 0054f6e5
    MOV dword ptr [EBX + 0x8],EDX       ; 0054f6e8
    CMP EAX,ESI                         ; 0054f6eb
    JZ 0x0054f6ff                       ; 0054f6ed
        ;   XREF to: 0054f6ff (CONDITIONAL_JUMP)  ; LAB_0054f6ff
    MOV EDX,dword ptr [ESI]             ; 0054f6ef
    MOV dword ptr [EAX],EDX             ; 0054f6f1
    MOV EDX,dword ptr [ESI + 0x4]       ; 0054f6f3
    MOV dword ptr [EAX + 0x4],EDX       ; 0054f6f6
    MOV EDX,dword ptr [ESI + 0x8]       ; 0054f6f9
    MOV dword ptr [EAX + 0x8],EDX       ; 0054f6fc
    MOV EAX,dword ptr [EDI + 0x18]      ; 0054f6ff
        ;   Label: LAB_0054f6ff
    MOV dword ptr [EBP + 0x18],EAX      ; 0054f702
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0054f705
    MOV dword ptr [EBP + 0x1c],EAX      ; 0054f708
    MOV EAX,dword ptr [EDI + 0x20]      ; 0054f70b
    MOV dword ptr [EBP + 0x20],EAX      ; 0054f70e
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0054f711
        ;   Label: LAB_0054f711
    ADD EAX,0x15ac64                    ; 0054f718
    PUSH EAX                            ; 0054f71d
    PUSH 0x1fe37ec                      ; 0054f71e
    CALL core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_004542a0 ; 0054f723
        ;   XREF to: 004542a0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_004542a0(CDemonCamera * this_ptr, SFog * fog_config)
    ADD ESP,0x8                         ; 0054f728
    XOR EBX,EBX                         ; 0054f72b
    PUSH EBX                            ; 0054f72d
    PUSH 0x1fe37ec                      ; 0054f72e
    MOV dword ptr [0x01fe5c1c],EBX      ; 0054f733 | g_CDemonRaytraceInstance
    CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044ceb0 ; 0054f739
        ;   XREF to: 0044ceb0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044ceb0(CDemonCamera * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 0054f73e
    PUSH 0x1fe37ec                      ; 0054f741
    CALL core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044d700 ; 0054f746
        ;   XREF to: 0044d700 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044d700(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0054f74b
    PUSH 0x10                           ; 0054f74e
    MOV ESI,dword ptr [ESP + 0x200]     ; 0054f750
    PUSH ESI                            ; 0054f757
    CALL core_set.cpp_FUN_005545a0      ; 0054f758
        ;   XREF to: 005545a0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_005545a0(CDemonSet * this_ptr, uint dirty_flags_mask)
    ADD ESP,0x8                         ; 0054f75d
    PUSH 0x1                            ; 0054f760
    PUSH 0x461c3f9a                     ; 0054f762
    PUSH ESI                            ; 0054f767
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0 ; 0054f768
        ;   XREF to: 0054e3c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0(CDemonSet * this_ptr, float frustum_param, int render_mode)
    ADD ESP,0xc                         ; 0054f76d
    PUSH 0x1fe37ec                      ; 0054f770
    CALL core_dcamera.cpp_CDemonCamera_saveZBufferScanlines_FUN_00455100 ; 0054f775
        ;   XREF to: 00455100 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_saveZBufferScanlines_FUN_00455100(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0054f77a
    MOV EBP,0x1                         ; 0054f77d
    PUSH EBP                            ; 0054f782
    PUSH ESI                            ; 0054f783
    MOV dword ptr [0x02026344],EBP      ; 0054f784 | DAT_02026344
    CALL core_set.cpp_FUN_0054eef0      ; 0054f78a
        ;   XREF to: 0054eef0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_0054eef0(CDemonSet * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 0054f78f
    PUSH 0x1fe37ec                      ; 0054f792
    MOV dword ptr [0x02026344],EBX      ; 0054f797 | DAT_02026344
    CALL core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044ef30 ; 0054f79d
        ;   XREF to: 0044ef30 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044ef30(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0054f7a2
    PUSH 0x1fe37ec                      ; 0054f7a5
    CALL core_dcamera.cpp_CDemonCamera_restoreZBufferScanlines_FUN_00455150 ; 0054f7aa
        ;   XREF to: 00455150 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_restoreZBufferScanlines_FUN_00455150(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0054f7af
    IMUL EAX,dword ptr [ESP + 0x200],0x1a4 ; 0054f7b2
    LEA EDX,[ESI + 0x4]                 ; 0054f7bd
    ADD EAX,EDX                         ; 0054f7c0
    PUSH EAX                            ; 0054f7c2
    PUSH 0x5f0809                       ; 0054f7c3 | = "%s.raw"
    LEA EAX,[ESP + 0x68]                ; 0054f7c8
    PUSH EAX                            ; 0054f7cc
    CALL crt_unknown.c_FUN_005bfb40     ; 0054f7cd
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0xc                         ; 0054f7d2
    LEA EAX,[ESP + 0x60]                ; 0054f7d5
    PUSH EAX                            ; 0054f7d9
    PUSH 0x1fe37ec                      ; 0054f7da
    CALL core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044fff0 ; 0054f7df
        ;   XREF to: 0044fff0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044fff0(CDemonCamera * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0054f7e4
    PUSH EBP                            ; 0054f7e7
    PUSH ESI                            ; 0054f7e8
    CALL core_set.cpp_FUN_0054eef0      ; 0054f7e9
        ;   XREF to: 0054eef0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_0054eef0(CDemonSet * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 0054f7ee
    PUSH EBX                            ; 0054f7f1
    PUSH 0x1fe37ec                      ; 0054f7f2
    CALL core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044d8c0 ; 0054f7f7
        ;   XREF to: 0044d8c0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044d8c0(CDemonCamera * this_ptr, int restore_zbuffer)
    MOV ESI,dword ptr [0x01c50948]      ; 0054f7fc | DAT_01c50948
    ADD ESP,0x8                         ; 0054f802
    TEST ESI,ESI                        ; 0054f805
    JZ 0x0054f846                       ; 0054f807
        ;   XREF to: 0054f846 (CONDITIONAL_JUMP)  ; LAB_0054f846
    PUSH EBX                            ; 0054f809
    MOV EDI,dword ptr [ESP + 0x200]     ; 0054f80a
    PUSH 0x461c3f9a                     ; 0054f811
    PUSH EDI                            ; 0054f816
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0 ; 0054f817
        ;   XREF to: 0054e3c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0(CDemonSet * this_ptr, float frustum_param, int render_mode)
    MOV EAX,[0x00625c90]                ; 0054f81c | g_CWaterPtr
    MOV EBP,dword ptr [EAX]             ; 0054f821 | g_CWaterInstance
    ADD ESP,0xc                         ; 0054f823
    TEST EBP,EBP                        ; 0054f826
    JNZ 0x0054f834                      ; 0054f828
        ;   XREF to: 0054f834 (CONDITIONAL_JUMP)  ; LAB_0054f834
    PUSH EBX                            ; 0054f82a
    PUSH EAX                            ; 0054f82b | g_CWaterInstance
    CALL core_water.cpp_FUN_005a9f10    ; 0054f82c
        ;   XREF to: 005a9f10 (UNCONDITIONAL_CALL)  ; void core_water.cpp_FUN_005a9f10(CWater * this_ptr, int render_mode)
    ADD ESP,0x8                         ; 0054f831
    PUSH 0x1                            ; 0054f834
        ;   Label: LAB_0054f834
    MOV EAX,dword ptr [ESP + 0x200]     ; 0054f836
    PUSH EAX                            ; 0054f83d
    CALL core_set.cpp_FUN_0054eef0      ; 0054f83e
        ;   XREF to: 0054eef0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_0054eef0(CDemonSet * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 0054f843
    PUSH 0x0                            ; 0054f846
        ;   Label: LAB_0054f846
    PUSH 0x1fe37ec                      ; 0054f848
    CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0044d610 ; 0054f84d
        ;   XREF to: 0044d610 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_endScene_FUN_0044d610(CDemonCamera * this_ptr, int skip_zbuffer_copy)
    ADD ESP,0x8                         ; 0054f852
    JMP 0x0054f271                      ; 0054f855
        ;   XREF to: 0054f271 (UNCONDITIONAL_JUMP)  ; LAB_0054f271
    LEA ESI,[EDI + 0x154]               ; 0054f85a
        ;   Label: LAB_0054f85a
    MOV EDX,dword ptr [ESI]             ; 0054f860
    MOV dword ptr [EBX],EDX             ; 0054f862
    MOV EDX,dword ptr [ESI + 0x4]       ; 0054f864
    MOV EDI,EBX                         ; 0054f867
    MOV dword ptr [EBX + 0x4],EDX       ; 0054f869
    MOV EBP,ESI                         ; 0054f86c
    MOV EDX,dword ptr [ESI + 0x8]       ; 0054f86e
    ADD ESI,0xc                         ; 0054f871
    MOV dword ptr [EBX + 0x8],EDX       ; 0054f874
    CMP EAX,ESI                         ; 0054f877
    JZ 0x0054f88b                       ; 0054f879
        ;   XREF to: 0054f88b (CONDITIONAL_JUMP)  ; LAB_0054f88b
    MOV EDX,dword ptr [ESI]             ; 0054f87b
    MOV dword ptr [EAX],EDX             ; 0054f87d
    MOV EDX,dword ptr [ESI + 0x4]       ; 0054f87f
    MOV dword ptr [EAX + 0x4],EDX       ; 0054f882
    MOV EDX,dword ptr [ESI + 0x8]       ; 0054f885
    MOV dword ptr [EAX + 0x8],EDX       ; 0054f888
    MOV EAX,dword ptr [EBP + 0x18]      ; 0054f88b
        ;   Label: LAB_0054f88b
    MOV dword ptr [EDI + 0x18],EAX      ; 0054f88e
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0054f891
    MOV dword ptr [EDI + 0x1c],EAX      ; 0054f894
    MOV EAX,dword ptr [EBP + 0x20]      ; 0054f897
    MOV dword ptr [EDI + 0x20],EAX      ; 0054f89a
    JMP 0x0054f711                      ; 0054f89d
        ;   XREF to: 0054f711 (UNCONDITIONAL_JUMP)  ; LAB_0054f711
    MOV ECX,dword ptr [EAX + 0x19a2c]   ; 0054f8a2
        ;   Label: LAB_0054f8a2
    XOR EBX,EBX                         ; 0054f8a8
    XOR ESI,ESI                         ; 0054f8aa
    TEST ECX,ECX                        ; 0054f8ac
    JLE 0x0054f971                      ; 0054f8ae
        ;   XREF to: 0054f971 (CONDITIONAL_JUMP)  ; LAB_0054f971
    MOV EAX,dword ptr [ESP + 0x200]     ; 0054f8b4
    SHL EAX,0x4                         ; 0054f8bb
    MOV dword ptr [ESP + 0x1cc],EAX     ; 0054f8be
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0054f8c5
    ADD EAX,0x19a30                     ; 0054f8cc
    MOV EBP,dword ptr [ESP + 0x1fc]     ; 0054f8d1
    MOV dword ptr [ESP + 0x1d4],EAX     ; 0054f8d8
    IMUL EDI,EBX,0x1898                 ; 0054f8df
        ;   Label: LAB_0054f8df
    CMP dword ptr [EBP + 0x19a30],0x1   ; 0054f8e5
    JNZ 0x0054f948                      ; 0054f8ec
        ;   XREF to: 0054f948 (CONDITIONAL_JUMP)  ; LAB_0054f948
    MOV EAX,dword ptr [ESP + 0x200]     ; 0054f8ee
    CMP byte ptr [EAX + EBP*0x1 + 0x19b58],0x0 ; 0054f8f5
    JZ 0x0054f948                       ; 0054f8fd
        ;   XREF to: 0054f948 (CONDITIONAL_JUMP)  ; LAB_0054f948
    MOV ECX,dword ptr [ESP + 0x1d4]     ; 0054f8ff
    MOV EAX,[0x01fe5c88]                ; 0054f906 | DAT_01fe5c88
    ADD EDI,ECX                         ; 0054f90b
    MOV dword ptr [EAX*0x4 + 0x1fe5c8c],EDI ; 0054f90d | DAT_01fe5c8c | DAT_01fe5c90
    LEA EDI,[EAX + 0x1]                 ; 0054f914
    MOV dword ptr [0x01fe5c88],EDI      ; 0054f917 | DAT_01fe5c88
    CMP EDI,0xc8                        ; 0054f91d
    JL 0x0054f948                       ; 0054f923
        ;   XREF to: 0054f948 (CONDITIONAL_JUMP)  ; LAB_0054f948
    MOV EDX,0x5f0810                    ; 0054f925 | = "..\\core\\set.cpp"
    MOV ECX,0x500                       ; 0054f92a
    PUSH 0x5f0820                       ; 0054f92f | = "CDemonSet::setCameraView - Too many o..."
    MOV dword ptr [0x01d1d400],EDX      ; 0054f934 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0054f93a | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0054f940
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0054f945
    CMP dword ptr [EBP + 0x19a30],0x0   ; 0054f948
        ;   Label: LAB_0054f948
    JZ 0x0054fa4b                       ; 0054f94f
        ;   XREF to: 0054fa4b (CONDITIONAL_JUMP)  ; LAB_0054fa4b
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0054f955
        ;   Label: LAB_0054f955
    INC EBX                             ; 0054f95c
    MOV EDI,dword ptr [EAX + 0x19a2c]   ; 0054f95d
    ADD EBP,0x1898                      ; 0054f963
    CMP EBX,EDI                         ; 0054f969
    JL 0x0054f8df                       ; 0054f96b
        ;   XREF to: 0054f8df (CONDITIONAL_JUMP)  ; LAB_0054f8df
    MOV EBP,dword ptr [ESP + 0x1fc]     ; 0054f971
        ;   Label: LAB_0054f971
    PUSH EBP                            ; 0054f978
    CALL core_set.cpp_FUN_005542c0      ; 0054f979
        ;   XREF to: 005542c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_005542c0(CDemonSet * this_ptr)
    MOV EAX,[0x01fe4e38]                ; 0054f97e | DAT_01fe4e38
    ADD ESP,0x4                         ; 0054f983
    XOR EBP,EBP                         ; 0054f986
    TEST EAX,EAX                        ; 0054f988
    JLE 0x0054fa29                      ; 0054f98a
        ;   XREF to: 0054fa29 (CONDITIONAL_JUMP)  ; LAB_0054fa29
    IMUL EAX,dword ptr [ESP + 0x200],0x1a4 ; 0054f990
    MOV EDX,dword ptr [ESP + 0x1fc]     ; 0054f99b
    MOV EDI,0x1fe4fbc                   ; 0054f9a2
    ADD EDX,EAX                         ; 0054f9a7
    XOR EBX,EBX                         ; 0054f9a9
    MOV dword ptr [ESP + 0x1d0],EDX     ; 0054f9ab
    MOV ESI,dword ptr [EBX + 0x1fe4e3c] ; 0054f9b2
        ;   Label: LAB_0054f9b2
    PUSH ESI                            ; 0054f9b8
    CALL core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_00462770 ; 0054f9b9
        ;   XREF to: 00462770 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_00462770(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 0054f9be
    PUSH 0x1                            ; 0054f9c1
    PUSH ESI                            ; 0054f9c3
    CALL core_dlight.cpp_CDemonLight_beginScene_FUN_00462820 ; 0054f9c4
        ;   XREF to: 00462820 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_beginScene_FUN_00462820(CDemonLight * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 0054f9c9
    PUSH ESI                            ; 0054f9cc
    CALL core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_00462be0 ; 0054f9cd
        ;   XREF to: 00462be0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_00462be0(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 0054f9d2
    PUSH 0x1                            ; 0054f9d5
    MOV EAX,dword ptr [ESP + 0x200]     ; 0054f9d7
    PUSH EAX                            ; 0054f9de
    CALL core_set.cpp_FUN_0054eef0      ; 0054f9df
        ;   XREF to: 0054eef0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_0054eef0(CDemonSet * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 0054f9e4
    PUSH ESI                            ; 0054f9e7
    CALL core_dlight.cpp_CDemonLight_endBackgroundScene_FUN_00462cd0 ; 0054f9e8
        ;   XREF to: 00462cd0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_endBackgroundScene_FUN_00462cd0(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 0054f9ed
    PUSH 0x0                            ; 0054f9f0
    PUSH ESI                            ; 0054f9f2
    CALL core_dlight.cpp_CDemonLight_endScene_FUN_00462ad0 ; 0054f9f3
        ;   XREF to: 00462ad0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_endScene_FUN_00462ad0(CDemonLight * this_ptr, int restore_viewport_state)
    ADD ESP,0x8                         ; 0054f9f8
    PUSH ESI                            ; 0054f9fb
    CALL core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00462d20 ; 0054f9fc
        ;   XREF to: 00462d20 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00462d20(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 0054fa01
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 0054fa04
    CMP dword ptr [EAX + 0x144],0x0     ; 0054fa0b
    JZ 0x0054faa3                       ; 0054fa12
        ;   XREF to: 0054faa3 (CONDITIONAL_JUMP)  ; LAB_0054faa3
    MOV EDX,dword ptr [0x01fe4e38]      ; 0054fa18 | DAT_01fe4e38
        ;   Label: LAB_0054fa18
    ADD EBX,0x4                         ; 0054fa1e
    INC EBP                             ; 0054fa21
    ADD EDI,0x10                        ; 0054fa22
    CMP EBP,EDX                         ; 0054fa25
    JL 0x0054f9b2                       ; 0054fa27
        ;   XREF to: 0054f9b2 (CONDITIONAL_JUMP)  ; LAB_0054f9b2
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0054fa29
        ;   Label: LAB_0054fa29
    ADD EAX,0x14d154                    ; 0054fa30
    PUSH dword ptr [EAX + 0xc]          ; 0054fa35
    PUSH EAX                            ; 0054fa38
    PUSH 0x1fe37ec                      ; 0054fa39
    CALL core_dcamera.cpp_FUN_0044ee30  ; 0054fa3e
        ;   XREF to: 0044ee30 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0044ee30()
    ADD ESP,0xc                         ; 0054fa43
    JMP 0x0054f285                      ; 0054fa46
        ;   XREF to: 0054f285 (UNCONDITIONAL_JUMP)  ; LAB_0054f285
    MOV EDI,dword ptr [ESP + 0x200]     ; 0054fa4b
        ;   Label: LAB_0054fa4b
    MOV DH,byte ptr [EDI + EBP*0x1 + 0x19b58] ; 0054fa52
    LEA EAX,[ESI + 0x1]                 ; 0054fa59
    TEST DH,DH                          ; 0054fa5c
    JNZ 0x0054fa67                      ; 0054fa5e
        ;   XREF to: 0054fa67 (CONDITIONAL_JUMP)  ; LAB_0054fa67
    MOV ESI,EAX                         ; 0054fa60
    JMP 0x0054f955                      ; 0054fa62
        ;   XREF to: 0054f955 (UNCONDITIONAL_JUMP)  ; LAB_0054f955
    MOV EDI,dword ptr [0x01fe4e38]      ; 0054fa67 | DAT_01fe4e38
        ;   Label: LAB_0054fa67
    MOV ESI,dword ptr [ESI*0x4 + 0x1fe4cb8] ; 0054fa6d | DAT_01fe4cb8
    MOV dword ptr [EDI*0x4 + 0x1fe4e3c],ESI ; 0054fa74 | DAT_01fe4e3c
    SHL EDI,0x4                         ; 0054fa7b
    MOV ESI,dword ptr [ESP + 0x1cc]     ; 0054fa7e
    LEA EDI,[EDI + 0x1fe4fbc]           ; 0054fa85
    LEA ESI,[ESI + EBP*0x1 + 0x19c54]   ; 0054fa8b
    MOVSD ES:EDI,ESI                    ; 0054fa92
    MOVSD ES:EDI,ESI                    ; 0054fa93
    MOVSD ES:EDI,ESI                    ; 0054fa94
    MOVSD ES:EDI,ESI                    ; 0054fa95
    MOV ESI,EAX                         ; 0054fa96
    INC dword ptr [0x01fe4e38]          ; 0054fa98 | DAT_01fe4e38
    JMP 0x0054f955                      ; 0054fa9e
        ;   XREF to: 0054f955 (UNCONDITIONAL_JUMP)  ; LAB_0054f955
    PUSH EDI                            ; 0054faa3
        ;   Label: LAB_0054faa3
    PUSH ESI                            ; 0054faa4
    PUSH 0x1fe37ec                      ; 0054faa5
    CALL core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044e8e0 ; 0054faaa
        ;   XREF to: 0044e8e0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044e8e0(CDemonCamera * this_ptr, CDemonLight * light_source, CRect * rect)
    ADD ESP,0xc                         ; 0054faaf
    JMP 0x0054fa18                      ; 0054fab2
        ;   XREF to: 0054fa18 (UNCONDITIONAL_JUMP)  ; LAB_0054fa18
    PUSH 0x1                            ; 0054fab7
        ;   Label: LAB_0054fab7
    PUSH 0x1fe37ec                      ; 0054fab9
    CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044ceb0 ; 0054fabe
        ;   XREF to: 0044ceb0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044ceb0(CDemonCamera * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 0054fac3
    PUSH 0x1fe37ec                      ; 0054fac6
    CALL core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044d700 ; 0054facb
        ;   XREF to: 0044d700 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044d700(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0054fad0
    MOV EBP,dword ptr [EBX + 0x161640]  ; 0054fad3
    MOV dword ptr [0x01c51cac],ESI      ; 0054fad9 | DAT_01c51cac
    TEST EBP,EBP                        ; 0054fadf
    JZ 0x0054fb00                       ; 0054fae1
        ;   XREF to: 0054fb00 (CONDITIONAL_JUMP)  ; LAB_0054fb00
    MOV EDX,dword ptr [EBX + 0x161664]  ; 0054fae3
    PUSH EDX                            ; 0054fae9
    LEA EAX,[EBX + 0x161644]            ; 0054faea
    PUSH EAX                            ; 0054faf0
    MOV ECX,dword ptr [0x006144d0]      ; 0054faf1 | DAT_006144d0
    PUSH ECX                            ; 0054faf7
    CALL core_dskybox.cpp_FUN_00486900  ; 0054faf8
        ;   XREF to: 00486900 (UNCONDITIONAL_CALL)  ; void core_dskybox.cpp_FUN_00486900(SMRGLSkyTexture * sky_texture, char * texture_name, int brightness_factor)
    ADD ESP,0xc                         ; 0054fafd
    PUSH 0x1                            ; 0054fb00
        ;   Label: LAB_0054fb00
    MOV EBX,dword ptr [ESP + 0x200]     ; 0054fb02
    PUSH EBX                            ; 0054fb09
    CALL core_set.cpp_FUN_0054eef0      ; 0054fb0a
        ;   XREF to: 0054eef0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_0054eef0(CDemonSet * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 0054fb0f
    PUSH 0x1                            ; 0054fb12
    PUSH 0x1                            ; 0054fb14
    MOV ESI,dword ptr [0x0061dca4]      ; 0054fb16 | g_CGorePtr
    PUSH ESI                            ; 0054fb1c
    CALL core_gore.cpp_CGore_renderDecals_FUN_004e5cd0 ; 0054fb1d
        ;   XREF to: 004e5cd0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_renderDecals_FUN_004e5cd0(CGore * this_ptr, int render_all, int expire_flag)
    ADD ESP,0xc                         ; 0054fb22
    PUSH 0x1                            ; 0054fb25
    PUSH 0x1                            ; 0054fb27
    MOV EDI,dword ptr [0x0061c010]      ; 0054fb29 | DAT_0061c010
    PUSH EDI                            ; 0054fb2f
    CALL core_fire.cpp_CFireEffect_renderDecals_FUN_004b54a0 ; 0054fb30
        ;   XREF to: 004b54a0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_renderDecals_FUN_004b54a0(CFireEffect * this_ptr, int render_mode, int render_completeness)
    MOV EAX,[0x00625c90]                ; 0054fb35 | g_CWaterPtr
    MOV EBP,dword ptr [EAX]             ; 0054fb3a | g_CWaterInstance
    ADD ESP,0xc                         ; 0054fb3c
    TEST EBP,EBP                        ; 0054fb3f
    JNZ 0x0054fb4d                      ; 0054fb41
        ;   XREF to: 0054fb4d (CONDITIONAL_JUMP)  ; LAB_0054fb4d
    PUSH EBP                            ; 0054fb43
    PUSH EAX                            ; 0054fb44 | g_CWaterInstance
    CALL core_water.cpp_FUN_005a9f10    ; 0054fb45
        ;   XREF to: 005a9f10 (UNCONDITIONAL_CALL)  ; void core_water.cpp_FUN_005a9f10(CWater * this_ptr, int render_mode)
    ADD ESP,0x8                         ; 0054fb4a
    PUSH 0x0                            ; 0054fb4d
        ;   Label: LAB_0054fb4d
    PUSH 0x1fe37ec                      ; 0054fb4f
    CALL core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044d8c0 ; 0054fb54
        ;   XREF to: 0044d8c0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044d8c0(CDemonCamera * this_ptr, int restore_zbuffer)
    ADD ESP,0x8                         ; 0054fb59
    PUSH 0x0                            ; 0054fb5c
    PUSH 0x1fe37ec                      ; 0054fb5e
    CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0044d610 ; 0054fb63
        ;   XREF to: 0044d610 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_endScene_FUN_0044d610(CDemonCamera * this_ptr, int skip_zbuffer_copy)
    ADD ESP,0x8                         ; 0054fb68
    JMP 0x0054f2ba                      ; 0054fb6b
        ;   XREF to: 0054f2ba (UNCONDITIONAL_JUMP)  ; LAB_0054f2ba
    MOV ESI,dword ptr [EAX + 0x17c]     ; 0054fb70
        ;   Label: LAB_0054fb70
    PUSH ESI                            ; 0054fb76
    MOV EDI,dword ptr [0x006236b8]      ; 0054fb77 | DAT_006236b8
    PUSH EDI                            ; 0054fb7d
    JMP 0x0054f302                      ; 0054fb7e
        ;   XREF to: 0054f302 (UNCONDITIONAL_JUMP)  ; LAB_0054f302
    CMP dword ptr [EAX + 0xf8],0x0      ; 0054fb83
        ;   Label: LAB_0054fb83
    JNZ 0x0054f497                      ; 0054fb8a
        ;   XREF to: 0054f497 (CONDITIONAL_JUMP)  ; LAB_0054f497
    JMP 0x0054f578                      ; 0054fb90
        ;   XREF to: 0054f578 (UNCONDITIONAL_JUMP)  ; LAB_0054f578

