; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a4a50(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dfa70                       ; 004a4a50
        ;   Label: FUN_004a4a50
    PUSH 0x100                          ; 004a4a55
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a4a5a
    PUSH EDX                            ; 004a4a5e
    CALL FUN_005a3de6                   ; 004a4a5f
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 004a4a64
    RET                                 ; 004a4a67

