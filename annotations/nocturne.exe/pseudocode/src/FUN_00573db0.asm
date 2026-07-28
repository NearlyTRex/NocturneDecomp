; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00573db0(wchar_t param_1)
;
; Local Variables:
; undefined1       Stack[-0xc]:1  local_c
;
; XREF[1]:
;   FUN_00572d90 at 00572db2
;
; Referenced Globals:
;   void* PTR_CharUpperBuffA_00575414 = 001758f2
;   undefined4 DAT_005c2144
;   undefined4 DAT_02de5c30
;
; Called Functions:
;   CharUpperBuffA
;   crt_locale.c_fullwidth_toupper_FUN_00574520
;   crt_locale.c_mblen_FUN_0056da50
;   crt_locale.c_wchar_to_bytes_FUN_0056da30
;   crt_string.c_mbtowc_peek_FUN_0056d9f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573db0
        ;   Label: FUN_00573db0
    PUSH ESI                            ; 00573db1
    SUB ESP,0x4                         ; 00573db2
    MOV EAX,ESP                         ; 00573db5
    PUSH EAX                            ; 00573db7
    MOV EDX,dword ptr [ESP + 0x14]      ; 00573db8
    PUSH EDX                            ; 00573dbc
    CALL crt_locale.c_wchar_to_bytes_FUN_0056da30 ; 00573dbd
        ;   XREF to: 0056da30 (UNCONDITIONAL_CALL)  ; void crt_locale.c_wchar_to_bytes_FUN_0056da30(wchar_t character, char * output_buffer)
    ADD ESP,0x8                         ; 00573dc2
    MOV EAX,ESP                         ; 00573dc5
    PUSH EAX                            ; 00573dc7
    CALL crt_locale.c_mblen_FUN_0056da50 ; 00573dc8
        ;   XREF to: 0056da50 (UNCONDITIONAL_CALL)  ; int crt_locale.c_mblen_FUN_0056da50(char * mb_string)
    ADD ESP,0x4                         ; 00573dcd
    XOR DL,DL                           ; 00573dd0
    MOV EBX,dword ptr [0x005c2144]      ; 00573dd2 | DAT_005c2144
    MOV byte ptr [ESP + EAX*0x1],DL     ; 00573dd8
    CMP EBX,0x3a4                       ; 00573ddb
    JNZ 0x00573e0c                      ; 00573de1
        ;   XREF to: 00573e0c (CONDITIONAL_JUMP)  ; LAB_00573e0c
    CMP dword ptr [0x02de5c30],0x0      ; 00573de3 | DAT_02de5c30
    JZ 0x00573e0c                       ; 00573dea
        ;   XREF to: 00573e0c (CONDITIONAL_JUMP)  ; LAB_00573e0c
    XOR EAX,EAX                         ; 00573dec
    MOV AL,byte ptr [ESP]               ; 00573dee
    MOV AL,byte ptr [EAX + 0x2de5c41]   ; 00573df1
    AND AL,0x1                          ; 00573df7
    AND EAX,0xff                        ; 00573df9
    JZ 0x00573e0c                       ; 00573dfe
        ;   XREF to: 00573e0c (CONDITIONAL_JUMP)  ; LAB_00573e0c
    MOV ESI,dword ptr [ESP + 0x10]      ; 00573e00
    PUSH ESI                            ; 00573e04
    CALL crt_locale.c_fullwidth_toupper_FUN_00574520 ; 00573e05
        ;   XREF to: 00574520 (UNCONDITIONAL_CALL)  ; wchar_t crt_locale.c_fullwidth_toupper_FUN_00574520(wchar_t character)
    JMP 0x00573e22                      ; 00573e0a
        ;   XREF to: 00573e22 (UNCONDITIONAL_JUMP)  ; LAB_00573e22
    PUSH 0x1                            ; 00573e0c
        ;   Label: LAB_00573e0c
    LEA EAX,[ESP + 0x4]                 ; 00573e0e
    PUSH EAX                            ; 00573e12
    CALL dword ptr CS:[0x575414]        ; 00573e13 | PTR_CharUpperBuffA_00575414
    MOV EAX,ESP                         ; 00573e1a
    PUSH EAX                            ; 00573e1c
    CALL crt_string.c_mbtowc_peek_FUN_0056d9f0 ; 00573e1d
        ;   XREF to: 0056d9f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_mbtowc_peek_FUN_0056d9f0(char * str)
    ADD ESP,0x4                         ; 00573e22
        ;   Label: LAB_00573e22
    ADD ESP,0x4                         ; 00573e25
    POP ESI                             ; 00573e28
    POP EBX                             ; 00573e29
    RET                                 ; 00573e2a

