; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a4850(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00509e10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a4850
        ;   Label: FUN_004a4850
    PUSH EDX                            ; 004a4854
    CALL FUN_00509e10                   ; 004a4855
        ;   XREF to: 00509e10 (UNCONDITIONAL_CALL)  ; undefined FUN_00509e10()
    ADD ESP,0x4                         ; 004a485a
    MOV dword ptr [EAX + 0x3c],0x5dfa14 ; 004a485d
    RET                                 ; 004a4864

