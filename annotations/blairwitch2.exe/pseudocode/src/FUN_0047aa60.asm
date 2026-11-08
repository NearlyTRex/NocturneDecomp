; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047aa60(int param_1)
;
;
; XREF[5]:
;   FUN_0047abd0 at 0047abe0
;   FUN_0047ac60 at 0047acae
;   FUN_0047acc0 at 0047aea0
;   FUN_0047b1f0 at 0047b5ca
;   FUN_0047d270 at 0047d64e
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0047aa60
        ;   Label: FUN_0047aa60
    MOV EAX,dword ptr [EDX + 0x134]     ; 0047aa64
    MOV dword ptr [EDX + 0x138],EAX     ; 0047aa6a
    RET                                 ; 0047aa70

