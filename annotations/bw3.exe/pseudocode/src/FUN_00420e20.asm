; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00420e20(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dcb50                       ; 00420e20
        ;   Label: FUN_00420e20
    PUSH 0x8                            ; 00420e25
    MOV EDX,dword ptr [ESP + 0xc]       ; 00420e27
    PUSH EDX                            ; 00420e2b
    CALL FUN_005a3de6                   ; 00420e2c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 00420e31
    RET                                 ; 00420e34

