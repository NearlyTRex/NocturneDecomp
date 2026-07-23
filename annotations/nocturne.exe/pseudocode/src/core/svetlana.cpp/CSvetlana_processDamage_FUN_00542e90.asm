; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_svetlana_cpp_CSvetlana_processDamage_FUN_00542e90(int param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_svet_die_wav_00596460
;   TerminatedCString s_svet_hurt_wav_0059646d
;   undefined4 DAT_005a2a68
;   undefined4 DAT_005b9354
;   undefined4 DAT_005b96c4
;   undefined4 DAT_01c777bc
;   undefined4 DAT_01c77818
;
; Called Functions:
;   core_charactr.cpp_CCharacter_processDamage_FUN_00428510
;   core_gore.cpp_CGore_spawnFliesOnActor_FUN_004b0670
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   sound_sndmain.cpp_isSfxPlaying_FUN_00526c50
;   sound_sndmain.cpp_killSfx_FUN_00527230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00542e90
        ;   Label: core_svetlana.cpp_CSvetlana_processDamage_FUN_00542e90
    PUSH ESI                            ; 00542e91
    PUSH EDI                            ; 00542e92
    MOV EBX,dword ptr [ESP + 0x10]      ; 00542e93
    MOV EDI,dword ptr [ESP + 0x14]      ; 00542e97
    TEST dword ptr [EBX + 0xbc8c],0x7fffffff ; 00542e9b
    JNZ 0x00542f47                      ; 00542ea5
        ;   XREF to: 00542f47 (CONDITIONAL_JUMP)  ; LAB_00542f47
    MOV EAX,[0x005b9354]                ; 00542eab | DAT_005b9354
        ;   Label: LAB_00542eab
    CMP dword ptr [EAX + 0x1d0],0x0     ; 00542eb0 | DAT_01c777bc
    JZ 0x00542ec0                       ; 00542eb7
        ;   XREF to: 00542ec0 (CONDITIONAL_JUMP)  ; LAB_00542ec0
    MOV dword ptr [EDI + 0x4],0x0       ; 00542eb9
    MOV EAX,[0x005b9354]                ; 00542ec0 | DAT_005b9354
        ;   Label: LAB_00542ec0
    MOV ESI,dword ptr [EAX + 0x22c]     ; 00542ec5 | DAT_01c77818
    TEST ESI,ESI                        ; 00542ecb
    JZ 0x00542f53                       ; 00542ecd
        ;   XREF to: 00542f53 (CONDITIONAL_JUMP)  ; LAB_00542f53
    MOV EAX,[0x005a2a68]                ; 00542ed3 | DAT_005a2a68
        ;   Label: LAB_00542ed3
    MOV dword ptr [EBX + 0xbc8c],EAX    ; 00542ed8
    FLD float ptr [EDI + 0x4]           ; 00542ede
    FSUBR float ptr [EBX + 0x2434]      ; 00542ee1
    LEA ESI,[EBX + 0x150]               ; 00542ee7
    FST float ptr [EBX + 0x2434]        ; 00542eed
    FLDZ                                ; 00542ef3
    FCOMPP                              ; 00542ef5
    FNSTSW AX                           ; 00542ef7
    SAHF                                ; 00542ef9
    JNC 0x00542f5b                      ; 00542efa
        ;   XREF to: 00542f5b (CONDITIONAL_JUMP)  ; LAB_00542f5b
    FLD float ptr [EDI + 0x4]           ; 00542efc
    FLDZ                                ; 00542eff
    FCOMPP                              ; 00542f01
    FNSTSW AX                           ; 00542f03
    SAHF                                ; 00542f05
    JNC 0x00542f39                      ; 00542f06
        ;   XREF to: 00542f39 (CONDITIONAL_JUMP)  ; LAB_00542f39
    CMP dword ptr [EBX + 0x1fa3c],0x0   ; 00542f08
    JNZ 0x00542fec                      ; 00542f0f
        ;   XREF to: 00542fec (CONDITIONAL_JUMP)  ; LAB_00542fec
    PUSH 0x1                            ; 00542f15
    PUSH 0x4                            ; 00542f17
    PUSH ESI                            ; 00542f19
        ;   Label: LAB_00542f19
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00542f1a
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00542f1f
    MOV EAX,dword ptr [EBX + 0x950a4]   ; 00542f22
    PUSH EAX                            ; 00542f28
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 00542f29
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxPlaying_FUN_00526c50()
    ADD ESP,0x4                         ; 00542f2e
    TEST EAX,EAX                        ; 00542f31
    JZ 0x00542ff5                       ; 00542f33
        ;   XREF to: 00542ff5 (CONDITIONAL_JUMP)  ; LAB_00542ff5
    PUSH EDI                            ; 00542f39
        ;   Label: LAB_00542f39
    PUSH EBX                            ; 00542f3a
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00428510 ; 00542f3b
        ;   XREF to: 00428510 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_processDamage_FUN_00428510()
    ADD ESP,0x8                         ; 00542f40
    POP EDI                             ; 00542f43
    POP ESI                             ; 00542f44
    POP EBX                             ; 00542f45
    RET                                 ; 00542f46
    MOV dword ptr [EDI + 0x4],0x0       ; 00542f47
        ;   Label: LAB_00542f47
    JMP 0x00542eab                      ; 00542f4e
        ;   XREF to: 00542eab (UNCONDITIONAL_JUMP)  ; LAB_00542eab
    MOV dword ptr [EDI + 0x4],ESI       ; 00542f53
        ;   Label: LAB_00542f53
    JMP 0x00542ed3                      ; 00542f56
        ;   XREF to: 00542ed3 (UNCONDITIONAL_JUMP)  ; LAB_00542ed3
    PUSH ESI                            ; 00542f5b
        ;   Label: LAB_00542f5b
    MOV dword ptr [EBX + 0x2434],0x0    ; 00542f5c
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00542f66
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00542f6b
    ADD ESP,0x4                         ; 00542f6e
    CMP EAX,0x9                         ; 00542f71
    JZ 0x00542f39                       ; 00542f74
        ;   XREF to: 00542f39 (CONDITIONAL_JUMP)  ; LAB_00542f39
    PUSH ESI                            ; 00542f76
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00542f77
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00542f7c
    ADD ESP,0x4                         ; 00542f7f
    CMP EAX,0x8                         ; 00542f82
    JZ 0x00542f39                       ; 00542f85
        ;   XREF to: 00542f39 (CONDITIONAL_JUMP)  ; LAB_00542f39
    PUSH 0x1                            ; 00542f87
    PUSH 0x8                            ; 00542f89
    PUSH ESI                            ; 00542f8b
    MOV dword ptr [EBX + 0x2590],0x0    ; 00542f8c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00542f96
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00542f9b
    PUSH 0x0                            ; 00542f9e
    PUSH 0x42480000                     ; 00542fa0
    PUSH 0x32                           ; 00542fa5
    PUSH EBX                            ; 00542fa7
    MOV EDX,dword ptr [0x005b96c4]      ; 00542fa8 | DAT_005b96c4
    PUSH EDX                            ; 00542fae
    CALL core_gore.cpp_CGore_spawnFliesOnActor_FUN_004b0670 ; 00542faf
        ;   XREF to: 004b0670 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CGore_spawnFliesOnActor_FUN_004b0670()
    ADD ESP,0x14                        ; 00542fb4
    MOV ECX,dword ptr [EBX + 0x950a4]   ; 00542fb7
    PUSH ECX                            ; 00542fbd
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 00542fbe
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    ADD ESP,0x4                         ; 00542fc3
    PUSH 0x596460                       ; 00542fc6 | = "svet-die.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00542fcb
    PUSH EBX                            ; 00542fd1
    CALL dword ptr [EAX + 0x24]         ; 00542fd2
    ADD ESP,0x8                         ; 00542fd5
    MOV dword ptr [EBX + 0x950a4],EAX   ; 00542fd8
    PUSH EDI                            ; 00542fde
    PUSH EBX                            ; 00542fdf
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00428510 ; 00542fe0
        ;   XREF to: 00428510 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_processDamage_FUN_00428510()
    ADD ESP,0x8                         ; 00542fe5
    POP EDI                             ; 00542fe8
    POP ESI                             ; 00542fe9
    POP EBX                             ; 00542fea
    RET                                 ; 00542feb
    PUSH 0x1                            ; 00542fec
        ;   Label: LAB_00542fec
    PUSH 0xb                            ; 00542fee
    JMP 0x00542f19                      ; 00542ff0
        ;   XREF to: 00542f19 (UNCONDITIONAL_JUMP)  ; LAB_00542f19
    PUSH 0x59646d                       ; 00542ff5 | = "svet-hurt?.wav"
        ;   Label: LAB_00542ff5
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00542ffa
    PUSH EBX                            ; 00543000
    CALL dword ptr [EAX + 0x24]         ; 00543001
    ADD ESP,0x8                         ; 00543004
    MOV dword ptr [EBX + 0x950a4],EAX   ; 00543007
    PUSH EDI                            ; 0054300d
    PUSH EBX                            ; 0054300e
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00428510 ; 0054300f
        ;   XREF to: 00428510 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_processDamage_FUN_00428510()
    ADD ESP,0x8                         ; 00543014
    POP EDI                             ; 00543017
    POP ESI                             ; 00543018
    POP EBX                             ; 00543019
    RET                                 ; 0054301a

