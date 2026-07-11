; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00403e10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_00403ef0 at 00403f37
;
; Called Functions:
;   FUN_00403bd0
;   FUN_00403ce0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403e10
        ;   Label: FUN_00403e10
    PUSH ESI                            ; 00403e11
    PUSH EDI                            ; 00403e12
    PUSH EBP                            ; 00403e13
    MOV EBX,dword ptr [ESP + 0x14]      ; 00403e14
    MOV ESI,dword ptr [ESP + 0x18]      ; 00403e18
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00403e1c
    MOV EDI,dword ptr [ESP + 0x20]      ; 00403e20
    PUSH EBP                            ; 00403e24
    PUSH ESI                            ; 00403e25
    PUSH EBX                            ; 00403e26
    CALL FUN_00403bd0                   ; 00403e27
        ;   XREF to: 00403bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00403bd0()
    ADD ESP,0xc                         ; 00403e2c
    PUSH EBP                            ; 00403e2f
    PUSH EDI                            ; 00403e30
    PUSH EBX                            ; 00403e31
    CALL FUN_00403bd0                   ; 00403e32
        ;   XREF to: 00403bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00403bd0()
    ADD ESP,0xc                         ; 00403e37
    PUSH EDI                            ; 00403e3a
    PUSH ESI                            ; 00403e3b
    PUSH EBX                            ; 00403e3c
    CALL FUN_00403ce0                   ; 00403e3d
        ;   XREF to: 00403ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_00403ce0()
    ADD ESP,0xc                         ; 00403e42
    PUSH EDI                            ; 00403e45
    PUSH ESI                            ; 00403e46
    PUSH EBP                            ; 00403e47
    CALL FUN_00403ce0                   ; 00403e48
        ;   XREF to: 00403ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_00403ce0()
    ADD ESP,0xc                         ; 00403e4d
    POP EBP                             ; 00403e50
    POP EDI                             ; 00403e51
    POP ESI                             ; 00403e52
    POP EBX                             ; 00403e53
    RET                                 ; 00403e54

