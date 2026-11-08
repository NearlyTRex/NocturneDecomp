; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a47b0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00509e30
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004a47b0
        ;   Label: FUN_004a47b0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a47b2
    PUSH EDX                            ; 004a47b6
    CALL FUN_00509e30                   ; 004a47b7
        ;   XREF to: 00509e30 (UNCONDITIONAL_CALL)  ; undefined FUN_00509e30()
    ADD ESP,0x8                         ; 004a47bc
    RET                                 ; 004a47bf

