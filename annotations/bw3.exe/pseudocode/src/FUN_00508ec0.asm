; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00508ec0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00508b50 at 00508b5c
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dbf20                       ; 00508ec0
        ;   Label: FUN_00508ec0
    PUSH 0xf                            ; 00508ec5
    MOV EDX,dword ptr [ESP + 0xc]       ; 00508ec7
    PUSH EDX                            ; 00508ecb
    CALL FUN_005a3de6                   ; 00508ecc
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 00508ed1
    RET                                 ; 00508ed4

