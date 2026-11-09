; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005a9e60(int param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005a3e68 at 005a3e9b
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a9e60
        ;   Label: crt_unknown.c_FUN_005a9e60
    SUB EAX,0x4                         ; 005a9e64
    MOV EAX,dword ptr [EAX]             ; 005a9e67
    AND AL,0xfe                         ; 005a9e69
    SUB EAX,0x4                         ; 005a9e6b
    RET                                 ; 005a9e6e

