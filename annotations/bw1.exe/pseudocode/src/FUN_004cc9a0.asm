; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cc9a0(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_00504400 at 00504503
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cc9a0
        ;   Label: FUN_004cc9a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004cc9a4
    MOV dword ptr [EAX + 0x9f0],EDX     ; 004cc9a8
    MOV EDX,dword ptr [ESP + 0xc]       ; 004cc9ae
    MOV dword ptr [EAX + 0x9f4],EDX     ; 004cc9b2
    RET                                 ; 004cc9b8

