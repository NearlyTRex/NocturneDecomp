; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00512cf0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e33e0
;
; Called Functions:
;   FUN_00408770
;   FUN_004448f0
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00512cf0
        ;   Label: FUN_00512cf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00512cf1
    TEST byte ptr [ESP + 0xc],0x4       ; 00512cf5
    JNZ 0x00512d2d                      ; 00512cfa
        ;   XREF to: 00512d2d (CONDITIONAL_JUMP)  ; LAB_00512d2d
    PUSH 0x0                            ; 00512cfc
    ADD EBX,0x310                       ; 00512cfe
    PUSH EBX                            ; 00512d04
    CALL FUN_004448f0                   ; 00512d05
        ;   XREF to: 004448f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004448f0()
    ADD ESP,0x8                         ; 00512d0a
    PUSH 0x1                            ; 00512d0d
    LEA EBX,[EAX + 0xfffffcf0]          ; 00512d0f
    PUSH EBX                            ; 00512d15
    CALL FUN_00408770                   ; 00512d16
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 00512d1b
    MOV DL,byte ptr [ESP + 0xc]         ; 00512d1e
    MOV EBX,EAX                         ; 00512d22
    TEST DL,0x2                         ; 00512d24
    JNZ 0x00512d48                      ; 00512d27
        ;   XREF to: 00512d48 (CONDITIONAL_JUMP)  ; LAB_00512d48
    MOV EAX,EBX                         ; 00512d29
    POP EBX                             ; 00512d2b
    RET                                 ; 00512d2c
    PUSH 0x5e33e0                       ; 00512d2d | DAT_005e33e0
        ;   Label: LAB_00512d2d
    PUSH EBX                            ; 00512d32
    CALL FUN_005a308f                   ; 00512d33
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00512d38
    PUSH EAX                            ; 00512d3b
    CALL FUN_005a30b6                   ; 00512d3c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 00512d41
    MOV EAX,EBX                         ; 00512d44
    POP EBX                             ; 00512d46
    RET                                 ; 00512d47
    PUSH EAX                            ; 00512d48
        ;   Label: LAB_00512d48
    CALL FUN_005a30c4                   ; 00512d49
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 00512d4e
    MOV EAX,EBX                         ; 00512d51
    POP EBX                             ; 00512d53
    RET                                 ; 00512d54

