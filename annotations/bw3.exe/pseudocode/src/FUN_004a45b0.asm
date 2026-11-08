; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a45b0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00509e10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a45b0
        ;   Label: FUN_004a45b0
    PUSH EDX                            ; 004a45b4
    CALL FUN_00509e10                   ; 004a45b5
        ;   XREF to: 00509e10 (UNCONDITIONAL_CALL)  ; undefined FUN_00509e10()
    ADD ESP,0x4                         ; 004a45ba
    MOV dword ptr [EAX + 0x3c],0x5df954 ; 004a45bd
    RET                                 ; 004a45c4

