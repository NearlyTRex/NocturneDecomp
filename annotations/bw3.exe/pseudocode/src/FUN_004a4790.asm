; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a4790(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00509e10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a4790
        ;   Label: FUN_004a4790
    PUSH EDX                            ; 004a4794
    CALL FUN_00509e10                   ; 004a4795
        ;   XREF to: 00509e10 (UNCONDITIONAL_CALL)  ; undefined FUN_00509e10()
    ADD ESP,0x4                         ; 004a479a
    MOV dword ptr [EAX + 0x3c],0x5df994 ; 004a479d
    RET                                 ; 004a47a4

