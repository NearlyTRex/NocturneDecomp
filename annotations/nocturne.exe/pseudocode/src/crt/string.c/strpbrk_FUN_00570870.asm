; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_string_c_strpbrk_FUN_00570870(char *str,char *char_set)
;
; Parameters:
; char *           Stack[0x4]:4   str
; char *           Stack[0x8]:4   char_set
;
; XREF[1]:
;   crt_io.c_getFileStat_FUN_0056c864 at 0056c88a
;
; Called Functions:
;   crt_string.c_char_in_set_FUN_00572a90
;   crt_string.c_mbstring_termination_check_FUN_00570ca0
;   crt_string.c_mbtowc_next_FUN_0056da80
;   crt_string.c_mbtowc_peek_FUN_0056d9f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570870
        ;   Label: crt_string.c_strpbrk_FUN_00570870
    PUSH ESI                            ; 00570871
    MOV EBX,dword ptr [ESP + 0xc]       ; 00570872
    MOV ESI,dword ptr [ESP + 0x10]      ; 00570876
    PUSH EBX                            ; 0057087a
        ;   Label: LAB_0057087a
    CALL crt_string.c_mbstring_termination_check_FUN_00570ca0 ; 0057087b
        ;   XREF to: 00570ca0 (UNCONDITIONAL_CALL)  ; int crt_string.c_mbstring_termination_check_FUN_00570ca0(char * str)
    ADD ESP,0x4                         ; 00570880
    TEST EAX,EAX                        ; 00570883
    JNZ 0x005708b0                      ; 00570885
        ;   XREF to: 005708b0 (CONDITIONAL_JUMP)  ; LAB_005708b0
    PUSH EBX                            ; 00570887
    CALL crt_string.c_mbtowc_peek_FUN_0056d9f0 ; 00570888
        ;   XREF to: 0056d9f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_mbtowc_peek_FUN_0056d9f0(char * str)
    ADD ESP,0x4                         ; 0057088d
    PUSH EAX                            ; 00570890
    PUSH ESI                            ; 00570891
    CALL crt_string.c_char_in_set_FUN_00572a90 ; 00570892
        ;   XREF to: 00572a90 (UNCONDITIONAL_CALL)  ; char * crt_string.c_char_in_set_FUN_00572a90(char * charset, wchar_t wc)
    ADD ESP,0x8                         ; 00570897
    TEST EAX,EAX                        ; 0057089a
    JZ 0x005708a3                       ; 0057089c
        ;   XREF to: 005708a3 (CONDITIONAL_JUMP)  ; LAB_005708a3
    MOV EAX,EBX                         ; 0057089e
    POP ESI                             ; 005708a0
    POP EBX                             ; 005708a1
    RET                                 ; 005708a2
    PUSH EBX                            ; 005708a3
        ;   Label: LAB_005708a3
    CALL crt_string.c_mbtowc_next_FUN_0056da80 ; 005708a4
        ;   XREF to: 0056da80 (UNCONDITIONAL_CALL)  ; char * crt_string.c_mbtowc_next_FUN_0056da80(char * str)
    ADD ESP,0x4                         ; 005708a9
    MOV EBX,EAX                         ; 005708ac
    JMP 0x0057087a                      ; 005708ae
        ;   XREF to: 0057087a (UNCONDITIONAL_JUMP)  ; LAB_0057087a
    XOR EAX,EAX                         ; 005708b0
        ;   Label: LAB_005708b0
    POP ESI                             ; 005708b2
    POP EBX                             ; 005708b3
    RET                                 ; 005708b4

