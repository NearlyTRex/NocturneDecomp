; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00521d80(void)
;
;
; Referenced Globals:
;   TerminatedCString s_anon_005922e5
;   undefined4 DAT_005c168c
;
; Called Functions:
;   crt_string.c_memmove_FUN_00566170
;   crt_string.c_strstr_FUN_00566fe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521d80
        ;   Label: sound_sndmain.cpp_FUN_00521d80
    PUSH ESI                            ; 00521d81
    PUSH EDI                            ; 00521d82
    MOV EBX,dword ptr [ESP + 0x10]      ; 00521d83
    PUSH 0x5922e5                       ; 00521d87 | = "//"
    PUSH EBX                            ; 00521d8c
    CALL crt_string.c_strstr_FUN_00566fe0 ; 00521d8d
        ;   XREF to: 00566fe0 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_strstr_FUN_00566fe0()
    ADD ESP,0x8                         ; 00521d92
    TEST EAX,EAX                        ; 00521d95
    JZ 0x00521d9c                       ; 00521d97
        ;   XREF to: 00521d9c (CONDITIONAL_JUMP)  ; LAB_00521d9c
    MOV byte ptr [EAX],0x0              ; 00521d99
    MOV ESI,EBX                         ; 00521d9c
        ;   Label: LAB_00521d9c
    XOR DL,DL                           ; 00521d9e
    MOV AL,byte ptr [ESI]               ; 00521da0
        ;   Label: LAB_00521da0
    CMP AL,DL                           ; 00521da2
    JZ 0x00521db8                       ; 00521da4
        ;   XREF to: 00521db8 (CONDITIONAL_JUMP)  ; LAB_00521db8
    CMP AL,0x0                          ; 00521da6
    JZ 0x00521db6                       ; 00521da8
        ;   XREF to: 00521db6 (CONDITIONAL_JUMP)  ; LAB_00521db6
    INC ESI                             ; 00521daa
    MOV AL,byte ptr [ESI]               ; 00521dab
    CMP AL,DL                           ; 00521dad
    JZ 0x00521db8                       ; 00521daf
        ;   XREF to: 00521db8 (CONDITIONAL_JUMP)  ; LAB_00521db8
    INC ESI                             ; 00521db1
    CMP AL,0x0                          ; 00521db2
    JNZ 0x00521da0                      ; 00521db4
        ;   XREF to: 00521da0 (CONDITIONAL_JUMP)  ; LAB_00521da0
    SUB ESI,ESI                         ; 00521db6
        ;   Label: LAB_00521db6
    MOV EAX,ESI                         ; 00521db8
        ;   Label: LAB_00521db8
    CMP ESI,EBX                         ; 00521dba
    JBE 0x00521dd2                      ; 00521dbc
        ;   XREF to: 00521dd2 (CONDITIONAL_JUMP)  ; LAB_00521dd2
    MOV CL,byte ptr [EAX + -0x1]        ; 00521dbe
        ;   Label: LAB_00521dbe
    INC CL                              ; 00521dc1
    AND ECX,0xff                        ; 00521dc3
    TEST byte ptr [ECX + 0x5c168c],0x2  ; 00521dc9 | DAT_005c168c
    JNZ 0x00521dee                      ; 00521dd0
        ;   XREF to: 00521dee (CONDITIONAL_JUMP)  ; LAB_00521dee
    LEA ESI,[EBX + 0x1]                 ; 00521dd2
        ;   Label: LAB_00521dd2
    MOV byte ptr [EAX],0x0              ; 00521dd5
    MOV AL,byte ptr [EBX]               ; 00521dd8
        ;   Label: LAB_00521dd8
    INC AL                              ; 00521dda
    AND EAX,0xff                        ; 00521ddc
    TEST byte ptr [EAX + 0x5c168c],0x2  ; 00521de1 | DAT_005c168c
    JNZ 0x00521df5                      ; 00521de8
        ;   XREF to: 00521df5 (CONDITIONAL_JUMP)  ; LAB_00521df5
    POP EDI                             ; 00521dea
    POP ESI                             ; 00521deb
    POP EBX                             ; 00521dec
    RET                                 ; 00521ded
    DEC EAX                             ; 00521dee
        ;   Label: LAB_00521dee
    CMP EAX,EBX                         ; 00521def
    JA 0x00521dbe                       ; 00521df1
        ;   XREF to: 00521dbe (CONDITIONAL_JUMP)  ; LAB_00521dbe
    JMP 0x00521dd2                      ; 00521df3
        ;   XREF to: 00521dd2 (UNCONDITIONAL_JUMP)  ; LAB_00521dd2
    MOV EDI,EBX                         ; 00521df5
        ;   Label: LAB_00521df5
    SUB ECX,ECX                         ; 00521df7
    DEC ECX                             ; 00521df9
    XOR EAX,EAX                         ; 00521dfa
    SCASB.REPNE ES:EDI                  ; 00521dfc
    NOT ECX                             ; 00521dfe
    DEC ECX                             ; 00521e00
    PUSH ECX                            ; 00521e01
    PUSH ESI                            ; 00521e02
    PUSH EBX                            ; 00521e03
    CALL crt_string.c_memmove_FUN_00566170 ; 00521e04
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    ADD ESP,0xc                         ; 00521e09
    JMP 0x00521dd8                      ; 00521e0c
        ;   XREF to: 00521dd8 (UNCONDITIONAL_JUMP)  ; LAB_00521dd8

