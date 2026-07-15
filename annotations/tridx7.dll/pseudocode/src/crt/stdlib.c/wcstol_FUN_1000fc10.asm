; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; long __cdecl crt_stdlib_c_wcstol_FUN_1000fc10(wchar_t *nptr,wchar_t **endptr,int base)
;
; Parameters:
; wchar_t *        Stack[0x4]:4   nptr
; wchar_t * *      Stack[0x8]:4   endptr
; int              Stack[0xc]:4   base
;
; XREF[1]:
;   crt_locale.c___get_qualified_locale_FUN_1000e350 at 1000e54f
;
; Called Functions:
;   crt_stdlib.c_wcstoxl_FUN_1000fc30
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0xc]       ; 1000fc10
        ;   Label: crt_stdlib.c_wcstol_FUN_1000fc10
    PUSH 0x0                            ; 1000fc14
    MOV ECX,dword ptr [ESP + 0xc]       ; 1000fc16
    PUSH EAX                            ; 1000fc1a
    MOV EDX,dword ptr [ESP + 0xc]       ; 1000fc1b
    PUSH ECX                            ; 1000fc1f
    PUSH EDX                            ; 1000fc20
    CALL crt_stdlib.c_wcstoxl_FUN_1000fc30 ; 1000fc21
        ;   XREF to: 1000fc30 (UNCONDITIONAL_CALL)  ; ulong crt_stdlib.c_wcstoxl_FUN_1000fc30(wchar_t * nptr, wchar_t * * endptr, int base, int flags)
    ADD ESP,0x10                        ; 1000fc26
    RET                                 ; 1000fc29

