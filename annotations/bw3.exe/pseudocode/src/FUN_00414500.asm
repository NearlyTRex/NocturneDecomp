; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00414500(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dbf20                       ; 00414500
        ;   Label: FUN_00414500
    PUSH 0x4                            ; 00414505
    MOV EDX,dword ptr [ESP + 0xc]       ; 00414507
    PUSH EDX                            ; 0041450b
    CALL FUN_005a3de6                   ; 0041450c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 00414511
    RET                                 ; 00414514

