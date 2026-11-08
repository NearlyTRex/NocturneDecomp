; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a4740(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0059fc10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a4740
        ;   Label: FUN_005a4740
    PUSH EDX                            ; 005a4744
    CALL FUN_0059fc10                   ; 005a4745
        ;   XREF to: 0059fc10 (UNCONDITIONAL_CALL)  ; undefined FUN_0059fc10()
    ADD ESP,0x4                         ; 005a474a
    RET                                 ; 005a474d

