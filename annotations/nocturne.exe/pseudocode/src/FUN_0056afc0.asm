; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0056afc0(int param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_00564a88 at 00564abb
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056afc0
        ;   Label: FUN_0056afc0
    SUB EAX,0x4                         ; 0056afc4
    MOV EAX,dword ptr [EAX]             ; 0056afc7
    AND AL,0xfe                         ; 0056afc9
    SUB EAX,0x4                         ; 0056afcb
    RET                                 ; 0056afce

