; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00574030(wchar_t *param_1,char *param_2,int param_3)
;
;
; XREF[2]:
;   FUN_00574680 at 005746bc
;   crt_env.c_putenv_internal_FUN_00573930 at 00573ac8
;
; Called Functions:
;   crt_locale.c_mbtowc_FUN_0056f040
;   crt_string.c_mbtowc_next_FUN_0056da80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574030
        ;   Label: FUN_00574030
    PUSH ESI                            ; 00574031
    PUSH EDI                            ; 00574032
    PUSH EBP                            ; 00574033
    MOV EDI,dword ptr [ESP + 0x14]      ; 00574034
    MOV EBX,dword ptr [ESP + 0x18]      ; 00574038
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0057403c
    XOR ESI,ESI                         ; 00574040
    TEST EDI,EDI                        ; 00574042
    JZ 0x0057407e                       ; 00574044
        ;   XREF to: 0057407e (CONDITIONAL_JUMP)  ; LAB_0057407e
    TEST EBP,EBP                        ; 00574046
        ;   Label: LAB_00574046
    JBE 0x005740a3                      ; 00574048
        ;   XREF to: 005740a3 (CONDITIONAL_JUMP)  ; LAB_005740a3
    CMP byte ptr [EBX],0x0              ; 0057404a
    JZ 0x00574065                       ; 0057404d
        ;   XREF to: 00574065 (CONDITIONAL_JUMP)  ; LAB_00574065
    PUSH 0x2                            ; 0057404f
    PUSH EBX                            ; 00574051
    PUSH EDI                            ; 00574052
    CALL crt_locale.c_mbtowc_FUN_0056f040 ; 00574053
        ;   XREF to: 0056f040 (UNCONDITIONAL_CALL)  ; int crt_locale.c_mbtowc_FUN_0056f040(wchar_t * wide_char, char * mb_string, SIZE_T max_bytes)
    ADD ESP,0xc                         ; 00574058
    CMP EAX,-0x1                        ; 0057405b
    JNZ 0x0057406c                      ; 0057405e
        ;   XREF to: 0057406c (CONDITIONAL_JUMP)  ; LAB_0057406c
    POP EBP                             ; 00574060
    POP EDI                             ; 00574061
    POP ESI                             ; 00574062
    POP EBX                             ; 00574063
    RET                                 ; 00574064
    MOV word ptr [EDI],0x0              ; 00574065
        ;   Label: LAB_00574065
    JMP 0x005740a3                      ; 0057406a
        ;   XREF to: 005740a3 (UNCONDITIONAL_JUMP)  ; LAB_005740a3
    PUSH EBX                            ; 0057406c
        ;   Label: LAB_0057406c
    DEC EBP                             ; 0057406d
    CALL crt_string.c_mbtowc_next_FUN_0056da80 ; 0057406e
        ;   XREF to: 0056da80 (UNCONDITIONAL_CALL)  ; char * crt_string.c_mbtowc_next_FUN_0056da80(char * str)
    ADD EDI,0x2                         ; 00574073
    INC ESI                             ; 00574076
    ADD ESP,0x4                         ; 00574077
    MOV EBX,EAX                         ; 0057407a
    JMP 0x00574046                      ; 0057407c
        ;   XREF to: 00574046 (UNCONDITIONAL_JUMP)  ; LAB_00574046
    CMP byte ptr [EBX],0x0              ; 0057407e
        ;   Label: LAB_0057407e
    JZ 0x005740a3                       ; 00574081
        ;   XREF to: 005740a3 (CONDITIONAL_JUMP)  ; LAB_005740a3
    PUSH 0x2                            ; 00574083
    PUSH EBX                            ; 00574085
    PUSH 0x0                            ; 00574086
    CALL crt_locale.c_mbtowc_FUN_0056f040 ; 00574088
        ;   XREF to: 0056f040 (UNCONDITIONAL_CALL)  ; int crt_locale.c_mbtowc_FUN_0056f040(wchar_t * wide_char, char * mb_string, SIZE_T max_bytes)
    ADD ESP,0xc                         ; 0057408d
    CMP EAX,-0x1                        ; 00574090
    JZ 0x005740a5                       ; 00574093
        ;   XREF to: 005740a5 (CONDITIONAL_JUMP)  ; LAB_005740a5
    PUSH EBX                            ; 00574095
    CALL crt_string.c_mbtowc_next_FUN_0056da80 ; 00574096
        ;   XREF to: 0056da80 (UNCONDITIONAL_CALL)  ; char * crt_string.c_mbtowc_next_FUN_0056da80(char * str)
    INC ESI                             ; 0057409b
    ADD ESP,0x4                         ; 0057409c
    MOV EBX,EAX                         ; 0057409f
    JMP 0x0057407e                      ; 005740a1
        ;   XREF to: 0057407e (UNCONDITIONAL_JUMP)  ; LAB_0057407e
    MOV EAX,ESI                         ; 005740a3
        ;   Label: LAB_005740a3
    POP EBP                             ; 005740a5
        ;   Label: LAB_005740a5
    POP EDI                             ; 005740a6
    POP ESI                             ; 005740a7
    POP EBX                             ; 005740a8
    RET                                 ; 005740a9

