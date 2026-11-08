; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a2660(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0059fc10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a2660
        ;   Label: FUN_005a2660
    PUSH EDX                            ; 005a2664
    CALL FUN_0059fc10                   ; 005a2665
        ;   XREF to: 0059fc10 (UNCONDITIONAL_CALL)  ; undefined FUN_0059fc10()
    ADD ESP,0x4                         ; 005a266a
    RET                                 ; 005a266d

