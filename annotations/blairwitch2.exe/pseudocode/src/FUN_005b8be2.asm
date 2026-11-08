; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005b8be2(int param_1)
;
;
; XREF[22]:
;   FUN_0040e670 at 0040e6ba
;   FUN_004154f0 at 00415508
;   FUN_00447660 at 004476d7
;   FUN_00447ea0 at 00447ea9
;   FUN_004a2b30 at 004a2b43
;   FUN_004a2cc0 at 004a2e12
;   FUN_004a3630 at 004a364e
;   FUN_004a4070 at 004a4079
;   FUN_004b90d0 at 004b9d8e
;   FUN_004c9bd0 at 004c9be0
;   ... and 12 more
;
; Referenced Globals:
;   undefined4 DAT_026807c8
;   undefined4 DAT_026807cc
;
; Called Functions:
;   FUN_005b8580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8be2
        ;   Label: FUN_005b8be2
    PUSH ESI                            ; 005b8be3
    MOV EBX,dword ptr [ESP + 0xc]       ; 005b8be4
    TEST EBX,EBX                        ; 005b8be8
    JZ 0x005b8c12                       ; 005b8bea
        ;   XREF to: 005b8c12 (CONDITIONAL_JUMP)  ; LAB_005b8c12
    PUSH EBX                            ; 005b8bec
        ;   Label: LAB_005b8bec
    CALL FUN_005b8580                   ; 005b8bed
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8580()
    ADD ESP,0x4                         ; 005b8bf2
    MOV ESI,EAX                         ; 005b8bf5
    TEST EAX,EAX                        ; 005b8bf7
    JNZ 0x005b8c0d                      ; 005b8bf9
        ;   XREF to: 005b8c0d (CONDITIONAL_JUMP)  ; LAB_005b8c0d
    MOV EAX,[0x026807cc]                ; 005b8bfb | DAT_026807cc
    TEST EAX,EAX                        ; 005b8c00
    JNZ 0x005b8c15                      ; 005b8c02
        ;   XREF to: 005b8c15 (CONDITIONAL_JUMP)  ; LAB_005b8c15
    MOV EAX,[0x026807c8]                ; 005b8c04 | DAT_026807c8
        ;   Label: LAB_005b8c04
    TEST EAX,EAX                        ; 005b8c09
    JNZ 0x005b8c21                      ; 005b8c0b
        ;   XREF to: 005b8c21 (CONDITIONAL_JUMP)  ; LAB_005b8c21
    MOV EAX,ESI                         ; 005b8c0d
        ;   Label: LAB_005b8c0d
    POP ESI                             ; 005b8c0f
    POP EBX                             ; 005b8c10
    RET                                 ; 005b8c11
    INC EBX                             ; 005b8c12
        ;   Label: LAB_005b8c12
    JMP 0x005b8bec                      ; 005b8c13
        ;   XREF to: 005b8bec (UNCONDITIONAL_JUMP)  ; LAB_005b8bec
    PUSH EBX                            ; 005b8c15
        ;   Label: LAB_005b8c15
    CALL EAX                            ; 005b8c16
    ADD ESP,0x4                         ; 005b8c18
    TEST EAX,EAX                        ; 005b8c1b
    JNZ 0x005b8bec                      ; 005b8c1d
        ;   XREF to: 005b8bec (CONDITIONAL_JUMP)  ; LAB_005b8bec
    JMP 0x005b8c04                      ; 005b8c1f
        ;   XREF to: 005b8c04 (UNCONDITIONAL_JUMP)  ; LAB_005b8c04
    CALL EAX                            ; 005b8c21
        ;   Label: LAB_005b8c21
    JMP 0x005b8bec                      ; 005b8c23
        ;   XREF to: 005b8bec (UNCONDITIONAL_JUMP)  ; LAB_005b8bec

