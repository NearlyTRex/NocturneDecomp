; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a47f0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00509e10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a47f0
        ;   Label: FUN_004a47f0
    PUSH EDX                            ; 004a47f4
    CALL FUN_00509e10                   ; 004a47f5
        ;   XREF to: 00509e10 (UNCONDITIONAL_CALL)  ; undefined FUN_00509e10()
    ADD ESP,0x4                         ; 004a47fa
    MOV dword ptr [EAX + 0x3c],0x5df9d4 ; 004a47fd
    RET                                 ; 004a4804

