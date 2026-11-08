; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005add50(int param_1,undefined4 param_2)
;
;
; XREF[3]:
;   FUN_004105b0 at 004105bd
;   FUN_00509a70 at 00509a84
;   FUN_00598f90 at 00598fae
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005add50
        ;   Label: FUN_005add50
    MOV EAX,dword ptr [ESP + 0x8]       ; 005add54
    MOV dword ptr [EDX + 0x2d4],EAX     ; 005add58
    RET                                 ; 005add5e

