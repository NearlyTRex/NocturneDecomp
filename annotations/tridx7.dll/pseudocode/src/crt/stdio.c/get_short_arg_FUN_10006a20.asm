; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; short __cdecl crt_stdio_c_get_short_arg_FUN_10006a20(va_list *parg)
;
; Parameters:
; va_list *        Stack[0x4]:4   parg
;
; XREF[1]:
;   crt_stdio.c__output_FUN_10005f40 at 100061f8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 10006a20
        ;   Label: crt_stdio.c_get_short_arg_FUN_10006a20
    MOV ECX,dword ptr [EAX]             ; 10006a24
    ADD ECX,0x4                         ; 10006a26
    MOV dword ptr [EAX],ECX             ; 10006a29
    MOV AX,word ptr [ECX + -0x4]        ; 10006a2b
    RET                                 ; 10006a2f

