; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005ad8bc(int param_1)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005ad9c4 at 005ad9d4
;   crt_unknown.c_FUN_005adc24 at 005adc83
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ad8bc
        ;   Label: crt_unknown.c_FUN_005ad8bc
    MOV dword ptr [EAX + 0x8],0x0       ; 005ad8c0
    MOV dword ptr [EAX + 0xc],0x0       ; 005ad8c7
    RET                                 ; 005ad8ce

