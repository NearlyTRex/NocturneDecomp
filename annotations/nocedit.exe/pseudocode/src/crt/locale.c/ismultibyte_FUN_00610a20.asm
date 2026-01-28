; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int __watcallStack crt_locale_c_ismultibyte_FUN_00610a20(wchar_t character)
;
; Parameters:
; wchar_t          Stack[0x4]:2   character
;
; XREF[1]:
;   crt_locale.c_islower_multibyte_FUN_00610990 at 00610996
;
; Referenced Globals:
;   int g_MultibyteLocaleActive
;   char[256] g_LeadByteTable
;
; Called Functions:
;   crt_locale.c_istrailbyte_FUN_00610a70
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00610a20
        ;   Label: crt_locale.c_ismultibyte_FUN_00610a20
    CMP dword ptr [0x03f9c020],0x0      ; 00610a24 | g_MultibyteLocaleActive
    JZ 0x00610a60                       ; 00610a2b
        ;   XREF to: 00610a60 (CONDITIONAL_JUMP)  ; LAB_00610a60
    MOV EAX,EDX                         ; 00610a2d
    SHR EAX,0x8                         ; 00610a2f
    AND EAX,0xff                        ; 00610a32
    MOV AL,byte ptr [EAX + 0x3f9c031]   ; 00610a37 | g_LeadByteTable
    AND AL,0x1                          ; 00610a3d
    AND EAX,0xff                        ; 00610a3f
    JZ 0x00610a60                       ; 00610a44
        ;   XREF to: 00610a60 (CONDITIONAL_JUMP)  ; LAB_00610a60
    MOV EAX,EDX                         ; 00610a46
    AND EAX,0xff                        ; 00610a48
    PUSH EAX                            ; 00610a4d
    CALL crt_locale.c_istrailbyte_FUN_00610a70 ; 00610a4e
        ;   XREF to: 00610a70 (UNCONDITIONAL_CALL)  ; int crt_locale.c_istrailbyte_FUN_00610a70(uchar byte_value)
    ADD ESP,0x4                         ; 00610a53
    TEST EAX,EAX                        ; 00610a56
    JZ 0x00610a60                       ; 00610a58
        ;   XREF to: 00610a60 (CONDITIONAL_JUMP)  ; LAB_00610a60
    MOV EAX,0x1                         ; 00610a5a
    RET                                 ; 00610a5f
    XOR EAX,EAX                         ; 00610a60
        ;   Label: LAB_00610a60
    RET                                 ; 00610a62

