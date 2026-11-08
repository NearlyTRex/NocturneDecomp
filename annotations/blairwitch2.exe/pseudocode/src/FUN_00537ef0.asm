; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00537ef0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[3]:
;   FUN_0049db20 at 0049db66
;   FUN_004e2e70 at 004e2ffd
;   FUN_0056ca10 at 0056cb5c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00537ef0
        ;   Label: FUN_00537ef0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00537ef4
    MOV dword ptr [EAX + 0x15f694],0x3  ; 00537ef8
    MOV dword ptr [EAX + 0x15f698],EDX  ; 00537f02
    MOV EDX,dword ptr [ESP + 0xc]       ; 00537f08
    MOV dword ptr [EAX + 0x15f69c],EDX  ; 00537f0c
    MOV EDX,dword ptr [ESP + 0x10]      ; 00537f12
    MOV dword ptr [EAX + 0x15f6a0],EDX  ; 00537f16
    MOV EDX,dword ptr [ESP + 0x14]      ; 00537f1c
    MOV dword ptr [EAX + 0x15f6a4],EDX  ; 00537f20
    RET                                 ; 00537f26

