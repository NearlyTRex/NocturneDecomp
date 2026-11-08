; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a4870(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00509e30
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004a4870
        ;   Label: FUN_004a4870
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a4872
    PUSH EDX                            ; 004a4876
    CALL FUN_00509e30                   ; 004a4877
        ;   XREF to: 00509e30 (UNCONDITIONAL_CALL)  ; undefined FUN_00509e30()
    ADD ESP,0x8                         ; 004a487c
    RET                                 ; 004a487f

