; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ghoul_cpp_CGhoul_process_FUN_004c1bb0(CGhoul *this_ptr,float delta_time)
;
; Parameters:
; CGhoul *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_004c1b30 = 004c2061
;   undefined1* switchdataD_004c1b68 = 004c2b98
;   TerminatedCString s_ghoul_eat_wav_005d8ff3
;   TerminatedCString s_ghoul_dig_wav_1_3_005d9003
;   TerminatedCString s_ghoul_eat_wav_1_3_005d9018
;   TerminatedCString s_ghoul_eat_wav_1_3_005d902d
;   undefined4 s_ghoul_eat_wav_1_3_005d902d+1
;   TerminatedCString s_ghoul_dig_wav_1_3_005d9042
;   undefined4 s_ghoul_dig_wav_1_3_005d9042+1
;   undefined4 s_ghoul_dig_wav_1_3_005d9042+2
;   undefined4 s_ghoul_dig_wav_1_3_005d9042+3
;   TerminatedCString s_s_confused_while_walking_005d9057
;   TerminatedCString s_ghoul_alert_wav_005d9081
;   TerminatedCString s_ghoul_scream_wav_005d9093
;   TerminatedCString s_gh_hits_wav_005d90a8
;   ... and 49 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_actor.cpp_randomChance_FUN_0040d060
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90
;   core_charactr.cpp_CCharacter_isOnGround_FUN_00424430
;   core_charactr.cpp_CCharacter_preProcess_FUN_00424470
;   core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00
;   core_charactr.cpp_CCharacter_processWalking_FUN_004287f0
;   core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_00427130
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000
;   core_charactr.cpp_FUN_00423a10
;   core_charactr.cpp_FUN_00423a60
;   core_charactr.cpp_FUN_00426f30
;   ... and 27 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c1bb0
        ;   Label: core_ghoul.cpp_CGhoul_process_FUN_004c1bb0
    PUSH ESI                            ; 004c1bb1
    PUSH EDI                            ; 004c1bb2
    PUSH EBP                            ; 004c1bb3
    MOV EBP,ESP                         ; 004c1bb4
    SUB ESP,0x4cc                       ; 004c1bb6
    SUB EBP,0x7a                        ; 004c1bbc
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004c1bbf
    PUSH dword ptr [EBP + 0x92]         ; 004c1bc5
    PUSH EBX                            ; 004c1bcb
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0 ; 004c1bcc
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004c1bd1
    TEST EAX,EAX                        ; 004c1bd4
    JZ 0x004c2059                       ; 004c1bd6
        ;   XREF to: 004c2059 (CONDITIONAL_JUMP)  ; LAB_004c2059
    LEA EAX,[EBX + 0x2508]              ; 004c1bdc
    MOV dword ptr [EAX + 0x8],0x0       ; 004c1be2
    FLD float ptr [EBP + 0x92]          ; 004c1be9
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c1bef
    MOV dword ptr [EAX + 0x4],EDX       ; 004c1bf2
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c1bf5
    MOV dword ptr [EAX],EDX             ; 004c1bf8
    FMUL float ptr [EBX + 0x10a60]      ; 004c1bfa
    LEA EAX,[EBX + 0x2b4]               ; 004c1c00
    FSTP float ptr [EBP + 0x1a]         ; 004c1c06
    MOV dword ptr [EBP + 0x72],EAX      ; 004c1c09
    FLD float ptr [EBP + 0x1a]          ; 004c1c0c
        ;   Label: caseD_e
    FLDZ                                ; 004c1c0f
    FCOMPP                              ; 004c1c11
    FNSTSW AX                           ; 004c1c13
    SAHF                                ; 004c1c15
    JC 0x004c262a                       ; 004c1c16
        ;   XREF to: 004c262a (CONDITIONAL_JUMP)  ; LAB_004c262a
    PUSH 0x1                            ; 004c1c1c
    MOV EDX,dword ptr [EBP + 0x72]      ; 004c1c1e
    PUSH EDX                            ; 004c1c21
    CALL core_motion.cpp_FUN_005038a0   ; 004c1c22
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [EBP + 0x76],EAX      ; 004c1c27
    FLD float ptr [EBP + 0x76]          ; 004c1c2a
    FMUL double ptr [0x005d90e7]        ; 004c1c2d | DAT_005d90e7
    FLD float ptr [EBP + 0x92]          ; 004c1c33
    FLD ST0                             ; 004c1c39
    FMUL float ptr [EBX + 0x10a60]      ; 004c1c3b
    FXCH                                ; 004c1c41
    FSTP double ptr [EBP + -0x16]       ; 004c1c43
    FXCH                                ; 004c1c46
    FMUL double ptr [EBP + -0x16]       ; 004c1c48
    ADD ESP,0x8                         ; 004c1c4b
    FMUL float ptr [EBX + 0x10a60]      ; 004c1c4e
    SUB ESP,0x4                         ; 004c1c54
    FSTP float ptr [EBX + 0x2594]       ; 004c1c57
    FSTP float ptr [ESP]                ; 004c1c5d
    PUSH EBX                            ; 004c1c60
    CALL core_charactr.cpp_FUN_0042b2a0 ; 004c1c61
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b2a0()
    ADD ESP,0x8                         ; 004c1c66
    MOV ECX,dword ptr [EBP + 0x72]      ; 004c1c69
    PUSH ECX                            ; 004c1c6c
    CALL core_motion.cpp_FUN_005035c0   ; 004c1c6d
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004c1c72
    ADD ESP,0x4                         ; 004c1c75
    MOV dword ptr [EBP + 0x56],EAX      ; 004c1c78
    CMP EAX,0x11                        ; 004c1c7b
    JNZ 0x004c1cb1                      ; 004c1c7e
        ;   XREF to: 004c1cb1 (CONDITIONAL_JUMP)  ; LAB_004c1cb1
    FLD float ptr [EBX + 0x10a60]       ; 004c1c80
    FLD double ptr [EBP + -0x16]        ; 004c1c86
    FMUL double ptr [0x005d90ef]        ; 004c1c89 | DAT_005d90ef
    FLD float ptr [EBX + 0x2598]        ; 004c1c8f
    FLD ST0                             ; 004c1c95
    FMUL double ptr [0x005d90f7]        ; 004c1c97 | DAT_005d90f7
    FXCH ST2                            ; 004c1c9d
    FMULP ST3                           ; 004c1c9f
    FXCH                                ; 004c1ca1
    FSTP ST1                            ; 004c1ca3
    FSTP float ptr [EBX + 0x2598]       ; 004c1ca5
    FSTP float ptr [EBX + 0x2594]       ; 004c1cab
    PUSH dword ptr [EBP + 0x92]         ; 004c1cb1
        ;   Label: LAB_004c1cb1
    PUSH EBX                            ; 004c1cb7
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_004287f0 ; 004c1cb8
        ;   XREF to: 004287f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_004287f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004c1cbd
    TEST EAX,EAX                        ; 004c1cc0
    JZ 0x004c37cc                       ; 004c1cc2
        ;   XREF to: 004c37cc (CONDITIONAL_JUMP)  ; LAB_004c37cc
    MOV EAX,dword ptr [EBX + 0x27ac]    ; 004c1cc8
    CMP EAX,0x2                         ; 004c1cce
    JNC 0x004c267f                      ; 004c1cd1
        ;   XREF to: 004c267f (CONDITIONAL_JUMP)  ; LAB_004c267f
    CMP EAX,0x1                         ; 004c1cd7
    JNZ 0x004c2686                      ; 004c1cda
        ;   XREF to: 004c2686 (CONDITIONAL_JUMP)  ; LAB_004c2686
    PUSH EAX                            ; 004c1ce0
    PUSH EAX                            ; 004c1ce1
    LEA EAX,[EBX + 0x2b4]               ; 004c1ce2
        ;   Label: LAB_004c1ce2
    PUSH EAX                            ; 004c1ce8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c1ce9
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c1cee
        ;   Label: LAB_004c1cee
    LEA EAX,[EBX + 0x2508]              ; 004c1cf1
    MOV dword ptr [EAX + 0x8],0x0       ; 004c1cf7
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c1cfe
    MOV dword ptr [EAX + 0x4],EDX       ; 004c1d01
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c1d04
    MOV dword ptr [EAX],EDX             ; 004c1d07
    FLD float ptr [EBX + 0x10a74]       ; 004c1d09
        ;   Label: LAB_004c1d09
    FLDZ                                ; 004c1d0f
    FCOMPP                              ; 004c1d11
    FNSTSW AX                           ; 004c1d13
    SAHF                                ; 004c1d15
    JNC 0x004c1d2a                      ; 004c1d16
        ;   XREF to: 004c1d2a (CONDITIONAL_JUMP)  ; LAB_004c1d2a
    FLD float ptr [EBX + 0x10a74]       ; 004c1d18
    FSUB float ptr [EBP + 0x92]         ; 004c1d1e
    FSTP float ptr [EBX + 0x10a74]      ; 004c1d24
    PUSH EBX                            ; 004c1d2a
        ;   Label: LAB_004c1d2a
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00424470 ; 004c1d2b
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00424470(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004c1d30
    PUSH EBX                            ; 004c1d33
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_00424430 ; 004c1d34
        ;   XREF to: 00424430 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_00424430(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004c1d39
    TEST EAX,EAX                        ; 004c1d3c
    JZ 0x004c1e87                       ; 004c1d3e
        ;   XREF to: 004c1e87 (CONDITIONAL_JUMP)  ; LAB_004c1e87
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 004c1d44
    TEST EDX,EDX                        ; 004c1d4a
    JZ 0x004c1d7a                       ; 004c1d4c
        ;   XREF to: 004c1d7a (CONDITIONAL_JUMP)  ; LAB_004c1d7a
    MOV EAX,EDX                         ; 004c1d4e
    PUSH EAX                            ; 004c1d50
    MOV EDX,dword ptr [EDX + 0x2b0]     ; 004c1d51
    CALL dword ptr [EDX + 0xfc]         ; 004c1d57
    ADD ESP,0x4                         ; 004c1d5d
    CMP EAX,EBX                         ; 004c1d60
    JNZ 0x004c1d7a                      ; 004c1d62
        ;   XREF to: 004c1d7a (CONDITIONAL_JUMP)  ; LAB_004c1d7a
    MOV ECX,dword ptr [EBX + 0x10a78]   ; 004c1d64
    PUSH ECX                            ; 004c1d6a
    MOV ESI,dword ptr [0x0061b5a8]      ; 004c1d6b | g_CDemonSetPtr
    PUSH ESI                            ; 004c1d71 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 004c1d72
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004c1d77
    PUSH dword ptr [EBP + 0x92]         ; 004c1d7a
        ;   Label: LAB_004c1d7a
    PUSH EBX                            ; 004c1d80
    LEA ESI,[EBX + 0x2588]              ; 004c1d81
    CALL core_charactr.cpp_FUN_00423a10 ; 004c1d87
        ;   XREF to: 00423a10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00423a10()
    FLD float ptr [ESI]                 ; 004c1d8c
    FMUL float ptr [EBP + 0x92]         ; 004c1d8e
    FLD float ptr [ESI + 0x4]           ; 004c1d94
    FMUL float ptr [EBP + 0x92]         ; 004c1d97
    FLD float ptr [ESI + 0x8]           ; 004c1d9d
    FMUL float ptr [EBP + 0x92]         ; 004c1da0
    LEA EDI,[EBP + 0xfffffeae]          ; 004c1da6
    LEA ESI,[EBP + 0xffffff56]          ; 004c1dac
    FXCH ST2                            ; 004c1db2
    FSTP float ptr [EBP + 0xffffff56]   ; 004c1db4
    FSTP float ptr [EBP + 0xffffff5a]   ; 004c1dba
    FSTP float ptr [EBP + 0xffffff5e]   ; 004c1dc0
    MOVSD ES:EDI,ESI                    ; 004c1dc6
    MOVSD ES:EDI,ESI                    ; 004c1dc7
    MOVSD ES:EDI,ESI                    ; 004c1dc8
    LEA EAX,[EBX + 0x257c]              ; 004c1dc9
    FLD float ptr [EBP + 0xfffffeae]    ; 004c1dcf
    FLD float ptr [EBP + 0xfffffeb2]    ; 004c1dd5
    FLD float ptr [EBP + 0xfffffeb6]    ; 004c1ddb
    LEA EDI,[EBP + -0x62]               ; 004c1de1
    LEA ESI,[EBP + 0xfffffeba]          ; 004c1de4
    FXCH ST2                            ; 004c1dea
    FADD float ptr [EAX]                ; 004c1dec
    FXCH                                ; 004c1dee
    FADD float ptr [EAX + 0x4]          ; 004c1df0
    FXCH ST2                            ; 004c1df3
    FADD float ptr [EAX + 0x8]          ; 004c1df5
    FXCH                                ; 004c1df8
    FSTP float ptr [EBP + 0xfffffeba]   ; 004c1dfa
    FXCH                                ; 004c1e00
    FSTP float ptr [EBP + 0xfffffebe]   ; 004c1e02
    FSTP float ptr [EBP + 0xfffffec2]   ; 004c1e08
    MOVSD ES:EDI,ESI                    ; 004c1e0e
    MOVSD ES:EDI,ESI                    ; 004c1e0f
    MOVSD ES:EDI,ESI                    ; 004c1e10
    LEA EDX,[EBX + 0x2508]              ; 004c1e11
    FLD float ptr [EBP + -0x62]         ; 004c1e17
    FLD float ptr [EBP + -0x5e]         ; 004c1e1a
    FLD float ptr [EBP + -0x5a]         ; 004c1e1d
    LEA EDI,[EBP + 0xfffffe5a]          ; 004c1e20
    LEA ESI,[EBP + 0xfffffec6]          ; 004c1e26
    FXCH ST2                            ; 004c1e2c
    FADD float ptr [EDX]                ; 004c1e2e
    FXCH                                ; 004c1e30
    FADD float ptr [EDX + 0x4]          ; 004c1e32
    FXCH ST2                            ; 004c1e35
    FADD float ptr [EDX + 0x8]          ; 004c1e37
    FXCH                                ; 004c1e3a
    FSTP float ptr [EBP + 0xfffffec6]   ; 004c1e3c
    FXCH                                ; 004c1e42
    FSTP float ptr [EBP + 0xfffffeca]   ; 004c1e44
    FSTP float ptr [EBP + 0xfffffece]   ; 004c1e4a
    MOVSD ES:EDI,ESI                    ; 004c1e50
    MOVSD ES:EDI,ESI                    ; 004c1e51
    MOVSD ES:EDI,ESI                    ; 004c1e52
    MOV dword ptr [EAX + 0x8],0x0       ; 004c1e53
    ADD ESP,0x8                         ; 004c1e5a
    MOV ECX,dword ptr [EAX + 0x8]       ; 004c1e5d
    MOV dword ptr [EAX + 0x4],ECX       ; 004c1e60
    MOV ECX,dword ptr [EAX + 0x4]       ; 004c1e63
    MOV dword ptr [EAX],ECX             ; 004c1e66
    MOV dword ptr [EDX + 0x8],0x0       ; 004c1e68
    LEA EAX,[EBP + 0xfffffe5a]          ; 004c1e6f
    FLD float ptr [EDX + 0x8]           ; 004c1e75
    PUSH EAX                            ; 004c1e78
    FST float ptr [EDX + 0x4]           ; 004c1e79
    PUSH EBX                            ; 004c1e7c
    FSTP float ptr [EDX]                ; 004c1e7d
    CALL core_charactr.cpp_FUN_00423a60 ; 004c1e7f
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00423a60(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004c1e84
    LEA ESI,[EBX + 0x2b4]               ; 004c1e87
        ;   Label: LAB_004c1e87
    PUSH ESI                            ; 004c1e8d
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00 ; 004c1e8e
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance * this_ptr)
    FLDZ                                ; 004c1e93
    FLD float ptr [EBX + 0x10b0c]       ; 004c1e95
    ADD ESP,0x4                         ; 004c1e9b
    FSTP double ptr [EBP + -0x2e]       ; 004c1e9e
    FCOMP double ptr [EBP + -0x2e]      ; 004c1ea1
    FNSTSW AX                           ; 004c1ea4
    SAHF                                ; 004c1ea6
    JNC 0x004c1f39                      ; 004c1ea7
        ;   XREF to: 004c1f39 (CONDITIONAL_JUMP)  ; LAB_004c1f39
    FLD1                                ; 004c1ead
    FSUB double ptr [EBP + -0x2e]       ; 004c1eaf
    SUB ESP,0x4                         ; 004c1eb2
    FSTP float ptr [ESP]                ; 004c1eb5
    MOV EDI,dword ptr [EBX + 0x10b10]   ; 004c1eb8
    PUSH EDI                            ; 004c1ebe
    PUSH ESI                            ; 004c1ebf
    CALL core_motion.cpp_FUN_00503f50   ; 004c1ec0
        ;   XREF to: 00503f50 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00503f50()
    FLD float ptr [EBX + 0x10b0c]       ; 004c1ec5
    FLD1                                ; 004c1ecb
    FSUBRP                              ; 004c1ecd
    FST float ptr [EBP + 0x22]          ; 004c1ecf
    FMUL float ptr [EBP + 0x22]         ; 004c1ed2
    FMUL float ptr [EBP + 0x22]         ; 004c1ed5
    MOV dword ptr [EBP + 0x76],EAX      ; 004c1ed8
    ADD ESP,0xc                         ; 004c1edb
    MOV EDX,dword ptr [EBX + 0x10b10]   ; 004c1ede
    FLD float ptr [EBP + 0x76]          ; 004c1ee4
    PUSH 0x544cc0                       ; 004c1ee7
    MOV EAX,[0x01cb8240]                ; 004c1eec | DAT_01cb8240
    FLD1                                ; 004c1ef1
    FSUBRP ST2,ST0                      ; 004c1ef3
    PUSH EAX                            ; 004c1ef5
    FXCH                                ; 004c1ef6
    FSTP float ptr [EBP + 0x22]         ; 004c1ef8
    PUSH dword ptr [EBP + 0x22]         ; 004c1efb
    FSTP float ptr [EBP + 0x1e]         ; 004c1efe
    PUSH dword ptr [EBP + 0x1e]         ; 004c1f01
    PUSH EDX                            ; 004c1f04
    PUSH ESI                            ; 004c1f05
    CALL core_skeleton.cpp_FUN_00545a60 ; 004c1f06
        ;   XREF to: 00545a60 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00545a60()
    FLD float ptr [EBP + 0x92]          ; 004c1f0b
    FDIV float ptr [0x005f78cc]         ; 004c1f11 | DAT_005f78cc
    FSUBR float ptr [EBX + 0x10b0c]     ; 004c1f17
    ADD ESP,0x18                        ; 004c1f1d
    FST float ptr [EBX + 0x10b0c]       ; 004c1f20
    FLDZ                                ; 004c1f26
    FCOMPP                              ; 004c1f28
    FNSTSW AX                           ; 004c1f2a
    SAHF                                ; 004c1f2c
    JBE 0x004c1f39                      ; 004c1f2d
        ;   XREF to: 004c1f39 (CONDITIONAL_JUMP)  ; LAB_004c1f39
    MOV dword ptr [EBX + 0x10b0c],0x0   ; 004c1f2f
    PUSH dword ptr [EBP + 0x92]         ; 004c1f39
        ;   Label: LAB_004c1f39
    PUSH EBX                            ; 004c1f3f
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90 ; 004c1f40
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90(CCharacter * this_ptr, float delta_time)
    FLD float ptr [EBX + 0x2578]        ; 004c1f45
    FABS                                ; 004c1f4b
    ADD ESP,0x8                         ; 004c1f4d
    FCOMP double ptr [0x005d916f]       ; 004c1f50 | DAT_005d916f
    FNSTSW AX                           ; 004c1f56
    SAHF                                ; 004c1f58
    JBE 0x004c37f5                      ; 004c1f59
        ;   XREF to: 004c37f5 (CONDITIONAL_JUMP)  ; LAB_004c37f5
    MOV EDI,dword ptr [EBX + 0x10af8]   ; 004c1f5f
        ;   Label: LAB_004c1f5f
    PUSH EDI                            ; 004c1f65
    MOV EAX,[0x0061c068]                ; 004c1f66 | DAT_0061c068
    PUSH EAX                            ; 004c1f6b
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_0055af70 ; 004c1f6c
        ;   XREF to: 0055af70 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_0055af70(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004c1f71
    TEST EAX,EAX                        ; 004c1f74
    JZ 0x004c3839                       ; 004c1f76
        ;   XREF to: 004c3839 (CONDITIONAL_JUMP)  ; LAB_004c3839
    CMP dword ptr [EBX + 0x10a64],0x0   ; 004c1f7c
        ;   Label: LAB_004c1f7c
    JZ 0x004c3878                       ; 004c1f83
        ;   XREF to: 004c3878 (CONDITIONAL_JUMP)  ; LAB_004c3878
    CMP dword ptr [EBX + 0x10b58],0x0   ; 004c1f89
        ;   Label: LAB_004c1f89
    JZ 0x004c2048                       ; 004c1f90
        ;   XREF to: 004c2048 (CONDITIONAL_JUMP)  ; LAB_004c2048
    CMP dword ptr [EBP + 0x56],0x11     ; 004c1f96
    JNZ 0x004c2048                      ; 004c1f9a
        ;   XREF to: 004c2048 (CONDITIONAL_JUMP)  ; LAB_004c2048
    LEA EDX,[EBX + 0x20]                ; 004c1fa0
    LEA EDI,[EBP + 0xffffff26]          ; 004c1fa3
    LEA ESI,[EBP + 0xfffffe12]          ; 004c1fa9
    FLD float ptr [EDX]                 ; 004c1faf
    FLD float ptr [EDX + 0x4]           ; 004c1fb1
    LEA EAX,[EBX + 0x10b68]             ; 004c1fb4
    FLD float ptr [EDX + 0x8]           ; 004c1fba
    FXCH ST2                            ; 004c1fbd
    FSUB float ptr [EAX]                ; 004c1fbf
    FXCH                                ; 004c1fc1
    FSUB float ptr [EAX + 0x4]          ; 004c1fc3
    FXCH ST2                            ; 004c1fc6
    FSUB float ptr [EAX + 0x8]          ; 004c1fc8
    FXCH                                ; 004c1fcb
    FSTP float ptr [EBP + 0xfffffe12]   ; 004c1fcd
    FXCH                                ; 004c1fd3
    FSTP float ptr [EBP + 0xfffffe16]   ; 004c1fd5
    FSTP float ptr [EBP + 0xfffffe1a]   ; 004c1fdb
    MOVSD ES:EDI,ESI                    ; 004c1fe1
    MOVSD ES:EDI,ESI                    ; 004c1fe2
    MOVSD ES:EDI,ESI                    ; 004c1fe3
    FLD float ptr [EBP + 0xffffff26]    ; 004c1fe4
    FMUL ST0                            ; 004c1fea
    FLD float ptr [EBP + 0xffffff2e]    ; 004c1fec
    FMUL ST0                            ; 004c1ff2
    FADDP                               ; 004c1ff4
    FSQRT                               ; 004c1ff6
    XOR EDI,EDI                         ; 004c1ff8
    FLD float ptr [EBP + 0x92]          ; 004c1ffa
    FMUL double ptr [0x005d910f]        ; 004c2000 | DAT_005d910f
    MOV dword ptr [EBP + 0xffffff2a],EDI ; 004c2006
    FCOMPP                              ; 004c200c
    FNSTSW AX                           ; 004c200e
    SAHF                                ; 004c2010
    JBE 0x004c3954                      ; 004c2011
        ;   XREF to: 004c3954 (CONDITIONAL_JUMP)  ; LAB_004c3954
    FLD float ptr [EBX + 0x10b64]       ; 004c2017
    FSUB float ptr [EBP + 0x92]         ; 004c201d
    FST float ptr [EBX + 0x10b64]       ; 004c2023
    FLDZ                                ; 004c2029
    FCOMPP                              ; 004c202b
    FNSTSW AX                           ; 004c202d
    SAHF                                ; 004c202f
    JBE 0x004c2048                      ; 004c2030
        ;   XREF to: 004c2048 (CONDITIONAL_JUMP)  ; LAB_004c2048
    MOV dword ptr [EBX + 0x10b5c],0x41f00000 ; 004c2032
    MOV dword ptr [EBX + 0x10b58],EDI   ; 004c203c
    MOV dword ptr [EBX + 0x10b60],EDI   ; 004c2042
    LEA EAX,[EBX + 0x10b68]             ; 004c2048
        ;   Label: LAB_004c2048
    ADD EBX,0x20                        ; 004c204e
    CMP EAX,EBX                         ; 004c2051
    JNZ 0x004c3963                      ; 004c2053
        ;   XREF to: 004c3963 (CONDITIONAL_JUMP)  ; LAB_004c3963
    LEA ESP,[EBP + 0x7a]                ; 004c2059
        ;   Label: LAB_004c2059
    POP EBP                             ; 004c205c
    POP EDI                             ; 004c205d
    POP ESI                             ; 004c205e
    POP EBX                             ; 004c205f
    RET                                 ; 004c2060
    MOV ESI,0x1                         ; 004c2061
        ;   Label: caseD_5
    MOV EDI,dword ptr [EBX + 0x10a78]   ; 004c2066
    MOV dword ptr [EBP + 0x6e],ESI      ; 004c206c
    TEST EDI,EDI                        ; 004c206f
    JNZ 0x004c2088                      ; 004c2071
        ;   XREF to: 004c2088 (CONDITIONAL_JUMP)  ; LAB_004c2088
    PUSH 0x1                            ; 004c2073
        ;   Label: LAB_004c2073
    PUSH 0x1                            ; 004c2075
    MOV EDX,dword ptr [EBP + 0x72]      ; 004c2077
    PUSH EDX                            ; 004c207a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c207b
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c2080
    JMP 0x004c1c0c                      ; 004c2083
        ;   XREF to: 004c1c0c (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH EDI                            ; 004c2088
        ;   Label: LAB_004c2088
    MOV ESI,dword ptr [EDI + 0x2b0]     ; 004c2089
    CALL dword ptr [ESI + 0x114]        ; 004c208f
    ADD ESP,0x4                         ; 004c2095
    TEST EAX,EAX                        ; 004c2098
    JNZ 0x004c2073                      ; 004c209a
        ;   XREF to: 004c2073 (CONDITIONAL_JUMP)  ; LAB_004c2073
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004c209c
    PUSH EAX                            ; 004c20a2
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 004c20a3
    CALL dword ptr [ESI + 0xfc]         ; 004c20a9
    ADD ESP,0x4                         ; 004c20af
    TEST EAX,EAX                        ; 004c20b2
    JNZ 0x004c2073                      ; 004c20b4
        ;   XREF to: 004c2073 (CONDITIONAL_JUMP)  ; LAB_004c2073
    PUSH 0x0                            ; 004c20b6
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004c20b8
    PUSH EBX                            ; 004c20be
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 004c20bf
    PUSH EAX                            ; 004c20c5
    CALL dword ptr [ESI + 0xf0]         ; 004c20c6
    ADD ESP,0xc                         ; 004c20cc
    TEST EAX,EAX                        ; 004c20cf
    JZ 0x004c2073                       ; 004c20d1
        ;   XREF to: 004c2073 (CONDITIONAL_JUMP)  ; LAB_004c2073
    MOV EAX,[0x005f78b8]                ; 004c20d3 | DAT_005f78b8
    MOV dword ptr [EBP + 0x26],EAX      ; 004c20d8
    XOR EAX,EAX                         ; 004c20db
    MOV dword ptr [EBP + 0xfffffd46],EAX ; 004c20dd
    MOV dword ptr [EBP + 0xfffffd4a],EAX ; 004c20e3
    MOV EAX,dword ptr [EBP + 0x26]      ; 004c20e9
    MOV dword ptr [EBP + 0xfffffd4e],EAX ; 004c20ec
    LEA EAX,[EBP + 0xfffffd46]          ; 004c20f2
    PUSH EAX                            ; 004c20f8
    PUSH EBX                            ; 004c20f9
    LEA ESI,[EBP + 0xfffffe96]          ; 004c20fa
    LEA EDI,[EBP + 0xfffffdd6]          ; 004c2100
    CALL core_actor.cpp_FUN_00408d70    ; 004c2106
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[EBP + 0xfffffe96]          ; 004c210b
    MOVSD ES:EDI,ESI                    ; 004c2111
    MOVSD ES:EDI,ESI                    ; 004c2112
    MOVSD ES:EDI,ESI                    ; 004c2113
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004c2114
    FLD float ptr [EBP + 0xfffffdd6]    ; 004c211a
    FSUB float ptr [EAX + 0x20]         ; 004c2120
    FMUL ST0                            ; 004c2123
    FLD float ptr [EBP + 0xfffffdde]    ; 004c2125
    FSUB float ptr [EAX + 0x28]         ; 004c212b
    FMUL ST0                            ; 004c212e
    FADDP                               ; 004c2130
    FSQRT                               ; 004c2132
    ADD ESP,0x8                         ; 004c2134
    FLD1                                ; 004c2137
    FCOMPP                              ; 004c2139
    FNSTSW AX                           ; 004c213b
    SAHF                                ; 004c213d
    JNC 0x004c2145                      ; 004c213e
        ;   XREF to: 004c2145 (CONDITIONAL_JUMP)  ; LAB_004c2145
    XOR ECX,ECX                         ; 004c2140
    MOV dword ptr [EBP + 0x6e],ECX      ; 004c2142
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 004c2145
        ;   Label: LAB_004c2145
    FLD float ptr [EBP + 0xfffffdda]    ; 004c214b
    FSUB float ptr [ESI + 0x24]         ; 004c2151
    FABS                                ; 004c2154
    FCOMP double ptr [0x005d90f7]       ; 004c2156 | DAT_005d90f7
    FNSTSW AX                           ; 004c215c
    SAHF                                ; 004c215e
    JA 0x004c2073                       ; 004c215f
        ;   XREF to: 004c2073 (CONDITIONAL_JUMP)  ; LAB_004c2073
    CMP dword ptr [EBP + 0x6e],0x0      ; 004c2165
    JNZ 0x004c217a                      ; 004c2169
        ;   XREF to: 004c217a (CONDITIONAL_JUMP)  ; LAB_004c217a
    CMP dword ptr [EBP + 0x6e],0x0      ; 004c216b
        ;   Label: LAB_004c216b
    JNZ 0x004c1c0c                      ; 004c216f
        ;   XREF to: 004c1c0c (CONDITIONAL_JUMP)  ; caseD_12
    JMP 0x004c2073                      ; 004c2175
        ;   XREF to: 004c2073 (UNCONDITIONAL_JUMP)  ; LAB_004c2073
    PUSH 0x0                            ; 004c217a
        ;   Label: LAB_004c217a
    PUSH EBX                            ; 004c217c
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 004c217d
    PUSH ESI                            ; 004c2183
    CALL dword ptr [EAX + 0xf4]         ; 004c2184
    ADD ESP,0xc                         ; 004c218a
    TEST EAX,EAX                        ; 004c218d
    JNZ 0x004c216b                      ; 004c218f
        ;   XREF to: 004c216b (CONDITIONAL_JUMP)  ; LAB_004c216b
    JMP 0x004c2073                      ; 004c2191
        ;   XREF to: 004c2073 (UNCONDITIONAL_JUMP)  ; LAB_004c2073
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004c2196
        ;   Label: caseD_a
    TEST EAX,EAX                        ; 004c219c
    JNZ 0x004c21b5                      ; 004c219e
        ;   XREF to: 004c21b5 (CONDITIONAL_JUMP)  ; LAB_004c21b5
    PUSH 0x1                            ; 004c21a0
    PUSH 0x1                            ; 004c21a2
    MOV ECX,dword ptr [EBP + 0x72]      ; 004c21a4
    PUSH ECX                            ; 004c21a7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c21a8
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c21ad
    JMP 0x004c1c0c                      ; 004c21b0
        ;   XREF to: 004c1c0c (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH EAX                            ; 004c21b5
        ;   Label: LAB_004c21b5
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 004c21b6
    CALL dword ptr [ESI + 0xfc]         ; 004c21bc
    ADD ESP,0x4                         ; 004c21c2
    CMP EAX,EBX                         ; 004c21c5
    JZ 0x004c21de                       ; 004c21c7
        ;   XREF to: 004c21de (CONDITIONAL_JUMP)  ; LAB_004c21de
    PUSH 0x1                            ; 004c21c9
    PUSH 0x1                            ; 004c21cb
    MOV EDX,dword ptr [EBP + 0x72]      ; 004c21cd
    PUSH EDX                            ; 004c21d0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c21d1
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c21d6
    JMP 0x004c1c0c                      ; 004c21d9
        ;   XREF to: 004c1c0c (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004c21de
        ;   Label: LAB_004c21de
    PUSH EAX                            ; 004c21e4
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 004c21e5
    CALL dword ptr [ESI + 0x114]        ; 004c21eb
    ADD ESP,0x4                         ; 004c21f1
    TEST EAX,EAX                        ; 004c21f4
    JNZ 0x004c2394                      ; 004c21f6
        ;   XREF to: 004c2394 (CONDITIONAL_JUMP)  ; LAB_004c2394
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004c21fc
    PUSH EAX                            ; 004c2202
    MOV EDI,dword ptr [EAX + 0x2b0]     ; 004c2203
    LEA ESI,[EBP + 0xfffffce6]          ; 004c2209
    CALL dword ptr [EDI + 0x24]         ; 004c220f
    MOV ECX,0x6                         ; 004c2212
    LEA EDI,[EBP + 0xfffffcfe]          ; 004c2217
    LEA ESI,[EBP + 0xfffffce6]          ; 004c221d
    MOVSD.REP ES:EDI,ESI                ; 004c2223
    FLD float ptr [EBP + 0xfffffd0e]    ; 004c2225
    FSUB float ptr [EBP + 0xfffffd02]   ; 004c222b
    FMUL double ptr [0x005d9147]        ; 004c2231 | DAT_005d9147
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 004c2237
    LEA EDI,[EBP + 0xffffff3e]          ; 004c223d
    LEA ESI,[ESI + 0x20]                ; 004c2243
    LEA EAX,[EBP + 0xfffffc8a]          ; 004c2246
    MOVSD ES:EDI,ESI                    ; 004c224c
    MOVSD ES:EDI,ESI                    ; 004c224d
    MOVSD ES:EDI,ESI                    ; 004c224e
    ADD ESP,0x4                         ; 004c224f
    FLD float ptr [EBP + 0xffffff42]    ; 004c2252
    FXCH                                ; 004c2258
    FADD ST0,ST1                        ; 004c225a
    PUSH EAX                            ; 004c225c
    FSTP ST1                            ; 004c225d
    FSTP float ptr [EBP + 0xffffff42]   ; 004c225f
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 004c2265
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004c226a
    PUSH 0x41c80000                     ; 004c226d
    PUSH 0x41700000                     ; 004c2272
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004c2277
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c227c
    ADD ESP,0x8                         ; 004c227f
    LEA EAX,[EBP + 0xffffff3e]          ; 004c2282
    FLD float ptr [EBP + 0x76]          ; 004c2288
    PUSH EAX                            ; 004c228b
    FSTP float ptr [EBP + 0xfffffc8e]   ; 004c228c
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 004c2292
    PUSH EDX                            ; 004c2298
    LEA ESI,[EBP + -0x7a]               ; 004c2299
    LEA EDI,[EBP + -0x4a]               ; 004c229c
    CALL core_actor.cpp_FUN_00408de0    ; 004c229f
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[EBP + -0x7a]               ; 004c22a4
    MOVSD ES:EDI,ESI                    ; 004c22a7
    MOVSD ES:EDI,ESI                    ; 004c22a8
    MOVSD ES:EDI,ESI                    ; 004c22a9
    LEA EAX,[EBP + 0xfffffca6]          ; 004c22aa
    LEA ESI,[EBP + -0x4a]               ; 004c22b0
    ADD ESP,0x8                         ; 004c22b3
    CMP EAX,ESI                         ; 004c22b6
    JZ 0x004c22d5                       ; 004c22b8
        ;   XREF to: 004c22d5 (CONDITIONAL_JUMP)  ; LAB_004c22d5
    MOV EAX,dword ptr [EBP + -0x4a]     ; 004c22ba
    MOV dword ptr [EBP + 0xfffffca6],EAX ; 004c22bd
    MOV EAX,dword ptr [EBP + -0x46]     ; 004c22c3
    MOV dword ptr [EBP + 0xfffffcaa],EAX ; 004c22c6
    MOV EAX,dword ptr [EBP + -0x42]     ; 004c22cc
    MOV dword ptr [EBP + 0xfffffcae],EAX ; 004c22cf
    LEA EDI,[EBP + 0xfffffc8a]          ; 004c22d5
        ;   Label: LAB_004c22d5
    MOV dword ptr [EBP + 0xfffffcbe],EBX ; 004c22db
    MOV dword ptr [EBP + 0xfffffcc2],EBX ; 004c22e1
    PUSH EDI                            ; 004c22e7
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004c22e8
    PUSH EAX                            ; 004c22ee
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 004c22ef
    CALL dword ptr [ESI + 0x110]        ; 004c22f5
    FLD float ptr [EBP + 0xfffffc8e]    ; 004c22fb
    FLDZ                                ; 004c2301
    ADD ESP,0x8                         ; 004c2303
    FXCH                                ; 004c2306
    FSTP double ptr [EBP + -0x3e]       ; 004c2308
    FCOMP double ptr [EBP + -0x3e]      ; 004c230b
    FNSTSW AX                           ; 004c230e
    SAHF                                ; 004c2310
    JNC 0x004c2348                      ; 004c2311
        ;   XREF to: 004c2348 (CONDITIONAL_JUMP)  ; LAB_004c2348
    FLD double ptr [EBP + -0x3e]        ; 004c2313
    FMUL double ptr [0x005d914f]        ; 004c2316 | DAT_005d914f
    FMUL double ptr [0x005d913f]        ; 004c231c | DAT_005d913f
    PUSH 0x0                            ; 004c2322
    CALL crt_math.c_round_FUN_005b7ff0  ; 004c2324
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [EBP + -0x2]        ; 004c2329
    MOV ECX,dword ptr [EBP + -0x2]      ; 004c232c
    PUSH ECX                            ; 004c232f
    PUSH 0x0                            ; 004c2330
    LEA EAX,[EBP + 0xffffff3e]          ; 004c2332
    PUSH EAX                            ; 004c2338
    MOV ESI,dword ptr [0x006167e0]      ; 004c2339 | g_CGorePtr
    PUSH ESI                            ; 004c233f
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850 ; 004c2340
        ;   XREF to: 004c9850 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 004c2345
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 004c2348
        ;   Label: LAB_004c2348
    FLD float ptr [ESI + 0x25a8]        ; 004c234e
    FLDZ                                ; 004c2354
    FCOMPP                              ; 004c2356
    FNSTSW AX                           ; 004c2358
    SAHF                                ; 004c235a
    JC 0x004c237d                       ; 004c235b
        ;   XREF to: 004c237d (CONDITIONAL_JUMP)  ; LAB_004c237d
    PUSH ESI                            ; 004c235d
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 004c235e
    CALL dword ptr [EAX + 0xf8]         ; 004c2364
    ADD ESP,0x4                         ; 004c236a
    PUSH 0x1                            ; 004c236d
    PUSH 0x1                            ; 004c236f
    MOV EDI,dword ptr [EBP + 0x72]      ; 004c2371
    PUSH EDI                            ; 004c2374
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c2375
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c237a
    PUSH 0x5d8ff3                       ; 004c237d | = "ghoul-eat-?.wav"
        ;   Label: LAB_004c237d
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004c2382
    PUSH EBX                            ; 004c2388
    CALL dword ptr [EAX + 0x34]         ; 004c2389
    ADD ESP,0x8                         ; 004c238c
    JMP 0x004c1c0c                      ; 004c238f
        ;   XREF to: 004c1c0c (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004c2394
        ;   Label: LAB_004c2394
    PUSH EAX                            ; 004c239a
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 004c239b
    CALL dword ptr [ESI + 0xf8]         ; 004c23a1
    ADD ESP,0x4                         ; 004c23a7
    PUSH 0x1                            ; 004c23aa
    PUSH 0x1                            ; 004c23ac
    MOV EAX,dword ptr [EBP + 0x72]      ; 004c23ae
    PUSH EAX                            ; 004c23b1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c23b2
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c23b7
    JMP 0x004c1c0c                      ; 004c23ba
        ;   XREF to: 004c1c0c (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV EDX,dword ptr [EBP + 0x72]      ; 004c23bf
        ;   Label: caseD_b
    PUSH EDX                            ; 004c23c2
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00 ; 004c23c3
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance * this_ptr)
    MOV EAX,[0x01cb8220]                ; 004c23c8 | DAT_01cb8220
    ADD ESP,0x4                         ; 004c23cd
    CMP ESI,0xc                         ; 004c23d0
    JNZ 0x004c23da                      ; 004c23d3
        ;   XREF to: 004c23da (CONDITIONAL_JUMP)  ; LAB_004c23da
    MOV EAX,[0x01cb8224]                ; 004c23d5 | DAT_01cb8224
    PUSH EAX                            ; 004c23da
        ;   Label: LAB_004c23da
    MOV ECX,dword ptr [EBP + 0x72]      ; 004c23db
    PUSH ECX                            ; 004c23de
    LEA ESI,[EBP + 0xfffffede]          ; 004c23df
    LEA EDI,[EBP + 0xffffff62]          ; 004c23e5
    CALL core_skeleton.cpp_FUN_005469a0 ; 004c23eb
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    ADD ESP,0x8                         ; 004c23f0
    LEA EAX,[EBP + 0xffffff62]          ; 004c23f3
    LEA ESI,[EBP + 0xfffffede]          ; 004c23f9
    PUSH EAX                            ; 004c23ff
    MOVSD ES:EDI,ESI                    ; 004c2400
    MOVSD ES:EDI,ESI                    ; 004c2401
    MOVSD ES:EDI,ESI                    ; 004c2402
    PUSH EBX                            ; 004c2403
    LEA ESI,[EBP + -0x56]               ; 004c2404
    CALL core_actor.cpp_FUN_00408d70    ; 004c2407
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004c240c
    LEA EDI,[EBP + 0xfffffea2]          ; 004c240f
    PUSH 0x41400000                     ; 004c2415
    LEA ESI,[EBP + -0x56]               ; 004c241a
    PUSH 0x41000000                     ; 004c241d
    MOVSD ES:EDI,ESI                    ; 004c2422
    MOVSD ES:EDI,ESI                    ; 004c2423
    MOVSD ES:EDI,ESI                    ; 004c2424
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004c2425
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c242a
    ADD ESP,0x8                         ; 004c242d
    FLD float ptr [EBP + 0x76]          ; 004c2430
    FMUL double ptr [0x005d913f]        ; 004c2433 | DAT_005d913f
    PUSH 0x0                            ; 004c2439
    CALL crt_math.c_round_FUN_005b7ff0  ; 004c243b
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [EBP + 0x16]        ; 004c2440
    MOV ESI,dword ptr [EBP + 0x16]      ; 004c2443
    PUSH ESI                            ; 004c2446
    PUSH 0x0                            ; 004c2447
    LEA EAX,[EBP + 0xfffffea2]          ; 004c2449
    PUSH EAX                            ; 004c244f
    MOV EDI,dword ptr [0x006167e0]      ; 004c2450 | g_CGorePtr
    PUSH EDI                            ; 004c2456
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850 ; 004c2457
        ;   XREF to: 004c9850 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 004c245c
    PUSH 0x5d9003                       ; 004c245f | = "ghoul-dig-?.wav @1.3"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004c2464
    PUSH EBX                            ; 004c246a
    CALL dword ptr [EAX + 0x34]         ; 004c246b
    ADD ESP,0x8                         ; 004c246e
    JMP 0x004c1c0c                      ; 004c2471
        ;   XREF to: 004c1c0c (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV EDX,dword ptr [EBP + 0x72]      ; 004c2476
        ;   Label: caseD_d
    PUSH EDX                            ; 004c2479
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00 ; 004c247a
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c247f
    MOV ECX,dword ptr [0x01cb821c]      ; 004c2482 | DAT_01cb821c
    PUSH ECX                            ; 004c2488
    MOV ESI,dword ptr [EBP + 0x72]      ; 004c2489
    PUSH ESI                            ; 004c248c
    LEA ESI,[EBP + 0xfffffdb2]          ; 004c248d
    LEA EDI,[EBP + 0xfffffd22]          ; 004c2493
    CALL core_skeleton.cpp_FUN_005469a0 ; 004c2499
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    ADD ESP,0x8                         ; 004c249e
    LEA EAX,[EBP + 0xfffffd22]          ; 004c24a1
    LEA ESI,[EBP + 0xfffffdb2]          ; 004c24a7
    PUSH EAX                            ; 004c24ad
    MOVSD ES:EDI,ESI                    ; 004c24ae
    MOVSD ES:EDI,ESI                    ; 004c24af
    MOVSD ES:EDI,ESI                    ; 004c24b0
    PUSH EBX                            ; 004c24b1
    LEA ESI,[EBP + 0xfffffd16]          ; 004c24b2
    CALL core_actor.cpp_FUN_00408d70    ; 004c24b8
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004c24bd
    LEA EDI,[EBP + 0xfffffd76]          ; 004c24c0
    PUSH 0x41400000                     ; 004c24c6
    LEA ESI,[EBP + 0xfffffd16]          ; 004c24cb
    PUSH 0x41000000                     ; 004c24d1
    MOVSD ES:EDI,ESI                    ; 004c24d6
    MOVSD ES:EDI,ESI                    ; 004c24d7
    MOVSD ES:EDI,ESI                    ; 004c24d8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004c24d9
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c24de
    ADD ESP,0x8                         ; 004c24e1
    FLD float ptr [EBP + 0x76]          ; 004c24e4
    FMUL double ptr [0x005d913f]        ; 004c24e7 | DAT_005d913f
    PUSH 0x0                            ; 004c24ed
    CALL crt_math.c_round_FUN_005b7ff0  ; 004c24ef
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [EBP + 0xa]         ; 004c24f4
    MOV EDI,dword ptr [EBP + 0xa]       ; 004c24f7
    PUSH EDI                            ; 004c24fa
    PUSH 0x0                            ; 004c24fb
    LEA EAX,[EBP + 0xfffffd76]          ; 004c24fd
    PUSH EAX                            ; 004c2503
    MOV EAX,[0x006167e0]                ; 004c2504 | g_CGorePtr
    PUSH EAX                            ; 004c2509
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850 ; 004c250a
        ;   XREF to: 004c9850 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 004c250f
    PUSH 0x5d9018                       ; 004c2512 | = "ghoul-eat-?.wav @1.3"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004c2517
    PUSH EBX                            ; 004c251d
    CALL dword ptr [EAX + 0x34]         ; 004c251e
    ADD ESP,0x8                         ; 004c2521
    JMP 0x004c1c0c                      ; 004c2524
        ;   XREF to: 004c1c0c (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV EDX,dword ptr [EBP + 0x72]      ; 004c2529
        ;   Label: caseD_10
    PUSH EDX                            ; 004c252c
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00 ; 004c252d
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c2532
    MOV ECX,dword ptr [0x01cb821c]      ; 004c2535 | DAT_01cb821c
    PUSH ECX                            ; 004c253b
    MOV ESI,dword ptr [EBP + 0x72]      ; 004c253c
    PUSH ESI                            ; 004c253f
    LEA ESI,[EBP + 0xfffffd82]          ; 004c2540
    LEA EDI,[EBP + 0xfffffd5e]          ; 004c2546
    CALL core_skeleton.cpp_FUN_005469a0 ; 004c254c
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    ADD ESP,0x8                         ; 004c2551
    LEA EAX,[EBP + 0xfffffd5e]          ; 004c2554
    LEA ESI,[EBP + 0xfffffd82]          ; 004c255a
    PUSH EAX                            ; 004c2560
    MOVSD ES:EDI,ESI                    ; 004c2561
    MOVSD ES:EDI,ESI                    ; 004c2562
    MOVSD ES:EDI,ESI                    ; 004c2563
    PUSH EBX                            ; 004c2564
    LEA ESI,[EBP + 0xfffffd8e]          ; 004c2565
    CALL core_actor.cpp_FUN_00408d70    ; 004c256b
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004c2570
    LEA EDI,[EBP + 0xfffffd52]          ; 004c2573
    PUSH 0x41400000                     ; 004c2579
    LEA ESI,[EBP + 0xfffffd8e]          ; 004c257e
    PUSH 0x41000000                     ; 004c2584
    MOVSD ES:EDI,ESI                    ; 004c2589
    MOVSD ES:EDI,ESI                    ; 004c258a
    MOVSD ES:EDI,ESI                    ; 004c258b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004c258c
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c2591
    ADD ESP,0x8                         ; 004c2594
    FLD float ptr [EBP + 0x76]          ; 004c2597
    FMUL double ptr [0x005d913f]        ; 004c259a | DAT_005d913f
    PUSH 0x0                            ; 004c25a0
    CALL crt_math.c_round_FUN_005b7ff0  ; 004c25a2
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [EBP + -0xe]        ; 004c25a7
    MOV EDI,dword ptr [EBP + -0xe]      ; 004c25aa
    PUSH EDI                            ; 004c25ad
    PUSH 0x0                            ; 004c25ae
    LEA EAX,[EBP + 0xfffffd52]          ; 004c25b0
    PUSH EAX                            ; 004c25b6
    MOV EAX,[0x006167e0]                ; 004c25b7 | g_CGorePtr
    PUSH EAX                            ; 004c25bc
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850 ; 004c25bd
        ;   XREF to: 004c9850 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 004c25c2
    PUSH 0x3f000000                     ; 004c25c5
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 004c25ca
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 004c25cf
    TEST EAX,EAX                        ; 004c25d2
    JNZ 0x004c2614                      ; 004c25d4
        ;   XREF to: 004c2614 (CONDITIONAL_JUMP)  ; LAB_004c2614
    MOV ESI,0x5d9042                    ; 004c25d6 | = "ghoul-dig-?.wav @1.3"
    LEA EDI,[EBP + 0xfffffcc6]          ; 004c25db
        ;   Label: LAB_004c25db
    PUSH EDI                            ; 004c25e1
    MOV AL,byte ptr [ESI]               ; 004c25e2 | = "ghoul-dig-?.wav @1.3" | s_ghoul_dig_wav_1_3_005d9042+2 | s_ghoul_eat_wav_1_3_005d902d
        ;   Label: LAB_004c25e2
    MOV byte ptr [EDI],AL               ; 004c25e4
    CMP AL,0x0                          ; 004c25e6
    JZ 0x004c25fa                       ; 004c25e8
        ;   XREF to: 004c25fa (CONDITIONAL_JUMP)  ; LAB_004c25fa
    MOV AL,byte ptr [ESI + 0x1]         ; 004c25ea | s_ghoul_dig_wav_1_3_005d9042+1 | s_ghoul_dig_wav_1_3_005d9042+3 | s_ghoul_eat_wav_1_3_005d902d+1
    ADD ESI,0x2                         ; 004c25ed
    MOV byte ptr [EDI + 0x1],AL         ; 004c25f0
    ADD EDI,0x2                         ; 004c25f3
    CMP AL,0x0                          ; 004c25f6
    JNZ 0x004c25e2                      ; 004c25f8
        ;   XREF to: 004c25e2 (CONDITIONAL_JUMP)  ; LAB_004c25e2
    POP EDI                             ; 004c25fa
        ;   Label: LAB_004c25fa
    LEA EAX,[EBP + 0xfffffcc6]          ; 004c25fb
    PUSH EAX                            ; 004c2601
    MOV ESI,dword ptr [EBX + 0x2b0]     ; 004c2602
    PUSH EBX                            ; 004c2608
    CALL dword ptr [ESI + 0x34]         ; 004c2609
    ADD ESP,0x8                         ; 004c260c
    JMP 0x004c1c0c                      ; 004c260f
        ;   XREF to: 004c1c0c (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV ESI,0x5d902d                    ; 004c2614 | = "ghoul-eat-?.wav @1.3"
        ;   Label: LAB_004c2614
    JMP 0x004c25db                      ; 004c2619
        ;   XREF to: 004c25db (UNCONDITIONAL_JUMP)  ; LAB_004c25db
    PUSH ESI                            ; 004c261b
        ;   Label: caseD_6
    PUSH EBX                            ; 004c261c
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00 ; 004c261d
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004c2622
    JMP 0x004c1c0c                      ; 004c2625
        ;   XREF to: 004c1c0c (UNCONDITIONAL_JUMP)  ; caseD_12
    LEA EAX,[EBP + 0x1a]                ; 004c262a
        ;   Label: LAB_004c262a
    PUSH EAX                            ; 004c262d
    MOV EAX,dword ptr [EBP + 0x72]      ; 004c262e
    PUSH EAX                            ; 004c2631
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 004c2632
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    MOV ESI,EAX                         ; 004c2637
    SUB EAX,0x5                         ; 004c2639
    ADD ESP,0x8                         ; 004c263c
    CMP EAX,0xd                         ; 004c263f
    JA 0x004c261b                       ; 004c2642
        ;   XREF to: 004c261b (CONDITIONAL_JUMP)  ; caseD_f
    JMP dword ptr [EAX*0x4 + 0x4c1b30]  ; 004c2644 | caseD_5 | caseD_f | caseD_a
        ;   Label: switchD
    PUSH 0x1                            ; 004c264b
        ;   Label: LAB_004c264b
    PUSH 0x0                            ; 004c264d
    LEA EAX,[EBX + 0x2b4]               ; 004c264f
    PUSH EAX                            ; 004c2655
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c2656
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c265b
    PUSH EBX                            ; 004c265e
    MOV EAX,0x5d9057                    ; 004c265f | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 004c2664 | = "%s confused while walking to scriptDe..."
    MOV EDI,dword ptr [0x00609ed0]      ; 004c2665 | g_CConsolePtr
    PUSH EDI                            ; 004c266b | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 004c266c
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    JMP 0x004c1cee                      ; 004c2671
        ;   XREF to: 004c1cee (UNCONDITIONAL_JUMP)  ; LAB_004c1cee
    PUSH 0x1                            ; 004c2676
        ;   Label: LAB_004c2676
    PUSH 0x11                           ; 004c2678
    JMP 0x004c1ce2                      ; 004c267a
        ;   XREF to: 004c1ce2 (UNCONDITIONAL_JUMP)  ; LAB_004c1ce2
    JBE 0x004c2676                      ; 004c267f
        ;   XREF to: 004c2676 (CONDITIONAL_JUMP)  ; LAB_004c2676
        ;   Label: LAB_004c267f
    CMP EAX,0x3                         ; 004c2681
    JZ 0x004c264b                       ; 004c2684
        ;   XREF to: 004c264b (CONDITIONAL_JUMP)  ; LAB_004c264b
    PUSH 0x1                            ; 004c2686
        ;   Label: LAB_004c2686
    PUSH 0x0                            ; 004c2688
    JMP 0x004c1ce2                      ; 004c268a
        ;   XREF to: 004c1ce2 (UNCONDITIONAL_JUMP)  ; LAB_004c1ce2
    MOV ECX,dword ptr [EBX + 0x10a64]   ; 004c268f
        ;   Label: caseD_a
    TEST ECX,ECX                        ; 004c2695
    JNZ 0x004c2715                      ; 004c2697
        ;   XREF to: 004c2715 (CONDITIONAL_JUMP)  ; LAB_004c2715
    CMP dword ptr [EBX + 0x10b14],0x1   ; 004c269d
    JGE 0x004c2715                      ; 004c26a4
        ;   XREF to: 004c2715 (CONDITIONAL_JUMP)  ; LAB_004c2715
    CMP dword ptr [EBX + 0xdc],0x0      ; 004c26a6
    JNZ 0x004c2715                      ; 004c26ad
        ;   XREF to: 004c2715 (CONDITIONAL_JUMP)  ; LAB_004c2715
    PUSH ECX                            ; 004c26af
    PUSH ESI                            ; 004c26b0
    LEA ESI,[EBP + 0xfffffe4e]          ; 004c26b1
    LEA EDI,[EBP + 0xfffffeea]          ; 004c26b7
    CALL core_skeleton.cpp_FUN_005469a0 ; 004c26bd
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    ADD ESP,0x8                         ; 004c26c2
    LEA EAX,[EBP + 0xfffffeea]          ; 004c26c5
    LEA ESI,[EBP + 0xfffffe4e]          ; 004c26cb
    PUSH EAX                            ; 004c26d1
    MOVSD ES:EDI,ESI                    ; 004c26d2
    MOVSD ES:EDI,ESI                    ; 004c26d3
    MOVSD ES:EDI,ESI                    ; 004c26d4
    PUSH EBX                            ; 004c26d5
    LEA ESI,[EBP + 0xffffff32]          ; 004c26d6
    CALL core_actor.cpp_FUN_00408d70    ; 004c26dc
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004c26e1
    PUSH 0x0                            ; 004c26e4
    LEA EAX,[EBP + 0xfffffe8a]          ; 004c26e6
    LEA EDI,[EBP + 0xfffffe8a]          ; 004c26ec
    PUSH EAX                            ; 004c26f2
    MOV EDX,dword ptr [0x006167e0]      ; 004c26f3 | g_CGorePtr
    LEA ESI,[EBP + 0xffffff32]          ; 004c26f9
    PUSH EDX                            ; 004c26ff
    MOVSD ES:EDI,ESI                    ; 004c2700
    MOVSD ES:EDI,ESI                    ; 004c2701
    MOVSD ES:EDI,ESI                    ; 004c2702
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0 ; 004c2703
        ;   XREF to: 004c9ad0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 004c2708
    MOV dword ptr [EBX + 0x10a64],0x1   ; 004c270b
    MOV ECX,dword ptr [EBX + 0x10b18]   ; 004c2715
        ;   Label: LAB_004c2715
    MOV dword ptr [EBX + 0x10b60],0x0   ; 004c271b
    TEST ECX,ECX                        ; 004c2725
    JLE 0x004c2875                      ; 004c2727
        ;   XREF to: 004c2875 (CONDITIONAL_JUMP)  ; LAB_004c2875
    MOV EAX,[0x01c2a370]                ; 004c272d | DAT_01c2a370
        ;   Label: LAB_004c272d
    MOV EDI,dword ptr [EBX + 0x10b00]   ; 004c2732
    SUB EDI,EAX                         ; 004c2738
    MOV dword ptr [EBX + 0x10b00],EDI   ; 004c273a
    TEST EDI,EDI                        ; 004c2740
    JLE 0x004c2887                      ; 004c2742
        ;   XREF to: 004c2887 (CONDITIONAL_JUMP)  ; LAB_004c2887
    CMP dword ptr [EBX + 0x10b14],0x0   ; 004c2748
        ;   Label: LAB_004c2748
    JLE 0x004c2776                      ; 004c274f
        ;   XREF to: 004c2776 (CONDITIONAL_JUMP)  ; caseD_10
    MOV EDX,dword ptr [EBX + 0x10b04]   ; 004c2751
    TEST EDX,EDX                        ; 004c2757
    JLE 0x004c291a                      ; 004c2759
        ;   XREF to: 004c291a (CONDITIONAL_JUMP)  ; LAB_004c291a
    MOV EAX,[0x01c2a370]                ; 004c275f | DAT_01c2a370
    MOV ESI,EDX                         ; 004c2764
    SUB ESI,EAX                         ; 004c2766
    MOV dword ptr [EBX + 0x10b04],ESI   ; 004c2768
    TEST ESI,ESI                        ; 004c276e
    JLE 0x004c28ed                      ; 004c2770
        ;   XREF to: 004c28ed (CONDITIONAL_JUMP)  ; LAB_004c28ed
    FLD float ptr [EBP + 0x62]          ; 004c2776
        ;   Label: caseD_3
    FLDZ                                ; 004c2779
    FCOMPP                              ; 004c277b
    FNSTSW AX                           ; 004c277d
    SAHF                                ; 004c277f
    JA 0x004c1d09                       ; 004c2780
        ;   XREF to: 004c1d09 (CONDITIONAL_JUMP)  ; LAB_004c1d09
    FLD float ptr [EBX + 0x10b0c]       ; 004c2786
    FLDZ                                ; 004c278c
    FCOMPP                              ; 004c278e
    FNSTSW AX                           ; 004c2790
    SAHF                                ; 004c2792
    JC 0x004c1d09                       ; 004c2793
        ;   XREF to: 004c1d09 (CONDITIONAL_JUMP)  ; LAB_004c1d09
    CMP dword ptr [EBX + 0x10a78],0x0   ; 004c2799
    JZ 0x004c1d09                       ; 004c27a0
        ;   XREF to: 004c1d09 (CONDITIONAL_JUMP)  ; LAB_004c1d09
    PUSH 0x3f060a92                     ; 004c27a6
    PUSH 0x40400000                     ; 004c27ab
    XOR ESI,ESI                         ; 004c27b0
    MOV EAX,dword ptr [EBP + 0x62]      ; 004c27b2
    MOV dword ptr [EBP + 0xfffffd2e],ESI ; 004c27b5
    MOV dword ptr [EBP + 0xfffffd36],EAX ; 004c27bb
    LEA EAX,[EBP + 0xfffffd2e]          ; 004c27c1
    MOV dword ptr [EBP + 0xfffffd32],ESI ; 004c27c7
    PUSH EAX                            ; 004c27cd
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004c27ce
    PUSH EAX                            ; 004c27d4
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004c27d5
    CALL dword ptr [EDX + 0xcc]         ; 004c27db
    ADD ESP,0x4                         ; 004c27e1
    PUSH EAX                            ; 004c27e4
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004c27e5
    PUSH ESI                            ; 004c27eb
    ADD EAX,0x2b4                       ; 004c27ec
    PUSH EAX                            ; 004c27f1
    LEA ESI,[EBP + 0xfffffd6a]          ; 004c27f2
    LEA EDI,[EBP + 0xfffffe1e]          ; 004c27f8
    CALL core_skeleton.cpp_FUN_005469a0 ; 004c27fe
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    LEA ESI,[EBP + 0xfffffd6a]          ; 004c2803
    LEA EAX,[EBP + 0xfffffe1e]          ; 004c2809
    ADD ESP,0x8                         ; 004c280f
    MOVSD ES:EDI,ESI                    ; 004c2812
    MOVSD ES:EDI,ESI                    ; 004c2813
    MOVSD ES:EDI,ESI                    ; 004c2814
    PUSH EAX                            ; 004c2815
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004c2816
    PUSH EAX                            ; 004c281c
    LEA ESI,[EBP + 0xfffffef6]          ; 004c281d
    CALL core_actor.cpp_FUN_00408d70    ; 004c2823
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004c2828
    LEA EAX,[EBP + 0xfffffdca]          ; 004c282b
    PUSH EAX                            ; 004c2831
    LEA EDI,[EBP + 0xfffffdca]          ; 004c2832
    LEA ESI,[EBP + 0xfffffef6]          ; 004c2838
    PUSH EBX                            ; 004c283e
    MOVSD ES:EDI,ESI                    ; 004c283f
    MOVSD ES:EDI,ESI                    ; 004c2840
    MOVSD ES:EDI,ESI                    ; 004c2841
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 004c2842
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004c2847
    CMP EAX,0x1                         ; 004c284a
    JZ 0x004c1d09                       ; 004c284d
        ;   XREF to: 004c1d09 (CONDITIONAL_JUMP)  ; LAB_004c1d09
    PUSH 0x1                            ; 004c2853
    PUSH 0x1                            ; 004c2855
    LEA EAX,[EBX + 0x2b4]               ; 004c2857
    PUSH EAX                            ; 004c285d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c285e
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c2863
    MOV dword ptr [EBX + 0x2578],0x0    ; 004c2866
    JMP 0x004c1d09                      ; 004c2870
        ;   XREF to: 004c1d09 (UNCONDITIONAL_JUMP)  ; LAB_004c1d09
    CMP dword ptr [EBX + 0x10b14],0x0   ; 004c2875
        ;   Label: LAB_004c2875
    JG 0x004c272d                       ; 004c287c
        ;   XREF to: 004c272d (CONDITIONAL_JUMP)  ; LAB_004c272d
    JMP 0x004c2748                      ; 004c2882
        ;   XREF to: 004c2748 (UNCONDITIONAL_JUMP)  ; LAB_004c2748
    CMP dword ptr [EBX + 0x10b14],0x1   ; 004c2887
        ;   Label: LAB_004c2887
    JGE 0x004c2896                      ; 004c288e
        ;   XREF to: 004c2896 (CONDITIONAL_JUMP)  ; LAB_004c2896
    DEC dword ptr [EBX + 0x10b18]       ; 004c2890
    CMP dword ptr [EBX + 0x10b18],0x0   ; 004c2896
        ;   Label: LAB_004c2896
    JG 0x004c28ac                       ; 004c289d
        ;   XREF to: 004c28ac (CONDITIONAL_JUMP)  ; LAB_004c28ac
    CMP dword ptr [EBX + 0x10b14],0x0   ; 004c289f
    JLE 0x004c2748                      ; 004c28a6
        ;   XREF to: 004c2748 (CONDITIONAL_JUMP)  ; LAB_004c2748
    PUSH 0x41400000                     ; 004c28ac
        ;   Label: LAB_004c28ac
    PUSH 0x3f800000                     ; 004c28b1
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004c28b6
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c28bb
    ADD ESP,0x8                         ; 004c28be
    FLD float ptr [EBP + 0x76]          ; 004c28c1
    FMUL double ptr [0x005d90ff]        ; 004c28c4 | DAT_005d90ff
    PUSH 0x1                            ; 004c28ca
    LEA EAX,[EBX + 0x2b4]               ; 004c28cc
    PUSH 0xf                            ; 004c28d2
    CALL crt_math.c_round_FUN_005b7ff0  ; 004c28d4
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    PUSH EAX                            ; 004c28d9
    FISTP dword ptr [EBX + 0x10b00]     ; 004c28da
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c28e0
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c28e5
    JMP 0x004c2748                      ; 004c28e8
        ;   XREF to: 004c2748 (UNCONDITIONAL_JUMP)  ; LAB_004c2748
    PUSH 0x41f00000                     ; 004c28ed
        ;   Label: LAB_004c28ed
    PUSH 0x0                            ; 004c28f2
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004c28f4
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c28f9
    FLD float ptr [EBP + 0x76]          ; 004c28fc
    FCHS                                ; 004c28ff
    FMUL float ptr [0x005d9117]         ; 004c2901 | DAT_005d9117
    ADD ESP,0x8                         ; 004c2907
    CALL crt_math.c_round_FUN_005b7ff0  ; 004c290a
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [EBX + 0x10b04]     ; 004c290f
    JMP 0x004c2776                      ; 004c2915
        ;   XREF to: 004c2776 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV EAX,[0x01c2a370]                ; 004c291a | DAT_01c2a370
        ;   Label: LAB_004c291a
    XOR ECX,ECX                         ; 004c291f
    LEA ESI,[EDX + EAX*0x1]             ; 004c2921
    MOV dword ptr [EBP + 0x32],ECX      ; 004c2924
    MOV dword ptr [EBX + 0x10b04],ESI   ; 004c2927
    TEST ESI,ESI                        ; 004c292d
    JL 0x004c2a4b                       ; 004c292f
        ;   XREF to: 004c2a4b (CONDITIONAL_JUMP)  ; LAB_004c2a4b
    MOV dword ptr [EBX + 0x10b04],ECX   ; 004c2935
    MOV EAX,dword ptr [EBX + 0x3444]    ; 004c293b
        ;   Label: LAB_004c293b
    MOV dword ptr [EBP + 0x6a],EAX      ; 004c2941
    FLD float ptr [EBP + 0x6a]          ; 004c2944
    FCOMP float ptr [EBX + 0x3440]      ; 004c2947
    FNSTSW AX                           ; 004c294d
    SAHF                                ; 004c294f
    JNC 0x004c295b                      ; 004c2950
        ;   XREF to: 004c295b (CONDITIONAL_JUMP)  ; LAB_004c295b
    MOV EAX,dword ptr [EBX + 0x24fc]    ; 004c2952
    MOV dword ptr [EBP + 0x6a],EAX      ; 004c2958
    FLD float ptr [EBP + 0x6a]          ; 004c295b
        ;   Label: LAB_004c295b
    FCOMP float ptr [EBX + 0x3440]      ; 004c295e
    FNSTSW AX                           ; 004c2964
    SAHF                                ; 004c2966
    JC 0x004c2b2b                       ; 004c2967
        ;   XREF to: 004c2b2b (CONDITIONAL_JUMP)  ; LAB_004c2b2b
    XOR ESI,ESI                         ; 004c296d
        ;   Label: LAB_004c296d
    MOV dword ptr [EBP + 0x76],ESI      ; 004c296f
        ;   Label: LAB_004c296f
    FILD dword ptr [EBP + 0x76]         ; 004c2972
    FMUL float ptr [0x005d9157]         ; 004c2975 | DAT_005d9157
    MOV ECX,dword ptr [0x0061b5a8]      ; 004c297b | g_CDemonSetPtr
    FMUL float ptr [0x005d915b]         ; 004c2981 | DAT_005d915b
    PUSH ECX                            ; 004c2987 | g_CDemonSetInstance
    FSTP float ptr [EBP + -0x6]         ; 004c2988
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 004c298b
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004c2990
    PUSH EBX                            ; 004c2993
    MOV EDI,dword ptr [0x0061b5a8]      ; 004c2994 | g_CDemonSetPtr
    PUSH EDI                            ; 004c299a | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 004c299b
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    FLD float ptr [EBP + -0x6]          ; 004c29a0
    FLD ST0                             ; 004c29a3
    FCOS                                ; 004c29a5
    FXCH                                ; 004c29a7
    FSIN                                ; 004c29a9
    FXCH                                ; 004c29ab
    FLD double ptr [0x005d915f]         ; 004c29ad | DAT_005d915f
    FXCH                                ; 004c29b3
    FMUL ST1                            ; 004c29b5
    FXCH ST2                            ; 004c29b7
    FMULP                               ; 004c29b9
    FLD float ptr [EBX + 0x24]          ; 004c29bb
    ADD ESP,0x8                         ; 004c29be
    FADD float ptr [EBP + 0x6a]         ; 004c29c1
    SUB ESP,0x4                         ; 004c29c4
    FSTP float ptr [ESP]                ; 004c29c7
    FLD float ptr [EBX + 0x24]          ; 004c29ca
    FADD float ptr [EBX + 0x3440]       ; 004c29cd
    SUB ESP,0x4                         ; 004c29d3
    FSTP float ptr [ESP]                ; 004c29d6
    PUSH dword ptr [EBX + 0x3434]       ; 004c29d9
    SUB ESP,0x4                         ; 004c29df
    FXCH                                ; 004c29e2
    FSTP float ptr [ESP]                ; 004c29e4
    SUB ESP,0x4                         ; 004c29e7
    FSTP float ptr [ESP]                ; 004c29ea
    PUSH dword ptr [EBX + 0x28]         ; 004c29ed
    MOV EAX,[0x0061b5a8]                ; 004c29f0 | g_CDemonSetPtr
    PUSH dword ptr [EBX + 0x20]         ; 004c29f5
    PUSH EAX                            ; 004c29f8 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00537030 ; 004c29f9
        ;   XREF to: 00537030 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00537030()
    MOV EDX,dword ptr [0x0061b5a8]      ; 004c29fe | g_CDemonSetPtr
    MOV dword ptr [EBP + 0x76],EAX      ; 004c2a04
    ADD ESP,0x20                        ; 004c2a07
    FLD float ptr [EBP + 0x76]          ; 004c2a0a
    PUSH EDX                            ; 004c2a0d | g_CDemonSetInstance
    FSTP float ptr [EBP + 0x5e]         ; 004c2a0e
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 004c2a11
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    FLD float ptr [EBP + 0x5e]          ; 004c2a16
    FLD1                                ; 004c2a19
    ADD ESP,0x4                         ; 004c2a1b
    FCOMPP                              ; 004c2a1e
    FNSTSW AX                           ; 004c2a20
    SAHF                                ; 004c2a22
    JBE 0x004c2b3f                      ; 004c2a23
        ;   XREF to: 004c2b3f (CONDITIONAL_JUMP)  ; LAB_004c2b3f
    CMP ESI,0x4                         ; 004c2a29
        ;   Label: LAB_004c2a29
    JGE 0x004c2b4e                      ; 004c2a2c
        ;   XREF to: 004c2b4e (CONDITIONAL_JUMP)  ; LAB_004c2b4e
    MOV dword ptr [EBX + 0x10b04],0x3   ; 004c2a32
    MOV dword ptr [EBX + 0x10a78],0x0   ; 004c2a3c
    JMP 0x004c2776                      ; 004c2a46
        ;   XREF to: 004c2776 (UNCONDITIONAL_JUMP)  ; caseD_10
    PUSH dword ptr [EBP + 0x92]         ; 004c2a4b
        ;   Label: LAB_004c2a4b
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004c2a51
    PUSH EBX                            ; 004c2a57
    CALL dword ptr [EAX + 0x150]        ; 004c2a58
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004c2a5e
    ADD ESP,0x8                         ; 004c2a64
    TEST EAX,EAX                        ; 004c2a67
    JZ 0x004c2b1c                       ; 004c2a69
        ;   XREF to: 004c2b1c (CONDITIONAL_JUMP)  ; LAB_004c2b1c
    LEA EDX,[EBX + 0x20]                ; 004c2a6f
    LEA EDI,[EBP + 0xffffff7a]          ; 004c2a72
    LEA ESI,[EBP + 0xfffffda6]          ; 004c2a78
    FLD float ptr [EDX + 0x4]           ; 004c2a7e
    FLD float ptr [EDX + 0x8]           ; 004c2a81
    FLD float ptr [EDX]                 ; 004c2a84
    LEA EDX,[EBP + 0xffffff4a]          ; 004c2a86
    FSUB float ptr [EAX + 0x20]         ; 004c2a8c
    FXCH ST2                            ; 004c2a8f
    FSUB float ptr [EAX + 0x24]         ; 004c2a91
    FXCH                                ; 004c2a94
    FSUB float ptr [EAX + 0x28]         ; 004c2a96
    FXCH ST2                            ; 004c2a99
    FSTP float ptr [EBP + 0xfffffda6]   ; 004c2a9b
    FSTP float ptr [EBP + 0xfffffdaa]   ; 004c2aa1
    FSTP float ptr [EBP + 0xfffffdae]   ; 004c2aa7
    LEA EAX,[EBP + 0xffffff7a]          ; 004c2aad
    MOVSD ES:EDI,ESI                    ; 004c2ab3
    MOVSD ES:EDI,ESI                    ; 004c2ab4
    MOVSD ES:EDI,ESI                    ; 004c2ab5
    CMP EDX,EAX                         ; 004c2ab6
    JZ 0x004c2adb                       ; 004c2ab8
        ;   XREF to: 004c2adb (CONDITIONAL_JUMP)  ; LAB_004c2adb
    MOV EAX,dword ptr [EBP + 0xffffff7a] ; 004c2aba
    MOV dword ptr [EBP + 0xffffff4a],EAX ; 004c2ac0
    MOV EAX,dword ptr [EBP + 0xffffff7e] ; 004c2ac6
    MOV dword ptr [EBP + 0xffffff4e],EAX ; 004c2acc
    MOV EAX,dword ptr [EBP + -0x7e]     ; 004c2ad2
    MOV dword ptr [EBP + 0xffffff52],EAX ; 004c2ad5
    FLD float ptr [EBP + 0xffffff4e]    ; 004c2adb
        ;   Label: LAB_004c2adb
    FMUL ST0                            ; 004c2ae1
    FLD float ptr [EBP + 0xffffff4a]    ; 004c2ae3
    FMUL ST0                            ; 004c2ae9
    FADDP                               ; 004c2aeb
    FLD float ptr [EBP + 0xffffff52]    ; 004c2aed
    FMUL ST0                            ; 004c2af3
    FADDP                               ; 004c2af5
    FSTP float ptr [EBP + 0xe]          ; 004c2af7
    MOV EAX,dword ptr [EBP + 0xe]       ; 004c2afa
    MOV EDX,dword ptr [0x01caf5b4]      ; 004c2afd | DAT_01caf5b4
    SAR EAX,0x1                         ; 004c2b03
    ADD EAX,EDX                         ; 004c2b05
    MOV dword ptr [EBP + 0x12],EAX      ; 004c2b07
    FLD float ptr [EBP + 0x12]          ; 004c2b0a
    FCOMP double ptr [0x005d90ef]       ; 004c2b0d | DAT_005d90ef
    FNSTSW AX                           ; 004c2b13
    SAHF                                ; 004c2b15
    JC 0x004c293b                       ; 004c2b16
        ;   XREF to: 004c293b (CONDITIONAL_JUMP)  ; LAB_004c293b
    CMP dword ptr [EBP + 0x32],0x0      ; 004c2b1c
        ;   Label: LAB_004c2b1c
    JNZ 0x004c293b                      ; 004c2b20
        ;   XREF to: 004c293b (CONDITIONAL_JUMP)  ; LAB_004c293b
    JMP 0x004c2776                      ; 004c2b26
        ;   XREF to: 004c2776 (UNCONDITIONAL_JUMP)  ; caseD_10
    FLD float ptr [EBX + 0x3440]        ; 004c2b2b
        ;   Label: LAB_004c2b2b
    FADD double ptr [0x005d910f]        ; 004c2b31 | DAT_005d910f
    FSTP float ptr [EBP + 0x6a]         ; 004c2b37
    JMP 0x004c296d                      ; 004c2b3a
        ;   XREF to: 004c296d (UNCONDITIONAL_JUMP)  ; LAB_004c296d
    INC ESI                             ; 004c2b3f
        ;   Label: LAB_004c2b3f
    CMP ESI,0x4                         ; 004c2b40
    JL 0x004c296f                       ; 004c2b43
        ;   XREF to: 004c296f (CONDITIONAL_JUMP)  ; LAB_004c296f
    JMP 0x004c2a29                      ; 004c2b49
        ;   XREF to: 004c2a29 (UNCONDITIONAL_JUMP)  ; LAB_004c2a29
    MOV EAX,dword ptr [EBX + 0x10b14]   ; 004c2b4e
        ;   Label: LAB_004c2b4e
    INC EAX                             ; 004c2b54
    MOV dword ptr [EBP + 0x76],EAX      ; 004c2b55
    FILD dword ptr [EBP + 0x76]         ; 004c2b58
    FMUL double ptr [0x005d9167]        ; 004c2b5b | DAT_005d9167
    SUB ESP,0x4                         ; 004c2b61
    FSTP float ptr [ESP]                ; 004c2b64
    PUSH 0x41200000                     ; 004c2b67
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004c2b6c
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    ADD ESP,0x8                         ; 004c2b71
    PUSH 0x1                            ; 004c2b74
    MOV dword ptr [EBP + 0x76],EAX      ; 004c2b76
    LEA EAX,[EBX + 0x2b4]               ; 004c2b79
    PUSH 0x10                           ; 004c2b7f
    FLD float ptr [EBP + 0x76]          ; 004c2b81
    PUSH EAX                            ; 004c2b84
    FSTP float ptr [EBX + 0x25a8]       ; 004c2b85
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c2b8b
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c2b90
    JMP 0x004c2776                      ; 004c2b93
        ;   XREF to: 004c2776 (UNCONDITIONAL_JUMP)  ; caseD_10
    FLD float ptr [EBX + 0x10b54]       ; 004c2b98
        ;   Label: caseD_0
    FLDZ                                ; 004c2b9e
    FCOMPP                              ; 004c2ba0
    FNSTSW AX                           ; 004c2ba2
    SAHF                                ; 004c2ba4
    JNC 0x004c2bbe                      ; 004c2ba5
        ;   XREF to: 004c2bbe (CONDITIONAL_JUMP)  ; LAB_004c2bbe
    FLD float ptr [EBX + 0x10b54]       ; 004c2ba7
    FSUB float ptr [EBP + 0x92]         ; 004c2bad
    FSTP float ptr [EBX + 0x10b54]      ; 004c2bb3
    JMP 0x004c2776                      ; 004c2bb9
        ;   XREF to: 004c2776 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV EAX,dword ptr [EBX + 0x10b58]   ; 004c2bbe
        ;   Label: LAB_004c2bbe
    TEST EAX,EAX                        ; 004c2bc4
    JZ 0x004c2cb2                       ; 004c2bc6
        ;   XREF to: 004c2cb2 (CONDITIONAL_JUMP)  ; LAB_004c2cb2
    FLD float ptr [EAX + 0x20]          ; 004c2bcc
    FLD float ptr [EAX + 0x24]          ; 004c2bcf
    FLD float ptr [EAX + 0x28]          ; 004c2bd2
    LEA EDX,[EBX + 0x20]                ; 004c2bd5
    LEA EDI,[EBP + 0xfffffe66]          ; 004c2bd8
    LEA ESI,[EBP + 0xfffffde2]          ; 004c2bde
    FXCH ST2                            ; 004c2be4
    FSUB float ptr [EDX]                ; 004c2be6
    FXCH                                ; 004c2be8
    FSUB float ptr [EDX + 0x4]          ; 004c2bea
    FXCH ST2                            ; 004c2bed
    FSUB float ptr [EDX + 0x8]          ; 004c2bef
    FXCH                                ; 004c2bf2
    FSTP float ptr [EBP + 0xfffffde2]   ; 004c2bf4
    FXCH                                ; 004c2bfa
    FSTP float ptr [EBP + 0xfffffde6]   ; 004c2bfc
    FSTP float ptr [EBP + 0xfffffdea]   ; 004c2c02
    MOVSD ES:EDI,ESI                    ; 004c2c08
    MOVSD ES:EDI,ESI                    ; 004c2c09
    MOVSD ES:EDI,ESI                    ; 004c2c0a
    LEA EDI,[EBP + 0xfffffe7e]          ; 004c2c0b
    LEA ESI,[EBP + 0xfffffe66]          ; 004c2c11
    LEA EAX,[EBP + 0xfffffe7e]          ; 004c2c17
    MOVSD ES:EDI,ESI                    ; 004c2c1d
    MOVSD ES:EDI,ESI                    ; 004c2c1e
    MOVSD ES:EDI,ESI                    ; 004c2c1f
    FLD float ptr [EAX + 0x4]           ; 004c2c20
    FMUL ST0                            ; 004c2c23
    FLD float ptr [EAX]                 ; 004c2c25
    FMUL ST0                            ; 004c2c27
    FADDP                               ; 004c2c29
    FLD float ptr [EAX + 0x8]           ; 004c2c2b
    FMUL ST0                            ; 004c2c2e
    FADDP                               ; 004c2c30
    LEA EAX,[EBP + -0xa]                ; 004c2c32
    FSTP float ptr [EBP + -0xa]         ; 004c2c35
    FLD float ptr [EAX]                 ; 004c2c38
    FSQRT                               ; 004c2c3a
    FCOMP double ptr [0x005d90f7]       ; 004c2c3c | DAT_005d90f7
    FNSTSW AX                           ; 004c2c42
    SAHF                                ; 004c2c44
    JNC 0x004c2776                      ; 004c2c45
        ;   XREF to: 004c2776 (CONDITIONAL_JUMP)  ; caseD_10
    FLD float ptr [EBX + 0x25a8]        ; 004c2c4b
    FLD float ptr [EBP + 0x92]          ; 004c2c51
    FLD float ptr [EBX + 0x10b5c]       ; 004c2c57
    FSUB ST0,ST1                        ; 004c2c5d
    FXCH ST2                            ; 004c2c5f
    FADDP                               ; 004c2c61
    FXCH                                ; 004c2c63
    FSTP float ptr [EBX + 0x10b5c]      ; 004c2c65
    FST float ptr [EBX + 0x25a8]        ; 004c2c6b
    FCOMP double ptr [0x005d9137]       ; 004c2c71 | DAT_005d9137
    FNSTSW AX                           ; 004c2c77
    SAHF                                ; 004c2c79
    JBE 0x004c2c86                      ; 004c2c7a
        ;   XREF to: 004c2c86 (CONDITIONAL_JUMP)  ; LAB_004c2c86
    MOV dword ptr [EBX + 0x25a8],0x42c80000 ; 004c2c7c
    FLD float ptr [EBX + 0x10b5c]       ; 004c2c86
        ;   Label: LAB_004c2c86
    FLDZ                                ; 004c2c8c
    FCOMPP                              ; 004c2c8e
    FNSTSW AX                           ; 004c2c90
    SAHF                                ; 004c2c92
    JBE 0x004c2776                      ; 004c2c93
        ;   XREF to: 004c2776 (CONDITIONAL_JUMP)  ; caseD_10
    MOV dword ptr [EBX + 0x10b5c],0x0   ; 004c2c99
    MOV dword ptr [EBX + 0x10b58],0x0   ; 004c2ca3
    JMP 0x004c2776                      ; 004c2cad
        ;   XREF to: 004c2776 (UNCONDITIONAL_JUMP)  ; caseD_10
    PUSH dword ptr [EBP + 0x92]         ; 004c2cb2
        ;   Label: LAB_004c2cb2
    PUSH EBX                            ; 004c2cb8
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970 ; 004c2cb9
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004c2cbe
    TEST EAX,EAX                        ; 004c2cc1
    JZ 0x004c2cdd                       ; 004c2cc3
        ;   XREF to: 004c2cdd (CONDITIONAL_JUMP)  ; LAB_004c2cdd
    PUSH 0x1                            ; 004c2cc5
        ;   Label: LAB_004c2cc5
    PUSH 0x1                            ; 004c2cc7
    LEA EAX,[EBX + 0x2b4]               ; 004c2cc9
    PUSH EAX                            ; 004c2ccf
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c2cd0
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c2cd5
    JMP 0x004c2776                      ; 004c2cd8
        ;   XREF to: 004c2776 (UNCONDITIONAL_JUMP)  ; caseD_10
    PUSH dword ptr [EBP + 0x92]         ; 004c2cdd
        ;   Label: LAB_004c2cdd
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 004c2ce3
    PUSH EBX                            ; 004c2ce9
    CALL dword ptr [EDX + 0x150]        ; 004c2cea
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 004c2cf0
    ADD ESP,0x8                         ; 004c2cf6
    TEST EDX,EDX                        ; 004c2cf9
    JZ 0x004c2776                       ; 004c2cfb
        ;   XREF to: 004c2776 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x1                            ; 004c2d01
    PUSH 0x1                            ; 004c2d03
    LEA EAX,[EBX + 0x2b4]               ; 004c2d05
    PUSH EAX                            ; 004c2d0b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c2d0c
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c2d11
    MOV ECX,dword ptr [EBX + 0x10b48]   ; 004c2d14
    PUSH ECX                            ; 004c2d1a
    CALL sound_sndmain.cpp_FUN_00550b70 ; 004c2d1b
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 004c2d20
    TEST EAX,EAX                        ; 004c2d23
    JZ 0x004c2d3e                       ; 004c2d25
        ;   XREF to: 004c2d3e (CONDITIONAL_JUMP)  ; LAB_004c2d3e
    MOV ESI,dword ptr [EBX + 0x10b4c]   ; 004c2d27
    PUSH ESI                            ; 004c2d2d
    CALL sound_sndmain.cpp_FUN_00550b70 ; 004c2d2e
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 004c2d33
    TEST EAX,EAX                        ; 004c2d36
    JNZ 0x004c2776                      ; 004c2d38
        ;   XREF to: 004c2776 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x5d9081                       ; 004c2d3e | = "ghoul-alert-?.wav"
        ;   Label: LAB_004c2d3e
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004c2d43
    PUSH EBX                            ; 004c2d49
    CALL dword ptr [EAX + 0x34]         ; 004c2d4a
    ADD ESP,0x8                         ; 004c2d4d
    MOV dword ptr [EBX + 0x10b48],EAX   ; 004c2d50
    JMP 0x004c2776                      ; 004c2d56
        ;   XREF to: 004c2776 (UNCONDITIONAL_JUMP)  ; caseD_10
    CMP dword ptr [EBX + 0x10b60],0x0   ; 004c2d5b
        ;   Label: caseD_1
    JZ 0x004c2d7e                       ; 004c2d62
        ;   XREF to: 004c2d7e (CONDITIONAL_JUMP)  ; LAB_004c2d7e
    MOV EDI,dword ptr [EBP + 0x56]      ; 004c2d64
    CMP EDI,0x1                         ; 004c2d67
    JNZ 0x004c2d7e                      ; 004c2d6a
        ;   XREF to: 004c2d7e (CONDITIONAL_JUMP)  ; LAB_004c2d7e
    PUSH EDI                            ; 004c2d6c
    PUSH 0x11                           ; 004c2d6d
    LEA EAX,[EBX + 0x2b4]               ; 004c2d6f
    PUSH EAX                            ; 004c2d75
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c2d76
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c2d7b
    FLD float ptr [EBX + 0x10b54]       ; 004c2d7e
        ;   Label: LAB_004c2d7e
    FLDZ                                ; 004c2d84
    FCOMPP                              ; 004c2d86
    FNSTSW AX                           ; 004c2d88
    SAHF                                ; 004c2d8a
    JC 0x004c2f32                       ; 004c2d8b
        ;   XREF to: 004c2f32 (CONDITIONAL_JUMP)  ; LAB_004c2f32
    LEA EAX,[EBX + 0x2508]              ; 004c2d91
    MOV dword ptr [EAX + 0x8],0x0       ; 004c2d97
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c2d9e
    MOV dword ptr [EAX + 0x4],EDX       ; 004c2da1
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c2da4
    MOV dword ptr [EAX],EDX             ; 004c2da7
    XOR EAX,EAX                         ; 004c2da9
    MOV dword ptr [EBP + 0x66],EAX      ; 004c2dab
    MOV EAX,dword ptr [EBX + 0x10b20]   ; 004c2dae
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 004c2db4
    JZ 0x004c2dc5                       ; 004c2dbc
        ;   XREF to: 004c2dc5 (CONDITIONAL_JUMP)  ; LAB_004c2dc5
    MOV dword ptr [EBP + 0x66],0x1      ; 004c2dbe
    MOV EAX,dword ptr [EBX + 0x10b28]   ; 004c2dc5
        ;   Label: LAB_004c2dc5
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 004c2dcb
    JZ 0x004c2dd8                       ; 004c2dd3
        ;   XREF to: 004c2dd8 (CONDITIONAL_JUMP)  ; LAB_004c2dd8
    INC dword ptr [EBP + 0x66]          ; 004c2dd5
    MOV EAX,[0x01cedef4]                ; 004c2dd8 | DAT_01cedef4
        ;   Label: LAB_004c2dd8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004c2ddd
    PUSH EAX                            ; 004c2de4
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004c2de5
    CALL dword ptr [EDX + 0x114]        ; 004c2deb
    ADD ESP,0x4                         ; 004c2df1
    TEST EAX,EAX                        ; 004c2df4
    JNZ 0x004c319f                      ; 004c2df6
        ;   XREF to: 004c319f (CONDITIONAL_JUMP)  ; LAB_004c319f
    PUSH dword ptr [EBP + 0x92]         ; 004c2dfc
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004c2e02
    PUSH EBX                            ; 004c2e08
    CALL dword ptr [EAX + 0x150]        ; 004c2e09
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 004c2e0f
    ADD ESP,0x8                         ; 004c2e15
    TEST EDX,EDX                        ; 004c2e18
    JZ 0x004c2f5c                       ; 004c2e1a
        ;   XREF to: 004c2f5c (CONDITIONAL_JUMP)  ; LAB_004c2f5c
    FLD float ptr [EDX + 0x20]          ; 004c2e20
    FLD float ptr [EDX + 0x24]          ; 004c2e23
    FLD float ptr [EDX + 0x28]          ; 004c2e26
    LEA EAX,[EBX + 0x20]                ; 004c2e29
    LEA EDI,[EBP + 0xfffffd3a]          ; 004c2e2c
    LEA ESI,[EBP + 0xfffffe36]          ; 004c2e32
    FXCH ST2                            ; 004c2e38
    FSUB float ptr [EAX]                ; 004c2e3a
    FXCH                                ; 004c2e3c
    FSUB float ptr [EAX + 0x4]          ; 004c2e3e
    FXCH ST2                            ; 004c2e41
    FSUB float ptr [EAX + 0x8]          ; 004c2e43
    FXCH                                ; 004c2e46
    FSTP float ptr [EBP + 0xfffffe36]   ; 004c2e48
    FXCH                                ; 004c2e4e
    FSTP float ptr [EBP + 0xfffffe3a]   ; 004c2e50
    FSTP float ptr [EBP + 0xfffffe3e]   ; 004c2e56
    MOVSD ES:EDI,ESI                    ; 004c2e5c
    MOVSD ES:EDI,ESI                    ; 004c2e5d
    MOVSD ES:EDI,ESI                    ; 004c2e5e
    XOR ECX,ECX                         ; 004c2e5f
    FLD float ptr [EBX + 0x25a8]        ; 004c2e61
    MOV dword ptr [EBP + 0xfffffd3e],ECX ; 004c2e67
    FCOMP double ptr [0x005d911f]       ; 004c2e6d | DAT_005d911f
    FNSTSW AX                           ; 004c2e73
    SAHF                                ; 004c2e75
    JNC 0x004c2e96                      ; 004c2e76
        ;   XREF to: 004c2e96 (CONDITIONAL_JUMP)  ; LAB_004c2e96
    CMP dword ptr [EBP + 0x66],0x0      ; 004c2e78
    JLE 0x004c2e96                      ; 004c2e7c
        ;   XREF to: 004c2e96 (CONDITIONAL_JUMP)  ; LAB_004c2e96
    CMP dword ptr [EBX + 0x10b58],0x0   ; 004c2e7e
    JNZ 0x004c2e96                      ; 004c2e85
        ;   XREF to: 004c2e96 (CONDITIONAL_JUMP)  ; LAB_004c2e96
    PUSH dword ptr [EBP + 0x92]         ; 004c2e87
    PUSH EBX                            ; 004c2e8d
    CALL core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004c1980 ; 004c2e8e
        ;   XREF to: 004c1980 (UNCONDITIONAL_CALL)  ; void core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004c1980(CGhoul * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004c2e93
    MOV EAX,dword ptr [EBX + 0x10b58]   ; 004c2e96
        ;   Label: LAB_004c2e96
    LEA ESI,[EBX + 0x2b4]               ; 004c2e9c
    TEST EAX,EAX                        ; 004c2ea2
    JZ 0x004c2fa3                       ; 004c2ea4
        ;   XREF to: 004c2fa3 (CONDITIONAL_JUMP)  ; LAB_004c2fa3
    PUSH 0x0                            ; 004c2eaa
    PUSH 0x40400000                     ; 004c2eac
    PUSH 0x265370c                      ; 004c2eb1 | DAT_0265370c
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004c2eb6
    PUSH EAX                            ; 004c2ebc
    CALL dword ptr [EDX + 0xcc]         ; 004c2ebd
    ADD ESP,0x4                         ; 004c2ec3
    PUSH EAX                            ; 004c2ec6
    MOV EAX,dword ptr [EBX + 0x10b58]   ; 004c2ec7
    ADD EAX,0x20                        ; 004c2ecd
    PUSH EAX                            ; 004c2ed0
    PUSH EBX                            ; 004c2ed1
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 004c2ed2
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004c2ed7
    MOV EDI,EAX                         ; 004c2eda
    TEST EAX,EAX                        ; 004c2edc
    JLE 0x004c2f0b                      ; 004c2ede
        ;   XREF to: 004c2f0b (CONDITIONAL_JUMP)  ; LAB_004c2f0b
    PUSH 0x1                            ; 004c2ee0
    PUSH 0x0                            ; 004c2ee2
    PUSH ESI                            ; 004c2ee4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c2ee5
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c2eea
    PUSH 0x41f00000                     ; 004c2eed
    PUSH 0x41200000                     ; 004c2ef2
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004c2ef7
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c2efc
    ADD ESP,0x8                         ; 004c2eff
    MOV EAX,dword ptr [EBP + 0x76]      ; 004c2f02
    MOV dword ptr [EBX + 0x10b5c],EAX   ; 004c2f05
    TEST EDI,EDI                        ; 004c2f0b
        ;   Label: LAB_004c2f0b
    JL 0x004c2f8a                       ; 004c2f0d
        ;   XREF to: 004c2f8a (CONDITIONAL_JUMP)  ; LAB_004c2f8a
    MOV EDI,dword ptr [EBP + 0x56]      ; 004c2f0f
        ;   Label: LAB_004c2f0f
    CMP EDI,0x1                         ; 004c2f12
    JNZ 0x004c2776                      ; 004c2f15
        ;   XREF to: 004c2776 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH EDI                            ; 004c2f1b
    PUSH 0x11                           ; 004c2f1c
    LEA EAX,[EBX + 0x2b4]               ; 004c2f1e
    PUSH EAX                            ; 004c2f24
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c2f25
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c2f2a
    JMP 0x004c2776                      ; 004c2f2d
        ;   XREF to: 004c2776 (UNCONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x1                            ; 004c2f32
        ;   Label: LAB_004c2f32
    FLD float ptr [EBX + 0x10b54]       ; 004c2f34
    LEA EAX,[EBX + 0x2b4]               ; 004c2f3a
    PUSH 0x0                            ; 004c2f40
    FSUB float ptr [EBP + 0x92]         ; 004c2f42
    PUSH EAX                            ; 004c2f48
    FSTP float ptr [EBX + 0x10b54]      ; 004c2f49
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c2f4f
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c2f54
    JMP 0x004c2776                      ; 004c2f57
        ;   XREF to: 004c2776 (UNCONDITIONAL_JUMP)  ; caseD_10
    PUSH dword ptr [EBP + 0x92]         ; 004c2f5c
        ;   Label: LAB_004c2f5c
    PUSH EBX                            ; 004c2f62
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970 ; 004c2f63
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004c2f68
    TEST EAX,EAX                        ; 004c2f6b
    JNZ 0x004c2776                      ; 004c2f6d
        ;   XREF to: 004c2776 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x1                            ; 004c2f73
    PUSH EAX                            ; 004c2f75
    LEA EAX,[EBX + 0x2b4]               ; 004c2f76
    PUSH EAX                            ; 004c2f7c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c2f7d
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c2f82
    JMP 0x004c2776                      ; 004c2f85
        ;   XREF to: 004c2776 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV dword ptr [EBX + 0x10b5c],0x41f00000 ; 004c2f8a
        ;   Label: LAB_004c2f8a
    MOV dword ptr [EBX + 0x10b58],0x0   ; 004c2f94
    JMP 0x004c2f0f                      ; 004c2f9e
        ;   XREF to: 004c2f0f (UNCONDITIONAL_JUMP)  ; LAB_004c2f0f
    PUSH 0x3e32b8c2                     ; 004c2fa3
        ;   Label: LAB_004c2fa3
    PUSH 0x3f800000                     ; 004c2fa8
    MOV EAX,[0x005f78b8]                ; 004c2fad | DAT_005f78b8
    XOR EDX,EDX                         ; 004c2fb2
    MOV dword ptr [EBP + 0xffffff0e],EDX ; 004c2fb4
    MOV dword ptr [EBP + 0xffffff16],EAX ; 004c2fba
    LEA EAX,[EBP + 0xffffff0e]          ; 004c2fc0
    MOV dword ptr [EBP + 0xffffff12],EDX ; 004c2fc6
    PUSH EAX                            ; 004c2fcc
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004c2fcd
    PUSH EAX                            ; 004c2fd3
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004c2fd4
    CALL dword ptr [EDX + 0xcc]         ; 004c2fda
    ADD ESP,0x4                         ; 004c2fe0
    PUSH EAX                            ; 004c2fe3
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004c2fe4
    ADD EAX,0x20                        ; 004c2fea
    PUSH EAX                            ; 004c2fed
    PUSH EBX                            ; 004c2fee
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 004c2fef
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004c2ff4
    TEST EAX,EAX                        ; 004c2ff7
    JL 0x004c3176                       ; 004c2ff9
        ;   XREF to: 004c3176 (CONDITIONAL_JUMP)  ; LAB_004c3176
    JLE 0x004c2776                      ; 004c2fff
        ;   XREF to: 004c2776 (CONDITIONAL_JUMP)  ; caseD_10
    CMP dword ptr [EBP + 0x66],0x0      ; 004c3005
    JLE 0x004c2776                      ; 004c3009
        ;   XREF to: 004c2776 (CONDITIONAL_JUMP)  ; caseD_10
    FLD float ptr [EBX + 0x10a74]       ; 004c300f
    FLDZ                                ; 004c3015
    FCOMPP                              ; 004c3017
    FNSTSW AX                           ; 004c3019
    SAHF                                ; 004c301b
    JC 0x004c2776                       ; 004c301c
        ;   XREF to: 004c2776 (CONDITIONAL_JUMP)  ; caseD_10
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004c3022
    PUSH EAX                            ; 004c3028
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004c3029
    CALL dword ptr [EDX + 0xfc]         ; 004c302f
    ADD ESP,0x4                         ; 004c3035
    TEST EAX,EAX                        ; 004c3038
    JNZ 0x004c2776                      ; 004c303a
        ;   XREF to: 004c2776 (CONDITIONAL_JUMP)  ; caseD_10
    FLD float ptr [EBX + 0x10b0c]       ; 004c3040
    FLDZ                                ; 004c3046
    FCOMPP                              ; 004c3048
    FNSTSW AX                           ; 004c304a
    SAHF                                ; 004c304c
    JC 0x004c2776                       ; 004c304d
        ;   XREF to: 004c2776 (CONDITIONAL_JUMP)  ; caseD_10
    FLD float ptr [EBP + 0xfffffd3e]    ; 004c3053
    FMUL ST0                            ; 004c3059
    FLD float ptr [EBP + 0xfffffd3a]    ; 004c305b
    FMUL ST0                            ; 004c3061
    FADDP                               ; 004c3063
    FLD float ptr [EBP + 0xfffffd42]    ; 004c3065
    FMUL ST0                            ; 004c306b
    FADDP                               ; 004c306d
    FSQRT                               ; 004c306f
    FSTP float ptr [EBP + 0x42]         ; 004c3071
    MOV EAX,dword ptr [EBP + 0x42]      ; 004c3074
    XOR EDI,EDI                         ; 004c3077
    MOV dword ptr [EBP + 0x4e],EAX      ; 004c3079
    MOV EAX,dword ptr [EBX + 0x10b28]   ; 004c307c
    MOV dword ptr [EBP + 0x5a],EDI      ; 004c3082
    MOV dword ptr [EBP + 0x4a],EDI      ; 004c3085
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x23f4] ; 004c3088
    MOV dword ptr [EBP + 0x36],EDI      ; 004c308f
    TEST ECX,ECX                        ; 004c3092
    JZ 0x004c30b2                       ; 004c3094
        ;   XREF to: 004c30b2 (CONDITIONAL_JUMP)  ; LAB_004c30b2
    FLD float ptr [0x005f78bc]          ; 004c3096 | DAT_005f78bc
    FLD float ptr [EBP + 0x42]          ; 004c309c
    FSUB ST0,ST1                        ; 004c309f
    FABS                                ; 004c30a1
    FDIVRP                              ; 004c30a3
    FLD1                                ; 004c30a5
    FSUBRP                              ; 004c30a7
    FMUL double ptr [0x005d9127]        ; 004c30a9 | DAT_005d9127
    FSTP float ptr [EBP + 0x5a]         ; 004c30af
    MOV EAX,dword ptr [EBX + 0x10b20]   ; 004c30b2
        ;   Label: LAB_004c30b2
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 004c30b8
    JZ 0x004c30de                       ; 004c30c0
        ;   XREF to: 004c30de (CONDITIONAL_JUMP)  ; LAB_004c30de
    FLD float ptr [0x005f78c0]          ; 004c30c2 | DAT_005f78c0
    FLD float ptr [EBP + 0x4e]          ; 004c30c8
    FSUB ST0,ST1                        ; 004c30cb
    FABS                                ; 004c30cd
    FDIVRP                              ; 004c30cf
    FLD1                                ; 004c30d1
    FSUBRP                              ; 004c30d3
    FMUL double ptr [0x005d912f]        ; 004c30d5 | DAT_005d912f
    FSTP float ptr [EBP + 0x4a]         ; 004c30db
    PUSH 0x0                            ; 004c30de
        ;   Label: LAB_004c30de
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004c30e0
    PUSH EBX                            ; 004c30e6
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004c30e7
    PUSH EAX                            ; 004c30ed
    CALL dword ptr [EDX + 0xf0]         ; 004c30ee
    ADD ESP,0xc                         ; 004c30f4
    TEST EAX,EAX                        ; 004c30f7
    JZ 0x004c3117                       ; 004c30f9
        ;   XREF to: 004c3117 (CONDITIONAL_JUMP)  ; LAB_004c3117
    FLD float ptr [0x005f78b8]          ; 004c30fb | DAT_005f78b8
    FLD float ptr [EBP + 0x4e]          ; 004c3101
    FSUB ST0,ST1                        ; 004c3104
    FABS                                ; 004c3106
    FDIVRP                              ; 004c3108
    FLD1                                ; 004c310a
    FSUBRP                              ; 004c310c
    FMUL double ptr [0x005d9127]        ; 004c310e | DAT_005d9127
    FSTP float ptr [EBP + 0x36]         ; 004c3114
    FLD float ptr [EBP + 0x5a]          ; 004c3117
        ;   Label: LAB_004c3117
    FADD float ptr [EBP + 0x4a]         ; 004c311a
    FST float ptr [EBP + 0x3a]          ; 004c311d
    FADD float ptr [EBP + 0x36]         ; 004c3120
    FST float ptr [EBP + 0x3e]          ; 004c3123
    FLDZ                                ; 004c3126
    FCOMPP                              ; 004c3128
    FNSTSW AX                           ; 004c312a
    SAHF                                ; 004c312c
    JNC 0x004c2776                      ; 004c312d
        ;   XREF to: 004c2776 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH dword ptr [EBP + 0x3e]         ; 004c3133
    PUSH 0x0                            ; 004c3136
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004c3138
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c313d
    LEA EDX,[EBX + 0x2b4]               ; 004c3140
    ADD ESP,0x8                         ; 004c3146
    MOV EAX,dword ptr [EBP + 0x76]      ; 004c3149
    MOV dword ptr [EBP + 0x46],EAX      ; 004c314c
    FLD float ptr [EBP + 0x46]          ; 004c314f
    FCOMP float ptr [EBP + 0x5a]        ; 004c3152
    FNSTSW AX                           ; 004c3155
    SAHF                                ; 004c3157
    JNC 0x004c3188                      ; 004c3158
        ;   XREF to: 004c3188 (CONDITIONAL_JUMP)  ; LAB_004c3188
    PUSH 0x1                            ; 004c315a
    PUSH 0x2                            ; 004c315c
    PUSH EDX                            ; 004c315e
        ;   Label: LAB_004c315e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c315f
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c3164
    MOV dword ptr [EBX + 0x10a74],0x3f333333 ; 004c3167
    JMP 0x004c2776                      ; 004c3171
        ;   XREF to: 004c2776 (UNCONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x1                            ; 004c3176
        ;   Label: LAB_004c3176
    PUSH 0x0                            ; 004c3178
    PUSH ESI                            ; 004c317a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c317b
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c3180
    JMP 0x004c2776                      ; 004c3183
        ;   XREF to: 004c2776 (UNCONDITIONAL_JUMP)  ; caseD_10
    FLD float ptr [EBP + 0x46]          ; 004c3188
        ;   Label: LAB_004c3188
    FCOMP float ptr [EBP + 0x3a]        ; 004c318b
    FNSTSW AX                           ; 004c318e
    SAHF                                ; 004c3190
    JNC 0x004c3199                      ; 004c3191
        ;   XREF to: 004c3199 (CONDITIONAL_JUMP)  ; LAB_004c3199
    PUSH 0x1                            ; 004c3193
    PUSH 0xc                            ; 004c3195
    JMP 0x004c315e                      ; 004c3197
        ;   XREF to: 004c315e (UNCONDITIONAL_JUMP)  ; LAB_004c315e
    PUSH 0x1                            ; 004c3199
        ;   Label: LAB_004c3199
    PUSH 0xb                            ; 004c319b
    JMP 0x004c315e                      ; 004c319d
        ;   XREF to: 004c315e (UNCONDITIONAL_JUMP)  ; LAB_004c315e
    CMP dword ptr [EBX + 0x10b08],0x0   ; 004c319f
        ;   Label: LAB_004c319f
    JL 0x004c330f                       ; 004c31a6
        ;   XREF to: 004c330f (CONDITIONAL_JUMP)  ; LAB_004c330f
    MOV EDI,dword ptr [EBX + 0x10b08]   ; 004c31ac
        ;   Label: LAB_004c31ac
    TEST EDI,EDI                        ; 004c31b2
    JZ 0x004c3342                       ; 004c31b4
        ;   XREF to: 004c3342 (CONDITIONAL_JUMP)  ; LAB_004c3342
    MOV EAX,[0x005f78c4]                ; 004c31ba | DAT_005f78c4
    MOV dword ptr [EBP + 0x52],EAX      ; 004c31bf
    CMP EDI,0xe                         ; 004c31c2
    JNZ 0x004c31cf                      ; 004c31c5
        ;   XREF to: 004c31cf (CONDITIONAL_JUMP)  ; LAB_004c31cf
    MOV EAX,[0x005f78c8]                ; 004c31c7 | DAT_005f78c8
    MOV dword ptr [EBP + 0x52],EAX      ; 004c31cc
    PUSH 0x3db2b8c2                     ; 004c31cf
        ;   Label: LAB_004c31cf
    MOV EAX,dword ptr [EBP + 0x52]      ; 004c31d4
    PUSH 0x3f000000                     ; 004c31d7
    MOV dword ptr [EBP + 0xfffffdc6],EAX ; 004c31dc
    LEA EAX,[EBP + 0xfffffdbe]          ; 004c31e2
    XOR EDX,EDX                         ; 004c31e8
    PUSH EAX                            ; 004c31ea
    MOV EAX,[0x01cedef4]                ; 004c31eb | DAT_01cedef4
    MOV dword ptr [EBP + 0xfffffdbe],EDX ; 004c31f0
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004c31f6
    MOV dword ptr [EBP + 0xfffffdc2],EDX ; 004c31fd
    PUSH EAX                            ; 004c3203
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004c3204
    CALL dword ptr [EDX + 0xcc]         ; 004c320a
    ADD ESP,0x4                         ; 004c3210
    PUSH EAX                            ; 004c3213
    MOV EAX,[0x01cedef4]                ; 004c3214 | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004c3219
    PUSH 0x0                            ; 004c3220
    ADD EAX,0x2b4                       ; 004c3222
    PUSH EAX                            ; 004c3227
    LEA ESI,[EBP + 0xfffffed2]          ; 004c3228
    LEA EDI,[EBP + 0xfffffd9a]          ; 004c322e
    CALL core_skeleton.cpp_FUN_005469a0 ; 004c3234
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    ADD ESP,0x8                         ; 004c3239
    LEA EAX,[EBP + 0xfffffd9a]          ; 004c323c
    LEA ESI,[EBP + 0xfffffed2]          ; 004c3242
    PUSH EAX                            ; 004c3248
    MOV EAX,[0x01cedef4]                ; 004c3249 | DAT_01cedef4
    MOVSD ES:EDI,ESI                    ; 004c324e
    MOVSD ES:EDI,ESI                    ; 004c324f
    MOVSD ES:EDI,ESI                    ; 004c3250
    MOV ESI,dword ptr [EAX*0x4 + 0x1cedee4] ; 004c3251
    PUSH ESI                            ; 004c3258
    LEA ESI,[EBP + 0xfffffe72]          ; 004c3259
    CALL core_actor.cpp_FUN_00408d70    ; 004c325f
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004c3264
    LEA EAX,[EBP + 0xfffffdee]          ; 004c3267
    PUSH EAX                            ; 004c326d
    LEA EDI,[EBP + 0xfffffdee]          ; 004c326e
    LEA ESI,[EBP + 0xfffffe72]          ; 004c3274
    PUSH EBX                            ; 004c327a
    MOVSD ES:EDI,ESI                    ; 004c327b
    MOVSD ES:EDI,ESI                    ; 004c327c
    MOVSD ES:EDI,ESI                    ; 004c327d
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 004c327e
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004c3283
    TEST EAX,EAX                        ; 004c3286
    JLE 0x004c2776                      ; 004c3288
        ;   XREF to: 004c2776 (CONDITIONAL_JUMP)  ; caseD_10
    MOV EAX,[0x01cedef4]                ; 004c328e | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004c3293
    PUSH EAX                            ; 004c329a
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004c329b
    CALL dword ptr [EDX + 0x114]        ; 004c32a1
    ADD ESP,0x4                         ; 004c32a7
    CMP EAX,0x2                         ; 004c32aa
    JNZ 0x004c2776                      ; 004c32ad
        ;   XREF to: 004c2776 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x1                            ; 004c32b3
    MOV EDI,dword ptr [EBX + 0x10b08]   ; 004c32b5
    PUSH EDI                            ; 004c32bb
    LEA EAX,[EBX + 0x2b4]               ; 004c32bc
    PUSH EAX                            ; 004c32c2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c32c3
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,dword ptr [EBX + 0x10b08]   ; 004c32c8
    ADD ESP,0xc                         ; 004c32ce
    CMP EAX,0xd                         ; 004c32d1
    JNZ 0x004c2776                      ; 004c32d4
        ;   XREF to: 004c2776 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x3f99999a                     ; 004c32da
    PUSH 0x3f000000                     ; 004c32df
    MOV ESI,dword ptr [EBX + 0x2b0]     ; 004c32e4
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004c32ea
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    ADD ESP,0x8                         ; 004c32ef
    MOV dword ptr [EBP + 0x76],EAX      ; 004c32f2
    SUB ESP,0x4                         ; 004c32f5
    MOV EAX,dword ptr [EBP + 0x76]      ; 004c32f8
    MOV dword ptr [ESP],EAX             ; 004c32fb
    PUSH 0x5d9093                       ; 004c32fe | = "ghoul-scream-!-?.wav"
    PUSH EBX                            ; 004c3303
    CALL dword ptr [ESI + 0x3c]         ; 004c3304
    ADD ESP,0xc                         ; 004c3307
    JMP 0x004c2776                      ; 004c330a
        ;   XREF to: 004c2776 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV EDX,dword ptr [EBX + 0x10b20]   ; 004c330f
        ;   Label: LAB_004c330f
    MOV ECX,dword ptr [EBX + EDX*0x4 + 0x23f4] ; 004c3315
    XOR EAX,EAX                         ; 004c331c
    TEST ECX,ECX                        ; 004c331e
    JZ 0x004c3327                       ; 004c3320
        ;   XREF to: 004c3327 (CONDITIONAL_JUMP)  ; LAB_004c3327
    MOV EAX,0x1                         ; 004c3322
    MOV EDX,dword ptr [EBX + 0x10b28]   ; 004c3327
        ;   Label: LAB_004c3327
    CMP dword ptr [EBX + EDX*0x4 + 0x23f4],0x0 ; 004c332d
    JZ 0x004c3338                       ; 004c3335
        ;   XREF to: 004c3338 (CONDITIONAL_JUMP)  ; LAB_004c3338
    INC EAX                             ; 004c3337
    TEST EAX,EAX                        ; 004c3338
        ;   Label: LAB_004c3338
    JNZ 0x004c335a                      ; 004c333a
        ;   XREF to: 004c335a (CONDITIONAL_JUMP)  ; LAB_004c335a
    MOV dword ptr [EBX + 0x10b08],EAX   ; 004c333c
    PUSH 0x1                            ; 004c3342
        ;   Label: LAB_004c3342
    PUSH 0x0                            ; 004c3344
    LEA EAX,[EBX + 0x2b4]               ; 004c3346
    PUSH EAX                            ; 004c334c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c334d
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c3352
    JMP 0x004c2776                      ; 004c3355
        ;   XREF to: 004c2776 (UNCONDITIONAL_JUMP)  ; caseD_10
    CMP EAX,0x1                         ; 004c335a
        ;   Label: LAB_004c335a
    JNZ 0x004c337d                      ; 004c335d
        ;   XREF to: 004c337d (CONDITIONAL_JUMP)  ; LAB_004c337d
    MOV EAX,[0x00616494]                ; 004c335f | g_CGamePtr
    MOV dword ptr [EBX + 0x10b08],0xe   ; 004c3364
    MOV dword ptr [EAX + 0x23c],0x1     ; 004c336e | g_CGameInstance.player_hit_flag
    JMP 0x004c31ac                      ; 004c3378
        ;   XREF to: 004c31ac (UNCONDITIONAL_JUMP)  ; LAB_004c31ac
    PUSH 0x3f000000                     ; 004c337d
        ;   Label: LAB_004c337d
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 004c3382
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 004c3387
    TEST EAX,EAX                        ; 004c338a
    SETZ AL                             ; 004c338c
    AND EAX,0xff                        ; 004c338f
    ADD EAX,0xd                         ; 004c3394
    MOV dword ptr [EBX + 0x10b08],EAX   ; 004c3397
    MOV EAX,[0x00616494]                ; 004c339d | g_CGamePtr
    MOV dword ptr [EAX + 0x23c],0x1     ; 004c33a2 | g_CGameInstance.player_hit_flag
    JMP 0x004c31ac                      ; 004c33ac
        ;   XREF to: 004c31ac (UNCONDITIONAL_JUMP)  ; LAB_004c31ac
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004c33b1
        ;   Label: caseD_2
    TEST EAX,EAX                        ; 004c33b7
    JZ 0x004c2cc5                       ; 004c33b9
        ;   XREF to: 004c2cc5 (CONDITIONAL_JUMP)  ; LAB_004c2cc5
    PUSH EAX                            ; 004c33bf
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004c33c0
    CALL dword ptr [EDX + 0xfc]         ; 004c33c6
    ADD ESP,0x4                         ; 004c33cc
    TEST EAX,EAX                        ; 004c33cf
    JZ 0x004c33e5                       ; 004c33d1
        ;   XREF to: 004c33e5 (CONDITIONAL_JUMP)  ; LAB_004c33e5
    PUSH 0x1                            ; 004c33d3
    PUSH 0x1                            ; 004c33d5
    PUSH ESI                            ; 004c33d7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c33d8
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c33dd
    JMP 0x004c2776                      ; 004c33e0
        ;   XREF to: 004c2776 (UNCONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x3f000000                     ; 004c33e5
        ;   Label: LAB_004c33e5
    PUSH 0x3e4ccccd                     ; 004c33ea
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004c33ef
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c33f4
    FLD float ptr [EBP + 0x76]          ; 004c33f7
    MOV EAX,dword ptr [EBX + 0x10b28]   ; 004c33fa
    FSTP float ptr [EBX + 0x10a74]      ; 004c3400
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x23f4] ; 004c3406
    ADD ESP,0x8                         ; 004c340d
    TEST EDX,EDX                        ; 004c3410
    JZ 0x004c2776                       ; 004c3412
        ;   XREF to: 004c2776 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH ESI                            ; 004c3418
    CALL core_motion.cpp_FUN_00503e60   ; 004c3419
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00503e60(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c341e
    ADD ESP,0x4                         ; 004c3421
    MOV EAX,dword ptr [EBP + 0x76]      ; 004c3424
    MOV dword ptr [EBP + 0x2e],EAX      ; 004c3427
    FLD float ptr [EBP + 0x2e]          ; 004c342a
    FST double ptr [EBP + -0x36]        ; 004c342d
    FCOMP double ptr [0x005d9107]       ; 004c3430 | DAT_005d9107
    FNSTSW AX                           ; 004c3436
    SAHF                                ; 004c3438
    JA 0x004c2776                       ; 004c3439
        ;   XREF to: 004c2776 (CONDITIONAL_JUMP)  ; caseD_10
    MOV EAX,[0x005f78bc]                ; 004c343f | DAT_005f78bc
    FLD1                                ; 004c3444
    MOV dword ptr [EBP + 0x62],EAX      ; 004c3446
    FCOMP double ptr [EBP + -0x36]      ; 004c3449
    FNSTSW AX                           ; 004c344c
    SAHF                                ; 004c344e
    JA 0x004c2776                       ; 004c344f
        ;   XREF to: 004c2776 (CONDITIONAL_JUMP)  ; caseD_10
    LEA EAX,[EBP + 0xfffffc4e]          ; 004c3455
    PUSH EAX                            ; 004c345b
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 004c345c
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004c3461
    PUSH 0x41700000                     ; 004c3464
    PUSH 0x40e00000                     ; 004c3469
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004c346e
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c3473
    MOV EAX,dword ptr [EBP + 0x76]      ; 004c3476
    MOV dword ptr [EBP + 0xfffffc52],EAX ; 004c3479
    MOV ECX,dword ptr [EBX + 0x10b60]   ; 004c347f
    ADD ESP,0x8                         ; 004c3485
    TEST ECX,ECX                        ; 004c3488
    JZ 0x004c34a2                       ; 004c348a
        ;   XREF to: 004c34a2 (CONDITIONAL_JUMP)  ; LAB_004c34a2
    FLD float ptr [EBP + 0xfffffc52]    ; 004c348c
    FLD ST0                             ; 004c3492
    FMUL double ptr [0x005d9107]        ; 004c3494 | DAT_005d9107
    FSTP ST1                            ; 004c349a
    FSTP float ptr [EBP + 0xfffffc52]   ; 004c349c
    LEA EAX,[EBP + 0xfffffc4e]          ; 004c34a2
        ;   Label: LAB_004c34a2
    MOV EDX,dword ptr [0x01cb8224]      ; 004c34a8 | DAT_01cb8224
    PUSH EAX                            ; 004c34ae
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c34af
    MOV dword ptr [EBP + 0xfffffc82],EBX ; 004c34b6
    SUB EAX,EDX                         ; 004c34bc
    MOV dword ptr [EBP + 0xfffffc86],EBX ; 004c34be
    SHL EAX,0x4                         ; 004c34c4
    LEA EDX,[EBX + 0x1134]              ; 004c34c7
    ADD EAX,EDX                         ; 004c34cd
    PUSH 0x3e4ccccd                     ; 004c34cf
    PUSH EAX                            ; 004c34d4
    PUSH 0x1cb81d4                      ; 004c34d5
    LEA ESI,[EBP + 0xffffff02]          ; 004c34da
    LEA EDI,[EBP + 0xfffffe2a]          ; 004c34e0
    CALL core_xform.cpp_FUN_00591530    ; 004c34e6
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 004c34eb
    LEA EAX,[EBP + 0xfffffe2a]          ; 004c34ee
    LEA ESI,[EBP + 0xffffff02]          ; 004c34f4
    PUSH EAX                            ; 004c34fa
    MOVSD ES:EDI,ESI                    ; 004c34fb
    MOVSD ES:EDI,ESI                    ; 004c34fc
    MOVSD ES:EDI,ESI                    ; 004c34fd
    PUSH EBX                            ; 004c34fe
    LEA ESI,[EBP + 0xffffff1a]          ; 004c34ff
    CALL core_actor.cpp_FUN_00408d70    ; 004c3505
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004c350a
    LEA EAX,[EBP + 0xffffff6e]          ; 004c350d
    PUSH EAX                            ; 004c3513
    LEA EDI,[EBP + 0xffffff6e]          ; 004c3514
    LEA ESI,[EBP + 0xffffff1a]          ; 004c351a
    PUSH EBX                            ; 004c3520
    MOVSD ES:EDI,ESI                    ; 004c3521
    MOVSD ES:EDI,ESI                    ; 004c3522
    MOVSD ES:EDI,ESI                    ; 004c3523
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110 ; 004c3524
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 004c3529
    TEST EAX,EAX                        ; 004c352c
    JZ 0x004c2776                       ; 004c352e
        ;   XREF to: 004c2776 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x5d90a8                       ; 004c3534 | = "gh-hits?.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004c3539
    PUSH EBX                            ; 004c353f
    CALL dword ptr [EAX + 0x34]         ; 004c3540
    ADD ESP,0x8                         ; 004c3543
    JMP 0x004c2776                      ; 004c3546
        ;   XREF to: 004c2776 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV ECX,dword ptr [EBX + 0x10a78]   ; 004c354b
        ;   Label: caseD_c
    TEST ECX,ECX                        ; 004c3551
    JZ 0x004c3569                       ; 004c3553
        ;   XREF to: 004c3569 (CONDITIONAL_JUMP)  ; LAB_004c3569
    PUSH ECX                            ; 004c3555
    MOV EDX,dword ptr [ECX + 0x2b0]     ; 004c3556
    CALL dword ptr [EDX + 0xfc]         ; 004c355c
    ADD ESP,0x4                         ; 004c3562
    TEST EAX,EAX                        ; 004c3565
    JZ 0x004c357b                       ; 004c3567
        ;   XREF to: 004c357b (CONDITIONAL_JUMP)  ; LAB_004c357b
    PUSH 0x1                            ; 004c3569
        ;   Label: LAB_004c3569
    PUSH 0x1                            ; 004c356b
    PUSH ESI                            ; 004c356d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c356e
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c3573
    JMP 0x004c2776                      ; 004c3576
        ;   XREF to: 004c2776 (UNCONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x3f000000                     ; 004c357b
        ;   Label: LAB_004c357b
    PUSH 0x3e4ccccd                     ; 004c3580
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004c3585
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c358a
    FLD float ptr [EBP + 0x76]          ; 004c358d
    MOV EAX,dword ptr [EBX + 0x10b20]   ; 004c3590
    FSTP float ptr [EBX + 0x10a74]      ; 004c3596
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x23f4] ; 004c359c
    ADD ESP,0x8                         ; 004c35a3
    TEST EDI,EDI                        ; 004c35a6
    JZ 0x004c2776                       ; 004c35a8
        ;   XREF to: 004c2776 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH ESI                            ; 004c35ae
    CALL core_motion.cpp_FUN_00503e60   ; 004c35af
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00503e60(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c35b4
    ADD ESP,0x4                         ; 004c35b7
    MOV EAX,dword ptr [EBP + 0x76]      ; 004c35ba
    MOV dword ptr [EBP + 0x2a],EAX      ; 004c35bd
    FLD float ptr [EBP + 0x2a]          ; 004c35c0
    FST double ptr [EBP + -0x1e]        ; 004c35c3
    FCOMP double ptr [0x005d9107]       ; 004c35c6 | DAT_005d9107
    FNSTSW AX                           ; 004c35cc
    SAHF                                ; 004c35ce
    JA 0x004c2776                       ; 004c35cf
        ;   XREF to: 004c2776 (CONDITIONAL_JUMP)  ; caseD_10
    MOV EAX,[0x005f78c0]                ; 004c35d5 | DAT_005f78c0
    FLD1                                ; 004c35da
    MOV dword ptr [EBP + 0x62],EAX      ; 004c35dc
    FCOMP double ptr [EBP + -0x1e]      ; 004c35df
    FNSTSW AX                           ; 004c35e2
    SAHF                                ; 004c35e4
    JA 0x004c2776                       ; 004c35e5
        ;   XREF to: 004c2776 (CONDITIONAL_JUMP)  ; caseD_10
    LEA EAX,[EBP + 0xfffffc12]          ; 004c35eb
    PUSH EAX                            ; 004c35f1
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 004c35f2
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004c35f7
    PUSH 0x41700000                     ; 004c35fa
    PUSH 0x40e00000                     ; 004c35ff
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004c3604
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c3609
    MOV EAX,dword ptr [EBP + 0x76]      ; 004c360c
    MOV dword ptr [EBP + 0xfffffc16],EAX ; 004c360f
    MOV EAX,dword ptr [EBX + 0x10b60]   ; 004c3615
    ADD ESP,0x8                         ; 004c361b
    TEST EAX,EAX                        ; 004c361e
    JZ 0x004c3638                       ; 004c3620
        ;   XREF to: 004c3638 (CONDITIONAL_JUMP)  ; LAB_004c3638
    FLD float ptr [EBP + 0xfffffc16]    ; 004c3622
    FLD ST0                             ; 004c3628
    FMUL double ptr [0x005d9107]        ; 004c362a | DAT_005d9107
    FSTP ST1                            ; 004c3630
    FSTP float ptr [EBP + 0xfffffc16]   ; 004c3632
    LEA EAX,[EBP + 0xfffffc12]          ; 004c3638
        ;   Label: LAB_004c3638
    MOV EDX,dword ptr [0x01cb8220]      ; 004c363e | DAT_01cb8220
    PUSH EAX                            ; 004c3644
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c3645
    SUB EAX,EDX                         ; 004c364c
    MOV dword ptr [EBP + 0xfffffc46],EBX ; 004c364e
    MOV EDX,EAX                         ; 004c3654
    MOV dword ptr [EBP + 0xfffffc4a],EBX ; 004c3656
    SHL EDX,0x4                         ; 004c365c
    LEA EAX,[EBX + 0x1134]              ; 004c365f
    ADD EAX,EDX                         ; 004c3665
    PUSH 0x3ecccccd                     ; 004c3667
    PUSH EAX                            ; 004c366c
    PUSH 0x1cb81c8                      ; 004c366d
    LEA ESI,[EBP + 0xfffffe42]          ; 004c3672
    LEA EDI,[EBP + 0xfffffdfa]          ; 004c3678
    CALL core_xform.cpp_FUN_00591530    ; 004c367e
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 004c3683
    LEA EAX,[EBP + 0xfffffdfa]          ; 004c3686
    LEA ESI,[EBP + 0xfffffe42]          ; 004c368c
    PUSH EAX                            ; 004c3692
    MOVSD ES:EDI,ESI                    ; 004c3693
    MOVSD ES:EDI,ESI                    ; 004c3694
    MOVSD ES:EDI,ESI                    ; 004c3695
    PUSH EBX                            ; 004c3696
    LEA ESI,[EBP + -0x6e]               ; 004c3697
    CALL core_actor.cpp_FUN_00408d70    ; 004c369a
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004c369f
    LEA EAX,[EBP + 0xfffffe06]          ; 004c36a2
    PUSH EAX                            ; 004c36a8
    LEA EDI,[EBP + 0xfffffe06]          ; 004c36a9
    LEA ESI,[EBP + -0x6e]               ; 004c36af
    PUSH EBX                            ; 004c36b2
    MOVSD ES:EDI,ESI                    ; 004c36b3
    MOVSD ES:EDI,ESI                    ; 004c36b4
    MOVSD ES:EDI,ESI                    ; 004c36b5
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110 ; 004c36b6
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 004c36bb
    TEST EAX,EAX                        ; 004c36be
    JZ 0x004c2776                       ; 004c36c0
        ;   XREF to: 004c2776 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x5d90b5                       ; 004c36c6 | = "gh-hits?.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004c36cb
    PUSH EBX                            ; 004c36d1
    CALL dword ptr [EAX + 0x34]         ; 004c36d2
    ADD ESP,0x8                         ; 004c36d5
    JMP 0x004c2776                      ; 004c36d8
        ;   XREF to: 004c2776 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 004c36dd
        ;   Label: caseD_b
    TEST EDX,EDX                        ; 004c36e3
    JZ 0x004c3569                       ; 004c36e5
        ;   XREF to: 004c3569 (CONDITIONAL_JUMP)  ; LAB_004c3569
    MOV EAX,EDX                         ; 004c36eb
    PUSH EAX                            ; 004c36ed
    MOV EDX,dword ptr [EDX + 0x2b0]     ; 004c36ee
    CALL dword ptr [EDX + 0xfc]         ; 004c36f4
    ADD ESP,0x4                         ; 004c36fa
    TEST EAX,EAX                        ; 004c36fd
    JNZ 0x004c370e                      ; 004c36ff
        ;   XREF to: 004c370e (CONDITIONAL_JUMP)  ; LAB_004c370e
    MOV EAX,[0x005f78b8]                ; 004c3701 | DAT_005f78b8
    MOV dword ptr [EBP + 0x62],EAX      ; 004c3706
    JMP 0x004c2776                      ; 004c3709
        ;   XREF to: 004c2776 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004c370e
        ;   Label: LAB_004c370e
    PUSH EAX                            ; 004c3714
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004c3715
    CALL dword ptr [EDX + 0xfc]         ; 004c371b
    ADD ESP,0x4                         ; 004c3721
    CMP EAX,EBX                         ; 004c3724
    JZ 0x004c2776                       ; 004c3726
        ;   XREF to: 004c2776 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x1                            ; 004c372c
    PUSH 0x1                            ; 004c372e
    PUSH ESI                            ; 004c3730
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c3731
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c3736
    JMP 0x004c2776                      ; 004c3739
        ;   XREF to: 004c2776 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV EAX,[0x01c2a370]                ; 004c373e | DAT_01c2a370
        ;   Label: caseD_d
    MOV EDI,dword ptr [EBX + 0x10afc]   ; 004c3743
    SUB EDI,EAX                         ; 004c3749
    MOV dword ptr [EBX + 0x10afc],EDI   ; 004c374b
    TEST EDI,EDI                        ; 004c3751
    JG 0x004c3790                       ; 004c3753
        ;   XREF to: 004c3790 (CONDITIONAL_JUMP)  ; LAB_004c3790
    PUSH 0x5d90c2                       ; 004c3755 | = "burp[1,2].wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004c375a
    PUSH EBX                            ; 004c3760
    CALL dword ptr [EAX + 0x34]         ; 004c3761
    ADD ESP,0x8                         ; 004c3764
    PUSH 0x41f00000                     ; 004c3767
    PUSH 0x41700000                     ; 004c376c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004c3771
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c3776
    FLD float ptr [EBP + 0x76]          ; 004c3779
    FMUL double ptr [0x005d90ff]        ; 004c377c | DAT_005d90ff
    ADD ESP,0x8                         ; 004c3782
    CALL crt_math.c_round_FUN_005b7ff0  ; 004c3785
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [EBX + 0x10afc]     ; 004c378a
    PUSH dword ptr [EBP + 0x92]         ; 004c3790
        ;   Label: LAB_004c3790
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004c3796
    PUSH EBX                            ; 004c379c
    CALL dword ptr [EAX + 0x150]        ; 004c379d
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 004c37a3
    ADD ESP,0x8                         ; 004c37a9
    TEST EDX,EDX                        ; 004c37ac
    JZ 0x004c2776                       ; 004c37ae
        ;   XREF to: 004c2776 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x1                            ; 004c37b4
    PUSH 0x0                            ; 004c37b6
    LEA EAX,[EBX + 0x2b4]               ; 004c37b8
    PUSH EAX                            ; 004c37be
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c37bf
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c37c4
    JMP 0x004c2776                      ; 004c37c7
        ;   XREF to: 004c2776 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV dword ptr [EBP + 0x62],0xbf800000 ; 004c37cc
        ;   Label: LAB_004c37cc
    LEA ESI,[EBX + 0x2b4]               ; 004c37d3
    PUSH ESI                            ; 004c37d9
    CALL core_motion.cpp_FUN_005035c0   ; 004c37da
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004c37df
    ADD ESP,0x4                         ; 004c37e2
    CMP EAX,0x11                        ; 004c37e5
    JA 0x004c2776                       ; 004c37e8
        ;   XREF to: 004c2776 (CONDITIONAL_JUMP)  ; caseD_10
    JMP dword ptr [EAX*0x4 + 0x4c1b68]  ; 004c37ee | caseD_0 | caseD_11 | caseD_2
        ;   Label: switchD
    LEA EAX,[EBX + 0x257c]              ; 004c37f5
        ;   Label: LAB_004c37f5
    FLD float ptr [EAX + 0x4]           ; 004c37fb
    FMUL ST0                            ; 004c37fe
    FLD float ptr [EAX]                 ; 004c3800
    FMUL ST0                            ; 004c3802
    FADDP                               ; 004c3804
    FLD float ptr [EAX + 0x8]           ; 004c3806
    FMUL ST0                            ; 004c3809
    FADDP                               ; 004c380b
    FSQRT                               ; 004c380d
    FCOMP double ptr [0x005d916f]       ; 004c380f | DAT_005d916f
    FNSTSW AX                           ; 004c3815
    SAHF                                ; 004c3817
    JA 0x004c1f5f                       ; 004c3818
        ;   XREF to: 004c1f5f (CONDITIONAL_JUMP)  ; LAB_004c1f5f
    MOV ECX,dword ptr [EBX + 0x10af8]   ; 004c381e
    PUSH ECX                            ; 004c3824
    MOV ESI,dword ptr [0x0061c068]      ; 004c3825 | DAT_0061c068
    PUSH ESI                            ; 004c382b
    CALL core_sound.cpp_CSound_killSound_FUN_0055af80 ; 004c382c
        ;   XREF to: 0055af80 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_killSound_FUN_0055af80(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004c3831
    JMP 0x004c1f7c                      ; 004c3834
        ;   XREF to: 004c1f7c (UNCONDITIONAL_JUMP)  ; LAB_004c1f7c
    SUB ESP,0x8                         ; 004c3839
        ;   Label: LAB_004c3839
    FLD float ptr [EBX + 0x10a60]       ; 004c383c
    FSTP double ptr [ESP]               ; 004c3842
    PUSH 0x5d90d0                       ; 004c3845 | = "ghoul-walk-?.wav *%f"
    LEA EAX,[EBP + 0xfffffbae]          ; 004c384a
    PUSH EAX                            ; 004c3850
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004c3851
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004c3856
    LEA EAX,[EBP + 0xfffffbae]          ; 004c3859
    PUSH EAX                            ; 004c385f
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 004c3860
    PUSH EBX                            ; 004c3866
    CALL dword ptr [EDX + 0x38]         ; 004c3867
    ADD ESP,0x8                         ; 004c386a
    MOV dword ptr [EBX + 0x10af8],EAX   ; 004c386d
    JMP 0x004c1f7c                      ; 004c3873
        ;   XREF to: 004c1f7c (UNCONDITIONAL_JUMP)  ; LAB_004c1f7c
    MOV EAX,dword ptr [EBX + 0x10b40]   ; 004c3878
        ;   Label: LAB_004c3878
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 004c387e
    JZ 0x004c3945                       ; 004c3886
        ;   XREF to: 004c3945 (CONDITIONAL_JUMP)  ; LAB_004c3945
    MOV EAX,[0x01cb8230]                ; 004c388c | DAT_01cb8230
    PUSH 0x3e4ccccd                     ; 004c3891
    PUSH EAX                            ; 004c3896
    MOV EDX,dword ptr [EBX + 0x10b1c]   ; 004c3897
    PUSH EDX                            ; 004c389d
    PUSH EBX                            ; 004c389e
    CALL core_charactr.cpp_FUN_00427060 ; 004c389f
        ;   XREF to: 00427060 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00427060()
    MOV EAX,dword ptr [EBX + 0x10b1c]   ; 004c38a4
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x23f4] ; 004c38aa
    ADD ESP,0x10                        ; 004c38b1
    TEST ECX,ECX                        ; 004c38b4
    JZ 0x004c38d4                       ; 004c38b6
        ;   XREF to: 004c38d4 (CONDITIONAL_JUMP)  ; LAB_004c38d4
    MOV ESI,dword ptr [0x01cb8228]      ; 004c38b8 | DAT_01cb8228
    PUSH 0x3e4ccccd                     ; 004c38be
    PUSH ESI                            ; 004c38c3
    MOV EDI,dword ptr [EBX + 0x10b20]   ; 004c38c4
    PUSH EDI                            ; 004c38ca
    PUSH EBX                            ; 004c38cb
    CALL core_charactr.cpp_FUN_00427060 ; 004c38cc
        ;   XREF to: 00427060 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00427060()
    ADD ESP,0x10                        ; 004c38d1
    MOV EAX,[0x01cb8234]                ; 004c38d4 | DAT_01cb8234
        ;   Label: LAB_004c38d4
    PUSH 0x3e4ccccd                     ; 004c38d9
    PUSH EAX                            ; 004c38de
    MOV EDX,dword ptr [EBX + 0x10b24]   ; 004c38df
    PUSH EDX                            ; 004c38e5
    PUSH EBX                            ; 004c38e6
    CALL core_charactr.cpp_FUN_00427060 ; 004c38e7
        ;   XREF to: 00427060 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00427060()
    MOV EAX,dword ptr [EBX + 0x10b24]   ; 004c38ec
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x23f4] ; 004c38f2
    ADD ESP,0x10                        ; 004c38f9
    TEST ECX,ECX                        ; 004c38fc
    JZ 0x004c391c                       ; 004c38fe
        ;   XREF to: 004c391c (CONDITIONAL_JUMP)  ; LAB_004c391c
    MOV ESI,dword ptr [0x01cb822c]      ; 004c3900 | DAT_01cb822c
    PUSH 0x3e4ccccd                     ; 004c3906
    PUSH ESI                            ; 004c390b
    MOV EDI,dword ptr [EBX + 0x10b28]   ; 004c390c
    PUSH EDI                            ; 004c3912
    PUSH EBX                            ; 004c3913
    CALL core_charactr.cpp_FUN_00427060 ; 004c3914
        ;   XREF to: 00427060 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00427060()
    ADD ESP,0x10                        ; 004c3919
    MOV EAX,[0x01cb821c]                ; 004c391c | DAT_01cb821c
        ;   Label: LAB_004c391c
    PUSH 0x3f333333                     ; 004c3921
    PUSH EAX                            ; 004c3926
    MOV EDX,dword ptr [EBX + 0x10b44]   ; 004c3927
    PUSH EDX                            ; 004c392d
    PUSH EBX                            ; 004c392e
        ;   Label: LAB_004c392e
    CALL core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_00427130 ; 004c392f
        ;   XREF to: 00427130 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_00427130(CCharacter * this_ptr, int part_index, int bone_index, float chance)
    ADD ESP,0x10                        ; 004c3934
    PUSH EBX                            ; 004c3937
    CALL core_charactr.cpp_FUN_00426f30 ; 004c3938
        ;   XREF to: 00426f30 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00426f30()
    ADD ESP,0x4                         ; 004c393d
    JMP 0x004c1f89                      ; 004c3940
        ;   XREF to: 004c1f89 (UNCONDITIONAL_JUMP)  ; LAB_004c1f89
    MOV ESI,dword ptr [0x01cb8244]      ; 004c3945 | DAT_01cb8244
        ;   Label: LAB_004c3945
    PUSH 0x3f000000                     ; 004c394b
    PUSH ESI                            ; 004c3950
    PUSH EAX                            ; 004c3951
    JMP 0x004c392e                      ; 004c3952
        ;   XREF to: 004c392e (UNCONDITIONAL_JUMP)  ; LAB_004c392e
    MOV dword ptr [EBX + 0x10b64],0x3f800000 ; 004c3954
        ;   Label: LAB_004c3954
    JMP 0x004c2048                      ; 004c395e
        ;   XREF to: 004c2048 (UNCONDITIONAL_JUMP)  ; LAB_004c2048
    MOV EDX,dword ptr [EBX]             ; 004c3963
        ;   Label: LAB_004c3963
    MOV dword ptr [EAX],EDX             ; 004c3965
    MOV EDX,dword ptr [EBX + 0x4]       ; 004c3967
    MOV dword ptr [EAX + 0x4],EDX       ; 004c396a
    MOV EDX,dword ptr [EBX + 0x8]       ; 004c396d
    MOV dword ptr [EAX + 0x8],EDX       ; 004c3970
    LEA ESP,[EBP + 0x7a]                ; 004c3973
    POP EBP                             ; 004c3976
    POP EDI                             ; 004c3977
    POP ESI                             ; 004c3978
    POP EBX                             ; 004c3979
    RET                                 ; 004c397a

