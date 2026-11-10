; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005caa4c(int param_1)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005cab54 at 005cab64
;   crt_unknown.c_FUN_005cadb4 at 005cae13
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005caa4c
        ;   Label: crt_unknown.c_FUN_005caa4c
    MOV dword ptr [EAX + 0x8],0x0       ; 005caa50
    MOV dword ptr [EAX + 0xc],0x0       ; 005caa57
    RET                                 ; 005caa5e

