; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004adf70(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005993b0
;
; Called Functions:
;   FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5993b0                       ; 004adf70 | DAT_005993b0
        ;   Label: FUN_004adf70
    PUSH 0x19                           ; 004adf75
    MOV EDX,dword ptr [ESP + 0xc]       ; 004adf77
    PUSH EDX                            ; 004adf7b
    CALL FUN_0056494f                   ; 004adf7c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined FUN_0056494f()
    ADD ESP,0xc                         ; 004adf81
    RET                                 ; 004adf84

