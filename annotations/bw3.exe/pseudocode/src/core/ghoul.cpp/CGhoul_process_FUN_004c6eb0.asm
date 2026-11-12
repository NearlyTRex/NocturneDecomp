; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ghoul_cpp_CGhoul_process_FUN_004c6eb0(CGhoul *this_ptr,float delta_time)
;
; Parameters:
; CGhoul *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_004c6e30 = 004c7368
;   undefined1* switchdataD_004c6e68 = 004c7ea7
;   TerminatedCString s_ghoul_eat_wav_005c41b9
;   TerminatedCString s_ghoul_dig_wav_1_3_005c41c9
;   TerminatedCString s_ghoul_eat_wav_1_3_005c41de
;   TerminatedCString s_ghoul_eat_wav_1_3_005c41f3
;   undefined4 s_ghoul_eat_wav_1_3_005c41f3+1
;   TerminatedCString s_ghoul_dig_wav_1_3_005c4208
;   undefined4 s_ghoul_dig_wav_1_3_005c4208+1
;   undefined4 s_ghoul_dig_wav_1_3_005c4208+2
;   undefined4 s_ghoul_dig_wav_1_3_005c4208+3
;   TerminatedCString s_s_confused_while_walking_005c421d
;   TerminatedCString s_ghoul_alert_wav_005c4247
;   TerminatedCString s_ghoul_scream_wav_005c4259
;   TerminatedCString s_gh_hits_wav_005c426e
;   ... and 49 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_00408bf0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_actor.cpp_randomChance_FUN_0040cf40
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350
;   core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30
;   core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0
;   core_charactr.cpp_CCharacter_processWalking_FUN_00431660
;   core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_0042fe90
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0
;   core_charactr.cpp_FUN_0042c1e0
;   core_charactr.cpp_FUN_0042c230
;   core_charactr.cpp_FUN_0042fc90
;   core_charactr.cpp_FUN_0042fdc0
;   ... and 26 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6eb0
        ;   Label: core_ghoul.cpp_CGhoul_process_FUN_004c6eb0
    PUSH ESI                            ; 004c6eb1
    PUSH EDI                            ; 004c6eb2
    PUSH EBP                            ; 004c6eb3
    MOV EBP,ESP                         ; 004c6eb4
    SUB ESP,0x4cc                       ; 004c6eb6
    SUB EBP,0x7a                        ; 004c6ebc
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004c6ebf
    PUSH dword ptr [EBP + 0x92]         ; 004c6ec5
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c6ecb
    PUSH EBX                            ; 004c6ed1
    CALL dword ptr [EAX + 0x148]        ; 004c6ed2
    ADD ESP,0x8                         ; 004c6ed8
    TEST EAX,EAX                        ; 004c6edb
    JZ 0x004c7360                       ; 004c6edd
        ;   XREF to: 004c7360 (CONDITIONAL_JUMP)  ; LAB_004c7360
    LEA EAX,[EBX + 0x249c]              ; 004c6ee3
    MOV dword ptr [EAX + 0x8],0x0       ; 004c6ee9
    FLD float ptr [EBP + 0x92]          ; 004c6ef0
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c6ef6
    MOV dword ptr [EAX + 0x4],EDX       ; 004c6ef9
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c6efc
    MOV dword ptr [EAX],EDX             ; 004c6eff
    FMUL float ptr [EBX + 0xcdcc]       ; 004c6f01
    LEA EAX,[EBX + 0x158]               ; 004c6f07
    FSTP float ptr [EBP + -0xa]         ; 004c6f0d
    MOV dword ptr [EBP + 0x72],EAX      ; 004c6f10
    FLD float ptr [EBP + -0xa]          ; 004c6f13
        ;   Label: caseD_e
    FLDZ                                ; 004c6f16
    FCOMPP                              ; 004c6f18
    FNSTSW AX                           ; 004c6f1a
    SAHF                                ; 004c6f1c
    JC 0x004c7940                       ; 004c6f1d
        ;   XREF to: 004c7940 (CONDITIONAL_JUMP)  ; LAB_004c7940
    PUSH 0x1                            ; 004c6f23
    MOV EDX,dword ptr [EBP + 0x72]      ; 004c6f25
    PUSH EDX                            ; 004c6f28
    CALL core_motion.cpp_FUN_004fc350   ; 004c6f29
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [EBP + 0x76],EAX      ; 004c6f2e
    FLD float ptr [EBP + 0x76]          ; 004c6f31
    FMUL double ptr [0x005c42ad]        ; 004c6f34 | DAT_005c42ad
    FLD float ptr [EBP + 0x92]          ; 004c6f3a
    FLD ST0                             ; 004c6f40
    FMUL float ptr [EBX + 0xcdcc]       ; 004c6f42
    FXCH                                ; 004c6f48
    FSTP double ptr [EBP + -0x1e]       ; 004c6f4a
    FXCH                                ; 004c6f4d
    FMUL double ptr [EBP + -0x1e]       ; 004c6f4f
    ADD ESP,0x8                         ; 004c6f52
    FMUL float ptr [EBX + 0xcdcc]       ; 004c6f55
    SUB ESP,0x4                         ; 004c6f5b
    FSTP float ptr [EBX + 0x2524]       ; 004c6f5e
    FSTP float ptr [ESP]                ; 004c6f64
    PUSH EBX                            ; 004c6f67
    CALL core_charactr.cpp_FUN_00434850 ; 004c6f68
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    ADD ESP,0x8                         ; 004c6f6d
    MOV ECX,dword ptr [EBP + 0x72]      ; 004c6f70
    PUSH ECX                            ; 004c6f73
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 004c6f74
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004c6f79
    ADD ESP,0x4                         ; 004c6f7c
    MOV dword ptr [EBP + 0x56],EAX      ; 004c6f7f
    CMP EAX,0x11                        ; 004c6f82
    JNZ 0x004c6fb8                      ; 004c6f85
        ;   XREF to: 004c6fb8 (CONDITIONAL_JUMP)  ; LAB_004c6fb8
    FLD float ptr [EBX + 0xcdcc]        ; 004c6f87
    FLD double ptr [EBP + -0x1e]        ; 004c6f8d
    FMUL double ptr [0x005c42b5]        ; 004c6f90 | DAT_005c42b5
    FLD float ptr [EBX + 0x2528]        ; 004c6f96
    FLD ST0                             ; 004c6f9c
    FMUL double ptr [0x005c42bd]        ; 004c6f9e | DAT_005c42bd
    FXCH ST2                            ; 004c6fa4
    FMULP ST3                           ; 004c6fa6
    FXCH                                ; 004c6fa8
    FSTP ST1                            ; 004c6faa
    FSTP float ptr [EBX + 0x2528]       ; 004c6fac
    FSTP float ptr [EBX + 0x2524]       ; 004c6fb2
    PUSH dword ptr [EBP + 0x92]         ; 004c6fb8
        ;   Label: LAB_004c6fb8
    PUSH EBX                            ; 004c6fbe
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00431660 ; 004c6fbf
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00431660(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004c6fc4
    TEST EAX,EAX                        ; 004c6fc7
    JZ 0x004c8adb                       ; 004c6fc9
        ;   XREF to: 004c8adb (CONDITIONAL_JUMP)  ; LAB_004c8adb
    MOV EAX,dword ptr [EBX + 0x273c]    ; 004c6fcf
    CMP EAX,0x2                         ; 004c6fd5
    JNC 0x004c7995                      ; 004c6fd8
        ;   XREF to: 004c7995 (CONDITIONAL_JUMP)  ; LAB_004c7995
    CMP EAX,0x1                         ; 004c6fde
    JNZ 0x004c799c                      ; 004c6fe1
        ;   XREF to: 004c799c (CONDITIONAL_JUMP)  ; LAB_004c799c
    PUSH EAX                            ; 004c6fe7
    PUSH EAX                            ; 004c6fe8
    LEA EAX,[EBX + 0x158]               ; 004c6fe9
        ;   Label: LAB_004c6fe9
    PUSH EAX                            ; 004c6fef
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c6ff0
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c6ff5
        ;   Label: LAB_004c6ff5
    LEA EAX,[EBX + 0x249c]              ; 004c6ff8
    MOV dword ptr [EAX + 0x8],0x0       ; 004c6ffe
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c7005
    MOV dword ptr [EAX + 0x4],EDX       ; 004c7008
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c700b
    MOV dword ptr [EAX],EDX             ; 004c700e
    FLD float ptr [EBX + 0xcde0]        ; 004c7010
        ;   Label: LAB_004c7010
    FLDZ                                ; 004c7016
    FCOMPP                              ; 004c7018
    FNSTSW AX                           ; 004c701a
    SAHF                                ; 004c701c
    JNC 0x004c7031                      ; 004c701d
        ;   XREF to: 004c7031 (CONDITIONAL_JUMP)  ; LAB_004c7031
    FLD float ptr [EBX + 0xcde0]        ; 004c701f
    FSUB float ptr [EBP + 0x92]         ; 004c7025
    FSTP float ptr [EBX + 0xcde0]       ; 004c702b
    PUSH EBX                            ; 004c7031
        ;   Label: LAB_004c7031
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30 ; 004c7032
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004c7037
    PUSH EBX                            ; 004c703a
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0 ; 004c703b
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004c7040
    TEST EAX,EAX                        ; 004c7043
    JZ 0x004c718e                       ; 004c7045
        ;   XREF to: 004c718e (CONDITIONAL_JUMP)  ; LAB_004c718e
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 004c704b
    TEST EDX,EDX                        ; 004c7051
    JZ 0x004c7081                       ; 004c7053
        ;   XREF to: 004c7081 (CONDITIONAL_JUMP)  ; LAB_004c7081
    MOV EAX,EDX                         ; 004c7055
    PUSH EAX                            ; 004c7057
    MOV EDX,dword ptr [EDX + 0x154]     ; 004c7058
    CALL dword ptr [EDX + 0xf4]         ; 004c705e
    ADD ESP,0x4                         ; 004c7064
    CMP EAX,EBX                         ; 004c7067
    JNZ 0x004c7081                      ; 004c7069
        ;   XREF to: 004c7081 (CONDITIONAL_JUMP)  ; LAB_004c7081
    MOV ECX,dword ptr [EBX + 0xcde4]    ; 004c706b
    PUSH ECX                            ; 004c7071
    MOV ESI,dword ptr [0x00603b28]      ; 004c7072 | g_CDemonSetPtr
    PUSH ESI                            ; 004c7078 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 004c7079
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004c707e
    PUSH dword ptr [EBP + 0x92]         ; 004c7081
        ;   Label: LAB_004c7081
    PUSH EBX                            ; 004c7087
    LEA ESI,[EBX + 0x2518]              ; 004c7088
    CALL core_charactr.cpp_FUN_0042c1e0 ; 004c708e
        ;   XREF to: 0042c1e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042c1e0()
    FLD float ptr [ESI]                 ; 004c7093
    FMUL float ptr [EBP + 0x92]         ; 004c7095
    FLD float ptr [ESI + 0x4]           ; 004c709b
    FMUL float ptr [EBP + 0x92]         ; 004c709e
    FLD float ptr [ESI + 0x8]           ; 004c70a4
    FMUL float ptr [EBP + 0x92]         ; 004c70a7
    LEA EDI,[EBP + -0x7a]               ; 004c70ad
    LEA ESI,[EBP + 0xfffffe8a]          ; 004c70b0
    FXCH ST2                            ; 004c70b6
    FSTP float ptr [EBP + 0xfffffe8a]   ; 004c70b8
    FSTP float ptr [EBP + 0xfffffe8e]   ; 004c70be
    FSTP float ptr [EBP + 0xfffffe92]   ; 004c70c4
    MOVSD ES:EDI,ESI                    ; 004c70ca
    MOVSD ES:EDI,ESI                    ; 004c70cb
    MOVSD ES:EDI,ESI                    ; 004c70cc
    LEA EAX,[EBX + 0x250c]              ; 004c70cd
    FLD float ptr [EBP + -0x7a]         ; 004c70d3
    FLD float ptr [EBP + -0x76]         ; 004c70d6
    FLD float ptr [EBP + -0x72]         ; 004c70d9
    LEA EDI,[EBP + 0xfffffec6]          ; 004c70dc
    LEA ESI,[EBP + 0xffffff56]          ; 004c70e2
    FXCH ST2                            ; 004c70e8
    FADD float ptr [EAX]                ; 004c70ea
    FXCH                                ; 004c70ec
    FADD float ptr [EAX + 0x4]          ; 004c70ee
    FXCH ST2                            ; 004c70f1
    FADD float ptr [EAX + 0x8]          ; 004c70f3
    FXCH                                ; 004c70f6
    FSTP float ptr [EBP + 0xffffff56]   ; 004c70f8
    FXCH                                ; 004c70fe
    FSTP float ptr [EBP + 0xffffff5a]   ; 004c7100
    FSTP float ptr [EBP + 0xffffff5e]   ; 004c7106
    MOVSD ES:EDI,ESI                    ; 004c710c
    MOVSD ES:EDI,ESI                    ; 004c710d
    MOVSD ES:EDI,ESI                    ; 004c710e
    LEA EDX,[EBX + 0x249c]              ; 004c710f
    FLD float ptr [EBP + 0xfffffec6]    ; 004c7115
    FLD float ptr [EBP + 0xfffffeca]    ; 004c711b
    FLD float ptr [EBP + 0xfffffece]    ; 004c7121
    LEA EDI,[EBP + 0xfffffe66]          ; 004c7127
    LEA ESI,[EBP + 0xfffffed2]          ; 004c712d
    FXCH ST2                            ; 004c7133
    FADD float ptr [EDX]                ; 004c7135
    FXCH                                ; 004c7137
    FADD float ptr [EDX + 0x4]          ; 004c7139
    FXCH ST2                            ; 004c713c
    FADD float ptr [EDX + 0x8]          ; 004c713e
    FXCH                                ; 004c7141
    FSTP float ptr [EBP + 0xfffffed2]   ; 004c7143
    FXCH                                ; 004c7149
    FSTP float ptr [EBP + 0xfffffed6]   ; 004c714b
    FSTP float ptr [EBP + 0xfffffeda]   ; 004c7151
    MOVSD ES:EDI,ESI                    ; 004c7157
    MOVSD ES:EDI,ESI                    ; 004c7158
    MOVSD ES:EDI,ESI                    ; 004c7159
    MOV dword ptr [EAX + 0x8],0x0       ; 004c715a
    ADD ESP,0x8                         ; 004c7161
    MOV ECX,dword ptr [EAX + 0x8]       ; 004c7164
    MOV dword ptr [EAX + 0x4],ECX       ; 004c7167
    MOV ECX,dword ptr [EAX + 0x4]       ; 004c716a
    MOV dword ptr [EAX],ECX             ; 004c716d
    MOV dword ptr [EDX + 0x8],0x0       ; 004c716f
    LEA EAX,[EBP + 0xfffffe66]          ; 004c7176
    FLD float ptr [EDX + 0x8]           ; 004c717c
    PUSH EAX                            ; 004c717f
    FST float ptr [EDX + 0x4]           ; 004c7180
    PUSH EBX                            ; 004c7183
    FSTP float ptr [EDX]                ; 004c7184
    CALL core_charactr.cpp_FUN_0042c230 ; 004c7186
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004c718b
    LEA ESI,[EBX + 0x158]               ; 004c718e
        ;   Label: LAB_004c718e
    PUSH ESI                            ; 004c7194
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 004c7195
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    FLDZ                                ; 004c719a
    FLD float ptr [EBX + 0xd068]        ; 004c719c
    ADD ESP,0x4                         ; 004c71a2
    FSTP double ptr [EBP + -0x36]       ; 004c71a5
    FCOMP double ptr [EBP + -0x36]      ; 004c71a8
    FNSTSW AX                           ; 004c71ab
    SAHF                                ; 004c71ad
    JNC 0x004c7240                      ; 004c71ae
        ;   XREF to: 004c7240 (CONDITIONAL_JUMP)  ; LAB_004c7240
    FLD1                                ; 004c71b4
    FSUB double ptr [EBP + -0x36]       ; 004c71b6
    SUB ESP,0x4                         ; 004c71b9
    FSTP float ptr [ESP]                ; 004c71bc
    MOV EDI,dword ptr [EBX + 0xd06c]    ; 004c71bf
    PUSH EDI                            ; 004c71c5
    PUSH ESI                            ; 004c71c6
    CALL core_motion.cpp_FUN_004fca20   ; 004c71c7
        ;   XREF to: 004fca20 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fca20()
    FLD float ptr [EBX + 0xd068]        ; 004c71cc
    FLD1                                ; 004c71d2
    FSUBRP                              ; 004c71d4
    FST float ptr [EBP + 0x22]          ; 004c71d6
    FMUL float ptr [EBP + 0x22]         ; 004c71d9
    FMUL float ptr [EBP + 0x22]         ; 004c71dc
    MOV dword ptr [EBP + 0x76],EAX      ; 004c71df
    ADD ESP,0xc                         ; 004c71e2
    MOV EDX,dword ptr [EBX + 0xd06c]    ; 004c71e5
    FLD float ptr [EBP + 0x76]          ; 004c71eb
    PUSH 0x54bef0                       ; 004c71ee
    MOV EAX,[0x01d22dc4]                ; 004c71f3 | DAT_01d22dc4
    FLD1                                ; 004c71f8
    FSUBRP ST2,ST0                      ; 004c71fa
    PUSH EAX                            ; 004c71fc
    FXCH                                ; 004c71fd
    FSTP float ptr [EBP + 0x22]         ; 004c71ff
    PUSH dword ptr [EBP + 0x22]         ; 004c7202
    FSTP float ptr [EBP + 0x1e]         ; 004c7205
    PUSH dword ptr [EBP + 0x1e]         ; 004c7208
    PUSH EDX                            ; 004c720b
    PUSH ESI                            ; 004c720c
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90 ; 004c720d
        ;   XREF to: 0054cc90 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    FLD float ptr [EBP + 0x92]          ; 004c7212
    FDIV float ptr [0x005e0a3c]         ; 004c7218 | DAT_005e0a3c
    FSUBR float ptr [EBX + 0xd068]      ; 004c721e
    ADD ESP,0x18                        ; 004c7224
    FST float ptr [EBX + 0xd068]        ; 004c7227
    FLDZ                                ; 004c722d
    FCOMPP                              ; 004c722f
    FNSTSW AX                           ; 004c7231
    SAHF                                ; 004c7233
    JBE 0x004c7240                      ; 004c7234
        ;   XREF to: 004c7240 (CONDITIONAL_JUMP)  ; LAB_004c7240
    MOV dword ptr [EBX + 0xd068],0x0    ; 004c7236
    PUSH dword ptr [EBP + 0x92]         ; 004c7240
        ;   Label: LAB_004c7240
    PUSH EBX                            ; 004c7246
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350 ; 004c7247
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350(CCharacter * this_ptr, float delta_time)
    FLD float ptr [EBX + 0x2508]        ; 004c724c
    FABS                                ; 004c7252
    ADD ESP,0x8                         ; 004c7254
    FCOMP double ptr [0x005c4335]       ; 004c7257 | DAT_005c4335
    FNSTSW AX                           ; 004c725d
    SAHF                                ; 004c725f
    JBE 0x004c8b04                      ; 004c7260
        ;   XREF to: 004c8b04 (CONDITIONAL_JUMP)  ; LAB_004c8b04
    MOV EDI,dword ptr [EBX + 0xd054]    ; 004c7266
        ;   Label: LAB_004c7266
    PUSH EDI                            ; 004c726c
    MOV EAX,[0x006045f8]                ; 004c726d | DAT_006045f8
    PUSH EAX                            ; 004c7272
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_00560af0 ; 004c7273
        ;   XREF to: 00560af0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_00560af0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004c7278
    TEST EAX,EAX                        ; 004c727b
    JZ 0x004c8b48                       ; 004c727d
        ;   XREF to: 004c8b48 (CONDITIONAL_JUMP)  ; LAB_004c8b48
    CMP dword ptr [EBX + 0xcdd0],0x0    ; 004c7283
        ;   Label: LAB_004c7283
    JZ 0x004c8b87                       ; 004c728a
        ;   XREF to: 004c8b87 (CONDITIONAL_JUMP)  ; LAB_004c8b87
    CMP dword ptr [EBX + 0xd0b4],0x0    ; 004c7290
        ;   Label: LAB_004c7290
    JZ 0x004c734f                       ; 004c7297
        ;   XREF to: 004c734f (CONDITIONAL_JUMP)  ; LAB_004c734f
    CMP dword ptr [EBP + 0x56],0x11     ; 004c729d
    JNZ 0x004c734f                      ; 004c72a1
        ;   XREF to: 004c734f (CONDITIONAL_JUMP)  ; LAB_004c734f
    LEA EDX,[EBX + 0x20]                ; 004c72a7
    LEA EDI,[EBP + 0xfffffd16]          ; 004c72aa
    LEA ESI,[EBP + 0xfffffeae]          ; 004c72b0
    FLD float ptr [EDX]                 ; 004c72b6
    FLD float ptr [EDX + 0x4]           ; 004c72b8
    LEA EAX,[EBX + 0xd0c4]              ; 004c72bb
    FLD float ptr [EDX + 0x8]           ; 004c72c1
    FXCH ST2                            ; 004c72c4
    FSUB float ptr [EAX]                ; 004c72c6
    FXCH                                ; 004c72c8
    FSUB float ptr [EAX + 0x4]          ; 004c72ca
    FXCH ST2                            ; 004c72cd
    FSUB float ptr [EAX + 0x8]          ; 004c72cf
    FXCH                                ; 004c72d2
    FSTP float ptr [EBP + 0xfffffeae]   ; 004c72d4
    FXCH                                ; 004c72da
    FSTP float ptr [EBP + 0xfffffeb2]   ; 004c72dc
    FSTP float ptr [EBP + 0xfffffeb6]   ; 004c72e2
    MOVSD ES:EDI,ESI                    ; 004c72e8
    MOVSD ES:EDI,ESI                    ; 004c72e9
    MOVSD ES:EDI,ESI                    ; 004c72ea
    FLD float ptr [EBP + 0xfffffd16]    ; 004c72eb
    FMUL ST0                            ; 004c72f1
    FLD float ptr [EBP + 0xfffffd1e]    ; 004c72f3
    FMUL ST0                            ; 004c72f9
    FADDP                               ; 004c72fb
    FSQRT                               ; 004c72fd
    XOR EDI,EDI                         ; 004c72ff
    FLD float ptr [EBP + 0x92]          ; 004c7301
    FMUL double ptr [0x005c42d5]        ; 004c7307 | DAT_005c42d5
    MOV dword ptr [EBP + 0xfffffd1a],EDI ; 004c730d
    FCOMPP                              ; 004c7313
    FNSTSW AX                           ; 004c7315
    SAHF                                ; 004c7317
    JBE 0x004c8c63                      ; 004c7318
        ;   XREF to: 004c8c63 (CONDITIONAL_JUMP)  ; LAB_004c8c63
    FLD float ptr [EBX + 0xd0c0]        ; 004c731e
    FSUB float ptr [EBP + 0x92]         ; 004c7324
    FST float ptr [EBX + 0xd0c0]        ; 004c732a
    FLDZ                                ; 004c7330
    FCOMPP                              ; 004c7332
    FNSTSW AX                           ; 004c7334
    SAHF                                ; 004c7336
    JBE 0x004c734f                      ; 004c7337
        ;   XREF to: 004c734f (CONDITIONAL_JUMP)  ; LAB_004c734f
    MOV dword ptr [EBX + 0xd0b8],0x41f00000 ; 004c7339
    MOV dword ptr [EBX + 0xd0b4],EDI    ; 004c7343
    MOV dword ptr [EBX + 0xd0bc],EDI    ; 004c7349
    LEA EAX,[EBX + 0xd0c4]              ; 004c734f
        ;   Label: LAB_004c734f
    ADD EBX,0x20                        ; 004c7355
    CMP EAX,EBX                         ; 004c7358
    JNZ 0x004c8c72                      ; 004c735a
        ;   XREF to: 004c8c72 (CONDITIONAL_JUMP)  ; LAB_004c8c72
    LEA ESP,[EBP + 0x7a]                ; 004c7360
        ;   Label: LAB_004c7360
    POP EBP                             ; 004c7363
    POP EDI                             ; 004c7364
    POP ESI                             ; 004c7365
    POP EBX                             ; 004c7366
    RET                                 ; 004c7367
    MOV ESI,0x1                         ; 004c7368
        ;   Label: caseD_5
    MOV EDI,dword ptr [EBX + 0xcde4]    ; 004c736d
    MOV dword ptr [EBP + 0x6e],ESI      ; 004c7373
    TEST EDI,EDI                        ; 004c7376
    JNZ 0x004c738f                      ; 004c7378
        ;   XREF to: 004c738f (CONDITIONAL_JUMP)  ; LAB_004c738f
    PUSH 0x1                            ; 004c737a
        ;   Label: LAB_004c737a
    PUSH 0x1                            ; 004c737c
    MOV EDX,dword ptr [EBP + 0x72]      ; 004c737e
    PUSH EDX                            ; 004c7381
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c7382
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c7387
    JMP 0x004c6f13                      ; 004c738a
        ;   XREF to: 004c6f13 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH EDI                            ; 004c738f
        ;   Label: LAB_004c738f
    MOV ESI,dword ptr [EDI + 0x154]     ; 004c7390
    CALL dword ptr [ESI + 0x10c]        ; 004c7396
    ADD ESP,0x4                         ; 004c739c
    TEST EAX,EAX                        ; 004c739f
    JNZ 0x004c737a                      ; 004c73a1
        ;   XREF to: 004c737a (CONDITIONAL_JUMP)  ; LAB_004c737a
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004c73a3
    PUSH EAX                            ; 004c73a9
    MOV ESI,dword ptr [EAX + 0x154]     ; 004c73aa
    CALL dword ptr [ESI + 0xf4]         ; 004c73b0
    ADD ESP,0x4                         ; 004c73b6
    TEST EAX,EAX                        ; 004c73b9
    JNZ 0x004c737a                      ; 004c73bb
        ;   XREF to: 004c737a (CONDITIONAL_JUMP)  ; LAB_004c737a
    PUSH 0x0                            ; 004c73bd
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004c73bf
    PUSH EBX                            ; 004c73c5
    MOV ESI,dword ptr [EAX + 0x154]     ; 004c73c6
    PUSH EAX                            ; 004c73cc
    CALL dword ptr [ESI + 0xe8]         ; 004c73cd
    ADD ESP,0xc                         ; 004c73d3
    TEST EAX,EAX                        ; 004c73d6
    JZ 0x004c737a                       ; 004c73d8
        ;   XREF to: 004c737a (CONDITIONAL_JUMP)  ; LAB_004c737a
    MOV EAX,[0x005e0a28]                ; 004c73da | DAT_005e0a28
    MOV dword ptr [EBP + 0x26],EAX      ; 004c73df
    XOR EAX,EAX                         ; 004c73e2
    MOV dword ptr [EBP + 0xfffffe7e],EAX ; 004c73e4
    MOV dword ptr [EBP + 0xfffffe82],EAX ; 004c73ea
    MOV EAX,dword ptr [EBP + 0x26]      ; 004c73f0
    MOV dword ptr [EBP + 0xfffffe86],EAX ; 004c73f3
    LEA EAX,[EBP + 0xfffffe7e]          ; 004c73f9
    PUSH EAX                            ; 004c73ff
    PUSH EBX                            ; 004c7400
    LEA ESI,[EBP + 0xfffffea2]          ; 004c7401
    LEA EDI,[EBP + 0xfffffde2]          ; 004c7407
    CALL core_actor.cpp_FUN_00408b80    ; 004c740d
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[EBP + 0xfffffea2]          ; 004c7412
    MOVSD ES:EDI,ESI                    ; 004c7418
    MOVSD ES:EDI,ESI                    ; 004c7419
    MOVSD ES:EDI,ESI                    ; 004c741a
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004c741b
    FLD float ptr [EBP + 0xfffffde2]    ; 004c7421
    FSUB float ptr [EAX + 0x20]         ; 004c7427
    FMUL ST0                            ; 004c742a
    FLD float ptr [EBP + 0xfffffdea]    ; 004c742c
    FSUB float ptr [EAX + 0x28]         ; 004c7432
    FMUL ST0                            ; 004c7435
    FADDP                               ; 004c7437
    FSQRT                               ; 004c7439
    ADD ESP,0x8                         ; 004c743b
    FLD1                                ; 004c743e
    FCOMPP                              ; 004c7440
    FNSTSW AX                           ; 004c7442
    SAHF                                ; 004c7444
    JNC 0x004c744c                      ; 004c7445
        ;   XREF to: 004c744c (CONDITIONAL_JUMP)  ; LAB_004c744c
    XOR ECX,ECX                         ; 004c7447
    MOV dword ptr [EBP + 0x6e],ECX      ; 004c7449
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 004c744c
        ;   Label: LAB_004c744c
    FLD float ptr [EBP + 0xfffffde6]    ; 004c7452
    FSUB float ptr [ESI + 0x24]         ; 004c7458
    FABS                                ; 004c745b
    FCOMP double ptr [0x005c42bd]       ; 004c745d | DAT_005c42bd
    FNSTSW AX                           ; 004c7463
    SAHF                                ; 004c7465
    JA 0x004c737a                       ; 004c7466
        ;   XREF to: 004c737a (CONDITIONAL_JUMP)  ; LAB_004c737a
    CMP dword ptr [EBP + 0x6e],0x0      ; 004c746c
    JNZ 0x004c7481                      ; 004c7470
        ;   XREF to: 004c7481 (CONDITIONAL_JUMP)  ; LAB_004c7481
    CMP dword ptr [EBP + 0x6e],0x0      ; 004c7472
        ;   Label: LAB_004c7472
    JNZ 0x004c6f13                      ; 004c7476
        ;   XREF to: 004c6f13 (CONDITIONAL_JUMP)  ; caseD_12
    JMP 0x004c737a                      ; 004c747c
        ;   XREF to: 004c737a (UNCONDITIONAL_JUMP)  ; LAB_004c737a
    PUSH 0x0                            ; 004c7481
        ;   Label: LAB_004c7481
    PUSH EBX                            ; 004c7483
    MOV EAX,dword ptr [ESI + 0x154]     ; 004c7484
    PUSH ESI                            ; 004c748a
    CALL dword ptr [EAX + 0xec]         ; 004c748b
    ADD ESP,0xc                         ; 004c7491
    TEST EAX,EAX                        ; 004c7494
    JNZ 0x004c7472                      ; 004c7496
        ;   XREF to: 004c7472 (CONDITIONAL_JUMP)  ; LAB_004c7472
    JMP 0x004c737a                      ; 004c7498
        ;   XREF to: 004c737a (UNCONDITIONAL_JUMP)  ; LAB_004c737a
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004c749d
        ;   Label: caseD_a
    TEST EAX,EAX                        ; 004c74a3
    JNZ 0x004c74bc                      ; 004c74a5
        ;   XREF to: 004c74bc (CONDITIONAL_JUMP)  ; LAB_004c74bc
    PUSH 0x1                            ; 004c74a7
    PUSH 0x1                            ; 004c74a9
    MOV ECX,dword ptr [EBP + 0x72]      ; 004c74ab
    PUSH ECX                            ; 004c74ae
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c74af
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c74b4
    JMP 0x004c6f13                      ; 004c74b7
        ;   XREF to: 004c6f13 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH EAX                            ; 004c74bc
        ;   Label: LAB_004c74bc
    MOV ESI,dword ptr [EAX + 0x154]     ; 004c74bd
    CALL dword ptr [ESI + 0xf4]         ; 004c74c3
    ADD ESP,0x4                         ; 004c74c9
    CMP EAX,EBX                         ; 004c74cc
    JZ 0x004c74e5                       ; 004c74ce
        ;   XREF to: 004c74e5 (CONDITIONAL_JUMP)  ; LAB_004c74e5
    PUSH 0x1                            ; 004c74d0
    PUSH 0x1                            ; 004c74d2
    MOV EDX,dword ptr [EBP + 0x72]      ; 004c74d4
    PUSH EDX                            ; 004c74d7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c74d8
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c74dd
    JMP 0x004c6f13                      ; 004c74e0
        ;   XREF to: 004c6f13 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004c74e5
        ;   Label: LAB_004c74e5
    PUSH EAX                            ; 004c74eb
    MOV ESI,dword ptr [EAX + 0x154]     ; 004c74ec
    CALL dword ptr [ESI + 0x10c]        ; 004c74f2
    ADD ESP,0x4                         ; 004c74f8
    TEST EAX,EAX                        ; 004c74fb
    JNZ 0x004c76aa                      ; 004c74fd
        ;   XREF to: 004c76aa (CONDITIONAL_JUMP)  ; LAB_004c76aa
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004c7503
    PUSH EAX                            ; 004c7509
    MOV EDI,dword ptr [EAX + 0x154]     ; 004c750a
    LEA ESI,[EBP + 0xfffffce6]          ; 004c7510
    CALL dword ptr [EDI + 0x1c]         ; 004c7516
    MOV ECX,0x6                         ; 004c7519
    LEA EDI,[EBP + 0xfffffcfe]          ; 004c751e
    LEA ESI,[EBP + 0xfffffce6]          ; 004c7524
    MOVSD.REP ES:EDI,ESI                ; 004c752a
    FLD float ptr [EBP + 0xfffffd0e]    ; 004c752c
    FSUB float ptr [EBP + 0xfffffd02]   ; 004c7532
    FMUL double ptr [0x005c430d]        ; 004c7538 | DAT_005c430d
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 004c753e
    LEA EDI,[EBP + 0xffffff3e]          ; 004c7544
    LEA ESI,[ESI + 0x20]                ; 004c754a
    LEA EAX,[EBP + 0xfffffc12]          ; 004c754d
    MOVSD ES:EDI,ESI                    ; 004c7553
    MOVSD ES:EDI,ESI                    ; 004c7554
    MOVSD ES:EDI,ESI                    ; 004c7555
    ADD ESP,0x4                         ; 004c7556
    FLD float ptr [EBP + 0xffffff42]    ; 004c7559
    FXCH                                ; 004c755f
    FADD ST0,ST1                        ; 004c7561
    PUSH EAX                            ; 004c7563
    FSTP ST1                            ; 004c7564
    FSTP float ptr [EBP + 0xffffff42]   ; 004c7566
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 004c756c
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004c7571
    PUSH 0x41c80000                     ; 004c7574
    PUSH 0x41700000                     ; 004c7579
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004c757e
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c7583
    ADD ESP,0x8                         ; 004c7586
    LEA EAX,[EBP + 0xffffff3e]          ; 004c7589
    FLD float ptr [EBP + 0x76]          ; 004c758f
    PUSH EAX                            ; 004c7592
    FSTP float ptr [EBP + 0xfffffc16]   ; 004c7593
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 004c7599
    PUSH EDX                            ; 004c759f
    LEA ESI,[EBP + -0x4a]               ; 004c75a0
    LEA EDI,[EBP + 0xfffffda6]          ; 004c75a3
    CALL core_actor.cpp_FUN_00408bf0    ; 004c75a9
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[EBP + -0x4a]               ; 004c75ae
    MOVSD ES:EDI,ESI                    ; 004c75b1
    MOVSD ES:EDI,ESI                    ; 004c75b2
    MOVSD ES:EDI,ESI                    ; 004c75b3
    LEA EAX,[EBP + 0xfffffc2e]          ; 004c75b4
    LEA ESI,[EBP + 0xfffffda6]          ; 004c75ba
    ADD ESP,0x8                         ; 004c75c0
    CMP EAX,ESI                         ; 004c75c3
    JZ 0x004c75eb                       ; 004c75c5
        ;   XREF to: 004c75eb (CONDITIONAL_JUMP)  ; LAB_004c75eb
    MOV EAX,dword ptr [EBP + 0xfffffda6] ; 004c75c7
    MOV dword ptr [EBP + 0xfffffc2e],EAX ; 004c75cd
    MOV EAX,dword ptr [EBP + 0xfffffdaa] ; 004c75d3
    MOV dword ptr [EBP + 0xfffffc32],EAX ; 004c75d9
    MOV EAX,dword ptr [EBP + 0xfffffdae] ; 004c75df
    MOV dword ptr [EBP + 0xfffffc36],EAX ; 004c75e5
    LEA EDI,[EBP + 0xfffffc12]          ; 004c75eb
        ;   Label: LAB_004c75eb
    MOV dword ptr [EBP + 0xfffffc46],EBX ; 004c75f1
    MOV dword ptr [EBP + 0xfffffc4a],EBX ; 004c75f7
    PUSH EDI                            ; 004c75fd
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004c75fe
    PUSH EAX                            ; 004c7604
    MOV ESI,dword ptr [EAX + 0x154]     ; 004c7605
    CALL dword ptr [ESI + 0x108]        ; 004c760b
    FLD float ptr [EBP + 0xfffffc16]    ; 004c7611
    FLDZ                                ; 004c7617
    ADD ESP,0x8                         ; 004c7619
    FXCH                                ; 004c761c
    FSTP double ptr [EBP + -0x3e]       ; 004c761e
    FCOMP double ptr [EBP + -0x3e]      ; 004c7621
    FNSTSW AX                           ; 004c7624
    SAHF                                ; 004c7626
    JNC 0x004c765e                      ; 004c7627
        ;   XREF to: 004c765e (CONDITIONAL_JUMP)  ; LAB_004c765e
    FLD double ptr [EBP + -0x3e]        ; 004c7629
    FMUL double ptr [0x005c4315]        ; 004c762c | DAT_005c4315
    FMUL double ptr [0x005c4305]        ; 004c7632 | DAT_005c4305
    PUSH 0x0                            ; 004c7638
    CALL crt_math.c_round_FUN_005a3120  ; 004c763a
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBP + 0x6]         ; 004c763f
    MOV ECX,dword ptr [EBP + 0x6]       ; 004c7642
    PUSH ECX                            ; 004c7645
    PUSH 0x0                            ; 004c7646
    LEA EAX,[EBP + 0xffffff3e]          ; 004c7648
    PUSH EAX                            ; 004c764e
    MOV ESI,dword ptr [0x005fed24]      ; 004c764f | g_CGorePtr
    PUSH ESI                            ; 004c7655
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0 ; 004c7656
        ;   XREF to: 004ce9c0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 004c765b
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 004c765e
        ;   Label: LAB_004c765e
    FLD float ptr [ESI + 0x2538]        ; 004c7664
    FLDZ                                ; 004c766a
    FCOMPP                              ; 004c766c
    FNSTSW AX                           ; 004c766e
    SAHF                                ; 004c7670
    JC 0x004c7693                       ; 004c7671
        ;   XREF to: 004c7693 (CONDITIONAL_JUMP)  ; LAB_004c7693
    PUSH ESI                            ; 004c7673
    MOV EAX,dword ptr [ESI + 0x154]     ; 004c7674
    CALL dword ptr [EAX + 0xf0]         ; 004c767a
    ADD ESP,0x4                         ; 004c7680
    PUSH 0x1                            ; 004c7683
    PUSH 0x1                            ; 004c7685
    MOV EDI,dword ptr [EBP + 0x72]      ; 004c7687
    PUSH EDI                            ; 004c768a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c768b
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c7690
    PUSH 0x5c41b9                       ; 004c7693 | = "ghoul-eat-?.wav"
        ;   Label: LAB_004c7693
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c7698
    PUSH EBX                            ; 004c769e
    CALL dword ptr [EAX + 0x2c]         ; 004c769f
    ADD ESP,0x8                         ; 004c76a2
    JMP 0x004c6f13                      ; 004c76a5
        ;   XREF to: 004c6f13 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004c76aa
        ;   Label: LAB_004c76aa
    PUSH EAX                            ; 004c76b0
    MOV ESI,dword ptr [EAX + 0x154]     ; 004c76b1
    CALL dword ptr [ESI + 0xf0]         ; 004c76b7
    ADD ESP,0x4                         ; 004c76bd
    PUSH 0x1                            ; 004c76c0
    PUSH 0x1                            ; 004c76c2
    MOV EAX,dword ptr [EBP + 0x72]      ; 004c76c4
    PUSH EAX                            ; 004c76c7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c76c8
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c76cd
    JMP 0x004c6f13                      ; 004c76d0
        ;   XREF to: 004c6f13 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV EDX,dword ptr [EBP + 0x72]      ; 004c76d5
        ;   Label: caseD_b
    PUSH EDX                            ; 004c76d8
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 004c76d9
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    MOV EAX,[0x01d22da4]                ; 004c76de | DAT_01d22da4
    ADD ESP,0x4                         ; 004c76e3
    CMP ESI,0xc                         ; 004c76e6
    JNZ 0x004c76f0                      ; 004c76e9
        ;   XREF to: 004c76f0 (CONDITIONAL_JUMP)  ; LAB_004c76f0
    MOV EAX,[0x01d22da8]                ; 004c76eb | DAT_01d22da8
    PUSH EAX                            ; 004c76f0
        ;   Label: LAB_004c76f0
    MOV ECX,dword ptr [EBP + 0x72]      ; 004c76f1
    PUSH ECX                            ; 004c76f4
    LEA ESI,[EBP + 0xffffff02]          ; 004c76f5
    LEA EDI,[EBP + 0xffffff7a]          ; 004c76fb
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 004c7701
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    ADD ESP,0x8                         ; 004c7706
    LEA EAX,[EBP + 0xffffff7a]          ; 004c7709
    LEA ESI,[EBP + 0xffffff02]          ; 004c770f
    PUSH EAX                            ; 004c7715
    MOVSD ES:EDI,ESI                    ; 004c7716
    MOVSD ES:EDI,ESI                    ; 004c7717
    MOVSD ES:EDI,ESI                    ; 004c7718
    PUSH EBX                            ; 004c7719
    LEA ESI,[EBP + -0x62]               ; 004c771a
    CALL core_actor.cpp_FUN_00408b80    ; 004c771d
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 004c7722
    LEA EDI,[EBP + 0xfffffede]          ; 004c7725
    PUSH 0x41400000                     ; 004c772b
    LEA ESI,[EBP + -0x62]               ; 004c7730
    PUSH 0x41000000                     ; 004c7733
    MOVSD ES:EDI,ESI                    ; 004c7738
    MOVSD ES:EDI,ESI                    ; 004c7739
    MOVSD ES:EDI,ESI                    ; 004c773a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004c773b
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c7740
    ADD ESP,0x8                         ; 004c7743
    FLD float ptr [EBP + 0x76]          ; 004c7746
    FMUL double ptr [0x005c4305]        ; 004c7749 | DAT_005c4305
    PUSH 0x0                            ; 004c774f
    CALL crt_math.c_round_FUN_005a3120  ; 004c7751
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBP + 0x1a]        ; 004c7756
    MOV ESI,dword ptr [EBP + 0x1a]      ; 004c7759
    PUSH ESI                            ; 004c775c
    PUSH 0x0                            ; 004c775d
    LEA EAX,[EBP + 0xfffffede]          ; 004c775f
    PUSH EAX                            ; 004c7765
    MOV EDI,dword ptr [0x005fed24]      ; 004c7766 | g_CGorePtr
    PUSH EDI                            ; 004c776c
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0 ; 004c776d
        ;   XREF to: 004ce9c0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 004c7772
    PUSH 0x5c41c9                       ; 004c7775 | = "ghoul-dig-?.wav @1.3"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c777a
    PUSH EBX                            ; 004c7780
    CALL dword ptr [EAX + 0x2c]         ; 004c7781
    ADD ESP,0x8                         ; 004c7784
    JMP 0x004c6f13                      ; 004c7787
        ;   XREF to: 004c6f13 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV EDX,dword ptr [EBP + 0x72]      ; 004c778c
        ;   Label: caseD_d
    PUSH EDX                            ; 004c778f
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 004c7790
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c7795
    MOV ECX,dword ptr [0x01d22da0]      ; 004c7798 | DAT_01d22da0
    PUSH ECX                            ; 004c779e
    MOV ESI,dword ptr [EBP + 0x72]      ; 004c779f
    PUSH ESI                            ; 004c77a2
    LEA ESI,[EBP + 0xfffffe1e]          ; 004c77a3
    LEA EDI,[EBP + 0xfffffd2e]          ; 004c77a9
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 004c77af
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    ADD ESP,0x8                         ; 004c77b4
    LEA EAX,[EBP + 0xfffffd2e]          ; 004c77b7
    LEA ESI,[EBP + 0xfffffe1e]          ; 004c77bd
    PUSH EAX                            ; 004c77c3
    MOVSD ES:EDI,ESI                    ; 004c77c4
    MOVSD ES:EDI,ESI                    ; 004c77c5
    MOVSD ES:EDI,ESI                    ; 004c77c6
    PUSH EBX                            ; 004c77c7
    LEA ESI,[EBP + 0xfffffd52]          ; 004c77c8
    CALL core_actor.cpp_FUN_00408b80    ; 004c77ce
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 004c77d3
    LEA EDI,[EBP + 0xffffff4a]          ; 004c77d6
    PUSH 0x41400000                     ; 004c77dc
    LEA ESI,[EBP + 0xfffffd52]          ; 004c77e1
    PUSH 0x41000000                     ; 004c77e7
    MOVSD ES:EDI,ESI                    ; 004c77ec
    MOVSD ES:EDI,ESI                    ; 004c77ed
    MOVSD ES:EDI,ESI                    ; 004c77ee
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004c77ef
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c77f4
    ADD ESP,0x8                         ; 004c77f7
    FLD float ptr [EBP + 0x76]          ; 004c77fa
    FMUL double ptr [0x005c4305]        ; 004c77fd | DAT_005c4305
    PUSH 0x0                            ; 004c7803
    CALL crt_math.c_round_FUN_005a3120  ; 004c7805
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBP + 0xe]         ; 004c780a
    MOV EDI,dword ptr [EBP + 0xe]       ; 004c780d
    PUSH EDI                            ; 004c7810
    PUSH 0x0                            ; 004c7811
    LEA EAX,[EBP + 0xffffff4a]          ; 004c7813
    PUSH EAX                            ; 004c7819
    MOV EAX,[0x005fed24]                ; 004c781a | g_CGorePtr
    PUSH EAX                            ; 004c781f
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0 ; 004c7820
        ;   XREF to: 004ce9c0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 004c7825
    PUSH 0x5c41de                       ; 004c7828 | = "ghoul-eat-?.wav @1.3"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c782d
    PUSH EBX                            ; 004c7833
    CALL dword ptr [EAX + 0x2c]         ; 004c7834
    ADD ESP,0x8                         ; 004c7837
    JMP 0x004c6f13                      ; 004c783a
        ;   XREF to: 004c6f13 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV EDX,dword ptr [EBP + 0x72]      ; 004c783f
        ;   Label: caseD_10
    PUSH EDX                            ; 004c7842
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 004c7843
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c7848
    MOV ECX,dword ptr [0x01d22da0]      ; 004c784b | DAT_01d22da0
    PUSH ECX                            ; 004c7851
    MOV ESI,dword ptr [EBP + 0x72]      ; 004c7852
    PUSH ESI                            ; 004c7855
    LEA ESI,[EBP + 0xfffffd8e]          ; 004c7856
    LEA EDI,[EBP + 0xfffffd6a]          ; 004c785c
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 004c7862
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    ADD ESP,0x8                         ; 004c7867
    LEA EAX,[EBP + 0xfffffd6a]          ; 004c786a
    LEA ESI,[EBP + 0xfffffd8e]          ; 004c7870
    PUSH EAX                            ; 004c7876
    MOVSD ES:EDI,ESI                    ; 004c7877
    MOVSD ES:EDI,ESI                    ; 004c7878
    MOVSD ES:EDI,ESI                    ; 004c7879
    PUSH EBX                            ; 004c787a
    LEA ESI,[EBP + 0xfffffd9a]          ; 004c787b
    CALL core_actor.cpp_FUN_00408b80    ; 004c7881
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 004c7886
    LEA EDI,[EBP + 0xfffffd5e]          ; 004c7889
    PUSH 0x41400000                     ; 004c788f
    LEA ESI,[EBP + 0xfffffd9a]          ; 004c7894
    PUSH 0x41000000                     ; 004c789a
    MOVSD ES:EDI,ESI                    ; 004c789f
    MOVSD ES:EDI,ESI                    ; 004c78a0
    MOVSD ES:EDI,ESI                    ; 004c78a1
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004c78a2
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c78a7
    ADD ESP,0x8                         ; 004c78aa
    FLD float ptr [EBP + 0x76]          ; 004c78ad
    FMUL double ptr [0x005c4305]        ; 004c78b0 | DAT_005c4305
    PUSH 0x0                            ; 004c78b6
    CALL crt_math.c_round_FUN_005a3120  ; 004c78b8
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBP + -0xe]        ; 004c78bd
    MOV EDI,dword ptr [EBP + -0xe]      ; 004c78c0
    PUSH EDI                            ; 004c78c3
    PUSH 0x0                            ; 004c78c4
    LEA EAX,[EBP + 0xfffffd5e]          ; 004c78c6
    PUSH EAX                            ; 004c78cc
    MOV EAX,[0x005fed24]                ; 004c78cd | g_CGorePtr
    PUSH EAX                            ; 004c78d2
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0 ; 004c78d3
        ;   XREF to: 004ce9c0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 004c78d8
    PUSH 0x3f000000                     ; 004c78db
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 004c78e0
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 004c78e5
    TEST EAX,EAX                        ; 004c78e8
    JNZ 0x004c792a                      ; 004c78ea
        ;   XREF to: 004c792a (CONDITIONAL_JUMP)  ; LAB_004c792a
    MOV ESI,0x5c4208                    ; 004c78ec | = "ghoul-dig-?.wav @1.3"
    LEA EDI,[EBP + 0xfffffcc6]          ; 004c78f1
        ;   Label: LAB_004c78f1
    PUSH EDI                            ; 004c78f7
    MOV AL,byte ptr [ESI]               ; 004c78f8 | = "ghoul-dig-?.wav @1.3" | s_ghoul_dig_wav_1_3_005c4208+2 | s_ghoul_eat_wav_1_3_005c41f3
        ;   Label: LAB_004c78f8
    MOV byte ptr [EDI],AL               ; 004c78fa
    CMP AL,0x0                          ; 004c78fc
    JZ 0x004c7910                       ; 004c78fe
        ;   XREF to: 004c7910 (CONDITIONAL_JUMP)  ; LAB_004c7910
    MOV AL,byte ptr [ESI + 0x1]         ; 004c7900 | s_ghoul_dig_wav_1_3_005c4208+1 | s_ghoul_dig_wav_1_3_005c4208+3 | s_ghoul_eat_wav_1_3_005c41f3+1
    ADD ESI,0x2                         ; 004c7903
    MOV byte ptr [EDI + 0x1],AL         ; 004c7906
    ADD EDI,0x2                         ; 004c7909
    CMP AL,0x0                          ; 004c790c
    JNZ 0x004c78f8                      ; 004c790e
        ;   XREF to: 004c78f8 (CONDITIONAL_JUMP)  ; LAB_004c78f8
    POP EDI                             ; 004c7910
        ;   Label: LAB_004c7910
    LEA EAX,[EBP + 0xfffffcc6]          ; 004c7911
    PUSH EAX                            ; 004c7917
    MOV ESI,dword ptr [EBX + 0x154]     ; 004c7918
    PUSH EBX                            ; 004c791e
    CALL dword ptr [ESI + 0x2c]         ; 004c791f
    ADD ESP,0x8                         ; 004c7922
    JMP 0x004c6f13                      ; 004c7925
        ;   XREF to: 004c6f13 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV ESI,0x5c41f3                    ; 004c792a | = "ghoul-eat-?.wav @1.3"
        ;   Label: LAB_004c792a
    JMP 0x004c78f1                      ; 004c792f
        ;   XREF to: 004c78f1 (UNCONDITIONAL_JUMP)  ; LAB_004c78f1
    PUSH ESI                            ; 004c7931
        ;   Label: caseD_6
    PUSH EBX                            ; 004c7932
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 ; 004c7933
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004c7938
    JMP 0x004c6f13                      ; 004c793b
        ;   XREF to: 004c6f13 (UNCONDITIONAL_JUMP)  ; caseD_12
    LEA EAX,[EBP + -0xa]                ; 004c7940
        ;   Label: LAB_004c7940
    PUSH EAX                            ; 004c7943
    MOV EAX,dword ptr [EBP + 0x72]      ; 004c7944
    PUSH EAX                            ; 004c7947
    CALL core_motion.cpp_CMotionController_advance_FUN_004fbb70 ; 004c7948
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004fbb70(CMotionController * this_ptr, float * delta_time)
    MOV ESI,EAX                         ; 004c794d
    SUB EAX,0x5                         ; 004c794f
    ADD ESP,0x8                         ; 004c7952
    CMP EAX,0xd                         ; 004c7955
    JA 0x004c7931                       ; 004c7958
        ;   XREF to: 004c7931 (CONDITIONAL_JUMP)  ; caseD_f
    JMP dword ptr [EAX*0x4 + 0x4c6e30]  ; 004c795a | caseD_5 | caseD_f | caseD_a
        ;   Label: switchD
    PUSH 0x1                            ; 004c7961
        ;   Label: LAB_004c7961
    PUSH 0x0                            ; 004c7963
    LEA EAX,[EBX + 0x158]               ; 004c7965
    PUSH EAX                            ; 004c796b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c796c
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c7971
    PUSH EBX                            ; 004c7974
    MOV EAX,0x5c421d                    ; 004c7975 | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 004c797a | = "%s confused while walking to scriptDe..."
    MOV EDI,dword ptr [0x005f1690]      ; 004c797b | g_CConsolePtr
    PUSH EDI                            ; 004c7981 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 004c7982
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    JMP 0x004c6ff5                      ; 004c7987
        ;   XREF to: 004c6ff5 (UNCONDITIONAL_JUMP)  ; LAB_004c6ff5
    PUSH 0x1                            ; 004c798c
        ;   Label: LAB_004c798c
    PUSH 0x11                           ; 004c798e
    JMP 0x004c6fe9                      ; 004c7990
        ;   XREF to: 004c6fe9 (UNCONDITIONAL_JUMP)  ; LAB_004c6fe9
    JBE 0x004c798c                      ; 004c7995
        ;   XREF to: 004c798c (CONDITIONAL_JUMP)  ; LAB_004c798c
        ;   Label: LAB_004c7995
    CMP EAX,0x3                         ; 004c7997
    JZ 0x004c7961                       ; 004c799a
        ;   XREF to: 004c7961 (CONDITIONAL_JUMP)  ; LAB_004c7961
    PUSH 0x1                            ; 004c799c
        ;   Label: LAB_004c799c
    PUSH 0x0                            ; 004c799e
    JMP 0x004c6fe9                      ; 004c79a0
        ;   XREF to: 004c6fe9 (UNCONDITIONAL_JUMP)  ; LAB_004c6fe9
    MOV ECX,dword ptr [EBX + 0xcdd0]    ; 004c79a5
        ;   Label: caseD_a
    TEST ECX,ECX                        ; 004c79ab
    JNZ 0x004c7a21                      ; 004c79ad
        ;   XREF to: 004c7a21 (CONDITIONAL_JUMP)  ; LAB_004c7a21
    CMP dword ptr [EBX + 0xd070],0x1    ; 004c79af
    JGE 0x004c7a21                      ; 004c79b6
        ;   XREF to: 004c7a21 (CONDITIONAL_JUMP)  ; LAB_004c7a21
    CMP dword ptr [EBX + 0xdc],0x0      ; 004c79b8
    JNZ 0x004c7a21                      ; 004c79bf
        ;   XREF to: 004c7a21 (CONDITIONAL_JUMP)  ; LAB_004c7a21
    PUSH ECX                            ; 004c79c1
    PUSH ESI                            ; 004c79c2
    LEA ESI,[EBP + 0xfffffdca]          ; 004c79c3
    LEA EDI,[EBP + 0xfffffef6]          ; 004c79c9
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 004c79cf
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    ADD ESP,0x8                         ; 004c79d4
    LEA EAX,[EBP + 0xfffffef6]          ; 004c79d7
    LEA ESI,[EBP + 0xfffffdca]          ; 004c79dd
    PUSH EAX                            ; 004c79e3
    MOVSD ES:EDI,ESI                    ; 004c79e4
    MOVSD ES:EDI,ESI                    ; 004c79e5
    MOVSD ES:EDI,ESI                    ; 004c79e6
    PUSH EBX                            ; 004c79e7
    LEA ESI,[EBP + -0x6e]               ; 004c79e8
    CALL core_actor.cpp_FUN_00408b80    ; 004c79eb
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 004c79f0
    PUSH 0x0                            ; 004c79f3
    LEA EAX,[EBP + 0xfffffeea]          ; 004c79f5
    LEA EDI,[EBP + 0xfffffeea]          ; 004c79fb
    PUSH EAX                            ; 004c7a01
    MOV EDX,dword ptr [0x005fed24]      ; 004c7a02 | g_CGorePtr
    LEA ESI,[EBP + -0x6e]               ; 004c7a08
    PUSH EDX                            ; 004c7a0b
    MOVSD ES:EDI,ESI                    ; 004c7a0c
    MOVSD ES:EDI,ESI                    ; 004c7a0d
    MOVSD ES:EDI,ESI                    ; 004c7a0e
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004cec40 ; 004c7a0f
        ;   XREF to: 004cec40 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004cec40(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 004c7a14
    MOV dword ptr [EBX + 0xcdd0],0x1    ; 004c7a17
    MOV ECX,dword ptr [EBX + 0xd074]    ; 004c7a21
        ;   Label: LAB_004c7a21
    MOV dword ptr [EBX + 0xd0bc],0x0    ; 004c7a27
    TEST ECX,ECX                        ; 004c7a31
    JLE 0x004c7b81                      ; 004c7a33
        ;   XREF to: 004c7b81 (CONDITIONAL_JUMP)  ; LAB_004c7b81
    MOV EAX,[0x01c5fad0]                ; 004c7a39 | DAT_01c5fad0
        ;   Label: LAB_004c7a39
    MOV EDI,dword ptr [EBX + 0xd05c]    ; 004c7a3e
    SUB EDI,EAX                         ; 004c7a44
    MOV dword ptr [EBX + 0xd05c],EDI    ; 004c7a46
    TEST EDI,EDI                        ; 004c7a4c
    JLE 0x004c7b93                      ; 004c7a4e
        ;   XREF to: 004c7b93 (CONDITIONAL_JUMP)  ; LAB_004c7b93
    CMP dword ptr [EBX + 0xd070],0x0    ; 004c7a54
        ;   Label: LAB_004c7a54
    JLE 0x004c7a82                      ; 004c7a5b
        ;   XREF to: 004c7a82 (CONDITIONAL_JUMP)  ; caseD_10
    MOV EDX,dword ptr [EBX + 0xd060]    ; 004c7a5d
    TEST EDX,EDX                        ; 004c7a63
    JLE 0x004c7c26                      ; 004c7a65
        ;   XREF to: 004c7c26 (CONDITIONAL_JUMP)  ; LAB_004c7c26
    MOV EAX,[0x01c5fad0]                ; 004c7a6b | DAT_01c5fad0
    MOV ESI,EDX                         ; 004c7a70
    SUB ESI,EAX                         ; 004c7a72
    MOV dword ptr [EBX + 0xd060],ESI    ; 004c7a74
    TEST ESI,ESI                        ; 004c7a7a
    JLE 0x004c7bf9                      ; 004c7a7c
        ;   XREF to: 004c7bf9 (CONDITIONAL_JUMP)  ; LAB_004c7bf9
    FLD float ptr [EBP + 0x62]          ; 004c7a82
        ;   Label: caseD_3
    FLDZ                                ; 004c7a85
    FCOMPP                              ; 004c7a87
    FNSTSW AX                           ; 004c7a89
    SAHF                                ; 004c7a8b
    JA 0x004c7010                       ; 004c7a8c
        ;   XREF to: 004c7010 (CONDITIONAL_JUMP)  ; LAB_004c7010
    FLD float ptr [EBX + 0xd068]        ; 004c7a92
    FLDZ                                ; 004c7a98
    FCOMPP                              ; 004c7a9a
    FNSTSW AX                           ; 004c7a9c
    SAHF                                ; 004c7a9e
    JC 0x004c7010                       ; 004c7a9f
        ;   XREF to: 004c7010 (CONDITIONAL_JUMP)  ; LAB_004c7010
    CMP dword ptr [EBX + 0xcde4],0x0    ; 004c7aa5
    JZ 0x004c7010                       ; 004c7aac
        ;   XREF to: 004c7010 (CONDITIONAL_JUMP)  ; LAB_004c7010
    PUSH 0x3f060a92                     ; 004c7ab2
    PUSH 0x40400000                     ; 004c7ab7
    XOR ESI,ESI                         ; 004c7abc
    MOV EAX,dword ptr [EBP + 0x62]      ; 004c7abe
    MOV dword ptr [EBP + 0xfffffdbe],ESI ; 004c7ac1
    MOV dword ptr [EBP + 0xfffffdc6],EAX ; 004c7ac7
    LEA EAX,[EBP + 0xfffffdbe]          ; 004c7acd
    MOV dword ptr [EBP + 0xfffffdc2],ESI ; 004c7ad3
    PUSH EAX                            ; 004c7ad9
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004c7ada
    PUSH EAX                            ; 004c7ae0
    MOV EDX,dword ptr [EAX + 0x154]     ; 004c7ae1
    CALL dword ptr [EDX + 0xc4]         ; 004c7ae7
    ADD ESP,0x4                         ; 004c7aed
    PUSH EAX                            ; 004c7af0
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004c7af1
    PUSH ESI                            ; 004c7af7
    ADD EAX,0x158                       ; 004c7af8
    PUSH EAX                            ; 004c7afd
    LEA ESI,[EBP + 0xfffffd76]          ; 004c7afe
    LEA EDI,[EBP + 0xfffffe2a]          ; 004c7b04
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 004c7b0a
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    LEA ESI,[EBP + 0xfffffd76]          ; 004c7b0f
    LEA EAX,[EBP + 0xfffffe2a]          ; 004c7b15
    ADD ESP,0x8                         ; 004c7b1b
    MOVSD ES:EDI,ESI                    ; 004c7b1e
    MOVSD ES:EDI,ESI                    ; 004c7b1f
    MOVSD ES:EDI,ESI                    ; 004c7b20
    PUSH EAX                            ; 004c7b21
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004c7b22
    PUSH EAX                            ; 004c7b28
    LEA ESI,[EBP + 0xffffff32]          ; 004c7b29
    CALL core_actor.cpp_FUN_00408b80    ; 004c7b2f
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 004c7b34
    LEA EAX,[EBP + 0xfffffdd6]          ; 004c7b37
    PUSH EAX                            ; 004c7b3d
    LEA EDI,[EBP + 0xfffffdd6]          ; 004c7b3e
    LEA ESI,[EBP + 0xffffff32]          ; 004c7b44
    PUSH EBX                            ; 004c7b4a
    MOVSD ES:EDI,ESI                    ; 004c7b4b
    MOVSD ES:EDI,ESI                    ; 004c7b4c
    MOVSD ES:EDI,ESI                    ; 004c7b4d
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 004c7b4e
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004c7b53
    CMP EAX,0x1                         ; 004c7b56
    JZ 0x004c7010                       ; 004c7b59
        ;   XREF to: 004c7010 (CONDITIONAL_JUMP)  ; LAB_004c7010
    PUSH 0x1                            ; 004c7b5f
    PUSH 0x1                            ; 004c7b61
    LEA EAX,[EBX + 0x158]               ; 004c7b63
    PUSH EAX                            ; 004c7b69
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c7b6a
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c7b6f
    MOV dword ptr [EBX + 0x2508],0x0    ; 004c7b72
    JMP 0x004c7010                      ; 004c7b7c
        ;   XREF to: 004c7010 (UNCONDITIONAL_JUMP)  ; LAB_004c7010
    CMP dword ptr [EBX + 0xd070],0x0    ; 004c7b81
        ;   Label: LAB_004c7b81
    JG 0x004c7a39                       ; 004c7b88
        ;   XREF to: 004c7a39 (CONDITIONAL_JUMP)  ; LAB_004c7a39
    JMP 0x004c7a54                      ; 004c7b8e
        ;   XREF to: 004c7a54 (UNCONDITIONAL_JUMP)  ; LAB_004c7a54
    CMP dword ptr [EBX + 0xd070],0x1    ; 004c7b93
        ;   Label: LAB_004c7b93
    JGE 0x004c7ba2                      ; 004c7b9a
        ;   XREF to: 004c7ba2 (CONDITIONAL_JUMP)  ; LAB_004c7ba2
    DEC dword ptr [EBX + 0xd074]        ; 004c7b9c
    CMP dword ptr [EBX + 0xd074],0x0    ; 004c7ba2
        ;   Label: LAB_004c7ba2
    JG 0x004c7bb8                       ; 004c7ba9
        ;   XREF to: 004c7bb8 (CONDITIONAL_JUMP)  ; LAB_004c7bb8
    CMP dword ptr [EBX + 0xd070],0x0    ; 004c7bab
    JLE 0x004c7a54                      ; 004c7bb2
        ;   XREF to: 004c7a54 (CONDITIONAL_JUMP)  ; LAB_004c7a54
    PUSH 0x41400000                     ; 004c7bb8
        ;   Label: LAB_004c7bb8
    PUSH 0x3f800000                     ; 004c7bbd
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004c7bc2
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c7bc7
    ADD ESP,0x8                         ; 004c7bca
    FLD float ptr [EBP + 0x76]          ; 004c7bcd
    FMUL double ptr [0x005c42c5]        ; 004c7bd0 | DAT_005c42c5
    PUSH 0x1                            ; 004c7bd6
    LEA EAX,[EBX + 0x158]               ; 004c7bd8
    PUSH 0xf                            ; 004c7bde
    CALL crt_math.c_round_FUN_005a3120  ; 004c7be0
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    PUSH EAX                            ; 004c7be5
    FISTP dword ptr [EBX + 0xd05c]      ; 004c7be6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c7bec
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c7bf1
    JMP 0x004c7a54                      ; 004c7bf4
        ;   XREF to: 004c7a54 (UNCONDITIONAL_JUMP)  ; LAB_004c7a54
    PUSH 0x41f00000                     ; 004c7bf9
        ;   Label: LAB_004c7bf9
    PUSH 0x0                            ; 004c7bfe
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004c7c00
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c7c05
    FLD float ptr [EBP + 0x76]          ; 004c7c08
    FCHS                                ; 004c7c0b
    FMUL float ptr [0x005c42dd]         ; 004c7c0d | DAT_005c42dd
    ADD ESP,0x8                         ; 004c7c13
    CALL crt_math.c_round_FUN_005a3120  ; 004c7c16
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBX + 0xd060]      ; 004c7c1b
    JMP 0x004c7a82                      ; 004c7c21
        ;   XREF to: 004c7a82 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV EAX,[0x01c5fad0]                ; 004c7c26 | DAT_01c5fad0
        ;   Label: LAB_004c7c26
    XOR ECX,ECX                         ; 004c7c2b
    LEA ESI,[EDX + EAX*0x1]             ; 004c7c2d
    MOV dword ptr [EBP + 0x32],ECX      ; 004c7c30
    MOV dword ptr [EBX + 0xd060],ESI    ; 004c7c33
    TEST ESI,ESI                        ; 004c7c39
    JL 0x004c7d57                       ; 004c7c3b
        ;   XREF to: 004c7d57 (CONDITIONAL_JUMP)  ; LAB_004c7d57
    MOV dword ptr [EBX + 0xd060],ECX    ; 004c7c41
    MOV EAX,dword ptr [EBX + 0x3280]    ; 004c7c47
        ;   Label: LAB_004c7c47
    MOV dword ptr [EBP + 0x6a],EAX      ; 004c7c4d
    FLD float ptr [EBP + 0x6a]          ; 004c7c50
    FCOMP float ptr [EBX + 0x327c]      ; 004c7c53
    FNSTSW AX                           ; 004c7c59
    SAHF                                ; 004c7c5b
    JNC 0x004c7c67                      ; 004c7c5c
        ;   XREF to: 004c7c67 (CONDITIONAL_JUMP)  ; LAB_004c7c67
    MOV EAX,dword ptr [EBX + 0x2490]    ; 004c7c5e
    MOV dword ptr [EBP + 0x6a],EAX      ; 004c7c64
    FLD float ptr [EBP + 0x6a]          ; 004c7c67
        ;   Label: LAB_004c7c67
    FCOMP float ptr [EBX + 0x327c]      ; 004c7c6a
    FNSTSW AX                           ; 004c7c70
    SAHF                                ; 004c7c72
    JC 0x004c7e3a                       ; 004c7c73
        ;   XREF to: 004c7e3a (CONDITIONAL_JUMP)  ; LAB_004c7e3a
    XOR ESI,ESI                         ; 004c7c79
        ;   Label: LAB_004c7c79
    MOV dword ptr [EBP + 0x76],ESI      ; 004c7c7b
        ;   Label: LAB_004c7c7b
    FILD dword ptr [EBP + 0x76]         ; 004c7c7e
    FMUL float ptr [0x005c431d]         ; 004c7c81 | DAT_005c431d
    MOV ECX,dword ptr [0x00603b28]      ; 004c7c87 | g_CDemonSetPtr
    FMUL float ptr [0x005c4321]         ; 004c7c8d | DAT_005c4321
    PUSH ECX                            ; 004c7c93 | g_CDemonSetInstance
    FSTP float ptr [EBP + -0x2]         ; 004c7c94
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 004c7c97
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004c7c9c
    PUSH EBX                            ; 004c7c9f
    MOV EDI,dword ptr [0x00603b28]      ; 004c7ca0 | g_CDemonSetPtr
    PUSH EDI                            ; 004c7ca6 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 004c7ca7
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    FLD float ptr [EBP + -0x2]          ; 004c7cac
    FLD ST0                             ; 004c7caf
    FCOS                                ; 004c7cb1
    FXCH                                ; 004c7cb3
    FSIN                                ; 004c7cb5
    FXCH                                ; 004c7cb7
    FLD double ptr [0x005c4325]         ; 004c7cb9 | DAT_005c4325
    FXCH                                ; 004c7cbf
    FMUL ST1                            ; 004c7cc1
    FXCH ST2                            ; 004c7cc3
    FMULP                               ; 004c7cc5
    FLD float ptr [EBX + 0x24]          ; 004c7cc7
    ADD ESP,0x8                         ; 004c7cca
    FADD float ptr [EBP + 0x6a]         ; 004c7ccd
    SUB ESP,0x4                         ; 004c7cd0
    FSTP float ptr [ESP]                ; 004c7cd3
    FLD float ptr [EBX + 0x24]          ; 004c7cd6
    FADD float ptr [EBX + 0x327c]       ; 004c7cd9
    SUB ESP,0x4                         ; 004c7cdf
    FSTP float ptr [ESP]                ; 004c7ce2
    PUSH dword ptr [EBX + 0x3270]       ; 004c7ce5
    SUB ESP,0x4                         ; 004c7ceb
    FXCH                                ; 004c7cee
    FSTP float ptr [ESP]                ; 004c7cf0
    SUB ESP,0x4                         ; 004c7cf3
    FSTP float ptr [ESP]                ; 004c7cf6
    PUSH dword ptr [EBX + 0x28]         ; 004c7cf9
    MOV EAX,[0x00603b28]                ; 004c7cfc | g_CDemonSetPtr
    PUSH dword ptr [EBX + 0x20]         ; 004c7d01
    PUSH EAX                            ; 004c7d04 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_0053de10 ; 004c7d05
        ;   XREF to: 0053de10 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053de10()
    MOV EDX,dword ptr [0x00603b28]      ; 004c7d0a | g_CDemonSetPtr
    MOV dword ptr [EBP + 0x76],EAX      ; 004c7d10
    ADD ESP,0x20                        ; 004c7d13
    FLD float ptr [EBP + 0x76]          ; 004c7d16
    PUSH EDX                            ; 004c7d19 | g_CDemonSetInstance
    FSTP float ptr [EBP + 0x5a]         ; 004c7d1a
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 004c7d1d
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    FLD float ptr [EBP + 0x5a]          ; 004c7d22
    FLD1                                ; 004c7d25
    ADD ESP,0x4                         ; 004c7d27
    FCOMPP                              ; 004c7d2a
    FNSTSW AX                           ; 004c7d2c
    SAHF                                ; 004c7d2e
    JBE 0x004c7e4e                      ; 004c7d2f
        ;   XREF to: 004c7e4e (CONDITIONAL_JUMP)  ; LAB_004c7e4e
    CMP ESI,0x4                         ; 004c7d35
        ;   Label: LAB_004c7d35
    JGE 0x004c7e5d                      ; 004c7d38
        ;   XREF to: 004c7e5d (CONDITIONAL_JUMP)  ; LAB_004c7e5d
    MOV dword ptr [EBX + 0xd060],0x3    ; 004c7d3e
    MOV dword ptr [EBX + 0xcde4],0x0    ; 004c7d48
    JMP 0x004c7a82                      ; 004c7d52
        ;   XREF to: 004c7a82 (UNCONDITIONAL_JUMP)  ; caseD_10
    PUSH dword ptr [EBP + 0x92]         ; 004c7d57
        ;   Label: LAB_004c7d57
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c7d5d
    PUSH EBX                            ; 004c7d63
    CALL dword ptr [EAX + 0x144]        ; 004c7d64
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004c7d6a
    ADD ESP,0x8                         ; 004c7d70
    TEST EAX,EAX                        ; 004c7d73
    JZ 0x004c7e2b                       ; 004c7d75
        ;   XREF to: 004c7e2b (CONDITIONAL_JUMP)  ; LAB_004c7e2b
    LEA EDX,[EBX + 0x20]                ; 004c7d7b
    LEA EDI,[EBP + 0xfffffe96]          ; 004c7d7e
    LEA ESI,[EBP + 0xfffffdb2]          ; 004c7d84
    FLD float ptr [EDX + 0x4]           ; 004c7d8a
    FLD float ptr [EDX + 0x8]           ; 004c7d8d
    FLD float ptr [EDX]                 ; 004c7d90
    LEA EDX,[EBP + 0xfffffd22]          ; 004c7d92
    FSUB float ptr [EAX + 0x20]         ; 004c7d98
    FXCH ST2                            ; 004c7d9b
    FSUB float ptr [EAX + 0x24]         ; 004c7d9d
    FXCH                                ; 004c7da0
    FSUB float ptr [EAX + 0x28]         ; 004c7da2
    FXCH ST2                            ; 004c7da5
    FSTP float ptr [EBP + 0xfffffdb2]   ; 004c7da7
    FSTP float ptr [EBP + 0xfffffdb6]   ; 004c7dad
    FSTP float ptr [EBP + 0xfffffdba]   ; 004c7db3
    LEA EAX,[EBP + 0xfffffe96]          ; 004c7db9
    MOVSD ES:EDI,ESI                    ; 004c7dbf
    MOVSD ES:EDI,ESI                    ; 004c7dc0
    MOVSD ES:EDI,ESI                    ; 004c7dc1
    CMP EDX,EAX                         ; 004c7dc2
    JZ 0x004c7dea                       ; 004c7dc4
        ;   XREF to: 004c7dea (CONDITIONAL_JUMP)  ; LAB_004c7dea
    MOV EAX,dword ptr [EBP + 0xfffffe96] ; 004c7dc6
    MOV dword ptr [EBP + 0xfffffd22],EAX ; 004c7dcc
    MOV EAX,dword ptr [EBP + 0xfffffe9a] ; 004c7dd2
    MOV dword ptr [EBP + 0xfffffd26],EAX ; 004c7dd8
    MOV EAX,dword ptr [EBP + 0xfffffe9e] ; 004c7dde
    MOV dword ptr [EBP + 0xfffffd2a],EAX ; 004c7de4
    FLD float ptr [EBP + 0xfffffd26]    ; 004c7dea
        ;   Label: LAB_004c7dea
    FMUL ST0                            ; 004c7df0
    FLD float ptr [EBP + 0xfffffd22]    ; 004c7df2
    FMUL ST0                            ; 004c7df8
    FADDP                               ; 004c7dfa
    FLD float ptr [EBP + 0xfffffd2a]    ; 004c7dfc
    FMUL ST0                            ; 004c7e02
    FADDP                               ; 004c7e04
    FSTP float ptr [EBP + 0x12]         ; 004c7e06
    MOV EAX,dword ptr [EBP + 0x12]      ; 004c7e09
    MOV EDX,dword ptr [0x01d1a0a4]      ; 004c7e0c | DAT_01d1a0a4
    SAR EAX,0x1                         ; 004c7e12
    ADD EAX,EDX                         ; 004c7e14
    MOV dword ptr [EBP + 0x16],EAX      ; 004c7e16
    FLD float ptr [EBP + 0x16]          ; 004c7e19
    FCOMP double ptr [0x005c42b5]       ; 004c7e1c | DAT_005c42b5
    FNSTSW AX                           ; 004c7e22
    SAHF                                ; 004c7e24
    JC 0x004c7c47                       ; 004c7e25
        ;   XREF to: 004c7c47 (CONDITIONAL_JUMP)  ; LAB_004c7c47
    CMP dword ptr [EBP + 0x32],0x0      ; 004c7e2b
        ;   Label: LAB_004c7e2b
    JNZ 0x004c7c47                      ; 004c7e2f
        ;   XREF to: 004c7c47 (CONDITIONAL_JUMP)  ; LAB_004c7c47
    JMP 0x004c7a82                      ; 004c7e35
        ;   XREF to: 004c7a82 (UNCONDITIONAL_JUMP)  ; caseD_10
    FLD float ptr [EBX + 0x327c]        ; 004c7e3a
        ;   Label: LAB_004c7e3a
    FADD double ptr [0x005c42d5]        ; 004c7e40 | DAT_005c42d5
    FSTP float ptr [EBP + 0x6a]         ; 004c7e46
    JMP 0x004c7c79                      ; 004c7e49
        ;   XREF to: 004c7c79 (UNCONDITIONAL_JUMP)  ; LAB_004c7c79
    INC ESI                             ; 004c7e4e
        ;   Label: LAB_004c7e4e
    CMP ESI,0x4                         ; 004c7e4f
    JL 0x004c7c7b                       ; 004c7e52
        ;   XREF to: 004c7c7b (CONDITIONAL_JUMP)  ; LAB_004c7c7b
    JMP 0x004c7d35                      ; 004c7e58
        ;   XREF to: 004c7d35 (UNCONDITIONAL_JUMP)  ; LAB_004c7d35
    MOV EAX,dword ptr [EBX + 0xd070]    ; 004c7e5d
        ;   Label: LAB_004c7e5d
    INC EAX                             ; 004c7e63
    MOV dword ptr [EBP + 0x76],EAX      ; 004c7e64
    FILD dword ptr [EBP + 0x76]         ; 004c7e67
    FMUL double ptr [0x005c432d]        ; 004c7e6a | DAT_005c432d
    SUB ESP,0x4                         ; 004c7e70
    FSTP float ptr [ESP]                ; 004c7e73
    PUSH 0x41200000                     ; 004c7e76
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004c7e7b
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    ADD ESP,0x8                         ; 004c7e80
    PUSH 0x1                            ; 004c7e83
    MOV dword ptr [EBP + 0x76],EAX      ; 004c7e85
    LEA EAX,[EBX + 0x158]               ; 004c7e88
    PUSH 0x10                           ; 004c7e8e
    FLD float ptr [EBP + 0x76]          ; 004c7e90
    PUSH EAX                            ; 004c7e93
    FSTP float ptr [EBX + 0x2538]       ; 004c7e94
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c7e9a
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c7e9f
    JMP 0x004c7a82                      ; 004c7ea2
        ;   XREF to: 004c7a82 (UNCONDITIONAL_JUMP)  ; caseD_10
    FLD float ptr [EBX + 0xd0b0]        ; 004c7ea7
        ;   Label: caseD_0
    FLDZ                                ; 004c7ead
    FCOMPP                              ; 004c7eaf
    FNSTSW AX                           ; 004c7eb1
    SAHF                                ; 004c7eb3
    JNC 0x004c7ecd                      ; 004c7eb4
        ;   XREF to: 004c7ecd (CONDITIONAL_JUMP)  ; LAB_004c7ecd
    FLD float ptr [EBX + 0xd0b0]        ; 004c7eb6
    FSUB float ptr [EBP + 0x92]         ; 004c7ebc
    FSTP float ptr [EBX + 0xd0b0]       ; 004c7ec2
    JMP 0x004c7a82                      ; 004c7ec8
        ;   XREF to: 004c7a82 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV EAX,dword ptr [EBX + 0xd0b4]    ; 004c7ecd
        ;   Label: LAB_004c7ecd
    TEST EAX,EAX                        ; 004c7ed3
    JZ 0x004c7fc3                       ; 004c7ed5
        ;   XREF to: 004c7fc3 (CONDITIONAL_JUMP)  ; LAB_004c7fc3
    LEA EDX,[EAX + 0x20]                ; 004c7edb
    LEA EDI,[EBP + 0xfffffd3a]          ; 004c7ede
    LEA ESI,[EBP + 0xfffffe5a]          ; 004c7ee4
    FLD float ptr [EDX]                 ; 004c7eea
    FLD float ptr [EDX + 0x4]           ; 004c7eec
    LEA EAX,[EBX + 0x20]                ; 004c7eef
    FLD float ptr [EDX + 0x8]           ; 004c7ef2
    FXCH ST2                            ; 004c7ef5
    FSUB float ptr [EAX]                ; 004c7ef7
    FXCH                                ; 004c7ef9
    FSUB float ptr [EAX + 0x4]          ; 004c7efb
    FXCH ST2                            ; 004c7efe
    FSUB float ptr [EAX + 0x8]          ; 004c7f00
    FXCH                                ; 004c7f03
    FSTP float ptr [EBP + 0xfffffe5a]   ; 004c7f05
    FXCH                                ; 004c7f0b
    FSTP float ptr [EBP + 0xfffffe5e]   ; 004c7f0d
    FSTP float ptr [EBP + 0xfffffe62]   ; 004c7f13
    MOVSD ES:EDI,ESI                    ; 004c7f19
    MOVSD ES:EDI,ESI                    ; 004c7f1a
    MOVSD ES:EDI,ESI                    ; 004c7f1b
    LEA EDI,[EBP + 0xfffffd46]          ; 004c7f1c
    LEA ESI,[EBP + 0xfffffd3a]          ; 004c7f22
    LEA EAX,[EBP + 0xfffffd46]          ; 004c7f28
    MOVSD ES:EDI,ESI                    ; 004c7f2e
    MOVSD ES:EDI,ESI                    ; 004c7f2f
    MOVSD ES:EDI,ESI                    ; 004c7f30
    FLD float ptr [EAX + 0x4]           ; 004c7f31
    FMUL ST0                            ; 004c7f34
    FLD float ptr [EAX]                 ; 004c7f36
    FMUL ST0                            ; 004c7f38
    FADDP                               ; 004c7f3a
    FLD float ptr [EAX + 0x8]           ; 004c7f3c
    FMUL ST0                            ; 004c7f3f
    FADDP                               ; 004c7f41
    LEA EAX,[EBP + -0x6]                ; 004c7f43
    FSTP float ptr [EBP + -0x6]         ; 004c7f46
    FLD float ptr [EAX]                 ; 004c7f49
    FSQRT                               ; 004c7f4b
    FCOMP double ptr [0x005c42bd]       ; 004c7f4d | DAT_005c42bd
    FNSTSW AX                           ; 004c7f53
    SAHF                                ; 004c7f55
    JNC 0x004c7a82                      ; 004c7f56
        ;   XREF to: 004c7a82 (CONDITIONAL_JUMP)  ; caseD_10
    FLD float ptr [EBX + 0x2538]        ; 004c7f5c
    FLD float ptr [EBP + 0x92]          ; 004c7f62
    FLD float ptr [EBX + 0xd0b8]        ; 004c7f68
    FSUB ST0,ST1                        ; 004c7f6e
    FXCH ST2                            ; 004c7f70
    FADDP                               ; 004c7f72
    FXCH                                ; 004c7f74
    FSTP float ptr [EBX + 0xd0b8]       ; 004c7f76
    FST float ptr [EBX + 0x2538]        ; 004c7f7c
    FCOMP double ptr [0x005c42fd]       ; 004c7f82 | DAT_005c42fd
    FNSTSW AX                           ; 004c7f88
    SAHF                                ; 004c7f8a
    JBE 0x004c7f97                      ; 004c7f8b
        ;   XREF to: 004c7f97 (CONDITIONAL_JUMP)  ; LAB_004c7f97
    MOV dword ptr [EBX + 0x2538],0x42c80000 ; 004c7f8d
    FLD float ptr [EBX + 0xd0b8]        ; 004c7f97
        ;   Label: LAB_004c7f97
    FLDZ                                ; 004c7f9d
    FCOMPP                              ; 004c7f9f
    FNSTSW AX                           ; 004c7fa1
    SAHF                                ; 004c7fa3
    JBE 0x004c7a82                      ; 004c7fa4
        ;   XREF to: 004c7a82 (CONDITIONAL_JUMP)  ; caseD_10
    MOV dword ptr [EBX + 0xd0b8],0x0    ; 004c7faa
    MOV dword ptr [EBX + 0xd0b4],0x0    ; 004c7fb4
    JMP 0x004c7a82                      ; 004c7fbe
        ;   XREF to: 004c7a82 (UNCONDITIONAL_JUMP)  ; caseD_10
    PUSH dword ptr [EBP + 0x92]         ; 004c7fc3
        ;   Label: LAB_004c7fc3
    PUSH EBX                            ; 004c7fc9
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0 ; 004c7fca
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004c7fcf
    TEST EAX,EAX                        ; 004c7fd2
    JZ 0x004c7fee                       ; 004c7fd4
        ;   XREF to: 004c7fee (CONDITIONAL_JUMP)  ; LAB_004c7fee
    PUSH 0x1                            ; 004c7fd6
        ;   Label: LAB_004c7fd6
    PUSH 0x1                            ; 004c7fd8
    LEA EAX,[EBX + 0x158]               ; 004c7fda
    PUSH EAX                            ; 004c7fe0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c7fe1
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c7fe6
    JMP 0x004c7a82                      ; 004c7fe9
        ;   XREF to: 004c7a82 (UNCONDITIONAL_JUMP)  ; caseD_10
    PUSH dword ptr [EBP + 0x92]         ; 004c7fee
        ;   Label: LAB_004c7fee
    MOV EDX,dword ptr [EBX + 0x154]     ; 004c7ff4
    PUSH EBX                            ; 004c7ffa
    CALL dword ptr [EDX + 0x144]        ; 004c7ffb
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 004c8001
    ADD ESP,0x8                         ; 004c8007
    TEST EDX,EDX                        ; 004c800a
    JZ 0x004c7a82                       ; 004c800c
        ;   XREF to: 004c7a82 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x1                            ; 004c8012
    PUSH 0x1                            ; 004c8014
    LEA EAX,[EBX + 0x158]               ; 004c8016
    PUSH EAX                            ; 004c801c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c801d
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c8022
    MOV ECX,dword ptr [EBX + 0xd0a4]    ; 004c8025
    PUSH ECX                            ; 004c802b
    CALL sound_sndmain.cpp_FUN_00556700 ; 004c802c
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 004c8031
    TEST EAX,EAX                        ; 004c8034
    JZ 0x004c804f                       ; 004c8036
        ;   XREF to: 004c804f (CONDITIONAL_JUMP)  ; LAB_004c804f
    MOV ESI,dword ptr [EBX + 0xd0a8]    ; 004c8038
    PUSH ESI                            ; 004c803e
    CALL sound_sndmain.cpp_FUN_00556700 ; 004c803f
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 004c8044
    TEST EAX,EAX                        ; 004c8047
    JNZ 0x004c7a82                      ; 004c8049
        ;   XREF to: 004c7a82 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x5c4247                       ; 004c804f | = "ghoul-alert-?.wav"
        ;   Label: LAB_004c804f
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c8054
    PUSH EBX                            ; 004c805a
    CALL dword ptr [EAX + 0x2c]         ; 004c805b
    ADD ESP,0x8                         ; 004c805e
    MOV dword ptr [EBX + 0xd0a4],EAX    ; 004c8061
    JMP 0x004c7a82                      ; 004c8067
        ;   XREF to: 004c7a82 (UNCONDITIONAL_JUMP)  ; caseD_10
    CMP dword ptr [EBX + 0xd0bc],0x0    ; 004c806c
        ;   Label: caseD_1
    JZ 0x004c808f                       ; 004c8073
        ;   XREF to: 004c808f (CONDITIONAL_JUMP)  ; LAB_004c808f
    MOV EDI,dword ptr [EBP + 0x56]      ; 004c8075
    CMP EDI,0x1                         ; 004c8078
    JNZ 0x004c808f                      ; 004c807b
        ;   XREF to: 004c808f (CONDITIONAL_JUMP)  ; LAB_004c808f
    PUSH EDI                            ; 004c807d
    PUSH 0x11                           ; 004c807e
    LEA EAX,[EBX + 0x158]               ; 004c8080
    PUSH EAX                            ; 004c8086
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c8087
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c808c
    FLD float ptr [EBX + 0xd0b0]        ; 004c808f
        ;   Label: LAB_004c808f
    FLDZ                                ; 004c8095
    FCOMPP                              ; 004c8097
    FNSTSW AX                           ; 004c8099
    SAHF                                ; 004c809b
    JC 0x004c8243                       ; 004c809c
        ;   XREF to: 004c8243 (CONDITIONAL_JUMP)  ; LAB_004c8243
    LEA EAX,[EBX + 0x249c]              ; 004c80a2
    MOV dword ptr [EAX + 0x8],0x0       ; 004c80a8
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c80af
    MOV dword ptr [EAX + 0x4],EDX       ; 004c80b2
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c80b5
    MOV dword ptr [EAX],EDX             ; 004c80b8
    XOR EAX,EAX                         ; 004c80ba
    MOV dword ptr [EBP + 0x66],EAX      ; 004c80bc
    MOV EAX,dword ptr [EBX + 0xd07c]    ; 004c80bf
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 004c80c5
    JZ 0x004c80d6                       ; 004c80cd
        ;   XREF to: 004c80d6 (CONDITIONAL_JUMP)  ; LAB_004c80d6
    MOV dword ptr [EBP + 0x66],0x1      ; 004c80cf
    MOV EAX,dword ptr [EBX + 0xd084]    ; 004c80d6
        ;   Label: LAB_004c80d6
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 004c80dc
    JZ 0x004c80e9                       ; 004c80e4
        ;   XREF to: 004c80e9 (CONDITIONAL_JUMP)  ; LAB_004c80e9
    INC dword ptr [EBP + 0x66]          ; 004c80e6
    MOV EAX,[0x01d5ba14]                ; 004c80e9 | DAT_01d5ba14
        ;   Label: LAB_004c80e9
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c80ee
    PUSH EAX                            ; 004c80f5
    MOV EDX,dword ptr [EAX + 0x154]     ; 004c80f6
    CALL dword ptr [EDX + 0x10c]        ; 004c80fc
    ADD ESP,0x4                         ; 004c8102
    TEST EAX,EAX                        ; 004c8105
    JNZ 0x004c84b0                      ; 004c8107
        ;   XREF to: 004c84b0 (CONDITIONAL_JUMP)  ; LAB_004c84b0
    PUSH dword ptr [EBP + 0x92]         ; 004c810d
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c8113
    PUSH EBX                            ; 004c8119
    CALL dword ptr [EAX + 0x144]        ; 004c811a
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 004c8120
    ADD ESP,0x8                         ; 004c8126
    TEST EDX,EDX                        ; 004c8129
    JZ 0x004c826d                       ; 004c812b
        ;   XREF to: 004c826d (CONDITIONAL_JUMP)  ; LAB_004c826d
    FLD float ptr [EDX + 0x20]          ; 004c8131
    FLD float ptr [EDX + 0x24]          ; 004c8134
    FLD float ptr [EDX + 0x28]          ; 004c8137
    LEA EAX,[EBX + 0x20]                ; 004c813a
    LEA EDI,[EBP + 0xfffffd82]          ; 004c813d
    LEA ESI,[EBP + 0xfffffe42]          ; 004c8143
    FXCH ST2                            ; 004c8149
    FSUB float ptr [EAX]                ; 004c814b
    FXCH                                ; 004c814d
    FSUB float ptr [EAX + 0x4]          ; 004c814f
    FXCH ST2                            ; 004c8152
    FSUB float ptr [EAX + 0x8]          ; 004c8154
    FXCH                                ; 004c8157
    FSTP float ptr [EBP + 0xfffffe42]   ; 004c8159
    FXCH                                ; 004c815f
    FSTP float ptr [EBP + 0xfffffe46]   ; 004c8161
    FSTP float ptr [EBP + 0xfffffe4a]   ; 004c8167
    MOVSD ES:EDI,ESI                    ; 004c816d
    MOVSD ES:EDI,ESI                    ; 004c816e
    MOVSD ES:EDI,ESI                    ; 004c816f
    XOR ECX,ECX                         ; 004c8170
    FLD float ptr [EBX + 0x2538]        ; 004c8172
    MOV dword ptr [EBP + 0xfffffd86],ECX ; 004c8178
    FCOMP double ptr [0x005c42e5]       ; 004c817e | DAT_005c42e5
    FNSTSW AX                           ; 004c8184
    SAHF                                ; 004c8186
    JNC 0x004c81a7                      ; 004c8187
        ;   XREF to: 004c81a7 (CONDITIONAL_JUMP)  ; LAB_004c81a7
    CMP dword ptr [EBP + 0x66],0x0      ; 004c8189
    JLE 0x004c81a7                      ; 004c818d
        ;   XREF to: 004c81a7 (CONDITIONAL_JUMP)  ; LAB_004c81a7
    CMP dword ptr [EBX + 0xd0b4],0x0    ; 004c818f
    JNZ 0x004c81a7                      ; 004c8196
        ;   XREF to: 004c81a7 (CONDITIONAL_JUMP)  ; LAB_004c81a7
    PUSH dword ptr [EBP + 0x92]         ; 004c8198
    PUSH EBX                            ; 004c819e
    CALL core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004c6c80 ; 004c819f
        ;   XREF to: 004c6c80 (UNCONDITIONAL_CALL)  ; void core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004c6c80(CGhoul * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004c81a4
    MOV EAX,dword ptr [EBX + 0xd0b4]    ; 004c81a7
        ;   Label: LAB_004c81a7
    LEA ESI,[EBX + 0x158]               ; 004c81ad
    TEST EAX,EAX                        ; 004c81b3
    JZ 0x004c82b4                       ; 004c81b5
        ;   XREF to: 004c82b4 (CONDITIONAL_JUMP)  ; LAB_004c82b4
    PUSH 0x0                            ; 004c81bb
    PUSH 0x40400000                     ; 004c81bd
    PUSH 0x2cfd900                      ; 004c81c2 | DAT_02cfd900
    MOV EDX,dword ptr [EAX + 0x154]     ; 004c81c7
    PUSH EAX                            ; 004c81cd
    CALL dword ptr [EDX + 0xc4]         ; 004c81ce
    ADD ESP,0x4                         ; 004c81d4
    PUSH EAX                            ; 004c81d7
    MOV EAX,dword ptr [EBX + 0xd0b4]    ; 004c81d8
    ADD EAX,0x20                        ; 004c81de
    PUSH EAX                            ; 004c81e1
    PUSH EBX                            ; 004c81e2
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 004c81e3
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004c81e8
    MOV EDI,EAX                         ; 004c81eb
    TEST EAX,EAX                        ; 004c81ed
    JLE 0x004c821c                      ; 004c81ef
        ;   XREF to: 004c821c (CONDITIONAL_JUMP)  ; LAB_004c821c
    PUSH 0x1                            ; 004c81f1
    PUSH 0x0                            ; 004c81f3
    PUSH ESI                            ; 004c81f5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c81f6
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c81fb
    PUSH 0x41f00000                     ; 004c81fe
    PUSH 0x41200000                     ; 004c8203
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004c8208
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c820d
    ADD ESP,0x8                         ; 004c8210
    MOV EAX,dword ptr [EBP + 0x76]      ; 004c8213
    MOV dword ptr [EBX + 0xd0b8],EAX    ; 004c8216
    TEST EDI,EDI                        ; 004c821c
        ;   Label: LAB_004c821c
    JL 0x004c829b                       ; 004c821e
        ;   XREF to: 004c829b (CONDITIONAL_JUMP)  ; LAB_004c829b
    MOV EDI,dword ptr [EBP + 0x56]      ; 004c8220
        ;   Label: LAB_004c8220
    CMP EDI,0x1                         ; 004c8223
    JNZ 0x004c7a82                      ; 004c8226
        ;   XREF to: 004c7a82 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH EDI                            ; 004c822c
    PUSH 0x11                           ; 004c822d
    LEA EAX,[EBX + 0x158]               ; 004c822f
    PUSH EAX                            ; 004c8235
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c8236
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c823b
    JMP 0x004c7a82                      ; 004c823e
        ;   XREF to: 004c7a82 (UNCONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x1                            ; 004c8243
        ;   Label: LAB_004c8243
    FLD float ptr [EBX + 0xd0b0]        ; 004c8245
    LEA EAX,[EBX + 0x158]               ; 004c824b
    PUSH 0x0                            ; 004c8251
    FSUB float ptr [EBP + 0x92]         ; 004c8253
    PUSH EAX                            ; 004c8259
    FSTP float ptr [EBX + 0xd0b0]       ; 004c825a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c8260
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c8265
    JMP 0x004c7a82                      ; 004c8268
        ;   XREF to: 004c7a82 (UNCONDITIONAL_JUMP)  ; caseD_10
    PUSH dword ptr [EBP + 0x92]         ; 004c826d
        ;   Label: LAB_004c826d
    PUSH EBX                            ; 004c8273
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0 ; 004c8274
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004c8279
    TEST EAX,EAX                        ; 004c827c
    JNZ 0x004c7a82                      ; 004c827e
        ;   XREF to: 004c7a82 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x1                            ; 004c8284
    PUSH EAX                            ; 004c8286
    LEA EAX,[EBX + 0x158]               ; 004c8287
    PUSH EAX                            ; 004c828d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c828e
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c8293
    JMP 0x004c7a82                      ; 004c8296
        ;   XREF to: 004c7a82 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV dword ptr [EBX + 0xd0b8],0x41f00000 ; 004c829b
        ;   Label: LAB_004c829b
    MOV dword ptr [EBX + 0xd0b4],0x0    ; 004c82a5
    JMP 0x004c8220                      ; 004c82af
        ;   XREF to: 004c8220 (UNCONDITIONAL_JUMP)  ; LAB_004c8220
    PUSH 0x3e32b8c2                     ; 004c82b4
        ;   Label: LAB_004c82b4
    PUSH 0x3f800000                     ; 004c82b9
    MOV EAX,[0x005e0a28]                ; 004c82be | DAT_005e0a28
    XOR EDX,EDX                         ; 004c82c3
    MOV dword ptr [EBP + 0xffffff26],EDX ; 004c82c5
    MOV dword ptr [EBP + 0xffffff2e],EAX ; 004c82cb
    LEA EAX,[EBP + 0xffffff26]          ; 004c82d1
    MOV dword ptr [EBP + 0xffffff2a],EDX ; 004c82d7
    PUSH EAX                            ; 004c82dd
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004c82de
    PUSH EAX                            ; 004c82e4
    MOV EDX,dword ptr [EAX + 0x154]     ; 004c82e5
    CALL dword ptr [EDX + 0xc4]         ; 004c82eb
    ADD ESP,0x4                         ; 004c82f1
    PUSH EAX                            ; 004c82f4
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004c82f5
    ADD EAX,0x20                        ; 004c82fb
    PUSH EAX                            ; 004c82fe
    PUSH EBX                            ; 004c82ff
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 004c8300
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004c8305
    TEST EAX,EAX                        ; 004c8308
    JL 0x004c8487                       ; 004c830a
        ;   XREF to: 004c8487 (CONDITIONAL_JUMP)  ; LAB_004c8487
    JLE 0x004c7a82                      ; 004c8310
        ;   XREF to: 004c7a82 (CONDITIONAL_JUMP)  ; caseD_10
    CMP dword ptr [EBP + 0x66],0x0      ; 004c8316
    JLE 0x004c7a82                      ; 004c831a
        ;   XREF to: 004c7a82 (CONDITIONAL_JUMP)  ; caseD_10
    FLD float ptr [EBX + 0xcde0]        ; 004c8320
    FLDZ                                ; 004c8326
    FCOMPP                              ; 004c8328
    FNSTSW AX                           ; 004c832a
    SAHF                                ; 004c832c
    JC 0x004c7a82                       ; 004c832d
        ;   XREF to: 004c7a82 (CONDITIONAL_JUMP)  ; caseD_10
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004c8333
    PUSH EAX                            ; 004c8339
    MOV EDX,dword ptr [EAX + 0x154]     ; 004c833a
    CALL dword ptr [EDX + 0xf4]         ; 004c8340
    ADD ESP,0x4                         ; 004c8346
    TEST EAX,EAX                        ; 004c8349
    JNZ 0x004c7a82                      ; 004c834b
        ;   XREF to: 004c7a82 (CONDITIONAL_JUMP)  ; caseD_10
    FLD float ptr [EBX + 0xd068]        ; 004c8351
    FLDZ                                ; 004c8357
    FCOMPP                              ; 004c8359
    FNSTSW AX                           ; 004c835b
    SAHF                                ; 004c835d
    JC 0x004c7a82                       ; 004c835e
        ;   XREF to: 004c7a82 (CONDITIONAL_JUMP)  ; caseD_10
    FLD float ptr [EBP + 0xfffffd86]    ; 004c8364
    FMUL ST0                            ; 004c836a
    FLD float ptr [EBP + 0xfffffd82]    ; 004c836c
    FMUL ST0                            ; 004c8372
    FADDP                               ; 004c8374
    FLD float ptr [EBP + 0xfffffd8a]    ; 004c8376
    FMUL ST0                            ; 004c837c
    FADDP                               ; 004c837e
    FSQRT                               ; 004c8380
    FSTP float ptr [EBP + 0x46]         ; 004c8382
    MOV EAX,dword ptr [EBP + 0x46]      ; 004c8385
    XOR EDI,EDI                         ; 004c8388
    MOV dword ptr [EBP + 0x4e],EAX      ; 004c838a
    MOV EAX,dword ptr [EBX + 0xd084]    ; 004c838d
    MOV dword ptr [EBP + 0x5e],EDI      ; 004c8393
    MOV dword ptr [EBP + 0x4a],EDI      ; 004c8396
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004c8399
    MOV dword ptr [EBP + 0x42],EDI      ; 004c83a0
    TEST ECX,ECX                        ; 004c83a3
    JZ 0x004c83c3                       ; 004c83a5
        ;   XREF to: 004c83c3 (CONDITIONAL_JUMP)  ; LAB_004c83c3
    FLD float ptr [0x005e0a2c]          ; 004c83a7 | DAT_005e0a2c
    FLD float ptr [EBP + 0x46]          ; 004c83ad
    FSUB ST0,ST1                        ; 004c83b0
    FABS                                ; 004c83b2
    FDIVRP                              ; 004c83b4
    FLD1                                ; 004c83b6
    FSUBRP                              ; 004c83b8
    FMUL double ptr [0x005c42ed]        ; 004c83ba | DAT_005c42ed
    FSTP float ptr [EBP + 0x5e]         ; 004c83c0
    MOV EAX,dword ptr [EBX + 0xd07c]    ; 004c83c3
        ;   Label: LAB_004c83c3
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 004c83c9
    JZ 0x004c83ef                       ; 004c83d1
        ;   XREF to: 004c83ef (CONDITIONAL_JUMP)  ; LAB_004c83ef
    FLD float ptr [0x005e0a30]          ; 004c83d3 | DAT_005e0a30
    FLD float ptr [EBP + 0x4e]          ; 004c83d9
    FSUB ST0,ST1                        ; 004c83dc
    FABS                                ; 004c83de
    FDIVRP                              ; 004c83e0
    FLD1                                ; 004c83e2
    FSUBRP                              ; 004c83e4
    FMUL double ptr [0x005c42f5]        ; 004c83e6 | DAT_005c42f5
    FSTP float ptr [EBP + 0x4a]         ; 004c83ec
    PUSH 0x0                            ; 004c83ef
        ;   Label: LAB_004c83ef
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004c83f1
    PUSH EBX                            ; 004c83f7
    MOV EDX,dword ptr [EAX + 0x154]     ; 004c83f8
    PUSH EAX                            ; 004c83fe
    CALL dword ptr [EDX + 0xe8]         ; 004c83ff
    ADD ESP,0xc                         ; 004c8405
    TEST EAX,EAX                        ; 004c8408
    JZ 0x004c8428                       ; 004c840a
        ;   XREF to: 004c8428 (CONDITIONAL_JUMP)  ; LAB_004c8428
    FLD float ptr [0x005e0a28]          ; 004c840c | DAT_005e0a28
    FLD float ptr [EBP + 0x4e]          ; 004c8412
    FSUB ST0,ST1                        ; 004c8415
    FABS                                ; 004c8417
    FDIVRP                              ; 004c8419
    FLD1                                ; 004c841b
    FSUBRP                              ; 004c841d
    FMUL double ptr [0x005c42ed]        ; 004c841f | DAT_005c42ed
    FSTP float ptr [EBP + 0x42]         ; 004c8425
    FLD float ptr [EBP + 0x5e]          ; 004c8428
        ;   Label: LAB_004c8428
    FADD float ptr [EBP + 0x4a]         ; 004c842b
    FST float ptr [EBP + 0x3e]          ; 004c842e
    FADD float ptr [EBP + 0x42]         ; 004c8431
    FST float ptr [EBP + 0x36]          ; 004c8434
    FLDZ                                ; 004c8437
    FCOMPP                              ; 004c8439
    FNSTSW AX                           ; 004c843b
    SAHF                                ; 004c843d
    JNC 0x004c7a82                      ; 004c843e
        ;   XREF to: 004c7a82 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH dword ptr [EBP + 0x36]         ; 004c8444
    PUSH 0x0                            ; 004c8447
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004c8449
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c844e
    LEA EDX,[EBX + 0x158]               ; 004c8451
    ADD ESP,0x8                         ; 004c8457
    MOV EAX,dword ptr [EBP + 0x76]      ; 004c845a
    MOV dword ptr [EBP + 0x3a],EAX      ; 004c845d
    FLD float ptr [EBP + 0x3a]          ; 004c8460
    FCOMP float ptr [EBP + 0x5e]        ; 004c8463
    FNSTSW AX                           ; 004c8466
    SAHF                                ; 004c8468
    JNC 0x004c8499                      ; 004c8469
        ;   XREF to: 004c8499 (CONDITIONAL_JUMP)  ; LAB_004c8499
    PUSH 0x1                            ; 004c846b
    PUSH 0x2                            ; 004c846d
    PUSH EDX                            ; 004c846f
        ;   Label: LAB_004c846f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c8470
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c8475
    MOV dword ptr [EBX + 0xcde0],0x3f333333 ; 004c8478
    JMP 0x004c7a82                      ; 004c8482
        ;   XREF to: 004c7a82 (UNCONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x1                            ; 004c8487
        ;   Label: LAB_004c8487
    PUSH 0x0                            ; 004c8489
    PUSH ESI                            ; 004c848b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c848c
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c8491
    JMP 0x004c7a82                      ; 004c8494
        ;   XREF to: 004c7a82 (UNCONDITIONAL_JUMP)  ; caseD_10
    FLD float ptr [EBP + 0x3a]          ; 004c8499
        ;   Label: LAB_004c8499
    FCOMP float ptr [EBP + 0x3e]        ; 004c849c
    FNSTSW AX                           ; 004c849f
    SAHF                                ; 004c84a1
    JNC 0x004c84aa                      ; 004c84a2
        ;   XREF to: 004c84aa (CONDITIONAL_JUMP)  ; LAB_004c84aa
    PUSH 0x1                            ; 004c84a4
    PUSH 0xc                            ; 004c84a6
    JMP 0x004c846f                      ; 004c84a8
        ;   XREF to: 004c846f (UNCONDITIONAL_JUMP)  ; LAB_004c846f
    PUSH 0x1                            ; 004c84aa
        ;   Label: LAB_004c84aa
    PUSH 0xb                            ; 004c84ac
    JMP 0x004c846f                      ; 004c84ae
        ;   XREF to: 004c846f (UNCONDITIONAL_JUMP)  ; LAB_004c846f
    CMP dword ptr [EBX + 0xd064],0x0    ; 004c84b0
        ;   Label: LAB_004c84b0
    JL 0x004c8620                       ; 004c84b7
        ;   XREF to: 004c8620 (CONDITIONAL_JUMP)  ; LAB_004c8620
    MOV EDI,dword ptr [EBX + 0xd064]    ; 004c84bd
        ;   Label: LAB_004c84bd
    TEST EDI,EDI                        ; 004c84c3
    JZ 0x004c8653                       ; 004c84c5
        ;   XREF to: 004c8653 (CONDITIONAL_JUMP)  ; LAB_004c8653
    MOV EAX,[0x005e0a34]                ; 004c84cb | DAT_005e0a34
    MOV dword ptr [EBP + 0x52],EAX      ; 004c84d0
    CMP EDI,0xe                         ; 004c84d3
    JNZ 0x004c84e0                      ; 004c84d6
        ;   XREF to: 004c84e0 (CONDITIONAL_JUMP)  ; LAB_004c84e0
    MOV EAX,[0x005e0a38]                ; 004c84d8 | DAT_005e0a38
    MOV dword ptr [EBP + 0x52],EAX      ; 004c84dd
    PUSH 0x3db2b8c2                     ; 004c84e0
        ;   Label: LAB_004c84e0
    MOV EAX,dword ptr [EBP + 0x52]      ; 004c84e5
    PUSH 0x3f000000                     ; 004c84e8
    MOV dword ptr [EBP + 0xfffffdf6],EAX ; 004c84ed
    LEA EAX,[EBP + 0xfffffdee]          ; 004c84f3
    XOR EDX,EDX                         ; 004c84f9
    PUSH EAX                            ; 004c84fb
    MOV EAX,[0x01d5ba14]                ; 004c84fc | DAT_01d5ba14
    MOV dword ptr [EBP + 0xfffffdee],EDX ; 004c8501
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c8507
    MOV dword ptr [EBP + 0xfffffdf2],EDX ; 004c850e
    PUSH EAX                            ; 004c8514
    MOV EDX,dword ptr [EAX + 0x154]     ; 004c8515
    CALL dword ptr [EDX + 0xc4]         ; 004c851b
    ADD ESP,0x4                         ; 004c8521
    PUSH EAX                            ; 004c8524
    MOV EAX,[0x01d5ba14]                ; 004c8525 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c852a
    PUSH 0x0                            ; 004c8531
    ADD EAX,0x158                       ; 004c8533
    PUSH EAX                            ; 004c8538
    LEA ESI,[EBP + 0xffffff0e]          ; 004c8539
    LEA EDI,[EBP + 0xfffffe72]          ; 004c853f
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 004c8545
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    ADD ESP,0x8                         ; 004c854a
    LEA EAX,[EBP + 0xfffffe72]          ; 004c854d
    LEA ESI,[EBP + 0xffffff0e]          ; 004c8553
    PUSH EAX                            ; 004c8559
    MOV EAX,[0x01d5ba14]                ; 004c855a | DAT_01d5ba14
    MOVSD ES:EDI,ESI                    ; 004c855f
    MOVSD ES:EDI,ESI                    ; 004c8560
    MOVSD ES:EDI,ESI                    ; 004c8561
    MOV ESI,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c8562
    PUSH ESI                            ; 004c8569
    LEA ESI,[EBP + 0xffffff1a]          ; 004c856a
    CALL core_actor.cpp_FUN_00408b80    ; 004c8570
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 004c8575
    LEA EAX,[EBP + 0xfffffdfa]          ; 004c8578
    PUSH EAX                            ; 004c857e
    LEA EDI,[EBP + 0xfffffdfa]          ; 004c857f
    LEA ESI,[EBP + 0xffffff1a]          ; 004c8585
    PUSH EBX                            ; 004c858b
    MOVSD ES:EDI,ESI                    ; 004c858c
    MOVSD ES:EDI,ESI                    ; 004c858d
    MOVSD ES:EDI,ESI                    ; 004c858e
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 004c858f
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004c8594
    TEST EAX,EAX                        ; 004c8597
    JLE 0x004c7a82                      ; 004c8599
        ;   XREF to: 004c7a82 (CONDITIONAL_JUMP)  ; caseD_10
    MOV EAX,[0x01d5ba14]                ; 004c859f | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c85a4
    PUSH EAX                            ; 004c85ab
    MOV EDX,dword ptr [EAX + 0x154]     ; 004c85ac
    CALL dword ptr [EDX + 0x10c]        ; 004c85b2
    ADD ESP,0x4                         ; 004c85b8
    CMP EAX,0x2                         ; 004c85bb
    JNZ 0x004c7a82                      ; 004c85be
        ;   XREF to: 004c7a82 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x1                            ; 004c85c4
    MOV EDI,dword ptr [EBX + 0xd064]    ; 004c85c6
    PUSH EDI                            ; 004c85cc
    LEA EAX,[EBX + 0x158]               ; 004c85cd
    PUSH EAX                            ; 004c85d3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c85d4
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,dword ptr [EBX + 0xd064]    ; 004c85d9
    ADD ESP,0xc                         ; 004c85df
    CMP EAX,0xd                         ; 004c85e2
    JNZ 0x004c7a82                      ; 004c85e5
        ;   XREF to: 004c7a82 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x3f99999a                     ; 004c85eb
    PUSH 0x3f000000                     ; 004c85f0
    MOV ESI,dword ptr [EBX + 0x154]     ; 004c85f5
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004c85fb
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    ADD ESP,0x8                         ; 004c8600
    MOV dword ptr [EBP + 0x76],EAX      ; 004c8603
    SUB ESP,0x4                         ; 004c8606
    MOV EAX,dword ptr [EBP + 0x76]      ; 004c8609
    MOV dword ptr [ESP],EAX             ; 004c860c
    PUSH 0x5c4259                       ; 004c860f | = "ghoul-scream-!-?.wav"
    PUSH EBX                            ; 004c8614
    CALL dword ptr [ESI + 0x34]         ; 004c8615
    ADD ESP,0xc                         ; 004c8618
    JMP 0x004c7a82                      ; 004c861b
        ;   XREF to: 004c7a82 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV EDX,dword ptr [EBX + 0xd07c]    ; 004c8620
        ;   Label: LAB_004c8620
    MOV ECX,dword ptr [EBX + EDX*0x4 + 0x2298] ; 004c8626
    XOR EAX,EAX                         ; 004c862d
    TEST ECX,ECX                        ; 004c862f
    JZ 0x004c8638                       ; 004c8631
        ;   XREF to: 004c8638 (CONDITIONAL_JUMP)  ; LAB_004c8638
    MOV EAX,0x1                         ; 004c8633
    MOV EDX,dword ptr [EBX + 0xd084]    ; 004c8638
        ;   Label: LAB_004c8638
    CMP dword ptr [EBX + EDX*0x4 + 0x2298],0x0 ; 004c863e
    JZ 0x004c8649                       ; 004c8646
        ;   XREF to: 004c8649 (CONDITIONAL_JUMP)  ; LAB_004c8649
    INC EAX                             ; 004c8648
    TEST EAX,EAX                        ; 004c8649
        ;   Label: LAB_004c8649
    JNZ 0x004c866b                      ; 004c864b
        ;   XREF to: 004c866b (CONDITIONAL_JUMP)  ; LAB_004c866b
    MOV dword ptr [EBX + 0xd064],EAX    ; 004c864d
    PUSH 0x1                            ; 004c8653
        ;   Label: LAB_004c8653
    PUSH 0x0                            ; 004c8655
    LEA EAX,[EBX + 0x158]               ; 004c8657
    PUSH EAX                            ; 004c865d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c865e
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c8663
    JMP 0x004c7a82                      ; 004c8666
        ;   XREF to: 004c7a82 (UNCONDITIONAL_JUMP)  ; caseD_10
    CMP EAX,0x1                         ; 004c866b
        ;   Label: LAB_004c866b
    JNZ 0x004c868e                      ; 004c866e
        ;   XREF to: 004c868e (CONDITIONAL_JUMP)  ; LAB_004c868e
    MOV EAX,[0x005fe9dc]                ; 004c8670 | g_CGamePtr
    MOV dword ptr [EBX + 0xd064],0xe    ; 004c8675
    MOV dword ptr [EAX + 0x244],0x1     ; 004c867f | g_CGameInstance.player_hit_flag
    JMP 0x004c84bd                      ; 004c8689
        ;   XREF to: 004c84bd (UNCONDITIONAL_JUMP)  ; LAB_004c84bd
    PUSH 0x3f000000                     ; 004c868e
        ;   Label: LAB_004c868e
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 004c8693
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 004c8698
    TEST EAX,EAX                        ; 004c869b
    SETZ AL                             ; 004c869d
    AND EAX,0xff                        ; 004c86a0
    ADD EAX,0xd                         ; 004c86a5
    MOV dword ptr [EBX + 0xd064],EAX    ; 004c86a8
    MOV EAX,[0x005fe9dc]                ; 004c86ae | g_CGamePtr
    MOV dword ptr [EAX + 0x244],0x1     ; 004c86b3 | g_CGameInstance.player_hit_flag
    JMP 0x004c84bd                      ; 004c86bd
        ;   XREF to: 004c84bd (UNCONDITIONAL_JUMP)  ; LAB_004c84bd
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004c86c2
        ;   Label: caseD_2
    TEST EAX,EAX                        ; 004c86c8
    JZ 0x004c7fd6                       ; 004c86ca
        ;   XREF to: 004c7fd6 (CONDITIONAL_JUMP)  ; LAB_004c7fd6
    PUSH EAX                            ; 004c86d0
    MOV EDX,dword ptr [EAX + 0x154]     ; 004c86d1
    CALL dword ptr [EDX + 0xf4]         ; 004c86d7
    ADD ESP,0x4                         ; 004c86dd
    TEST EAX,EAX                        ; 004c86e0
    JZ 0x004c86f6                       ; 004c86e2
        ;   XREF to: 004c86f6 (CONDITIONAL_JUMP)  ; LAB_004c86f6
    PUSH 0x1                            ; 004c86e4
    PUSH 0x1                            ; 004c86e6
    PUSH ESI                            ; 004c86e8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c86e9
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c86ee
    JMP 0x004c7a82                      ; 004c86f1
        ;   XREF to: 004c7a82 (UNCONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x3f000000                     ; 004c86f6
        ;   Label: LAB_004c86f6
    PUSH 0x3e4ccccd                     ; 004c86fb
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004c8700
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c8705
    FLD float ptr [EBP + 0x76]          ; 004c8708
    MOV EAX,dword ptr [EBX + 0xd084]    ; 004c870b
    FSTP float ptr [EBX + 0xcde0]       ; 004c8711
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004c8717
    ADD ESP,0x8                         ; 004c871e
    TEST EDX,EDX                        ; 004c8721
    JZ 0x004c7a82                       ; 004c8723
        ;   XREF to: 004c7a82 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH ESI                            ; 004c8729
    CALL core_motion.cpp_FUN_004fc930   ; 004c872a
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c872f
    ADD ESP,0x4                         ; 004c8732
    MOV EAX,dword ptr [EBP + 0x76]      ; 004c8735
    MOV dword ptr [EBP + 0x2e],EAX      ; 004c8738
    FLD float ptr [EBP + 0x2e]          ; 004c873b
    FST double ptr [EBP + -0x2e]        ; 004c873e
    FCOMP double ptr [0x005c42cd]       ; 004c8741 | DAT_005c42cd
    FNSTSW AX                           ; 004c8747
    SAHF                                ; 004c8749
    JA 0x004c7a82                       ; 004c874a
        ;   XREF to: 004c7a82 (CONDITIONAL_JUMP)  ; caseD_10
    MOV EAX,[0x005e0a2c]                ; 004c8750 | DAT_005e0a2c
    FLD1                                ; 004c8755
    MOV dword ptr [EBP + 0x62],EAX      ; 004c8757
    FCOMP double ptr [EBP + -0x2e]      ; 004c875a
    FNSTSW AX                           ; 004c875d
    SAHF                                ; 004c875f
    JA 0x004c7a82                       ; 004c8760
        ;   XREF to: 004c7a82 (CONDITIONAL_JUMP)  ; caseD_10
    LEA EAX,[EBP + 0xfffffc4e]          ; 004c8766
    PUSH EAX                            ; 004c876c
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 004c876d
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004c8772
    PUSH 0x41700000                     ; 004c8775
    PUSH 0x40e00000                     ; 004c877a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004c877f
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c8784
    MOV EAX,dword ptr [EBP + 0x76]      ; 004c8787
    MOV dword ptr [EBP + 0xfffffc52],EAX ; 004c878a
    MOV ECX,dword ptr [EBX + 0xd0bc]    ; 004c8790
    ADD ESP,0x8                         ; 004c8796
    TEST ECX,ECX                        ; 004c8799
    JZ 0x004c87b3                       ; 004c879b
        ;   XREF to: 004c87b3 (CONDITIONAL_JUMP)  ; LAB_004c87b3
    FLD float ptr [EBP + 0xfffffc52]    ; 004c879d
    FLD ST0                             ; 004c87a3
    FMUL double ptr [0x005c42cd]        ; 004c87a5 | DAT_005c42cd
    FSTP ST1                            ; 004c87ab
    FSTP float ptr [EBP + 0xfffffc52]   ; 004c87ad
    LEA EAX,[EBP + 0xfffffc4e]          ; 004c87b3
        ;   Label: LAB_004c87b3
    MOV EDX,dword ptr [0x01d22da8]      ; 004c87b9 | DAT_01d22da8
    PUSH EAX                            ; 004c87bf
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c87c0
    MOV dword ptr [EBP + 0xfffffc82],EBX ; 004c87c7
    SUB EAX,EDX                         ; 004c87cd
    MOV dword ptr [EBP + 0xfffffc86],EBX ; 004c87cf
    SHL EAX,0x4                         ; 004c87d5
    LEA EDX,[EBX + 0xfd8]               ; 004c87d8
    ADD EAX,EDX                         ; 004c87de
    PUSH 0x3e4ccccd                     ; 004c87e0
    PUSH EAX                            ; 004c87e5
    PUSH 0x1d22d58                      ; 004c87e6
    LEA ESI,[EBP + 0xffffff6e]          ; 004c87eb
    LEA EDI,[EBP + 0xfffffe36]          ; 004c87f1
    CALL core_xform.cpp_FUN_00583260    ; 004c87f7
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 004c87fc
    LEA EAX,[EBP + 0xfffffe36]          ; 004c87ff
    LEA ESI,[EBP + 0xffffff6e]          ; 004c8805
    PUSH EAX                            ; 004c880b
    MOVSD ES:EDI,ESI                    ; 004c880c
    MOVSD ES:EDI,ESI                    ; 004c880d
    MOVSD ES:EDI,ESI                    ; 004c880e
    PUSH EBX                            ; 004c880f
    LEA ESI,[EBP + 0xffffff62]          ; 004c8810
    CALL core_actor.cpp_FUN_00408b80    ; 004c8816
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 004c881b
    LEA EAX,[EBP + 0xfffffeba]          ; 004c881e
    PUSH EAX                            ; 004c8824
    LEA EDI,[EBP + 0xfffffeba]          ; 004c8825
    LEA ESI,[EBP + 0xffffff62]          ; 004c882b
    PUSH EBX                            ; 004c8831
    MOVSD ES:EDI,ESI                    ; 004c8832
    MOVSD ES:EDI,ESI                    ; 004c8833
    MOVSD ES:EDI,ESI                    ; 004c8834
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0 ; 004c8835
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 004c883a
    TEST EAX,EAX                        ; 004c883d
    JZ 0x004c7a82                       ; 004c883f
        ;   XREF to: 004c7a82 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x5c426e                       ; 004c8845 | = "gh-hits?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c884a
    PUSH EBX                            ; 004c8850
    CALL dword ptr [EAX + 0x2c]         ; 004c8851
    ADD ESP,0x8                         ; 004c8854
    JMP 0x004c7a82                      ; 004c8857
        ;   XREF to: 004c7a82 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV ECX,dword ptr [EBX + 0xcde4]    ; 004c885c
        ;   Label: caseD_c
    TEST ECX,ECX                        ; 004c8862
    JZ 0x004c887a                       ; 004c8864
        ;   XREF to: 004c887a (CONDITIONAL_JUMP)  ; LAB_004c887a
    PUSH ECX                            ; 004c8866
    MOV EDX,dword ptr [ECX + 0x154]     ; 004c8867
    CALL dword ptr [EDX + 0xf4]         ; 004c886d
    ADD ESP,0x4                         ; 004c8873
    TEST EAX,EAX                        ; 004c8876
    JZ 0x004c888c                       ; 004c8878
        ;   XREF to: 004c888c (CONDITIONAL_JUMP)  ; LAB_004c888c
    PUSH 0x1                            ; 004c887a
        ;   Label: LAB_004c887a
    PUSH 0x1                            ; 004c887c
    PUSH ESI                            ; 004c887e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c887f
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c8884
    JMP 0x004c7a82                      ; 004c8887
        ;   XREF to: 004c7a82 (UNCONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x3f000000                     ; 004c888c
        ;   Label: LAB_004c888c
    PUSH 0x3e4ccccd                     ; 004c8891
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004c8896
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c889b
    FLD float ptr [EBP + 0x76]          ; 004c889e
    MOV EAX,dword ptr [EBX + 0xd07c]    ; 004c88a1
    FSTP float ptr [EBX + 0xcde0]       ; 004c88a7
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004c88ad
    ADD ESP,0x8                         ; 004c88b4
    TEST EDI,EDI                        ; 004c88b7
    JZ 0x004c7a82                       ; 004c88b9
        ;   XREF to: 004c7a82 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH ESI                            ; 004c88bf
    CALL core_motion.cpp_FUN_004fc930   ; 004c88c0
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c88c5
    ADD ESP,0x4                         ; 004c88c8
    MOV EAX,dword ptr [EBP + 0x76]      ; 004c88cb
    MOV dword ptr [EBP + 0x2a],EAX      ; 004c88ce
    FLD float ptr [EBP + 0x2a]          ; 004c88d1
    FST double ptr [EBP + -0x26]        ; 004c88d4
    FCOMP double ptr [0x005c42cd]       ; 004c88d7 | DAT_005c42cd
    FNSTSW AX                           ; 004c88dd
    SAHF                                ; 004c88df
    JA 0x004c7a82                       ; 004c88e0
        ;   XREF to: 004c7a82 (CONDITIONAL_JUMP)  ; caseD_10
    MOV EAX,[0x005e0a30]                ; 004c88e6 | DAT_005e0a30
    FLD1                                ; 004c88eb
    MOV dword ptr [EBP + 0x62],EAX      ; 004c88ed
    FCOMP double ptr [EBP + -0x26]      ; 004c88f0
    FNSTSW AX                           ; 004c88f3
    SAHF                                ; 004c88f5
    JA 0x004c7a82                       ; 004c88f6
        ;   XREF to: 004c7a82 (CONDITIONAL_JUMP)  ; caseD_10
    LEA EAX,[EBP + 0xfffffc8a]          ; 004c88fc
    PUSH EAX                            ; 004c8902
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 004c8903
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004c8908
    PUSH 0x41700000                     ; 004c890b
    PUSH 0x40e00000                     ; 004c8910
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004c8915
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c891a
    MOV EAX,dword ptr [EBP + 0x76]      ; 004c891d
    MOV dword ptr [EBP + 0xfffffc8e],EAX ; 004c8920
    MOV EAX,dword ptr [EBX + 0xd0bc]    ; 004c8926
    ADD ESP,0x8                         ; 004c892c
    TEST EAX,EAX                        ; 004c892f
    JZ 0x004c8949                       ; 004c8931
        ;   XREF to: 004c8949 (CONDITIONAL_JUMP)  ; LAB_004c8949
    FLD float ptr [EBP + 0xfffffc8e]    ; 004c8933
    FLD ST0                             ; 004c8939
    FMUL double ptr [0x005c42cd]        ; 004c893b | DAT_005c42cd
    FSTP ST1                            ; 004c8941
    FSTP float ptr [EBP + 0xfffffc8e]   ; 004c8943
    LEA EAX,[EBP + 0xfffffc8a]          ; 004c8949
        ;   Label: LAB_004c8949
    MOV EDX,dword ptr [0x01d22da4]      ; 004c894f | DAT_01d22da4
    PUSH EAX                            ; 004c8955
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c8956
    MOV dword ptr [EBP + 0xfffffcbe],EBX ; 004c895d
    SUB EAX,EDX                         ; 004c8963
    MOV dword ptr [EBP + 0xfffffcc2],EBX ; 004c8965
    SHL EAX,0x4                         ; 004c896b
    LEA EDX,[EBX + 0xfd8]               ; 004c896e
    ADD EAX,EDX                         ; 004c8974
    PUSH 0x3ecccccd                     ; 004c8976
    PUSH EAX                            ; 004c897b
    PUSH 0x1d22d4c                      ; 004c897c
    LEA ESI,[EBP + 0xfffffe4e]          ; 004c8981
    LEA EDI,[EBP + 0xfffffe06]          ; 004c8987
    CALL core_xform.cpp_FUN_00583260    ; 004c898d
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 004c8992
    LEA EAX,[EBP + 0xfffffe06]          ; 004c8995
    LEA ESI,[EBP + 0xfffffe4e]          ; 004c899b
    PUSH EAX                            ; 004c89a1
    MOVSD ES:EDI,ESI                    ; 004c89a2
    MOVSD ES:EDI,ESI                    ; 004c89a3
    MOVSD ES:EDI,ESI                    ; 004c89a4
    PUSH EBX                            ; 004c89a5
    LEA ESI,[EBP + -0x56]               ; 004c89a6
    CALL core_actor.cpp_FUN_00408b80    ; 004c89a9
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 004c89ae
    LEA EAX,[EBP + 0xfffffe12]          ; 004c89b1
    PUSH EAX                            ; 004c89b7
    LEA EDI,[EBP + 0xfffffe12]          ; 004c89b8
    LEA ESI,[EBP + -0x56]               ; 004c89be
    PUSH EBX                            ; 004c89c1
    MOVSD ES:EDI,ESI                    ; 004c89c2
    MOVSD ES:EDI,ESI                    ; 004c89c3
    MOVSD ES:EDI,ESI                    ; 004c89c4
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0 ; 004c89c5
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 004c89ca
    TEST EAX,EAX                        ; 004c89cd
    JZ 0x004c7a82                       ; 004c89cf
        ;   XREF to: 004c7a82 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x5c427b                       ; 004c89d5 | = "gh-hits?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c89da
    PUSH EBX                            ; 004c89e0
    CALL dword ptr [EAX + 0x2c]         ; 004c89e1
    ADD ESP,0x8                         ; 004c89e4
    JMP 0x004c7a82                      ; 004c89e7
        ;   XREF to: 004c7a82 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 004c89ec
        ;   Label: caseD_b
    TEST EDX,EDX                        ; 004c89f2
    JZ 0x004c887a                       ; 004c89f4
        ;   XREF to: 004c887a (CONDITIONAL_JUMP)  ; LAB_004c887a
    MOV EAX,EDX                         ; 004c89fa
    PUSH EAX                            ; 004c89fc
    MOV EDX,dword ptr [EDX + 0x154]     ; 004c89fd
    CALL dword ptr [EDX + 0xf4]         ; 004c8a03
    ADD ESP,0x4                         ; 004c8a09
    TEST EAX,EAX                        ; 004c8a0c
    JNZ 0x004c8a1d                      ; 004c8a0e
        ;   XREF to: 004c8a1d (CONDITIONAL_JUMP)  ; LAB_004c8a1d
    MOV EAX,[0x005e0a28]                ; 004c8a10 | DAT_005e0a28
    MOV dword ptr [EBP + 0x62],EAX      ; 004c8a15
    JMP 0x004c7a82                      ; 004c8a18
        ;   XREF to: 004c7a82 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004c8a1d
        ;   Label: LAB_004c8a1d
    PUSH EAX                            ; 004c8a23
    MOV EDX,dword ptr [EAX + 0x154]     ; 004c8a24
    CALL dword ptr [EDX + 0xf4]         ; 004c8a2a
    ADD ESP,0x4                         ; 004c8a30
    CMP EAX,EBX                         ; 004c8a33
    JZ 0x004c7a82                       ; 004c8a35
        ;   XREF to: 004c7a82 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x1                            ; 004c8a3b
    PUSH 0x1                            ; 004c8a3d
    PUSH ESI                            ; 004c8a3f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c8a40
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c8a45
    JMP 0x004c7a82                      ; 004c8a48
        ;   XREF to: 004c7a82 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV EAX,[0x01c5fad0]                ; 004c8a4d | DAT_01c5fad0
        ;   Label: caseD_d
    MOV EDI,dword ptr [EBX + 0xd058]    ; 004c8a52
    SUB EDI,EAX                         ; 004c8a58
    MOV dword ptr [EBX + 0xd058],EDI    ; 004c8a5a
    TEST EDI,EDI                        ; 004c8a60
    JG 0x004c8a9f                       ; 004c8a62
        ;   XREF to: 004c8a9f (CONDITIONAL_JUMP)  ; LAB_004c8a9f
    PUSH 0x5c4288                       ; 004c8a64 | = "burp[1,2].wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c8a69
    PUSH EBX                            ; 004c8a6f
    CALL dword ptr [EAX + 0x2c]         ; 004c8a70
    ADD ESP,0x8                         ; 004c8a73
    PUSH 0x41f00000                     ; 004c8a76
    PUSH 0x41700000                     ; 004c8a7b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004c8a80
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c8a85
    FLD float ptr [EBP + 0x76]          ; 004c8a88
    FMUL double ptr [0x005c42c5]        ; 004c8a8b | DAT_005c42c5
    ADD ESP,0x8                         ; 004c8a91
    CALL crt_math.c_round_FUN_005a3120  ; 004c8a94
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBX + 0xd058]      ; 004c8a99
    PUSH dword ptr [EBP + 0x92]         ; 004c8a9f
        ;   Label: LAB_004c8a9f
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c8aa5
    PUSH EBX                            ; 004c8aab
    CALL dword ptr [EAX + 0x144]        ; 004c8aac
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 004c8ab2
    ADD ESP,0x8                         ; 004c8ab8
    TEST EDX,EDX                        ; 004c8abb
    JZ 0x004c7a82                       ; 004c8abd
        ;   XREF to: 004c7a82 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x1                            ; 004c8ac3
    PUSH 0x0                            ; 004c8ac5
    LEA EAX,[EBX + 0x158]               ; 004c8ac7
    PUSH EAX                            ; 004c8acd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c8ace
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c8ad3
    JMP 0x004c7a82                      ; 004c8ad6
        ;   XREF to: 004c7a82 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV dword ptr [EBP + 0x62],0xbf800000 ; 004c8adb
        ;   Label: LAB_004c8adb
    LEA ESI,[EBX + 0x158]               ; 004c8ae2
    PUSH ESI                            ; 004c8ae8
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 004c8ae9
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004c8aee
    ADD ESP,0x4                         ; 004c8af1
    CMP EAX,0x11                        ; 004c8af4
    JA 0x004c7a82                       ; 004c8af7
        ;   XREF to: 004c7a82 (CONDITIONAL_JUMP)  ; caseD_10
    JMP dword ptr [EAX*0x4 + 0x4c6e68]  ; 004c8afd | caseD_0 | caseD_11 | caseD_2
        ;   Label: switchD
    LEA EAX,[EBX + 0x250c]              ; 004c8b04
        ;   Label: LAB_004c8b04
    FLD float ptr [EAX + 0x4]           ; 004c8b0a
    FMUL ST0                            ; 004c8b0d
    FLD float ptr [EAX]                 ; 004c8b0f
    FMUL ST0                            ; 004c8b11
    FADDP                               ; 004c8b13
    FLD float ptr [EAX + 0x8]           ; 004c8b15
    FMUL ST0                            ; 004c8b18
    FADDP                               ; 004c8b1a
    FSQRT                               ; 004c8b1c
    FCOMP double ptr [0x005c4335]       ; 004c8b1e | DAT_005c4335
    FNSTSW AX                           ; 004c8b24
    SAHF                                ; 004c8b26
    JA 0x004c7266                       ; 004c8b27
        ;   XREF to: 004c7266 (CONDITIONAL_JUMP)  ; LAB_004c7266
    MOV ECX,dword ptr [EBX + 0xd054]    ; 004c8b2d
    PUSH ECX                            ; 004c8b33
    MOV ESI,dword ptr [0x006045f8]      ; 004c8b34 | DAT_006045f8
    PUSH ESI                            ; 004c8b3a
    CALL core_sound.cpp_CSound_killSound_FUN_00560b00 ; 004c8b3b
        ;   XREF to: 00560b00 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_killSound_FUN_00560b00(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004c8b40
    JMP 0x004c7283                      ; 004c8b43
        ;   XREF to: 004c7283 (UNCONDITIONAL_JUMP)  ; LAB_004c7283
    SUB ESP,0x8                         ; 004c8b48
        ;   Label: LAB_004c8b48
    FLD float ptr [EBX + 0xcdcc]        ; 004c8b4b
    FSTP double ptr [ESP]               ; 004c8b51
    PUSH 0x5c4296                       ; 004c8b54 | = "ghoul-walk-?.wav *%f"
    LEA EAX,[EBP + 0xfffffbae]          ; 004c8b59
    PUSH EAX                            ; 004c8b5f
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004c8b60
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004c8b65
    LEA EAX,[EBP + 0xfffffbae]          ; 004c8b68
    PUSH EAX                            ; 004c8b6e
    MOV EDX,dword ptr [EBX + 0x154]     ; 004c8b6f
    PUSH EBX                            ; 004c8b75
    CALL dword ptr [EDX + 0x30]         ; 004c8b76
    ADD ESP,0x8                         ; 004c8b79
    MOV dword ptr [EBX + 0xd054],EAX    ; 004c8b7c
    JMP 0x004c7283                      ; 004c8b82
        ;   XREF to: 004c7283 (UNCONDITIONAL_JUMP)  ; LAB_004c7283
    MOV EAX,dword ptr [EBX + 0xd09c]    ; 004c8b87
        ;   Label: LAB_004c8b87
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 004c8b8d
    JZ 0x004c8c54                       ; 004c8b95
        ;   XREF to: 004c8c54 (CONDITIONAL_JUMP)  ; LAB_004c8c54
    MOV EAX,[0x01d22db4]                ; 004c8b9b | DAT_01d22db4
    PUSH 0x3e4ccccd                     ; 004c8ba0
    PUSH EAX                            ; 004c8ba5
    MOV EDX,dword ptr [EBX + 0xd078]    ; 004c8ba6
    PUSH EDX                            ; 004c8bac
    PUSH EBX                            ; 004c8bad
    CALL core_charactr.cpp_FUN_0042fdc0 ; 004c8bae
        ;   XREF to: 0042fdc0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042fdc0()
    MOV EAX,dword ptr [EBX + 0xd078]    ; 004c8bb3
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004c8bb9
    ADD ESP,0x10                        ; 004c8bc0
    TEST ECX,ECX                        ; 004c8bc3
    JZ 0x004c8be3                       ; 004c8bc5
        ;   XREF to: 004c8be3 (CONDITIONAL_JUMP)  ; LAB_004c8be3
    MOV ESI,dword ptr [0x01d22dac]      ; 004c8bc7 | DAT_01d22dac
    PUSH 0x3e4ccccd                     ; 004c8bcd
    PUSH ESI                            ; 004c8bd2
    MOV EDI,dword ptr [EBX + 0xd07c]    ; 004c8bd3
    PUSH EDI                            ; 004c8bd9
    PUSH EBX                            ; 004c8bda
    CALL core_charactr.cpp_FUN_0042fdc0 ; 004c8bdb
        ;   XREF to: 0042fdc0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042fdc0()
    ADD ESP,0x10                        ; 004c8be0
    MOV EAX,[0x01d22db8]                ; 004c8be3 | DAT_01d22db8
        ;   Label: LAB_004c8be3
    PUSH 0x3e4ccccd                     ; 004c8be8
    PUSH EAX                            ; 004c8bed
    MOV EDX,dword ptr [EBX + 0xd080]    ; 004c8bee
    PUSH EDX                            ; 004c8bf4
    PUSH EBX                            ; 004c8bf5
    CALL core_charactr.cpp_FUN_0042fdc0 ; 004c8bf6
        ;   XREF to: 0042fdc0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042fdc0()
    MOV EAX,dword ptr [EBX + 0xd080]    ; 004c8bfb
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004c8c01
    ADD ESP,0x10                        ; 004c8c08
    TEST ECX,ECX                        ; 004c8c0b
    JZ 0x004c8c2b                       ; 004c8c0d
        ;   XREF to: 004c8c2b (CONDITIONAL_JUMP)  ; LAB_004c8c2b
    MOV ESI,dword ptr [0x01d22db0]      ; 004c8c0f | DAT_01d22db0
    PUSH 0x3e4ccccd                     ; 004c8c15
    PUSH ESI                            ; 004c8c1a
    MOV EDI,dword ptr [EBX + 0xd084]    ; 004c8c1b
    PUSH EDI                            ; 004c8c21
    PUSH EBX                            ; 004c8c22
    CALL core_charactr.cpp_FUN_0042fdc0 ; 004c8c23
        ;   XREF to: 0042fdc0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042fdc0()
    ADD ESP,0x10                        ; 004c8c28
    MOV EAX,[0x01d22da0]                ; 004c8c2b | DAT_01d22da0
        ;   Label: LAB_004c8c2b
    PUSH 0x3f333333                     ; 004c8c30
    PUSH EAX                            ; 004c8c35
    MOV EDX,dword ptr [EBX + 0xd0a0]    ; 004c8c36
    PUSH EDX                            ; 004c8c3c
    PUSH EBX                            ; 004c8c3d
        ;   Label: LAB_004c8c3d
    CALL core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_0042fe90 ; 004c8c3e
        ;   XREF to: 0042fe90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_0042fe90(CCharacter * this_ptr, int part_index, int bone_index, float chance)
    ADD ESP,0x10                        ; 004c8c43
    PUSH EBX                            ; 004c8c46
    CALL core_charactr.cpp_FUN_0042fc90 ; 004c8c47
        ;   XREF to: 0042fc90 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042fc90()
    ADD ESP,0x4                         ; 004c8c4c
    JMP 0x004c7290                      ; 004c8c4f
        ;   XREF to: 004c7290 (UNCONDITIONAL_JUMP)  ; LAB_004c7290
    MOV ESI,dword ptr [0x01d22dc8]      ; 004c8c54 | DAT_01d22dc8
        ;   Label: LAB_004c8c54
    PUSH 0x3f000000                     ; 004c8c5a
    PUSH ESI                            ; 004c8c5f
    PUSH EAX                            ; 004c8c60
    JMP 0x004c8c3d                      ; 004c8c61
        ;   XREF to: 004c8c3d (UNCONDITIONAL_JUMP)  ; LAB_004c8c3d
    MOV dword ptr [EBX + 0xd0c0],0x3f800000 ; 004c8c63
        ;   Label: LAB_004c8c63
    JMP 0x004c734f                      ; 004c8c6d
        ;   XREF to: 004c734f (UNCONDITIONAL_JUMP)  ; LAB_004c734f
    MOV EDX,dword ptr [EBX]             ; 004c8c72
        ;   Label: LAB_004c8c72
    MOV dword ptr [EAX],EDX             ; 004c8c74
    MOV EDX,dword ptr [EBX + 0x4]       ; 004c8c76
    MOV dword ptr [EAX + 0x4],EDX       ; 004c8c79
    MOV EDX,dword ptr [EBX + 0x8]       ; 004c8c7c
    MOV dword ptr [EAX + 0x8],EDX       ; 004c8c7f
    LEA ESP,[EBP + 0x7a]                ; 004c8c82
    POP EBP                             ; 004c8c85
    POP EDI                             ; 004c8c86
    POP ESI                             ; 004c8c87
    POP EBX                             ; 004c8c88
    RET                                 ; 004c8c89

