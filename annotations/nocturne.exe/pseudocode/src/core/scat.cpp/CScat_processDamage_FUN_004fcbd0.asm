; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_scat_cpp_CScat_processDamage_FUN_004fcbd0(int param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_scat_die_wav_0058df26
;   string s_scat-hurt-?.wav_0058df35
;   undefined4 DAT_005a1548
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
;   core_scat.cpp_CScat_isWeaponReady_FUN_004fcd40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fcbd0
        ;   Label: core_scat.cpp_CScat_processDamage_FUN_004fcbd0
    PUSH ESI                            ; 004fcbd1
    PUSH EDI                            ; 004fcbd2
    PUSH EBP                            ; 004fcbd3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004fcbd4
    MOV EDI,dword ptr [ESP + 0x18]      ; 004fcbd8
    TEST dword ptr [EBX + 0xbc8c],0x7fffffff ; 004fcbdc
    JNZ 0x004fcc54                      ; 004fcbe6
        ;   XREF to: 004fcc54 (CONDITIONAL_JUMP)  ; LAB_004fcc54
    MOV EAX,[0x005b9354]                ; 004fcbe8 | DAT_005b9354
        ;   Label: LAB_004fcbe8
    CMP dword ptr [EAX + 0x1d0],0x0     ; 004fcbed | DAT_01c777bc
    JZ 0x004fcbfd                       ; 004fcbf4
        ;   XREF to: 004fcbfd (CONDITIONAL_JUMP)  ; LAB_004fcbfd
    MOV dword ptr [EDI + 0x4],0x0       ; 004fcbf6
    MOV EAX,[0x005b9354]                ; 004fcbfd | DAT_005b9354
        ;   Label: LAB_004fcbfd
    MOV ESI,dword ptr [EAX + 0x22c]     ; 004fcc02 | DAT_01c77818
    TEST ESI,ESI                        ; 004fcc08
    JZ 0x004fcc5d                       ; 004fcc0a
        ;   XREF to: 004fcc5d (CONDITIONAL_JUMP)  ; LAB_004fcc5d
    MOV EAX,[0x005a1548]                ; 004fcc0c | DAT_005a1548
        ;   Label: LAB_004fcc0c
    MOV dword ptr [EBX + 0xbc8c],EAX    ; 004fcc11
    FLD float ptr [EDI + 0x4]           ; 004fcc17
    FSUBR float ptr [EBX + 0x2434]      ; 004fcc1a
    LEA ESI,[EBX + 0x150]               ; 004fcc20
    FST float ptr [EBX + 0x2434]        ; 004fcc26
    FLDZ                                ; 004fcc2c
    FCOMPP                              ; 004fcc2e
    FNSTSW AX                           ; 004fcc30
    SAHF                                ; 004fcc32
    JNC 0x004fcc62                      ; 004fcc33
        ;   XREF to: 004fcc62 (CONDITIONAL_JUMP)  ; LAB_004fcc62
    FLD float ptr [EDI + 0x4]           ; 004fcc35
    FLDZ                                ; 004fcc38
    FCOMPP                              ; 004fcc3a
    FNSTSW AX                           ; 004fcc3c
    SAHF                                ; 004fcc3e
    JC 0x004fccdf                       ; 004fcc3f
        ;   XREF to: 004fccdf (CONDITIONAL_JUMP)  ; LAB_004fccdf
    PUSH EDI                            ; 004fcc45
    PUSH EBX                            ; 004fcc46
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00428510 ; 004fcc47
        ;   XREF to: 00428510 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_processDamage_FUN_00428510()
    ADD ESP,0x8                         ; 004fcc4c
    POP EBP                             ; 004fcc4f
    POP EDI                             ; 004fcc50
    POP ESI                             ; 004fcc51
    POP EBX                             ; 004fcc52
    RET                                 ; 004fcc53
    MOV dword ptr [EDI + 0x4],0x0       ; 004fcc54
        ;   Label: LAB_004fcc54
    JMP 0x004fcbe8                      ; 004fcc5b
        ;   XREF to: 004fcbe8 (UNCONDITIONAL_JUMP)  ; LAB_004fcbe8
    MOV dword ptr [EDI + 0x4],ESI       ; 004fcc5d
        ;   Label: LAB_004fcc5d
    JMP 0x004fcc0c                      ; 004fcc60
        ;   XREF to: 004fcc0c (UNCONDITIONAL_JUMP)  ; LAB_004fcc0c
    PUSH ESI                            ; 004fcc62
        ;   Label: LAB_004fcc62
    MOV dword ptr [EBX + 0x2434],0x0    ; 004fcc63
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004fcc6d
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004fcc72
    ADD ESP,0x4                         ; 004fcc75
    CMP EAX,0x5                         ; 004fcc78
    JZ 0x004fccbe                       ; 004fcc7b
        ;   XREF to: 004fccbe (CONDITIONAL_JUMP)  ; LAB_004fccbe
    PUSH ESI                            ; 004fcc7d
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004fcc7e
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004fcc83
    ADD ESP,0x4                         ; 004fcc86
    CMP EAX,0x4                         ; 004fcc89
    JZ 0x004fccbe                       ; 004fcc8c
        ;   XREF to: 004fccbe (CONDITIONAL_JUMP)  ; LAB_004fccbe
    PUSH 0x1                            ; 004fcc8e
    PUSH 0x4                            ; 004fcc90
    PUSH ESI                            ; 004fcc92
    MOV dword ptr [EBX + 0x2590],0x0    ; 004fcc93
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004fcc9d
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004fcca2
    PUSH 0x0                            ; 004fcca5
    PUSH 0x42480000                     ; 004fcca7
    PUSH 0x32                           ; 004fccac
    PUSH EBX                            ; 004fccae
    MOV EBP,dword ptr [0x005b96c4]      ; 004fccaf | DAT_005b96c4
    PUSH EBP                            ; 004fccb5
    CALL core_gore.cpp_CGore_spawnFliesOnActor_FUN_004b0670 ; 004fccb6
        ;   XREF to: 004b0670 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CGore_spawnFliesOnActor_FUN_004b0670()
    ADD ESP,0x14                        ; 004fccbb
    PUSH 0x58df26                       ; 004fccbe | = "scat-die-?.wav"
        ;   Label: LAB_004fccbe
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004fccc3
    PUSH EBX                            ; 004fccc9
    CALL dword ptr [EAX + 0x24]         ; 004fccca
    ADD ESP,0x8                         ; 004fcccd
    PUSH EDI                            ; 004fccd0
    PUSH EBX                            ; 004fccd1
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00428510 ; 004fccd2
        ;   XREF to: 00428510 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_processDamage_FUN_00428510()
    ADD ESP,0x8                         ; 004fccd7
    POP EBP                             ; 004fccda
    POP EDI                             ; 004fccdb
    POP ESI                             ; 004fccdc
    POP EBX                             ; 004fccdd
    RET                                 ; 004fccde
    PUSH EBX                            ; 004fccdf
        ;   Label: LAB_004fccdf
    CALL core_scat.cpp_CScat_isWeaponReady_FUN_004fcd40 ; 004fcce0
        ;   XREF to: 004fcd40 (UNCONDITIONAL_CALL)  ; undefined core_scat.cpp_CScat_isWeaponReady_FUN_004fcd40()
    ADD ESP,0x4                         ; 004fcce5
    TEST EAX,EAX                        ; 004fcce8
    JZ 0x004fcd1a                       ; 004fccea
        ;   XREF to: 004fcd1a (CONDITIONAL_JUMP)  ; LAB_004fcd1a
    PUSH 0x1                            ; 004fccec
    PUSH 0xd                            ; 004fccee
    PUSH ESI                            ; 004fccf0
        ;   Label: LAB_004fccf0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004fccf1
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004fccf6
    PUSH 0x58df35                       ; 004fccf9 | = "scat-hurt-?.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004fccfe
    PUSH EBX                            ; 004fcd04
    CALL dword ptr [EAX + 0x24]         ; 004fcd05
    ADD ESP,0x8                         ; 004fcd08
    PUSH EDI                            ; 004fcd0b
    PUSH EBX                            ; 004fcd0c
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00428510 ; 004fcd0d
        ;   XREF to: 00428510 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_processDamage_FUN_00428510()
    ADD ESP,0x8                         ; 004fcd12
    POP EBP                             ; 004fcd15
    POP EDI                             ; 004fcd16
    POP ESI                             ; 004fcd17
    POP EBX                             ; 004fcd18
    RET                                 ; 004fcd19
    PUSH 0x1                            ; 004fcd1a
        ;   Label: LAB_004fcd1a
    PUSH 0xc                            ; 004fcd1c
    JMP 0x004fccf0                      ; 004fcd1e
        ;   XREF to: 004fccf0 (UNCONDITIONAL_JUMP)  ; LAB_004fccf0

