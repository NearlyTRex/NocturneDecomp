; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a4820(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00509e10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a4820
        ;   Label: FUN_004a4820
    PUSH EDX                            ; 004a4824
    CALL FUN_00509e10                   ; 004a4825
        ;   XREF to: 00509e10 (UNCONDITIONAL_CALL)  ; undefined FUN_00509e10()
    ADD ESP,0x4                         ; 004a482a
    MOV dword ptr [EAX + 0x3c],0x5df9f4 ; 004a482d
    RET                                 ; 004a4834

