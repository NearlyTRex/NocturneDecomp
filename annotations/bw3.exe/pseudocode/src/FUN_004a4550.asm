; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a4550(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00509e10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a4550
        ;   Label: FUN_004a4550
    PUSH EDX                            ; 004a4554
    CALL FUN_00509e10                   ; 004a4555
        ;   XREF to: 00509e10 (UNCONDITIONAL_CALL)  ; undefined FUN_00509e10()
    ADD ESP,0x4                         ; 004a455a
    MOV dword ptr [EAX + 0x3c],0x5df914 ; 004a455d
    RET                                 ; 004a4564

