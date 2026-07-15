; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdlib_c_atoi_FUN_1000ff10(char *str)
;
; Parameters:
; char *           Stack[0x4]:4   str
;
; XREF[1]:
;   crt_locale.c___get_qualified_locale_FUN_1000e350 at 1000e466
;
; Called Functions:
;   crt_stdlib.c_atol_FUN_1000fe60
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 1000ff10
        ;   Label: crt_stdlib.c_atoi_FUN_1000ff10
    PUSH EAX                            ; 1000ff14
    CALL crt_stdlib.c_atol_FUN_1000fe60 ; 1000ff15
        ;   XREF to: 1000fe60 (UNCONDITIONAL_CALL)  ; long crt_stdlib.c_atol_FUN_1000fe60(char * str)
    ADD ESP,0x4                         ; 1000ff1a
    RET                                 ; 1000ff1d

