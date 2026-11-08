; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c4d60(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00508b50 at 00508b7c
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dbf20                       ; 004c4d60
        ;   Label: FUN_004c4d60
    PUSH 0x8                            ; 004c4d65
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c4d67
    PUSH EDX                            ; 004c4d6b
    CALL FUN_005a3de6                   ; 004c4d6c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 004c4d71
    RET                                 ; 004c4d74

