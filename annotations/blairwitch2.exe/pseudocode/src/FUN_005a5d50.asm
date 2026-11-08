; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a5d50(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a4920
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a5d50
        ;   Label: FUN_005a5d50
    PUSH EDX                            ; 005a5d54
    CALL FUN_005a4920                   ; 005a5d55
        ;   XREF to: 005a4920 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4920()
    ADD ESP,0x4                         ; 005a5d5a
    RET                                 ; 005a5d5d

