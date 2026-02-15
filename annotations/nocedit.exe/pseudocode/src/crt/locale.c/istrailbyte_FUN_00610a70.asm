; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_locale_c_istrailbyte_FUN_00610a70(uchar byte_value)
;
; Parameters:
; uchar            Stack[0x4]:1   byte_value
;
; XREF[1]:
;   crt_locale.c_ismultibyte_FUN_00610a20 at 00610a4e
;
; Referenced Globals:
;   uint g_CodePage = 0x1
;   char[256] g_ShiftJIS_TrailByteTable
;   int g_MultibyteLocaleActive
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00610a70
        ;   Label: crt_locale.c_istrailbyte_FUN_00610a70
    CMP dword ptr [0x03f9c020],0x0      ; 00610a74 | g_MultibyteLocaleActive
    JZ 0x00610aa6                       ; 00610a7b
        ;   XREF to: 00610aa6 (CONDITIONAL_JUMP)  ; LAB_00610aa6
    CMP dword ptr [0x00685570],0x3a4    ; 00610a7d | g_CodePage
    JZ 0x00610a93                       ; 00610a87
        ;   XREF to: 00610a93 (CONDITIONAL_JUMP)  ; LAB_00610a93
    TEST EAX,EAX                        ; 00610a89
    JZ 0x00610aa8                       ; 00610a8b
        ;   XREF to: 00610aa8 (CONDITIONAL_JUMP)  ; LAB_00610aa8
    MOV EAX,0x1                         ; 00610a8d
    RET                                 ; 00610a92
    AND EAX,0xff                        ; 00610a93
        ;   Label: LAB_00610a93
    MOV AL,byte ptr [EAX + 0x68562d]    ; 00610a98 | g_ShiftJIS_TrailByteTable
    AND AL,0x8                          ; 00610a9e
    AND EAX,0xff                        ; 00610aa0
    RET                                 ; 00610aa5
    XOR EAX,EAX                         ; 00610aa6
        ;   Label: LAB_00610aa6
    RET                                 ; 00610aa8
        ;   Label: LAB_00610aa8

