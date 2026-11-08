; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d0000(int param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   FUN_004d0020 at 004d004e
;   FUN_004d0610 at 004d065d
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d0000
        ;   Label: FUN_004d0000
    MOV EAX,dword ptr [EAX + 0x14]      ; 004d0004
    ADD EAX,EAX                         ; 004d0007
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d0009
    ADD EAX,0x2                         ; 004d000d
    IMUL EAX,EDX                        ; 004d0010
    MOV ECX,dword ptr [ESP + 0x8]       ; 004d0013
    ADD EAX,0x20                        ; 004d0017
    ADD EAX,ECX                         ; 004d001a
    RET                                 ; 004d001c

