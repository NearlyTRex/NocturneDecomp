; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_string_c_wcsnlen_v3_FUN_10011000(wchar_t *str,int max)
;
; Parameters:
; wchar_t *        Stack[0x4]:4   str
; int              Stack[0x8]:4   max
;
; XREF[1]:
;   crt_locale.c___crtCompareStringA_v2_FUN_10010dc0 at 10010e40
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 10011000
        ;   Label: crt_string.c_wcsnlen_v3_FUN_10011000
    PUSH ESI                            ; 10011004
    PUSH EDI                            ; 10011005
    MOV ESI,ECX                         ; 10011006
    MOV EAX,dword ptr [ESP + 0x10]      ; 10011008
    TEST EAX,EAX                        ; 1001100c
    LEA EDX,[EAX + -0x1]                ; 1001100e
    JZ 0x10011023                       ; 10011011
        ;   XREF to: 10011023 (CONDITIONAL_JUMP)  ; LAB_10011023
    CMP word ptr [ESI],0x0              ; 10011013
        ;   Label: LAB_10011013
    JZ 0x10011029                       ; 10011017
        ;   XREF to: 10011029 (CONDITIONAL_JUMP)  ; LAB_10011029
    ADD ESI,0x2                         ; 10011019
    MOV EDI,EDX                         ; 1001101c
    DEC EDX                             ; 1001101e
    TEST EDI,EDI                        ; 1001101f
    JNZ 0x10011013                      ; 10011021
        ;   XREF to: 10011013 (CONDITIONAL_JUMP)  ; LAB_10011013
    CMP word ptr [ESI],0x0              ; 10011023
        ;   Label: LAB_10011023
    JNZ 0x10011030                      ; 10011027
        ;   XREF to: 10011030 (CONDITIONAL_JUMP)  ; LAB_10011030
    SUB ESI,ECX                         ; 10011029
        ;   Label: LAB_10011029
    SAR ESI,0x1                         ; 1001102b
    MOV EAX,ESI                         ; 1001102e
    POP EDI                             ; 10011030
        ;   Label: LAB_10011030
    POP ESI                             ; 10011031
    RET                                 ; 10011032

