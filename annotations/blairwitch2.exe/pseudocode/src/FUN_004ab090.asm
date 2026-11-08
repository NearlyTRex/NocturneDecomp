; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004ab090(undefined4 param_1,char *param_2,char *param_3,int param_4,int param_5,byte param_6,int *param_7)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004ab2b0 at 004ab30b
;
; Referenced Globals:
;   undefined1 DAT_005d6a27
;   TerminatedCString s_engine_font_cpp_005d6a28
;   undefined4 DAT_0061ed94
;
; Called Functions:
;   FUN_004aaf00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ab090
        ;   Label: FUN_004ab090
    PUSH ESI                            ; 004ab091
    PUSH EDI                            ; 004ab092
    PUSH EBP                            ; 004ab093
    SUB ESP,0x10                        ; 004ab094
    MOV AH,byte ptr [ESP + 0x38]        ; 004ab097
    XOR EBX,EBX                         ; 004ab09b
    XOR EDI,EDI                         ; 004ab09d
    TEST AH,0x40                        ; 004ab09f
    JNZ 0x004ab147                      ; 004ab0a2
        ;   XREF to: 004ab147 (CONDITIONAL_JUMP)  ; LAB_004ab147
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004ab0a8
    MOV byte ptr [EAX],0x0              ; 004ab0ac
    CMP dword ptr [ESP + 0x28],0x0      ; 004ab0af
        ;   Label: LAB_004ab0af
    JNZ 0x004ab0be                      ; 004ab0b4
        ;   XREF to: 004ab0be (CONDITIONAL_JUMP)  ; LAB_004ab0be
    MOV dword ptr [ESP + 0x28],0x5d6a27 ; 004ab0b6 | DAT_005d6a27
    TEST byte ptr [ESP + 0x38],0x1      ; 004ab0be
        ;   Label: LAB_004ab0be
    JZ 0x004ab0e5                       ; 004ab0c3
        ;   XREF to: 004ab0e5 (CONDITIONAL_JUMP)  ; LAB_004ab0e5
    MOV ESI,dword ptr [ESP + 0x28]      ; 004ab0c5
    MOV CL,byte ptr [ESP + 0x38]        ; 004ab0c9
    ADD ESI,EBX                         ; 004ab0cd
    MOV AL,byte ptr [ESI]               ; 004ab0cf | DAT_005d6a27 | = "..\\engine\\font.cpp"
        ;   Label: LAB_004ab0cf
    INC AL                              ; 004ab0d1
    AND EAX,0xff                        ; 004ab0d3
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 004ab0d8 | DAT_0061ed94
    JNZ 0x004ab15c                      ; 004ab0df
        ;   XREF to: 004ab15c (CONDITIONAL_JUMP)  ; LAB_004ab15c
    MOV EBP,dword ptr [ESP + 0x30]      ; 004ab0e5
        ;   Label: LAB_004ab0e5
    MOV dword ptr [ESP + 0x4],EDI       ; 004ab0e9
    MOV dword ptr [ESP],EBX             ; 004ab0ed
    DEC EBP                             ; 004ab0f0
    XOR ESI,ESI                         ; 004ab0f1
    MOV dword ptr [ESP + 0x30],EBP      ; 004ab0f3
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004ab0f7
    MOV dword ptr [ESP + 0x8],ESI       ; 004ab0fb
    ADD EBP,EDI                         ; 004ab0ff
    MOV EAX,dword ptr [ESP + 0x28]      ; 004ab101
        ;   Label: LAB_004ab101
    MOV AL,byte ptr [EBX + EAX*0x1]     ; 004ab105 | DAT_005d6a27 | = "..\\engine\\font.cpp"
    AND EAX,0xff                        ; 004ab108
    MOV dword ptr [ESP + 0xc],EAX       ; 004ab10d
    JNZ 0x004ab173                      ; 004ab111
        ;   XREF to: 004ab173 (CONDITIONAL_JUMP)  ; LAB_004ab173
    TEST byte ptr [ESP + 0x38],0x2      ; 004ab113
        ;   Label: LAB_004ab113
    JZ 0x004ab251                       ; 004ab118
        ;   XREF to: 004ab251 (CONDITIONAL_JUMP)  ; LAB_004ab251
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004ab11e
    ADD ESI,EDI                         ; 004ab122
    TEST EDI,EDI                        ; 004ab124
        ;   Label: LAB_004ab124
    JLE 0x004ab251                      ; 004ab126
        ;   XREF to: 004ab251 (CONDITIONAL_JUMP)  ; LAB_004ab251
    MOV AL,byte ptr [ESI + -0x1]        ; 004ab12c
    INC AL                              ; 004ab12f
    AND EAX,0xff                        ; 004ab131
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 004ab136 | DAT_0061ed94
    JZ 0x004ab251                       ; 004ab13d
        ;   XREF to: 004ab251 (CONDITIONAL_JUMP)  ; LAB_004ab251
    DEC EDI                             ; 004ab143
    DEC ESI                             ; 004ab144
    JMP 0x004ab124                      ; 004ab145
        ;   XREF to: 004ab124 (UNCONDITIONAL_JUMP)  ; LAB_004ab124
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004ab147
        ;   Label: LAB_004ab147
    SUB ECX,ECX                         ; 004ab14b
    DEC ECX                             ; 004ab14d
    XOR EAX,EAX                         ; 004ab14e
    SCASB.REPNE ES:EDI                  ; 004ab150
    NOT ECX                             ; 004ab152
    DEC ECX                             ; 004ab154
    MOV EDI,ECX                         ; 004ab155
    JMP 0x004ab0af                      ; 004ab157
        ;   XREF to: 004ab0af (UNCONDITIONAL_JUMP)  ; LAB_004ab0af
    TEST CL,0x8                         ; 004ab15c
        ;   Label: LAB_004ab15c
    JNZ 0x004ab168                      ; 004ab15f
        ;   XREF to: 004ab168 (CONDITIONAL_JUMP)  ; LAB_004ab168
    INC EBX                             ; 004ab161
        ;   Label: LAB_004ab161
    INC ESI                             ; 004ab162
    JMP 0x004ab0cf                      ; 004ab163
        ;   XREF to: 004ab0cf (UNCONDITIONAL_JUMP)  ; LAB_004ab0cf
    CMP byte ptr [ESI],0xa              ; 004ab168 | DAT_005d6a27
        ;   Label: LAB_004ab168
    JZ 0x004ab0e5                       ; 004ab16b
        ;   XREF to: 004ab0e5 (CONDITIONAL_JUMP)  ; LAB_004ab0e5
    JMP 0x004ab161                      ; 004ab171
        ;   XREF to: 004ab161 (UNCONDITIONAL_JUMP)  ; LAB_004ab161
    LEA ESI,[EBX + 0x1]                 ; 004ab173
        ;   Label: LAB_004ab173
    CMP EAX,0xd                         ; 004ab176
    JNZ 0x004ab189                      ; 004ab179
        ;   XREF to: 004ab189 (CONDITIONAL_JUMP)  ; LAB_004ab189
    MOV dword ptr [ESP],ESI             ; 004ab17b
    MOV dword ptr [ESP + 0x4],EDI       ; 004ab17e
    MOV EBX,ESI                         ; 004ab182
    JMP 0x004ab101                      ; 004ab184
        ;   XREF to: 004ab101 (UNCONDITIONAL_JUMP)  ; LAB_004ab101
    CMP EAX,0xa                         ; 004ab189
        ;   Label: LAB_004ab189
    JNZ 0x004ab1b1                      ; 004ab18c
        ;   XREF to: 004ab1b1 (CONDITIONAL_JUMP)  ; LAB_004ab1b1
    MOV AL,byte ptr [ESP + 0x38]        ; 004ab18e
    MOV EBX,ESI                         ; 004ab192
    TEST AL,0x8                         ; 004ab194
    JNZ 0x004ab1a4                      ; 004ab196
        ;   XREF to: 004ab1a4 (CONDITIONAL_JUMP)  ; LAB_004ab1a4
    MOV dword ptr [ESP + 0x4],EDI       ; 004ab198
    MOV dword ptr [ESP],ESI             ; 004ab19c
    JMP 0x004ab101                      ; 004ab19f
        ;   XREF to: 004ab101 (UNCONDITIONAL_JUMP)  ; LAB_004ab101
    MOV dword ptr [ESP + 0x8],0x3       ; 004ab1a4
        ;   Label: LAB_004ab1a4
    JMP 0x004ab113                      ; 004ab1ac
        ;   XREF to: 004ab113 (UNCONDITIONAL_JUMP)  ; LAB_004ab113
    CMP EDI,dword ptr [ESP + 0x30]      ; 004ab1b1
        ;   Label: LAB_004ab1b1
    JL 0x004ab200                       ; 004ab1b5
        ;   XREF to: 004ab200 (CONDITIONAL_JUMP)  ; LAB_004ab200
    MOV dword ptr [ESP + 0x8],0x1       ; 004ab1b7
    MOV AL,byte ptr [ESP + 0xc]         ; 004ab1bf
        ;   Label: LAB_004ab1bf
    INC AL                              ; 004ab1c3
    AND EAX,0xff                        ; 004ab1c5
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 004ab1ca | DAT_0061ed94
    JNZ 0x004ab113                      ; 004ab1d1
        ;   XREF to: 004ab113 (CONDITIONAL_JUMP)  ; LAB_004ab113
    MOV CL,byte ptr [ESP + 0x38]        ; 004ab1d7
    TEST CL,0x10                        ; 004ab1db
    JNZ 0x004ab113                      ; 004ab1de
        ;   XREF to: 004ab113 (CONDITIONAL_JUMP)  ; LAB_004ab113
    TEST CL,0x20                        ; 004ab1e4
    JZ 0x004ab1f4                       ; 004ab1e7
        ;   XREF to: 004ab1f4 (CONDITIONAL_JUMP)  ; LAB_004ab1f4
    CMP dword ptr [ESP + 0x4],0x0       ; 004ab1e9
    JZ 0x004ab113                       ; 004ab1ee
        ;   XREF to: 004ab113 (CONDITIONAL_JUMP)  ; LAB_004ab113
    MOV EDI,dword ptr [ESP + 0x4]       ; 004ab1f4
        ;   Label: LAB_004ab1f4
    MOV EBX,dword ptr [ESP]             ; 004ab1f8
    JMP 0x004ab113                      ; 004ab1fb
        ;   XREF to: 004ab113 (UNCONDITIONAL_JUMP)  ; LAB_004ab113
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004ab200
        ;   Label: LAB_004ab200
    PUSH EDX                            ; 004ab204
    MOV ECX,dword ptr [ESP + 0x28]      ; 004ab205
    PUSH ECX                            ; 004ab209
    MOV byte ptr [EBP],0x0              ; 004ab20a
    CALL FUN_004aaf00                   ; 004ab20e
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; undefined FUN_004aaf00()
    ADD ESP,0x8                         ; 004ab213
    CMP EAX,dword ptr [ESP + 0x34]      ; 004ab216
    JLE 0x004ab226                      ; 004ab21a
        ;   XREF to: 004ab226 (CONDITIONAL_JUMP)  ; LAB_004ab226
    MOV dword ptr [ESP + 0x8],0x2       ; 004ab21c
    JMP 0x004ab1bf                      ; 004ab224
        ;   XREF to: 004ab1bf (UNCONDITIONAL_JUMP)  ; LAB_004ab1bf
    MOV AL,byte ptr [ESP + 0xc]         ; 004ab226
        ;   Label: LAB_004ab226
    INC EBP                             ; 004ab22a
    INC EDI                             ; 004ab22b
    MOV EBX,ESI                         ; 004ab22c
    MOV byte ptr [EBP + -0x1],AL        ; 004ab22e
    INC AL                              ; 004ab231
    AND EAX,0xff                        ; 004ab233
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 004ab238 | DAT_0061ed94
    JZ 0x004ab101                       ; 004ab23f
        ;   XREF to: 004ab101 (CONDITIONAL_JUMP)  ; LAB_004ab101
    MOV dword ptr [ESP + 0x4],EDI       ; 004ab245
    MOV dword ptr [ESP],ESI             ; 004ab249
    JMP 0x004ab101                      ; 004ab24c
        ;   XREF to: 004ab101 (UNCONDITIONAL_JUMP)  ; LAB_004ab101
    ADD EDI,dword ptr [ESP + 0x2c]      ; 004ab251
        ;   Label: LAB_004ab251
    MOV DH,byte ptr [ESP + 0x38]        ; 004ab255
    MOV byte ptr [EDI],0x0              ; 004ab259
    TEST DH,0x4                         ; 004ab25c
    JZ 0x004ab28b                       ; 004ab25f
        ;   XREF to: 004ab28b (CONDITIONAL_JUMP)  ; LAB_004ab28b
    MOV ESI,dword ptr [ESP + 0x28]      ; 004ab261
    MOV CH,byte ptr [ESP + 0x38]        ; 004ab265
    ADD ESI,EBX                         ; 004ab269
    MOV AL,byte ptr [ESI]               ; 004ab26b | DAT_005d6a27 | = "..\\engine\\font.cpp"
        ;   Label: LAB_004ab26b
    INC AL                              ; 004ab26d
    AND EAX,0xff                        ; 004ab26f
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 004ab274 | DAT_0061ed94
    JZ 0x004ab28b                       ; 004ab27b
        ;   XREF to: 004ab28b (CONDITIONAL_JUMP)  ; LAB_004ab28b
    TEST CH,0x8                         ; 004ab27d
    JNZ 0x004ab286                      ; 004ab280
        ;   XREF to: 004ab286 (CONDITIONAL_JUMP)  ; LAB_004ab286
    INC EBX                             ; 004ab282
        ;   Label: LAB_004ab282
    INC ESI                             ; 004ab283
    JMP 0x004ab26b                      ; 004ab284
        ;   XREF to: 004ab26b (UNCONDITIONAL_JUMP)  ; LAB_004ab26b
    CMP byte ptr [ESI],0xa              ; 004ab286 | = "..\\engine\\font.cpp"
        ;   Label: LAB_004ab286
    JNZ 0x004ab282                      ; 004ab289
        ;   XREF to: 004ab282 (CONDITIONAL_JUMP)  ; LAB_004ab282
    MOV ECX,dword ptr [ESP + 0x3c]      ; 004ab28b
        ;   Label: LAB_004ab28b
    TEST ECX,ECX                        ; 004ab28f
    JNZ 0x004ab29f                      ; 004ab291
        ;   XREF to: 004ab29f (CONDITIONAL_JUMP)  ; LAB_004ab29f
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ab293
    ADD ESP,0x10                        ; 004ab297
    POP EBP                             ; 004ab29a
    POP EDI                             ; 004ab29b
    POP ESI                             ; 004ab29c
    POP EBX                             ; 004ab29d
    RET                                 ; 004ab29e
    MOV dword ptr [ECX],EBX             ; 004ab29f
        ;   Label: LAB_004ab29f
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ab2a1
    ADD ESP,0x10                        ; 004ab2a5
    POP EBP                             ; 004ab2a8
    POP EDI                             ; 004ab2a9
    POP ESI                             ; 004ab2aa
    POP EBX                             ; 004ab2ab
    RET                                 ; 004ab2ac

