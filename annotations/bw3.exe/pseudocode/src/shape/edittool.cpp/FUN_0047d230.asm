; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_FUN_0047d230(CStrList *str_list,char *dialog_title,int dialog_mode)
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
;   shape_edittool.cpp_FUN_0047d8c0 at 0047d944
;   shape_edittool.cpp_FUN_0047d980 at 0047da04
;   shape_edittool.cpp_FUN_0047da40 at 0047daee
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bcd25
;   TerminatedCString s_gEdFont_must_be_set_by_t_005bcd3b
;   TerminatedCString s_Cancel_005bce85
;   TerminatedCString s_Cancel_005bce8c
;   WatcomTypeInfo g_CEdButtonTypeInfo
;   CEditorTools* g_CEditorToolsPtr = 01c5b0e4
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fba2c
;   undefined4 DAT_00600284
;   undefined4 DAT_01c5b0e0
;   undefined4 DAT_01c5bae0
;   undefined4 DAT_01c5bae4
;   undefined4 DAT_01c5bb78
;   undefined4 DAT_01c6b5a8
;   ... and 7 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_ctype.c_toupper_FUN_005a4120
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_memory.c___vec_new_FUN_005a5584
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a40df
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_font.cpp_FUN_004b2a80
;   engine_font.cpp_FUN_004b30f0
;   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004df590
;   shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004860d0
;   shape_edittool.cpp_CEdButton_wasClicked_FUN_00486440
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047f3e0
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00482440
;   shape_edittool.cpp_CStrList_setStringAt_FUN_004825f0
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047d230
        ;   Label: shape_edittool.cpp_FUN_0047d230
    PUSH ESI                            ; 0047d231
    PUSH EBP                            ; 0047d232
    SUB ESP,0x144                       ; 0047d233
    CMP dword ptr [0x01c5b0e0],0x0      ; 0047d239 | DAT_01c5b0e0
    JNZ 0x0047d265                      ; 0047d240
        ;   XREF to: 0047d265 (CONDITIONAL_JUMP)  ; LAB_0047d265
    MOV ECX,0x5bcd25                    ; 0047d242 | = "..\\shape\\edittool.cpp"
    MOV EBX,0xa7                        ; 0047d247
    PUSH 0x5bcd3b                       ; 0047d24c | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d71de0],ECX      ; 0047d251 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0047d257 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0047d25d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0047d262
    MOV EAX,[0x01c5b0e0]                ; 0047d265 | DAT_01c5b0e0
        ;   Label: LAB_0047d265
    PUSH 0x6a                           ; 0047d26a
    MOV EDX,dword ptr [EAX + 0x41e8]    ; 0047d26c
    PUSH EAX                            ; 0047d272
    MOV dword ptr [0x01c5bae0],EDX      ; 0047d273 | DAT_01c5bae0
    CALL engine_font.cpp_FUN_004b30f0   ; 0047d279
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0047d27e
    MOV ESI,dword ptr [ESP + 0x158]     ; 0047d281
    MOV [0x01c5bae4],EAX                ; 0047d288 | DAT_01c5bae4
    TEST ESI,ESI                        ; 0047d28d
    JZ 0x0047d6fc                       ; 0047d28f
        ;   XREF to: 0047d6fc (CONDITIONAL_JUMP)  ; LAB_0047d6fc
    MOV ESI,dword ptr [ESI]             ; 0047d295
    CMP ESI,0x1                         ; 0047d297
    JL 0x0047d6fc                       ; 0047d29a
        ;   XREF to: 0047d6fc (CONDITIONAL_JUMP)  ; LAB_0047d6fc
    PUSH EDI                            ; 0047d2a0
    PUSH 0x5df080                       ; 0047d2a1 | g_CEdButtonTypeInfo
    MOV EBP,ESI                         ; 0047d2a6
    PUSH ESI                            ; 0047d2a8
    LEA EAX,[ESI*0x8 + 0x0]             ; 0047d2a9
    SUB EAX,ESI                         ; 0047d2b0
    SHL EAX,0x3                         ; 0047d2b2
    ADD EAX,ESI                         ; 0047d2b5
    SHL EAX,0x2                         ; 0047d2b7
    ADD EAX,0x4                         ; 0047d2ba
    PUSH EAX                            ; 0047d2bd
    CALL crt_unknown.c_FUN_005a40df     ; 0047d2be
        ;   XREF to: 005a40df (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a40df()
    ADD ESP,0x4                         ; 0047d2c3
    PUSH EAX                            ; 0047d2c6
    XOR EDI,EDI                         ; 0047d2c7
    CALL crt_memory.c___vec_new_FUN_005a5584 ; 0047d2c9
        ;   XREF to: 005a5584 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_new_FUN_005a5584()
    ADD ESP,0xc                         ; 0047d2ce
    XOR EBX,EBX                         ; 0047d2d1
    MOV dword ptr [ESP + 0x110],EAX     ; 0047d2d3
    MOV dword ptr [ESP + 0x13c],EDI     ; 0047d2da
    TEST ESI,ESI                        ; 0047d2e1
    JLE 0x0047d3bc                      ; 0047d2e3
        ;   XREF to: 0047d3bc (CONDITIONAL_JUMP)  ; LAB_0047d3bc
    MOV dword ptr [ESP + 0x134],EAX     ; 0047d2e9
    PUSH EBX                            ; 0047d2f0
        ;   Label: LAB_0047d2f0
    MOV ECX,dword ptr [ESP + 0x160]     ; 0047d2f1
    PUSH ECX                            ; 0047d2f8
    LEA EDI,[ESP + 0xc]                 ; 0047d2f9
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00482440 ; 0047d2fd
        ;   XREF to: 00482440 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00482440(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0047d302
    MOV ESI,EAX                         ; 0047d305
    MOV DL,0x5e                         ; 0047d307
    PUSH EDI                            ; 0047d309
    MOV AL,byte ptr [ESI]               ; 0047d30a
        ;   Label: LAB_0047d30a
    MOV byte ptr [EDI],AL               ; 0047d30c
    CMP AL,0x0                          ; 0047d30e
    JZ 0x0047d322                       ; 0047d310
        ;   XREF to: 0047d322 (CONDITIONAL_JUMP)  ; LAB_0047d322
    MOV AL,byte ptr [ESI + 0x1]         ; 0047d312
    ADD ESI,0x2                         ; 0047d315
    MOV byte ptr [EDI + 0x1],AL         ; 0047d318
    ADD EDI,0x2                         ; 0047d31b
    CMP AL,0x0                          ; 0047d31e
    JNZ 0x0047d30a                      ; 0047d320
        ;   XREF to: 0047d30a (CONDITIONAL_JUMP)  ; LAB_0047d30a
    POP EDI                             ; 0047d322
        ;   Label: LAB_0047d322
    LEA ESI,[ESP + 0x4]                 ; 0047d323
    MOV AL,byte ptr [ESI]               ; 0047d327
        ;   Label: LAB_0047d327
    CMP AL,DL                           ; 0047d329
    JZ 0x0047d33f                       ; 0047d32b
        ;   XREF to: 0047d33f (CONDITIONAL_JUMP)  ; LAB_0047d33f
    CMP AL,0x0                          ; 0047d32d
    JZ 0x0047d33d                       ; 0047d32f
        ;   XREF to: 0047d33d (CONDITIONAL_JUMP)  ; LAB_0047d33d
    INC ESI                             ; 0047d331
    MOV AL,byte ptr [ESI]               ; 0047d332
    CMP AL,DL                           ; 0047d334
    JZ 0x0047d33f                       ; 0047d336
        ;   XREF to: 0047d33f (CONDITIONAL_JUMP)  ; LAB_0047d33f
    INC ESI                             ; 0047d338
    CMP AL,0x0                          ; 0047d339
    JNZ 0x0047d327                      ; 0047d33b
        ;   XREF to: 0047d327 (CONDITIONAL_JUMP)  ; LAB_0047d327
    SUB ESI,ESI                         ; 0047d33d
        ;   Label: LAB_0047d33d
    MOV EDI,ESI                         ; 0047d33f
        ;   Label: LAB_0047d33f
    TEST ESI,ESI                        ; 0047d341
    JZ 0x0047d383                       ; 0047d343
        ;   XREF to: 0047d383 (CONDITIONAL_JUMP)  ; LAB_0047d383
    MOV EDX,dword ptr [ESP + 0x134]     ; 0047d345
    MOV AL,byte ptr [ESI + 0x1]         ; 0047d34c
    INC ESI                             ; 0047d34f
    MOV byte ptr [EDX + 0x4],AL         ; 0047d350
    PUSH EDI                            ; 0047d353
    MOV AL,byte ptr [ESI]               ; 0047d354
        ;   Label: LAB_0047d354
    MOV byte ptr [EDI],AL               ; 0047d356
    CMP AL,0x0                          ; 0047d358
    JZ 0x0047d36c                       ; 0047d35a
        ;   XREF to: 0047d36c (CONDITIONAL_JUMP)  ; LAB_0047d36c
    MOV AL,byte ptr [ESI + 0x1]         ; 0047d35c
    ADD ESI,0x2                         ; 0047d35f
    MOV byte ptr [EDI + 0x1],AL         ; 0047d362
    ADD EDI,0x2                         ; 0047d365
    CMP AL,0x0                          ; 0047d368
    JNZ 0x0047d354                      ; 0047d36a
        ;   XREF to: 0047d354 (CONDITIONAL_JUMP)  ; LAB_0047d354
    POP EDI                             ; 0047d36c
        ;   Label: LAB_0047d36c
    LEA EAX,[ESP + 0x4]                 ; 0047d36d
    PUSH EAX                            ; 0047d371
    PUSH EBX                            ; 0047d372
    MOV ESI,dword ptr [ESP + 0x164]     ; 0047d373
    PUSH ESI                            ; 0047d37a
    CALL shape_edittool.cpp_CStrList_setStringAt_FUN_004825f0 ; 0047d37b
        ;   XREF to: 004825f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_setStringAt_FUN_004825f0(CStrList * this_ptr, int index, char * new_string)
    ADD ESP,0xc                         ; 0047d380
    LEA EAX,[ESP + 0x4]                 ; 0047d383
        ;   Label: LAB_0047d383
    PUSH EAX                            ; 0047d387
    CALL shape_edittool.cpp_FUN_004864f0 ; 0047d388
        ;   XREF to: 004864f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_004864f0(char * button_text)
    ADD ESP,0x4                         ; 0047d38d
    CMP EAX,dword ptr [ESP + 0x13c]     ; 0047d390
    JLE 0x0047d3a0                      ; 0047d397
        ;   XREF to: 0047d3a0 (CONDITIONAL_JUMP)  ; LAB_0047d3a0
    MOV dword ptr [ESP + 0x13c],EAX     ; 0047d399
    MOV EAX,dword ptr [ESP + 0x134]     ; 0047d3a0
        ;   Label: LAB_0047d3a0
    ADD EAX,0xe4                        ; 0047d3a7
    INC EBX                             ; 0047d3ac
    MOV dword ptr [ESP + 0x134],EAX     ; 0047d3ad
    CMP EBX,EBP                         ; 0047d3b4
    JL 0x0047d2f0                       ; 0047d3b6
        ;   XREF to: 0047d2f0 (CONDITIONAL_JUMP)  ; LAB_0047d2f0
    PUSH 0x5bce85                       ; 0047d3bc | = "Cancel"
        ;   Label: LAB_0047d3bc
    CALL shape_edittool.cpp_FUN_004864f0 ; 0047d3c1
        ;   XREF to: 004864f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_004864f0(char * button_text)
    ADD ESP,0x4                         ; 0047d3c6
    CMP EAX,dword ptr [ESP + 0x13c]     ; 0047d3c9
    JLE 0x0047d3e6                      ; 0047d3d0
        ;   XREF to: 0047d3e6 (CONDITIONAL_JUMP)  ; LAB_0047d3e6
    PUSH 0x5bce8c                       ; 0047d3d2 | = "Cancel"
    CALL shape_edittool.cpp_FUN_004864f0 ; 0047d3d7
        ;   XREF to: 004864f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_004864f0(char * button_text)
    ADD ESP,0x4                         ; 0047d3dc
    MOV dword ptr [ESP + 0x13c],EAX     ; 0047d3df
    MOV EAX,[0x005fba18]                ; 0047d3e6 | DAT_005fba18
        ;   Label: LAB_0047d3e6
    MOV EDX,EAX                         ; 0047d3eb
    SAR EDX,0x1f                        ; 0047d3ed
    SHL EDX,0x7                         ; 0047d3f0
    SBB EAX,EDX                         ; 0047d3f3
    SAR EAX,0x7                         ; 0047d3f5
    MOV dword ptr [ESP + 0x114],EAX     ; 0047d3f8
    MOV EAX,[0x005fba1c]                ; 0047d3ff | DAT_005fba1c
    MOV EDX,EAX                         ; 0047d404
    MOV EBX,0x60                        ; 0047d406
    SAR EDX,0x1f                        ; 0047d40b
    IDIV EBX                            ; 0047d40e
    MOV ECX,dword ptr [ESP + 0x160]     ; 0047d410
    MOV ESI,EAX                         ; 0047d417
    LEA EAX,[EBP + -0x1]                ; 0047d419
    TEST ECX,ECX                        ; 0047d41c
    JNZ 0x0047d70b                      ; 0047d41e
        ;   XREF to: 0047d70b (CONDITIONAL_JUMP)  ; LAB_0047d70b
    MOV EDX,dword ptr [ESP + 0x114]     ; 0047d424
    SUB EDX,0x2                         ; 0047d42b
    IMUL EAX,EDX                        ; 0047d42e
    MOV EDX,dword ptr [ESP + 0x13c]     ; 0047d431
    IMUL EDX,EBP                        ; 0047d438
    ADD EAX,EDX                         ; 0047d43b
    PUSH ECX                            ; 0047d43d
    LEA EBX,[EAX + 0x1]                 ; 0047d43e
    CALL shape_edittool.cpp_FUN_00486580 ; 0047d441
        ;   XREF to: 00486580 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_00486580(char * button_text)
    ADD ESP,0x4                         ; 0047d446
    LEA EDI,[EAX + -0x1]                ; 0047d449
    MOV EAX,dword ptr [ESP + 0x158]     ; 0047d44c
        ;   Label: LAB_0047d44c
    PUSH EAX                            ; 0047d453
    MOV EDX,dword ptr [0x01c5b0e0]      ; 0047d454 | DAT_01c5b0e0
    PUSH EDX                            ; 0047d45a
    CALL engine_font.cpp_FUN_004b2a80   ; 0047d45b
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b2a80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 0047d460
    MOV EDX,EAX                         ; 0047d463
    CMP EBX,EAX                         ; 0047d465
    JLE 0x0047d46b                      ; 0047d467
        ;   XREF to: 0047d46b (CONDITIONAL_JUMP)  ; LAB_0047d46b
    MOV EDX,EBX                         ; 0047d469
    PUSH 0x0                            ; 0047d46b
        ;   Label: LAB_0047d46b
    MOV ECX,dword ptr [ESP + 0x15c]     ; 0047d46d
    PUSH ECX                            ; 0047d474
    PUSH EDI                            ; 0047d475
    PUSH EDX                            ; 0047d476
    MOV EDI,dword ptr [0x005fb140]      ; 0047d477 | g_CEditorToolsPtr
    PUSH EDI                            ; 0047d47d
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047f3e0 ; 0047d47e
        ;   XREF to: 0047f3e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047f3e0(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    MOV EAX,[0x01c6b5b0]                ; 0047d483 | DAT_01c6b5b0
    SUB EAX,dword ptr [0x01c6b5a8]      ; 0047d488 | DAT_01c6b5a8
    LEA EDX,[EAX + 0x1]                 ; 0047d48e
    SUB EDX,EBX                         ; 0047d491
    MOV EAX,EDX                         ; 0047d493
    SAR EDX,0x1f                        ; 0047d495
    SUB EAX,EDX                         ; 0047d498
    SAR EAX,0x1                         ; 0047d49a
    ADD ESP,0x14                        ; 0047d49c
    XOR EDI,EDI                         ; 0047d49f
    MOV dword ptr [ESP + 0x128],EAX     ; 0047d4a1
    TEST EBP,EBP                        ; 0047d4a8
    JLE 0x0047d5d1                      ; 0047d4aa
        ;   XREF to: 0047d5d1 (CONDITIONAL_JUMP)  ; LAB_0047d5d1
    LEA EAX,[ESI + -0x1]                ; 0047d4b0
    MOV dword ptr [ESP + 0x120],EAX     ; 0047d4b3
    IMUL EAX,EDI                        ; 0047d4ba
    MOV EDX,dword ptr [ESP + 0x114]     ; 0047d4bd
    DEC EDX                             ; 0047d4c4
    MOV dword ptr [ESP + 0x11c],EDX     ; 0047d4c5
    MOV dword ptr [ESP + 0x12c],EAX     ; 0047d4cc
    IMUL EAX,EDX,0x0                    ; 0047d4d3
    MOV dword ptr [ESP + 0x130],EAX     ; 0047d4d6
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0047d4dd
    MOV dword ptr [ESP + 0x124],EAX     ; 0047d4e4
    IMUL EAX,EDI                        ; 0047d4eb
    MOV EBX,dword ptr [ESP + 0x110]     ; 0047d4ee
    MOV dword ptr [ESP + 0x138],EAX     ; 0047d4f5
    MOV ECX,dword ptr [ESP + 0x128]     ; 0047d4fc
        ;   Label: LAB_0047d4fc
    MOV ESI,dword ptr [0x01c6b5a8]      ; 0047d503 | DAT_01c6b5a8
    MOV EAX,dword ptr [ESP + 0x160]     ; 0047d509
    ADD ESI,ECX                         ; 0047d510
    TEST EAX,EAX                        ; 0047d512
    JNZ 0x0047d72c                      ; 0047d514
        ;   XREF to: 0047d72c (CONDITIONAL_JUMP)  ; LAB_0047d72c
    MOV EAX,dword ptr [ESP + 0x138]     ; 0047d51a
    MOV EDX,dword ptr [ESP + 0x130]     ; 0047d521
    ADD ESI,EAX                         ; 0047d528
    PUSH 0x0                            ; 0047d52a
    ADD ESI,EDX                         ; 0047d52c
    CALL shape_edittool.cpp_FUN_00486580 ; 0047d52e
        ;   XREF to: 00486580 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_00486580(char * button_text)
    ADD ESP,0x4                         ; 0047d533
    MOV EDX,dword ptr [0x01c6b5b4]      ; 0047d536 | DAT_01c6b5b4
    PUSH EDI                            ; 0047d53c
    SUB EDX,EAX                         ; 0047d53d
    MOV ECX,dword ptr [ESP + 0x160]     ; 0047d53f
    LEA EAX,[EDX + 0x1]                 ; 0047d546
    PUSH ECX                            ; 0047d549
    MOV dword ptr [ESP + 0x110],EAX     ; 0047d54a
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00482440 ; 0047d551
        ;   XREF to: 00482440 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00482440(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0047d556
    PUSH EAX                            ; 0047d559
    MOV EAX,[0x01c6b5b4]                ; 0047d55a | DAT_01c6b5b4
    PUSH EAX                            ; 0047d55f
    MOV EAX,dword ptr [ESP + 0x144]     ; 0047d560
    ADD EAX,ESI                         ; 0047d567
    DEC EAX                             ; 0047d569
    PUSH EAX                            ; 0047d56a
    MOV EDX,dword ptr [ESP + 0x114]     ; 0047d56b
    PUSH EDX                            ; 0047d572
        ;   Label: LAB_0047d572
    PUSH ESI                            ; 0047d573
    PUSH EBX                            ; 0047d574
    CALL shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004860d0 ; 0047d575
        ;   XREF to: 004860d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004860d0(CEdButton * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x18                        ; 0047d57a
    MOV EAX,dword ptr [ESP + 0x120]     ; 0047d57d
    MOV EDX,dword ptr [ESP + 0x12c]     ; 0047d584
    MOV ECX,dword ptr [ESP + 0x130]     ; 0047d58b
    MOV ESI,dword ptr [ESP + 0x138]     ; 0047d592
    ADD EBX,0xe4                        ; 0047d599
    ADD EDX,EAX                         ; 0047d59f
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0047d5a1
    INC EDI                             ; 0047d5a8
    ADD ECX,EAX                         ; 0047d5a9
    MOV EAX,dword ptr [ESP + 0x124]     ; 0047d5ab
    MOV dword ptr [ESP + 0x12c],EDX     ; 0047d5b2
    ADD ESI,EAX                         ; 0047d5b9
    MOV dword ptr [ESP + 0x130],ECX     ; 0047d5bb
    MOV dword ptr [ESP + 0x138],ESI     ; 0047d5c2
    CMP EDI,EBP                         ; 0047d5c9
    JL 0x0047d4fc                       ; 0047d5cb
        ;   XREF to: 0047d4fc (CONDITIONAL_JUMP)  ; LAB_0047d4fc
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0047d5d1
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
        ;   Label: LAB_0047d5d1
    MOV EAX,[0x005fba2c]                ; 0047d5d6 | DAT_005fba2c
    MOV EDI,0x7f                        ; 0047d5db
    MOV dword ptr [ESP + 0x104],EAX     ; 0047d5e0
    XOR EAX,EAX                         ; 0047d5e7
    MOV dword ptr [0x005fba2c],EDI      ; 0047d5e9 | DAT_005fba2c
    MOV dword ptr [ESP + 0x140],EAX     ; 0047d5ef
    LEA EAX,[EBP + -0x1]                ; 0047d5f6
    MOV EDI,0xfffffffe                  ; 0047d5f9
    MOV dword ptr [ESP + 0x118],EAX     ; 0047d5fe
    PUSH 0x1c                           ; 0047d605
        ;   Label: LAB_0047d605
    MOV EAX,[0x00600284]                ; 0047d607 | DAT_00600284
    PUSH EAX                            ; 0047d60c | DAT_01d70a78
    MOV EBX,dword ptr [EAX]             ; 0047d60d | DAT_01d70a78
    CALL dword ptr [EBX + 0x4]          ; 0047d60f
    ADD ESP,0x8                         ; 0047d612
    TEST EAX,EAX                        ; 0047d615
    JZ 0x0047d620                       ; 0047d617
        ;   XREF to: 0047d620 (CONDITIONAL_JUMP)  ; LAB_0047d620
    MOV EDI,dword ptr [ESP + 0x140]     ; 0047d619
    PUSH 0x2a                           ; 0047d620
        ;   Label: LAB_0047d620
    MOV EAX,[0x00600284]                ; 0047d622 | DAT_00600284
    PUSH EAX                            ; 0047d627 | DAT_01d70a78
    MOV EBX,dword ptr [EAX]             ; 0047d628 | DAT_01d70a78
    CALL dword ptr [EBX]                ; 0047d62a
    ADD ESP,0x8                         ; 0047d62c
    TEST EAX,EAX                        ; 0047d62f
    JZ 0x0047d789                       ; 0047d631
        ;   XREF to: 0047d789 (CONDITIONAL_JUMP)  ; LAB_0047d789
    PUSH 0x2a                           ; 0047d637
        ;   Label: LAB_0047d637
    MOV EAX,[0x00600284]                ; 0047d639 | DAT_00600284
    PUSH EAX                            ; 0047d63e | DAT_01d70a78
    MOV EBX,dword ptr [EAX]             ; 0047d63f | DAT_01d70a78
    CALL dword ptr [EBX]                ; 0047d641
    ADD ESP,0x8                         ; 0047d643
    TEST EAX,EAX                        ; 0047d646
    JZ 0x0047d665                       ; 0047d648
        ;   XREF to: 0047d665 (CONDITIONAL_JUMP)  ; LAB_0047d665
    PUSH 0xf                            ; 0047d64a
    MOV EAX,[0x00600284]                ; 0047d64c | DAT_00600284
    PUSH EAX                            ; 0047d651 | DAT_01d70a78
    MOV EBX,dword ptr [EAX]             ; 0047d652 | DAT_01d70a78
    CALL dword ptr [EBX + 0x4]          ; 0047d654
    ADD ESP,0x8                         ; 0047d657
    TEST EAX,EAX                        ; 0047d65a
    JZ 0x0047d665                       ; 0047d65c
        ;   XREF to: 0047d665 (CONDITIONAL_JUMP)  ; LAB_0047d665
    DEC dword ptr [ESP + 0x140]         ; 0047d65e
    MOV ESI,dword ptr [ESP + 0x140]     ; 0047d665
        ;   Label: LAB_0047d665
    CMP EBP,ESI                         ; 0047d66c
    JG 0x0047d7ad                       ; 0047d66e
        ;   XREF to: 0047d7ad (CONDITIONAL_JUMP)  ; LAB_0047d7ad
    XOR EDX,EDX                         ; 0047d674
    MOV dword ptr [ESP + 0x140],EDX     ; 0047d676
    CMP dword ptr [0x02d21b80],0x0      ; 0047d67d | DAT_02d21b80
        ;   Label: LAB_0047d67d
    JNZ 0x0047d7c8                      ; 0047d684
        ;   XREF to: 0047d7c8 (CONDITIONAL_JUMP)  ; LAB_0047d7c8
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_00580800 ; 0047d68a
        ;   XREF to: 00580800 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_00580800()
        ;   Label: LAB_0047d68a
    TEST EAX,EAX                        ; 0047d68f
    JZ 0x0047d818                       ; 0047d691
        ;   XREF to: 0047d818 (CONDITIONAL_JUMP)  ; LAB_0047d818
    MOV EBX,dword ptr [0x00600284]      ; 0047d697 | DAT_00600284
    PUSH EBX                            ; 0047d69d | DAT_01d70a78
    CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004df590 ; 0047d69e
        ;   XREF to: 004df590 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004df590(CKeys * this_ptr)
    ADD ESP,0x4                         ; 0047d6a3
    MOV ESI,dword ptr [ESP + 0x110]     ; 0047d6a6
    XOR EBX,EBX                         ; 0047d6ad
    MOV DL,byte ptr [ESI + 0x4]         ; 0047d6af
    MOV dword ptr [ESP + 0x144],EAX     ; 0047d6b2
    TEST DL,DL                          ; 0047d6b9
    JZ 0x0047d6eb                       ; 0047d6bb
        ;   XREF to: 0047d6eb (CONDITIONAL_JUMP)  ; LAB_0047d6eb
    CMP EBX,EBP                         ; 0047d6bd
        ;   Label: LAB_0047d6bd
    JGE 0x0047d6eb                      ; 0047d6bf
        ;   XREF to: 0047d6eb (CONDITIONAL_JUMP)  ; LAB_0047d6eb
    XOR EAX,EAX                         ; 0047d6c1
    MOV AL,byte ptr [ESI + 0x4]         ; 0047d6c3
    PUSH EAX                            ; 0047d6c6
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 0047d6c7
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 0047d6cc
    CMP EAX,dword ptr [ESP + 0x144]     ; 0047d6cf
    JNZ 0x0047d6da                      ; 0047d6d6
        ;   XREF to: 0047d6da (CONDITIONAL_JUMP)  ; LAB_0047d6da
    MOV EDI,EBX                         ; 0047d6d8
    MOV DH,byte ptr [ESI + 0xe8]        ; 0047d6da
        ;   Label: LAB_0047d6da
    ADD ESI,0xe4                        ; 0047d6e0
    INC EBX                             ; 0047d6e6
    TEST DH,DH                          ; 0047d6e7
    JNZ 0x0047d6bd                      ; 0047d6e9
        ;   XREF to: 0047d6bd (CONDITIONAL_JUMP)  ; LAB_0047d6bd
    CMP dword ptr [ESP + 0x144],0x1b    ; 0047d6eb
        ;   Label: LAB_0047d6eb
    JNZ 0x0047d68a                      ; 0047d6f3
        ;   XREF to: 0047d68a (CONDITIONAL_JUMP)  ; LAB_0047d68a
    MOV EDI,0xffffffff                  ; 0047d6f5
    JMP 0x0047d68a                      ; 0047d6fa
        ;   XREF to: 0047d68a (UNCONDITIONAL_JUMP)  ; LAB_0047d68a
    MOV EAX,0xffffffff                  ; 0047d6fc
        ;   Label: LAB_0047d6fc
    ADD ESP,0x144                       ; 0047d701
    POP EBP                             ; 0047d707
    POP ESI                             ; 0047d708
    POP EBX                             ; 0047d709
    RET                                 ; 0047d70a
    LEA EDI,[ESI + -0x2]                ; 0047d70b
        ;   Label: LAB_0047d70b
    IMUL EDI,EAX                        ; 0047d70e
    PUSH 0x0                            ; 0047d711
    CALL shape_edittool.cpp_FUN_00486580 ; 0047d713
        ;   XREF to: 00486580 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_00486580(char * button_text)
    IMUL EAX,EBP                        ; 0047d718
    MOV EBX,dword ptr [ESP + 0x140]     ; 0047d71b
    ADD ESP,0x4                         ; 0047d722
    ADD EDI,EAX                         ; 0047d725
    JMP 0x0047d44c                      ; 0047d727
        ;   XREF to: 0047d44c (UNCONDITIONAL_JUMP)  ; LAB_0047d44c
    PUSH 0x0                            ; 0047d72c
        ;   Label: LAB_0047d72c
    CALL shape_edittool.cpp_FUN_00486580 ; 0047d72e
        ;   XREF to: 00486580 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_00486580(char * button_text)
    IMUL EAX,EDI                        ; 0047d733
    ADD ESP,0x4                         ; 0047d736
    MOV EDX,dword ptr [0x01c6b5ac]      ; 0047d739 | DAT_01c6b5ac
    MOV ECX,dword ptr [ESP + 0x12c]     ; 0047d73f
    ADD EAX,EDX                         ; 0047d746
    ADD EAX,ECX                         ; 0047d748
    DEC EAX                             ; 0047d74a
    PUSH EDI                            ; 0047d74b
    MOV dword ptr [ESP + 0x110],EAX     ; 0047d74c
    MOV EAX,dword ptr [ESP + 0x160]     ; 0047d753
    PUSH EAX                            ; 0047d75a
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00482440 ; 0047d75b
        ;   XREF to: 00482440 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00482440(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0047d760
    PUSH EAX                            ; 0047d763
    PUSH 0x0                            ; 0047d764
    CALL shape_edittool.cpp_FUN_00486580 ; 0047d766
        ;   XREF to: 00486580 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_00486580(char * button_text)
    ADD ESP,0x4                         ; 0047d76b
    MOV EDX,dword ptr [ESP + 0x110]     ; 0047d76e
    ADD EAX,EDX                         ; 0047d775
    DEC EAX                             ; 0047d777
    PUSH EAX                            ; 0047d778
    MOV EAX,dword ptr [ESP + 0x144]     ; 0047d779
    ADD EAX,ESI                         ; 0047d780
    DEC EAX                             ; 0047d782
    PUSH EAX                            ; 0047d783
    JMP 0x0047d572                      ; 0047d784
        ;   XREF to: 0047d572 (UNCONDITIONAL_JUMP)  ; LAB_0047d572
    PUSH 0xf                            ; 0047d789
        ;   Label: LAB_0047d789
    MOV EAX,[0x00600284]                ; 0047d78b | DAT_00600284
    PUSH EAX                            ; 0047d790 | DAT_01d70a78
    MOV EBX,dword ptr [EAX]             ; 0047d791 | DAT_01d70a78
    CALL dword ptr [EBX + 0x4]          ; 0047d793
    ADD ESP,0x8                         ; 0047d796
    TEST EAX,EAX                        ; 0047d799
    JZ 0x0047d637                       ; 0047d79b
        ;   XREF to: 0047d637 (CONDITIONAL_JUMP)  ; LAB_0047d637
    INC dword ptr [ESP + 0x140]         ; 0047d7a1
    JMP 0x0047d637                      ; 0047d7a8
        ;   XREF to: 0047d637 (UNCONDITIONAL_JUMP)  ; LAB_0047d637
    TEST ESI,ESI                        ; 0047d7ad
        ;   Label: LAB_0047d7ad
    JGE 0x0047d67d                      ; 0047d7af
        ;   XREF to: 0047d67d (CONDITIONAL_JUMP)  ; LAB_0047d67d
    MOV EAX,dword ptr [ESP + 0x118]     ; 0047d7b5
    MOV dword ptr [ESP + 0x140],EAX     ; 0047d7bc
    JMP 0x0047d67d                      ; 0047d7c3
        ;   XREF to: 0047d67d (UNCONDITIONAL_JUMP)  ; LAB_0047d67d
    MOV EDI,0xffffffff                  ; 0047d7c8
        ;   Label: LAB_0047d7c8
    PUSH 0x5df080                       ; 0047d7cd | g_CEdButtonTypeInfo
        ;   Label: LAB_0047d7cd
    MOV ECX,dword ptr [ESP + 0x114]     ; 0047d7d2
    PUSH ECX                            ; 0047d7d9
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0047d7da
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 0047d7df
    PUSH EAX                            ; 0047d7e2
    CALL crt_unknown.c_FUN_005a30b6     ; 0047d7e3
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0047d7e8
    MOV EAX,dword ptr [ESP + 0x104]     ; 0047d7eb
    MOV [0x005fba2c],EAX                ; 0047d7f2 | DAT_005fba2c
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0047d7f7
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    MOV EBX,dword ptr [0x005fb140]      ; 0047d7fc | g_CEditorToolsPtr
    PUSH EBX                            ; 0047d802
    CALL shape_edittool.cpp_FUN_0047f970 ; 0047d803
        ;   XREF to: 0047f970 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047f970()
    ADD ESP,0x4                         ; 0047d808
    MOV EAX,EDI                         ; 0047d80b
    POP EDI                             ; 0047d80d
    ADD ESP,0x144                       ; 0047d80e
    POP EBP                             ; 0047d814
    POP ESI                             ; 0047d815
    POP EBX                             ; 0047d816
    RET                                 ; 0047d817
    XOR EBX,EBX                         ; 0047d818
        ;   Label: LAB_0047d818
    TEST EBP,EBP                        ; 0047d81a
    JLE 0x0047d84e                      ; 0047d81c
        ;   XREF to: 0047d84e (CONDITIONAL_JUMP)  ; LAB_0047d84e
    MOV ESI,dword ptr [ESP + 0x110]     ; 0047d81e
    PUSH ESI                            ; 0047d825
        ;   Label: LAB_0047d825
    CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_00486440 ; 0047d826
        ;   XREF to: 00486440 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdButton_wasClicked_FUN_00486440(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 0047d82b
    TEST EAX,EAX                        ; 0047d82e
    JZ 0x0047d834                       ; 0047d830
        ;   XREF to: 0047d834 (CONDITIONAL_JUMP)  ; LAB_0047d834
    MOV EDI,EBX                         ; 0047d832
    CMP ESI,dword ptr [0x01c5bb78]      ; 0047d834 | DAT_01c5bb78
        ;   Label: LAB_0047d834
    JNZ 0x0047d843                      ; 0047d83a
        ;   XREF to: 0047d843 (CONDITIONAL_JUMP)  ; LAB_0047d843
    MOV dword ptr [ESP + 0x140],EBX     ; 0047d83c
    INC EBX                             ; 0047d843
        ;   Label: LAB_0047d843
    ADD ESI,0xe4                        ; 0047d844
    CMP EBX,EBP                         ; 0047d84a
    JL 0x0047d825                       ; 0047d84c
        ;   XREF to: 0047d825 (CONDITIONAL_JUMP)  ; LAB_0047d825
    MOV ESI,dword ptr [0x005fb140]      ; 0047d84e | g_CEditorToolsPtr
        ;   Label: LAB_0047d84e
    PUSH ESI                            ; 0047d854
    CALL shape_edittool.cpp_FUN_0047fa80 ; 0047d855
        ;   XREF to: 0047fa80 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047fa80()
    ADD ESP,0x4                         ; 0047d85a
    XOR ESI,ESI                         ; 0047d85d
    TEST EBP,EBP                        ; 0047d85f
    JLE 0x0047d88e                      ; 0047d861
        ;   XREF to: 0047d88e (CONDITIONAL_JUMP)  ; LAB_0047d88e
    MOV EBX,dword ptr [ESP + 0x110]     ; 0047d863
    CMP ESI,dword ptr [ESP + 0x140]     ; 0047d86a
        ;   Label: LAB_0047d86a
    SETZ AL                             ; 0047d871
    AND EAX,0xff                        ; 0047d874
    PUSH EAX                            ; 0047d879
    PUSH EBX                            ; 0047d87a
    INC ESI                             ; 0047d87b
    CALL shape_edittool.cpp_FUN_00486120 ; 0047d87c
        ;   XREF to: 00486120 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00486120()
    ADD ESP,0x8                         ; 0047d881
    ADD EBX,0xe4                        ; 0047d884
    CMP ESI,EBP                         ; 0047d88a
    JL 0x0047d86a                       ; 0047d88c
        ;   XREF to: 0047d86a (CONDITIONAL_JUMP)  ; LAB_0047d86a
    PUSH 0x0                            ; 0047d88e
        ;   Label: LAB_0047d88e
    MOV ECX,dword ptr [0x005fb140]      ; 0047d890 | g_CEditorToolsPtr
    PUSH ECX                            ; 0047d896
    CALL shape_edittool.cpp_FUN_00480410 ; 0047d897
        ;   XREF to: 00480410 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00480410()
    ADD ESP,0x8                         ; 0047d89c
    CALL wincore_wddvmem.cpp_FUN_0057a8a0 ; 0047d89f
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_0057a8a0()
    CMP EDI,-0x2                        ; 0047d8a4
    JZ 0x0047d605                       ; 0047d8a7
        ;   XREF to: 0047d605 (CONDITIONAL_JUMP)  ; LAB_0047d605
    JMP 0x0047d7cd                      ; 0047d8ad
        ;   XREF to: 0047d7cd (UNCONDITIONAL_JUMP)  ; LAB_0047d7cd

