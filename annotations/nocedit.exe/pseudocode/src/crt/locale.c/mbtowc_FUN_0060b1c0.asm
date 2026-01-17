; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int crt_locale.c_mbtowc_FUN_0060b1c0(wchar_t * wide_char, char * mb_string, SIZE_T max_bytes)
;
; Parameters:
; wchar_t *        Stack[0x4]:4   wide_char
; char *           Stack[0x8]:4   mb_string
; typedef SIZE_T ULONG_PTR Stack[0xc]:4   max_bytes
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   crt_stdio.c_scanf_char_FUN_00604d54 at 00604e13
;   crt_stdio.c_scanf_string_FUN_00604e4c at 00604f3a
;   crt_unknown.c_FUN_0060fac0 at 0060fae3
;
; Referenced Globals:
;   MultiByteToWideChar* g_MultiByteToWideCharFunc = 00212092
;   uint g_CodePage = 0x1
;   int g_MultibyteLocaleActive
;   char[256] g_LeadByteTable
;
; Called Functions:
;   crt_locale.c_mblen_FUN_00605a40
;   MultiByteToWideChar
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060b1c0
        ;   Label: crt_locale.c_mbtowc_FUN_0060b1c0
    PUSH ESI                            ; 0060b1c1
    PUSH EDI                            ; 0060b1c2
    PUSH EBP                            ; 0060b1c3
    MOV EBP,ESP                         ; 0060b1c4
    SUB ESP,0x4                         ; 0060b1c6
    MOV ESI,dword ptr [EBP + 0x14]      ; 0060b1c9
    MOV EBX,dword ptr [EBP + 0x18]      ; 0060b1cc
    TEST EBX,EBX                        ; 0060b1cf
    JNZ 0x0060b1da                      ; 0060b1d1
        ;   XREF to: 0060b1da (CONDITIONAL_JUMP)  ; LAB_0060b1da
    XOR EAX,EAX                         ; 0060b1d3
    JMP 0x0060b265                      ; 0060b1d5
        ;   XREF to: 0060b265 (UNCONDITIONAL_JUMP)  ; LAB_0060b265
    CMP dword ptr [EBP + 0x1c],0x0      ; 0060b1da
        ;   Label: LAB_0060b1da
    JBE 0x0060b260                      ; 0060b1de
        ;   XREF to: 0060b260 (CONDITIONAL_JUMP)  ; LAB_0060b260
    CMP byte ptr [EBX],0x0              ; 0060b1e4
    JNZ 0x0060b1fb                      ; 0060b1e7
        ;   XREF to: 0060b1fb (CONDITIONAL_JUMP)  ; LAB_0060b1fb
    TEST ESI,ESI                        ; 0060b1e9
    JZ 0x0060b1f2                       ; 0060b1eb
        ;   XREF to: 0060b1f2 (CONDITIONAL_JUMP)  ; LAB_0060b1f2
    MOV word ptr [ESI],0x0              ; 0060b1ed
    XOR EAX,EAX                         ; 0060b1f2
        ;   Label: LAB_0060b1f2
    MOV ESP,EBP                         ; 0060b1f4
    POP EBP                             ; 0060b1f6
    POP EDI                             ; 0060b1f7
    POP ESI                             ; 0060b1f8
    POP EBX                             ; 0060b1f9
    RET                                 ; 0060b1fa
    CMP dword ptr [0x03f9c020],0x0      ; 0060b1fb | g_MultibyteLocaleActive
        ;   Label: LAB_0060b1fb
    JZ 0x0060b21d                       ; 0060b202
        ;   XREF to: 0060b21d (CONDITIONAL_JUMP)  ; LAB_0060b21d
    XOR EAX,EAX                         ; 0060b204
    MOV AL,byte ptr [EBX]               ; 0060b206
    MOV AL,byte ptr [EAX + 0x3f9c031]   ; 0060b208 | g_LeadByteTable
    AND AL,0x1                          ; 0060b20e
    AND EAX,0xff                        ; 0060b210
    JZ 0x0060b21d                       ; 0060b215
        ;   XREF to: 0060b21d (CONDITIONAL_JUMP)  ; LAB_0060b21d
    CMP byte ptr [EBX + 0x1],0x0        ; 0060b217
    JZ 0x0060b260                       ; 0060b21b
        ;   XREF to: 0060b260 (CONDITIONAL_JUMP)  ; LAB_0060b260
    PUSH EBX                            ; 0060b21d
        ;   Label: LAB_0060b21d
    CALL crt_locale.c_mblen_FUN_00605a40 ; 0060b21e
        ;   XREF to: 00605a40 (UNCONDITIONAL_CALL)  ; int crt_locale.c_mblen_FUN_00605a40(char * mb_string)
    ADD ESP,0x4                         ; 0060b223
    PUSH 0x1                            ; 0060b226
    LEA EDX,[EBP + -0x4]                ; 0060b228
    PUSH EDX                            ; 0060b22b
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0060b22c
    MOV EDI,EAX                         ; 0060b22f
    CMP EAX,EDX                         ; 0060b231
    JBE 0x0060b237                      ; 0060b233
        ;   XREF to: 0060b237 (CONDITIONAL_JUMP)  ; LAB_0060b237
    MOV EAX,EDX                         ; 0060b235
    PUSH EAX                            ; 0060b237
        ;   Label: LAB_0060b237
    PUSH EBX                            ; 0060b238
    PUSH 0x8                            ; 0060b239
    MOV EBX,dword ptr [0x00685570]      ; 0060b23b | g_CodePage
    PUSH EBX                            ; 0060b241
    CALL dword ptr CS:[0x6115f4]        ; 0060b242 | g_MultiByteToWideCharFunc
    TEST EAX,EAX                        ; 0060b249
    JZ 0x0060b260                       ; 0060b24b
        ;   XREF to: 0060b260 (CONDITIONAL_JUMP)  ; LAB_0060b260
    TEST ESI,ESI                        ; 0060b24d
    JZ 0x0060b257                       ; 0060b24f
        ;   XREF to: 0060b257 (CONDITIONAL_JUMP)  ; LAB_0060b257
    MOV EAX,dword ptr [EBP + -0x4]      ; 0060b251
    MOV word ptr [ESI],AX               ; 0060b254
    MOV EAX,EDI                         ; 0060b257
        ;   Label: LAB_0060b257
    MOV ESP,EBP                         ; 0060b259
    POP EBP                             ; 0060b25b
    POP EDI                             ; 0060b25c
    POP ESI                             ; 0060b25d
    POP EBX                             ; 0060b25e
    RET                                 ; 0060b25f
    MOV EAX,0xffffffff                  ; 0060b260
        ;   Label: LAB_0060b260
    MOV ESP,EBP                         ; 0060b265
        ;   Label: LAB_0060b265
    POP EBP                             ; 0060b267
    POP EDI                             ; 0060b268
    POP ESI                             ; 0060b269
    POP EBX                             ; 0060b26a
    RET                                 ; 0060b26b

