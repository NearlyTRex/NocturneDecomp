; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047baf0(int param_1)
;
;
; XREF[5]:
;   FUN_0047bc60 at 0047bc70
;   FUN_0047bcf0 at 0047bd3e
;   FUN_0047bd50 at 0047bf30
;   FUN_0047c2c0 at 0047c6ad
;   FUN_0047e470 at 0047e85b
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0047baf0
        ;   Label: FUN_0047baf0
    MOV EAX,dword ptr [EDX + 0x134]     ; 0047baf4
    MOV dword ptr [EDX + 0x138],EAX     ; 0047bafa
    RET                                 ; 0047bb00

