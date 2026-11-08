; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00540f10(int param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   FUN_00540f30 at 00540f69
;   FUN_00544f80 at 005455c8
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00540f10
        ;   Label: FUN_00540f10
    MOV EAX,dword ptr [ESP + 0xc]       ; 00540f14
    IMUL EAX,dword ptr [EDX + 0x1d1f8]  ; 00540f18
    ADD EAX,dword ptr [ESP + 0x8]       ; 00540f1f
    MOV EDX,dword ptr [EDX + 0x1e010]   ; 00540f23
    SHL EAX,0x4                         ; 00540f29
    ADD EAX,EDX                         ; 00540f2c
    RET                                 ; 00540f2e

