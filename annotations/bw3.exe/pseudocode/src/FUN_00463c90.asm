; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00463c90(int param_1)
;
;
; Called Functions:
;   FUN_00408890
;   FUN_00462580
;   FUN_005a28c0
;   FUN_005a3d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00463c90
        ;   Label: FUN_00463c90
    PUSH ESI                            ; 00463c91
    MOV EBX,dword ptr [ESP + 0xc]       ; 00463c92
    LEA EAX,[EBX + 0x158]               ; 00463c96
    PUSH EAX                            ; 00463c9c
    CALL FUN_00462580                   ; 00463c9d
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 00463ca2
    PUSH EBX                            ; 00463ca5
    CALL FUN_00408890                   ; 00463ca6
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; undefined FUN_00408890()
    ADD ESP,0x4                         ; 00463cab
    PUSH 0x5bbd11                       ; 00463cae
    LEA ESI,[EBX + 0x2e8]               ; 00463cb3
    PUSH ESI                            ; 00463cb9
    CALL FUN_005a3d00                   ; 00463cba
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3d00()
    ADD ESP,0x8                         ; 00463cbf
    TEST EAX,EAX                        ; 00463cc2
    JNZ 0x00463cd5                      ; 00463cc4
        ;   XREF to: 00463cd5 (CONDITIONAL_JUMP)  ; LAB_00463cd5
    PUSH EBX                            ; 00463cc6
    PUSH 0x5bbd21                       ; 00463cc7
    PUSH ESI                            ; 00463ccc
    CALL FUN_005a28c0                   ; 00463ccd
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0xc                         ; 00463cd2
    PUSH 0x5bbd28                       ; 00463cd5
        ;   Label: LAB_00463cd5
    LEA ESI,[EBX + 0x34c]               ; 00463cda
    PUSH ESI                            ; 00463ce0
    CALL FUN_005a3d00                   ; 00463ce1
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3d00()
    ADD ESP,0x8                         ; 00463ce6
    TEST EAX,EAX                        ; 00463ce9
    JZ 0x00463cf0                       ; 00463ceb
        ;   XREF to: 00463cf0 (CONDITIONAL_JUMP)  ; LAB_00463cf0
    POP ESI                             ; 00463ced
    POP EBX                             ; 00463cee
    RET                                 ; 00463cef
    PUSH EBX                            ; 00463cf0
        ;   Label: LAB_00463cf0
    PUSH 0x5bbd39                       ; 00463cf1
    PUSH ESI                            ; 00463cf6
    CALL FUN_005a28c0                   ; 00463cf7
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0xc                         ; 00463cfc
    POP ESI                             ; 00463cff
    POP EBX                             ; 00463d00
    RET                                 ; 00463d01

