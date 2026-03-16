; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; wchar_t __watcallStack crt_locale_c_toupper_multibyte_FUN_0060f300(char *mb_char,char *output_buffer)
;
; Parameters:
; char *           Stack[0x4]:4   mb_char
; char *           Stack[0x8]:4   output_buffer
; Local Variables:
; byte[4]          Stack[-0xc]:4  local_c
;
; XREF[1]:
;   crt_unknown.c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0 at 0060e5f2
;
; Referenced Globals:
;   CHAR_UPPER_BUFF_A_FUNC* g_CharUpperBuffAFunc = 00211a56
;   uint g_CodePage = 0x1
;   int g_MultibyteLocaleActive
;   char[256] g_LeadByteTable
;
; Called Functions:
;   CharUpperBuffA
;   crt_locale.c_fullwidth_toupper_FUN_0060ffb0
;   crt_locale.c_mblen_FUN_00605a40
;   crt_locale.c_wchar_to_bytes_FUN_00605a20
;   crt_string.c_mbtowc_peek_FUN_006059e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060f300
        ;   Label: crt_locale.c_toupper_multibyte_FUN_0060f300
    PUSH ESI                            ; 0060f301
    SUB ESP,0x4                         ; 0060f302
    MOV EAX,ESP                         ; 0060f305
    PUSH EAX                            ; 0060f307
    MOV EDX,dword ptr [ESP + 0x14]      ; 0060f308
    PUSH EDX                            ; 0060f30c
    CALL crt_locale.c_wchar_to_bytes_FUN_00605a20 ; 0060f30d
        ;   XREF to: 00605a20 (UNCONDITIONAL_CALL)  ; void crt_locale.c_wchar_to_bytes_FUN_00605a20(wchar_t character, char * output_buffer)
    ADD ESP,0x8                         ; 0060f312
    MOV EAX,ESP                         ; 0060f315
    PUSH EAX                            ; 0060f317
    CALL crt_locale.c_mblen_FUN_00605a40 ; 0060f318
        ;   XREF to: 00605a40 (UNCONDITIONAL_CALL)  ; int crt_locale.c_mblen_FUN_00605a40(char * mb_string)
    ADD ESP,0x4                         ; 0060f31d
    XOR DL,DL                           ; 0060f320
    MOV EBX,dword ptr [0x00685570]      ; 0060f322 | g_CodePage
    MOV byte ptr [ESP + EAX*0x1],DL     ; 0060f328
    CMP EBX,0x3a4                       ; 0060f32b
    JNZ 0x0060f35c                      ; 0060f331
        ;   XREF to: 0060f35c (CONDITIONAL_JUMP)  ; LAB_0060f35c
    CMP dword ptr [0x03f9c020],0x0      ; 0060f333 | g_MultibyteLocaleActive
    JZ 0x0060f35c                       ; 0060f33a
        ;   XREF to: 0060f35c (CONDITIONAL_JUMP)  ; LAB_0060f35c
    XOR EAX,EAX                         ; 0060f33c
    MOV AL,byte ptr [ESP]               ; 0060f33e
    MOV AL,byte ptr [EAX + 0x3f9c031]   ; 0060f341 | g_LeadByteTable
    AND AL,0x1                          ; 0060f347
    AND EAX,0xff                        ; 0060f349
    JZ 0x0060f35c                       ; 0060f34e
        ;   XREF to: 0060f35c (CONDITIONAL_JUMP)  ; LAB_0060f35c
    MOV ESI,dword ptr [ESP + 0x10]      ; 0060f350
    PUSH ESI                            ; 0060f354
    CALL crt_locale.c_fullwidth_toupper_FUN_0060ffb0 ; 0060f355
        ;   XREF to: 0060ffb0 (UNCONDITIONAL_CALL)  ; wchar_t crt_locale.c_fullwidth_toupper_FUN_0060ffb0(wchar_t character)
    JMP 0x0060f372                      ; 0060f35a
        ;   XREF to: 0060f372 (UNCONDITIONAL_JUMP)  ; LAB_0060f372
    PUSH 0x1                            ; 0060f35c
        ;   Label: LAB_0060f35c
    LEA EAX,[ESP + 0x4]                 ; 0060f35e
    PUSH EAX                            ; 0060f362
    CALL dword ptr CS:[0x61148c]        ; 0060f363 | g_CharUpperBuffAFunc
    MOV EAX,ESP                         ; 0060f36a
    PUSH EAX                            ; 0060f36c
    CALL crt_string.c_mbtowc_peek_FUN_006059e0 ; 0060f36d
        ;   XREF to: 006059e0 (UNCONDITIONAL_CALL)  ; int crt_string.c_mbtowc_peek_FUN_006059e0(char * str)
    ADD ESP,0x4                         ; 0060f372
        ;   Label: LAB_0060f372
    ADD ESP,0x4                         ; 0060f375
    POP ESI                             ; 0060f378
    POP EBX                             ; 0060f379
    RET                                 ; 0060f37a

