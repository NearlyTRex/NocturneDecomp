; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c2c68(undefined4 param_1,int param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c2c70 at 005c2c9a
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005c2c68
        ;   Label: crt_unknown.c_FUN_005c2c68
    DEC dword ptr [EAX + 0x8]           ; 005c2c6c
    RET                                 ; 005c2c6f

