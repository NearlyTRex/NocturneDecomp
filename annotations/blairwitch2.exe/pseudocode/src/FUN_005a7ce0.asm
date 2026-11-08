; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a7ce0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a4930
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a7ce0
        ;   Label: FUN_005a7ce0
    PUSH EDX                            ; 005a7ce4
    CALL FUN_005a4930                   ; 005a7ce5
        ;   XREF to: 005a4930 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4930()
    ADD ESP,0x4                         ; 005a7cea
    RET                                 ; 005a7ced

