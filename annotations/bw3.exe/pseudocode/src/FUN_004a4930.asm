; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a4930(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dfc90                       ; 004a4930
        ;   Label: FUN_004a4930
    PUSH 0x100                          ; 004a4935
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a493a
    PUSH EDX                            ; 004a493e
    CALL FUN_005a3de6                   ; 004a493f
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 004a4944
    RET                                 ; 004a4947

