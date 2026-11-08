; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053bb60(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00532b00 at 00532b14
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5e3c20                       ; 0053bb60
        ;   Label: FUN_0053bb60
    PUSH 0xfa                           ; 0053bb65
    MOV EDX,dword ptr [ESP + 0xc]       ; 0053bb6a
    PUSH EDX                            ; 0053bb6e
    CALL FUN_005a3de6                   ; 0053bb6f
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 0053bb74
    RET                                 ; 0053bb77

