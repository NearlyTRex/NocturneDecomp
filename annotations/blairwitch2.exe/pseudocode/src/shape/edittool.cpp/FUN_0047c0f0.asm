; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_FUN_0047c0f0(CStrList *str_list,char *dialog_title,int dialog_mode)
;
; Parameters:
; CStrList *       Stack[0x4]:4   str_list
; char *           Stack[0x8]:4   dialog_title
; int              Stack[0xc]:4   dialog_mode
; Local Variables:
; undefined        Stack[-0x150]:1  local_150
; undefined1       Stack[-0x14f]:1  local_14f
; undefined1       Stack[-0x14d]:1  local_14d
; undefined1       Stack[-0x14c]:1  local_14c
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   shape_edittool.cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0047c760 at 0047c7c4
;   shape_edittool.cpp_FUN_0047c7f0 at 0047c854
;   shape_edittool.cpp_FUN_0047c880 at 0047c908
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d1e6f
;   TerminatedCString s_gEdFont_must_be_set_by_t_005d1e85
;   TerminatedCString s_Cancel_005d1fcf
;   TerminatedCString s_Cancel_005d1fd6
;   WatcomTypeInfo g_CEdButtonTypeInfo
;   CEditorTools* g_CEditorToolsPtr = 01c25594
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_006141cc
;   undefined4 DAT_00617dd4
;   undefined4 DAT_01c25590
;   undefined4 DAT_01c25f78
;   undefined4 DAT_01c25f7c
;   undefined4 DAT_01c26410
;   undefined4 DAT_01c35e48
;   ... and 6 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_ctype.c_toupper_FUN_005b8e40
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_memory.c___vec_new_FUN_005ba2b4
;   crt_memory.c_operator_new_array_FUN_005b8df8
;   crt_unknown.c_FUN_005b7fce
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00
;   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004dfea0
;   shape_edittool.cpp_calculateButtonHeight_FUN_00485380
;   shape_edittool.cpp_calculateButtonWidth_FUN_004852f0
;   shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_00484ed0
;   shape_edittool.cpp_CEdButton_wasClicked_FUN_00485240
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047e1d0
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047c0f0
        ;   Label: shape_edittool.cpp_FUN_0047c0f0
    PUSH ESI                            ; 0047c0f1
    PUSH EBP                            ; 0047c0f2
    SUB ESP,0x144                       ; 0047c0f3
    CMP dword ptr [0x01c25590],0x0      ; 0047c0f9 | DAT_01c25590
    JNZ 0x0047c125                      ; 0047c100
        ;   XREF to: 0047c125 (CONDITIONAL_JUMP)  ; LAB_0047c125
    MOV ECX,0x5d1e6f                    ; 0047c102 | = "..\\shape\\edittool.cpp"
    MOV EBX,0xa0                        ; 0047c107
    PUSH 0x5d1e85                       ; 0047c10c | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d046a0],ECX      ; 0047c111 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0047c117 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0047c11d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0047c122
    MOV EAX,[0x01c25590]                ; 0047c125 | DAT_01c25590
        ;   Label: LAB_0047c125
    PUSH 0x6a                           ; 0047c12a
    MOV EDX,dword ptr [EAX + 0x41e8]    ; 0047c12c
    PUSH EAX                            ; 0047c132
    MOV dword ptr [0x01c25f78],EDX      ; 0047c133 | DAT_01c25f78
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 0047c139
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0047c13e
    MOV ESI,dword ptr [ESP + 0x158]     ; 0047c141
    MOV [0x01c25f7c],EAX                ; 0047c148 | DAT_01c25f7c
    TEST ESI,ESI                        ; 0047c14d
    JZ 0x0047c5a4                       ; 0047c14f
        ;   XREF to: 0047c5a4 (CONDITIONAL_JUMP)  ; LAB_0047c5a4
    MOV ESI,dword ptr [ESI]             ; 0047c155
    CMP ESI,0x1                         ; 0047c157
    JL 0x0047c5a4                       ; 0047c15a
        ;   XREF to: 0047c5a4 (CONDITIONAL_JUMP)  ; LAB_0047c5a4
    PUSH EDI                            ; 0047c160
    PUSH 0x5f5d70                       ; 0047c161 | g_CEdButtonTypeInfo
    MOV EBP,ESI                         ; 0047c166
    PUSH ESI                            ; 0047c168
    LEA EAX,[ESI*0x8 + 0x0]             ; 0047c169
    SUB EAX,ESI                         ; 0047c170
    SHL EAX,0x3                         ; 0047c172
    ADD EAX,ESI                         ; 0047c175
    SHL EAX,0x2                         ; 0047c177
    ADD EAX,0x4                         ; 0047c17a
    PUSH EAX                            ; 0047c17d
    CALL crt_memory.c_operator_new_array_FUN_005b8df8 ; 0047c17e
        ;   XREF to: 005b8df8 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005b8df8()
    ADD ESP,0x4                         ; 0047c183
    PUSH EAX                            ; 0047c186
    XOR EDI,EDI                         ; 0047c187
    CALL crt_memory.c___vec_new_FUN_005ba2b4 ; 0047c189
        ;   XREF to: 005ba2b4 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_new_FUN_005ba2b4()
    ADD ESP,0xc                         ; 0047c18e
    XOR EBX,EBX                         ; 0047c191
    MOV dword ptr [ESP + 0x110],EAX     ; 0047c193
    MOV dword ptr [ESP + 0x13c],EDI     ; 0047c19a
    TEST ESI,ESI                        ; 0047c1a1
    JLE 0x0047c27c                      ; 0047c1a3
        ;   XREF to: 0047c27c (CONDITIONAL_JUMP)  ; LAB_0047c27c
    MOV dword ptr [ESP + 0x134],EAX     ; 0047c1a9
    PUSH EBX                            ; 0047c1b0
        ;   Label: LAB_0047c1b0
    MOV ECX,dword ptr [ESP + 0x160]     ; 0047c1b1
    PUSH ECX                            ; 0047c1b8
    LEA EDI,[ESP + 0xc]                 ; 0047c1b9
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00481240 ; 0047c1bd
        ;   XREF to: 00481240 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00481240(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0047c1c2
    MOV ESI,EAX                         ; 0047c1c5
    MOV DL,0x5e                         ; 0047c1c7
    PUSH EDI                            ; 0047c1c9
    MOV AL,byte ptr [ESI]               ; 0047c1ca
        ;   Label: LAB_0047c1ca
    MOV byte ptr [EDI],AL               ; 0047c1cc
    CMP AL,0x0                          ; 0047c1ce
    JZ 0x0047c1e2                       ; 0047c1d0
        ;   XREF to: 0047c1e2 (CONDITIONAL_JUMP)  ; LAB_0047c1e2
    MOV AL,byte ptr [ESI + 0x1]         ; 0047c1d2
    ADD ESI,0x2                         ; 0047c1d5
    MOV byte ptr [EDI + 0x1],AL         ; 0047c1d8
    ADD EDI,0x2                         ; 0047c1db
    CMP AL,0x0                          ; 0047c1de
    JNZ 0x0047c1ca                      ; 0047c1e0
        ;   XREF to: 0047c1ca (CONDITIONAL_JUMP)  ; LAB_0047c1ca
    POP EDI                             ; 0047c1e2
        ;   Label: LAB_0047c1e2
    LEA ESI,[ESP + 0x4]                 ; 0047c1e3
    MOV AL,byte ptr [ESI]               ; 0047c1e7
        ;   Label: LAB_0047c1e7
    CMP AL,DL                           ; 0047c1e9
    JZ 0x0047c1ff                       ; 0047c1eb
        ;   XREF to: 0047c1ff (CONDITIONAL_JUMP)  ; LAB_0047c1ff
    CMP AL,0x0                          ; 0047c1ed
    JZ 0x0047c1fd                       ; 0047c1ef
        ;   XREF to: 0047c1fd (CONDITIONAL_JUMP)  ; LAB_0047c1fd
    INC ESI                             ; 0047c1f1
    MOV AL,byte ptr [ESI]               ; 0047c1f2
    CMP AL,DL                           ; 0047c1f4
    JZ 0x0047c1ff                       ; 0047c1f6
        ;   XREF to: 0047c1ff (CONDITIONAL_JUMP)  ; LAB_0047c1ff
    INC ESI                             ; 0047c1f8
    CMP AL,0x0                          ; 0047c1f9
    JNZ 0x0047c1e7                      ; 0047c1fb
        ;   XREF to: 0047c1e7 (CONDITIONAL_JUMP)  ; LAB_0047c1e7
    SUB ESI,ESI                         ; 0047c1fd
        ;   Label: LAB_0047c1fd
    MOV EDI,ESI                         ; 0047c1ff
        ;   Label: LAB_0047c1ff
    TEST ESI,ESI                        ; 0047c201
    JZ 0x0047c243                       ; 0047c203
        ;   XREF to: 0047c243 (CONDITIONAL_JUMP)  ; LAB_0047c243
    MOV EDX,dword ptr [ESP + 0x134]     ; 0047c205
    MOV AL,byte ptr [ESI + 0x1]         ; 0047c20c
    INC ESI                             ; 0047c20f
    MOV byte ptr [EDX + 0x4],AL         ; 0047c210
    PUSH EDI                            ; 0047c213
    MOV AL,byte ptr [ESI]               ; 0047c214
        ;   Label: LAB_0047c214
    MOV byte ptr [EDI],AL               ; 0047c216
    CMP AL,0x0                          ; 0047c218
    JZ 0x0047c22c                       ; 0047c21a
        ;   XREF to: 0047c22c (CONDITIONAL_JUMP)  ; LAB_0047c22c
    MOV AL,byte ptr [ESI + 0x1]         ; 0047c21c
    ADD ESI,0x2                         ; 0047c21f
    MOV byte ptr [EDI + 0x1],AL         ; 0047c222
    ADD EDI,0x2                         ; 0047c225
    CMP AL,0x0                          ; 0047c228
    JNZ 0x0047c214                      ; 0047c22a
        ;   XREF to: 0047c214 (CONDITIONAL_JUMP)  ; LAB_0047c214
    POP EDI                             ; 0047c22c
        ;   Label: LAB_0047c22c
    LEA EAX,[ESP + 0x4]                 ; 0047c22d
    PUSH EAX                            ; 0047c231
    PUSH EBX                            ; 0047c232
    MOV ESI,dword ptr [ESP + 0x164]     ; 0047c233
    PUSH ESI                            ; 0047c23a
    CALL shape_edittool.cpp_CStrList_setStringAt_FUN_004813f0 ; 0047c23b
        ;   XREF to: 004813f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_setStringAt_FUN_004813f0(CStrList * this_ptr, int index, char * new_string)
    ADD ESP,0xc                         ; 0047c240
    LEA EAX,[ESP + 0x4]                 ; 0047c243
        ;   Label: LAB_0047c243
    PUSH EAX                            ; 0047c247
    CALL shape_edittool.cpp_calculateButtonWidth_FUN_004852f0 ; 0047c248
        ;   XREF to: 004852f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonWidth_FUN_004852f0(char * button_text)
    ADD ESP,0x4                         ; 0047c24d
    CMP EAX,dword ptr [ESP + 0x13c]     ; 0047c250
    JLE 0x0047c260                      ; 0047c257
        ;   XREF to: 0047c260 (CONDITIONAL_JUMP)  ; LAB_0047c260
    MOV dword ptr [ESP + 0x13c],EAX     ; 0047c259
    MOV EAX,dword ptr [ESP + 0x134]     ; 0047c260
        ;   Label: LAB_0047c260
    ADD EAX,0xe4                        ; 0047c267
    INC EBX                             ; 0047c26c
    MOV dword ptr [ESP + 0x134],EAX     ; 0047c26d
    CMP EBX,EBP                         ; 0047c274
    JL 0x0047c1b0                       ; 0047c276
        ;   XREF to: 0047c1b0 (CONDITIONAL_JUMP)  ; LAB_0047c1b0
    PUSH 0x5d1fcf                       ; 0047c27c | = "Cancel"
        ;   Label: LAB_0047c27c
    CALL shape_edittool.cpp_calculateButtonWidth_FUN_004852f0 ; 0047c281
        ;   XREF to: 004852f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonWidth_FUN_004852f0(char * button_text)
    ADD ESP,0x4                         ; 0047c286
    CMP EAX,dword ptr [ESP + 0x13c]     ; 0047c289
    JLE 0x0047c2a6                      ; 0047c290
        ;   XREF to: 0047c2a6 (CONDITIONAL_JUMP)  ; LAB_0047c2a6
    PUSH 0x5d1fd6                       ; 0047c292 | = "Cancel"
    CALL shape_edittool.cpp_calculateButtonWidth_FUN_004852f0 ; 0047c297
        ;   XREF to: 004852f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonWidth_FUN_004852f0(char * button_text)
    ADD ESP,0x4                         ; 0047c29c
    MOV dword ptr [ESP + 0x13c],EAX     ; 0047c29f
    MOV EAX,[0x006141b8]                ; 0047c2a6 | DAT_006141b8
        ;   Label: LAB_0047c2a6
    MOV EDX,EAX                         ; 0047c2ab
    SAR EDX,0x1f                        ; 0047c2ad
    SHL EDX,0x7                         ; 0047c2b0
    SBB EAX,EDX                         ; 0047c2b3
    SAR EAX,0x7                         ; 0047c2b5
    MOV ESI,EAX                         ; 0047c2b8
    MOV EAX,[0x006141bc]                ; 0047c2ba | DAT_006141bc
    MOV EDX,EAX                         ; 0047c2bf
    MOV EBX,0x60                        ; 0047c2c1
    SAR EDX,0x1f                        ; 0047c2c6
    IDIV EBX                            ; 0047c2c9
    MOV ECX,dword ptr [ESP + 0x160]     ; 0047c2cb
    MOV dword ptr [ESP + 0x114],EAX     ; 0047c2d2
    LEA EAX,[EBP + -0x1]                ; 0047c2d9
    TEST ECX,ECX                        ; 0047c2dc
    JNZ 0x0047c5b3                      ; 0047c2de
        ;   XREF to: 0047c5b3 (CONDITIONAL_JUMP)  ; LAB_0047c5b3
    LEA EDX,[ESI + -0x2]                ; 0047c2e4
    IMUL EAX,EDX                        ; 0047c2e7
    MOV EBX,dword ptr [ESP + 0x13c]     ; 0047c2ea
    IMUL EBX,EBP                        ; 0047c2f1
    PUSH ECX                            ; 0047c2f4
    ADD EBX,EAX                         ; 0047c2f5
    CALL shape_edittool.cpp_calculateButtonHeight_FUN_00485380 ; 0047c2f7
        ;   XREF to: 00485380 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonHeight_FUN_00485380(char * button_text)
    INC EBX                             ; 0047c2fc
    ADD ESP,0x4                         ; 0047c2fd
    LEA EDI,[EAX + -0x1]                ; 0047c300
    MOV EAX,dword ptr [ESP + 0x158]     ; 0047c303
        ;   Label: LAB_0047c303
    PUSH EAX                            ; 0047c30a
    MOV EDX,dword ptr [0x01c25590]      ; 0047c30b | DAT_01c25590
    PUSH EDX                            ; 0047c311
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00 ; 0047c312
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 0047c317
    MOV EDX,EAX                         ; 0047c31a
    CMP EBX,EAX                         ; 0047c31c
    JLE 0x0047c322                      ; 0047c31e
        ;   XREF to: 0047c322 (CONDITIONAL_JUMP)  ; LAB_0047c322
    MOV EDX,EBX                         ; 0047c320
    PUSH 0x0                            ; 0047c322
        ;   Label: LAB_0047c322
    MOV ECX,dword ptr [ESP + 0x15c]     ; 0047c324
    PUSH ECX                            ; 0047c32b
    PUSH EDI                            ; 0047c32c
    PUSH EDX                            ; 0047c32d
    MOV EDI,dword ptr [0x006138e0]      ; 0047c32e | g_CEditorToolsPtr
    PUSH EDI                            ; 0047c334
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047e1d0 ; 0047c335
        ;   XREF to: 0047e1d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047e1d0(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    MOV EAX,[0x01c35e50]                ; 0047c33a | DAT_01c35e50
    SUB EAX,dword ptr [0x01c35e48]      ; 0047c33f | DAT_01c35e48
    LEA EDX,[EAX + 0x1]                 ; 0047c345
    SUB EDX,EBX                         ; 0047c348
    MOV EAX,EDX                         ; 0047c34a
    SAR EDX,0x1f                        ; 0047c34c
    SUB EAX,EDX                         ; 0047c34f
    SAR EAX,0x1                         ; 0047c351
    ADD ESP,0x14                        ; 0047c353
    XOR EDI,EDI                         ; 0047c356
    MOV dword ptr [ESP + 0x128],EAX     ; 0047c358
    TEST EBP,EBP                        ; 0047c35f
    JLE 0x0047c486                      ; 0047c361
        ;   XREF to: 0047c486 (CONDITIONAL_JUMP)  ; LAB_0047c486
    MOV EAX,dword ptr [ESP + 0x114]     ; 0047c367
    DEC EAX                             ; 0047c36e
    MOV dword ptr [ESP + 0x120],EAX     ; 0047c36f
    IMUL EAX,EDI                        ; 0047c376
    DEC ESI                             ; 0047c379
    MOV dword ptr [ESP + 0x11c],ESI     ; 0047c37a
    MOV dword ptr [ESP + 0x12c],EAX     ; 0047c381
    IMUL EAX,ESI,0x0                    ; 0047c388
    MOV dword ptr [ESP + 0x130],EAX     ; 0047c38b
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0047c392
    MOV dword ptr [ESP + 0x124],EAX     ; 0047c399
    IMUL EAX,EDI                        ; 0047c3a0
    MOV EBX,dword ptr [ESP + 0x110]     ; 0047c3a3
    MOV dword ptr [ESP + 0x138],EAX     ; 0047c3aa
    MOV ECX,dword ptr [ESP + 0x128]     ; 0047c3b1
        ;   Label: LAB_0047c3b1
    MOV ESI,dword ptr [0x01c35e48]      ; 0047c3b8 | DAT_01c35e48
    MOV EAX,dword ptr [ESP + 0x160]     ; 0047c3be
    ADD ESI,ECX                         ; 0047c3c5
    TEST EAX,EAX                        ; 0047c3c7
    JNZ 0x0047c5db                      ; 0047c3c9
        ;   XREF to: 0047c5db (CONDITIONAL_JUMP)  ; LAB_0047c5db
    MOV EAX,dword ptr [ESP + 0x138]     ; 0047c3cf
    MOV EDX,dword ptr [ESP + 0x130]     ; 0047c3d6
    ADD ESI,EAX                         ; 0047c3dd
    PUSH 0x0                            ; 0047c3df
    ADD ESI,EDX                         ; 0047c3e1
    CALL shape_edittool.cpp_calculateButtonHeight_FUN_00485380 ; 0047c3e3
        ;   XREF to: 00485380 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonHeight_FUN_00485380(char * button_text)
    ADD ESP,0x4                         ; 0047c3e8
    MOV EDX,dword ptr [0x01c35e54]      ; 0047c3eb | DAT_01c35e54
    PUSH EDI                            ; 0047c3f1
    SUB EDX,EAX                         ; 0047c3f2
    MOV ECX,dword ptr [ESP + 0x160]     ; 0047c3f4
    LEA EAX,[EDX + 0x1]                 ; 0047c3fb
    PUSH ECX                            ; 0047c3fe
    MOV dword ptr [ESP + 0x110],EAX     ; 0047c3ff
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00481240 ; 0047c406
        ;   XREF to: 00481240 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00481240(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0047c40b
    PUSH EAX                            ; 0047c40e
    MOV EAX,[0x01c35e54]                ; 0047c40f | DAT_01c35e54
    PUSH EAX                            ; 0047c414
    MOV EAX,dword ptr [ESP + 0x144]     ; 0047c415
    ADD EAX,ESI                         ; 0047c41c
    DEC EAX                             ; 0047c41e
    PUSH EAX                            ; 0047c41f
    MOV EDX,dword ptr [ESP + 0x114]     ; 0047c420
    PUSH EDX                            ; 0047c427
        ;   Label: LAB_0047c427
    PUSH ESI                            ; 0047c428
    PUSH EBX                            ; 0047c429
    CALL shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_00484ed0 ; 0047c42a
        ;   XREF to: 00484ed0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_00484ed0(CEdButton * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x18                        ; 0047c42f
    MOV EAX,dword ptr [ESP + 0x120]     ; 0047c432
    MOV EDX,dword ptr [ESP + 0x12c]     ; 0047c439
    MOV ECX,dword ptr [ESP + 0x130]     ; 0047c440
    MOV ESI,dword ptr [ESP + 0x138]     ; 0047c447
    ADD EBX,0xe4                        ; 0047c44e
    ADD EDX,EAX                         ; 0047c454
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0047c456
    INC EDI                             ; 0047c45d
    ADD ECX,EAX                         ; 0047c45e
    MOV EAX,dword ptr [ESP + 0x124]     ; 0047c460
    MOV dword ptr [ESP + 0x12c],EDX     ; 0047c467
    ADD ESI,EAX                         ; 0047c46e
    MOV dword ptr [ESP + 0x130],ECX     ; 0047c470
    MOV dword ptr [ESP + 0x138],ESI     ; 0047c477
    CMP EDI,EBP                         ; 0047c47e
    JL 0x0047c3b1                       ; 0047c480
        ;   XREF to: 0047c3b1 (CONDITIONAL_JUMP)  ; LAB_0047c3b1
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0047c486
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
        ;   Label: LAB_0047c486
    MOV EAX,[0x006141cc]                ; 0047c48b | DAT_006141cc
    MOV EDI,0x7f                        ; 0047c490
    MOV dword ptr [ESP + 0x104],EAX     ; 0047c495
    XOR EAX,EAX                         ; 0047c49c
    MOV dword ptr [0x006141cc],EDI      ; 0047c49e | DAT_006141cc
    MOV dword ptr [ESP + 0x140],EAX     ; 0047c4a4
    LEA EAX,[EBP + -0x1]                ; 0047c4ab
    MOV EDI,0xfffffffe                  ; 0047c4ae
    MOV dword ptr [ESP + 0x118],EAX     ; 0047c4b3
    PUSH 0x1c                           ; 0047c4ba
        ;   Label: LAB_0047c4ba
    MOV EAX,[0x00617dd4]                ; 0047c4bc | DAT_00617dd4
    PUSH EAX                            ; 0047c4c1 | DAT_01d02f84
    MOV EBX,dword ptr [EAX]             ; 0047c4c2 | DAT_01d02f84
    CALL dword ptr [EBX + 0x4]          ; 0047c4c4
    ADD ESP,0x8                         ; 0047c4c7
    TEST EAX,EAX                        ; 0047c4ca
    JZ 0x0047c4d5                       ; 0047c4cc
        ;   XREF to: 0047c4d5 (CONDITIONAL_JUMP)  ; LAB_0047c4d5
    MOV EDI,dword ptr [ESP + 0x140]     ; 0047c4ce
    PUSH 0x2a                           ; 0047c4d5
        ;   Label: LAB_0047c4d5
    MOV EAX,[0x00617dd4]                ; 0047c4d7 | DAT_00617dd4
    PUSH EAX                            ; 0047c4dc | DAT_01d02f84
    MOV EBX,dword ptr [EAX]             ; 0047c4dd | DAT_01d02f84
    CALL dword ptr [EBX]                ; 0047c4df
    ADD ESP,0x8                         ; 0047c4e1
    TEST EAX,EAX                        ; 0047c4e4
    JZ 0x0047c638                       ; 0047c4e6
        ;   XREF to: 0047c638 (CONDITIONAL_JUMP)  ; LAB_0047c638
    PUSH 0x2a                           ; 0047c4ec
        ;   Label: LAB_0047c4ec
    MOV EAX,[0x00617dd4]                ; 0047c4ee | DAT_00617dd4
    PUSH EAX                            ; 0047c4f3 | DAT_01d02f84
    MOV EBX,dword ptr [EAX]             ; 0047c4f4 | DAT_01d02f84
    CALL dword ptr [EBX]                ; 0047c4f6
    ADD ESP,0x8                         ; 0047c4f8
    TEST EAX,EAX                        ; 0047c4fb
    JZ 0x0047c51a                       ; 0047c4fd
        ;   XREF to: 0047c51a (CONDITIONAL_JUMP)  ; LAB_0047c51a
    PUSH 0xf                            ; 0047c4ff
    MOV EAX,[0x00617dd4]                ; 0047c501 | DAT_00617dd4
    PUSH EAX                            ; 0047c506 | DAT_01d02f84
    MOV EBX,dword ptr [EAX]             ; 0047c507 | DAT_01d02f84
    CALL dword ptr [EBX + 0x4]          ; 0047c509
    ADD ESP,0x8                         ; 0047c50c
    TEST EAX,EAX                        ; 0047c50f
    JZ 0x0047c51a                       ; 0047c511
        ;   XREF to: 0047c51a (CONDITIONAL_JUMP)  ; LAB_0047c51a
    DEC dword ptr [ESP + 0x140]         ; 0047c513
    MOV ESI,dword ptr [ESP + 0x140]     ; 0047c51a
        ;   Label: LAB_0047c51a
    CMP EBP,ESI                         ; 0047c521
    JG 0x0047c65c                       ; 0047c523
        ;   XREF to: 0047c65c (CONDITIONAL_JUMP)  ; LAB_0047c65c
    XOR EDX,EDX                         ; 0047c529
    MOV dword ptr [ESP + 0x140],EDX     ; 0047c52b
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_0058eb40 ; 0047c532
        ;   XREF to: 0058eb40 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_0058eb40()
        ;   Label: LAB_0047c532
    TEST EAX,EAX                        ; 0047c537
    JZ 0x0047c677                       ; 0047c539
        ;   XREF to: 0047c677 (CONDITIONAL_JUMP)  ; LAB_0047c677
    MOV ECX,dword ptr [0x00617dd4]      ; 0047c53f | DAT_00617dd4
    PUSH ECX                            ; 0047c545 | DAT_01d02f84
    CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004dfea0 ; 0047c546
        ;   XREF to: 004dfea0 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004dfea0(CKeys * this_ptr)
    ADD ESP,0x4                         ; 0047c54b
    MOV EBX,dword ptr [ESP + 0x110]     ; 0047c54e
    XOR ESI,ESI                         ; 0047c555
    MOV DL,byte ptr [EBX + 0x4]         ; 0047c557
    MOV dword ptr [ESP + 0x144],EAX     ; 0047c55a
    TEST DL,DL                          ; 0047c561
    JZ 0x0047c593                       ; 0047c563
        ;   XREF to: 0047c593 (CONDITIONAL_JUMP)  ; LAB_0047c593
    CMP ESI,EBP                         ; 0047c565
        ;   Label: LAB_0047c565
    JGE 0x0047c593                      ; 0047c567
        ;   XREF to: 0047c593 (CONDITIONAL_JUMP)  ; LAB_0047c593
    XOR EAX,EAX                         ; 0047c569
    MOV AL,byte ptr [EBX + 0x4]         ; 0047c56b
    PUSH EAX                            ; 0047c56e
    CALL crt_ctype.c_toupper_FUN_005b8e40 ; 0047c56f
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005b8e40(int c)
    ADD ESP,0x4                         ; 0047c574
    CMP EAX,dword ptr [ESP + 0x144]     ; 0047c577
    JNZ 0x0047c582                      ; 0047c57e
        ;   XREF to: 0047c582 (CONDITIONAL_JUMP)  ; LAB_0047c582
    MOV EDI,ESI                         ; 0047c580
    MOV DH,byte ptr [EBX + 0xe8]        ; 0047c582
        ;   Label: LAB_0047c582
    ADD EBX,0xe4                        ; 0047c588
    INC ESI                             ; 0047c58e
    TEST DH,DH                          ; 0047c58f
    JNZ 0x0047c565                      ; 0047c591
        ;   XREF to: 0047c565 (CONDITIONAL_JUMP)  ; LAB_0047c565
    CMP dword ptr [ESP + 0x144],0x1b    ; 0047c593
        ;   Label: LAB_0047c593
    JNZ 0x0047c532                      ; 0047c59b
        ;   XREF to: 0047c532 (CONDITIONAL_JUMP)  ; LAB_0047c532
    MOV EDI,0xffffffff                  ; 0047c59d
    JMP 0x0047c532                      ; 0047c5a2
        ;   XREF to: 0047c532 (UNCONDITIONAL_JUMP)  ; LAB_0047c532
    MOV EAX,0xffffffff                  ; 0047c5a4
        ;   Label: LAB_0047c5a4
    ADD ESP,0x144                       ; 0047c5a9
    POP EBP                             ; 0047c5af
    POP ESI                             ; 0047c5b0
    POP EBX                             ; 0047c5b1
    RET                                 ; 0047c5b2
    MOV EDI,dword ptr [ESP + 0x114]     ; 0047c5b3
        ;   Label: LAB_0047c5b3
    SUB EDI,0x2                         ; 0047c5ba
    IMUL EDI,EAX                        ; 0047c5bd
    PUSH 0x0                            ; 0047c5c0
    CALL shape_edittool.cpp_calculateButtonHeight_FUN_00485380 ; 0047c5c2
        ;   XREF to: 00485380 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonHeight_FUN_00485380(char * button_text)
    IMUL EAX,EBP                        ; 0047c5c7
    MOV EBX,dword ptr [ESP + 0x140]     ; 0047c5ca
    ADD ESP,0x4                         ; 0047c5d1
    ADD EDI,EAX                         ; 0047c5d4
    JMP 0x0047c303                      ; 0047c5d6
        ;   XREF to: 0047c303 (UNCONDITIONAL_JUMP)  ; LAB_0047c303
    PUSH 0x0                            ; 0047c5db
        ;   Label: LAB_0047c5db
    CALL shape_edittool.cpp_calculateButtonHeight_FUN_00485380 ; 0047c5dd
        ;   XREF to: 00485380 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonHeight_FUN_00485380(char * button_text)
    IMUL EAX,EDI                        ; 0047c5e2
    ADD ESP,0x4                         ; 0047c5e5
    MOV EDX,dword ptr [0x01c35e4c]      ; 0047c5e8 | DAT_01c35e4c
    MOV ECX,dword ptr [ESP + 0x12c]     ; 0047c5ee
    ADD EAX,EDX                         ; 0047c5f5
    ADD EAX,ECX                         ; 0047c5f7
    DEC EAX                             ; 0047c5f9
    PUSH EDI                            ; 0047c5fa
    MOV dword ptr [ESP + 0x110],EAX     ; 0047c5fb
    MOV EAX,dword ptr [ESP + 0x160]     ; 0047c602
    PUSH EAX                            ; 0047c609
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00481240 ; 0047c60a
        ;   XREF to: 00481240 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00481240(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0047c60f
    PUSH EAX                            ; 0047c612
    PUSH 0x0                            ; 0047c613
    CALL shape_edittool.cpp_calculateButtonHeight_FUN_00485380 ; 0047c615
        ;   XREF to: 00485380 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonHeight_FUN_00485380(char * button_text)
    ADD ESP,0x4                         ; 0047c61a
    MOV EDX,dword ptr [ESP + 0x110]     ; 0047c61d
    ADD EAX,EDX                         ; 0047c624
    DEC EAX                             ; 0047c626
    PUSH EAX                            ; 0047c627
    MOV EAX,dword ptr [ESP + 0x144]     ; 0047c628
    ADD EAX,ESI                         ; 0047c62f
    DEC EAX                             ; 0047c631
    PUSH EAX                            ; 0047c632
    JMP 0x0047c427                      ; 0047c633
        ;   XREF to: 0047c427 (UNCONDITIONAL_JUMP)  ; LAB_0047c427
    PUSH 0xf                            ; 0047c638
        ;   Label: LAB_0047c638
    MOV EAX,[0x00617dd4]                ; 0047c63a | DAT_00617dd4
    PUSH EAX                            ; 0047c63f | DAT_01d02f84
    MOV EBX,dword ptr [EAX]             ; 0047c640 | DAT_01d02f84
    CALL dword ptr [EBX + 0x4]          ; 0047c642
    ADD ESP,0x8                         ; 0047c645
    TEST EAX,EAX                        ; 0047c648
    JZ 0x0047c4ec                       ; 0047c64a
        ;   XREF to: 0047c4ec (CONDITIONAL_JUMP)  ; LAB_0047c4ec
    INC dword ptr [ESP + 0x140]         ; 0047c650
    JMP 0x0047c4ec                      ; 0047c657
        ;   XREF to: 0047c4ec (UNCONDITIONAL_JUMP)  ; LAB_0047c4ec
    TEST ESI,ESI                        ; 0047c65c
        ;   Label: LAB_0047c65c
    JGE 0x0047c532                      ; 0047c65e
        ;   XREF to: 0047c532 (CONDITIONAL_JUMP)  ; LAB_0047c532
    MOV EAX,dword ptr [ESP + 0x118]     ; 0047c664
    MOV dword ptr [ESP + 0x140],EAX     ; 0047c66b
    JMP 0x0047c532                      ; 0047c672
        ;   XREF to: 0047c532 (UNCONDITIONAL_JUMP)  ; LAB_0047c532
    XOR EBX,EBX                         ; 0047c677
        ;   Label: LAB_0047c677
    TEST EBP,EBP                        ; 0047c679
    JLE 0x0047c6ad                      ; 0047c67b
        ;   XREF to: 0047c6ad (CONDITIONAL_JUMP)  ; LAB_0047c6ad
    MOV ESI,dword ptr [ESP + 0x110]     ; 0047c67d
    PUSH ESI                            ; 0047c684
        ;   Label: LAB_0047c684
    CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_00485240 ; 0047c685
        ;   XREF to: 00485240 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdButton_wasClicked_FUN_00485240(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 0047c68a
    TEST EAX,EAX                        ; 0047c68d
    JZ 0x0047c693                       ; 0047c68f
        ;   XREF to: 0047c693 (CONDITIONAL_JUMP)  ; LAB_0047c693
    MOV EDI,EBX                         ; 0047c691
    CMP ESI,dword ptr [0x01c26410]      ; 0047c693 | DAT_01c26410
        ;   Label: LAB_0047c693
    JNZ 0x0047c6a2                      ; 0047c699
        ;   XREF to: 0047c6a2 (CONDITIONAL_JUMP)  ; LAB_0047c6a2
    MOV dword ptr [ESP + 0x140],EBX     ; 0047c69b
    INC EBX                             ; 0047c6a2
        ;   Label: LAB_0047c6a2
    ADD ESI,0xe4                        ; 0047c6a3
    CMP EBX,EBP                         ; 0047c6a9
    JL 0x0047c684                       ; 0047c6ab
        ;   XREF to: 0047c684 (CONDITIONAL_JUMP)  ; LAB_0047c684
    MOV EBX,dword ptr [0x006138e0]      ; 0047c6ad | g_CEditorToolsPtr
        ;   Label: LAB_0047c6ad
    PUSH EBX                            ; 0047c6b3
    CALL shape_edittool.cpp_FUN_0047e870 ; 0047c6b4
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047e870()
    ADD ESP,0x4                         ; 0047c6b9
    XOR EBX,EBX                         ; 0047c6bc
    TEST EBP,EBP                        ; 0047c6be
    JLE 0x0047c6ed                      ; 0047c6c0
        ;   XREF to: 0047c6ed (CONDITIONAL_JUMP)  ; LAB_0047c6ed
    MOV ESI,dword ptr [ESP + 0x110]     ; 0047c6c2
    CMP EBX,dword ptr [ESP + 0x140]     ; 0047c6c9
        ;   Label: LAB_0047c6c9
    SETZ AL                             ; 0047c6d0
    AND EAX,0xff                        ; 0047c6d3
    PUSH EAX                            ; 0047c6d8
    PUSH ESI                            ; 0047c6d9
    INC EBX                             ; 0047c6da
    CALL shape_edittool.cpp_FUN_00484f20 ; 0047c6db
        ;   XREF to: 00484f20 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00484f20()
    ADD ESP,0x8                         ; 0047c6e0
    ADD ESI,0xe4                        ; 0047c6e3
    CMP EBX,EBP                         ; 0047c6e9
    JL 0x0047c6c9                       ; 0047c6eb
        ;   XREF to: 0047c6c9 (CONDITIONAL_JUMP)  ; LAB_0047c6c9
    PUSH 0x0                            ; 0047c6ed
        ;   Label: LAB_0047c6ed
    MOV ECX,dword ptr [0x006138e0]      ; 0047c6ef | g_CEditorToolsPtr
    PUSH ECX                            ; 0047c6f5
    CALL shape_edittool.cpp_FUN_0047f210 ; 0047c6f6
        ;   XREF to: 0047f210 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047f210()
    ADD ESP,0x8                         ; 0047c6fb
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00589560 ; 0047c6fe
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00589560()
    CMP EDI,-0x2                        ; 0047c703
    JZ 0x0047c4ba                       ; 0047c706
        ;   XREF to: 0047c4ba (CONDITIONAL_JUMP)  ; LAB_0047c4ba
    PUSH 0x5f5d70                       ; 0047c70c | g_CEdButtonTypeInfo
    MOV EBX,dword ptr [ESP + 0x114]     ; 0047c711
    PUSH EBX                            ; 0047c718
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0047c719
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0047c71e
    PUSH EAX                            ; 0047c721
    CALL crt_unknown.c_FUN_005b7fce     ; 0047c722
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0047c727
    MOV EAX,dword ptr [ESP + 0x104]     ; 0047c72a
    MOV [0x006141cc],EAX                ; 0047c731 | DAT_006141cc
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0047c736
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    MOV ESI,dword ptr [0x006138e0]      ; 0047c73b | g_CEditorToolsPtr
    PUSH ESI                            ; 0047c741
    CALL shape_edittool.cpp_FUN_0047e760 ; 0047c742
        ;   XREF to: 0047e760 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047e760()
    ADD ESP,0x4                         ; 0047c747
    MOV EAX,EDI                         ; 0047c74a
    POP EDI                             ; 0047c74c
    ADD ESP,0x144                       ; 0047c74d
    POP EBP                             ; 0047c753
    POP ESI                             ; 0047c754
    POP EBX                             ; 0047c755
    RET                                 ; 0047c756

