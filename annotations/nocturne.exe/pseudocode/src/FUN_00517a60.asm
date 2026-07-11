; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00517a60(int param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   FUN_00517a80 at 00517ab9
;   FUN_0051b920 at 0051bf2d
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00517a60
        ;   Label: FUN_00517a60
    MOV EAX,dword ptr [ESP + 0xc]       ; 00517a64
    IMUL EAX,dword ptr [EDX + 0x28558]  ; 00517a68
    ADD EAX,dword ptr [ESP + 0x8]       ; 00517a6f
    MOV EDX,dword ptr [EDX + 0x29370]   ; 00517a73
    SHL EAX,0x4                         ; 00517a79
    ADD EAX,EDX                         ; 00517a7c
    RET                                 ; 00517a7e

