; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005155d0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00515ae0 at 00515b72
;
; Referenced Globals:
;   undefined4 DAT_01d25f48
;   undefined4 DAT_01d25f4c
;   undefined4 DAT_01d25f50
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 005155d0
        ;   Label: FUN_005155d0
    MOV EAX,dword ptr [ESP + 0x4]       ; 005155d2
    MOV dword ptr [0x01d25f4c],EDX      ; 005155d6 | DAT_01d25f4c
    MOV dword ptr [0x01d25f50],EDX      ; 005155dc | DAT_01d25f50
    MOV [0x01d25f48],EAX                ; 005155e2 | DAT_01d25f48
    RET                                 ; 005155e7

