; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053d710(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0053c5c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0053d710
        ;   Label: FUN_0053d710
    PUSH EDX                            ; 0053d714
    CALL FUN_0053c5c0                   ; 0053d715
        ;   XREF to: 0053c5c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053c5c0()
    ADD ESP,0x4                         ; 0053d71a
    MOV dword ptr [EAX + 0x194],0x604aa4 ; 0053d71d
    RET                                 ; 0053d727

