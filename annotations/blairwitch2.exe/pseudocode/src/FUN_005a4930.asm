; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a4930(undefined4 param_1)
;
;
; XREF[6]:
;   FUN_005a5450 at 005a5455
;   FUN_005a5d60 at 005a5d65
;   FUN_005a6750 at 005a6755
;   FUN_005a7ce0 at 005a7ce5
;   FUN_005a8e70 at 005a8e75
;   FUN_005a9120 at 005a9125
;
; Called Functions:
;   FUN_0059fc10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a4930
        ;   Label: FUN_005a4930
    PUSH EDX                            ; 005a4934
    CALL FUN_0059fc10                   ; 005a4935
        ;   XREF to: 0059fc10 (UNCONDITIONAL_CALL)  ; undefined FUN_0059fc10()
    ADD ESP,0x4                         ; 005a493a
    RET                                 ; 005a493d

