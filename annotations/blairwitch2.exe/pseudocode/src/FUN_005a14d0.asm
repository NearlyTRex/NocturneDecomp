; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a14d0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0059fc10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a14d0
        ;   Label: FUN_005a14d0
    PUSH EDX                            ; 005a14d4
    CALL FUN_0059fc10                   ; 005a14d5
        ;   XREF to: 0059fc10 (UNCONDITIONAL_CALL)  ; undefined FUN_0059fc10()
    ADD ESP,0x4                         ; 005a14da
    RET                                 ; 005a14dd

