; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047aa00(undefined4 *param_1)
;
;
; XREF[3]:
;   FUN_0047a9e0 at 0047a9e6
;   FUN_00480f70 at 00480f89
;   FUN_004d9780 at 004d97da
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0047aa00
        ;   Label: FUN_0047aa00
    MOV dword ptr [EAX + 0xc84],0x0     ; 0047aa04
    MOV dword ptr [EAX + 0x258c],0x0    ; 0047aa0e
    MOV dword ptr [EAX + 0x3210],0x0    ; 0047aa18
    MOV dword ptr [EAX + 0x337c],0x0    ; 0047aa22
    MOV dword ptr [EAX + 0x34e8],0x0    ; 0047aa2c
    MOV dword ptr [EAX + 0x3ac8],0x0    ; 0047aa36
    MOV dword ptr [EAX],0x0             ; 0047aa40
    RET                                 ; 0047aa46

