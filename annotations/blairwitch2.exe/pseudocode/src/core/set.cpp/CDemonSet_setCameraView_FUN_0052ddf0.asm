; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_setCameraView_FUN_0052ddf0(CDemonSet *this_ptr,int index)
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
;   core_game.cpp_CGame_runGameSession_FUN_004b6170 at 004b6872
;   core_game.cpp_FUN_004b7fc0 at 004b801c
;   core_game.cpp_FUN_004b8030 at 004b808c
;   core_game.cpp_FUN_004b82e0 at 004b8a28
;   core_script.cpp_FUN_00522350 at 00525e6f
;   core_set.cpp_CDemonSet_reinitCamera_FUN_0052e910 at 0052e92e
;   core_set.cpp_CDemonSet_restoreCameraView_FUN_00534490 at 005344a4
;   core_setdir.cpp_FUN_00538d10 at 00538d49
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_005e57a8
;   TerminatedCString s_CDemonSet_setCameraView_005e57b8
;   TerminatedCString s_s_raw_005e57e5
;   TerminatedCString s_core_set_cpp_005e57ec
;   TerminatedCString s_CDemonSet_setCameraView_005e57fc
;   undefined4 DAT_005fb210
;   undefined4 DAT_005fb214
;   undefined4 DAT_0060d1f0
;   undefined4 DAT_00614d30
;   CGore* g_CGorePtr = 01cb8284
;   undefined4 DAT_0061c068
;   CWater* g_CWaterPtr = 02653790
;   undefined4 DAT_0061e8f4
;   undefined4 DAT_01c37788
;   undefined4 DAT_01c38aec
;   ... and 23 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_box.cpp_FUN_0041a600
;   core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0043c040
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0043b7f0
;   core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0043c200
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_0043bf50
;   core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00442bf0
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0043e930
;   core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0043d220
;   core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0043d870
;   core_dcamera.cpp_CDemonCamera_restoreZBufferScanlines_FUN_00443aa0
;   core_dcamera.cpp_CDemonCamera_saveZBufferScanlines_FUN_00443a50
;   core_dcamera.cpp_FUN_0043d770
;   core_dirmat.cpp_FUN_004496e0
;   core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_00449f70
;   ... and 22 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052ddf0
        ;   Label: core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0
    PUSH ESI                            ; 0052ddf1
    PUSH EDI                            ; 0052ddf2
    PUSH EBP                            ; 0052ddf3
    SUB ESP,0x1e8                       ; 0052ddf4
    MOV EDX,dword ptr [ESP + 0x200]     ; 0052ddfa
    TEST EDX,EDX                        ; 0052de01
    JL 0x0052de12                       ; 0052de03
        ;   XREF to: 0052de12 (CONDITIONAL_JUMP)  ; LAB_0052de12
    MOV EAX,EDX                         ; 0052de05
    MOV EDX,dword ptr [ESP + 0x1fc]     ; 0052de07
    CMP EAX,dword ptr [EDX]             ; 0052de0e
    JL 0x0052de3d                       ; 0052de10
        ;   XREF to: 0052de3d (CONDITIONAL_JUMP)  ; LAB_0052de3d
    MOV EDI,dword ptr [ESP + 0x200]     ; 0052de12
        ;   Label: LAB_0052de12
    PUSH EDI                            ; 0052de19
    MOV EBX,0x5e57a8                    ; 0052de1a | = "..\\core\\set.cpp"
    MOV ESI,0x477                       ; 0052de1f
    PUSH 0x5e57b8                       ; 0052de24 | = "CDemonSet::setCameraView - invalid in..."
    MOV dword ptr [0x01d046a0],EBX      ; 0052de29 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0052de2f | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0052de35
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0052de3a
    MOV EBP,dword ptr [0x01fc9608]      ; 0052de3d | DAT_01fc9608
        ;   Label: LAB_0052de3d
    XOR EBX,EBX                         ; 0052de43
    TEST EBP,EBP                        ; 0052de45
    JLE 0x0052de70                      ; 0052de47
        ;   XREF to: 0052de70 (CONDITIONAL_JUMP)  ; LAB_0052de70
    XOR ESI,ESI                         ; 0052de49
    MOV EAX,dword ptr [ESI + 0x1fc960c] ; 0052de4b
        ;   Label: LAB_0052de4b
    PUSH EAX                            ; 0052de51
    ADD ESI,0x4                         ; 0052de52
    INC EBX                             ; 0052de55
    CALL core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_0044a520 ; 0052de56
        ;   XREF to: 0044a520 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_0044a520(CDemonLight * this_ptr)
    MOV EDX,dword ptr [0x01fc9608]      ; 0052de5b | DAT_01fc9608
    ADD ESP,0x4                         ; 0052de61
    CMP EBX,EDX                         ; 0052de64
    JL 0x0052de4b                       ; 0052de66
        ;   XREF to: 0052de4b (CONDITIONAL_JUMP)  ; LAB_0052de4b
    LEA EAX,[EAX]                       ; 0052de68
    MOV EDX,EDX                         ; 0052de6e
    MOV ECX,dword ptr [0x01fc8e84]      ; 0052de70 | DAT_01fc8e84
        ;   Label: LAB_0052de70
    XOR ESI,ESI                         ; 0052de76
    TEST ECX,ECX                        ; 0052de78
    JLE 0x0052dea0                      ; 0052de7a
        ;   XREF to: 0052dea0 (CONDITIONAL_JUMP)  ; LAB_0052dea0
    XOR EBX,EBX                         ; 0052de7c
    MOV EDI,dword ptr [EBX + 0x1fc8e88] ; 0052de7e | DAT_01fc8e88
        ;   Label: LAB_0052de7e
    PUSH EDI                            ; 0052de84
    ADD EBX,0x4                         ; 0052de85
    INC ESI                             ; 0052de88
    CALL core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_0044a520 ; 0052de89
        ;   XREF to: 0044a520 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_0044a520(CDemonLight * this_ptr)
    MOV EBP,dword ptr [0x01fc8e84]      ; 0052de8e | DAT_01fc8e84
    ADD ESP,0x4                         ; 0052de94
    CMP ESI,EBP                         ; 0052de97
    JL 0x0052de7e                       ; 0052de99
        ;   XREF to: 0052de7e (CONDITIONAL_JUMP)  ; LAB_0052de7e
    LEA EAX,[EAX]                       ; 0052de9b
    MOV ECX,ECX                         ; 0052de9e
    MOV EAX,[0x01fc8e84]                ; 0052dea0 | DAT_01fc8e84
        ;   Label: LAB_0052dea0
    XOR ESI,ESI                         ; 0052dea5
    TEST EAX,EAX                        ; 0052dea7
    JLE 0x0052ded0                      ; 0052dea9
        ;   XREF to: 0052ded0 (CONDITIONAL_JUMP)  ; LAB_0052ded0
    XOR EBX,EBX                         ; 0052deab
    MOV EDX,dword ptr [EBX + 0x1fc8e88] ; 0052dead | DAT_01fc8e88
        ;   Label: LAB_0052dead
    PUSH EDX                            ; 0052deb3
    ADD EBX,0x4                         ; 0052deb4
    INC ESI                             ; 0052deb7
    CALL core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_00449ff0 ; 0052deb8
        ;   XREF to: 00449ff0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_00449ff0(CDemonLight * this_ptr)
    MOV ECX,dword ptr [0x01fc8e84]      ; 0052debd | DAT_01fc8e84
    ADD ESP,0x4                         ; 0052dec3
    CMP ESI,ECX                         ; 0052dec6
    JL 0x0052dead                       ; 0052dec8
        ;   XREF to: 0052dead (CONDITIONAL_JUMP)  ; LAB_0052dead
    LEA EAX,[EAX]                       ; 0052deca
    CALL core_dlight.cpp_resetRestoreMemoryAllocator_FUN_00449f60 ; 0052ded0
        ;   XREF to: 00449f60 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_resetRestoreMemoryAllocator_FUN_00449f60()
        ;   Label: LAB_0052ded0
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0052ded5
    MOV EDX,dword ptr [ESP + 0x1fc]     ; 0052dedc
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 0052dee3
    MOV dword ptr [EDX + 0x15aec0],0x3f000000 ; 0052dee9
    MOV dword ptr [EDX + 0x15ac90],0x1  ; 0052def3
    XOR EBX,EBX                         ; 0052defd
    MOV dword ptr [EDX + 0x15f6f4],0x1  ; 0052deff
    MOV dword ptr [0x01fc8e84],EBX      ; 0052df09 | DAT_01fc8e84
    MOV dword ptr [EDX + 0x15aebc],EAX  ; 0052df0f
    MOV EAX,dword ptr [ESP + 0x200]     ; 0052df15
    MOV dword ptr [0x01fc9cd4],EBX      ; 0052df1c | DAT_01fc9cd4
    MOV dword ptr [EDX + 0x15aeb8],EAX  ; 0052df22
    MOV dword ptr [0x01fc961c],EBX      ; 0052df28 | DAT_01fc961c
    MOV EDX,dword ptr [EDX + 0x14d164]  ; 0052df2e
    MOV dword ptr [0x01fc97b0],EBX      ; 0052df34 | DAT_01fc97b0
    TEST EDX,EDX                        ; 0052df3a
    JLE 0x0052df70                      ; 0052df3c
        ;   XREF to: 0052df70 (CONDITIONAL_JUMP)  ; LAB_0052df70
    MOV ESI,dword ptr [ESP + 0x1fc]     ; 0052df3e
    MOV EDI,dword ptr [ESP + 0x1fc]     ; 0052df45
    MOV ECX,dword ptr [ESI + 0x14d168]  ; 0052df4c
        ;   Label: LAB_0052df4c
    PUSH ECX                            ; 0052df52
    PUSH EDI                            ; 0052df53
    ADD ESI,0x4                         ; 0052df54
    INC EBX                             ; 0052df57
    CALL core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_0052dd80 ; 0052df58
        ;   XREF to: 0052dd80 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_0052dd80(CDemonSet * this_ptr, CDemonActor * actor)
    MOV EBP,dword ptr [EDI + 0x14d164]  ; 0052df5d
    ADD ESP,0x8                         ; 0052df63
    CMP EBX,EBP                         ; 0052df66
    JL 0x0052df4c                       ; 0052df68
        ;   XREF to: 0052df4c (CONDITIONAL_JUMP)  ; LAB_0052df4c
    LEA EAX,[EAX]                       ; 0052df6a
    IMUL EDI,dword ptr [ESP + 0x200],0x1a4 ; 0052df70
        ;   Label: LAB_0052df70
    MOV ESI,dword ptr [ESP + 0x1fc]     ; 0052df7b
    ADD ESI,EDI                         ; 0052df82
    CMP dword ptr [ESI + 0x144],0x0     ; 0052df84
    JZ 0x0052e39f                       ; 0052df8b
        ;   XREF to: 0052e39f (CONDITIONAL_JUMP)  ; LAB_0052e39f
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0052df91
        ;   Label: LAB_0052df91
    CMP dword ptr [EAX + 0x15ac94],0x0  ; 0052df98
    JZ 0x0052e5c2                       ; 0052df9f
        ;   XREF to: 0052e5c2 (CONDITIONAL_JUMP)  ; LAB_0052e5c2
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0052dfa5
        ;   Label: LAB_0052dfa5
    MOV ECX,dword ptr [ESP + 0x200]     ; 0052dfac
    MOV dword ptr [EAX + 0x15ac90],0x0  ; 0052dfb3
    IMUL EAX,ECX,0x1a4                  ; 0052dfbd
    MOV EBX,dword ptr [ESP + 0x1fc]     ; 0052dfc3
    ADD EAX,EBX                         ; 0052dfca
    MOV ESI,dword ptr [EAX + 0x144]     ; 0052dfcc
    TEST ESI,ESI                        ; 0052dfd2
    JZ 0x0052e7d7                       ; 0052dfd4
        ;   XREF to: 0052e7d7 (CONDITIONAL_JUMP)  ; LAB_0052e7d7
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0052dfda
        ;   Label: LAB_0052dfda
    PUSH EAX                            ; 0052dfe1
    MOV dword ptr [EAX + 0x15f6f4],0x0  ; 0052dfe2
    CALL core_set.cpp_CDemonSet_renderStaticLights_FUN_0052ef80 ; 0052dfec
        ;   XREF to: 0052ef80 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderStaticLights_FUN_0052ef80(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0052dff1
    IMUL EAX,dword ptr [ESP + 0x200],0x1a4 ; 0052dff4
    MOV ECX,dword ptr [ESP + 0x1fc]     ; 0052dfff
    ADD EAX,ECX                         ; 0052e006
    CMP dword ptr [EAX + 0x154],0x0     ; 0052e008
    JZ 0x0052e890                       ; 0052e00f
        ;   XREF to: 0052e890 (CONDITIONAL_JUMP)  ; LAB_0052e890
    MOV EBP,dword ptr [ECX + 0x15ac8c]  ; 0052e015
    PUSH EBP                            ; 0052e01b
    MOV EAX,[0x0061c068]                ; 0052e01c | DAT_0061c068
    PUSH EAX                            ; 0052e021
    CALL core_sound.cpp_CSound_setReverbPreset_FUN_0055b0b0 ; 0052e022
        ;   XREF to: 0055b0b0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_setReverbPreset_FUN_0055b0b0(CSound * this_ptr, int index)
        ;   Label: LAB_0052e022
    ADD ESP,0x8                         ; 0052e027
    LEA EDI,[ESP + 0x160]               ; 0052e02a
    MOV ESI,0x1fc783c                   ; 0052e031
    MOVSD ES:EDI,ESI                    ; 0052e036 | g_CDemonCameraInstance.base.position
    MOVSD ES:EDI,ESI                    ; 0052e037 | g_CDemonCameraInstance.base.position+4
    MOVSD ES:EDI,ESI                    ; 0052e038 | g_CDemonCameraInstance.base.position+8
    LEA EDI,[ESP + 0x1b4]               ; 0052e039
    LEA ESI,[ESP + 0x160]               ; 0052e040
    LEA EAX,[ESP + 0x1b4]               ; 0052e047
    LEA EDX,[ESP + 0x19c]               ; 0052e04e
    MOVSD ES:EDI,ESI                    ; 0052e055
    MOVSD ES:EDI,ESI                    ; 0052e056
    MOVSD ES:EDI,ESI                    ; 0052e057
    CMP EDX,EAX                         ; 0052e058
    JZ 0x0052e086                       ; 0052e05a
        ;   XREF to: 0052e086 (CONDITIONAL_JUMP)  ; LAB_0052e086
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 0052e05c
    MOV dword ptr [ESP + 0x19c],EAX     ; 0052e063
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 0052e06a
    MOV dword ptr [ESP + 0x1a0],EAX     ; 0052e071
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 0052e078
    MOV dword ptr [ESP + 0x1a4],EAX     ; 0052e07f
    MOV ECX,0xa                         ; 0052e086
        ;   Label: LAB_0052e086
    LEA EDI,[ESP + 0xb0]                ; 0052e08b
    MOV ESI,0x1fc7848                   ; 0052e092
    MOVSD.REP ES:EDI,ESI                ; 0052e097 | g_CDemonCameraInstance.base.rotation_matrix.m[0].x | g_CDemonCameraInstance.base.rotation_matrix.m[0].y
    MOV ECX,0xa                         ; 0052e099
    LEA EDI,[ESP + 0xd8]                ; 0052e09e
    LEA ESI,[ESP + 0xb0]                ; 0052e0a5
    LEA EAX,[ESP + 0xd8]                ; 0052e0ac
    MOVSD.REP ES:EDI,ESI                ; 0052e0b3
    PUSH EAX                            ; 0052e0b5
    LEA ESI,[ESP + 0x158]               ; 0052e0b6
    LEA EDI,[ESP + 0x1ac]               ; 0052e0bd
    CALL core_dirmat.cpp_FUN_004496e0   ; 0052e0c4
        ;   XREF to: 004496e0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004496e0()
    LEA ESI,[ESP + 0x158]               ; 0052e0c9
    LEA EAX,[ESP + 0x1ac]               ; 0052e0d0
    ADD ESP,0x4                         ; 0052e0d7
    LEA EDX,[ESP + 0x148]               ; 0052e0da
    MOVSD ES:EDI,ESI                    ; 0052e0e1
    MOVSD ES:EDI,ESI                    ; 0052e0e2
    MOVSD ES:EDI,ESI                    ; 0052e0e3
    CMP EDX,EAX                         ; 0052e0e4
    JZ 0x0052e112                       ; 0052e0e6
        ;   XREF to: 0052e112 (CONDITIONAL_JUMP)  ; LAB_0052e112
    MOV EAX,dword ptr [ESP + 0x1a8]     ; 0052e0e8
    MOV dword ptr [ESP + 0x148],EAX     ; 0052e0ef
    MOV EAX,dword ptr [ESP + 0x1ac]     ; 0052e0f6
    MOV dword ptr [ESP + 0x14c],EAX     ; 0052e0fd
    MOV EAX,dword ptr [ESP + 0x1b0]     ; 0052e104
    MOV dword ptr [ESP + 0x150],EAX     ; 0052e10b
    LEA EAX,[ESP + 0x148]               ; 0052e112
        ;   Label: LAB_0052e112
    PUSH EAX                            ; 0052e119
    LEA EAX,[ESP + 0x1a0]               ; 0052e11a
    PUSH EAX                            ; 0052e121
    MOV EDX,dword ptr [0x0061e8f4]      ; 0052e122 | DAT_0061e8f4
    PUSH EDX                            ; 0052e128
    CALL core_weather.cpp_CWeather_setOriginAndRotation_FUN_0058b4f0 ; 0052e129
        ;   XREF to: 0058b4f0 (UNCONDITIONAL_CALL)  ; void core_weather.cpp_CWeather_setOriginAndRotation_FUN_0058b4f0(CWeather * this_ptr, CVector3f * direction, CVector3f * rotation)
    ADD ESP,0xc                         ; 0052e12e
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0052e131
    MOV ECX,dword ptr [EAX + 0x14d164]  ; 0052e138
    XOR ESI,ESI                         ; 0052e13e
    TEST ECX,ECX                        ; 0052e140
    JLE 0x0052e170                      ; 0052e142
        ;   XREF to: 0052e170 (CONDITIONAL_JUMP)  ; LAB_0052e170
    MOV EBP,dword ptr [ESP + 0x1fc]     ; 0052e144
    MOV EBX,EAX                         ; 0052e14b
    MOV EDI,dword ptr [EBX + 0x14d168]  ; 0052e14d
        ;   Label: LAB_0052e14d
    PUSH EDI                            ; 0052e153
    PUSH EBP                            ; 0052e154
    ADD EBX,0x4                         ; 0052e155
    INC ESI                             ; 0052e158
    CALL core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_0052dd80 ; 0052e159
        ;   XREF to: 0052dd80 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_0052dd80(CDemonSet * this_ptr, CDemonActor * actor)
    MOV EDX,dword ptr [EBP + 0x14d164]  ; 0052e15e
    ADD ESP,0x8                         ; 0052e164
    CMP ESI,EDX                         ; 0052e167
    JL 0x0052e14d                       ; 0052e169
        ;   XREF to: 0052e14d (CONDITIONAL_JUMP)  ; LAB_0052e14d
    LEA EAX,[EAX]                       ; 0052e16b
    MOV ECX,ECX                         ; 0052e16e
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0052e170
        ;   Label: LAB_0052e170
    XOR ECX,ECX                         ; 0052e177
    MOV EBX,dword ptr [EAX + 0x14d164]  ; 0052e179
    MOV dword ptr [ESP + 0x1dc],ECX     ; 0052e17f
    TEST EBX,EBX                        ; 0052e186
    JLE 0x0052e2cd                      ; 0052e188
        ;   XREF to: 0052e2cd (CONDITIONAL_JUMP)  ; LAB_0052e2cd
    MOV dword ptr [ESP + 0x1d8],EAX     ; 0052e18e
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 0052e195
        ;   Label: LAB_0052e195
    MOV EAX,dword ptr [EAX + 0x14d168]  ; 0052e19c
    MOV EDX,dword ptr [EAX + 0xfc]      ; 0052e1a2
    MOV dword ptr [ESP + 0x1e0],EAX     ; 0052e1a8
    TEST EDX,EDX                        ; 0052e1af
    JZ 0x0052e8a3                       ; 0052e1b1
        ;   XREF to: 0052e8a3 (CONDITIONAL_JUMP)  ; LAB_0052e8a3
    MOV EBX,dword ptr [ESP + 0x1e0]     ; 0052e1b7
        ;   Label: LAB_0052e1b7
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 0052e1be
    PUSH EBX                            ; 0052e1c5
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 0052e1c6
    LEA ESI,[ESP + 0x104]               ; 0052e1cc
    LEA EDI,[ESP + 0x11c]               ; 0052e1d3
    CALL dword ptr [EAX + 0x24]         ; 0052e1da
    MOV ECX,0x6                         ; 0052e1dd
    LEA ESI,[ESP + 0x104]               ; 0052e1e2
    LEA EAX,[ESP + 0x4]                 ; 0052e1e9
    ADD ESP,0x4                         ; 0052e1ed
    XOR EBP,EBP                         ; 0052e1f0
    MOV dword ptr [ESP + 0x1e4],EAX     ; 0052e1f2
    MOVSD.REP ES:EDI,ESI                ; 0052e1f9
    PUSH EBP                            ; 0052e1fb
        ;   Label: LAB_0052e1fb
    LEA EAX,[ESP + 0x11c]               ; 0052e1fc
    PUSH EAX                            ; 0052e203
    LEA ESI,[ESP + 0x18c]               ; 0052e204
    LEA EDI,[ESP + 0x138]               ; 0052e20b
    CALL core_box.cpp_FUN_0041a600      ; 0052e212
        ;   XREF to: 0041a600 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a600()
    LEA ESI,[ESP + 0x18c]               ; 0052e217
    ADD ESP,0x8                         ; 0052e21e
    LEA EAX,[ESP + 0x130]               ; 0052e221
    MOVSD ES:EDI,ESI                    ; 0052e228
    MOVSD ES:EDI,ESI                    ; 0052e229
    MOVSD ES:EDI,ESI                    ; 0052e22a
    PUSH EAX                            ; 0052e22b
    MOV ESI,dword ptr [ESP + 0x1e4]     ; 0052e22c
    PUSH ESI                            ; 0052e233
    LEA ESI,[ESP + 0x144]               ; 0052e234
    LEA EDI,[ESP + 0x174]               ; 0052e23b
    CALL core_actor.cpp_FUN_00408d70    ; 0052e242
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x144]               ; 0052e247
    ADD ESP,0x8                         ; 0052e24e
    LEA EAX,[ESP + 0x16c]               ; 0052e251
    MOV EBX,dword ptr [ESP + 0x1e4]     ; 0052e258
    MOVSD ES:EDI,ESI                    ; 0052e25f
    MOVSD ES:EDI,ESI                    ; 0052e260
    MOVSD ES:EDI,ESI                    ; 0052e261
    FLD float ptr [EAX]                 ; 0052e262
    FMUL float ptr [0x005fb210]         ; 0052e264 | DAT_005fb210
    FISTP dword ptr [EBX]               ; 0052e26a
    FLD float ptr [EAX + 0x4]           ; 0052e26c
    FMUL float ptr [0x005fb210]         ; 0052e26f | DAT_005fb210
    FISTP dword ptr [EBX + 0x4]         ; 0052e275
    FLD float ptr [EAX + 0x8]           ; 0052e278
    FMUL float ptr [0x005fb210]         ; 0052e27b | DAT_005fb210
    FISTP dword ptr [EBX + 0x8]         ; 0052e281
    LEA EDI,[EBX + 0xc]                 ; 0052e284
    INC EBP                             ; 0052e287
    MOV dword ptr [ESP + 0x1e4],EDI     ; 0052e288
    CMP EBP,0x8                         ; 0052e28f
    JL 0x0052e1fb                       ; 0052e292
        ;   XREF to: 0052e1fb (CONDITIONAL_JUMP)  ; LAB_0052e1fb
    MOV ESI,dword ptr [ESP + 0x1d8]     ; 0052e298
        ;   Label: LAB_0052e298
    MOV EDI,dword ptr [ESP + 0x1dc]     ; 0052e29f
    MOV EDX,dword ptr [ESP + 0x1fc]     ; 0052e2a6
    ADD ESI,0x4                         ; 0052e2ad
    INC EDI                             ; 0052e2b0
    MOV EBP,dword ptr [EDX + 0x14d164]  ; 0052e2b1
    MOV dword ptr [ESP + 0x1d8],ESI     ; 0052e2b7
    MOV dword ptr [ESP + 0x1dc],EDI     ; 0052e2be
    CMP EDI,EBP                         ; 0052e2c5
    JL 0x0052e195                       ; 0052e2c7
        ;   XREF to: 0052e195 (CONDITIONAL_JUMP)  ; LAB_0052e195
    MOV EBX,dword ptr [ESP + 0x1fc]     ; 0052e2cd
        ;   Label: LAB_0052e2cd
    FLD float ptr [EBX + 0x14d154]      ; 0052e2d4
    FMUL float ptr [EBX + 0x14d160]     ; 0052e2da
    FLD float ptr [EBX + 0x14d158]      ; 0052e2e0
    FMUL float ptr [EBX + 0x14d160]     ; 0052e2e6
    FLD float ptr [EBX + 0x14d15c]      ; 0052e2ec
    FMUL float ptr [EBX + 0x14d160]     ; 0052e2f2
    MOV EAX,0x1                         ; 0052e2f8
    LEA EDI,[ESP + 0x1c0]               ; 0052e2fd
    LEA ESI,[ESP + 0x190]               ; 0052e304
    LEA EDX,[ESP + 0x178]               ; 0052e30b
    MOV [0x0200a3b8],EAX                ; 0052e312 | DAT_0200a3b8
    LEA EAX,[ESP + 0x1c0]               ; 0052e317
    FXCH ST2                            ; 0052e31e
    FSTP float ptr [ESP + 0x190]        ; 0052e320
    FSTP float ptr [ESP + 0x194]        ; 0052e327
    FSTP float ptr [ESP + 0x198]        ; 0052e32e
    MOVSD ES:EDI,ESI                    ; 0052e335
    MOVSD ES:EDI,ESI                    ; 0052e336
    MOVSD ES:EDI,ESI                    ; 0052e337
    CMP EDX,EAX                         ; 0052e338
    JZ 0x0052e366                       ; 0052e33a
        ;   XREF to: 0052e366 (CONDITIONAL_JUMP)  ; LAB_0052e366
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 0052e33c
    MOV dword ptr [ESP + 0x178],EAX     ; 0052e343
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 0052e34a
    MOV dword ptr [ESP + 0x17c],EAX     ; 0052e351
    MOV EAX,dword ptr [ESP + 0x1c8]     ; 0052e358
    MOV dword ptr [ESP + 0x180],EAX     ; 0052e35f
    MOV EBX,0x200a398                   ; 0052e366
        ;   Label: LAB_0052e366
    LEA EAX,[ESP + 0x178]               ; 0052e36b
    FLD float ptr [EAX]                 ; 0052e372
    FMUL float ptr [0x005fb214]         ; 0052e374 | DAT_005fb214
    FISTP dword ptr [EBX]               ; 0052e37a | DAT_0200a398
    FLD float ptr [EAX + 0x4]           ; 0052e37c
    FMUL float ptr [0x005fb214]         ; 0052e37f | DAT_005fb214
    FISTP dword ptr [EBX + 0x4]         ; 0052e385 | DAT_0200a39c
    FLD float ptr [EAX + 0x8]           ; 0052e388
    FMUL float ptr [0x005fb214]         ; 0052e38b | DAT_005fb214
    FISTP dword ptr [EBX + 0x8]         ; 0052e391 | DAT_0200a3a0
    ADD ESP,0x1e8                       ; 0052e394
    POP EBP                             ; 0052e39a
    POP EDI                             ; 0052e39b
    POP ESI                             ; 0052e39c
    POP EBX                             ; 0052e39d
    RET                                 ; 0052e39e
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0052e39f
        ;   Label: LAB_0052e39f
    ADD EAX,0x4                         ; 0052e3a6
    PUSH 0x1fc7838                      ; 0052e3a9
    ADD EDI,EAX                         ; 0052e3ae
    PUSH EDI                            ; 0052e3b0
    CALL core_setutil.cpp_C3DSCamera_apply_FUN_0053ad20 ; 0052e3b1
        ;   XREF to: 0053ad20 (UNCONDITIONAL_CALL)  ; undefined core_setutil.cpp_C3DSCamera_apply_FUN_0053ad20()
    ADD ESP,0x8                         ; 0052e3b6
    MOV ECX,dword ptr [ESI + 0x154]     ; 0052e3b9
    MOV EBX,dword ptr [ESP + 0x1fc]     ; 0052e3bf
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0052e3c6
    ADD EBX,0x15ac64                    ; 0052e3cd
    ADD EAX,0x15ac70                    ; 0052e3d3
    TEST ECX,ECX                        ; 0052e3d8
    JZ 0x0052e57a                       ; 0052e3da
        ;   XREF to: 0052e57a (CONDITIONAL_JUMP)  ; LAB_0052e57a
    MOV ESI,dword ptr [ESP + 0x1fc]     ; 0052e3e0
    MOV EDX,dword ptr [ESI + 0x15ac40]  ; 0052e3e7
    MOV dword ptr [EBX],EDX             ; 0052e3ed
    MOV EBP,EBX                         ; 0052e3ef
    MOV EDX,dword ptr [ESI + 0x15ac44]  ; 0052e3f1
    ADD ESI,0x15ac40                    ; 0052e3f7
    MOV dword ptr [EBX + 0x4],EDX       ; 0052e3fd
    MOV EDI,ESI                         ; 0052e400
    MOV EDX,dword ptr [ESI + 0x8]       ; 0052e402
    ADD ESI,0xc                         ; 0052e405
    MOV dword ptr [EBX + 0x8],EDX       ; 0052e408
    CMP EAX,ESI                         ; 0052e40b
    JZ 0x0052e41f                       ; 0052e40d
        ;   XREF to: 0052e41f (CONDITIONAL_JUMP)  ; LAB_0052e41f
    MOV EDX,dword ptr [ESI]             ; 0052e40f
    MOV dword ptr [EAX],EDX             ; 0052e411
    MOV EDX,dword ptr [ESI + 0x4]       ; 0052e413
    MOV dword ptr [EAX + 0x4],EDX       ; 0052e416
    MOV EDX,dword ptr [ESI + 0x8]       ; 0052e419
    MOV dword ptr [EAX + 0x8],EDX       ; 0052e41c
    MOV EAX,dword ptr [EDI + 0x18]      ; 0052e41f
        ;   Label: LAB_0052e41f
    MOV dword ptr [EBP + 0x18],EAX      ; 0052e422
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0052e425
    MOV dword ptr [EBP + 0x1c],EAX      ; 0052e428
    MOV EAX,dword ptr [EDI + 0x20]      ; 0052e42b
    MOV dword ptr [EBP + 0x20],EAX      ; 0052e42e
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0052e431
        ;   Label: LAB_0052e431
    ADD EAX,0x15ac64                    ; 0052e438
    PUSH EAX                            ; 0052e43d
    PUSH 0x1fc7838                      ; 0052e43e
    CALL core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00442bf0 ; 0052e443
        ;   XREF to: 00442bf0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00442bf0(CDemonCamera * this_ptr, SFog * fog_config)
    ADD ESP,0x8                         ; 0052e448
    XOR EBX,EBX                         ; 0052e44b
    PUSH EBX                            ; 0052e44d
    PUSH 0x1fc7838                      ; 0052e44e
    MOV dword ptr [0x01fc9c68],EBX      ; 0052e453 | g_CDemonRaytraceInstance
    CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0043b7f0 ; 0052e459
        ;   XREF to: 0043b7f0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginScene_FUN_0043b7f0(CDemonCamera * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 0052e45e
    PUSH 0x1fc7838                      ; 0052e461
    CALL core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0043c040 ; 0052e466
        ;   XREF to: 0043c040 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0043c040(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0052e46b
    PUSH 0x10                           ; 0052e46e
    MOV ESI,dword ptr [ESP + 0x200]     ; 0052e470
    PUSH ESI                            ; 0052e477
    CALL core_set.cpp_CDemonSet_buildDisplayList_FUN_005332f0 ; 0052e478
        ;   XREF to: 005332f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_buildDisplayList_FUN_005332f0(CDemonSet * this_ptr, uint dirty_flags_mask)
    ADD ESP,0x8                         ; 0052e47d
    PUSH 0x1                            ; 0052e480
    PUSH 0x461c3f9a                     ; 0052e482
    PUSH ESI                            ; 0052e487
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0 ; 0052e488
        ;   XREF to: 0052d0e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0(CDemonSet * this_ptr, float frustum_param, int render_mode)
    ADD ESP,0xc                         ; 0052e48d
    PUSH 0x1fc7838                      ; 0052e490
    CALL core_dcamera.cpp_CDemonCamera_saveZBufferScanlines_FUN_00443a50 ; 0052e495
        ;   XREF to: 00443a50 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_saveZBufferScanlines_FUN_00443a50(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0052e49a
    MOV EBP,0x1                         ; 0052e49d
    PUSH EBP                            ; 0052e4a2
    PUSH ESI                            ; 0052e4a3
    MOV dword ptr [0x0200a390],EBP      ; 0052e4a4 | DAT_0200a390
    CALL core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0052dc10 ; 0052e4aa
        ;   XREF to: 0052dc10 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0052dc10(CDemonSet * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 0052e4af
    PUSH 0x1fc7838                      ; 0052e4b2
    MOV dword ptr [0x0200a390],EBX      ; 0052e4b7 | DAT_0200a390
    CALL core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0043d870 ; 0052e4bd
        ;   XREF to: 0043d870 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0043d870(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0052e4c2
    PUSH 0x1fc7838                      ; 0052e4c5
    CALL core_dcamera.cpp_CDemonCamera_restoreZBufferScanlines_FUN_00443aa0 ; 0052e4ca
        ;   XREF to: 00443aa0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_restoreZBufferScanlines_FUN_00443aa0(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0052e4cf
    IMUL EAX,dword ptr [ESP + 0x200],0x1a4 ; 0052e4d2
    LEA EDX,[ESI + 0x4]                 ; 0052e4dd
    ADD EAX,EDX                         ; 0052e4e0
    PUSH EAX                            ; 0052e4e2
    PUSH 0x5e57e5                       ; 0052e4e3 | = "%s.raw"
    LEA EAX,[ESP + 0x68]                ; 0052e4e8
    PUSH EAX                            ; 0052e4ec
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0052e4ed
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 0052e4f2
    LEA EAX,[ESP + 0x60]                ; 0052e4f5
    PUSH EAX                            ; 0052e4f9
    PUSH 0x1fc7838                      ; 0052e4fa
    CALL core_dcamera.cpp_CDemonCamera_loadImage_FUN_0043e930 ; 0052e4ff
        ;   XREF to: 0043e930 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_loadImage_FUN_0043e930(CDemonCamera * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0052e504
    PUSH EBP                            ; 0052e507
    PUSH ESI                            ; 0052e508
    CALL core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0052dc10 ; 0052e509
        ;   XREF to: 0052dc10 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0052dc10(CDemonSet * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 0052e50e
    PUSH EBX                            ; 0052e511
    PUSH 0x1fc7838                      ; 0052e512
    CALL core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0043c200 ; 0052e517
        ;   XREF to: 0043c200 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0043c200(CDemonCamera * this_ptr, int restore_zbuffer)
    MOV ESI,dword ptr [0x01c37788]      ; 0052e51c | DAT_01c37788
    ADD ESP,0x8                         ; 0052e522
    TEST ESI,ESI                        ; 0052e525
    JZ 0x0052e566                       ; 0052e527
        ;   XREF to: 0052e566 (CONDITIONAL_JUMP)  ; LAB_0052e566
    PUSH EBX                            ; 0052e529
    MOV EDI,dword ptr [ESP + 0x200]     ; 0052e52a
    PUSH 0x461c3f9a                     ; 0052e531
    PUSH EDI                            ; 0052e536
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0 ; 0052e537
        ;   XREF to: 0052d0e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0(CDemonSet * this_ptr, float frustum_param, int render_mode)
    MOV EAX,[0x0061e520]                ; 0052e53c | g_CWaterPtr
    MOV EBP,dword ptr [EAX]             ; 0052e541 | g_CWaterInstance
    ADD ESP,0xc                         ; 0052e543
    TEST EBP,EBP                        ; 0052e546
    JNZ 0x0052e554                      ; 0052e548
        ;   XREF to: 0052e554 (CONDITIONAL_JUMP)  ; LAB_0052e554
    PUSH EBX                            ; 0052e54a
    PUSH EAX                            ; 0052e54b | g_CWaterInstance
    CALL core_water.cpp_CWater_render_FUN_005862e0 ; 0052e54c
        ;   XREF to: 005862e0 (UNCONDITIONAL_CALL)  ; void core_water.cpp_CWater_render_FUN_005862e0(CWater * this_ptr, int render_mode)
    ADD ESP,0x8                         ; 0052e551
    PUSH 0x1                            ; 0052e554
        ;   Label: LAB_0052e554
    MOV EAX,dword ptr [ESP + 0x200]     ; 0052e556
    PUSH EAX                            ; 0052e55d
    CALL core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0052dc10 ; 0052e55e
        ;   XREF to: 0052dc10 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0052dc10(CDemonSet * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 0052e563
    PUSH 0x0                            ; 0052e566
        ;   Label: LAB_0052e566
    PUSH 0x1fc7838                      ; 0052e568
    CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0043bf50 ; 0052e56d
        ;   XREF to: 0043bf50 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_endScene_FUN_0043bf50(CDemonCamera * this_ptr, int skip_zbuffer_copy)
    ADD ESP,0x8                         ; 0052e572
    JMP 0x0052df91                      ; 0052e575
        ;   XREF to: 0052df91 (UNCONDITIONAL_JUMP)  ; LAB_0052df91
    LEA ESI,[EDI + 0x154]               ; 0052e57a
        ;   Label: LAB_0052e57a
    MOV EDX,dword ptr [ESI]             ; 0052e580
    MOV dword ptr [EBX],EDX             ; 0052e582
    MOV EDX,dword ptr [ESI + 0x4]       ; 0052e584
    MOV EDI,EBX                         ; 0052e587
    MOV dword ptr [EBX + 0x4],EDX       ; 0052e589
    MOV EBP,ESI                         ; 0052e58c
    MOV EDX,dword ptr [ESI + 0x8]       ; 0052e58e
    ADD ESI,0xc                         ; 0052e591
    MOV dword ptr [EBX + 0x8],EDX       ; 0052e594
    CMP EAX,ESI                         ; 0052e597
    JZ 0x0052e5ab                       ; 0052e599
        ;   XREF to: 0052e5ab (CONDITIONAL_JUMP)  ; LAB_0052e5ab
    MOV EDX,dword ptr [ESI]             ; 0052e59b
    MOV dword ptr [EAX],EDX             ; 0052e59d
    MOV EDX,dword ptr [ESI + 0x4]       ; 0052e59f
    MOV dword ptr [EAX + 0x4],EDX       ; 0052e5a2
    MOV EDX,dword ptr [ESI + 0x8]       ; 0052e5a5
    MOV dword ptr [EAX + 0x8],EDX       ; 0052e5a8
    MOV EAX,dword ptr [EBP + 0x18]      ; 0052e5ab
        ;   Label: LAB_0052e5ab
    MOV dword ptr [EDI + 0x18],EAX      ; 0052e5ae
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0052e5b1
    MOV dword ptr [EDI + 0x1c],EAX      ; 0052e5b4
    MOV EAX,dword ptr [EBP + 0x20]      ; 0052e5b7
    MOV dword ptr [EDI + 0x20],EAX      ; 0052e5ba
    JMP 0x0052e431                      ; 0052e5bd
        ;   XREF to: 0052e431 (UNCONDITIONAL_JUMP)  ; LAB_0052e431
    MOV ECX,dword ptr [EAX + 0x19a2c]   ; 0052e5c2
        ;   Label: LAB_0052e5c2
    XOR EBX,EBX                         ; 0052e5c8
    XOR ESI,ESI                         ; 0052e5ca
    TEST ECX,ECX                        ; 0052e5cc
    JLE 0x0052e691                      ; 0052e5ce
        ;   XREF to: 0052e691 (CONDITIONAL_JUMP)  ; LAB_0052e691
    MOV EAX,dword ptr [ESP + 0x200]     ; 0052e5d4
    SHL EAX,0x4                         ; 0052e5db
    MOV dword ptr [ESP + 0x1cc],EAX     ; 0052e5de
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0052e5e5
    ADD EAX,0x19a30                     ; 0052e5ec
    MOV EBP,dword ptr [ESP + 0x1fc]     ; 0052e5f1
    MOV dword ptr [ESP + 0x1d4],EAX     ; 0052e5f8
    IMUL EDI,EBX,0x1898                 ; 0052e5ff
        ;   Label: LAB_0052e5ff
    CMP dword ptr [EBP + 0x19a30],0x1   ; 0052e605
    JNZ 0x0052e668                      ; 0052e60c
        ;   XREF to: 0052e668 (CONDITIONAL_JUMP)  ; LAB_0052e668
    MOV EAX,dword ptr [ESP + 0x200]     ; 0052e60e
    CMP byte ptr [EAX + EBP*0x1 + 0x19b58],0x0 ; 0052e615
    JZ 0x0052e668                       ; 0052e61d
        ;   XREF to: 0052e668 (CONDITIONAL_JUMP)  ; LAB_0052e668
    MOV ECX,dword ptr [ESP + 0x1d4]     ; 0052e61f
    MOV EAX,[0x01fc9cd4]                ; 0052e626 | DAT_01fc9cd4
    ADD EDI,ECX                         ; 0052e62b
    MOV dword ptr [EAX*0x4 + 0x1fc9cd8],EDI ; 0052e62d | DAT_01fc9cd8 | DAT_01fc9cdc
    LEA EDI,[EAX + 0x1]                 ; 0052e634
    MOV dword ptr [0x01fc9cd4],EDI      ; 0052e637 | DAT_01fc9cd4
    CMP EDI,0xc8                        ; 0052e63d
    JL 0x0052e668                       ; 0052e643
        ;   XREF to: 0052e668 (CONDITIONAL_JUMP)  ; LAB_0052e668
    MOV EDX,0x5e57ec                    ; 0052e645 | = "..\\core\\set.cpp"
    MOV ECX,0x501                       ; 0052e64a
    PUSH 0x5e57fc                       ; 0052e64f | = "CDemonSet::setCameraView - Too many o..."
    MOV dword ptr [0x01d046a0],EDX      ; 0052e654 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0052e65a | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0052e660
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0052e665
    CMP dword ptr [EBP + 0x19a30],0x0   ; 0052e668
        ;   Label: LAB_0052e668
    JZ 0x0052e76b                       ; 0052e66f
        ;   XREF to: 0052e76b (CONDITIONAL_JUMP)  ; LAB_0052e76b
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0052e675
        ;   Label: LAB_0052e675
    INC EBX                             ; 0052e67c
    MOV EDI,dword ptr [EAX + 0x19a2c]   ; 0052e67d
    ADD EBP,0x1898                      ; 0052e683
    CMP EBX,EDI                         ; 0052e689
    JL 0x0052e5ff                       ; 0052e68b
        ;   XREF to: 0052e5ff (CONDITIONAL_JUMP)  ; LAB_0052e5ff
    MOV EBP,dword ptr [ESP + 0x1fc]     ; 0052e691
        ;   Label: LAB_0052e691
    PUSH EBP                            ; 0052e698
    CALL core_set.cpp_CDemonSet_process_FUN_00533010 ; 0052e699
        ;   XREF to: 00533010 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_process_FUN_00533010(CDemonSet * this_ptr)
    MOV EAX,[0x01fc8e84]                ; 0052e69e | DAT_01fc8e84
    ADD ESP,0x4                         ; 0052e6a3
    XOR EBP,EBP                         ; 0052e6a6
    TEST EAX,EAX                        ; 0052e6a8
    JLE 0x0052e749                      ; 0052e6aa
        ;   XREF to: 0052e749 (CONDITIONAL_JUMP)  ; LAB_0052e749
    IMUL EAX,dword ptr [ESP + 0x200],0x1a4 ; 0052e6b0
    MOV EDX,dword ptr [ESP + 0x1fc]     ; 0052e6bb
    MOV EDI,0x1fc9008                   ; 0052e6c2
    ADD EDX,EAX                         ; 0052e6c7
    XOR EBX,EBX                         ; 0052e6c9
    MOV dword ptr [ESP + 0x1d0],EDX     ; 0052e6cb
    MOV ESI,dword ptr [EBX + 0x1fc8e88] ; 0052e6d2
        ;   Label: LAB_0052e6d2
    PUSH ESI                            ; 0052e6d8
    CALL core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_00449f70 ; 0052e6d9
        ;   XREF to: 00449f70 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_00449f70(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 0052e6de
    PUSH 0x1                            ; 0052e6e1
    PUSH ESI                            ; 0052e6e3
    CALL core_dlight.cpp_CDemonLight_beginScene_FUN_0044a020 ; 0052e6e4
        ;   XREF to: 0044a020 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_beginScene_FUN_0044a020(CDemonLight * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 0052e6e9
    PUSH ESI                            ; 0052e6ec
    CALL core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_0044a3e0 ; 0052e6ed
        ;   XREF to: 0044a3e0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_0044a3e0(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 0052e6f2
    PUSH 0x1                            ; 0052e6f5
    MOV EAX,dword ptr [ESP + 0x200]     ; 0052e6f7
    PUSH EAX                            ; 0052e6fe
    CALL core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0052dc10 ; 0052e6ff
        ;   XREF to: 0052dc10 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0052dc10(CDemonSet * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 0052e704
    PUSH ESI                            ; 0052e707
    CALL core_dlight.cpp_CDemonLight_endBackgroundScene_FUN_0044a4d0 ; 0052e708
        ;   XREF to: 0044a4d0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_endBackgroundScene_FUN_0044a4d0(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 0052e70d
    PUSH 0x0                            ; 0052e710
    PUSH ESI                            ; 0052e712
    CALL core_dlight.cpp_CDemonLight_endScene_FUN_0044a2d0 ; 0052e713
        ;   XREF to: 0044a2d0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_endScene_FUN_0044a2d0(CDemonLight * this_ptr, int restore_viewport_state)
    ADD ESP,0x8                         ; 0052e718
    PUSH ESI                            ; 0052e71b
    CALL core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_0044a520 ; 0052e71c
        ;   XREF to: 0044a520 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_0044a520(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 0052e721
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 0052e724
    CMP dword ptr [EAX + 0x144],0x0     ; 0052e72b
    JZ 0x0052e7c3                       ; 0052e732
        ;   XREF to: 0052e7c3 (CONDITIONAL_JUMP)  ; LAB_0052e7c3
    MOV EDX,dword ptr [0x01fc8e84]      ; 0052e738 | DAT_01fc8e84
        ;   Label: LAB_0052e738
    ADD EBX,0x4                         ; 0052e73e
    INC EBP                             ; 0052e741
    ADD EDI,0x10                        ; 0052e742
    CMP EBP,EDX                         ; 0052e745
    JL 0x0052e6d2                       ; 0052e747
        ;   XREF to: 0052e6d2 (CONDITIONAL_JUMP)  ; LAB_0052e6d2
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0052e749
        ;   Label: LAB_0052e749
    ADD EAX,0x14d154                    ; 0052e750
    PUSH dword ptr [EAX + 0xc]          ; 0052e755
    PUSH EAX                            ; 0052e758
    PUSH 0x1fc7838                      ; 0052e759
    CALL core_dcamera.cpp_FUN_0043d770  ; 0052e75e
        ;   XREF to: 0043d770 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0043d770()
    ADD ESP,0xc                         ; 0052e763
    JMP 0x0052dfa5                      ; 0052e766
        ;   XREF to: 0052dfa5 (UNCONDITIONAL_JUMP)  ; LAB_0052dfa5
    MOV EDI,dword ptr [ESP + 0x200]     ; 0052e76b
        ;   Label: LAB_0052e76b
    MOV DH,byte ptr [EDI + EBP*0x1 + 0x19b58] ; 0052e772
    LEA EAX,[ESI + 0x1]                 ; 0052e779
    TEST DH,DH                          ; 0052e77c
    JNZ 0x0052e787                      ; 0052e77e
        ;   XREF to: 0052e787 (CONDITIONAL_JUMP)  ; LAB_0052e787
    MOV ESI,EAX                         ; 0052e780
    JMP 0x0052e675                      ; 0052e782
        ;   XREF to: 0052e675 (UNCONDITIONAL_JUMP)  ; LAB_0052e675
    MOV EDI,dword ptr [0x01fc8e84]      ; 0052e787 | DAT_01fc8e84
        ;   Label: LAB_0052e787
    MOV ESI,dword ptr [ESI*0x4 + 0x1fc8d04] ; 0052e78d | DAT_01fc8d04
    MOV dword ptr [EDI*0x4 + 0x1fc8e88],ESI ; 0052e794 | DAT_01fc8e88
    SHL EDI,0x4                         ; 0052e79b
    MOV ESI,dword ptr [ESP + 0x1cc]     ; 0052e79e
    LEA EDI,[EDI + 0x1fc9008]           ; 0052e7a5
    LEA ESI,[ESI + EBP*0x1 + 0x19c54]   ; 0052e7ab
    MOVSD ES:EDI,ESI                    ; 0052e7b2
    MOVSD ES:EDI,ESI                    ; 0052e7b3
    MOVSD ES:EDI,ESI                    ; 0052e7b4
    MOVSD ES:EDI,ESI                    ; 0052e7b5
    MOV ESI,EAX                         ; 0052e7b6
    INC dword ptr [0x01fc8e84]          ; 0052e7b8 | DAT_01fc8e84
    JMP 0x0052e675                      ; 0052e7be
        ;   XREF to: 0052e675 (UNCONDITIONAL_JUMP)  ; LAB_0052e675
    PUSH EDI                            ; 0052e7c3
        ;   Label: LAB_0052e7c3
    PUSH ESI                            ; 0052e7c4
    PUSH 0x1fc7838                      ; 0052e7c5
    CALL core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0043d220 ; 0052e7ca
        ;   XREF to: 0043d220 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0043d220(CDemonCamera * this_ptr, CDemonLight * light_source, CRect * rect)
    ADD ESP,0xc                         ; 0052e7cf
    JMP 0x0052e738                      ; 0052e7d2
        ;   XREF to: 0052e738 (UNCONDITIONAL_JUMP)  ; LAB_0052e738
    PUSH 0x1                            ; 0052e7d7
        ;   Label: LAB_0052e7d7
    PUSH 0x1fc7838                      ; 0052e7d9
    CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0043b7f0 ; 0052e7de
        ;   XREF to: 0043b7f0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginScene_FUN_0043b7f0(CDemonCamera * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 0052e7e3
    PUSH 0x1fc7838                      ; 0052e7e6
    CALL core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0043c040 ; 0052e7eb
        ;   XREF to: 0043c040 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0043c040(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0052e7f0
    MOV EBP,dword ptr [EBX + 0x16163c]  ; 0052e7f3
    MOV dword ptr [0x01c38aec],ESI      ; 0052e7f9 | DAT_01c38aec
    TEST EBP,EBP                        ; 0052e7ff
    JZ 0x0052e820                       ; 0052e801
        ;   XREF to: 0052e820 (CONDITIONAL_JUMP)  ; LAB_0052e820
    MOV EDX,dword ptr [EBX + 0x161660]  ; 0052e803
    PUSH EDX                            ; 0052e809
    LEA EAX,[EBX + 0x161640]            ; 0052e80a
    PUSH EAX                            ; 0052e810
    MOV ECX,dword ptr [0x0060d1f0]      ; 0052e811 | DAT_0060d1f0
    PUSH ECX                            ; 0052e817
    CALL core_dskybox.cpp_renderSkyDome_FUN_0046e410 ; 0052e818
        ;   XREF to: 0046e410 (UNCONDITIONAL_CALL)  ; void core_dskybox.cpp_renderSkyDome_FUN_0046e410(SMRGLSkyTexture * sky_texture, char * texture_name, int brightness_factor)
    ADD ESP,0xc                         ; 0052e81d
    PUSH 0x1                            ; 0052e820
        ;   Label: LAB_0052e820
    MOV EBX,dword ptr [ESP + 0x200]     ; 0052e822
    PUSH EBX                            ; 0052e829
    CALL core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0052dc10 ; 0052e82a
        ;   XREF to: 0052dc10 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0052dc10(CDemonSet * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 0052e82f
    PUSH 0x1                            ; 0052e832
    PUSH 0x1                            ; 0052e834
    MOV ESI,dword ptr [0x006167e0]      ; 0052e836 | g_CGorePtr
    PUSH ESI                            ; 0052e83c
    CALL core_gore.cpp_CGore_renderDecals_FUN_004c94c0 ; 0052e83d
        ;   XREF to: 004c94c0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_renderDecals_FUN_004c94c0(CGore * this_ptr, int render_all, int expire_flag)
    ADD ESP,0xc                         ; 0052e842
    PUSH 0x1                            ; 0052e845
    PUSH 0x1                            ; 0052e847
    MOV EDI,dword ptr [0x00614d30]      ; 0052e849 | DAT_00614d30
    PUSH EDI                            ; 0052e84f
    CALL core_fire.cpp_CFireEffect_renderDecals_FUN_0049cb50 ; 0052e850
        ;   XREF to: 0049cb50 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_renderDecals_FUN_0049cb50(CFireEffect * this_ptr, int render_mode, int render_completeness)
    MOV EAX,[0x0061e520]                ; 0052e855 | g_CWaterPtr
    MOV EBP,dword ptr [EAX]             ; 0052e85a | g_CWaterInstance
    ADD ESP,0xc                         ; 0052e85c
    TEST EBP,EBP                        ; 0052e85f
    JNZ 0x0052e86d                      ; 0052e861
        ;   XREF to: 0052e86d (CONDITIONAL_JUMP)  ; LAB_0052e86d
    PUSH EBP                            ; 0052e863
    PUSH EAX                            ; 0052e864 | g_CWaterInstance
    CALL core_water.cpp_CWater_render_FUN_005862e0 ; 0052e865
        ;   XREF to: 005862e0 (UNCONDITIONAL_CALL)  ; void core_water.cpp_CWater_render_FUN_005862e0(CWater * this_ptr, int render_mode)
    ADD ESP,0x8                         ; 0052e86a
    PUSH 0x0                            ; 0052e86d
        ;   Label: LAB_0052e86d
    PUSH 0x1fc7838                      ; 0052e86f
    CALL core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0043c200 ; 0052e874
        ;   XREF to: 0043c200 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0043c200(CDemonCamera * this_ptr, int restore_zbuffer)
    ADD ESP,0x8                         ; 0052e879
    PUSH 0x0                            ; 0052e87c
    PUSH 0x1fc7838                      ; 0052e87e
    CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0043bf50 ; 0052e883
        ;   XREF to: 0043bf50 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_endScene_FUN_0043bf50(CDemonCamera * this_ptr, int skip_zbuffer_copy)
    ADD ESP,0x8                         ; 0052e888
    JMP 0x0052dfda                      ; 0052e88b
        ;   XREF to: 0052dfda (UNCONDITIONAL_JUMP)  ; LAB_0052dfda
    MOV ESI,dword ptr [EAX + 0x17c]     ; 0052e890
        ;   Label: LAB_0052e890
    PUSH ESI                            ; 0052e896
    MOV EDI,dword ptr [0x0061c068]      ; 0052e897 | DAT_0061c068
    PUSH EDI                            ; 0052e89d
    JMP 0x0052e022                      ; 0052e89e
        ;   XREF to: 0052e022 (UNCONDITIONAL_JUMP)  ; LAB_0052e022
    CMP dword ptr [EAX + 0xf8],0x0      ; 0052e8a3
        ;   Label: LAB_0052e8a3
    JNZ 0x0052e1b7                      ; 0052e8aa
        ;   XREF to: 0052e1b7 (CONDITIONAL_JUMP)  ; LAB_0052e1b7
    JMP 0x0052e298                      ; 0052e8b0
        ;   XREF to: 0052e298 (UNCONDITIONAL_JUMP)  ; LAB_0052e298

