; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004cadf0(int param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   FUN_004cae10 at 004cae3e
;   FUN_004cb400 at 004cb44d
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cadf0
        ;   Label: FUN_004cadf0
    MOV EAX,dword ptr [EAX + 0x14]      ; 004cadf4
    ADD EAX,EAX                         ; 004cadf7
    MOV EDX,dword ptr [ESP + 0xc]       ; 004cadf9
    ADD EAX,0x2                         ; 004cadfd
    IMUL EAX,EDX                        ; 004cae00
    MOV ECX,dword ptr [ESP + 0x8]       ; 004cae03
    ADD EAX,0x20                        ; 004cae07
    ADD EAX,ECX                         ; 004cae0a
    RET                                 ; 004cae0c

