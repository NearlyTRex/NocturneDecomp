; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c_get_int_arg_FUN_100069f0(va_list *parg)
;
; Parameters:
; va_list *        Stack[0x4]:4   parg
;
; XREF[1]:
;   crt_stdio.c__output_FUN_10005f40 at 10006051
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 100069f0
        ;   Label: crt_stdio.c_get_int_arg_FUN_100069f0
    MOV ECX,dword ptr [EAX]             ; 100069f4
    ADD ECX,0x4                         ; 100069f6
    MOV dword ptr [EAX],ECX             ; 100069f9
    MOV EAX,dword ptr [ECX + -0x4]      ; 100069fb
    RET                                 ; 100069fe

