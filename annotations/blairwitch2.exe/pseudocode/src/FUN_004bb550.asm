; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bb550(int param_1)
;
;
; XREF[1]:
;   FUN_00522350 at 00527c2c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004bb550
        ;   Label: FUN_004bb550
    MOV dword ptr [EAX + 0xb14],0x1     ; 004bb554
    FLD float ptr [EAX + 0xb00]         ; 004bb55e
    MOV EDX,dword ptr [EAX + 0xaf8]     ; 004bb564
    MOV dword ptr [EAX + 0xaf4],EDX     ; 004bb56a
    FSTP float ptr [EAX + 0xb04]        ; 004bb570
    RET                                 ; 004bb576

