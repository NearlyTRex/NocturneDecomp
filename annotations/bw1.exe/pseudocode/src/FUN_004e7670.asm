; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e7670(int param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   FUN_004e7690 at 004e76be
;   FUN_004e7c80 at 004e7ccd
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e7670
        ;   Label: FUN_004e7670
    MOV EAX,dword ptr [EAX + 0x14]      ; 004e7674
    ADD EAX,EAX                         ; 004e7677
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e7679
    ADD EAX,0x2                         ; 004e767d
    IMUL EAX,EDX                        ; 004e7680
    MOV ECX,dword ptr [ESP + 0x8]       ; 004e7683
    ADD EAX,0x20                        ; 004e7687
    ADD EAX,ECX                         ; 004e768a
    RET                                 ; 004e768c

