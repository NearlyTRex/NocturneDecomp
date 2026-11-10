; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_imp_cpp_CImp_process_FUN_004f2b80(CImp *this_ptr,float delta_time)
;
; Parameters:
; CImp *           Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_004f2b58 = 004f33ad
;   TerminatedCString s_ghoul_eat_wav_005e55d9
;   TerminatedCString s_s_confused_while_walking_005e55e9
;   TerminatedCString s_imp_jump_wav_005e5613
;   TerminatedCString s_imp_laugh_wav_005e5621
;   TerminatedCString s_imp_laugh_wav_005e5630
;   undefined4 DAT_005e5642
;   undefined4 DAT_005e564a
;   undefined4 DAT_005e5652
;   undefined4 DAT_005e565a
;   undefined4 DAT_005e5662
;   undefined4 DAT_005e566a
;   undefined4 DAT_005e5672
;   undefined4 DAT_006027dc
;   undefined4 DAT_006027e8
;   ... and 11 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_actor.cpp_randomChance_FUN_0040cd00
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80
;   core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042e160
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
;   core_charactr.cpp_CCharacter_processWalking_FUN_00432240
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0
;   core_charactr.cpp_FUN_0042d700
;   core_charactr.cpp_FUN_0042d750
;   core_charactr.cpp_FUN_00435320
;   ... and 15 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2b80
        ;   Label: core_imp.cpp_CImp_process_FUN_004f2b80
    PUSH ESI                            ; 004f2b81
    PUSH EDI                            ; 004f2b82
    PUSH EBP                            ; 004f2b83
    MOV EBP,ESP                         ; 004f2b84
    SUB ESP,0x270                       ; 004f2b86
    SUB EBP,0x7a                        ; 004f2b8c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004f2b8f
    PUSH dword ptr [EBP + 0x92]         ; 004f2b95
    PUSH EBX                            ; 004f2b9b
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 004f2b9c
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004f2ba1
    TEST EAX,EAX                        ; 004f2ba4
    JZ 0x004f3135                       ; 004f2ba6
        ;   XREF to: 004f3135 (CONDITIONAL_JUMP)  ; LAB_004f3135
    MOV EAX,dword ptr [EBX + 0xc298]    ; 004f2bac
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 004f2bb2
    JZ 0x004f2c25                       ; 004f2bba
        ;   XREF to: 004f2c25 (CONDITIONAL_JUMP)  ; LAB_004f2c25
    LEA EAX,[EBX + 0x249c]              ; 004f2bbc
        ;   Label: LAB_004f2bbc
    MOV dword ptr [EAX + 0x8],0x0       ; 004f2bc2
    FLD float ptr [EBP + 0x92]          ; 004f2bc9
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f2bcf
    MOV dword ptr [EAX + 0x4],EDX       ; 004f2bd2
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f2bd5
    MOV dword ptr [EAX],EDX             ; 004f2bd8
    FMUL float ptr [EBX + 0xc1d0]       ; 004f2bda
    LEA EAX,[EBX + 0x158]               ; 004f2be0
    FSTP float ptr [EBP + 0x4e]         ; 004f2be6
    MOV dword ptr [EBP + 0x6e],EAX      ; 004f2be9
    FLD float ptr [EBP + 0x4e]          ; 004f2bec
        ;   Label: LAB_004f2bec
    FLDZ                                ; 004f2bef
    FCOMPP                              ; 004f2bf1
    FNSTSW AX                           ; 004f2bf3
    SAHF                                ; 004f2bf5
    JNC 0x004f2f23                      ; 004f2bf6
        ;   XREF to: 004f2f23 (CONDITIONAL_JUMP)  ; LAB_004f2f23
    LEA EAX,[EBP + 0x4e]                ; 004f2bfc
    PUSH EAX                            ; 004f2bff
    MOV EAX,dword ptr [EBP + 0x6e]      ; 004f2c00
    PUSH EAX                            ; 004f2c03
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 004f2c04
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004f2c09
    MOV ESI,EAX                         ; 004f2c0c
    CMP EAX,0x29a                       ; 004f2c0e
    JNC 0x004f2f03                      ; 004f2c13
        ;   XREF to: 004f2f03 (CONDITIONAL_JUMP)  ; LAB_004f2f03
    PUSH ESI                            ; 004f2c19
    PUSH EBX                            ; 004f2c1a
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 004f2c1b
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004f2c20
    JMP 0x004f2bec                      ; 004f2c23
        ;   XREF to: 004f2bec (UNCONDITIONAL_JUMP)  ; LAB_004f2bec
    PUSH EBX                            ; 004f2c25
        ;   Label: LAB_004f2c25
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f2c26
    CALL dword ptr [EAX + 0x10c]        ; 004f2c2c
    ADD ESP,0x4                         ; 004f2c32
    TEST EAX,EAX                        ; 004f2c35
    JNZ 0x004f2bbc                      ; 004f2c37
        ;   XREF to: 004f2bbc (CONDITIONAL_JUMP)  ; LAB_004f2bbc
    PUSH 0x1                            ; 004f2c39
    PUSH 0x6                            ; 004f2c3b
    LEA EAX,[EBX + 0x158]               ; 004f2c3d
    PUSH EAX                            ; 004f2c43
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f2c44
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f2c49
    JMP 0x004f2bbc                      ; 004f2c4c
        ;   XREF to: 004f2bbc (UNCONDITIONAL_JUMP)  ; LAB_004f2bbc
    MOV ESI,0x1                         ; 004f2c51
        ;   Label: LAB_004f2c51
    MOV EDI,dword ptr [EBX + 0xc1e8]    ; 004f2c56
    MOV dword ptr [EBP + 0x72],ESI      ; 004f2c5c
    TEST EDI,EDI                        ; 004f2c5f
    JNZ 0x004f2c78                      ; 004f2c61
        ;   XREF to: 004f2c78 (CONDITIONAL_JUMP)  ; LAB_004f2c78
    PUSH 0x1                            ; 004f2c63
        ;   Label: LAB_004f2c63
    PUSH 0x0                            ; 004f2c65
    MOV EAX,dword ptr [EBP + 0x6e]      ; 004f2c67
    PUSH EAX                            ; 004f2c6a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f2c6b
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f2c70
    JMP 0x004f2bec                      ; 004f2c73
        ;   XREF to: 004f2bec (UNCONDITIONAL_JUMP)  ; LAB_004f2bec
    TEST ESI,ESI                        ; 004f2c78
        ;   Label: LAB_004f2c78
    JZ 0x004f2c90                       ; 004f2c7a
        ;   XREF to: 004f2c90 (CONDITIONAL_JUMP)  ; LAB_004f2c90
    PUSH EDI                            ; 004f2c7c
    MOV ESI,dword ptr [EDI + 0x154]     ; 004f2c7d
    CALL dword ptr [ESI + 0x10c]        ; 004f2c83
    ADD ESP,0x4                         ; 004f2c89
    TEST EAX,EAX                        ; 004f2c8c
    JNZ 0x004f2c63                      ; 004f2c8e
        ;   XREF to: 004f2c63 (CONDITIONAL_JUMP)  ; LAB_004f2c63
    CMP dword ptr [EBP + 0x72],0x0      ; 004f2c90
        ;   Label: LAB_004f2c90
    JZ 0x004f2cb0                       ; 004f2c94
        ;   XREF to: 004f2cb0 (CONDITIONAL_JUMP)  ; LAB_004f2cb0
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004f2c96
    PUSH EAX                            ; 004f2c9c
    MOV ESI,dword ptr [EAX + 0x154]     ; 004f2c9d
    CALL dword ptr [ESI + 0xf4]         ; 004f2ca3
    ADD ESP,0x4                         ; 004f2ca9
    TEST EAX,EAX                        ; 004f2cac
    JNZ 0x004f2c63                      ; 004f2cae
        ;   XREF to: 004f2c63 (CONDITIONAL_JUMP)  ; LAB_004f2c63
    CMP dword ptr [EBP + 0x72],0x0      ; 004f2cb0
        ;   Label: LAB_004f2cb0
    JZ 0x004f2cd3                       ; 004f2cb4
        ;   XREF to: 004f2cd3 (CONDITIONAL_JUMP)  ; LAB_004f2cd3
    PUSH 0x0                            ; 004f2cb6
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004f2cb8
    PUSH EBX                            ; 004f2cbe
    MOV ESI,dword ptr [EAX + 0x154]     ; 004f2cbf
    PUSH EAX                            ; 004f2cc5
    CALL dword ptr [ESI + 0xe8]         ; 004f2cc6
    ADD ESP,0xc                         ; 004f2ccc
    TEST EAX,EAX                        ; 004f2ccf
    JZ 0x004f2c63                       ; 004f2cd1
        ;   XREF to: 004f2c63 (CONDITIONAL_JUMP)  ; LAB_004f2c63
    CMP dword ptr [EBP + 0x72],0x0      ; 004f2cd3
        ;   Label: LAB_004f2cd3
    JZ 0x004f2d5f                       ; 004f2cd7
        ;   XREF to: 004f2d5f (CONDITIONAL_JUMP)  ; LAB_004f2d5f
    MOV EAX,[0x006027dc]                ; 004f2cdd | DAT_006027dc
    MOV dword ptr [EBP + -0x6e],EAX     ; 004f2ce2
    LEA EAX,[EBP + -0x76]               ; 004f2ce5
    XOR EDI,EDI                         ; 004f2ce8
    PUSH EAX                            ; 004f2cea
    LEA ESI,[EBP + 0xffffff1e]          ; 004f2ceb
    MOV dword ptr [EBP + -0x76],EDI     ; 004f2cf1
    PUSH EBX                            ; 004f2cf4
    MOV dword ptr [EBP + -0x72],EDI     ; 004f2cf5
    LEA EDI,[EBP + 0xffffff36]          ; 004f2cf8
    CALL core_actor.cpp_FUN_00408b40    ; 004f2cfe
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[EBP + 0xffffff1e]          ; 004f2d03
    MOVSD ES:EDI,ESI                    ; 004f2d09
    MOVSD ES:EDI,ESI                    ; 004f2d0a
    MOVSD ES:EDI,ESI                    ; 004f2d0b
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004f2d0c
    FLD float ptr [EBP + 0xffffff36]    ; 004f2d12
    FSUB float ptr [EAX + 0x20]         ; 004f2d18
    FMUL ST0                            ; 004f2d1b
    FLD float ptr [EBP + 0xffffff3e]    ; 004f2d1d
    FSUB float ptr [EAX + 0x28]         ; 004f2d23
    FMUL ST0                            ; 004f2d26
    FADDP                               ; 004f2d28
    FSQRT                               ; 004f2d2a
    ADD ESP,0x8                         ; 004f2d2c
    FCOMP double ptr [0x005e566a]       ; 004f2d2f | DAT_005e566a
    FNSTSW AX                           ; 004f2d35
    SAHF                                ; 004f2d37
    JBE 0x004f2d3f                      ; 004f2d38
        ;   XREF to: 004f2d3f (CONDITIONAL_JUMP)  ; LAB_004f2d3f
    XOR EDX,EDX                         ; 004f2d3a
    MOV dword ptr [EBP + 0x72],EDX      ; 004f2d3c
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004f2d3f
        ;   Label: LAB_004f2d3f
    FLD float ptr [EBP + 0xffffff3a]    ; 004f2d45
    FSUB float ptr [EAX + 0x24]         ; 004f2d4b
    FABS                                ; 004f2d4e
    FCOMP double ptr [0x005e5672]       ; 004f2d50 | DAT_005e5672
    FNSTSW AX                           ; 004f2d56
    SAHF                                ; 004f2d58
    JA 0x004f2c63                       ; 004f2d59
        ;   XREF to: 004f2c63 (CONDITIONAL_JUMP)  ; LAB_004f2c63
    CMP dword ptr [EBP + 0x72],0x0      ; 004f2d5f
        ;   Label: LAB_004f2d5f
    JZ 0x004f2d86                       ; 004f2d63
        ;   XREF to: 004f2d86 (CONDITIONAL_JUMP)  ; LAB_004f2d86
    PUSH 0x0                            ; 004f2d65
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004f2d67
    PUSH EBX                            ; 004f2d6d
    MOV ESI,dword ptr [EAX + 0x154]     ; 004f2d6e
    PUSH EAX                            ; 004f2d74
    CALL dword ptr [ESI + 0xec]         ; 004f2d75
    ADD ESP,0xc                         ; 004f2d7b
    TEST EAX,EAX                        ; 004f2d7e
    JZ 0x004f2c63                       ; 004f2d80
        ;   XREF to: 004f2c63 (CONDITIONAL_JUMP)  ; LAB_004f2c63
    CMP dword ptr [EBP + 0x72],0x0      ; 004f2d86
        ;   Label: LAB_004f2d86
    JZ 0x004f2c63                       ; 004f2d8a
        ;   XREF to: 004f2c63 (CONDITIONAL_JUMP)  ; LAB_004f2c63
    PUSH 0x1                            ; 004f2d90
    PUSH 0x9                            ; 004f2d92
    MOV EDI,dword ptr [EBP + 0x6e]      ; 004f2d94
    PUSH EDI                            ; 004f2d97
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f2d98
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f2d9d
    JMP 0x004f2bec                      ; 004f2da0
        ;   XREF to: 004f2bec (UNCONDITIONAL_JUMP)  ; LAB_004f2bec
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 004f2da5
        ;   Label: LAB_004f2da5
    TEST EDX,EDX                        ; 004f2dab
    JNZ 0x004f2dc3                      ; 004f2dad
        ;   XREF to: 004f2dc3 (CONDITIONAL_JUMP)  ; LAB_004f2dc3
    PUSH 0x1                            ; 004f2daf
    PUSH EDX                            ; 004f2db1
    MOV ECX,dword ptr [EBP + 0x6e]      ; 004f2db2
    PUSH ECX                            ; 004f2db5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f2db6
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f2dbb
    JMP 0x004f2bec                      ; 004f2dbe
        ;   XREF to: 004f2bec (UNCONDITIONAL_JUMP)  ; LAB_004f2bec
    MOV ECX,dword ptr [0x01d06cf8]      ; 004f2dc3 | DAT_01d06cf8
        ;   Label: LAB_004f2dc3
    PUSH ECX                            ; 004f2dc9
    MOV ESI,dword ptr [EBP + 0x6e]      ; 004f2dca
    PUSH ESI                            ; 004f2dcd
    LEA ESI,[EBP + 0xffffff5a]          ; 004f2dce
    LEA EDI,[EBP + -0x46]               ; 004f2dd4
    CALL core_skeleton.cpp_FUN_00569040 ; 004f2dd7
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    ADD ESP,0x8                         ; 004f2ddc
    LEA EAX,[EBP + -0x46]               ; 004f2ddf
    LEA ESI,[EBP + 0xffffff5a]          ; 004f2de2
    PUSH EAX                            ; 004f2de8
    MOVSD ES:EDI,ESI                    ; 004f2de9
    MOVSD ES:EDI,ESI                    ; 004f2dea
    MOVSD ES:EDI,ESI                    ; 004f2deb
    PUSH EBX                            ; 004f2dec
    LEA ESI,[EBP + 0xffffff72]          ; 004f2ded
    LEA EDI,[EBP + 0xfffffeee]          ; 004f2df3
    CALL core_actor.cpp_FUN_00408b40    ; 004f2df9
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[EBP + 0xffffff72]          ; 004f2dfe
    LEA EAX,[EBP + 0xfffffe46]          ; 004f2e04
    MOVSD ES:EDI,ESI                    ; 004f2e0a
    MOVSD ES:EDI,ESI                    ; 004f2e0b
    MOVSD ES:EDI,ESI                    ; 004f2e0c
    ADD ESP,0x8                         ; 004f2e0d
    LEA EDI,[EBP + 0xfffffed6]          ; 004f2e10
    LEA ESI,[EBP + 0xfffffeee]          ; 004f2e16
    PUSH EAX                            ; 004f2e1c
    MOVSD ES:EDI,ESI                    ; 004f2e1d
    MOVSD ES:EDI,ESI                    ; 004f2e1e
    MOVSD ES:EDI,ESI                    ; 004f2e1f
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 004f2e20
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004f2e25
    PUSH 0x41200000                     ; 004f2e28
    PUSH 0x40a00000                     ; 004f2e2d
    LEA ESI,[EBP + 0xfffffe46]          ; 004f2e32
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004f2e38
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004f2e3d
    ADD ESP,0x8                         ; 004f2e40
    MOV dword ptr [EBP + 0xfffffe7a],EBX ; 004f2e43
    MOV dword ptr [EBP + 0xfffffe7e],EBX ; 004f2e49
    FLD float ptr [EBP + 0x76]          ; 004f2e4f
    PUSH ESI                            ; 004f2e52
    FSTP float ptr [EBP + 0xfffffe4a]   ; 004f2e53
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004f2e59
    PUSH EAX                            ; 004f2e5f
    MOV EDI,dword ptr [EAX + 0x154]     ; 004f2e60
    CALL dword ptr [EDI + 0x108]        ; 004f2e66
    FLD float ptr [EBP + 0xfffffe4a]    ; 004f2e6c
    FMUL double ptr [0x005e565a]        ; 004f2e72 | DAT_005e565a
    ADD ESP,0x8                         ; 004f2e78
    FMUL double ptr [0x005e5662]        ; 004f2e7b | DAT_005e5662
    PUSH 0x0                            ; 004f2e81
    CALL crt_math.c_round_FUN_005c03a0  ; 004f2e83
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [EBP + 0x3e]        ; 004f2e88
    MOV EDI,dword ptr [EBP + 0x3e]      ; 004f2e8b
    PUSH EDI                            ; 004f2e8e
    PUSH 0x0                            ; 004f2e8f
    LEA EAX,[EBP + 0xfffffed6]          ; 004f2e91
    PUSH EAX                            ; 004f2e97
    MOV EAX,[0x0061dca4]                ; 004f2e98 | g_CGorePtr
    PUSH EAX                            ; 004f2e9d
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060 ; 004f2e9e
        ;   XREF to: 004e6060 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 004f2ea3
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004f2ea6
    PUSH EAX                            ; 004f2eac
    MOV ESI,dword ptr [EAX + 0x154]     ; 004f2ead
    CALL dword ptr [ESI + 0x10c]        ; 004f2eb3
    ADD ESP,0x4                         ; 004f2eb9
    TEST EAX,EAX                        ; 004f2ebc
    JLE 0x004f2eeb                      ; 004f2ebe
        ;   XREF to: 004f2eeb (CONDITIONAL_JUMP)  ; LAB_004f2eeb
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004f2ec0
    PUSH EAX                            ; 004f2ec6
    MOV ESI,dword ptr [EAX + 0x154]     ; 004f2ec7
    CALL dword ptr [ESI + 0xf0]         ; 004f2ecd
    ADD ESP,0x4                         ; 004f2ed3
    PUSH 0x1                            ; 004f2ed6
    PUSH 0x0                            ; 004f2ed8
    MOV EDX,dword ptr [EBP + 0x6e]      ; 004f2eda
    PUSH EDX                            ; 004f2edd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f2ede
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f2ee3
    JMP 0x004f2bec                      ; 004f2ee6
        ;   XREF to: 004f2bec (UNCONDITIONAL_JUMP)  ; LAB_004f2bec
    MOV EDI,0x5e55d9                    ; 004f2eeb | = "ghoul-eat-?.wav"
        ;   Label: LAB_004f2eeb
    PUSH EDI                            ; 004f2ef0 | = "ghoul-eat-?.wav"
    MOV ESI,dword ptr [EBX + 0x154]     ; 004f2ef1
    PUSH EBX                            ; 004f2ef7
    CALL dword ptr [ESI + 0x2c]         ; 004f2ef8
    ADD ESP,0x8                         ; 004f2efb
    JMP 0x004f2bec                      ; 004f2efe
        ;   XREF to: 004f2bec (UNCONDITIONAL_JUMP)  ; LAB_004f2bec
    JBE 0x004f2c51                      ; 004f2f03
        ;   XREF to: 004f2c51 (CONDITIONAL_JUMP)  ; LAB_004f2c51
        ;   Label: LAB_004f2f03
    CMP EAX,0x29b                       ; 004f2f09
    JZ 0x004f2da5                       ; 004f2f0e
        ;   XREF to: 004f2da5 (CONDITIONAL_JUMP)  ; LAB_004f2da5
    PUSH ESI                            ; 004f2f14
    PUSH EBX                            ; 004f2f15
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 004f2f16
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004f2f1b
    JMP 0x004f2bec                      ; 004f2f1e
        ;   XREF to: 004f2bec (UNCONDITIONAL_JUMP)  ; LAB_004f2bec
    FLD float ptr [EBP + 0x92]          ; 004f2f23
        ;   Label: LAB_004f2f23
    FMUL float ptr [EBX + 0xc1d0]       ; 004f2f29
    SUB ESP,0x4                         ; 004f2f2f
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 004f2f32
    MOV dword ptr [EBX + 0x2524],EAX    ; 004f2f38
    FSTP float ptr [ESP]                ; 004f2f3e
    PUSH EBX                            ; 004f2f41
    CALL core_charactr.cpp_FUN_00435320 ; 004f2f42
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    ADD ESP,0x8                         ; 004f2f47
    LEA EAX,[EBX + 0x158]               ; 004f2f4a
    PUSH EAX                            ; 004f2f50
    MOV dword ptr [EBP + 0x6a],EAX      ; 004f2f51
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004f2f54
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004f2f59
    PUSH dword ptr [EBP + 0x92]         ; 004f2f5c
    MOV ESI,dword ptr [EAX + 0x24]      ; 004f2f62
    PUSH EBX                            ; 004f2f65
    MOV dword ptr [EBP + 0x5e],ESI      ; 004f2f66
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00432240 ; 004f2f69
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00432240(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004f2f6e
    TEST EAX,EAX                        ; 004f2f71
    JZ 0x004f3a0f                       ; 004f2f73
        ;   XREF to: 004f3a0f (CONDITIONAL_JUMP)  ; LAB_004f3a0f
    MOV EAX,dword ptr [EBX + 0x273c]    ; 004f2f79
    CMP EAX,0x2                         ; 004f2f7f
    JNC 0x004f3168                      ; 004f2f82
        ;   XREF to: 004f3168 (CONDITIONAL_JUMP)  ; LAB_004f3168
    CMP EAX,0x1                         ; 004f2f88
    JNZ 0x004f3173                      ; 004f2f8b
        ;   XREF to: 004f3173 (CONDITIONAL_JUMP)  ; LAB_004f3173
    PUSH 0x1                            ; 004f2f91
        ;   Label: LAB_004f2f91
    PUSH 0x1                            ; 004f2f93
    LEA EAX,[EBX + 0x158]               ; 004f2f95
        ;   Label: LAB_004f2f95
    PUSH EAX                            ; 004f2f9b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f2f9c
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f2fa1
        ;   Label: LAB_004f2fa1
    LEA EAX,[EBX + 0x249c]              ; 004f2fa4
    MOV dword ptr [EAX + 0x8],0x0       ; 004f2faa
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f2fb1
    MOV dword ptr [EAX + 0x4],EDX       ; 004f2fb4
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f2fb7
    MOV dword ptr [EAX],EDX             ; 004f2fba
    FLD float ptr [EBX + 0xc1e4]        ; 004f2fbc
        ;   Label: caseD_5
    FLDZ                                ; 004f2fc2
    FCOMPP                              ; 004f2fc4
    FNSTSW AX                           ; 004f2fc6
    SAHF                                ; 004f2fc8
    JNC 0x004f2fdd                      ; 004f2fc9
        ;   XREF to: 004f2fdd (CONDITIONAL_JUMP)  ; LAB_004f2fdd
    FLD float ptr [EBX + 0xc1e4]        ; 004f2fcb
    FSUB float ptr [EBP + 0x92]         ; 004f2fd1
    FSTP float ptr [EBX + 0xc1e4]       ; 004f2fd7
    PUSH EBX                            ; 004f2fdd
        ;   Label: LAB_004f2fdd
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120 ; 004f2fde
        ;   XREF to: 0042e120 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004f2fe3
    TEST EAX,EAX                        ; 004f2fe6
    JZ 0x004f310e                       ; 004f2fe8
        ;   XREF to: 004f310e (CONDITIONAL_JUMP)  ; LAB_004f310e
    CMP dword ptr [EBP + 0x5e],0x9      ; 004f2fee
    JZ 0x004f310e                       ; 004f2ff2
        ;   XREF to: 004f310e (CONDITIONAL_JUMP)  ; LAB_004f310e
    PUSH dword ptr [EBP + 0x92]         ; 004f2ff8
    PUSH EBX                            ; 004f2ffe
    LEA ESI,[EBX + 0x2518]              ; 004f2fff
    CALL core_charactr.cpp_FUN_0042d700 ; 004f3005
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    FLD float ptr [ESI]                 ; 004f300a
    FMUL float ptr [EBP + 0x92]         ; 004f300c
    FLD float ptr [ESI + 0x4]           ; 004f3012
    FMUL float ptr [EBP + 0x92]         ; 004f3015
    FLD float ptr [ESI + 0x8]           ; 004f301b
    FMUL float ptr [EBP + 0x92]         ; 004f301e
    LEA EDI,[EBP + 0xffffff2a]          ; 004f3024
    LEA ESI,[EBP + 0xffffff12]          ; 004f302a
    FXCH ST2                            ; 004f3030
    FSTP float ptr [EBP + 0xffffff12]   ; 004f3032
    FSTP float ptr [EBP + 0xffffff16]   ; 004f3038
    FSTP float ptr [EBP + 0xffffff1a]   ; 004f303e
    MOVSD ES:EDI,ESI                    ; 004f3044
    MOVSD ES:EDI,ESI                    ; 004f3045
    MOVSD ES:EDI,ESI                    ; 004f3046
    LEA EDX,[EBX + 0x250c]              ; 004f3047
    FLD float ptr [EBP + 0xffffff2a]    ; 004f304d
    FLD float ptr [EBP + 0xffffff2e]    ; 004f3053
    FLD float ptr [EBP + 0xffffff32]    ; 004f3059
    LEA EDI,[EBP + 0xfffffea6]          ; 004f305f
    LEA ESI,[EBP + 0xfffffebe]          ; 004f3065
    FXCH ST2                            ; 004f306b
    FADD float ptr [EDX]                ; 004f306d
    FXCH                                ; 004f306f
    FADD float ptr [EDX + 0x4]          ; 004f3071
    FXCH ST2                            ; 004f3074
    FADD float ptr [EDX + 0x8]          ; 004f3076
    FXCH                                ; 004f3079
    FSTP float ptr [EBP + 0xfffffebe]   ; 004f307b
    FXCH                                ; 004f3081
    FSTP float ptr [EBP + 0xfffffec2]   ; 004f3083
    FSTP float ptr [EBP + 0xfffffec6]   ; 004f3089
    MOVSD ES:EDI,ESI                    ; 004f308f
    MOVSD ES:EDI,ESI                    ; 004f3090
    MOVSD ES:EDI,ESI                    ; 004f3091
    LEA EAX,[EBX + 0x249c]              ; 004f3092
    FLD float ptr [EBP + 0xfffffea6]    ; 004f3098
    FLD float ptr [EBP + 0xfffffeaa]    ; 004f309e
    FLD float ptr [EBP + 0xfffffeae]    ; 004f30a4
    LEA EDI,[EBP + -0x52]               ; 004f30aa
    LEA ESI,[EBP + 0xfffffe8e]          ; 004f30ad
    FXCH ST2                            ; 004f30b3
    FADD float ptr [EAX]                ; 004f30b5
    FXCH                                ; 004f30b7
    FADD float ptr [EAX + 0x4]          ; 004f30b9
    FXCH ST2                            ; 004f30bc
    FADD float ptr [EAX + 0x8]          ; 004f30be
    FXCH                                ; 004f30c1
    FSTP float ptr [EBP + 0xfffffe8e]   ; 004f30c3
    FXCH                                ; 004f30c9
    FSTP float ptr [EBP + 0xfffffe92]   ; 004f30cb
    FSTP float ptr [EBP + 0xfffffe96]   ; 004f30d1
    MOVSD ES:EDI,ESI                    ; 004f30d7
    MOVSD ES:EDI,ESI                    ; 004f30d8
    MOVSD ES:EDI,ESI                    ; 004f30d9
    MOV dword ptr [EDX + 0x8],0x0       ; 004f30da
    MOV ECX,dword ptr [EDX + 0x8]       ; 004f30e1
    MOV dword ptr [EDX + 0x4],ECX       ; 004f30e4
    MOV ECX,dword ptr [EDX + 0x4]       ; 004f30e7
    MOV dword ptr [EDX],ECX             ; 004f30ea
    MOV dword ptr [EAX + 0x8],0x0       ; 004f30ec
    ADD ESP,0x8                         ; 004f30f3
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f30f6
    MOV dword ptr [EAX + 0x4],EDX       ; 004f30f9
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f30fc
    MOV dword ptr [EAX],EDX             ; 004f30ff
    LEA EAX,[EBP + -0x52]               ; 004f3101
    PUSH EAX                            ; 004f3104
    PUSH EBX                            ; 004f3105
    CALL core_charactr.cpp_FUN_0042d750 ; 004f3106
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004f310b
    PUSH EBX                            ; 004f310e
        ;   Label: LAB_004f310e
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042e160 ; 004f310f
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004f3114
    LEA EAX,[EBX + 0x158]               ; 004f3117
    PUSH EAX                            ; 004f311d
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 004f311e
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004f3123
    PUSH dword ptr [EBP + 0x92]         ; 004f3126
    PUSH EBX                            ; 004f312c
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80 ; 004f312d
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004f3132
    LEA ESP,[EBP + 0x7a]                ; 004f3135
        ;   Label: LAB_004f3135
    POP EBP                             ; 004f3138
    POP EDI                             ; 004f3139
    POP ESI                             ; 004f313a
    POP EBX                             ; 004f313b
    RET                                 ; 004f313c
    PUSH 0x1                            ; 004f313d
        ;   Label: LAB_004f313d
    PUSH 0x0                            ; 004f313f
    LEA EAX,[EBX + 0x158]               ; 004f3141
    PUSH EAX                            ; 004f3147
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f3148
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f314d
    PUSH EBX                            ; 004f3150
    MOV EAX,0x5e55e9                    ; 004f3151 | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 004f3156 | = "%s confused while walking to scriptDe..."
    MOV EDI,dword ptr [0x00611100]      ; 004f3157 | g_CConsolePtr
    PUSH EDI                            ; 004f315d | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 004f315e
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    JMP 0x004f2fa1                      ; 004f3163
        ;   XREF to: 004f2fa1 (UNCONDITIONAL_JUMP)  ; LAB_004f2fa1
    JBE 0x004f2f91                      ; 004f3168
        ;   XREF to: 004f2f91 (CONDITIONAL_JUMP)  ; LAB_004f2f91
        ;   Label: LAB_004f3168
    CMP EAX,0x3                         ; 004f316e
    JZ 0x004f313d                       ; 004f3171
        ;   XREF to: 004f313d (CONDITIONAL_JUMP)  ; LAB_004f313d
    PUSH 0x1                            ; 004f3173
        ;   Label: LAB_004f3173
    PUSH 0x0                            ; 004f3175
    JMP 0x004f2f95                      ; 004f3177
        ;   XREF to: 004f2f95 (UNCONDITIONAL_JUMP)  ; LAB_004f2f95
    CMP dword ptr [EBX + 0xc1d4],0x0    ; 004f317c
        ;   Label: caseD_7
    JNZ 0x004f2fbc                      ; 004f3183
        ;   XREF to: 004f2fbc (CONDITIONAL_JUMP)  ; caseD_8
    CMP dword ptr [EBX + 0xdc],0x0      ; 004f3189
    JNZ 0x004f2fbc                      ; 004f3190
        ;   XREF to: 004f2fbc (CONDITIONAL_JUMP)  ; caseD_8
    PUSH EAX                            ; 004f3196
    MOV EAX,dword ptr [EBP + 0x6a]      ; 004f3197
    PUSH EAX                            ; 004f319a
    LEA ESI,[EBP + -0x16]               ; 004f319b
    LEA EDI,[EBP + 0xffffff4e]          ; 004f319e
    CALL core_skeleton.cpp_FUN_00569040 ; 004f31a4
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    ADD ESP,0x8                         ; 004f31a9
    LEA EAX,[EBP + 0xffffff4e]          ; 004f31ac
    LEA ESI,[EBP + -0x16]               ; 004f31b2
    PUSH EAX                            ; 004f31b5
    MOVSD ES:EDI,ESI                    ; 004f31b6
    MOVSD ES:EDI,ESI                    ; 004f31b7
    MOVSD ES:EDI,ESI                    ; 004f31b8
    PUSH EBX                            ; 004f31b9
    LEA ESI,[EBP + 0x26]                ; 004f31ba
    CALL core_actor.cpp_FUN_00408b40    ; 004f31bd
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 004f31c2
    PUSH 0x0                            ; 004f31c5
    LEA EAX,[EBP + -0x22]               ; 004f31c7
    LEA EDI,[EBP + -0x22]               ; 004f31ca
    PUSH EAX                            ; 004f31cd
    MOV EDX,dword ptr [0x0061dca4]      ; 004f31ce | g_CGorePtr
    LEA ESI,[EBP + 0x26]                ; 004f31d4
    PUSH EDX                            ; 004f31d7
    MOVSD ES:EDI,ESI                    ; 004f31d8
    MOVSD ES:EDI,ESI                    ; 004f31d9
    MOVSD ES:EDI,ESI                    ; 004f31da
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004e62e0 ; 004f31db
        ;   XREF to: 004e62e0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004e62e0(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 004f31e0
    MOV dword ptr [EBX + 0xc1d4],0x1    ; 004f31e3
    JMP 0x004f2fbc                      ; 004f31ed
        ;   XREF to: 004f2fbc (UNCONDITIONAL_JUMP)  ; caseD_8
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 004f31f2
        ;   Label: caseD_9
    TEST ESI,ESI                        ; 004f31f8
    JNZ 0x004f3211                      ; 004f31fa
        ;   XREF to: 004f3211 (CONDITIONAL_JUMP)  ; LAB_004f3211
    PUSH 0x1                            ; 004f31fc
    PUSH 0x5                            ; 004f31fe
    MOV ECX,dword ptr [EBP + 0x6a]      ; 004f3200
    PUSH ECX                            ; 004f3203
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f3204
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f3209
    JMP 0x004f2fbc                      ; 004f320c
        ;   XREF to: 004f2fbc (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH ESI                            ; 004f3211
        ;   Label: LAB_004f3211
    MOV EDX,dword ptr [ESI + 0x154]     ; 004f3212
    CALL dword ptr [EDX + 0x10c]        ; 004f3218
    ADD ESP,0x4                         ; 004f321e
    TEST EAX,EAX                        ; 004f3221
    JNZ 0x004f3262                      ; 004f3223
        ;   XREF to: 004f3262 (CONDITIONAL_JUMP)  ; LAB_004f3262
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004f3225
    MOV EDI,dword ptr [EAX + 0x26fc]    ; 004f322b
    CMP EBX,EDI                         ; 004f3231
    JNZ 0x004f3277                      ; 004f3233
        ;   XREF to: 004f3277 (CONDITIONAL_JUMP)  ; LAB_004f3277
    FLD float ptr [EAX + 0x20]          ; 004f3235
    FLD double ptr [0x005e5642]         ; 004f3238 | DAT_005e5642
    FLD float ptr [EDI + 0x44]          ; 004f323e
    FMUL ST1                            ; 004f3241
    FSUBP ST2,ST0                       ; 004f3243
    MOV EAX,dword ptr [EDI + 0xc1e8]    ; 004f3245
    FXCH                                ; 004f324b
    FSTP float ptr [EDI + 0x20]         ; 004f324d
    FLD float ptr [EAX + 0x28]          ; 004f3250
    FLD float ptr [EDI + 0x5c]          ; 004f3253
    FMULP ST2                           ; 004f3256
    FSUBRP                              ; 004f3258
    FSTP float ptr [EDI + 0x28]         ; 004f325a
    JMP 0x004f2fbc                      ; 004f325d
        ;   XREF to: 004f2fbc (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x1                            ; 004f3262
        ;   Label: LAB_004f3262
    PUSH 0x5                            ; 004f3264
    MOV EDX,dword ptr [EBP + 0x6a]      ; 004f3266
    PUSH EDX                            ; 004f3269
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f326a
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f326f
    JMP 0x004f2fbc                      ; 004f3272
        ;   XREF to: 004f2fbc (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x1                            ; 004f3277
        ;   Label: LAB_004f3277
    PUSH 0x5                            ; 004f3279
    MOV EAX,dword ptr [EBP + 0x6a]      ; 004f327b
    PUSH EAX                            ; 004f327e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f327f
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f3284
    JMP 0x004f2fbc                      ; 004f3287
        ;   XREF to: 004f2fbc (UNCONDITIONAL_JUMP)  ; caseD_8
    LEA EAX,[EBP + 0xfffffe0a]          ; 004f328c
        ;   Label: caseD_4
    PUSH EAX                            ; 004f3292
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 004f3293
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004f3298
    PUSH 0x40a00000                     ; 004f329b
    PUSH 0x40400000                     ; 004f32a0
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004f32a5
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004f32aa
    ADD ESP,0x8                         ; 004f32ad
    LEA EAX,[EBP + 0xfffffe0a]          ; 004f32b0
    MOV EDX,dword ptr [0x01d06d00]      ; 004f32b6 | DAT_01d06d00
    PUSH EAX                            ; 004f32bc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004f32bd
    LEA ESI,[EBP + 0xfffffefa]          ; 004f32c4
    SUB EAX,EDX                         ; 004f32ca
    MOV dword ptr [EBP + 0xfffffe3e],EBX ; 004f32cc
    MOV EDX,EAX                         ; 004f32d2
    MOV dword ptr [EBP + 0xfffffe42],EBX ; 004f32d4
    SHL EDX,0x4                         ; 004f32da
    LEA EAX,[EBX + 0xfd8]               ; 004f32dd
    PUSH 0x3ecccccd                     ; 004f32e3
    ADD EAX,EDX                         ; 004f32e8
    LEA EDI,[EBP + 0xffffff06]          ; 004f32ea
    PUSH EAX                            ; 004f32f0
    FLD float ptr [EBP + 0x76]          ; 004f32f1
    PUSH 0x2c8af28                      ; 004f32f4 | DAT_02c8af28
    FSTP float ptr [EBP + 0xfffffe0e]   ; 004f32f9
    CALL core_xform.cpp_FUN_005b5080    ; 004f32ff
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 004f3304
    LEA EAX,[EBP + 0xffffff06]          ; 004f3307
    LEA ESI,[EBP + 0xfffffefa]          ; 004f330d
    PUSH EAX                            ; 004f3313
    MOVSD ES:EDI,ESI                    ; 004f3314
    MOVSD ES:EDI,ESI                    ; 004f3315
    MOVSD ES:EDI,ESI                    ; 004f3316
    PUSH EBX                            ; 004f3317
    LEA ESI,[EBP + 0xffffff66]          ; 004f3318
    CALL core_actor.cpp_FUN_00408b40    ; 004f331e
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 004f3323
    LEA EAX,[EBP + 0xfffffe82]          ; 004f3326
    PUSH EAX                            ; 004f332c
    LEA EDI,[EBP + 0xfffffe82]          ; 004f332d
    LEA ESI,[EBP + 0xffffff66]          ; 004f3333
    PUSH EBX                            ; 004f3339
    MOVSD ES:EDI,ESI                    ; 004f333a
    MOVSD ES:EDI,ESI                    ; 004f333b
    MOVSD ES:EDI,ESI                    ; 004f333c
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770 ; 004f333d
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 004f3342
    TEST EAX,EAX                        ; 004f3345
    JZ 0x004f2fbc                       ; 004f3347
        ;   XREF to: 004f2fbc (CONDITIONAL_JUMP)  ; caseD_8
    XOR EDI,EDI                         ; 004f334d
    XOR ESI,ESI                         ; 004f334f
    MOV EAX,[0x00622c18]                ; 004f3351 | g_CDemonSetPtr
        ;   Label: LAB_004f3351
    CMP ESI,dword ptr [EAX + 0x150fec]  ; 004f3356 | g_CDemonSetInstance.enemy_count
    JGE 0x004f2fbc                      ; 004f335c
        ;   XREF to: 004f2fbc (CONDITIONAL_JUMP)  ; caseD_8
    MOV ECX,dword ptr [0x01d06d60]      ; 004f3362 | g_CImpClassInfo.name_hash
    PUSH ECX                            ; 004f3368
    MOV EDX,dword ptr [EDI + EAX*0x1 + 0x150ff0] ; 004f3369
    PUSH EDX                            ; 004f3370
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f3371
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004f3376
    TEST EAX,EAX                        ; 004f3379
    JNZ 0x004f3383                      ; 004f337b
        ;   XREF to: 004f3383 (CONDITIONAL_JUMP)  ; LAB_004f3383
    INC ESI                             ; 004f337d
        ;   Label: LAB_004f337d
    ADD EDI,0x4                         ; 004f337e
    JMP 0x004f3351                      ; 004f3381
        ;   XREF to: 004f3351 (UNCONDITIONAL_JUMP)  ; LAB_004f3351
    CMP EAX,EBX                         ; 004f3383
        ;   Label: LAB_004f3383
    JZ 0x004f337d                       ; 004f3385
        ;   XREF to: 004f337d (CONDITIONAL_JUMP)  ; LAB_004f337d
    MOV ECX,dword ptr [EBX + 0xc1e8]    ; 004f3387
    CMP ECX,dword ptr [EAX + 0xc1e8]    ; 004f338d
    JNZ 0x004f337d                      ; 004f3393
        ;   XREF to: 004f337d (CONDITIONAL_JUMP)  ; LAB_004f337d
    PUSH 0x1                            ; 004f3395
    PUSH 0x3                            ; 004f3397
    ADD EAX,0x158                       ; 004f3399
    PUSH EAX                            ; 004f339e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f339f
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f33a4
    INC ESI                             ; 004f33a7
    ADD EDI,0x4                         ; 004f33a8
    JMP 0x004f3351                      ; 004f33ab
        ;   XREF to: 004f3351 (UNCONDITIONAL_JUMP)  ; LAB_004f3351
    MOV EAX,[0x01d06ab4]                ; 004f33ad | DAT_01d06ab4
        ;   Label: caseD_0
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004f33b2
    PUSH EAX                            ; 004f33b9
    MOV EDX,dword ptr [EAX + 0x154]     ; 004f33ba
    CALL dword ptr [EDX + 0x10c]        ; 004f33c0
    ADD ESP,0x4                         ; 004f33c6
    TEST EAX,EAX                        ; 004f33c9
    JZ 0x004f33fa                       ; 004f33cb
        ;   XREF to: 004f33fa (CONDITIONAL_JUMP)  ; LAB_004f33fa
    PUSH 0x3dcccccd                     ; 004f33cd
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 004f33d2
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 004f33d7
    TEST EAX,EAX                        ; 004f33da
    JZ 0x004f2fbc                       ; 004f33dc
        ;   XREF to: 004f2fbc (CONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x1                            ; 004f33e2
    PUSH 0x3                            ; 004f33e4
    LEA EAX,[EBX + 0x158]               ; 004f33e6
    PUSH EAX                            ; 004f33ec
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f33ed
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f33f2
    JMP 0x004f2fbc                      ; 004f33f5
        ;   XREF to: 004f2fbc (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH dword ptr [EBP + 0x92]         ; 004f33fa
        ;   Label: LAB_004f33fa
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f3400
    PUSH EBX                            ; 004f3406
    CALL dword ptr [EAX + 0x144]        ; 004f3407
    MOV EDI,dword ptr [EBX + 0xc1e8]    ; 004f340d
    ADD ESP,0x8                         ; 004f3413
    TEST EDI,EDI                        ; 004f3416
    JZ 0x004f3545                       ; 004f3418
        ;   XREF to: 004f3545 (CONDITIONAL_JUMP)  ; LAB_004f3545
    MOV EDX,dword ptr [EDI + 0x26fc]    ; 004f341e
    MOV EAX,EDI                         ; 004f3424
    TEST EDX,EDX                        ; 004f3426
    JNZ 0x004f34c6                      ; 004f3428
        ;   XREF to: 004f34c6 (CONDITIONAL_JUMP)  ; LAB_004f34c6
    FLD float ptr [EAX + 0x20]          ; 004f342e
    FLD float ptr [EAX + 0x24]          ; 004f3431
    FLD float ptr [EAX + 0x28]          ; 004f3434
    LEA EDX,[EBX + 0x20]                ; 004f3437
    LEA EDI,[EBP + 0x2]                 ; 004f343a
    LEA ESI,[EBP + -0x3a]               ; 004f343d
    FXCH ST2                            ; 004f3440
    FSUB float ptr [EDX]                ; 004f3442
    FXCH                                ; 004f3444
    FSUB float ptr [EDX + 0x4]          ; 004f3446
    FXCH ST2                            ; 004f3449
    FSUB float ptr [EDX + 0x8]          ; 004f344b
    FXCH                                ; 004f344e
    FSTP float ptr [EBP + -0x3a]        ; 004f3450
    FXCH                                ; 004f3453
    FSTP float ptr [EBP + -0x36]        ; 004f3455
    FSTP float ptr [EBP + -0x32]        ; 004f3458
    MOVSD ES:EDI,ESI                    ; 004f345b
    MOVSD ES:EDI,ESI                    ; 004f345c
    MOVSD ES:EDI,ESI                    ; 004f345d
    FLD float ptr [EBP + 0x6]           ; 004f345e
    FMUL ST0                            ; 004f3461
    FLD float ptr [EBP + 0x2]           ; 004f3463
    FMUL ST0                            ; 004f3466
    FADDP                               ; 004f3468
    FLD float ptr [EBP + 0xa]           ; 004f346a
    FMUL ST0                            ; 004f346d
    FADDP                               ; 004f346f
    FSQRT                               ; 004f3471
    FSTP float ptr [EBP + 0x46]         ; 004f3473
    MOV EAX,dword ptr [EBP + 0x46]      ; 004f3476
    FLD float ptr [EBP + 0x46]          ; 004f3479
    MOV dword ptr [EBP + 0x56],EAX      ; 004f347c
    FCOMP float ptr [0x006027dc]        ; 004f347f | DAT_006027dc
    FNSTSW AX                           ; 004f3485
    SAHF                                ; 004f3487
    JC 0x004f34db                       ; 004f3488
        ;   XREF to: 004f34db (CONDITIONAL_JUMP)  ; LAB_004f34db
    FLD float ptr [EBP + 0x56]          ; 004f348a
        ;   Label: LAB_004f348a
    FCOMP float ptr [EBX + 0xc1e0]      ; 004f348d
    FNSTSW AX                           ; 004f3493
    SAHF                                ; 004f3495
    JNC 0x004f2fbc                      ; 004f3496
        ;   XREF to: 004f2fbc (CONDITIONAL_JUMP)  ; caseD_8
    FLD float ptr [EBP + 0x56]          ; 004f349c
    LEA EDX,[EBX + 0x158]               ; 004f349f
    FCOMP float ptr [0x006027e8]        ; 004f34a5 | DAT_006027e8
    FNSTSW AX                           ; 004f34ab
    SAHF                                ; 004f34ad
    JNC 0x004f3533                      ; 004f34ae
        ;   XREF to: 004f3533 (CONDITIONAL_JUMP)  ; LAB_004f3533
    PUSH 0x1                            ; 004f34b4
    PUSH 0x1                            ; 004f34b6
    PUSH EDX                            ; 004f34b8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f34b9
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f34be
    JMP 0x004f2fbc                      ; 004f34c1
        ;   XREF to: 004f2fbc (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x1                            ; 004f34c6
        ;   Label: LAB_004f34c6
    PUSH 0x3                            ; 004f34c8
    MOV ESI,dword ptr [EBP + 0x6a]      ; 004f34ca
    PUSH ESI                            ; 004f34cd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f34ce
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f34d3
    JMP 0x004f2fbc                      ; 004f34d6
        ;   XREF to: 004f2fbc (UNCONDITIONAL_JUMP)  ; caseD_8
    LEA EAX,[EBP + 0x2]                 ; 004f34db
        ;   Label: LAB_004f34db
    PUSH EAX                            ; 004f34de
    LEA ESI,[EBP + -0x5e]               ; 004f34df
    LEA EDI,[EBP + -0x6a]               ; 004f34e2
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 004f34e5
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[EBP + -0x5e]               ; 004f34ea
    MOVSD ES:EDI,ESI                    ; 004f34ed
    MOVSD ES:EDI,ESI                    ; 004f34ee
    MOVSD ES:EDI,ESI                    ; 004f34ef
    ADD ESP,0x4                         ; 004f34f0
    FLD float ptr [EBP + -0x66]         ; 004f34f3
    FSUB float ptr [EBX + 0x34]         ; 004f34f6
    SUB ESP,0x4                         ; 004f34f9
    FSTP float ptr [ESP]                ; 004f34fc
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 004f34ff
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [EBP + 0x76],EAX      ; 004f3504
    FLD float ptr [EBP + 0x76]          ; 004f3507
    FABS                                ; 004f350a
    ADD ESP,0x4                         ; 004f350c
    FCOMP double ptr [0x005e5652]       ; 004f350f | DAT_005e5652
    FNSTSW AX                           ; 004f3515
    SAHF                                ; 004f3517
    JNC 0x004f348a                      ; 004f3518
        ;   XREF to: 004f348a (CONDITIONAL_JUMP)  ; LAB_004f348a
    PUSH 0x1                            ; 004f351e
    PUSH 0x4                            ; 004f3520
    MOV ECX,dword ptr [EBP + 0x6a]      ; 004f3522
    PUSH ECX                            ; 004f3525
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f3526
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f352b
    JMP 0x004f348a                      ; 004f352e
        ;   XREF to: 004f348a (UNCONDITIONAL_JUMP)  ; LAB_004f348a
    PUSH 0x1                            ; 004f3533
        ;   Label: LAB_004f3533
    PUSH 0x2                            ; 004f3535
    PUSH EDX                            ; 004f3537
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f3538
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f353d
    JMP 0x004f2fbc                      ; 004f3540
        ;   XREF to: 004f2fbc (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH dword ptr [EBP + 0x92]         ; 004f3545
        ;   Label: LAB_004f3545
    PUSH EBX                            ; 004f354b
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0 ; 004f354c
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004f3551
    TEST EAX,EAX                        ; 004f3554
    JZ 0x004f2fbc                       ; 004f3556
        ;   XREF to: 004f2fbc (CONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x1                            ; 004f355c
    PUSH 0x1                            ; 004f355e
    MOV EAX,dword ptr [EBP + 0x6a]      ; 004f3560
    PUSH EAX                            ; 004f3563
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f3564
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f3569
    JMP 0x004f2fbc                      ; 004f356c
        ;   XREF to: 004f2fbc (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH dword ptr [EBP + 0x92]         ; 004f3571
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f3577
    PUSH EBX                            ; 004f357d
    CALL dword ptr [EAX + 0x144]        ; 004f357e
    ADD ESP,0x8                         ; 004f3584
    LEA EAX,[EBX + 0x158]               ; 004f3587
    MOV EDI,dword ptr [EBX + 0xc1e8]    ; 004f358d
    MOV dword ptr [EBP + 0x66],EAX      ; 004f3593
    TEST EDI,EDI                        ; 004f3596
    JZ 0x004f35b6                       ; 004f3598
        ;   XREF to: 004f35b6 (CONDITIONAL_JUMP)  ; LAB_004f35b6
    MOV EDX,dword ptr [EDI + 0x26fc]    ; 004f359a
    TEST EDX,EDX                        ; 004f35a0
    JZ 0x004f35f2                       ; 004f35a2
        ;   XREF to: 004f35f2 (CONDITIONAL_JUMP)  ; LAB_004f35f2
    PUSH 0x1                            ; 004f35a4
    PUSH 0x3                            ; 004f35a6
    PUSH EAX                            ; 004f35a8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f35a9
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f35ae
    JMP 0x004f2fbc                      ; 004f35b1
        ;   XREF to: 004f2fbc (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH dword ptr [EBP + 0x92]         ; 004f35b6
        ;   Label: LAB_004f35b6
    PUSH EBX                            ; 004f35bc
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0 ; 004f35bd
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004f35c2
    TEST EAX,EAX                        ; 004f35c5
    JZ 0x004f35de                       ; 004f35c7
        ;   XREF to: 004f35de (CONDITIONAL_JUMP)  ; LAB_004f35de
    PUSH 0x1                            ; 004f35c9
    PUSH 0x1                            ; 004f35cb
    MOV ESI,dword ptr [EBP + 0x66]      ; 004f35cd
    PUSH ESI                            ; 004f35d0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f35d1
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f35d6
    JMP 0x004f2fbc                      ; 004f35d9
        ;   XREF to: 004f2fbc (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x1                            ; 004f35de
        ;   Label: LAB_004f35de
    PUSH EDI                            ; 004f35e0
    MOV ECX,dword ptr [EBP + 0x66]      ; 004f35e1
    PUSH ECX                            ; 004f35e4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f35e5
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f35ea
    JMP 0x004f2fbc                      ; 004f35ed
        ;   XREF to: 004f2fbc (UNCONDITIONAL_JUMP)  ; caseD_8
    MOV EAX,[0x006027dc]                ; 004f35f2 | DAT_006027dc
        ;   Label: LAB_004f35f2
    MOV dword ptr [EBP + 0x5a],EAX      ; 004f35f7
    LEA EAX,[EBX + 0x249c]              ; 004f35fa
    PUSH 0x3e32b8c2                     ; 004f3600
    MOV dword ptr [EAX + 0x8],EDX       ; 004f3605
    PUSH 0x3f000000                     ; 004f3608
    MOV ECX,dword ptr [EAX + 0x8]       ; 004f360d
    MOV dword ptr [EAX + 0x4],ECX       ; 004f3610
    MOV ECX,dword ptr [EAX + 0x4]       ; 004f3613
    MOV dword ptr [EAX],ECX             ; 004f3616
    MOV EAX,dword ptr [EBP + 0x5a]      ; 004f3618
    MOV dword ptr [EBP + 0xfffffee2],EDX ; 004f361b
    MOV dword ptr [EBP + 0xfffffeea],EAX ; 004f3621
    LEA EAX,[EBP + 0xfffffee2]          ; 004f3627
    MOV dword ptr [EBP + 0xfffffee6],EDX ; 004f362d
    PUSH EAX                            ; 004f3633
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004f3634
    PUSH EAX                            ; 004f363a
    MOV EDX,dword ptr [EAX + 0x154]     ; 004f363b
    CALL dword ptr [EDX + 0xc4]         ; 004f3641
    ADD ESP,0x4                         ; 004f3647
    PUSH EAX                            ; 004f364a
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004f364b
    ADD EAX,0x20                        ; 004f3651
    PUSH EAX                            ; 004f3654
    PUSH EBX                            ; 004f3655
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 004f3656
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004f365b
    TEST EAX,EAX                        ; 004f365e
    JL 0x004f2fbc                       ; 004f3660
        ;   XREF to: 004f2fbc (CONDITIONAL_JUMP)  ; caseD_8
    LEA EDI,[EBP + 0xfffffeca]          ; 004f3666
    LEA EDX,[EBX + 0x20]                ; 004f366c
    LEA ESI,[EBP + 0xffffff7e]          ; 004f366f
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004f3675
    FLD float ptr [EDX]                 ; 004f367b
    FLD float ptr [EDX + 0x4]           ; 004f367d
    FLD float ptr [EDX + 0x8]           ; 004f3680
    FXCH ST2                            ; 004f3683
    FSUB float ptr [EAX + 0x20]         ; 004f3685
    FXCH                                ; 004f3688
    FSUB float ptr [EAX + 0x24]         ; 004f368a
    FXCH ST2                            ; 004f368d
    FSUB float ptr [EAX + 0x28]         ; 004f368f
    FXCH                                ; 004f3692
    FSTP float ptr [EBP + 0xffffff7e]   ; 004f3694
    FXCH                                ; 004f369a
    FSTP float ptr [EBP + -0x7e]        ; 004f369c
    FSTP float ptr [EBP + -0x7a]        ; 004f369f
    MOVSD ES:EDI,ESI                    ; 004f36a2
    MOVSD ES:EDI,ESI                    ; 004f36a3
    MOVSD ES:EDI,ESI                    ; 004f36a4
    FLD float ptr [EBP + 0xfffffeca]    ; 004f36a5
    FMUL ST0                            ; 004f36ab
    FLD float ptr [EBP + 0xfffffed2]    ; 004f36ad
    FMUL ST0                            ; 004f36b3
    FADDP                               ; 004f36b5
    FSQRT                               ; 004f36b7
    XOR EDI,EDI                         ; 004f36b9
    MOV dword ptr [EBP + 0xfffffece],EDI ; 004f36bb
    FSTP float ptr [EBP + 0x4a]         ; 004f36c1
    MOV EAX,dword ptr [EBP + 0x4a]      ; 004f36c4
    FLD float ptr [EBP + 0x4a]          ; 004f36c7
    MOV dword ptr [EBP + 0x62],EAX      ; 004f36ca
    FCOMP float ptr [0x006027e8]        ; 004f36cd | DAT_006027e8
    FNSTSW AX                           ; 004f36d3
    SAHF                                ; 004f36d5
    JBE 0x004f36ef                      ; 004f36d6
        ;   XREF to: 004f36ef (CONDITIONAL_JUMP)  ; LAB_004f36ef
    MOV EAX,dword ptr [EBP + 0x5e]      ; 004f36d8
    CMP EAX,0x1                         ; 004f36db
    JNZ 0x004f36ef                      ; 004f36de
        ;   XREF to: 004f36ef (CONDITIONAL_JUMP)  ; LAB_004f36ef
    PUSH EAX                            ; 004f36e0
    PUSH 0x2                            ; 004f36e1
    MOV EDX,dword ptr [EBP + 0x66]      ; 004f36e3
    PUSH EDX                            ; 004f36e6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f36e7
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f36ec
    FLD float ptr [EBP + 0x62]          ; 004f36ef
        ;   Label: LAB_004f36ef
    FCOMP float ptr [0x006027ec]        ; 004f36f2 | DAT_006027ec
    FNSTSW AX                           ; 004f36f8
    SAHF                                ; 004f36fa
    JNC 0x004f37f1                      ; 004f36fb
        ;   XREF to: 004f37f1 (CONDITIONAL_JUMP)  ; LAB_004f37f1
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004f3701
    PUSH EAX                            ; 004f3707
    MOV EDX,dword ptr [EAX + 0x154]     ; 004f3708
    CALL dword ptr [EDX + 0xf4]         ; 004f370e
    ADD ESP,0x4                         ; 004f3714
    TEST EAX,EAX                        ; 004f3717
    JNZ 0x004f37f1                      ; 004f3719
        ;   XREF to: 004f37f1 (CONDITIONAL_JUMP)  ; LAB_004f37f1
    MOV EAX,dword ptr [EBX + 0xc29c]    ; 004f371f
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 004f3725
    JZ 0x004f37f1                       ; 004f372d
        ;   XREF to: 004f37f1 (CONDITIONAL_JUMP)  ; LAB_004f37f1
    LEA EDI,[EBP + -0x2e]               ; 004f3733
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004f3736
    LEA ESI,[EBP + 0xffffff42]          ; 004f373c
    LEA EDX,[EBX + 0x20]                ; 004f3742
    FLD float ptr [EAX + 0x24]          ; 004f3745
    FLD float ptr [EAX + 0x28]          ; 004f3748
    FLD float ptr [EAX + 0x20]          ; 004f374b
    LEA EAX,[EBP + -0x2e]               ; 004f374e
    FSUB float ptr [EDX]                ; 004f3751
    FXCH ST2                            ; 004f3753
    FSUB float ptr [EDX + 0x4]          ; 004f3755
    FXCH                                ; 004f3758
    FSUB float ptr [EDX + 0x8]          ; 004f375a
    FXCH ST2                            ; 004f375d
    FSTP float ptr [EBP + 0xffffff42]   ; 004f375f
    FSTP float ptr [EBP + 0xffffff46]   ; 004f3765
    FSTP float ptr [EBP + 0xffffff4a]   ; 004f376b
    MOVSD ES:EDI,ESI                    ; 004f3771
    MOVSD ES:EDI,ESI                    ; 004f3772
    MOVSD ES:EDI,ESI                    ; 004f3773
    PUSH EAX                            ; 004f3774
    LEA ESI,[EBP + -0xa]                ; 004f3775
    LEA EDI,[EBP + 0xfffffeb2]          ; 004f3778
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 004f377e
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[EBP + -0xa]                ; 004f3783
    MOVSD ES:EDI,ESI                    ; 004f3786
    MOVSD ES:EDI,ESI                    ; 004f3787
    MOVSD ES:EDI,ESI                    ; 004f3788
    ADD ESP,0x4                         ; 004f3789
    FLD float ptr [EBP + 0xfffffeb6]    ; 004f378c
    FSUB float ptr [EBX + 0x34]         ; 004f3792
    SUB ESP,0x4                         ; 004f3795
    FSTP float ptr [ESP]                ; 004f3798
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 004f379b
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [EBP + 0x76],EAX      ; 004f37a0
    FLD float ptr [EBP + 0x76]          ; 004f37a3
    FABS                                ; 004f37a6
    ADD ESP,0x4                         ; 004f37a8
    FCOMP double ptr [0x005e5652]       ; 004f37ab | DAT_005e5652
    FNSTSW AX                           ; 004f37b1
    SAHF                                ; 004f37b3
    JNC 0x004f37f1                      ; 004f37b4
        ;   XREF to: 004f37f1 (CONDITIONAL_JUMP)  ; LAB_004f37f1
    PUSH 0x3dcccccd                     ; 004f37b6
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 004f37bb
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 004f37c0
    TEST EAX,EAX                        ; 004f37c3
    JZ 0x004f37f1                       ; 004f37c5
        ;   XREF to: 004f37f1 (CONDITIONAL_JUMP)  ; LAB_004f37f1
    PUSH 0x1                            ; 004f37c7
    PUSH 0x8                            ; 004f37c9
    LEA EAX,[EBX + 0x158]               ; 004f37cb
    PUSH EAX                            ; 004f37d1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f37d2
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f37d7
    MOV ESI,dword ptr [EBX + 0xc268]    ; 004f37da
    PUSH ESI                            ; 004f37e0
    CALL sound_sndmain.cpp_FUN_005735a0 ; 004f37e1
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 004f37e6
    TEST EAX,EAX                        ; 004f37e9
    JZ 0x004f395a                       ; 004f37eb
        ;   XREF to: 004f395a (CONDITIONAL_JUMP)  ; LAB_004f395a
    FLD float ptr [EBP + 0x62]          ; 004f37f1
        ;   Label: LAB_004f37f1
    FCOMP float ptr [EBP + 0x5a]        ; 004f37f4
    FNSTSW AX                           ; 004f37f7
    SAHF                                ; 004f37f9
    JA 0x004f38a7                       ; 004f37fa
        ;   XREF to: 004f38a7 (CONDITIONAL_JUMP)  ; LAB_004f38a7
    FLD float ptr [EBX + 0xc1e4]        ; 004f3800
    FLDZ                                ; 004f3806
    FCOMPP                              ; 004f3808
    FNSTSW AX                           ; 004f380a
    SAHF                                ; 004f380c
    JC 0x004f38a7                       ; 004f380d
        ;   XREF to: 004f38a7 (CONDITIONAL_JUMP)  ; LAB_004f38a7
    LEA EDI,[EBP + 0x32]                ; 004f3813
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004f3816
    LEA ESI,[EBP + 0xe]                 ; 004f381c
    LEA EDX,[EBX + 0x20]                ; 004f381f
    FLD float ptr [EAX + 0x24]          ; 004f3822
    FLD float ptr [EAX + 0x28]          ; 004f3825
    FLD float ptr [EAX + 0x20]          ; 004f3828
    LEA EAX,[EBP + 0x32]                ; 004f382b
    FSUB float ptr [EDX]                ; 004f382e
    FXCH ST2                            ; 004f3830
    FSUB float ptr [EDX + 0x4]          ; 004f3832
    FXCH                                ; 004f3835
    FSUB float ptr [EDX + 0x8]          ; 004f3837
    FXCH ST2                            ; 004f383a
    FSTP float ptr [EBP + 0xe]          ; 004f383c
    FSTP float ptr [EBP + 0x12]         ; 004f383f
    FSTP float ptr [EBP + 0x16]         ; 004f3842
    MOVSD ES:EDI,ESI                    ; 004f3845
    MOVSD ES:EDI,ESI                    ; 004f3846
    MOVSD ES:EDI,ESI                    ; 004f3847
    PUSH EAX                            ; 004f3848
    LEA ESI,[EBP + 0xfffffe9a]          ; 004f3849
    LEA EDI,[EBP + 0x1a]                ; 004f384f
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 004f3852
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[EBP + 0xfffffe9a]          ; 004f3857
    MOVSD ES:EDI,ESI                    ; 004f385d
    MOVSD ES:EDI,ESI                    ; 004f385e
    MOVSD ES:EDI,ESI                    ; 004f385f
    ADD ESP,0x4                         ; 004f3860
    FLD float ptr [EBP + 0x1e]          ; 004f3863
    FSUB float ptr [EBX + 0x34]         ; 004f3866
    SUB ESP,0x4                         ; 004f3869
    FSTP float ptr [ESP]                ; 004f386c
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 004f386f
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [EBP + 0x76],EAX      ; 004f3874
    FLD float ptr [EBP + 0x76]          ; 004f3877
    FABS                                ; 004f387a
    ADD ESP,0x4                         ; 004f387c
    FCOMP double ptr [0x005e5652]       ; 004f387f | DAT_005e5652
    FNSTSW AX                           ; 004f3885
    SAHF                                ; 004f3887
    JNC 0x004f38a7                      ; 004f3888
        ;   XREF to: 004f38a7 (CONDITIONAL_JUMP)  ; LAB_004f38a7
    PUSH 0x1                            ; 004f388a
    PUSH 0x4                            ; 004f388c
    LEA EAX,[EBX + 0x158]               ; 004f388e
    PUSH EAX                            ; 004f3894
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f3895
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f389a
    MOV dword ptr [EBX + 0xc1e4],0x40800000 ; 004f389d
    FLD float ptr [EBP + 0x62]          ; 004f38a7
        ;   Label: LAB_004f38a7
    FCOMP float ptr [EBX + 0xc1e0]      ; 004f38aa
    FNSTSW AX                           ; 004f38b0
    SAHF                                ; 004f38b2
    JBE 0x004f38c8                      ; 004f38b3
        ;   XREF to: 004f38c8 (CONDITIONAL_JUMP)  ; LAB_004f38c8
    PUSH 0x1                            ; 004f38b5
    PUSH 0x0                            ; 004f38b7
    LEA EAX,[EBX + 0x158]               ; 004f38b9
    PUSH EAX                            ; 004f38bf
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f38c0
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f38c5
    FLD float ptr [EBX + 0xc270]        ; 004f38c8
        ;   Label: LAB_004f38c8
    FSUB float ptr [EBP + 0x92]         ; 004f38ce
    FST float ptr [EBX + 0xc270]        ; 004f38d4
    FLDZ                                ; 004f38da
    FCOMPP                              ; 004f38dc
    FNSTSW AX                           ; 004f38de
    SAHF                                ; 004f38e0
    JBE 0x004f2fbc                      ; 004f38e1
        ;   XREF to: 004f2fbc (CONDITIONAL_JUMP)  ; caseD_8
    MOV EDI,dword ptr [EBX + 0xc268]    ; 004f38e7
    PUSH EDI                            ; 004f38ed
    MOV dword ptr [EBX + 0xc270],0x0    ; 004f38ee
    CALL sound_sndmain.cpp_FUN_005735a0 ; 004f38f8
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 004f38fd
    TEST EAX,EAX                        ; 004f3900
    JNZ 0x004f2fbc                      ; 004f3902
        ;   XREF to: 004f2fbc (CONDITIONAL_JUMP)  ; caseD_8
    MOV EAX,dword ptr [EBX + 0xc26c]    ; 004f3908
    PUSH EAX                            ; 004f390e
    CALL sound_sndmain.cpp_FUN_005735a0 ; 004f390f
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 004f3914
    TEST EAX,EAX                        ; 004f3917
    JNZ 0x004f2fbc                      ; 004f3919
        ;   XREF to: 004f2fbc (CONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x5e5621                       ; 004f391f | = "imp-laugh?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f3924
    PUSH EBX                            ; 004f392a
    CALL dword ptr [EAX + 0x2c]         ; 004f392b
    ADD ESP,0x8                         ; 004f392e
    PUSH 0x41a00000                     ; 004f3931
    PUSH 0x41200000                     ; 004f3936
    MOV dword ptr [EBX + 0xc268],EAX    ; 004f393b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004f3941
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004f3946
    ADD ESP,0x8                         ; 004f3949
    MOV EAX,dword ptr [EBP + 0x76]      ; 004f394c
    MOV dword ptr [EBX + 0xc270],EAX    ; 004f394f
    JMP 0x004f2fbc                      ; 004f3955
        ;   XREF to: 004f2fbc (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x5e5613                       ; 004f395a | = "imp-jump?.wav"
        ;   Label: LAB_004f395a
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f395f
    PUSH EBX                            ; 004f3965
    CALL dword ptr [EAX + 0x2c]         ; 004f3966
    ADD ESP,0x8                         ; 004f3969
    MOV dword ptr [EBX + 0xc268],EAX    ; 004f396c
    JMP 0x004f37f1                      ; 004f3972
        ;   XREF to: 004f37f1 (UNCONDITIONAL_JUMP)  ; LAB_004f37f1
    FLD float ptr [EBP + 0x92]          ; 004f3977
        ;   Label: caseD_3
    FMUL float ptr [0x005e564a]         ; 004f397d | DAT_005e564a
    FSUBR float ptr [EBX + 0xc270]      ; 004f3983
    FST float ptr [EBX + 0xc270]        ; 004f3989
    FLDZ                                ; 004f398f
    FCOMPP                              ; 004f3991
    FNSTSW AX                           ; 004f3993
    SAHF                                ; 004f3995
    JBE 0x004f2fbc                      ; 004f3996
        ;   XREF to: 004f2fbc (CONDITIONAL_JUMP)  ; caseD_8
    MOV ECX,dword ptr [EBX + 0xc268]    ; 004f399c
    PUSH ECX                            ; 004f39a2
    MOV dword ptr [EBX + 0xc270],0x0    ; 004f39a3
    CALL sound_sndmain.cpp_FUN_005735a0 ; 004f39ad
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 004f39b2
    TEST EAX,EAX                        ; 004f39b5
    JNZ 0x004f2fbc                      ; 004f39b7
        ;   XREF to: 004f2fbc (CONDITIONAL_JUMP)  ; caseD_8
    MOV ESI,dword ptr [EBX + 0xc26c]    ; 004f39bd
    PUSH ESI                            ; 004f39c3
    CALL sound_sndmain.cpp_FUN_005735a0 ; 004f39c4
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 004f39c9
    TEST EAX,EAX                        ; 004f39cc
    JNZ 0x004f2fbc                      ; 004f39ce
        ;   XREF to: 004f2fbc (CONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x5e5630                       ; 004f39d4 | = "imp-laugh?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f39d9
    PUSH EBX                            ; 004f39df
    CALL dword ptr [EAX + 0x2c]         ; 004f39e0
    ADD ESP,0x8                         ; 004f39e3
    PUSH 0x41a00000                     ; 004f39e6
    PUSH 0x41200000                     ; 004f39eb
    MOV dword ptr [EBX + 0xc268],EAX    ; 004f39f0
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004f39f6
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004f39fb
    ADD ESP,0x8                         ; 004f39fe
    MOV EAX,dword ptr [EBP + 0x76]      ; 004f3a01
    MOV dword ptr [EBX + 0xc270],EAX    ; 004f3a04
    JMP 0x004f2fbc                      ; 004f3a0a
        ;   XREF to: 004f2fbc (UNCONDITIONAL_JUMP)  ; caseD_8
    CMP ESI,0x9                         ; 004f3a0f
        ;   Label: LAB_004f3a0f
    JA 0x004f2fbc                       ; 004f3a12
        ;   XREF to: 004f2fbc (CONDITIONAL_JUMP)  ; caseD_8
    JMP dword ptr [ESI*0x4 + 0x4f2b58]  ; 004f3a18 | caseD_0 | caseD_2 | caseD_3
        ;   Label: switchD

