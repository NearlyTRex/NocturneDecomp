; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00548120(int param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   FUN_00548140 at 00548179
;   FUN_0054c1b0 at 0054c7f6
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00548120
        ;   Label: FUN_00548120
    MOV EAX,dword ptr [ESP + 0xc]       ; 00548124
    IMUL EAX,dword ptr [EDX + 0x1de78]  ; 00548128
    ADD EAX,dword ptr [ESP + 0x8]       ; 0054812f
    MOV EDX,dword ptr [EDX + 0x1ec90]   ; 00548133
    SHL EAX,0x4                         ; 00548139
    ADD EAX,EDX                         ; 0054813c
    RET                                 ; 0054813e

