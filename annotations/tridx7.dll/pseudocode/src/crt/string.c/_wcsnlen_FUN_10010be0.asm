; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; size_t __cdecl crt_string_c__wcsnlen_FUN_10010be0(wchar_t *str,size_t max)
;
; Parameters:
; wchar_t *        Stack[0x4]:4   str
; size_t           Stack[0x8]:4   max
;
; XREF[1]:
;   crt_stdlib.c__wcstombs_lk_FUN_10010970 at 100109bd
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 10010be0
        ;   Label: crt_string.c__wcsnlen_FUN_10010be0
    PUSH ESI                            ; 10010be4
    MOV ESI,ECX                         ; 10010be5
    MOV EAX,dword ptr [ESP + 0xc]       ; 10010be7
    MOV EDX,EAX                         ; 10010beb
    TEST EAX,EAX                        ; 10010bed
    JZ 0x10010bfd                       ; 10010bef
        ;   XREF to: 10010bfd (CONDITIONAL_JUMP)  ; LAB_10010bfd
    CMP word ptr [ESI],0x0              ; 10010bf1
        ;   Label: LAB_10010bf1
    JZ 0x10010bfd                       ; 10010bf5
        ;   XREF to: 10010bfd (CONDITIONAL_JUMP)  ; LAB_10010bfd
    ADD ESI,0x2                         ; 10010bf7
    DEC EDX                             ; 10010bfa
    JNZ 0x10010bf1                      ; 10010bfb
        ;   XREF to: 10010bf1 (CONDITIONAL_JUMP)  ; LAB_10010bf1
    TEST EDX,EDX                        ; 10010bfd
        ;   Label: LAB_10010bfd
    JZ 0x10010c0f                       ; 10010bff
        ;   XREF to: 10010c0f (CONDITIONAL_JUMP)  ; LAB_10010c0f
    CMP word ptr [ESI],0x0              ; 10010c01
    JNZ 0x10010c0f                      ; 10010c05
        ;   XREF to: 10010c0f (CONDITIONAL_JUMP)  ; LAB_10010c0f
    SUB ESI,ECX                         ; 10010c07
    SAR ESI,0x1                         ; 10010c09
    LEA EAX,[ESI + 0x1]                 ; 10010c0c
    POP ESI                             ; 10010c0f
        ;   Label: LAB_10010c0f
    RET                                 ; 10010c10

