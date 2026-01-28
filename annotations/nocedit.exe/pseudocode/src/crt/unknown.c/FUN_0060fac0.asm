; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown int crt_unknown_c_FUN_0060fac0(void)
;
;
; XREF[2]:
;   crt_env.c_putenv_internal_FUN_0060ee80 at 0060f018
;   crt_unknown.c_FUN_00610900 at 0061093c
;
; Called Functions:
;   crt_locale.c_mbtowc_FUN_0060b1c0
;   crt_string.c_mbtowc_next_FUN_00605a70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060fac0
        ;   Label: crt_unknown.c_FUN_0060fac0
    PUSH ESI                            ; 0060fac1
    PUSH EDI                            ; 0060fac2
    PUSH EBP                            ; 0060fac3
    MOV EDI,dword ptr [ESP + 0x14]      ; 0060fac4
    MOV EBX,dword ptr [ESP + 0x18]      ; 0060fac8
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0060facc
    XOR ESI,ESI                         ; 0060fad0
    TEST EDI,EDI                        ; 0060fad2
    JZ 0x0060fb0e                       ; 0060fad4
        ;   XREF to: 0060fb0e (CONDITIONAL_JUMP)  ; LAB_0060fb0e
    TEST EBP,EBP                        ; 0060fad6
        ;   Label: LAB_0060fad6
    JBE 0x0060fb33                      ; 0060fad8
        ;   XREF to: 0060fb33 (CONDITIONAL_JUMP)  ; LAB_0060fb33
    CMP byte ptr [EBX],0x0              ; 0060fada
    JZ 0x0060faf5                       ; 0060fadd
        ;   XREF to: 0060faf5 (CONDITIONAL_JUMP)  ; LAB_0060faf5
    PUSH 0x2                            ; 0060fadf
    PUSH EBX                            ; 0060fae1
    PUSH EDI                            ; 0060fae2
    CALL crt_locale.c_mbtowc_FUN_0060b1c0 ; 0060fae3
        ;   XREF to: 0060b1c0 (UNCONDITIONAL_CALL)  ; int crt_locale.c_mbtowc_FUN_0060b1c0(wchar_t * wide_char, char * mb_string, SIZE_T max_bytes)
    ADD ESP,0xc                         ; 0060fae8
    CMP EAX,-0x1                        ; 0060faeb
    JNZ 0x0060fafc                      ; 0060faee
        ;   XREF to: 0060fafc (CONDITIONAL_JUMP)  ; LAB_0060fafc
    POP EBP                             ; 0060faf0
    POP EDI                             ; 0060faf1
    POP ESI                             ; 0060faf2
    POP EBX                             ; 0060faf3
    RET                                 ; 0060faf4
    MOV word ptr [EDI],0x0              ; 0060faf5
        ;   Label: LAB_0060faf5
    JMP 0x0060fb33                      ; 0060fafa
        ;   XREF to: 0060fb33 (UNCONDITIONAL_JUMP)  ; LAB_0060fb33
    PUSH EBX                            ; 0060fafc
        ;   Label: LAB_0060fafc
    DEC EBP                             ; 0060fafd
    CALL crt_string.c_mbtowc_next_FUN_00605a70 ; 0060fafe
        ;   XREF to: 00605a70 (UNCONDITIONAL_CALL)  ; char * crt_string.c_mbtowc_next_FUN_00605a70(char * str)
    ADD EDI,0x2                         ; 0060fb03
    INC ESI                             ; 0060fb06
    ADD ESP,0x4                         ; 0060fb07
    MOV EBX,EAX                         ; 0060fb0a
    JMP 0x0060fad6                      ; 0060fb0c
        ;   XREF to: 0060fad6 (UNCONDITIONAL_JUMP)  ; LAB_0060fad6
    CMP byte ptr [EBX],0x0              ; 0060fb0e
        ;   Label: LAB_0060fb0e
    JZ 0x0060fb33                       ; 0060fb11
        ;   XREF to: 0060fb33 (CONDITIONAL_JUMP)  ; LAB_0060fb33
    PUSH 0x2                            ; 0060fb13
    PUSH EBX                            ; 0060fb15
    PUSH 0x0                            ; 0060fb16
    CALL crt_locale.c_mbtowc_FUN_0060b1c0 ; 0060fb18
        ;   XREF to: 0060b1c0 (UNCONDITIONAL_CALL)  ; int crt_locale.c_mbtowc_FUN_0060b1c0(wchar_t * wide_char, char * mb_string, SIZE_T max_bytes)
    ADD ESP,0xc                         ; 0060fb1d
    CMP EAX,-0x1                        ; 0060fb20
    JZ 0x0060fb35                       ; 0060fb23
        ;   XREF to: 0060fb35 (CONDITIONAL_JUMP)  ; LAB_0060fb35
    PUSH EBX                            ; 0060fb25
    CALL crt_string.c_mbtowc_next_FUN_00605a70 ; 0060fb26
        ;   XREF to: 00605a70 (UNCONDITIONAL_CALL)  ; char * crt_string.c_mbtowc_next_FUN_00605a70(char * str)
    INC ESI                             ; 0060fb2b
    ADD ESP,0x4                         ; 0060fb2c
    MOV EBX,EAX                         ; 0060fb2f
    JMP 0x0060fb0e                      ; 0060fb31
        ;   XREF to: 0060fb0e (UNCONDITIONAL_JUMP)  ; LAB_0060fb0e
    MOV EAX,ESI                         ; 0060fb33
        ;   Label: LAB_0060fb33
    POP EBP                             ; 0060fb35
        ;   Label: LAB_0060fb35
    POP EDI                             ; 0060fb36
    POP ESI                             ; 0060fb37
    POP EBX                             ; 0060fb38
    RET                                 ; 0060fb39

