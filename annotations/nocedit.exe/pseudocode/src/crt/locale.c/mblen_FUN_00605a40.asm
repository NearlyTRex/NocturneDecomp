; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_locale_c_mblen_FUN_00605a40(char *mb_string)
;
; Parameters:
; char *           Stack[0x4]:4   mb_string
;
; XREF[5]:
;   crt_file.c_makepath_FUN_005febfc at 005feca6
;   crt_locale.c_mbtowc_FUN_0060b1c0 at 0060b21e
;   crt_string.c_char_in_set_FUN_0060e340 at 0060e35b
;   crt_string.c_mbstrnbytes_FUN_00605ec0 at 00605eff
;   crt_string.c_mbstrnlen_FUN_00605e50 at 00605e6f
;
; Referenced Globals:
;   int g_MultibyteLocaleActive
;   char[256] g_LeadByteTable
;
; *****************************************************************************

section .text

    CMP dword ptr [0x03f9c020],0x0      ; 00605a40 | g_MultibyteLocaleActive
        ;   Label: crt_locale.c_mblen_FUN_00605a40
    JZ 0x00605a66                       ; 00605a47
        ;   XREF to: 00605a66 (CONDITIONAL_JUMP)  ; LAB_00605a66
    MOV EDX,dword ptr [ESP + 0x4]       ; 00605a49
    XOR EAX,EAX                         ; 00605a4d
    MOV AL,byte ptr [EDX]               ; 00605a4f
    MOV AL,byte ptr [EAX + 0x3f9c031]   ; 00605a51 | g_LeadByteTable
    AND AL,0x1                          ; 00605a57
    AND EAX,0xff                        ; 00605a59
    JZ 0x00605a66                       ; 00605a5e
        ;   XREF to: 00605a66 (CONDITIONAL_JUMP)  ; LAB_00605a66
    MOV EAX,0x2                         ; 00605a60
    RET                                 ; 00605a65
    MOV EAX,0x1                         ; 00605a66
        ;   Label: LAB_00605a66
    RET                                 ; 00605a6b

