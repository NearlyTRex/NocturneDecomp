; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_string_c_mbstrnicmp_FUN_00608e50(char *str1,char *str2,SIZE_T count)
;
; Parameters:
; char *           Stack[0x4]:4   str1
; char *           Stack[0x8]:4   str2
; SIZE_T           Stack[0xc]:4   count
;
; XREF[1]:
;   crt_env.c_getenv_FUN_006013f0 at 0060141f
;
; Called Functions:
;   crt_string.c_compare_mb_chars_ci_FUN_0060c790
;   crt_string.c_mbstring_termination_check_FUN_0060b630
;   crt_string.c_mbtowc_next_FUN_00605a70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00608e50
        ;   Label: crt_string.c_mbstrnicmp_FUN_00608e50
    PUSH ESI                            ; 00608e51
    PUSH EDI                            ; 00608e52
    PUSH EBP                            ; 00608e53
    MOV ESI,dword ptr [ESP + 0x14]      ; 00608e54
    MOV EBX,dword ptr [ESP + 0x18]      ; 00608e58
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00608e5c
    XOR EBP,EBP                         ; 00608e60
    TEST EDI,EDI                        ; 00608e62
    JBE 0x00608eab                      ; 00608e64
        ;   XREF to: 00608eab (CONDITIONAL_JUMP)  ; LAB_00608eab
    PUSH ESI                            ; 00608e66
        ;   Label: LAB_00608e66
    CALL crt_string.c_mbstring_termination_check_FUN_0060b630 ; 00608e67
        ;   XREF to: 0060b630 (UNCONDITIONAL_CALL)  ; int crt_string.c_mbstring_termination_check_FUN_0060b630(char * str)
    ADD ESP,0x4                         ; 00608e6c
    TEST EAX,EAX                        ; 00608e6f
    JNZ 0x00608eab                      ; 00608e71
        ;   XREF to: 00608eab (CONDITIONAL_JUMP)  ; LAB_00608eab
    PUSH EBX                            ; 00608e73
    CALL crt_string.c_mbstring_termination_check_FUN_0060b630 ; 00608e74
        ;   XREF to: 0060b630 (UNCONDITIONAL_CALL)  ; int crt_string.c_mbstring_termination_check_FUN_0060b630(char * str)
    ADD ESP,0x4                         ; 00608e79
    TEST EAX,EAX                        ; 00608e7c
    JNZ 0x00608eab                      ; 00608e7e
        ;   XREF to: 00608eab (CONDITIONAL_JUMP)  ; LAB_00608eab
    PUSH EBX                            ; 00608e80
    PUSH ESI                            ; 00608e81
    CALL crt_string.c_compare_mb_chars_ci_FUN_0060c790 ; 00608e82
        ;   XREF to: 0060c790 (UNCONDITIONAL_CALL)  ; int crt_string.c_compare_mb_chars_ci_FUN_0060c790(char * str1, char * str2)
    ADD ESP,0x8                         ; 00608e87
    MOV EBP,EAX                         ; 00608e8a
    TEST EAX,EAX                        ; 00608e8c
    JNZ 0x00608edb                      ; 00608e8e
        ;   XREF to: 00608edb (CONDITIONAL_JUMP)  ; LAB_00608edb
    PUSH ESI                            ; 00608e90
    CALL crt_string.c_mbtowc_next_FUN_00605a70 ; 00608e91
        ;   XREF to: 00605a70 (UNCONDITIONAL_CALL)  ; char * crt_string.c_mbtowc_next_FUN_00605a70(char * str)
    ADD ESP,0x4                         ; 00608e96
    PUSH EBX                            ; 00608e99
    DEC EDI                             ; 00608e9a
    MOV ESI,EAX                         ; 00608e9b
    CALL crt_string.c_mbtowc_next_FUN_00605a70 ; 00608e9d
        ;   XREF to: 00605a70 (UNCONDITIONAL_CALL)  ; char * crt_string.c_mbtowc_next_FUN_00605a70(char * str)
    ADD ESP,0x4                         ; 00608ea2
    MOV EBX,EAX                         ; 00608ea5
    TEST EDI,EDI                        ; 00608ea7
    JA 0x00608e66                       ; 00608ea9
        ;   XREF to: 00608e66 (CONDITIONAL_JUMP)  ; LAB_00608e66
    TEST EDI,EDI                        ; 00608eab
        ;   Label: LAB_00608eab
    JBE 0x00608ed9                      ; 00608ead
        ;   XREF to: 00608ed9 (CONDITIONAL_JUMP)  ; LAB_00608ed9
    PUSH ESI                            ; 00608eaf
    CALL crt_string.c_mbstring_termination_check_FUN_0060b630 ; 00608eb0
        ;   XREF to: 0060b630 (UNCONDITIONAL_CALL)  ; int crt_string.c_mbstring_termination_check_FUN_0060b630(char * str)
    ADD ESP,0x4                         ; 00608eb5
    TEST EAX,EAX                        ; 00608eb8
    JNZ 0x00608ec9                      ; 00608eba
        ;   XREF to: 00608ec9 (CONDITIONAL_JUMP)  ; LAB_00608ec9
    PUSH EBX                            ; 00608ebc
    CALL crt_string.c_mbstring_termination_check_FUN_0060b630 ; 00608ebd
        ;   XREF to: 0060b630 (UNCONDITIONAL_CALL)  ; int crt_string.c_mbstring_termination_check_FUN_0060b630(char * str)
    ADD ESP,0x4                         ; 00608ec2
    TEST EAX,EAX                        ; 00608ec5
    JZ 0x00608ed9                       ; 00608ec7
        ;   XREF to: 00608ed9 (CONDITIONAL_JUMP)  ; LAB_00608ed9
    XOR EAX,EAX                         ; 00608ec9
        ;   Label: LAB_00608ec9
    MOVZX ESI,byte ptr [ESI]            ; 00608ecb
    MOV AL,byte ptr [EBX]               ; 00608ece
    SUB ESI,EAX                         ; 00608ed0
    MOV EAX,ESI                         ; 00608ed2
    POP EBP                             ; 00608ed4
    POP EDI                             ; 00608ed5
    POP ESI                             ; 00608ed6
    POP EBX                             ; 00608ed7
    RET                                 ; 00608ed8
    MOV EAX,EBP                         ; 00608ed9
        ;   Label: LAB_00608ed9
    POP EBP                             ; 00608edb
        ;   Label: LAB_00608edb
    POP EDI                             ; 00608edc
    POP ESI                             ; 00608edd
    POP EBX                             ; 00608ede
    RET                                 ; 00608edf

