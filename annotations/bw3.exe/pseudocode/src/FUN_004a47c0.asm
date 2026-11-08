; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a47c0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00509e10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a47c0
        ;   Label: FUN_004a47c0
    PUSH EDX                            ; 004a47c4
    CALL FUN_00509e10                   ; 004a47c5
        ;   XREF to: 00509e10 (UNCONDITIONAL_CALL)  ; undefined FUN_00509e10()
    ADD ESP,0x4                         ; 004a47ca
    MOV dword ptr [EAX + 0x3c],0x5df9b4 ; 004a47cd
    RET                                 ; 004a47d4

