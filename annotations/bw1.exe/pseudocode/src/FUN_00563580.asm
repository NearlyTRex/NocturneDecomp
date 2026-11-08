; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00563580(int param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   FUN_005635a0 at 005635d9
;   FUN_00567620 at 00567c66
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00563580
        ;   Label: FUN_00563580
    MOV EAX,dword ptr [ESP + 0xc]       ; 00563584
    IMUL EAX,dword ptr [EDX + 0x1de78]  ; 00563588
    ADD EAX,dword ptr [ESP + 0x8]       ; 0056358f
    MOV EDX,dword ptr [EDX + 0x1ec90]   ; 00563593
    SHL EAX,0x4                         ; 00563599
    ADD EAX,EDX                         ; 0056359c
    RET                                 ; 0056359e

