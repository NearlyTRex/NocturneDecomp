; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_2d_c_wrapTextToWidth_FUN_00401d90(void)
;
;
; Called Functions:
;   engine_2d.c_getStringWidth_FUN_004018b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401d90
        ;   Label: engine_2d.c_wrapTextToWidth_FUN_00401d90
    PUSH ESI                            ; 00401d91
    PUSH EDI                            ; 00401d92
    PUSH EBP                            ; 00401d93
    SUB ESP,0x104                       ; 00401d94
    MOV ESI,dword ptr [ESP + 0x118]     ; 00401d9a
    MOV EDX,0x1                         ; 00401da1
    MOV AH,byte ptr [ESI]               ; 00401da6
    MOV dword ptr [ESP + 0x100],EDX     ; 00401da8
    TEST AH,AH                          ; 00401daf
    JNZ 0x00401dc8                      ; 00401db1
        ;   XREF to: 00401dc8 (CONDITIONAL_JUMP)  ; LAB_00401dc8
    MOV EAX,dword ptr [ESP + 0x120]     ; 00401db3
    MOV byte ptr [EAX],0x0              ; 00401dba
    ADD ESP,0x104                       ; 00401dbd
        ;   Label: LAB_00401dbd
    POP EBP                             ; 00401dc3
    POP EDI                             ; 00401dc4
    POP ESI                             ; 00401dc5
    POP EBX                             ; 00401dc6
    RET                                 ; 00401dc7
    MOV EDI,dword ptr [ESP + 0x120]     ; 00401dc8
        ;   Label: LAB_00401dc8
    PUSH EDI                            ; 00401dcf
    MOV AL,byte ptr [ESI]               ; 00401dd0
        ;   Label: LAB_00401dd0
    MOV byte ptr [EDI],AL               ; 00401dd2
    CMP AL,0x0                          ; 00401dd4
    JZ 0x00401de8                       ; 00401dd6
        ;   XREF to: 00401de8 (CONDITIONAL_JUMP)  ; LAB_00401de8
    MOV AL,byte ptr [ESI + 0x1]         ; 00401dd8
    ADD ESI,0x2                         ; 00401ddb
    MOV byte ptr [EDI + 0x1],AL         ; 00401dde
    ADD EDI,0x2                         ; 00401de1
    CMP AL,0x0                          ; 00401de4
    JNZ 0x00401dd0                      ; 00401de6
        ;   XREF to: 00401dd0 (CONDITIONAL_JUMP)  ; LAB_00401dd0
    POP EDI                             ; 00401de8
        ;   Label: LAB_00401de8
    PUSH EDI                            ; 00401de9
    CALL engine_2d.c_getStringWidth_FUN_004018b0 ; 00401dea
        ;   XREF to: 004018b0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getStringWidth_FUN_004018b0(char * text)
    ADD ESP,0x4                         ; 00401def
    CMP EAX,dword ptr [ESP + 0x11c]     ; 00401df2
    JLE 0x00401dbd                      ; 00401df9
        ;   XREF to: 00401dbd (CONDITIONAL_JUMP)  ; LAB_00401dbd
    MOV EBP,EDI                         ; 00401dfb
    MOV EBX,EDI                         ; 00401dfd
    MOV DL,byte ptr [EBX]               ; 00401dff
        ;   Label: LAB_00401dff
    TEST DL,DL                          ; 00401e01
    JZ 0x00401e1b                       ; 00401e03
        ;   XREF to: 00401e1b (CONDITIONAL_JUMP)  ; LAB_00401e1b
    MOV AL,DL                           ; 00401e05
    INC AL                              ; 00401e07
    AND EAX,0xff                        ; 00401e09
    TEST byte ptr [EAX + 0x626114],0x2  ; 00401e0e
    JZ 0x00401ea6                       ; 00401e15
        ;   XREF to: 00401ea6 (CONDITIONAL_JUMP)  ; LAB_00401ea6
    MOV EDX,EBX                         ; 00401e1b
        ;   Label: LAB_00401e1b
    MOV EDI,ESP                         ; 00401e1d
    SUB EDX,EBP                         ; 00401e1f
    MOV ESI,EBP                         ; 00401e21
    MOV ECX,EDX                         ; 00401e23
    PUSH EDI                            ; 00401e25
    MOV EAX,ECX                         ; 00401e26
    SHR ECX,0x2                         ; 00401e28
    MOVSD.REP ES:EDI,ESI                ; 00401e2b
    MOV CL,AL                           ; 00401e2d
    AND CL,0x3                          ; 00401e2f
    MOVSB.REP ES:EDI,ESI                ; 00401e32
    POP EDI                             ; 00401e34
    MOV EAX,ESP                         ; 00401e35
    XOR CH,CH                           ; 00401e37
    PUSH EAX                            ; 00401e39
    MOV byte ptr [ESP + EDX*0x1 + 0x4],CH ; 00401e3a
    CALL engine_2d.c_getStringWidth_FUN_004018b0 ; 00401e3e
        ;   XREF to: 004018b0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getStringWidth_FUN_004018b0(char * text)
    ADD ESP,0x4                         ; 00401e43
    CMP EAX,dword ptr [ESP + 0x11c]     ; 00401e46
    JLE 0x00401e75                      ; 00401e4d
        ;   XREF to: 00401e75 (CONDITIONAL_JUMP)  ; LAB_00401e75
    MOV AL,byte ptr [EBX + -0x1]        ; 00401e4f
    DEC EBX                             ; 00401e52
    CMP AL,0xa                          ; 00401e53
    JZ 0x00401e65                       ; 00401e55
        ;   XREF to: 00401e65 (CONDITIONAL_JUMP)  ; LAB_00401e65
    CMP byte ptr [EBX],0x20             ; 00401e57
        ;   Label: LAB_00401e57
    JZ 0x00401e65                       ; 00401e5a
        ;   XREF to: 00401e65 (CONDITIONAL_JUMP)  ; LAB_00401e65
    MOV DL,byte ptr [EBX + -0x1]        ; 00401e5c
    DEC EBX                             ; 00401e5f
    CMP DL,0xa                          ; 00401e60
    JNZ 0x00401e57                      ; 00401e63
        ;   XREF to: 00401e57 (CONDITIONAL_JUMP)  ; LAB_00401e57
    MOV EDI,dword ptr [ESP + 0x120]     ; 00401e65
        ;   Label: LAB_00401e65
    MOV EAX,EBX                         ; 00401e6c
    SUB EAX,EDI                         ; 00401e6e
    ADD EAX,EDI                         ; 00401e70
    MOV byte ptr [EAX],0xa              ; 00401e72
    CMP byte ptr [EBX],0xa              ; 00401e75
        ;   Label: LAB_00401e75
    JNZ 0x00401e7d                      ; 00401e78
        ;   XREF to: 00401e7d (CONDITIONAL_JUMP)  ; LAB_00401e7d
    LEA EBP,[EBX + 0x1]                 ; 00401e7a
    CMP byte ptr [EBX],0x0              ; 00401e7d
        ;   Label: LAB_00401e7d
    JNZ 0x00401e8b                      ; 00401e80
        ;   XREF to: 00401e8b (CONDITIONAL_JUMP)  ; LAB_00401e8b
    XOR ECX,ECX                         ; 00401e82
    MOV dword ptr [ESP + 0x100],ECX     ; 00401e84
    MOV ESI,dword ptr [ESP + 0x100]     ; 00401e8b
        ;   Label: LAB_00401e8b
    INC EBX                             ; 00401e92
    TEST ESI,ESI                        ; 00401e93
    JNZ 0x00401dff                      ; 00401e95
        ;   XREF to: 00401dff (CONDITIONAL_JUMP)  ; LAB_00401dff
    ADD ESP,0x104                       ; 00401e9b
    POP EBP                             ; 00401ea1
    POP EDI                             ; 00401ea2
    POP ESI                             ; 00401ea3
    POP EBX                             ; 00401ea4
    RET                                 ; 00401ea5
    CMP DL,0xa                          ; 00401ea6
        ;   Label: LAB_00401ea6
    JZ 0x00401e1b                       ; 00401ea9
        ;   XREF to: 00401e1b (CONDITIONAL_JUMP)  ; LAB_00401e1b
    JMP 0x00401e8b                      ; 00401eaf
        ;   XREF to: 00401e8b (UNCONDITIONAL_JUMP)  ; LAB_00401e8b

