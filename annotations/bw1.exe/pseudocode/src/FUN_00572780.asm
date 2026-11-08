; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00572780(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[3]:
;   FUN_004aee60 at 004aeef9
;   FUN_005057c0 at 005058a7
;   FUN_0057bef0 at 0057c4c8
;
; Referenced Globals:
;   undefined4 DAT_02c78cec
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02c78cec]      ; 00572780 | DAT_02c78cec
        ;   Label: FUN_00572780
    LEA EAX,[EDX*0x4 + 0x0]             ; 00572786
    SUB EAX,EDX                         ; 0057278d
    SHL EAX,0x5                         ; 0057278f
    MOV EDX,dword ptr [ESP + 0x4]       ; 00572792
    MOV dword ptr [EAX + 0x2c78cf4],EDX ; 00572796
    MOV EDX,dword ptr [ESP + 0x8]       ; 0057279c
    MOV dword ptr [EAX + 0x2c78cf8],EDX ; 005727a0
    MOV EDX,dword ptr [ESP + 0xc]       ; 005727a6
    MOV dword ptr [EAX + 0x2c78cfc],EDX ; 005727aa
    MOV EDX,dword ptr [ESP + 0x10]      ; 005727b0
    MOV dword ptr [EAX + 0x2c78d00],EDX ; 005727b4
    MOV EDX,dword ptr [ESP + 0x14]      ; 005727ba
    MOV dword ptr [EAX + 0x2c78d04],EDX ; 005727be
    MOV EDX,dword ptr [ESP + 0x18]      ; 005727c4
    MOV dword ptr [EAX + 0x2c78d08],EDX ; 005727c8
    XOR EDX,EDX                         ; 005727ce
    MOV dword ptr [EAX + 0x2c78d0c],EDX ; 005727d0
    MOV dword ptr [EAX + 0x2c78d10],EDX ; 005727d6
    RET                                 ; 005727dc

