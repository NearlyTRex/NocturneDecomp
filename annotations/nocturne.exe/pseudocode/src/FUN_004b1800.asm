; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004b1800(int param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   FUN_004b1820 at 004b184e
;   FUN_004b1e10 at 004b1e5d
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b1800
        ;   Label: FUN_004b1800
    MOV EAX,dword ptr [EAX + 0x14]      ; 004b1804
    ADD EAX,EAX                         ; 004b1807
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b1809
    ADD EAX,0x2                         ; 004b180d
    IMUL EAX,EDX                        ; 004b1810
    MOV ECX,dword ptr [ESP + 0x8]       ; 004b1813
    ADD EAX,0x20                        ; 004b1817
    ADD EAX,ECX                         ; 004b181a
    RET                                 ; 004b181c

