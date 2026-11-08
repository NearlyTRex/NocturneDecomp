; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a4760(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00509e30
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004a4760
        ;   Label: FUN_004a4760
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a4762
    PUSH EDX                            ; 004a4766
    CALL FUN_00509e30                   ; 004a4767
        ;   XREF to: 00509e30 (UNCONDITIONAL_CALL)  ; undefined FUN_00509e30()
    ADD ESP,0x8                         ; 004a476c
    RET                                 ; 004a476f

