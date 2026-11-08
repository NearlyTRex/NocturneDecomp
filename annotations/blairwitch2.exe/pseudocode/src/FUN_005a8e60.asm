; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a8e60(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a4920
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a8e60
        ;   Label: FUN_005a8e60
    PUSH EDX                            ; 005a8e64
    CALL FUN_005a4920                   ; 005a8e65
        ;   XREF to: 005a4920 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4920()
    ADD ESP,0x4                         ; 005a8e6a
    RET                                 ; 005a8e6d

