; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * crt_unknown_c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0(char *param_1)
;
;
; XREF[1]:
;   crt_string.c_compare_mb_chars_ci_FUN_0060c790 at 0060c7e3
;
; Called Functions:
;   crt_locale.c_mblen_FUN_00605a40
;   crt_locale.c_toupper_multibyte_FUN_0060f300
;   crt_locale.c_wchar_to_bytes_FUN_00605a20
;   crt_mbstring.c_copyMbChar_FUN_0060e590
;   crt_string.c_mbstring_termination_check_FUN_0060b630
;   crt_string.c_mbtowc_next_FUN_00605a70
;   crt_string.c_mbtowc_peek_FUN_006059e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060e5d0
        ;   Label: crt_unknown.c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0
    PUSH ESI                            ; 0060e5d1
    SUB ESP,0x4                         ; 0060e5d2
    MOV ESI,dword ptr [ESP + 0x10]      ; 0060e5d5
    MOV EBX,ESI                         ; 0060e5d9
    PUSH EBX                            ; 0060e5db
        ;   Label: LAB_0060e5db
    CALL crt_string.c_mbstring_termination_check_FUN_0060b630 ; 0060e5dc
        ;   XREF to: 0060b630 (UNCONDITIONAL_CALL)  ; int crt_string.c_mbstring_termination_check_FUN_0060b630(char * str)
    ADD ESP,0x4                         ; 0060e5e1
    TEST EAX,EAX                        ; 0060e5e4
    JNZ 0x0060e62f                      ; 0060e5e6
        ;   XREF to: 0060e62f (CONDITIONAL_JUMP)  ; LAB_0060e62f
    PUSH EBX                            ; 0060e5e8
    CALL crt_string.c_mbtowc_peek_FUN_006059e0 ; 0060e5e9
        ;   XREF to: 006059e0 (UNCONDITIONAL_CALL)  ; int crt_string.c_mbtowc_peek_FUN_006059e0(char * str)
    ADD ESP,0x4                         ; 0060e5ee
    PUSH EAX                            ; 0060e5f1
    CALL crt_locale.c_toupper_multibyte_FUN_0060f300 ; 0060e5f2
        ;   XREF to: 0060f300 (UNCONDITIONAL_CALL)  ; wchar_t crt_locale.c_toupper_multibyte_FUN_0060f300(char * mb_char, char * output_buffer)
    ADD ESP,0x4                         ; 0060e5f7
    MOV EDX,ESP                         ; 0060e5fa
    PUSH EDX                            ; 0060e5fc
    PUSH EAX                            ; 0060e5fd
    CALL crt_locale.c_wchar_to_bytes_FUN_00605a20 ; 0060e5fe
        ;   XREF to: 00605a20 (UNCONDITIONAL_CALL)  ; void crt_locale.c_wchar_to_bytes_FUN_00605a20(wchar_t character, char * output_buffer)
    ADD ESP,0x8                         ; 0060e603
    MOV EAX,ESP                         ; 0060e606
    PUSH EAX                            ; 0060e608
    CALL crt_locale.c_mblen_FUN_00605a40 ; 0060e609
        ;   XREF to: 00605a40 (UNCONDITIONAL_CALL)  ; int crt_locale.c_mblen_FUN_00605a40(char * mb_string)
    ADD ESP,0x4                         ; 0060e60e
    XOR DL,DL                           ; 0060e611
    MOV byte ptr [ESP + EAX*0x1],DL     ; 0060e613
    MOV EAX,ESP                         ; 0060e616
    PUSH EAX                            ; 0060e618
    PUSH EBX                            ; 0060e619
    CALL crt_mbstring.c_copyMbChar_FUN_0060e590 ; 0060e61a
        ;   XREF to: 0060e590 (UNCONDITIONAL_CALL)  ; void crt_mbstring.c_copyMbChar_FUN_0060e590(char * dest, char * src)
    ADD ESP,0x8                         ; 0060e61f
    PUSH EBX                            ; 0060e622
    CALL crt_string.c_mbtowc_next_FUN_00605a70 ; 0060e623
        ;   XREF to: 00605a70 (UNCONDITIONAL_CALL)  ; char * crt_string.c_mbtowc_next_FUN_00605a70(char * str)
    MOV EBX,EAX                         ; 0060e628
    ADD ESP,0x4                         ; 0060e62a
    JMP 0x0060e5db                      ; 0060e62d
        ;   XREF to: 0060e5db (UNCONDITIONAL_JUMP)  ; LAB_0060e5db
    MOV EAX,ESI                         ; 0060e62f
        ;   Label: LAB_0060e62f
    ADD ESP,0x4                         ; 0060e631
    POP ESI                             ; 0060e634
    POP EBX                             ; 0060e635
    RET                                 ; 0060e636

