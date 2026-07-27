; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00566b18(undefined4 param_1,int param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_00566b20 at 00566b4a
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00566b18
        ;   Label: crt_unknown.c_FUN_00566b18
    DEC dword ptr [EAX + 0x8]           ; 00566b1c
    RET                                 ; 00566b1f

