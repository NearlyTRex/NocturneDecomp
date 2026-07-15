; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ulong __cdecl crt_stdlib_c_wcstoul_FUN_1000fe40(wchar_t *nptr,wchar_t **endptr,int base)
;
; Parameters:
; wchar_t *        Stack[0x4]:4   nptr
; wchar_t * *      Stack[0x8]:4   endptr
; int              Stack[0xc]:4   base
;
; Called Functions:
;   crt_stdlib.c_wcstoxl_FUN_1000fc30
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0xc]       ; 1000fe40
        ;   Label: crt_stdlib.c_wcstoul_FUN_1000fe40
    PUSH 0x1                            ; 1000fe44
    MOV ECX,dword ptr [ESP + 0xc]       ; 1000fe46
    PUSH EAX                            ; 1000fe4a
    MOV EDX,dword ptr [ESP + 0xc]       ; 1000fe4b
    PUSH ECX                            ; 1000fe4f
    PUSH EDX                            ; 1000fe50
    CALL crt_stdlib.c_wcstoxl_FUN_1000fc30 ; 1000fe51
        ;   XREF to: 1000fc30 (UNCONDITIONAL_CALL)  ; ulong crt_stdlib.c_wcstoxl_FUN_1000fc30(wchar_t * nptr, wchar_t * * endptr, int base, int flags)
    ADD ESP,0x10                        ; 1000fe56
    RET                                 ; 1000fe59

