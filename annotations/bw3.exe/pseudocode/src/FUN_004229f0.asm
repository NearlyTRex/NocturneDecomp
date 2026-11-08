; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004229f0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00421300 at 00421531
;
; Called Functions:
;   FUN_00423bc0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004229f0
        ;   Label: FUN_004229f0
    PUSH EDX                            ; 004229f4
    CALL FUN_00423bc0                   ; 004229f5
        ;   XREF to: 00423bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00423bc0()
    ADD ESP,0x4                         ; 004229fa
    RET                                 ; 004229fd

