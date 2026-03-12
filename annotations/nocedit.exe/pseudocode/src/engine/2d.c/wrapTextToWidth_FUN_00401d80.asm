; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_wrapTextToWidth_FUN_00401d80(char *input_text,int max_width,char *output_buffer)
;
; Parameters:
; char *           Stack[0x4]:4   input_text
; int              Stack[0x8]:4   max_width
; char *           Stack[0xc]:4   output_buffer
; Local Variables:
; char[256]        Stack[-0x114]:256  acStack_114
; int              Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   uchar[257] g_CharacterClassificationTable
;
; Called Functions:
;   engine_2d.c_getStringWidth_FUN_004018a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401d80
        ;   Label: engine_2d.c_wrapTextToWidth_FUN_00401d80
    PUSH ESI                            ; 00401d81
    PUSH EDI                            ; 00401d82
    PUSH EBP                            ; 00401d83
    SUB ESP,0x104                       ; 00401d84
    MOV ESI,dword ptr [ESP + 0x118]     ; 00401d8a
    MOV EDX,0x1                         ; 00401d91
    MOV AH,byte ptr [ESI]               ; 00401d96
    MOV dword ptr [ESP + 0x100],EDX     ; 00401d98
    TEST AH,AH                          ; 00401d9f
    JNZ 0x00401db8                      ; 00401da1
        ;   XREF to: 00401db8 (CONDITIONAL_JUMP)  ; LAB_00401db8
    MOV EAX,dword ptr [ESP + 0x120]     ; 00401da3
    MOV byte ptr [EAX],0x0              ; 00401daa
    ADD ESP,0x104                       ; 00401dad
        ;   Label: LAB_00401dad
    POP EBP                             ; 00401db3
    POP EDI                             ; 00401db4
    POP ESI                             ; 00401db5
    POP EBX                             ; 00401db6
    RET                                 ; 00401db7
    MOV EDI,dword ptr [ESP + 0x120]     ; 00401db8
        ;   Label: LAB_00401db8
    PUSH EDI                            ; 00401dbf
    MOV AL,byte ptr [ESI]               ; 00401dc0
        ;   Label: LAB_00401dc0
    MOV byte ptr [EDI],AL               ; 00401dc2
    CMP AL,0x0                          ; 00401dc4
    JZ 0x00401dd8                       ; 00401dc6
        ;   XREF to: 00401dd8 (CONDITIONAL_JUMP)  ; LAB_00401dd8
    MOV AL,byte ptr [ESI + 0x1]         ; 00401dc8
    ADD ESI,0x2                         ; 00401dcb
    MOV byte ptr [EDI + 0x1],AL         ; 00401dce
    ADD EDI,0x2                         ; 00401dd1
    CMP AL,0x0                          ; 00401dd4
    JNZ 0x00401dc0                      ; 00401dd6
        ;   XREF to: 00401dc0 (CONDITIONAL_JUMP)  ; LAB_00401dc0
    POP EDI                             ; 00401dd8
        ;   Label: LAB_00401dd8
    PUSH EDI                            ; 00401dd9
    CALL engine_2d.c_getStringWidth_FUN_004018a0 ; 00401dda
        ;   XREF to: 004018a0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getStringWidth_FUN_004018a0(char * text)
    ADD ESP,0x4                         ; 00401ddf
    CMP EAX,dword ptr [ESP + 0x11c]     ; 00401de2
    JLE 0x00401dad                      ; 00401de9
        ;   XREF to: 00401dad (CONDITIONAL_JUMP)  ; LAB_00401dad
    MOV EBP,EDI                         ; 00401deb
    MOV EBX,EDI                         ; 00401ded
    MOV DL,byte ptr [EBX]               ; 00401def
        ;   Label: LAB_00401def
    TEST DL,DL                          ; 00401df1
    JZ 0x00401e0b                       ; 00401df3
        ;   XREF to: 00401e0b (CONDITIONAL_JUMP)  ; LAB_00401e0b
    MOV AL,DL                           ; 00401df5
    INC AL                              ; 00401df7
    AND EAX,0xff                        ; 00401df9
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 00401dfe | g_CharacterClassificationTable
    JZ 0x00401e96                       ; 00401e05
        ;   XREF to: 00401e96 (CONDITIONAL_JUMP)  ; LAB_00401e96
    MOV EDX,EBX                         ; 00401e0b
        ;   Label: LAB_00401e0b
    MOV EDI,ESP                         ; 00401e0d
    SUB EDX,EBP                         ; 00401e0f
    MOV ESI,EBP                         ; 00401e11
    MOV ECX,EDX                         ; 00401e13
    PUSH EDI                            ; 00401e15
    MOV EAX,ECX                         ; 00401e16
    SHR ECX,0x2                         ; 00401e18
    MOVSD.REP ES:EDI,ESI                ; 00401e1b
    MOV CL,AL                           ; 00401e1d
    AND CL,0x3                          ; 00401e1f
    MOVSB.REP ES:EDI,ESI                ; 00401e22
    POP EDI                             ; 00401e24
    MOV EAX,ESP                         ; 00401e25
    XOR CH,CH                           ; 00401e27
    PUSH EAX                            ; 00401e29
    MOV byte ptr [ESP + EDX*0x1 + 0x4],CH ; 00401e2a
    CALL engine_2d.c_getStringWidth_FUN_004018a0 ; 00401e2e
        ;   XREF to: 004018a0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getStringWidth_FUN_004018a0(char * text)
    ADD ESP,0x4                         ; 00401e33
    CMP EAX,dword ptr [ESP + 0x11c]     ; 00401e36
    JLE 0x00401e65                      ; 00401e3d
        ;   XREF to: 00401e65 (CONDITIONAL_JUMP)  ; LAB_00401e65
    MOV AL,byte ptr [EBX + -0x1]        ; 00401e3f
    DEC EBX                             ; 00401e42
    CMP AL,0xa                          ; 00401e43
    JZ 0x00401e55                       ; 00401e45
        ;   XREF to: 00401e55 (CONDITIONAL_JUMP)  ; LAB_00401e55
    CMP byte ptr [EBX],0x20             ; 00401e47
        ;   Label: LAB_00401e47
    JZ 0x00401e55                       ; 00401e4a
        ;   XREF to: 00401e55 (CONDITIONAL_JUMP)  ; LAB_00401e55
    MOV DL,byte ptr [EBX + -0x1]        ; 00401e4c
    DEC EBX                             ; 00401e4f
    CMP DL,0xa                          ; 00401e50
    JNZ 0x00401e47                      ; 00401e53
        ;   XREF to: 00401e47 (CONDITIONAL_JUMP)  ; LAB_00401e47
    MOV EDI,dword ptr [ESP + 0x120]     ; 00401e55
        ;   Label: LAB_00401e55
    MOV EAX,EBX                         ; 00401e5c
    SUB EAX,EDI                         ; 00401e5e
    ADD EAX,EDI                         ; 00401e60
    MOV byte ptr [EAX],0xa              ; 00401e62
    CMP byte ptr [EBX],0xa              ; 00401e65
        ;   Label: LAB_00401e65
    JNZ 0x00401e6d                      ; 00401e68
        ;   XREF to: 00401e6d (CONDITIONAL_JUMP)  ; LAB_00401e6d
    LEA EBP,[EBX + 0x1]                 ; 00401e6a
    CMP byte ptr [EBX],0x0              ; 00401e6d
        ;   Label: LAB_00401e6d
    JNZ 0x00401e7b                      ; 00401e70
        ;   XREF to: 00401e7b (CONDITIONAL_JUMP)  ; LAB_00401e7b
    XOR ECX,ECX                         ; 00401e72
    MOV dword ptr [ESP + 0x100],ECX     ; 00401e74
    MOV ESI,dword ptr [ESP + 0x100]     ; 00401e7b
        ;   Label: LAB_00401e7b
    INC EBX                             ; 00401e82
    TEST ESI,ESI                        ; 00401e83
    JNZ 0x00401def                      ; 00401e85
        ;   XREF to: 00401def (CONDITIONAL_JUMP)  ; LAB_00401def
    ADD ESP,0x104                       ; 00401e8b
    POP EBP                             ; 00401e91
    POP EDI                             ; 00401e92
    POP ESI                             ; 00401e93
    POP EBX                             ; 00401e94
    RET                                 ; 00401e95
    CMP DL,0xa                          ; 00401e96
        ;   Label: LAB_00401e96
    JZ 0x00401e0b                       ; 00401e99
        ;   XREF to: 00401e0b (CONDITIONAL_JUMP)  ; LAB_00401e0b
    JMP 0x00401e7b                      ; 00401e9f
        ;   XREF to: 00401e7b (UNCONDITIONAL_JUMP)  ; LAB_00401e7b

