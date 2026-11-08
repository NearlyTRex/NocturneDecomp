; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004451a0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004eab00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004451a0
        ;   Label: FUN_004451a0
    PUSH EDX                            ; 004451a4
    CALL FUN_004eab00                   ; 004451a5
        ;   XREF to: 004eab00 (UNCONDITIONAL_CALL)  ; undefined FUN_004eab00()
    ADD ESP,0x4                         ; 004451aa
    RET                                 ; 004451ad

