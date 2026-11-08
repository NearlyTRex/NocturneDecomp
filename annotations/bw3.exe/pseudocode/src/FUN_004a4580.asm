; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a4580(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00509e10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a4580
        ;   Label: FUN_004a4580
    PUSH EDX                            ; 004a4584
    CALL FUN_00509e10                   ; 004a4585
        ;   XREF to: 00509e10 (UNCONDITIONAL_CALL)  ; undefined FUN_00509e10()
    ADD ESP,0x4                         ; 004a458a
    MOV dword ptr [EAX + 0x3c],0x5df934 ; 004a458d
    RET                                 ; 004a4594

