; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_00572d90(char *param_1)
;
;
; XREF[1]:
;   FUN_005710a0 at 005710f3
;
; Called Functions:
;   crt_locale.c_mblen_FUN_0056da50
;   crt_locale.c_wchar_to_bytes_FUN_0056da30
;   crt_string.c_mbstring_termination_check_FUN_00570ca0
;   crt_string.c_mbtowc_next_FUN_0056da80
;   crt_string.c_mbtowc_peek_FUN_0056d9f0
;   FUN_00572d50
;   FUN_00573db0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572d90
        ;   Label: FUN_00572d90
    PUSH ESI                            ; 00572d91
    SUB ESP,0x4                         ; 00572d92
    MOV ESI,dword ptr [ESP + 0x10]      ; 00572d95
    MOV EBX,ESI                         ; 00572d99
    PUSH EBX                            ; 00572d9b
        ;   Label: LAB_00572d9b
    CALL crt_string.c_mbstring_termination_check_FUN_00570ca0 ; 00572d9c
        ;   XREF to: 00570ca0 (UNCONDITIONAL_CALL)  ; int crt_string.c_mbstring_termination_check_FUN_00570ca0(char * str)
    ADD ESP,0x4                         ; 00572da1
    TEST EAX,EAX                        ; 00572da4
    JNZ 0x00572def                      ; 00572da6
        ;   XREF to: 00572def (CONDITIONAL_JUMP)  ; LAB_00572def
    PUSH EBX                            ; 00572da8
    CALL crt_string.c_mbtowc_peek_FUN_0056d9f0 ; 00572da9
        ;   XREF to: 0056d9f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_mbtowc_peek_FUN_0056d9f0(char * str)
    ADD ESP,0x4                         ; 00572dae
    PUSH EAX                            ; 00572db1
    CALL FUN_00573db0                   ; 00572db2
        ;   XREF to: 00573db0 (UNCONDITIONAL_CALL)  ; undefined FUN_00573db0()
    ADD ESP,0x4                         ; 00572db7
    MOV EDX,ESP                         ; 00572dba
    PUSH EDX                            ; 00572dbc
    PUSH EAX                            ; 00572dbd
    CALL crt_locale.c_wchar_to_bytes_FUN_0056da30 ; 00572dbe
        ;   XREF to: 0056da30 (UNCONDITIONAL_CALL)  ; void crt_locale.c_wchar_to_bytes_FUN_0056da30(wchar_t character, char * output_buffer)
    ADD ESP,0x8                         ; 00572dc3
    MOV EAX,ESP                         ; 00572dc6
    PUSH EAX                            ; 00572dc8
    CALL crt_locale.c_mblen_FUN_0056da50 ; 00572dc9
        ;   XREF to: 0056da50 (UNCONDITIONAL_CALL)  ; int crt_locale.c_mblen_FUN_0056da50(char * mb_string)
    ADD ESP,0x4                         ; 00572dce
    XOR DL,DL                           ; 00572dd1
    MOV byte ptr [ESP + EAX*0x1],DL     ; 00572dd3
    MOV EAX,ESP                         ; 00572dd6
    PUSH EAX                            ; 00572dd8
    PUSH EBX                            ; 00572dd9
    CALL FUN_00572d50                   ; 00572dda
        ;   XREF to: 00572d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00572d50()
    ADD ESP,0x8                         ; 00572ddf
    PUSH EBX                            ; 00572de2
    CALL crt_string.c_mbtowc_next_FUN_0056da80 ; 00572de3
        ;   XREF to: 0056da80 (UNCONDITIONAL_CALL)  ; char * crt_string.c_mbtowc_next_FUN_0056da80(char * str)
    MOV EBX,EAX                         ; 00572de8
    ADD ESP,0x4                         ; 00572dea
    JMP 0x00572d9b                      ; 00572ded
        ;   XREF to: 00572d9b (UNCONDITIONAL_JUMP)  ; LAB_00572d9b
    MOV EAX,ESI                         ; 00572def
        ;   Label: LAB_00572def
    ADD ESP,0x4                         ; 00572df1
    POP ESI                             ; 00572df4
    POP EBX                             ; 00572df5
    RET                                 ; 00572df6

