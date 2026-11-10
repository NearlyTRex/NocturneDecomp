; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00486120(int param_1,int param_2)
;
; Local Variables:
; undefined1       Stack[-0xdc]:1  local_dc
; undefined1       Stack[-0xdb]:1  local_db
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   shape_edittool.cpp_CPickList_renderDialog_FUN_004843d0 at 00484612
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047c8e0 at 0047cb49
;   shape_edittool.cpp_showMultiChoiceDialog_FUN_0047d230 at 0047d87c
;   shape_edittool.cpp_showTextInputDialog_FUN_0047c2c0 at 0047c4d3
;
; Referenced Globals:
;   undefined4 DAT_01c5b0e0
;   undefined4 DAT_01c5baec
;   undefined4 DAT_01c5bb60
;   undefined4 DAT_01c6af98
;   undefined4 DAT_01c6af99
;   undefined4 DAT_01c6af9a
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01c6b5c0
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005a4120
;   engine_2d.c_drawHLine_FUN_00402f30
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004b30c0
;   engine_font.cpp_CBitFont_getCharYOffset_FUN_004b3120
;   engine_font.cpp_CBitFont_getTextHeight_FUN_004b2b30
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80
;   engine_font.cpp_FUN_004b0a20
;   engine_mini3d.cpp_FUN_004f3520
;   engine_mini3d.cpp_FUN_004f3ab0
;   shape_edittool.cpp_FUN_0047b5e0
;   shape_edittool.cpp_FUN_004850a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00486120
        ;   Label: shape_edittool.cpp_FUN_00486120
    PUSH ESI                            ; 00486121
    PUSH EDI                            ; 00486122
    PUSH EBP                            ; 00486123
    SUB ESP,0xcc                        ; 00486124
    MOV EBX,dword ptr [ESP + 0xe0]      ; 0048612a
    MOV EDX,dword ptr [EBX + 0x18]      ; 00486131
    PUSH EDX                            ; 00486134
    MOV ECX,dword ptr [EBX + 0x14]      ; 00486135
    PUSH ECX                            ; 00486138
    MOV EDI,dword ptr [EBX + 0x10]      ; 00486139
    PUSH EDI                            ; 0048613c
    MOV EAX,dword ptr [EBX + 0xc]       ; 0048613d
    MOV ESI,dword ptr [0x01c6b5ac]      ; 00486140 | DAT_01c6b5ac
    PUSH EAX                            ; 00486146
    MOV [0x01c6b5ac],EAX                ; 00486147 | DAT_01c6b5ac
    MOV EAX,dword ptr [EBX + 0x8]       ; 0048614c
    PUSH EAX                            ; 0048614f
    CALL shape_edittool.cpp_FUN_004850a0 ; 00486150
        ;   XREF to: 004850a0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004850a0()
    ADD ESP,0x14                        ; 00486155
    MOV dword ptr [0x01c6b5ac],ESI      ; 00486158 | DAT_01c6b5ac
    LEA ESI,[EBX + 0x1c]                ; 0048615e
    PUSH ESI                            ; 00486161
    MOV EDX,dword ptr [0x01c5b0e0]      ; 00486162 | DAT_01c5b0e0
    PUSH EDX                            ; 00486168
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80 ; 00486169
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 0048616e
    PUSH ESI                            ; 00486171
    MOV ECX,dword ptr [0x01c5b0e0]      ; 00486172 | DAT_01c5b0e0
    PUSH ECX                            ; 00486178
    MOV EBP,EAX                         ; 00486179
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_004b2b30 ; 0048617b
        ;   XREF to: 004b2b30 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextHeight_FUN_004b2b30(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 00486180
    PUSH 0x41                           ; 00486183
    MOV EDI,EAX                         ; 00486185
    MOV EAX,[0x01c5b0e0]                ; 00486187 | DAT_01c5b0e0
    PUSH EAX                            ; 0048618c
    CALL engine_font.cpp_CBitFont_getCharYOffset_FUN_004b3120 ; 0048618d
        ;   XREF to: 004b3120 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharYOffset_FUN_004b3120(CBitFont * this_ptr, int char_code)
    MOV EDX,dword ptr [EBX + 0x10]      ; 00486192
    ADD EDI,EAX                         ; 00486195
    ADD EDX,dword ptr [EBX + 0x8]       ; 00486197
    SUB EDX,EBP                         ; 0048619a
    MOV EAX,EDX                         ; 0048619c
    SAR EDX,0x1f                        ; 0048619e
    SUB EAX,EDX                         ; 004861a1
    SAR EAX,0x1                         ; 004861a3
    MOV ECX,dword ptr [EBX + 0x14]      ; 004861a5
    MOV EDX,dword ptr [EBX + 0xc]       ; 004861a8
    ADD EDX,ECX                         ; 004861ab
    MOV EBP,dword ptr [EBX + 0x18]      ; 004861ad
    SUB EDX,EDI                         ; 004861b0
    ADD EBP,EAX                         ; 004861b2
    MOV EAX,EDX                         ; 004861b4
    SAR EDX,0x1f                        ; 004861b6
    SUB EAX,EDX                         ; 004861b9
    SAR EAX,0x1                         ; 004861bb
    ADD ESP,0x8                         ; 004861bd
    PUSH -0x1                           ; 004861c0
    MOV EDI,dword ptr [0x01c5bb60]      ; 004861c2 | DAT_01c5bb60
    MOV EDX,dword ptr [EBX + 0x18]      ; 004861c8
    PUSH EDI                            ; 004861cb
    ADD EDX,EAX                         ; 004861cc
    PUSH EDX                            ; 004861ce
    PUSH EBP                            ; 004861cf
    PUSH ESI                            ; 004861d0
    MOV dword ptr [ESP + 0xdc],EDX      ; 004861d1
    MOV EDX,dword ptr [0x01c5b0e0]      ; 004861d8 | DAT_01c5b0e0
    PUSH EDX                            ; 004861de
    CALL engine_font.cpp_FUN_004b0a20   ; 004861df
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01c5bb60]                ; 004861e4 | DAT_01c5bb60
    MOV ECX,dword ptr [0x01c5baec]      ; 004861e9 | DAT_01c5baec
    ADD ESP,0x18                        ; 004861ef
    TEST ECX,ECX                        ; 004861f2
    JNZ 0x00486253                      ; 004861f4
        ;   XREF to: 00486253 (CONDITIONAL_JUMP)  ; LAB_00486253
    MOV [0x01c6b5c0],EAX                ; 004861f6 | DAT_01c6b5c0
    CMP dword ptr [ESP + 0xe4],0x0      ; 004861fb
        ;   Label: LAB_004861fb
    JNZ 0x00486292                      ; 00486203
        ;   XREF to: 00486292 (CONDITIONAL_JUMP)  ; LAB_00486292
    MOV EDI,ESP                         ; 00486209
        ;   Label: LAB_00486209
    LEA ESI,[EBX + 0x1c]                ; 0048620b
    PUSH EDI                            ; 0048620e
    MOV AL,byte ptr [ESI]               ; 0048620f
        ;   Label: LAB_0048620f
    MOV byte ptr [EDI],AL               ; 00486211
    CMP AL,0x0                          ; 00486213
    JZ 0x00486227                       ; 00486215
        ;   XREF to: 00486227 (CONDITIONAL_JUMP)  ; LAB_00486227
    MOV AL,byte ptr [ESI + 0x1]         ; 00486217
    ADD ESI,0x2                         ; 0048621a
    MOV byte ptr [EDI + 0x1],AL         ; 0048621d
    ADD EDI,0x2                         ; 00486220
    CMP AL,0x0                          ; 00486223
    JNZ 0x0048620f                      ; 00486225
        ;   XREF to: 0048620f (CONDITIONAL_JUMP)  ; LAB_0048620f
    POP EDI                             ; 00486227
        ;   Label: LAB_00486227
    XOR ESI,ESI                         ; 00486228
    MOV EDI,ESP                         ; 0048622a
        ;   Label: LAB_0048622a
    SUB ECX,ECX                         ; 0048622c
    DEC ECX                             ; 0048622e
    XOR EAX,EAX                         ; 0048622f
    SCASB.REPNE ES:EDI                  ; 00486231
    NOT ECX                             ; 00486233
    DEC ECX                             ; 00486235
    CMP ESI,ECX                         ; 00486236
    JNC 0x004862bd                      ; 00486238
        ;   XREF to: 004862bd (CONDITIONAL_JUMP)  ; LAB_004862bd
    XOR EAX,EAX                         ; 0048623e
    MOV AL,byte ptr [ESP + ESI*0x1]     ; 00486240
    PUSH EAX                            ; 00486243
    INC ESI                             ; 00486244
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 00486245
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 0048624a
    MOV byte ptr [ESP + ESI*0x1 + -0x1],AL ; 0048624d
    JMP 0x0048622a                      ; 00486251
        ;   XREF to: 0048622a (UNCONDITIONAL_JUMP)  ; LAB_0048622a
    AND EAX,0xff                        ; 00486253
        ;   Label: LAB_00486253
    MOV EDX,EAX                         ; 00486258
    SHL EAX,0x2                         ; 0048625a
    SUB EAX,EDX                         ; 0048625d
    XOR ECX,ECX                         ; 0048625f
    XOR EDX,EDX                         ; 00486261
    MOV CL,byte ptr [EAX + 0x1c6af98]   ; 00486263 | DAT_01c6af98
    MOV DL,byte ptr [EAX + 0x1c6af99]   ; 00486269 | DAT_01c6af99
    SHL ECX,0x10                        ; 0048626f
    SHL EDX,0x8                         ; 00486272
    MOV AL,byte ptr [EAX + 0x1c6af9a]   ; 00486275 | DAT_01c6af9a
    OR EDX,ECX                          ; 0048627b
    AND EAX,0xff                        ; 0048627d
    OR EAX,EDX                          ; 00486282
    PUSH EAX                            ; 00486284
    CALL engine_mini3d.cpp_FUN_004f3520 ; 00486285
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3520()
    ADD ESP,0x4                         ; 0048628a
    JMP 0x004861fb                      ; 0048628d
        ;   XREF to: 004861fb (UNCONDITIONAL_JUMP)  ; LAB_004861fb
    MOV EAX,dword ptr [EBX + 0x14]      ; 00486292
        ;   Label: LAB_00486292
    PUSH 0x1                            ; 00486295
    SUB EAX,0x4                         ; 00486297
    PUSH EAX                            ; 0048629a
    MOV EAX,dword ptr [EBX + 0x10]      ; 0048629b
    SUB EAX,0x5                         ; 0048629e
    PUSH EAX                            ; 004862a1
    MOV EAX,dword ptr [EBX + 0xc]       ; 004862a2
    ADD EAX,0x3                         ; 004862a5
    PUSH EAX                            ; 004862a8
    MOV EAX,dword ptr [EBX + 0x8]       ; 004862a9
    ADD EAX,0x3                         ; 004862ac
    PUSH EAX                            ; 004862af
    CALL shape_edittool.cpp_FUN_0047b5e0 ; 004862b0
        ;   XREF to: 0047b5e0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047b5e0()
    ADD ESP,0x14                        ; 004862b5
    JMP 0x00486209                      ; 004862b8
        ;   XREF to: 00486209 (UNCONDITIONAL_JUMP)  ; LAB_00486209
    XOR EAX,EAX                         ; 004862bd
        ;   Label: LAB_004862bd
    MOV AL,byte ptr [EBX + 0x4]         ; 004862bf
    PUSH EAX                            ; 004862c2
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004862c3
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004862c8
    MOV ESI,ESP                         ; 004862cb
    MOV DL,AL                           ; 004862cd
    MOV AL,byte ptr [ESI]               ; 004862cf
        ;   Label: LAB_004862cf
    CMP AL,DL                           ; 004862d1
    JZ 0x004862e7                       ; 004862d3
        ;   XREF to: 004862e7 (CONDITIONAL_JUMP)  ; LAB_004862e7
    CMP AL,0x0                          ; 004862d5
    JZ 0x004862e5                       ; 004862d7
        ;   XREF to: 004862e5 (CONDITIONAL_JUMP)  ; LAB_004862e5
    INC ESI                             ; 004862d9
    MOV AL,byte ptr [ESI]               ; 004862da
    CMP AL,DL                           ; 004862dc
    JZ 0x004862e7                       ; 004862de
        ;   XREF to: 004862e7 (CONDITIONAL_JUMP)  ; LAB_004862e7
    INC ESI                             ; 004862e0
    CMP AL,0x0                          ; 004862e1
    JNZ 0x004862cf                      ; 004862e3
        ;   XREF to: 004862cf (CONDITIONAL_JUMP)  ; LAB_004862cf
    SUB ESI,ESI                         ; 004862e5
        ;   Label: LAB_004862e5
    MOV EDX,ESI                         ; 004862e7
        ;   Label: LAB_004862e7
    TEST ESI,ESI                        ; 004862e9
    JNZ 0x004862f8                      ; 004862eb
        ;   XREF to: 004862f8 (CONDITIONAL_JUMP)  ; LAB_004862f8
    ADD ESP,0xcc                        ; 004862ed
    POP EBP                             ; 004862f3
    POP EDI                             ; 004862f4
    POP ESI                             ; 004862f5
    POP EBX                             ; 004862f6
    RET                                 ; 004862f7
    MOV EDI,ESP                         ; 004862f8
        ;   Label: LAB_004862f8
    LEA ESI,[EBX + 0x1c]                ; 004862fa
    PUSH EDI                            ; 004862fd
    MOV AL,byte ptr [ESI]               ; 004862fe
        ;   Label: LAB_004862fe
    MOV byte ptr [EDI],AL               ; 00486300
    CMP AL,0x0                          ; 00486302
    JZ 0x00486316                       ; 00486304
        ;   XREF to: 00486316 (CONDITIONAL_JUMP)  ; LAB_00486316
    MOV AL,byte ptr [ESI + 0x1]         ; 00486306
    ADD ESI,0x2                         ; 00486309
    MOV byte ptr [EDI + 0x1],AL         ; 0048630c
    ADD EDI,0x2                         ; 0048630f
    CMP AL,0x0                          ; 00486312
    JNZ 0x004862fe                      ; 00486314
        ;   XREF to: 004862fe (CONDITIONAL_JUMP)  ; LAB_004862fe
    POP EDI                             ; 00486316
        ;   Label: LAB_00486316
    MOV EAX,ESP                         ; 00486317
    PUSH EAX                            ; 00486319
    MOV EDI,dword ptr [0x01c5b0e0]      ; 0048631a | DAT_01c5b0e0
    PUSH EDI                            ; 00486320
    MOV byte ptr [EDX],0x0              ; 00486321
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80 ; 00486324
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80(CBitFont * this_ptr, char * text)
    MOV EDX,dword ptr [0x01c5b0e0]      ; 00486329 | DAT_01c5b0e0
    MOV EDX,dword ptr [EDX + 0x41f4]    ; 0048632f
    LEA EDI,[EAX + EDX*0x1]             ; 00486335
    XOR EAX,EAX                         ; 00486338
    ADD ESP,0x8                         ; 0048633a
    MOV AL,byte ptr [EBX + 0x4]         ; 0048633d
    PUSH EAX                            ; 00486340
    MOVZX ESI,byte ptr [EBX + 0x1c]     ; 00486341
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 00486345
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 0048634a
    CMP EAX,ESI                         ; 0048634d
    JNZ 0x00486406                      ; 0048634f
        ;   XREF to: 00486406 (CONDITIONAL_JUMP)  ; LAB_00486406
    XOR EAX,ESI                         ; 00486355
    PUSH 0x41                           ; 00486357
        ;   Label: LAB_00486357
    ADD EBP,EAX                         ; 00486359
    MOV EAX,[0x01c5b0e0]                ; 0048635b | DAT_01c5b0e0
    PUSH EAX                            ; 00486360
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0 ; 00486361
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00486366
    INC EAX                             ; 00486369
    MOV EDX,dword ptr [ESP + 0xc8]      ; 0048636a
    MOV ECX,dword ptr [0x01c5baec]      ; 00486371 | DAT_01c5baec
    ADD EDX,EAX                         ; 00486377
    MOV EAX,[0x01c5bb60]                ; 00486379 | DAT_01c5bb60
    MOV dword ptr [ESP + 0xc8],EDX      ; 0048637e
    TEST ECX,ECX                        ; 00486385
    JZ 0x0048640d                       ; 00486387
        ;   XREF to: 0048640d (CONDITIONAL_JUMP)  ; LAB_0048640d
    AND EAX,0xff                        ; 0048638d
    MOV EDX,EAX                         ; 00486392
    SHL EAX,0x2                         ; 00486394
    SUB EAX,EDX                         ; 00486397
    XOR ECX,ECX                         ; 00486399
    XOR EDX,EDX                         ; 0048639b
    MOV CL,byte ptr [EAX + 0x1c6af98]   ; 0048639d | DAT_01c6af98
    MOV DL,byte ptr [EAX + 0x1c6af99]   ; 004863a3 | DAT_01c6af99
    SHL ECX,0x10                        ; 004863a9
    SHL EDX,0x8                         ; 004863ac
    MOV AL,byte ptr [EAX + 0x1c6af9a]   ; 004863af | DAT_01c6af9a
    OR EDX,ECX                          ; 004863b5
    AND EAX,0xff                        ; 004863b7
    OR EAX,EDX                          ; 004863bc
    PUSH EAX                            ; 004863be
    CALL engine_mini3d.cpp_FUN_004f3520 ; 004863bf
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3520()
    ADD ESP,0x4                         ; 004863c4
    XOR EAX,EAX                         ; 004863c7
        ;   Label: LAB_004863c7
    MOV AL,byte ptr [EBX + 0x4]         ; 004863c9
    PUSH EAX                            ; 004863cc
    MOV EBX,dword ptr [0x01c5b0e0]      ; 004863cd | DAT_01c5b0e0
    PUSH EBX                            ; 004863d3
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004b30c0 ; 004863d4
        ;   XREF to: 004b30c0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004b30c0(CBitFont * this_ptr, int char_code)
    MOV ESI,dword ptr [0x01c5baec]      ; 004863d9 | DAT_01c5baec
    ADD EAX,EBP                         ; 004863df
    ADD ESP,0x8                         ; 004863e1
    DEC EAX                             ; 004863e4
    TEST ESI,ESI                        ; 004863e5
    JZ 0x00486414                       ; 004863e7
        ;   XREF to: 00486414 (CONDITIONAL_JUMP)  ; LAB_00486414
    PUSH EAX                            ; 004863e9
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004863ea
    PUSH EAX                            ; 004863f1
    PUSH EBP                            ; 004863f2
    CALL engine_mini3d.cpp_FUN_004f3ab0 ; 004863f3
        ;   XREF to: 004f3ab0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3ab0()
    ADD ESP,0xc                         ; 004863f8
    ADD ESP,0xcc                        ; 004863fb
    POP EBP                             ; 00486401
    POP EDI                             ; 00486402
    POP ESI                             ; 00486403
    POP EBX                             ; 00486404
    RET                                 ; 00486405
    MOV EAX,EDI                         ; 00486406
        ;   Label: LAB_00486406
    JMP 0x00486357                      ; 00486408
        ;   XREF to: 00486357 (UNCONDITIONAL_JUMP)  ; LAB_00486357
    MOV [0x01c6b5c0],EAX                ; 0048640d | DAT_01c6b5c0
        ;   Label: LAB_0048640d
    JMP 0x004863c7                      ; 00486412
        ;   XREF to: 004863c7 (UNCONDITIONAL_JUMP)  ; LAB_004863c7
    PUSH EAX                            ; 00486414
        ;   Label: LAB_00486414
    MOV EDI,dword ptr [ESP + 0xcc]      ; 00486415
    PUSH EDI                            ; 0048641c
    PUSH EBP                            ; 0048641d
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 0048641e
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    ADD ESP,0xc                         ; 00486423
    ADD ESP,0xcc                        ; 00486426
    POP EBP                             ; 0048642c
    POP EDI                             ; 0048642d
    POP ESI                             ; 0048642e
    POP EBX                             ; 0048642f
    RET                                 ; 00486430

