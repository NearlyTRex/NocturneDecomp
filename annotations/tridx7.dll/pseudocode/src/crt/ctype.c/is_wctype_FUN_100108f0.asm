; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_ctype_c_is_wctype_FUN_100108f0(wint_t c,wctype_t mask)
;
; Parameters:
; wint_t           Stack[0x4]:2   c
; wctype_t         Stack[0x8]:2   mask
;
; Called Functions:
;   crt_ctype.c_iswctype_FUN_10010870
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 100108f0
        ;   Label: crt_ctype.c_is_wctype_FUN_100108f0
    MOV ECX,dword ptr [ESP + 0x4]       ; 100108f4
    PUSH EAX                            ; 100108f8
    PUSH ECX                            ; 100108f9
    CALL crt_ctype.c_iswctype_FUN_10010870 ; 100108fa
        ;   XREF to: 10010870 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_iswctype_FUN_10010870(wint_t c, wctype_t mask)
    ADD ESP,0x8                         ; 100108ff
    RET                                 ; 10010902

