; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004eacc0(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_004eac30 at 004eac62
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004eacc0
        ;   Label: FUN_004eacc0
    MOV dword ptr [EAX + 0x6f4],0x3f800000 ; 004eacc4
    MOV EDX,dword ptr [ESP + 0xc]       ; 004eacce
    FLD float ptr [EAX + 0x6f4]         ; 004eacd2
    MOV dword ptr [EAX + 0x6e8],EDX     ; 004eacd8
    MOV EDX,dword ptr [ESP + 0x8]       ; 004eacde
    FSTP float ptr [EAX + 0x6f0]        ; 004eace2
    MOV dword ptr [EAX + 0x6ec],EDX     ; 004eace8
    RET                                 ; 004eacee

