; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005becf0(int param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005b8cf8 at 005b8d2b
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005becf0
        ;   Label: crt_unknown.c_FUN_005becf0
    SUB EAX,0x4                         ; 005becf4
    MOV EAX,dword ptr [EAX]             ; 005becf7
    AND AL,0xfe                         ; 005becf9
    SUB EAX,0x4                         ; 005becfb
    RET                                 ; 005becfe

