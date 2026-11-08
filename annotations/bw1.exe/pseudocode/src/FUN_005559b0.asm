; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005559b0(int param_1,int param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_00544460 at 00546f3e
;   FUN_005559d0 at 00555a07
;
; *****************************************************************************

section .text

    IMUL EAX,dword ptr [ESP + 0x8],0x1a4 ; 005559b0
        ;   Label: FUN_005559b0
    ADD EAX,dword ptr [ESP + 0x4]       ; 005559b8
    MOV EDX,dword ptr [ESP + 0xc]       ; 005559bc
    MOV dword ptr [EAX + 0x1a4],EDX     ; 005559c0
    RET                                 ; 005559c6

