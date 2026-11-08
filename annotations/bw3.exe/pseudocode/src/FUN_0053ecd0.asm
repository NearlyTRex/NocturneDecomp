; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053ecd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[3]:
;   FUN_004a2e20 at 004a2e66
;   FUN_004e1070 at 004e1f28
;   FUN_00523800 at 0052394c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0053ecd0
        ;   Label: FUN_0053ecd0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0053ecd4
    MOV dword ptr [EAX + 0x15f698],0x3  ; 0053ecd8
    MOV dword ptr [EAX + 0x15f69c],EDX  ; 0053ece2
    MOV EDX,dword ptr [ESP + 0xc]       ; 0053ece8
    MOV dword ptr [EAX + 0x15f6a0],EDX  ; 0053ecec
    MOV EDX,dword ptr [ESP + 0x10]      ; 0053ecf2
    MOV dword ptr [EAX + 0x15f6a4],EDX  ; 0053ecf6
    MOV EDX,dword ptr [ESP + 0x14]      ; 0053ecfc
    MOV dword ptr [EAX + 0x15f6a8],EDX  ; 0053ed00
    RET                                 ; 0053ed06

