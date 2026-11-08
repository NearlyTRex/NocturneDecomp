; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a45a0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00509e30
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004a45a0
        ;   Label: FUN_004a45a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a45a2
    PUSH EDX                            ; 004a45a6
    CALL FUN_00509e30                   ; 004a45a7
        ;   XREF to: 00509e30 (UNCONDITIONAL_CALL)  ; undefined FUN_00509e30()
    ADD ESP,0x8                         ; 004a45ac
    RET                                 ; 004a45af

