; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_imp_cpp_CImp_process_FUN_004d6a90(CImp *this_ptr,float delta_time)
;
; Parameters:
; CImp *           Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_004d6a68 = 004d72be
;   TerminatedCString s_ghoul_eat_wav_005c559f
;   TerminatedCString s_s_confused_while_walking_005c55af
;   TerminatedCString s_imp_jump_wav_005c55d9
;   TerminatedCString s_imp_laugh_wav_005c55e7
;   TerminatedCString s_imp_laugh_wav_005c55f6
;   undefined4 DAT_005c5608
;   undefined4 DAT_005c5610
;   undefined4 DAT_005c5618
;   undefined4 DAT_005c5620
;   undefined4 DAT_005c5628
;   undefined4 DAT_005c5630
;   undefined4 DAT_005c5638
;   undefined4 DAT_005e1eec
;   undefined4 DAT_005e1ef8
;   ... and 11 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0
;   core_actor.cpp_randomChance_FUN_0040cf40
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350
;   core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30
;   core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0
;   core_charactr.cpp_CCharacter_processWalking_FUN_00431660
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0
;   core_charactr.cpp_FUN_0042c1e0
;   core_charactr.cpp_FUN_0042c230
;   core_charactr.cpp_FUN_00434850
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
;   ... and 14 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d6a90
        ;   Label: core_imp.cpp_CImp_process_FUN_004d6a90
    PUSH ESI                            ; 004d6a91
    PUSH EDI                            ; 004d6a92
    PUSH EBP                            ; 004d6a93
    MOV EBP,ESP                         ; 004d6a94
    SUB ESP,0x274                       ; 004d6a96
    SUB EBP,0x7a                        ; 004d6a9c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004d6a9f
    PUSH dword ptr [EBP + 0x92]         ; 004d6aa5
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d6aab
    PUSH EBX                            ; 004d6ab1
    CALL dword ptr [EAX + 0x148]        ; 004d6ab2
    ADD ESP,0x8                         ; 004d6ab8
    TEST EAX,EAX                        ; 004d6abb
    JZ 0x004d703b                       ; 004d6abd
        ;   XREF to: 004d703b (CONDITIONAL_JUMP)  ; LAB_004d703b
    MOV EAX,dword ptr [EBX + 0xd084]    ; 004d6ac3
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 004d6ac9
    JZ 0x004d6b3c                       ; 004d6ad1
        ;   XREF to: 004d6b3c (CONDITIONAL_JUMP)  ; LAB_004d6b3c
    LEA EAX,[EBX + 0x249c]              ; 004d6ad3
        ;   Label: LAB_004d6ad3
    MOV dword ptr [EAX + 0x8],0x0       ; 004d6ad9
    FLD float ptr [EBP + 0x92]          ; 004d6ae0
    MOV EDX,dword ptr [EAX + 0x8]       ; 004d6ae6
    MOV dword ptr [EAX + 0x4],EDX       ; 004d6ae9
    MOV EDX,dword ptr [EAX + 0x4]       ; 004d6aec
    MOV dword ptr [EAX],EDX             ; 004d6aef
    FMUL float ptr [EBX + 0xcdcc]       ; 004d6af1
    LEA EAX,[EBX + 0x158]               ; 004d6af7
    FSTP float ptr [EBP + 0x42]         ; 004d6afd
    MOV dword ptr [EBP + 0x6e],EAX      ; 004d6b00
    FLD float ptr [EBP + 0x42]          ; 004d6b03
        ;   Label: LAB_004d6b03
    FLDZ                                ; 004d6b06
    FCOMPP                              ; 004d6b08
    FNSTSW AX                           ; 004d6b0a
    SAHF                                ; 004d6b0c
    JNC 0x004d6e35                      ; 004d6b0d
        ;   XREF to: 004d6e35 (CONDITIONAL_JUMP)  ; LAB_004d6e35
    LEA EAX,[EBP + 0x42]                ; 004d6b13
    PUSH EAX                            ; 004d6b16
    MOV EDX,dword ptr [EBP + 0x6e]      ; 004d6b17
    PUSH EDX                            ; 004d6b1a
    CALL core_motion.cpp_CMotionController_advance_FUN_004fbb70 ; 004d6b1b
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004fbb70(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004d6b20
    MOV ESI,EAX                         ; 004d6b23
    CMP EAX,0x29a                       ; 004d6b25
    JNC 0x004d6e15                      ; 004d6b2a
        ;   XREF to: 004d6e15 (CONDITIONAL_JUMP)  ; LAB_004d6e15
    PUSH ESI                            ; 004d6b30
    PUSH EBX                            ; 004d6b31
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 ; 004d6b32
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004d6b37
    JMP 0x004d6b03                      ; 004d6b3a
        ;   XREF to: 004d6b03 (UNCONDITIONAL_JUMP)  ; LAB_004d6b03
    PUSH EBX                            ; 004d6b3c
        ;   Label: LAB_004d6b3c
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d6b3d
    CALL dword ptr [EAX + 0x10c]        ; 004d6b43
    ADD ESP,0x4                         ; 004d6b49
    TEST EAX,EAX                        ; 004d6b4c
    JNZ 0x004d6ad3                      ; 004d6b4e
        ;   XREF to: 004d6ad3 (CONDITIONAL_JUMP)  ; LAB_004d6ad3
    PUSH 0x1                            ; 004d6b50
    PUSH 0x6                            ; 004d6b52
    LEA EAX,[EBX + 0x158]               ; 004d6b54
    PUSH EAX                            ; 004d6b5a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d6b5b
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d6b60
    JMP 0x004d6ad3                      ; 004d6b63
        ;   XREF to: 004d6ad3 (UNCONDITIONAL_JUMP)  ; LAB_004d6ad3
    MOV EDI,0x1                         ; 004d6b68
        ;   Label: LAB_004d6b68
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004d6b6d
    MOV dword ptr [EBP + 0x72],EDI      ; 004d6b73
    TEST EAX,EAX                        ; 004d6b76
    JNZ 0x004d6b8f                      ; 004d6b78
        ;   XREF to: 004d6b8f (CONDITIONAL_JUMP)  ; LAB_004d6b8f
    PUSH 0x1                            ; 004d6b7a
        ;   Label: LAB_004d6b7a
    PUSH 0x0                            ; 004d6b7c
    MOV EDX,dword ptr [EBP + 0x6e]      ; 004d6b7e
    PUSH EDX                            ; 004d6b81
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d6b82
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d6b87
    JMP 0x004d6b03                      ; 004d6b8a
        ;   XREF to: 004d6b03 (UNCONDITIONAL_JUMP)  ; LAB_004d6b03
    TEST EDI,EDI                        ; 004d6b8f
        ;   Label: LAB_004d6b8f
    JZ 0x004d6ba7                       ; 004d6b91
        ;   XREF to: 004d6ba7 (CONDITIONAL_JUMP)  ; LAB_004d6ba7
    PUSH EAX                            ; 004d6b93
    MOV EDX,dword ptr [EAX + 0x154]     ; 004d6b94
    CALL dword ptr [EDX + 0x10c]        ; 004d6b9a
    ADD ESP,0x4                         ; 004d6ba0
    TEST EAX,EAX                        ; 004d6ba3
    JNZ 0x004d6b7a                      ; 004d6ba5
        ;   XREF to: 004d6b7a (CONDITIONAL_JUMP)  ; LAB_004d6b7a
    CMP dword ptr [EBP + 0x72],0x0      ; 004d6ba7
        ;   Label: LAB_004d6ba7
    JZ 0x004d6bc7                       ; 004d6bab
        ;   XREF to: 004d6bc7 (CONDITIONAL_JUMP)  ; LAB_004d6bc7
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004d6bad
    PUSH EAX                            ; 004d6bb3
    MOV EDX,dword ptr [EAX + 0x154]     ; 004d6bb4
    CALL dword ptr [EDX + 0xf4]         ; 004d6bba
    ADD ESP,0x4                         ; 004d6bc0
    TEST EAX,EAX                        ; 004d6bc3
    JNZ 0x004d6b7a                      ; 004d6bc5
        ;   XREF to: 004d6b7a (CONDITIONAL_JUMP)  ; LAB_004d6b7a
    CMP dword ptr [EBP + 0x72],0x0      ; 004d6bc7
        ;   Label: LAB_004d6bc7
    JZ 0x004d6bea                       ; 004d6bcb
        ;   XREF to: 004d6bea (CONDITIONAL_JUMP)  ; LAB_004d6bea
    PUSH 0x0                            ; 004d6bcd
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004d6bcf
    PUSH EBX                            ; 004d6bd5
    MOV EDX,dword ptr [EAX + 0x154]     ; 004d6bd6
    PUSH EAX                            ; 004d6bdc
    CALL dword ptr [EDX + 0xe8]         ; 004d6bdd
    ADD ESP,0xc                         ; 004d6be3
    TEST EAX,EAX                        ; 004d6be6
    JZ 0x004d6b7a                       ; 004d6be8
        ;   XREF to: 004d6b7a (CONDITIONAL_JUMP)  ; LAB_004d6b7a
    CMP dword ptr [EBP + 0x72],0x0      ; 004d6bea
        ;   Label: LAB_004d6bea
    JZ 0x004d6c76                       ; 004d6bee
        ;   XREF to: 004d6c76 (CONDITIONAL_JUMP)  ; LAB_004d6c76
    MOV EAX,[0x005e1eec]                ; 004d6bf4 | DAT_005e1eec
    MOV dword ptr [EBP + 0x3a],EAX      ; 004d6bf9
    XOR EAX,EAX                         ; 004d6bfc
    MOV dword ptr [EBP + -0x32],EAX     ; 004d6bfe
    MOV dword ptr [EBP + -0x2e],EAX     ; 004d6c01
    MOV EAX,dword ptr [EBP + 0x3a]      ; 004d6c04
    MOV dword ptr [EBP + -0x2a],EAX     ; 004d6c07
    LEA EAX,[EBP + -0x32]               ; 004d6c0a
    PUSH EAX                            ; 004d6c0d
    PUSH EBX                            ; 004d6c0e
    LEA ESI,[EBP + -0x3e]               ; 004d6c0f
    LEA EDI,[EBP + 0xffffff3e]          ; 004d6c12
    CALL core_actor.cpp_FUN_00408b80    ; 004d6c18
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[EBP + -0x3e]               ; 004d6c1d
    MOVSD ES:EDI,ESI                    ; 004d6c20
    MOVSD ES:EDI,ESI                    ; 004d6c21
    MOVSD ES:EDI,ESI                    ; 004d6c22
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004d6c23
    FLD float ptr [EBP + 0xffffff3e]    ; 004d6c29
    FSUB float ptr [EAX + 0x20]         ; 004d6c2f
    FMUL ST0                            ; 004d6c32
    FLD float ptr [EBP + 0xffffff46]    ; 004d6c34
    FSUB float ptr [EAX + 0x28]         ; 004d6c3a
    FMUL ST0                            ; 004d6c3d
    FADDP                               ; 004d6c3f
    FSQRT                               ; 004d6c41
    ADD ESP,0x8                         ; 004d6c43
    FCOMP double ptr [0x005c5630]       ; 004d6c46 | DAT_005c5630
    FNSTSW AX                           ; 004d6c4c
    SAHF                                ; 004d6c4e
    JBE 0x004d6c56                      ; 004d6c4f
        ;   XREF to: 004d6c56 (CONDITIONAL_JUMP)  ; LAB_004d6c56
    XOR ECX,ECX                         ; 004d6c51
    MOV dword ptr [EBP + 0x72],ECX      ; 004d6c53
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004d6c56
        ;   Label: LAB_004d6c56
    FLD float ptr [EBP + 0xffffff42]    ; 004d6c5c
    FSUB float ptr [EAX + 0x24]         ; 004d6c62
    FABS                                ; 004d6c65
    FCOMP double ptr [0x005c5638]       ; 004d6c67 | DAT_005c5638
    FNSTSW AX                           ; 004d6c6d
    SAHF                                ; 004d6c6f
    JA 0x004d6b7a                       ; 004d6c70
        ;   XREF to: 004d6b7a (CONDITIONAL_JUMP)  ; LAB_004d6b7a
    CMP dword ptr [EBP + 0x72],0x0      ; 004d6c76
        ;   Label: LAB_004d6c76
    JZ 0x004d6c9d                       ; 004d6c7a
        ;   XREF to: 004d6c9d (CONDITIONAL_JUMP)  ; LAB_004d6c9d
    PUSH 0x0                            ; 004d6c7c
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004d6c7e
    PUSH EBX                            ; 004d6c84
    MOV EDX,dword ptr [EAX + 0x154]     ; 004d6c85
    PUSH EAX                            ; 004d6c8b
    CALL dword ptr [EDX + 0xec]         ; 004d6c8c
    ADD ESP,0xc                         ; 004d6c92
    TEST EAX,EAX                        ; 004d6c95
    JZ 0x004d6b7a                       ; 004d6c97
        ;   XREF to: 004d6b7a (CONDITIONAL_JUMP)  ; LAB_004d6b7a
    CMP dword ptr [EBP + 0x72],0x0      ; 004d6c9d
        ;   Label: LAB_004d6c9d
    JZ 0x004d6b7a                       ; 004d6ca1
        ;   XREF to: 004d6b7a (CONDITIONAL_JUMP)  ; LAB_004d6b7a
    PUSH 0x1                            ; 004d6ca7
    PUSH 0x9                            ; 004d6ca9
    MOV EAX,dword ptr [EBP + 0x6e]      ; 004d6cab
    PUSH EAX                            ; 004d6cae
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d6caf
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d6cb4
    JMP 0x004d6b03                      ; 004d6cb7
        ;   XREF to: 004d6b03 (UNCONDITIONAL_JUMP)  ; LAB_004d6b03
    MOV ECX,dword ptr [EBX + 0xcde4]    ; 004d6cbc
        ;   Label: LAB_004d6cbc
    TEST ECX,ECX                        ; 004d6cc2
    JNZ 0x004d6cda                      ; 004d6cc4
        ;   XREF to: 004d6cda (CONDITIONAL_JUMP)  ; LAB_004d6cda
    PUSH 0x1                            ; 004d6cc6
    PUSH ECX                            ; 004d6cc8
    MOV ESI,dword ptr [EBP + 0x6e]      ; 004d6cc9
    PUSH ESI                            ; 004d6ccc
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d6ccd
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d6cd2
    JMP 0x004d6b03                      ; 004d6cd5
        ;   XREF to: 004d6b03 (UNCONDITIONAL_JUMP)  ; LAB_004d6b03
    MOV ESI,dword ptr [0x01d5bc0c]      ; 004d6cda | DAT_01d5bc0c
        ;   Label: LAB_004d6cda
    PUSH ESI                            ; 004d6ce0
    MOV EDI,dword ptr [EBP + 0x6e]      ; 004d6ce1
    PUSH EDI                            ; 004d6ce4
    LEA ESI,[EBP + 0xfffffec6]          ; 004d6ce5
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 004d6ceb
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    LEA EDI,[EBP + 0x16]                ; 004d6cf0
    ADD ESP,0x8                         ; 004d6cf3
    LEA EAX,[EBP + 0x16]                ; 004d6cf6
    LEA ESI,[EBP + 0xfffffec6]          ; 004d6cf9
    PUSH EAX                            ; 004d6cff
    MOVSD ES:EDI,ESI                    ; 004d6d00
    MOVSD ES:EDI,ESI                    ; 004d6d01
    MOVSD ES:EDI,ESI                    ; 004d6d02
    PUSH EBX                            ; 004d6d03
    LEA ESI,[EBP + 0xffffff7a]          ; 004d6d04
    LEA EDI,[EBP + 0xfffffef6]          ; 004d6d0a
    CALL core_actor.cpp_FUN_00408b80    ; 004d6d10
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[EBP + 0xffffff7a]          ; 004d6d15
    LEA EAX,[EBP + 0xfffffe06]          ; 004d6d1b
    MOVSD ES:EDI,ESI                    ; 004d6d21
    MOVSD ES:EDI,ESI                    ; 004d6d22
    MOVSD ES:EDI,ESI                    ; 004d6d23
    ADD ESP,0x8                         ; 004d6d24
    LEA EDI,[EBP + -0x1a]               ; 004d6d27
    LEA ESI,[EBP + 0xfffffef6]          ; 004d6d2a
    PUSH EAX                            ; 004d6d30
    MOVSD ES:EDI,ESI                    ; 004d6d31
    MOVSD ES:EDI,ESI                    ; 004d6d32
    MOVSD ES:EDI,ESI                    ; 004d6d33
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 004d6d34
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004d6d39
    PUSH 0x41200000                     ; 004d6d3c
    PUSH 0x40a00000                     ; 004d6d41
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004d6d46
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    LEA EDX,[EBP + 0xfffffe06]          ; 004d6d4b
    MOV dword ptr [EBP + 0x76],EAX      ; 004d6d51
    ADD ESP,0x8                         ; 004d6d54
    MOV dword ptr [EBP + 0xfffffe3a],EBX ; 004d6d57
    MOV dword ptr [EBP + 0xfffffe3e],EBX ; 004d6d5d
    FLD float ptr [EBP + 0x76]          ; 004d6d63
    PUSH EDX                            ; 004d6d66
    FSTP float ptr [EBP + 0xfffffe0a]   ; 004d6d67
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004d6d6d
    PUSH EAX                            ; 004d6d73
    MOV ESI,dword ptr [EAX + 0x154]     ; 004d6d74
    CALL dword ptr [ESI + 0x108]        ; 004d6d7a
    FLD float ptr [EBP + 0xfffffe0a]    ; 004d6d80
    FMUL double ptr [0x005c5620]        ; 004d6d86 | DAT_005c5620
    ADD ESP,0x8                         ; 004d6d8c
    FMUL double ptr [0x005c5628]        ; 004d6d8f | DAT_005c5628
    PUSH 0x0                            ; 004d6d95
    CALL crt_math.c_round_FUN_005a3120  ; 004d6d97
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBP + 0x3e]        ; 004d6d9c
    MOV EAX,dword ptr [EBP + 0x3e]      ; 004d6d9f
    PUSH EAX                            ; 004d6da2
    PUSH 0x0                            ; 004d6da3
    LEA EAX,[EBP + -0x1a]               ; 004d6da5
    PUSH EAX                            ; 004d6da8
    MOV EDX,dword ptr [0x005fed24]      ; 004d6da9 | g_CGorePtr
    PUSH EDX                            ; 004d6daf
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0 ; 004d6db0
        ;   XREF to: 004ce9c0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 004d6db5
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004d6db8
    PUSH EAX                            ; 004d6dbe
    MOV EDX,dword ptr [EAX + 0x154]     ; 004d6dbf
    CALL dword ptr [EDX + 0x10c]        ; 004d6dc5
    ADD ESP,0x4                         ; 004d6dcb
    TEST EAX,EAX                        ; 004d6dce
    JLE 0x004d6dfd                      ; 004d6dd0
        ;   XREF to: 004d6dfd (CONDITIONAL_JUMP)  ; LAB_004d6dfd
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004d6dd2
    PUSH EAX                            ; 004d6dd8
    MOV ESI,dword ptr [EAX + 0x154]     ; 004d6dd9
    CALL dword ptr [ESI + 0xf0]         ; 004d6ddf
    ADD ESP,0x4                         ; 004d6de5
    PUSH 0x1                            ; 004d6de8
    PUSH 0x0                            ; 004d6dea
    MOV ECX,dword ptr [EBP + 0x6e]      ; 004d6dec
    PUSH ECX                            ; 004d6def
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d6df0
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d6df5
    JMP 0x004d6b03                      ; 004d6df8
        ;   XREF to: 004d6b03 (UNCONDITIONAL_JUMP)  ; LAB_004d6b03
    MOV EDX,0x5c559f                    ; 004d6dfd | = "ghoul-eat-?.wav"
        ;   Label: LAB_004d6dfd
    PUSH EDX                            ; 004d6e02 | = "ghoul-eat-?.wav"
    MOV ESI,dword ptr [EBX + 0x154]     ; 004d6e03
    PUSH EBX                            ; 004d6e09
    CALL dword ptr [ESI + 0x2c]         ; 004d6e0a
    ADD ESP,0x8                         ; 004d6e0d
    JMP 0x004d6b03                      ; 004d6e10
        ;   XREF to: 004d6b03 (UNCONDITIONAL_JUMP)  ; LAB_004d6b03
    JBE 0x004d6b68                      ; 004d6e15
        ;   XREF to: 004d6b68 (CONDITIONAL_JUMP)  ; LAB_004d6b68
        ;   Label: LAB_004d6e15
    CMP EAX,0x29b                       ; 004d6e1b
    JZ 0x004d6cbc                       ; 004d6e20
        ;   XREF to: 004d6cbc (CONDITIONAL_JUMP)  ; LAB_004d6cbc
    PUSH ESI                            ; 004d6e26
    PUSH EBX                            ; 004d6e27
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 ; 004d6e28
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004d6e2d
    JMP 0x004d6b03                      ; 004d6e30
        ;   XREF to: 004d6b03 (UNCONDITIONAL_JUMP)  ; LAB_004d6b03
    FLD float ptr [EBP + 0x92]          ; 004d6e35
        ;   Label: LAB_004d6e35
    FMUL float ptr [EBX + 0xcdcc]       ; 004d6e3b
    SUB ESP,0x4                         ; 004d6e41
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 004d6e44
    MOV dword ptr [EBX + 0x2524],EAX    ; 004d6e4a
    FSTP float ptr [ESP]                ; 004d6e50
    PUSH EBX                            ; 004d6e53
    CALL core_charactr.cpp_FUN_00434850 ; 004d6e54
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    ADD ESP,0x8                         ; 004d6e59
    LEA EAX,[EBX + 0x158]               ; 004d6e5c
    PUSH EAX                            ; 004d6e62
    MOV dword ptr [EBP + 0x6a],EAX      ; 004d6e63
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 004d6e66
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004d6e6b
    PUSH dword ptr [EBP + 0x92]         ; 004d6e6e
    MOV ESI,dword ptr [EAX + 0x24]      ; 004d6e74
    PUSH EBX                            ; 004d6e77
    MOV dword ptr [EBP + 0x5e],ESI      ; 004d6e78
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00431660 ; 004d6e7b
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00431660(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004d6e80
    TEST EAX,EAX                        ; 004d6e83
    JZ 0x004d792f                       ; 004d6e85
        ;   XREF to: 004d792f (CONDITIONAL_JUMP)  ; LAB_004d792f
    MOV EAX,dword ptr [EBX + 0x273c]    ; 004d6e8b
    CMP EAX,0x2                         ; 004d6e91
    JNC 0x004d706d                      ; 004d6e94
        ;   XREF to: 004d706d (CONDITIONAL_JUMP)  ; LAB_004d706d
    CMP EAX,0x1                         ; 004d6e9a
    JNZ 0x004d7078                      ; 004d6e9d
        ;   XREF to: 004d7078 (CONDITIONAL_JUMP)  ; LAB_004d7078
    PUSH 0x1                            ; 004d6ea3
        ;   Label: LAB_004d6ea3
    PUSH 0x1                            ; 004d6ea5
    LEA EAX,[EBX + 0x158]               ; 004d6ea7
        ;   Label: LAB_004d6ea7
    PUSH EAX                            ; 004d6ead
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d6eae
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d6eb3
        ;   Label: LAB_004d6eb3
    LEA EAX,[EBX + 0x249c]              ; 004d6eb6
    MOV dword ptr [EAX + 0x8],0x0       ; 004d6ebc
    MOV EDX,dword ptr [EAX + 0x8]       ; 004d6ec3
    MOV dword ptr [EAX + 0x4],EDX       ; 004d6ec6
    MOV EDX,dword ptr [EAX + 0x4]       ; 004d6ec9
    MOV dword ptr [EAX],EDX             ; 004d6ecc
    FLD float ptr [EBX + 0xcde0]        ; 004d6ece
        ;   Label: caseD_5
    FLDZ                                ; 004d6ed4
    FCOMPP                              ; 004d6ed6
    FNSTSW AX                           ; 004d6ed8
    SAHF                                ; 004d6eda
    JNC 0x004d6eef                      ; 004d6edb
        ;   XREF to: 004d6eef (CONDITIONAL_JUMP)  ; LAB_004d6eef
    FLD float ptr [EBX + 0xcde0]        ; 004d6edd
    FSUB float ptr [EBP + 0x92]         ; 004d6ee3
    FSTP float ptr [EBX + 0xcde0]       ; 004d6ee9
    PUSH EBX                            ; 004d6eef
        ;   Label: LAB_004d6eef
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0 ; 004d6ef0
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004d6ef5
    TEST EAX,EAX                        ; 004d6ef8
    JZ 0x004d7014                       ; 004d6efa
        ;   XREF to: 004d7014 (CONDITIONAL_JUMP)  ; LAB_004d7014
    CMP dword ptr [EBP + 0x5e],0x9      ; 004d6f00
    JZ 0x004d7014                       ; 004d6f04
        ;   XREF to: 004d7014 (CONDITIONAL_JUMP)  ; LAB_004d7014
    PUSH dword ptr [EBP + 0x92]         ; 004d6f0a
    PUSH EBX                            ; 004d6f10
    LEA ESI,[EBX + 0x2518]              ; 004d6f11
    CALL core_charactr.cpp_FUN_0042c1e0 ; 004d6f17
        ;   XREF to: 0042c1e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042c1e0()
    FLD float ptr [ESI]                 ; 004d6f1c
    FMUL float ptr [EBP + 0x92]         ; 004d6f1e
    FLD float ptr [ESI + 0x4]           ; 004d6f24
    FMUL float ptr [EBP + 0x92]         ; 004d6f27
    FLD float ptr [ESI + 0x8]           ; 004d6f2d
    FMUL float ptr [EBP + 0x92]         ; 004d6f30
    LEA EDI,[EBP + 0xffffff32]          ; 004d6f36
    LEA ESI,[EBP + 0xfffffe7e]          ; 004d6f3c
    FXCH ST2                            ; 004d6f42
    FSTP float ptr [EBP + 0xfffffe7e]   ; 004d6f44
    FSTP float ptr [EBP + 0xfffffe82]   ; 004d6f4a
    FSTP float ptr [EBP + 0xfffffe86]   ; 004d6f50
    MOVSD ES:EDI,ESI                    ; 004d6f56
    MOVSD ES:EDI,ESI                    ; 004d6f57
    MOVSD ES:EDI,ESI                    ; 004d6f58
    LEA EDX,[EBX + 0x250c]              ; 004d6f59
    FLD float ptr [EBP + 0xffffff32]    ; 004d6f5f
    FLD float ptr [EBP + 0xffffff36]    ; 004d6f65
    FLD float ptr [EBP + 0xffffff3a]    ; 004d6f6b
    LEA EDI,[EBP + 0xfffffeae]          ; 004d6f71
    LEA ESI,[EBP + -0x7a]               ; 004d6f77
    FXCH ST2                            ; 004d6f7a
    FADD float ptr [EDX]                ; 004d6f7c
    FXCH                                ; 004d6f7e
    FADD float ptr [EDX + 0x4]          ; 004d6f80
    FXCH ST2                            ; 004d6f83
    FADD float ptr [EDX + 0x8]          ; 004d6f85
    FXCH                                ; 004d6f88
    FSTP float ptr [EBP + -0x7a]        ; 004d6f8a
    FXCH                                ; 004d6f8d
    FSTP float ptr [EBP + -0x76]        ; 004d6f8f
    FSTP float ptr [EBP + -0x72]        ; 004d6f92
    MOVSD ES:EDI,ESI                    ; 004d6f95
    MOVSD ES:EDI,ESI                    ; 004d6f96
    MOVSD ES:EDI,ESI                    ; 004d6f97
    LEA EAX,[EBX + 0x249c]              ; 004d6f98
    FLD float ptr [EBP + 0xfffffeae]    ; 004d6f9e
    FLD float ptr [EBP + 0xfffffeb2]    ; 004d6fa4
    FLD float ptr [EBP + 0xfffffeb6]    ; 004d6faa
    LEA EDI,[EBP + -0x4a]               ; 004d6fb0
    LEA ESI,[EBP + 0xffffff0e]          ; 004d6fb3
    FXCH ST2                            ; 004d6fb9
    FADD float ptr [EAX]                ; 004d6fbb
    FXCH                                ; 004d6fbd
    FADD float ptr [EAX + 0x4]          ; 004d6fbf
    FXCH ST2                            ; 004d6fc2
    FADD float ptr [EAX + 0x8]          ; 004d6fc4
    FXCH                                ; 004d6fc7
    FSTP float ptr [EBP + 0xffffff0e]   ; 004d6fc9
    FXCH                                ; 004d6fcf
    FSTP float ptr [EBP + 0xffffff12]   ; 004d6fd1
    FSTP float ptr [EBP + 0xffffff16]   ; 004d6fd7
    MOVSD ES:EDI,ESI                    ; 004d6fdd
    MOVSD ES:EDI,ESI                    ; 004d6fde
    MOVSD ES:EDI,ESI                    ; 004d6fdf
    MOV dword ptr [EDX + 0x8],0x0       ; 004d6fe0
    MOV ECX,dword ptr [EDX + 0x8]       ; 004d6fe7
    MOV dword ptr [EDX + 0x4],ECX       ; 004d6fea
    MOV ECX,dword ptr [EDX + 0x4]       ; 004d6fed
    MOV dword ptr [EDX],ECX             ; 004d6ff0
    MOV dword ptr [EAX + 0x8],0x0       ; 004d6ff2
    ADD ESP,0x8                         ; 004d6ff9
    MOV EDX,dword ptr [EAX + 0x8]       ; 004d6ffc
    MOV dword ptr [EAX + 0x4],EDX       ; 004d6fff
    MOV EDX,dword ptr [EAX + 0x4]       ; 004d7002
    MOV dword ptr [EAX],EDX             ; 004d7005
    LEA EAX,[EBP + -0x4a]               ; 004d7007
    PUSH EAX                            ; 004d700a
    PUSH EBX                            ; 004d700b
    CALL core_charactr.cpp_FUN_0042c230 ; 004d700c
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004d7011
    PUSH EBX                            ; 004d7014
        ;   Label: LAB_004d7014
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30 ; 004d7015
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004d701a
    LEA EAX,[EBX + 0x158]               ; 004d701d
    PUSH EAX                            ; 004d7023
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 004d7024
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d7029
    PUSH dword ptr [EBP + 0x92]         ; 004d702c
    PUSH EBX                            ; 004d7032
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350 ; 004d7033
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004d7038
    LEA ESP,[EBP + 0x7a]                ; 004d703b
        ;   Label: LAB_004d703b
    POP EBP                             ; 004d703e
    POP EDI                             ; 004d703f
    POP ESI                             ; 004d7040
    POP EBX                             ; 004d7041
    RET                                 ; 004d7042
    PUSH 0x1                            ; 004d7043
        ;   Label: LAB_004d7043
    PUSH 0x0                            ; 004d7045
    LEA EAX,[EBX + 0x158]               ; 004d7047
    PUSH EAX                            ; 004d704d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d704e
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d7053
    PUSH EBX                            ; 004d7056
    MOV EAX,0x5c55af                    ; 004d7057 | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 004d705c | = "%s confused while walking to scriptDe..."
    MOV EAX,[0x005f1690]                ; 004d705d | g_CConsolePtr
    PUSH EAX                            ; 004d7062 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 004d7063
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    JMP 0x004d6eb3                      ; 004d7068
        ;   XREF to: 004d6eb3 (UNCONDITIONAL_JUMP)  ; LAB_004d6eb3
    JBE 0x004d6ea3                      ; 004d706d
        ;   XREF to: 004d6ea3 (CONDITIONAL_JUMP)  ; LAB_004d6ea3
        ;   Label: LAB_004d706d
    CMP EAX,0x3                         ; 004d7073
    JZ 0x004d7043                       ; 004d7076
        ;   XREF to: 004d7043 (CONDITIONAL_JUMP)  ; LAB_004d7043
    PUSH 0x1                            ; 004d7078
        ;   Label: LAB_004d7078
    PUSH 0x0                            ; 004d707a
    JMP 0x004d6ea7                      ; 004d707c
        ;   XREF to: 004d6ea7 (UNCONDITIONAL_JUMP)  ; LAB_004d6ea7
    CMP dword ptr [EBX + 0xcdd0],0x0    ; 004d7081
        ;   Label: caseD_7
    JNZ 0x004d6ece                      ; 004d7088
        ;   XREF to: 004d6ece (CONDITIONAL_JUMP)  ; caseD_8
    CMP dword ptr [EBX + 0xdc],0x0      ; 004d708e
    JNZ 0x004d6ece                      ; 004d7095
        ;   XREF to: 004d6ece (CONDITIONAL_JUMP)  ; caseD_8
    PUSH EAX                            ; 004d709b
    MOV EAX,dword ptr [EBP + 0x6a]      ; 004d709c
    PUSH EAX                            ; 004d709f
    LEA ESI,[EBP + 0xffffff56]          ; 004d70a0
    LEA EDI,[EBP + 0xffffff62]          ; 004d70a6
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 004d70ac
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    ADD ESP,0x8                         ; 004d70b1
    LEA EAX,[EBP + 0xffffff62]          ; 004d70b4
    LEA ESI,[EBP + 0xffffff56]          ; 004d70ba
    PUSH EAX                            ; 004d70c0
    MOVSD ES:EDI,ESI                    ; 004d70c1
    MOVSD ES:EDI,ESI                    ; 004d70c2
    MOVSD ES:EDI,ESI                    ; 004d70c3
    PUSH EBX                            ; 004d70c4
    LEA ESI,[EBP + 0x22]                ; 004d70c5
    CALL core_actor.cpp_FUN_00408b80    ; 004d70c8
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 004d70cd
    PUSH 0x0                            ; 004d70d0
    LEA EAX,[EBP + 0xffffff4a]          ; 004d70d2
    LEA EDI,[EBP + 0xffffff4a]          ; 004d70d8
    PUSH EAX                            ; 004d70de
    MOV EDX,dword ptr [0x005fed24]      ; 004d70df | g_CGorePtr
    LEA ESI,[EBP + 0x22]                ; 004d70e5
    PUSH EDX                            ; 004d70e8
    MOVSD ES:EDI,ESI                    ; 004d70e9
    MOVSD ES:EDI,ESI                    ; 004d70ea
    MOVSD ES:EDI,ESI                    ; 004d70eb
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004cec40 ; 004d70ec
        ;   XREF to: 004cec40 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004cec40(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 004d70f1
    MOV dword ptr [EBX + 0xcdd0],0x1    ; 004d70f4
    JMP 0x004d6ece                      ; 004d70fe
        ;   XREF to: 004d6ece (UNCONDITIONAL_JUMP)  ; caseD_8
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 004d7103
        ;   Label: caseD_9
    TEST ESI,ESI                        ; 004d7109
    JNZ 0x004d7122                      ; 004d710b
        ;   XREF to: 004d7122 (CONDITIONAL_JUMP)  ; LAB_004d7122
    PUSH 0x1                            ; 004d710d
    PUSH 0x5                            ; 004d710f
    MOV ECX,dword ptr [EBP + 0x6a]      ; 004d7111
    PUSH ECX                            ; 004d7114
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d7115
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d711a
    JMP 0x004d6ece                      ; 004d711d
        ;   XREF to: 004d6ece (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH ESI                            ; 004d7122
        ;   Label: LAB_004d7122
    MOV EDX,dword ptr [ESI + 0x154]     ; 004d7123
    CALL dword ptr [EDX + 0x10c]        ; 004d7129
    ADD ESP,0x4                         ; 004d712f
    TEST EAX,EAX                        ; 004d7132
    JNZ 0x004d7173                      ; 004d7134
        ;   XREF to: 004d7173 (CONDITIONAL_JUMP)  ; LAB_004d7173
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004d7136
    MOV EDI,dword ptr [EAX + 0x26fc]    ; 004d713c
    CMP EBX,EDI                         ; 004d7142
    JNZ 0x004d7188                      ; 004d7144
        ;   XREF to: 004d7188 (CONDITIONAL_JUMP)  ; LAB_004d7188
    FLD float ptr [EAX + 0x20]          ; 004d7146
    FLD double ptr [0x005c5608]         ; 004d7149 | DAT_005c5608
    FLD float ptr [EDI + 0x44]          ; 004d714f
    FMUL ST1                            ; 004d7152
    FSUBP ST2,ST0                       ; 004d7154
    MOV EAX,dword ptr [EDI + 0xcde4]    ; 004d7156
    FXCH                                ; 004d715c
    FSTP float ptr [EDI + 0x20]         ; 004d715e
    FLD float ptr [EAX + 0x28]          ; 004d7161
    FLD float ptr [EDI + 0x5c]          ; 004d7164
    FMULP ST2                           ; 004d7167
    FSUBRP                              ; 004d7169
    FSTP float ptr [EDI + 0x28]         ; 004d716b
    JMP 0x004d6ece                      ; 004d716e
        ;   XREF to: 004d6ece (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x1                            ; 004d7173
        ;   Label: LAB_004d7173
    PUSH 0x5                            ; 004d7175
    MOV EDX,dword ptr [EBP + 0x6a]      ; 004d7177
    PUSH EDX                            ; 004d717a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d717b
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d7180
    JMP 0x004d6ece                      ; 004d7183
        ;   XREF to: 004d6ece (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x1                            ; 004d7188
        ;   Label: LAB_004d7188
    PUSH 0x5                            ; 004d718a
    MOV EAX,dword ptr [EBP + 0x6a]      ; 004d718c
    PUSH EAX                            ; 004d718f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d7190
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d7195
    JMP 0x004d6ece                      ; 004d7198
        ;   XREF to: 004d6ece (UNCONDITIONAL_JUMP)  ; caseD_8
    LEA EAX,[EBP + 0xfffffe42]          ; 004d719d
        ;   Label: caseD_4
    PUSH EAX                            ; 004d71a3
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 004d71a4
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004d71a9
    PUSH 0x40a00000                     ; 004d71ac
    PUSH 0x40400000                     ; 004d71b1
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004d71b6
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004d71bb
    ADD ESP,0x8                         ; 004d71be
    LEA EAX,[EBP + 0xfffffe42]          ; 004d71c1
    MOV EDX,dword ptr [0x01d5bc14]      ; 004d71c7 | DAT_01d5bc14
    PUSH EAX                            ; 004d71cd
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d71ce
    LEA ESI,[EBP + 0xffffff02]          ; 004d71d5
    SUB EAX,EDX                         ; 004d71db
    MOV dword ptr [EBP + 0xfffffe76],EBX ; 004d71dd
    MOV EDX,EAX                         ; 004d71e3
    MOV dword ptr [EBP + 0xfffffe7a],EBX ; 004d71e5
    SHL EDX,0x4                         ; 004d71eb
    LEA EAX,[EBX + 0xfd8]               ; 004d71ee
    PUSH 0x3ecccccd                     ; 004d71f4
    ADD EAX,EDX                         ; 004d71f9
    LEA EDI,[EBP + 0xffffff1a]          ; 004d71fb
    PUSH EAX                            ; 004d7201
    FLD float ptr [EBP + 0x76]          ; 004d7202
    PUSH 0x2cfd900                      ; 004d7205 | DAT_02cfd900
    FSTP float ptr [EBP + 0xfffffe46]   ; 004d720a
    CALL core_xform.cpp_FUN_00583260    ; 004d7210
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 004d7215
    LEA EAX,[EBP + 0xffffff1a]          ; 004d7218
    LEA ESI,[EBP + 0xffffff02]          ; 004d721e
    PUSH EAX                            ; 004d7224
    MOVSD ES:EDI,ESI                    ; 004d7225
    MOVSD ES:EDI,ESI                    ; 004d7226
    MOVSD ES:EDI,ESI                    ; 004d7227
    PUSH EBX                            ; 004d7228
    LEA ESI,[EBP + 0xffffff6e]          ; 004d7229
    CALL core_actor.cpp_FUN_00408b80    ; 004d722f
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 004d7234
    LEA EAX,[EBP + 0xffffff26]          ; 004d7237
    PUSH EAX                            ; 004d723d
    LEA EDI,[EBP + 0xffffff26]          ; 004d723e
    LEA ESI,[EBP + 0xffffff6e]          ; 004d7244
    PUSH EBX                            ; 004d724a
    MOVSD ES:EDI,ESI                    ; 004d724b
    MOVSD ES:EDI,ESI                    ; 004d724c
    MOVSD ES:EDI,ESI                    ; 004d724d
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0 ; 004d724e
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 004d7253
    TEST EAX,EAX                        ; 004d7256
    JZ 0x004d6ece                       ; 004d7258
        ;   XREF to: 004d6ece (CONDITIONAL_JUMP)  ; caseD_8
    XOR EDI,EDI                         ; 004d725e
    XOR ESI,ESI                         ; 004d7260
    MOV EAX,[0x00603b28]                ; 004d7262 | g_CDemonSetPtr
        ;   Label: LAB_004d7262
    CMP ESI,dword ptr [EAX + 0x150fec]  ; 004d7267 | g_CDemonSetInstance.enemy_count
    JGE 0x004d6ece                      ; 004d726d
        ;   XREF to: 004d6ece (CONDITIONAL_JUMP)  ; caseD_8
    MOV EDX,dword ptr [0x01d5bc74]      ; 004d7273 | g_CImpClassInfo.name_hash
    PUSH EDX                            ; 004d7279
    MOV ECX,dword ptr [EDI + EAX*0x1 + 0x150ff0] ; 004d727a
    PUSH ECX                            ; 004d7281
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004d7282
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004d7287
    TEST EAX,EAX                        ; 004d728a
    JNZ 0x004d7294                      ; 004d728c
        ;   XREF to: 004d7294 (CONDITIONAL_JUMP)  ; LAB_004d7294
    INC ESI                             ; 004d728e
        ;   Label: LAB_004d728e
    ADD EDI,0x4                         ; 004d728f
    JMP 0x004d7262                      ; 004d7292
        ;   XREF to: 004d7262 (UNCONDITIONAL_JUMP)  ; LAB_004d7262
    CMP EAX,EBX                         ; 004d7294
        ;   Label: LAB_004d7294
    JZ 0x004d728e                       ; 004d7296
        ;   XREF to: 004d728e (CONDITIONAL_JUMP)  ; LAB_004d728e
    MOV ECX,dword ptr [EBX + 0xcde4]    ; 004d7298
    CMP ECX,dword ptr [EAX + 0xcde4]    ; 004d729e
    JNZ 0x004d728e                      ; 004d72a4
        ;   XREF to: 004d728e (CONDITIONAL_JUMP)  ; LAB_004d728e
    PUSH 0x1                            ; 004d72a6
    PUSH 0x3                            ; 004d72a8
    ADD EAX,0x158                       ; 004d72aa
    PUSH EAX                            ; 004d72af
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d72b0
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d72b5
    INC ESI                             ; 004d72b8
    ADD EDI,0x4                         ; 004d72b9
    JMP 0x004d7262                      ; 004d72bc
        ;   XREF to: 004d7262 (UNCONDITIONAL_JUMP)  ; LAB_004d7262
    MOV EAX,[0x01d5ba14]                ; 004d72be | DAT_01d5ba14
        ;   Label: caseD_0
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004d72c3
    PUSH EAX                            ; 004d72ca
    MOV EDX,dword ptr [EAX + 0x154]     ; 004d72cb
    CALL dword ptr [EDX + 0x10c]        ; 004d72d1
    ADD ESP,0x4                         ; 004d72d7
    TEST EAX,EAX                        ; 004d72da
    JZ 0x004d730b                       ; 004d72dc
        ;   XREF to: 004d730b (CONDITIONAL_JUMP)  ; LAB_004d730b
    PUSH 0x3dcccccd                     ; 004d72de
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 004d72e3
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 004d72e8
    TEST EAX,EAX                        ; 004d72eb
    JZ 0x004d6ece                       ; 004d72ed
        ;   XREF to: 004d6ece (CONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x1                            ; 004d72f3
    PUSH 0x3                            ; 004d72f5
    LEA EAX,[EBX + 0x158]               ; 004d72f7
    PUSH EAX                            ; 004d72fd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d72fe
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d7303
    JMP 0x004d6ece                      ; 004d7306
        ;   XREF to: 004d6ece (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH dword ptr [EBP + 0x92]         ; 004d730b
        ;   Label: LAB_004d730b
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d7311
    PUSH EBX                            ; 004d7317
    CALL dword ptr [EAX + 0x144]        ; 004d7318
    MOV EDI,dword ptr [EBX + 0xcde4]    ; 004d731e
    ADD ESP,0x8                         ; 004d7324
    TEST EDI,EDI                        ; 004d7327
    JZ 0x004d7465                       ; 004d7329
        ;   XREF to: 004d7465 (CONDITIONAL_JUMP)  ; LAB_004d7465
    MOV ECX,dword ptr [EDI + 0x26fc]    ; 004d732f
    MOV EDX,EDI                         ; 004d7335
    TEST ECX,ECX                        ; 004d7337
    JNZ 0x004d73e3                      ; 004d7339
        ;   XREF to: 004d73e3 (CONDITIONAL_JUMP)  ; LAB_004d73e3
    FLD float ptr [EDX + 0x20]          ; 004d733f
    FLD float ptr [EDX + 0x24]          ; 004d7342
    FLD float ptr [EDX + 0x28]          ; 004d7345
    LEA EAX,[EBX + 0x20]                ; 004d7348
    LEA EDI,[EBP + 0xfffffed2]          ; 004d734b
    LEA ESI,[EBP + 0xa]                 ; 004d7351
    FXCH ST2                            ; 004d7354
    FSUB float ptr [EAX]                ; 004d7356
    FXCH                                ; 004d7358
    FSUB float ptr [EAX + 0x4]          ; 004d735a
    FXCH ST2                            ; 004d735d
    FSUB float ptr [EAX + 0x8]          ; 004d735f
    FXCH                                ; 004d7362
    FSTP float ptr [EBP + 0xa]          ; 004d7364
    FXCH                                ; 004d7367
    FSTP float ptr [EBP + 0xe]          ; 004d7369
    FSTP float ptr [EBP + 0x12]         ; 004d736c
    MOVSD ES:EDI,ESI                    ; 004d736f
    MOVSD ES:EDI,ESI                    ; 004d7370
    MOVSD ES:EDI,ESI                    ; 004d7371
    FLD float ptr [EBP + 0xfffffed6]    ; 004d7372
    FMUL ST0                            ; 004d7378
    FLD float ptr [EBP + 0xfffffed2]    ; 004d737a
    FMUL ST0                            ; 004d7380
    FADDP                               ; 004d7382
    FLD float ptr [EBP + 0xfffffeda]    ; 004d7384
    FMUL ST0                            ; 004d738a
    FADDP                               ; 004d738c
    FSQRT                               ; 004d738e
    FSTP float ptr [EBP + 0x4a]         ; 004d7390
    MOV EAX,dword ptr [EBP + 0x4a]      ; 004d7393
    FLD float ptr [EBP + 0x4a]          ; 004d7396
    MOV dword ptr [EBP + 0x56],EAX      ; 004d7399
    FCOMP float ptr [0x005e1eec]        ; 004d739c | DAT_005e1eec
    FNSTSW AX                           ; 004d73a2
    SAHF                                ; 004d73a4
    JC 0x004d73f8                       ; 004d73a5
        ;   XREF to: 004d73f8 (CONDITIONAL_JUMP)  ; LAB_004d73f8
    FLD float ptr [EBP + 0x56]          ; 004d73a7
        ;   Label: LAB_004d73a7
    FCOMP float ptr [EBX + 0xcddc]      ; 004d73aa
    FNSTSW AX                           ; 004d73b0
    SAHF                                ; 004d73b2
    JNC 0x004d6ece                      ; 004d73b3
        ;   XREF to: 004d6ece (CONDITIONAL_JUMP)  ; caseD_8
    FLD float ptr [EBP + 0x56]          ; 004d73b9
    LEA EDX,[EBX + 0x158]               ; 004d73bc
    FCOMP float ptr [0x005e1ef8]        ; 004d73c2 | DAT_005e1ef8
    FNSTSW AX                           ; 004d73c8
    SAHF                                ; 004d73ca
    JNC 0x004d7453                      ; 004d73cb
        ;   XREF to: 004d7453 (CONDITIONAL_JUMP)  ; LAB_004d7453
    PUSH 0x1                            ; 004d73d1
    PUSH 0x1                            ; 004d73d3
    PUSH EDX                            ; 004d73d5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d73d6
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d73db
    JMP 0x004d6ece                      ; 004d73de
        ;   XREF to: 004d6ece (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x1                            ; 004d73e3
        ;   Label: LAB_004d73e3
    PUSH 0x3                            ; 004d73e5
    MOV EDI,dword ptr [EBP + 0x6a]      ; 004d73e7
    PUSH EDI                            ; 004d73ea
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d73eb
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d73f0
    JMP 0x004d6ece                      ; 004d73f3
        ;   XREF to: 004d6ece (UNCONDITIONAL_JUMP)  ; caseD_8
    LEA EAX,[EBP + 0xfffffed2]          ; 004d73f8
        ;   Label: LAB_004d73f8
    PUSH EAX                            ; 004d73fe
    LEA ESI,[EBP + -0x56]               ; 004d73ff
    LEA EDI,[EBP + -0x62]               ; 004d7402
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 004d7405
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[EBP + -0x56]               ; 004d740a
    MOVSD ES:EDI,ESI                    ; 004d740d
    MOVSD ES:EDI,ESI                    ; 004d740e
    MOVSD ES:EDI,ESI                    ; 004d740f
    ADD ESP,0x4                         ; 004d7410
    FLD float ptr [EBP + -0x5e]         ; 004d7413
    FSUB float ptr [EBX + 0x34]         ; 004d7416
    SUB ESP,0x4                         ; 004d7419
    FSTP float ptr [ESP]                ; 004d741c
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 004d741f
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004d7424
    FLD float ptr [EBP + 0x76]          ; 004d7427
    FABS                                ; 004d742a
    ADD ESP,0x4                         ; 004d742c
    FCOMP double ptr [0x005c5618]       ; 004d742f | DAT_005c5618
    FNSTSW AX                           ; 004d7435
    SAHF                                ; 004d7437
    JNC 0x004d73a7                      ; 004d7438
        ;   XREF to: 004d73a7 (CONDITIONAL_JUMP)  ; LAB_004d73a7
    PUSH 0x1                            ; 004d743e
    PUSH 0x4                            ; 004d7440
    MOV ESI,dword ptr [EBP + 0x6a]      ; 004d7442
    PUSH ESI                            ; 004d7445
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d7446
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d744b
    JMP 0x004d73a7                      ; 004d744e
        ;   XREF to: 004d73a7 (UNCONDITIONAL_JUMP)  ; LAB_004d73a7
    PUSH 0x1                            ; 004d7453
        ;   Label: LAB_004d7453
    PUSH 0x2                            ; 004d7455
    PUSH EDX                            ; 004d7457
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d7458
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d745d
    JMP 0x004d6ece                      ; 004d7460
        ;   XREF to: 004d6ece (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH dword ptr [EBP + 0x92]         ; 004d7465
        ;   Label: LAB_004d7465
    PUSH EBX                            ; 004d746b
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0 ; 004d746c
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004d7471
    TEST EAX,EAX                        ; 004d7474
    JZ 0x004d6ece                       ; 004d7476
        ;   XREF to: 004d6ece (CONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x1                            ; 004d747c
    PUSH 0x1                            ; 004d747e
    MOV EAX,dword ptr [EBP + 0x6a]      ; 004d7480
    PUSH EAX                            ; 004d7483
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d7484
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d7489
    JMP 0x004d6ece                      ; 004d748c
        ;   XREF to: 004d6ece (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH dword ptr [EBP + 0x92]         ; 004d7491
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d7497
    PUSH EBX                            ; 004d749d
    CALL dword ptr [EAX + 0x144]        ; 004d749e
    ADD ESP,0x8                         ; 004d74a4
    LEA EAX,[EBX + 0x158]               ; 004d74a7
    MOV EDI,dword ptr [EBX + 0xcde4]    ; 004d74ad
    MOV dword ptr [EBP + 0x66],EAX      ; 004d74b3
    TEST EDI,EDI                        ; 004d74b6
    JZ 0x004d74d6                       ; 004d74b8
        ;   XREF to: 004d74d6 (CONDITIONAL_JUMP)  ; LAB_004d74d6
    MOV EDX,dword ptr [EDI + 0x26fc]    ; 004d74ba
    TEST EDX,EDX                        ; 004d74c0
    JZ 0x004d7512                       ; 004d74c2
        ;   XREF to: 004d7512 (CONDITIONAL_JUMP)  ; LAB_004d7512
    PUSH 0x1                            ; 004d74c4
    PUSH 0x3                            ; 004d74c6
    PUSH EAX                            ; 004d74c8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d74c9
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d74ce
    JMP 0x004d6ece                      ; 004d74d1
        ;   XREF to: 004d6ece (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH dword ptr [EBP + 0x92]         ; 004d74d6
        ;   Label: LAB_004d74d6
    PUSH EBX                            ; 004d74dc
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0 ; 004d74dd
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004d74e2
    TEST EAX,EAX                        ; 004d74e5
    JZ 0x004d74fe                       ; 004d74e7
        ;   XREF to: 004d74fe (CONDITIONAL_JUMP)  ; LAB_004d74fe
    PUSH 0x1                            ; 004d74e9
    PUSH 0x1                            ; 004d74eb
    MOV ESI,dword ptr [EBP + 0x66]      ; 004d74ed
    PUSH ESI                            ; 004d74f0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d74f1
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d74f6
    JMP 0x004d6ece                      ; 004d74f9
        ;   XREF to: 004d6ece (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x1                            ; 004d74fe
        ;   Label: LAB_004d74fe
    PUSH EDI                            ; 004d7500
    MOV ECX,dword ptr [EBP + 0x66]      ; 004d7501
    PUSH ECX                            ; 004d7504
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d7505
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d750a
    JMP 0x004d6ece                      ; 004d750d
        ;   XREF to: 004d6ece (UNCONDITIONAL_JUMP)  ; caseD_8
    MOV EAX,[0x005e1eec]                ; 004d7512 | DAT_005e1eec
        ;   Label: LAB_004d7512
    MOV dword ptr [EBP + 0x5a],EAX      ; 004d7517
    LEA EAX,[EBX + 0x249c]              ; 004d751a
    PUSH 0x3e32b8c2                     ; 004d7520
    MOV dword ptr [EAX + 0x8],EDX       ; 004d7525
    PUSH 0x3f000000                     ; 004d7528
    MOV ECX,dword ptr [EAX + 0x8]       ; 004d752d
    MOV dword ptr [EAX + 0x4],ECX       ; 004d7530
    MOV ECX,dword ptr [EAX + 0x4]       ; 004d7533
    MOV dword ptr [EAX],ECX             ; 004d7536
    MOV EAX,dword ptr [EBP + 0x5a]      ; 004d7538
    MOV dword ptr [EBP + 0xfffffeea],EDX ; 004d753b
    MOV dword ptr [EBP + 0xfffffef2],EAX ; 004d7541
    LEA EAX,[EBP + 0xfffffeea]          ; 004d7547
    MOV dword ptr [EBP + 0xfffffeee],EDX ; 004d754d
    PUSH EAX                            ; 004d7553
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004d7554
    PUSH EAX                            ; 004d755a
    MOV EDX,dword ptr [EAX + 0x154]     ; 004d755b
    CALL dword ptr [EDX + 0xc4]         ; 004d7561
    ADD ESP,0x4                         ; 004d7567
    PUSH EAX                            ; 004d756a
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004d756b
    ADD EAX,0x20                        ; 004d7571
    PUSH EAX                            ; 004d7574
    PUSH EBX                            ; 004d7575
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 004d7576
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004d757b
    TEST EAX,EAX                        ; 004d757e
    JL 0x004d6ece                       ; 004d7580
        ;   XREF to: 004d6ece (CONDITIONAL_JUMP)  ; caseD_8
    LEA EDI,[EBP + 0xfffffede]          ; 004d7586
    LEA EAX,[EBX + 0x20]                ; 004d758c
    LEA ESI,[EBP + -0x2]                ; 004d758f
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 004d7592
    FLD float ptr [EAX]                 ; 004d7598
    FLD float ptr [EAX + 0x4]           ; 004d759a
    FLD float ptr [EAX + 0x8]           ; 004d759d
    FXCH ST2                            ; 004d75a0
    FSUB float ptr [EDX + 0x20]         ; 004d75a2
    FXCH                                ; 004d75a5
    FSUB float ptr [EDX + 0x24]         ; 004d75a7
    FXCH ST2                            ; 004d75aa
    FSUB float ptr [EDX + 0x28]         ; 004d75ac
    FXCH                                ; 004d75af
    FSTP float ptr [EBP + -0x2]         ; 004d75b1
    FXCH                                ; 004d75b4
    FSTP float ptr [EBP + 0x2]          ; 004d75b6
    FSTP float ptr [EBP + 0x6]          ; 004d75b9
    MOVSD ES:EDI,ESI                    ; 004d75bc
    MOVSD ES:EDI,ESI                    ; 004d75bd
    MOVSD ES:EDI,ESI                    ; 004d75be
    FLD float ptr [EBP + 0xfffffede]    ; 004d75bf
    FMUL ST0                            ; 004d75c5
    FLD float ptr [EBP + 0xfffffee6]    ; 004d75c7
    FMUL ST0                            ; 004d75cd
    FADDP                               ; 004d75cf
    FSQRT                               ; 004d75d1
    XOR EDI,EDI                         ; 004d75d3
    MOV dword ptr [EBP + 0xfffffee2],EDI ; 004d75d5
    FSTP float ptr [EBP + 0x4e]         ; 004d75db
    MOV EAX,dword ptr [EBP + 0x4e]      ; 004d75de
    FLD float ptr [EBP + 0x4e]          ; 004d75e1
    MOV dword ptr [EBP + 0x62],EAX      ; 004d75e4
    FCOMP float ptr [0x005e1ef8]        ; 004d75e7 | DAT_005e1ef8
    FNSTSW AX                           ; 004d75ed
    SAHF                                ; 004d75ef
    JBE 0x004d7609                      ; 004d75f0
        ;   XREF to: 004d7609 (CONDITIONAL_JUMP)  ; LAB_004d7609
    MOV EAX,dword ptr [EBP + 0x5e]      ; 004d75f2
    CMP EAX,0x1                         ; 004d75f5
    JNZ 0x004d7609                      ; 004d75f8
        ;   XREF to: 004d7609 (CONDITIONAL_JUMP)  ; LAB_004d7609
    PUSH EAX                            ; 004d75fa
    PUSH 0x2                            ; 004d75fb
    MOV EDX,dword ptr [EBP + 0x66]      ; 004d75fd
    PUSH EDX                            ; 004d7600
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d7601
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d7606
    FLD float ptr [EBP + 0x62]          ; 004d7609
        ;   Label: LAB_004d7609
    FCOMP float ptr [0x005e1efc]        ; 004d760c | DAT_005e1efc
    FNSTSW AX                           ; 004d7612
    SAHF                                ; 004d7614
    JNC 0x004d770b                      ; 004d7615
        ;   XREF to: 004d770b (CONDITIONAL_JUMP)  ; LAB_004d770b
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004d761b
    PUSH EAX                            ; 004d7621
    MOV EDX,dword ptr [EAX + 0x154]     ; 004d7622
    CALL dword ptr [EDX + 0xf4]         ; 004d7628
    ADD ESP,0x4                         ; 004d762e
    TEST EAX,EAX                        ; 004d7631
    JNZ 0x004d770b                      ; 004d7633
        ;   XREF to: 004d770b (CONDITIONAL_JUMP)  ; LAB_004d770b
    MOV EAX,dword ptr [EBX + 0xd088]    ; 004d7639
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 004d763f
    JZ 0x004d770b                       ; 004d7647
        ;   XREF to: 004d770b (CONDITIONAL_JUMP)  ; LAB_004d770b
    LEA EDI,[EBP + -0x26]               ; 004d764d
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004d7650
    LEA ESI,[EBP + 0xfffffe8a]          ; 004d7656
    LEA EDX,[EBX + 0x20]                ; 004d765c
    FLD float ptr [EAX + 0x24]          ; 004d765f
    FLD float ptr [EAX + 0x28]          ; 004d7662
    FLD float ptr [EAX + 0x20]          ; 004d7665
    LEA EAX,[EBP + -0x26]               ; 004d7668
    FSUB float ptr [EDX]                ; 004d766b
    FXCH ST2                            ; 004d766d
    FSUB float ptr [EDX + 0x4]          ; 004d766f
    FXCH                                ; 004d7672
    FSUB float ptr [EDX + 0x8]          ; 004d7674
    FXCH ST2                            ; 004d7677
    FSTP float ptr [EBP + 0xfffffe8a]   ; 004d7679
    FSTP float ptr [EBP + 0xfffffe8e]   ; 004d767f
    FSTP float ptr [EBP + 0xfffffe92]   ; 004d7685
    MOVSD ES:EDI,ESI                    ; 004d768b
    MOVSD ES:EDI,ESI                    ; 004d768c
    MOVSD ES:EDI,ESI                    ; 004d768d
    PUSH EAX                            ; 004d768e
    LEA ESI,[EBP + -0xe]                ; 004d768f
    LEA EDI,[EBP + 0xfffffeba]          ; 004d7692
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 004d7698
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[EBP + -0xe]                ; 004d769d
    MOVSD ES:EDI,ESI                    ; 004d76a0
    MOVSD ES:EDI,ESI                    ; 004d76a1
    MOVSD ES:EDI,ESI                    ; 004d76a2
    ADD ESP,0x4                         ; 004d76a3
    FLD float ptr [EBP + 0xfffffebe]    ; 004d76a6
    FSUB float ptr [EBX + 0x34]         ; 004d76ac
    SUB ESP,0x4                         ; 004d76af
    FSTP float ptr [ESP]                ; 004d76b2
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 004d76b5
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004d76ba
    FLD float ptr [EBP + 0x76]          ; 004d76bd
    FABS                                ; 004d76c0
    ADD ESP,0x4                         ; 004d76c2
    FCOMP double ptr [0x005c5618]       ; 004d76c5 | DAT_005c5618
    FNSTSW AX                           ; 004d76cb
    SAHF                                ; 004d76cd
    JNC 0x004d770b                      ; 004d76ce
        ;   XREF to: 004d770b (CONDITIONAL_JUMP)  ; LAB_004d770b
    PUSH 0x3dcccccd                     ; 004d76d0
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 004d76d5
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 004d76da
    TEST EAX,EAX                        ; 004d76dd
    JZ 0x004d770b                       ; 004d76df
        ;   XREF to: 004d770b (CONDITIONAL_JUMP)  ; LAB_004d770b
    PUSH 0x1                            ; 004d76e1
    PUSH 0x8                            ; 004d76e3
    LEA EAX,[EBX + 0x158]               ; 004d76e5
    PUSH EAX                            ; 004d76eb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d76ec
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d76f1
    MOV ESI,dword ptr [EBX + 0xd054]    ; 004d76f4
    PUSH ESI                            ; 004d76fa
    CALL sound_sndmain.cpp_FUN_00556700 ; 004d76fb
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 004d7700
    TEST EAX,EAX                        ; 004d7703
    JZ 0x004d787a                       ; 004d7705
        ;   XREF to: 004d787a (CONDITIONAL_JUMP)  ; LAB_004d787a
    FLD float ptr [EBP + 0x62]          ; 004d770b
        ;   Label: LAB_004d770b
    FCOMP float ptr [EBP + 0x5a]        ; 004d770e
    FNSTSW AX                           ; 004d7711
    SAHF                                ; 004d7713
    JA 0x004d77c7                       ; 004d7714
        ;   XREF to: 004d77c7 (CONDITIONAL_JUMP)  ; LAB_004d77c7
    FLD float ptr [EBX + 0xcde0]        ; 004d771a
    FLDZ                                ; 004d7720
    FCOMPP                              ; 004d7722
    FNSTSW AX                           ; 004d7724
    SAHF                                ; 004d7726
    JC 0x004d77c7                       ; 004d7727
        ;   XREF to: 004d77c7 (CONDITIONAL_JUMP)  ; LAB_004d77c7
    LEA EDI,[EBP + -0x6e]               ; 004d772d
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004d7730
    LEA ESI,[EBP + 0x2e]                ; 004d7736
    LEA EDX,[EBX + 0x20]                ; 004d7739
    FLD float ptr [EAX + 0x24]          ; 004d773c
    FLD float ptr [EAX + 0x28]          ; 004d773f
    FLD float ptr [EAX + 0x20]          ; 004d7742
    LEA EAX,[EBP + -0x6e]               ; 004d7745
    FSUB float ptr [EDX]                ; 004d7748
    FXCH ST2                            ; 004d774a
    FSUB float ptr [EDX + 0x4]          ; 004d774c
    FXCH                                ; 004d774f
    FSUB float ptr [EDX + 0x8]          ; 004d7751
    FXCH ST2                            ; 004d7754
    FSTP float ptr [EBP + 0x2e]         ; 004d7756
    FSTP float ptr [EBP + 0x32]         ; 004d7759
    FSTP float ptr [EBP + 0x36]         ; 004d775c
    MOVSD ES:EDI,ESI                    ; 004d775f
    MOVSD ES:EDI,ESI                    ; 004d7760
    MOVSD ES:EDI,ESI                    ; 004d7761
    PUSH EAX                            ; 004d7762
    LEA ESI,[EBP + 0xfffffea2]          ; 004d7763
    LEA EDI,[EBP + 0xfffffe96]          ; 004d7769
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 004d776f
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[EBP + 0xfffffea2]          ; 004d7774
    MOVSD ES:EDI,ESI                    ; 004d777a
    MOVSD ES:EDI,ESI                    ; 004d777b
    MOVSD ES:EDI,ESI                    ; 004d777c
    ADD ESP,0x4                         ; 004d777d
    FLD float ptr [EBP + 0xfffffe9a]    ; 004d7780
    FSUB float ptr [EBX + 0x34]         ; 004d7786
    SUB ESP,0x4                         ; 004d7789
    FSTP float ptr [ESP]                ; 004d778c
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 004d778f
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004d7794
    FLD float ptr [EBP + 0x76]          ; 004d7797
    FABS                                ; 004d779a
    ADD ESP,0x4                         ; 004d779c
    FCOMP double ptr [0x005c5618]       ; 004d779f | DAT_005c5618
    FNSTSW AX                           ; 004d77a5
    SAHF                                ; 004d77a7
    JNC 0x004d77c7                      ; 004d77a8
        ;   XREF to: 004d77c7 (CONDITIONAL_JUMP)  ; LAB_004d77c7
    PUSH 0x1                            ; 004d77aa
    PUSH 0x4                            ; 004d77ac
    LEA EAX,[EBX + 0x158]               ; 004d77ae
    PUSH EAX                            ; 004d77b4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d77b5
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d77ba
    MOV dword ptr [EBX + 0xcde0],0x40800000 ; 004d77bd
    FLD float ptr [EBP + 0x62]          ; 004d77c7
        ;   Label: LAB_004d77c7
    FCOMP float ptr [EBX + 0xcddc]      ; 004d77ca
    FNSTSW AX                           ; 004d77d0
    SAHF                                ; 004d77d2
    JBE 0x004d77e8                      ; 004d77d3
        ;   XREF to: 004d77e8 (CONDITIONAL_JUMP)  ; LAB_004d77e8
    PUSH 0x1                            ; 004d77d5
    PUSH 0x0                            ; 004d77d7
    LEA EAX,[EBX + 0x158]               ; 004d77d9
    PUSH EAX                            ; 004d77df
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d77e0
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d77e5
    FLD float ptr [EBX + 0xd05c]        ; 004d77e8
        ;   Label: LAB_004d77e8
    FSUB float ptr [EBP + 0x92]         ; 004d77ee
    FST float ptr [EBX + 0xd05c]        ; 004d77f4
    FLDZ                                ; 004d77fa
    FCOMPP                              ; 004d77fc
    FNSTSW AX                           ; 004d77fe
    SAHF                                ; 004d7800
    JBE 0x004d6ece                      ; 004d7801
        ;   XREF to: 004d6ece (CONDITIONAL_JUMP)  ; caseD_8
    MOV EDI,dword ptr [EBX + 0xd054]    ; 004d7807
    PUSH EDI                            ; 004d780d
    MOV dword ptr [EBX + 0xd05c],0x0    ; 004d780e
    CALL sound_sndmain.cpp_FUN_00556700 ; 004d7818
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 004d781d
    TEST EAX,EAX                        ; 004d7820
    JNZ 0x004d6ece                      ; 004d7822
        ;   XREF to: 004d6ece (CONDITIONAL_JUMP)  ; caseD_8
    MOV EAX,dword ptr [EBX + 0xd058]    ; 004d7828
    PUSH EAX                            ; 004d782e
    CALL sound_sndmain.cpp_FUN_00556700 ; 004d782f
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 004d7834
    TEST EAX,EAX                        ; 004d7837
    JNZ 0x004d6ece                      ; 004d7839
        ;   XREF to: 004d6ece (CONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x5c55e7                       ; 004d783f | = "imp-laugh?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d7844
    PUSH EBX                            ; 004d784a
    CALL dword ptr [EAX + 0x2c]         ; 004d784b
    ADD ESP,0x8                         ; 004d784e
    PUSH 0x41a00000                     ; 004d7851
    PUSH 0x41200000                     ; 004d7856
    MOV dword ptr [EBX + 0xd054],EAX    ; 004d785b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004d7861
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004d7866
    ADD ESP,0x8                         ; 004d7869
    MOV EAX,dword ptr [EBP + 0x76]      ; 004d786c
    MOV dword ptr [EBX + 0xd05c],EAX    ; 004d786f
    JMP 0x004d6ece                      ; 004d7875
        ;   XREF to: 004d6ece (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x5c55d9                       ; 004d787a | = "imp-jump?.wav"
        ;   Label: LAB_004d787a
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d787f
    PUSH EBX                            ; 004d7885
    CALL dword ptr [EAX + 0x2c]         ; 004d7886
    ADD ESP,0x8                         ; 004d7889
    MOV dword ptr [EBX + 0xd054],EAX    ; 004d788c
    JMP 0x004d770b                      ; 004d7892
        ;   XREF to: 004d770b (UNCONDITIONAL_JUMP)  ; LAB_004d770b
    FLD float ptr [EBP + 0x92]          ; 004d7897
        ;   Label: caseD_3
    FMUL float ptr [0x005c5610]         ; 004d789d | DAT_005c5610
    FSUBR float ptr [EBX + 0xd05c]      ; 004d78a3
    FST float ptr [EBX + 0xd05c]        ; 004d78a9
    FLDZ                                ; 004d78af
    FCOMPP                              ; 004d78b1
    FNSTSW AX                           ; 004d78b3
    SAHF                                ; 004d78b5
    JBE 0x004d6ece                      ; 004d78b6
        ;   XREF to: 004d6ece (CONDITIONAL_JUMP)  ; caseD_8
    MOV ECX,dword ptr [EBX + 0xd054]    ; 004d78bc
    PUSH ECX                            ; 004d78c2
    MOV dword ptr [EBX + 0xd05c],0x0    ; 004d78c3
    CALL sound_sndmain.cpp_FUN_00556700 ; 004d78cd
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 004d78d2
    TEST EAX,EAX                        ; 004d78d5
    JNZ 0x004d6ece                      ; 004d78d7
        ;   XREF to: 004d6ece (CONDITIONAL_JUMP)  ; caseD_8
    MOV ESI,dword ptr [EBX + 0xd058]    ; 004d78dd
    PUSH ESI                            ; 004d78e3
    CALL sound_sndmain.cpp_FUN_00556700 ; 004d78e4
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 004d78e9
    TEST EAX,EAX                        ; 004d78ec
    JNZ 0x004d6ece                      ; 004d78ee
        ;   XREF to: 004d6ece (CONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x5c55f6                       ; 004d78f4 | = "imp-laugh?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d78f9
    PUSH EBX                            ; 004d78ff
    CALL dword ptr [EAX + 0x2c]         ; 004d7900
    ADD ESP,0x8                         ; 004d7903
    PUSH 0x41a00000                     ; 004d7906
    PUSH 0x41200000                     ; 004d790b
    MOV dword ptr [EBX + 0xd054],EAX    ; 004d7910
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004d7916
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004d791b
    ADD ESP,0x8                         ; 004d791e
    MOV EAX,dword ptr [EBP + 0x76]      ; 004d7921
    MOV dword ptr [EBX + 0xd05c],EAX    ; 004d7924
    JMP 0x004d6ece                      ; 004d792a
        ;   XREF to: 004d6ece (UNCONDITIONAL_JUMP)  ; caseD_8
    CMP ESI,0x9                         ; 004d792f
        ;   Label: LAB_004d792f
    JA 0x004d6ece                       ; 004d7932
        ;   XREF to: 004d6ece (CONDITIONAL_JUMP)  ; caseD_8
    JMP dword ptr [ESI*0x4 + 0x4d6a68]  ; 004d7938 | caseD_0 | caseD_2 | caseD_3
        ;   Label: switchD

