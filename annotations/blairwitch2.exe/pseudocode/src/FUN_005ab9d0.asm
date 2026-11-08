; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ab9d0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0059fc10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005ab9d0
        ;   Label: FUN_005ab9d0
    PUSH EDX                            ; 005ab9d4
    CALL FUN_0059fc10                   ; 005ab9d5
        ;   XREF to: 0059fc10 (UNCONDITIONAL_CALL)  ; undefined FUN_0059fc10()
    ADD ESP,0x4                         ; 005ab9da
    RET                                 ; 005ab9dd

