; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cc020(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005a0210
;
; Called Functions:
;   FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a0210                       ; 004cc020 | DAT_005a0210
        ;   Label: FUN_004cc020
    PUSH 0xc                            ; 004cc025
    MOV EDX,dword ptr [ESP + 0xc]       ; 004cc027
    PUSH EDX                            ; 004cc02b
    CALL FUN_0056494f                   ; 004cc02c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined FUN_0056494f()
    ADD ESP,0xc                         ; 004cc031
    RET                                 ; 004cc034

