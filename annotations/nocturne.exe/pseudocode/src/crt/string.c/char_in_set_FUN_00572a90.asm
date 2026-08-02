; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_string_c_char_in_set_FUN_00572a90(char *charset,wchar_t wc)
;
; Parameters:
; char *           Stack[0x4]:4   charset
; wchar_t          Stack[0x8]:2   wc
;
; XREF[2]:
;   crt_env.c_putenv_internal_FUN_00573930 at 00573950
;   crt_string.c_strpbrk_FUN_00570870 at 00570892
;
; Called Functions:
;   crt_locale.c_mblen_FUN_0056da50
;   crt_locale.c_wchar_to_bytes_FUN_0056da30
;   crt_string.c_mbstring_termination_check_FUN_00570ca0
;   crt_string.c_mbtowc_next_FUN_0056da80
;   crt_unknown.c_FUN_00572e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572a90
        ;   Label: crt_string.c_char_in_set_FUN_00572a90
    SUB ESP,0x4                         ; 00572a91
    MOV EBX,dword ptr [ESP + 0xc]       ; 00572a94
    MOV EAX,ESP                         ; 00572a98
    PUSH EAX                            ; 00572a9a
    MOV EDX,dword ptr [ESP + 0x14]      ; 00572a9b
    PUSH EDX                            ; 00572a9f
    CALL crt_locale.c_wchar_to_bytes_FUN_0056da30 ; 00572aa0
        ;   XREF to: 0056da30 (UNCONDITIONAL_CALL)  ; void crt_locale.c_wchar_to_bytes_FUN_0056da30(wchar_t character, char * output_buffer)
    ADD ESP,0x8                         ; 00572aa5
    MOV EAX,ESP                         ; 00572aa8
    PUSH EAX                            ; 00572aaa
    CALL crt_locale.c_mblen_FUN_0056da50 ; 00572aab
        ;   XREF to: 0056da50 (UNCONDITIONAL_CALL)  ; int crt_locale.c_mblen_FUN_0056da50(char * mb_string)
    ADD ESP,0x4                         ; 00572ab0
    XOR DL,DL                           ; 00572ab3
    MOV byte ptr [ESP + EAX*0x1],DL     ; 00572ab5
    PUSH EBX                            ; 00572ab8
        ;   Label: LAB_00572ab8
    CALL crt_string.c_mbstring_termination_check_FUN_00570ca0 ; 00572ab9
        ;   XREF to: 00570ca0 (UNCONDITIONAL_CALL)  ; int crt_string.c_mbstring_termination_check_FUN_00570ca0(char * str)
    ADD ESP,0x4                         ; 00572abe
    TEST EAX,EAX                        ; 00572ac1
    JNZ 0x00572ae2                      ; 00572ac3
        ;   XREF to: 00572ae2 (CONDITIONAL_JUMP)  ; LAB_00572ae2
    MOV EAX,ESP                         ; 00572ac5
    PUSH EAX                            ; 00572ac7
    PUSH EBX                            ; 00572ac8
    CALL crt_unknown.c_FUN_00572e00     ; 00572ac9
        ;   XREF to: 00572e00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00572e00()
    ADD ESP,0x8                         ; 00572ace
    TEST EAX,EAX                        ; 00572ad1
    JZ 0x00572ae2                       ; 00572ad3
        ;   XREF to: 00572ae2 (CONDITIONAL_JUMP)  ; LAB_00572ae2
    PUSH EBX                            ; 00572ad5
    CALL crt_string.c_mbtowc_next_FUN_0056da80 ; 00572ad6
        ;   XREF to: 0056da80 (UNCONDITIONAL_CALL)  ; char * crt_string.c_mbtowc_next_FUN_0056da80(char * str)
    MOV EBX,EAX                         ; 00572adb
    ADD ESP,0x4                         ; 00572add
    JMP 0x00572ab8                      ; 00572ae0
        ;   XREF to: 00572ab8 (UNCONDITIONAL_JUMP)  ; LAB_00572ab8
    PUSH EBX                            ; 00572ae2
        ;   Label: LAB_00572ae2
    CALL crt_string.c_mbstring_termination_check_FUN_00570ca0 ; 00572ae3
        ;   XREF to: 00570ca0 (UNCONDITIONAL_CALL)  ; int crt_string.c_mbstring_termination_check_FUN_00570ca0(char * str)
    ADD ESP,0x4                         ; 00572ae8
    TEST EAX,EAX                        ; 00572aeb
    JZ 0x00572af8                       ; 00572aed
        ;   XREF to: 00572af8 (CONDITIONAL_JUMP)  ; LAB_00572af8
    CMP dword ptr [ESP + 0x10],0x0      ; 00572aef
    JZ 0x00572af8                       ; 00572af4
        ;   XREF to: 00572af8 (CONDITIONAL_JUMP)  ; LAB_00572af8
    XOR EBX,EBX                         ; 00572af6
    MOV EAX,EBX                         ; 00572af8
        ;   Label: LAB_00572af8
    ADD ESP,0x4                         ; 00572afa
    POP EBX                             ; 00572afd
    RET                                 ; 00572afe

