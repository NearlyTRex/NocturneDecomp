; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * __cdecl crt_string_c_strpbrk_FUN_0060c190(char *str,char *char_set)
;
; Parameters:
; char *           Stack[0x4]:4   str
; char *           Stack[0x8]:4   char_set
;
; XREF[1]:
;   crt_io.c_stat_FUN_00607e64 at 00607e8a
;
; Called Functions:
;   crt_string.c_char_in_set_FUN_0060e340
;   crt_string.c_mbstring_termination_check_FUN_0060b630
;   crt_string.c_mbtowc_next_FUN_00605a70
;   crt_string.c_mbtowc_peek_FUN_006059e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060c190
        ;   Label: crt_string.c_strpbrk_FUN_0060c190
    PUSH ESI                            ; 0060c191
    MOV EBX,dword ptr [ESP + 0xc]       ; 0060c192
    MOV ESI,dword ptr [ESP + 0x10]      ; 0060c196
    PUSH EBX                            ; 0060c19a
        ;   Label: LAB_0060c19a
    CALL crt_string.c_mbstring_termination_check_FUN_0060b630 ; 0060c19b
        ;   XREF to: 0060b630 (UNCONDITIONAL_CALL)  ; int crt_string.c_mbstring_termination_check_FUN_0060b630(char * str)
    ADD ESP,0x4                         ; 0060c1a0
    TEST EAX,EAX                        ; 0060c1a3
    JNZ 0x0060c1d0                      ; 0060c1a5
        ;   XREF to: 0060c1d0 (CONDITIONAL_JUMP)  ; LAB_0060c1d0
    PUSH EBX                            ; 0060c1a7
    CALL crt_string.c_mbtowc_peek_FUN_006059e0 ; 0060c1a8
        ;   XREF to: 006059e0 (UNCONDITIONAL_CALL)  ; wchar_t crt_string.c_mbtowc_peek_FUN_006059e0(char * str)
    ADD ESP,0x4                         ; 0060c1ad
    PUSH EAX                            ; 0060c1b0
    PUSH ESI                            ; 0060c1b1
    CALL crt_string.c_char_in_set_FUN_0060e340 ; 0060c1b2
        ;   XREF to: 0060e340 (UNCONDITIONAL_CALL)  ; char * crt_string.c_char_in_set_FUN_0060e340(char * charset, wchar_t wc)
    ADD ESP,0x8                         ; 0060c1b7
    TEST EAX,EAX                        ; 0060c1ba
    JZ 0x0060c1c3                       ; 0060c1bc
        ;   XREF to: 0060c1c3 (CONDITIONAL_JUMP)  ; LAB_0060c1c3
    MOV EAX,EBX                         ; 0060c1be
    POP ESI                             ; 0060c1c0
    POP EBX                             ; 0060c1c1
    RET                                 ; 0060c1c2
    PUSH EBX                            ; 0060c1c3
        ;   Label: LAB_0060c1c3
    CALL crt_string.c_mbtowc_next_FUN_00605a70 ; 0060c1c4
        ;   XREF to: 00605a70 (UNCONDITIONAL_CALL)  ; char * crt_string.c_mbtowc_next_FUN_00605a70(char * str)
    ADD ESP,0x4                         ; 0060c1c9
    MOV EBX,EAX                         ; 0060c1cc
    JMP 0x0060c19a                      ; 0060c1ce
        ;   XREF to: 0060c19a (UNCONDITIONAL_JUMP)  ; LAB_0060c19a
    XOR EAX,EAX                         ; 0060c1d0
        ;   Label: LAB_0060c1d0
    POP ESI                             ; 0060c1d2
    POP EBX                             ; 0060c1d3
    RET                                 ; 0060c1d4

