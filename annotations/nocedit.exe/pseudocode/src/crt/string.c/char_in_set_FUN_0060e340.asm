; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * __cdecl crt_string_c_char_in_set_FUN_0060e340(char *charset,wchar_t wc)
;
; Parameters:
; char *           Stack[0x4]:4   charset
; wchar_t          Stack[0x8]:2   wc
;
; XREF[2]:
;   crt_env.c_putenv_internal_FUN_0060ee80 at 0060eea0
;   crt_string.c_strpbrk_FUN_0060c190 at 0060c1b2
;
; Called Functions:
;   crt_locale.c_mblen_FUN_00605a40
;   crt_locale.c_wchar_to_bytes_FUN_00605a20
;   crt_string.c_mbcmp_FUN_0060e640
;   crt_string.c_mbstring_termination_check_FUN_0060b630
;   crt_string.c_mbtowc_next_FUN_00605a70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060e340
        ;   Label: crt_string.c_char_in_set_FUN_0060e340
    SUB ESP,0x4                         ; 0060e341
    MOV EBX,dword ptr [ESP + 0xc]       ; 0060e344
    MOV EAX,ESP                         ; 0060e348
    PUSH EAX                            ; 0060e34a
    MOV EDX,dword ptr [ESP + 0x14]      ; 0060e34b
    PUSH EDX                            ; 0060e34f
    CALL crt_locale.c_wchar_to_bytes_FUN_00605a20 ; 0060e350
        ;   XREF to: 00605a20 (UNCONDITIONAL_CALL)  ; void crt_locale.c_wchar_to_bytes_FUN_00605a20(wchar_t character, char * output_buffer)
    ADD ESP,0x8                         ; 0060e355
    MOV EAX,ESP                         ; 0060e358
    PUSH EAX                            ; 0060e35a
    CALL crt_locale.c_mblen_FUN_00605a40 ; 0060e35b
        ;   XREF to: 00605a40 (UNCONDITIONAL_CALL)  ; int crt_locale.c_mblen_FUN_00605a40(char * mb_string)
    ADD ESP,0x4                         ; 0060e360
    XOR DL,DL                           ; 0060e363
    MOV byte ptr [ESP + EAX*0x1],DL     ; 0060e365
    PUSH EBX                            ; 0060e368
        ;   Label: LAB_0060e368
    CALL crt_string.c_mbstring_termination_check_FUN_0060b630 ; 0060e369
        ;   XREF to: 0060b630 (UNCONDITIONAL_CALL)  ; int crt_string.c_mbstring_termination_check_FUN_0060b630(char * str)
    ADD ESP,0x4                         ; 0060e36e
    TEST EAX,EAX                        ; 0060e371
    JNZ 0x0060e392                      ; 0060e373
        ;   XREF to: 0060e392 (CONDITIONAL_JUMP)  ; LAB_0060e392
    MOV EAX,ESP                         ; 0060e375
    PUSH EAX                            ; 0060e377
    PUSH EBX                            ; 0060e378
    CALL crt_string.c_mbcmp_FUN_0060e640 ; 0060e379
        ;   XREF to: 0060e640 (UNCONDITIONAL_CALL)  ; int crt_string.c_mbcmp_FUN_0060e640(char * str1, char * str2)
    ADD ESP,0x8                         ; 0060e37e
    TEST EAX,EAX                        ; 0060e381
    JZ 0x0060e392                       ; 0060e383
        ;   XREF to: 0060e392 (CONDITIONAL_JUMP)  ; LAB_0060e392
    PUSH EBX                            ; 0060e385
    CALL crt_string.c_mbtowc_next_FUN_00605a70 ; 0060e386
        ;   XREF to: 00605a70 (UNCONDITIONAL_CALL)  ; char * crt_string.c_mbtowc_next_FUN_00605a70(char * str)
    MOV EBX,EAX                         ; 0060e38b
    ADD ESP,0x4                         ; 0060e38d
    JMP 0x0060e368                      ; 0060e390
        ;   XREF to: 0060e368 (UNCONDITIONAL_JUMP)  ; LAB_0060e368
    PUSH EBX                            ; 0060e392
        ;   Label: LAB_0060e392
    CALL crt_string.c_mbstring_termination_check_FUN_0060b630 ; 0060e393
        ;   XREF to: 0060b630 (UNCONDITIONAL_CALL)  ; int crt_string.c_mbstring_termination_check_FUN_0060b630(char * str)
    ADD ESP,0x4                         ; 0060e398
    TEST EAX,EAX                        ; 0060e39b
    JZ 0x0060e3a8                       ; 0060e39d
        ;   XREF to: 0060e3a8 (CONDITIONAL_JUMP)  ; LAB_0060e3a8
    CMP dword ptr [ESP + 0x10],0x0      ; 0060e39f
    JZ 0x0060e3a8                       ; 0060e3a4
        ;   XREF to: 0060e3a8 (CONDITIONAL_JUMP)  ; LAB_0060e3a8
    XOR EBX,EBX                         ; 0060e3a6
    MOV EAX,EBX                         ; 0060e3a8
        ;   Label: LAB_0060e3a8
    ADD ESP,0x4                         ; 0060e3aa
    POP EBX                             ; 0060e3ad
    RET                                 ; 0060e3ae

