; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a9b60(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0059fc10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a9b60
        ;   Label: FUN_005a9b60
    PUSH EDX                            ; 005a9b64
    CALL FUN_0059fc10                   ; 005a9b65
        ;   XREF to: 0059fc10 (UNCONDITIONAL_CALL)  ; undefined FUN_0059fc10()
    ADD ESP,0x4                         ; 005a9b6a
    RET                                 ; 005a9b6d

