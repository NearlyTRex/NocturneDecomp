; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack wchar_t __watcallStack crt_string_c_mbtowc_peek_FUN_006059e0(char *str)
;
; Parameters:
; char *           Stack[0x4]:4   str
;
; XREF[6]:
;   crt_file.c_makepath_FUN_005febfc at 005fec8a
;   crt_file.c_splitpath_s_FUN_00610460 at 00610519
;   crt_locale.c_toupper_multibyte_FUN_0060f300 at 0060f36d
;   crt_string.c_splitpath_FUN_005ff178 at 005ff1bc
;   crt_string.c_strpbrk_FUN_0060c190 at 0060c1a8
;   crt_unknown.c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0 at 0060e5e9
;
; Referenced Globals:
;   int g_MultibyteLocaleActive
;   char[256] g_LeadByteTable
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 006059e0
        ;   Label: crt_string.c_mbtowc_peek_FUN_006059e0
    CMP dword ptr [0x03f9c020],0x0      ; 006059e4 | g_MultibyteLocaleActive
    JZ 0x00605a14                       ; 006059eb
        ;   XREF to: 00605a14 (CONDITIONAL_JUMP)  ; LAB_00605a14
    XOR EDX,EDX                         ; 006059ed
    MOV DL,byte ptr [EAX]               ; 006059ef
    MOV DL,byte ptr [EDX + 0x3f9c031]   ; 006059f1 | g_LeadByteTable
    AND DL,0x1                          ; 006059f7
    AND EDX,0xff                        ; 006059fa
    JZ 0x00605a14                       ; 00605a00
        ;   XREF to: 00605a14 (CONDITIONAL_JUMP)  ; LAB_00605a14
    XOR EDX,EDX                         ; 00605a02
    MOV DL,byte ptr [EAX]               ; 00605a04
    SHL EDX,0x8                         ; 00605a06
    MOV AL,byte ptr [EAX + 0x1]         ; 00605a09
    AND EAX,0xff                        ; 00605a0c
    OR EAX,EDX                          ; 00605a11
    RET                                 ; 00605a13
    MOV AL,byte ptr [EAX]               ; 00605a14
        ;   Label: LAB_00605a14
    AND EAX,0xff                        ; 00605a16
    RET                                 ; 00605a1b

