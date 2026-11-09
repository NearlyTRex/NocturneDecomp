; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c6ff0(int param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c10e8 at 005c111b
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005c6ff0
        ;   Label: crt_unknown.c_FUN_005c6ff0
    SUB EAX,0x4                         ; 005c6ff4
    MOV EAX,dword ptr [EAX]             ; 005c6ff7
    AND AL,0xfe                         ; 005c6ff9
    SUB EAX,0x4                         ; 005c6ffb
    RET                                 ; 005c6ffe

