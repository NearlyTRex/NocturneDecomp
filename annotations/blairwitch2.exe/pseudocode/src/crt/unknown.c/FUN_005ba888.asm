; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005ba888(undefined4 param_1,int param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005ba890 at 005ba8ba
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005ba888
        ;   Label: crt_unknown.c_FUN_005ba888
    DEC dword ptr [EAX + 0x8]           ; 005ba88c
    RET                                 ; 005ba88f

