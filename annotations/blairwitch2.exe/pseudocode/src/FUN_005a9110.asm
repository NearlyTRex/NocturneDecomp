; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a9110(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a4920
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a9110
        ;   Label: FUN_005a9110
    PUSH EDX                            ; 005a9114
    CALL FUN_005a4920                   ; 005a9115
        ;   XREF to: 005a4920 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4920()
    ADD ESP,0x4                         ; 005a911a
    RET                                 ; 005a911d

