; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a5b58(undefined4 param_1,int param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005a5b60 at 005a5b8a
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005a5b58
        ;   Label: crt_unknown.c_FUN_005a5b58
    DEC dword ptr [EAX + 0x8]           ; 005a5b5c
    RET                                 ; 005a5b5f

