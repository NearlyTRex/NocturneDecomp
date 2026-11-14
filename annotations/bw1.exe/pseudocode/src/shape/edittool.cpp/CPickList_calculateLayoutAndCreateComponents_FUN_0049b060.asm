; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CPickList_calculateLayoutAndCreateComponents_FUN_0049b060(CPickList *this_ptr,char *dialog_title,uint window_flags)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   dialog_title
; uint             Stack[0xc]:4   window_flags
; Local Variables:
; undefined1       Stack[-0x160]:1  local_160
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
; XREF[1]:
;   shape_edittool.cpp_CPickList_initializeDialog_FUN_0049a980 at 0049a990
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dbc68
;   TerminatedCString s_gEdFont_must_be_set_by_t_005dbc7e
;   TerminatedCString s_shape_edittool_cpp_005dc698
;   TerminatedCString s_Too_many_picklist_column_005dc6ae
;   TerminatedCString s_Cancel_005dc6c9
;   CEditorTools* g_CEditorToolsPtr = 01c3eb54
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_01c3eb50
;   undefined4 DAT_01c3f538
;   undefined4 DAT_01c3f53c
;   undefined4 DAT_01c3f5cc
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;   undefined4 DAT_01c4f010
;   ... and 3 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_memory.c_memset_FUN_005bfb70
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0
;   shape_edittool.cpp_calculateButtonWidth_FUN_0049d950
;   shape_edittool.cpp_calculateGridHeight_FUN_0049d450
;   shape_edittool.cpp_calculateGridWidth_FUN_0049d430
;   shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_0049d530
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00496840
;   shape_edittool.cpp_CEdScrollBar_setPosition_FUN_0049c9f0
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0
;   shape_edittool.cpp_FUN_0049d9e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049b060
        ;   Label: shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_0049b060
    PUSH ESI                            ; 0049b061
    PUSH EDI                            ; 0049b062
    PUSH EBP                            ; 0049b063
    SUB ESP,0x150                       ; 0049b064
    CMP dword ptr [0x01c3eb50],0x0      ; 0049b06a | DAT_01c3eb50
    JZ 0x0049b16f                       ; 0049b071
        ;   XREF to: 0049b16f (CONDITIONAL_JUMP)  ; LAB_0049b16f
    MOV EAX,[0x01c3eb50]                ; 0049b077 | DAT_01c3eb50
        ;   Label: LAB_0049b077
    PUSH 0x6a                           ; 0049b07c
    MOV EDX,dword ptr [EAX + 0x41e8]    ; 0049b07e
    PUSH EAX                            ; 0049b084
    MOV dword ptr [0x01c3f538],EDX      ; 0049b085 | DAT_01c3f538
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510 ; 0049b08b
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0049b090
    MOV [0x01c3f53c],EAX                ; 0049b093 | DAT_01c3f53c
    PUSH 0x40                           ; 0049b098
    MOV EDX,dword ptr [ESP + 0x168]     ; 0049b09a
    INC EAX                             ; 0049b0a1
    PUSH 0x0                            ; 0049b0a2
    MOV dword ptr [EDX + 0x18c],EAX     ; 0049b0a4
    LEA EAX,[EDX + 0x10]                ; 0049b0aa
    MOV dword ptr [EDX + 0x190],0x8     ; 0049b0ad
    PUSH EAX                            ; 0049b0b7
    MOV dword ptr [EDX + 0x50],0x1      ; 0049b0b8
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0049b0bf
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0049b0c4
    MOV EAX,dword ptr [ESP + 0x164]     ; 0049b0c7
    XOR ESI,ESI                         ; 0049b0ce
    MOV EDI,dword ptr [EAX]             ; 0049b0d0
    MOV dword ptr [ESP + 0x14c],ESI     ; 0049b0d2
    TEST EDI,EDI                        ; 0049b0d9
    JLE 0x0049b1dc                      ; 0049b0db
        ;   XREF to: 0049b1dc (CONDITIONAL_JUMP)  ; LAB_0049b1dc
    MOV EBX,dword ptr [ESP + 0x14c]     ; 0049b0e1
        ;   Label: LAB_0049b0e1
    PUSH EBX                            ; 0049b0e8
    MOV ESI,dword ptr [ESP + 0x168]     ; 0049b0e9
    PUSH ESI                            ; 0049b0f0
    XOR EBP,EBP                         ; 0049b0f1
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0 ; 0049b0f3
        ;   XREF to: 004998a0 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0049b0f8
    MOV EDI,EAX                         ; 0049b0fb
    XOR BL,BL                           ; 0049b0fd
    MOV EDX,ESP                         ; 0049b0ff
        ;   Label: LAB_0049b0ff
    MOV BH,byte ptr [EDI]               ; 0049b101
    MOV EAX,EDI                         ; 0049b103
    CMP BL,BH                           ; 0049b105
    JZ 0x0049b119                       ; 0049b107
        ;   XREF to: 0049b119 (CONDITIONAL_JUMP)  ; LAB_0049b119
    MOV BH,byte ptr [EAX]               ; 0049b109
        ;   Label: LAB_0049b109
    LEA ECX,[EAX + 0x1]                 ; 0049b10b
    CMP BH,0x9                          ; 0049b10e
    JNZ 0x0049b197                      ; 0049b111
        ;   XREF to: 0049b197 (CONDITIONAL_JUMP)  ; LAB_0049b197
    MOV EAX,ECX                         ; 0049b117
    MOV byte ptr [EDX],BL               ; 0049b119
        ;   Label: LAB_0049b119
    MOV EDI,EAX                         ; 0049b11b
    MOV EAX,ESP                         ; 0049b11d
    PUSH EAX                            ; 0049b11f
    MOV EAX,[0x01c3eb50]                ; 0049b120 | DAT_01c3eb50
    PUSH EAX                            ; 0049b125
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0 ; 0049b126
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    MOV EDX,dword ptr [ESI + 0x10]      ; 0049b12b
    ADD ESP,0x8                         ; 0049b12e
    CMP EAX,EDX                         ; 0049b131
    JLE 0x0049b138                      ; 0049b133
        ;   XREF to: 0049b138 (CONDITIONAL_JUMP)  ; LAB_0049b138
    MOV dword ptr [ESI + 0x10],EAX      ; 0049b135
    INC EBP                             ; 0049b138
        ;   Label: LAB_0049b138
    MOV CL,byte ptr [EDI]               ; 0049b139
    ADD ESI,0x4                         ; 0049b13b
    CMP BL,CL                           ; 0049b13e
    JZ 0x0049b1ad                       ; 0049b140
        ;   XREF to: 0049b1ad (CONDITIONAL_JUMP)  ; LAB_0049b1ad
    CMP EBP,0x10                        ; 0049b146
    JL 0x0049b0ff                       ; 0049b149
        ;   XREF to: 0049b0ff (CONDITIONAL_JUMP)  ; LAB_0049b0ff
    MOV EAX,0x5dc698                    ; 0049b14b | = "..\\shape\\edittool.cpp"
    MOV EDX,0x101b                      ; 0049b150
    PUSH 0x5dc6ae                       ; 0049b155 | = "Too many picklist columns!"
    MOV [0x01d1d400],EAX                ; 0049b15a | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0049b15f | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0049b165
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0049b16a
    JMP 0x0049b0ff                      ; 0049b16d
        ;   XREF to: 0049b0ff (UNCONDITIONAL_JUMP)  ; LAB_0049b0ff
    MOV ECX,0x5dbc68                    ; 0049b16f | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0049b16f
    MOV EBX,0xa4                        ; 0049b174
    PUSH 0x5dbc7e                       ; 0049b179 | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d1d400],ECX      ; 0049b17e | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 0049b184 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0049b18a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0049b18f
    JMP 0x0049b077                      ; 0049b192
        ;   XREF to: 0049b077 (UNCONDITIONAL_JUMP)  ; LAB_0049b077
    MOV AL,byte ptr [EAX]               ; 0049b197
        ;   Label: LAB_0049b197
    MOV byte ptr [EDX],AL               ; 0049b199
    INC EDX                             ; 0049b19b
    MOV BH,byte ptr [ECX]               ; 0049b19c
    MOV EAX,ECX                         ; 0049b19e
    CMP BL,BH                           ; 0049b1a0
    JNZ 0x0049b109                      ; 0049b1a2
        ;   XREF to: 0049b109 (CONDITIONAL_JUMP)  ; LAB_0049b109
    JMP 0x0049b119                      ; 0049b1a8
        ;   XREF to: 0049b119 (UNCONDITIONAL_JUMP)  ; LAB_0049b119
    MOV EAX,dword ptr [ESP + 0x164]     ; 0049b1ad
        ;   Label: LAB_0049b1ad
    CMP EBP,dword ptr [EAX + 0x50]      ; 0049b1b4
    JLE 0x0049b1bc                      ; 0049b1b7
        ;   XREF to: 0049b1bc (CONDITIONAL_JUMP)  ; LAB_0049b1bc
    MOV dword ptr [EAX + 0x50],EBP      ; 0049b1b9
    MOV EBP,dword ptr [ESP + 0x14c]     ; 0049b1bc
        ;   Label: LAB_0049b1bc
    MOV EDX,dword ptr [ESP + 0x164]     ; 0049b1c3
    INC EBP                             ; 0049b1ca
    MOV ECX,dword ptr [EDX]             ; 0049b1cb
    MOV dword ptr [ESP + 0x14c],EBP     ; 0049b1cd
    CMP EBP,ECX                         ; 0049b1d4
    JL 0x0049b0e1                       ; 0049b1d6
        ;   XREF to: 0049b0e1 (CONDITIONAL_JUMP)  ; LAB_0049b0e1
    MOV ESI,dword ptr [ESP + 0x164]     ; 0049b1dc
        ;   Label: LAB_0049b1dc
    MOV ECX,0x28                        ; 0049b1e3
    XOR EDI,EDI                         ; 0049b1e8
    MOV EAX,dword ptr [ESP + 0x164]     ; 0049b1ea
        ;   Label: LAB_0049b1ea
    MOV EAX,dword ptr [EAX + 0x50]      ; 0049b1f1
    DEC EAX                             ; 0049b1f4
    CMP EDI,EAX                         ; 0049b1f5
    JGE 0x0049b213                      ; 0049b1f7
        ;   XREF to: 0049b213 (CONDITIONAL_JUMP)  ; LAB_0049b213
    MOV EAX,[0x0061b498]                ; 0049b1f9 | DAT_0061b498
    MOV EDX,EAX                         ; 0049b1fe
    SAR EDX,0x1f                        ; 0049b200
    IDIV ECX                            ; 0049b203
    MOV EBP,dword ptr [ESI + 0x10]      ; 0049b205
    ADD ESI,0x4                         ; 0049b208
    ADD EBP,EAX                         ; 0049b20b
    INC EDI                             ; 0049b20d
    MOV dword ptr [ESI + 0xc],EBP       ; 0049b20e
    JMP 0x0049b1ea                      ; 0049b211
        ;   XREF to: 0049b1ea (UNCONDITIONAL_JUMP)  ; LAB_0049b1ea
    MOV EAX,dword ptr [ESP + 0x164]     ; 0049b213
        ;   Label: LAB_0049b213
    MOV EDX,dword ptr [ESP + 0x164]     ; 0049b21a
    MOV dword ptr [EAX + 0x1a4],0x0     ; 0049b221
    MOV EDI,dword ptr [EDX + 0x50]      ; 0049b22b
    XOR EAX,EAX                         ; 0049b22e
    TEST EDI,EDI                        ; 0049b230
    JLE 0x0049b260                      ; 0049b232
        ;   XREF to: 0049b260 (CONDITIONAL_JUMP)  ; LAB_0049b260
    MOV EBX,dword ptr [ESP + 0x164]     ; 0049b234
    MOV ECX,dword ptr [EDX + 0x10]      ; 0049b23b
        ;   Label: LAB_0049b23b
    ADD EDX,0x4                         ; 0049b23e
    MOV ESI,dword ptr [EBX + 0x1a4]     ; 0049b241
    INC EAX                             ; 0049b247
    ADD ESI,ECX                         ; 0049b248
    MOV EDI,dword ptr [EBX + 0x50]      ; 0049b24a
    MOV dword ptr [EBX + 0x1a4],ESI     ; 0049b24d
    CMP EAX,EDI                         ; 0049b253
    JL 0x0049b23b                       ; 0049b255
        ;   XREF to: 0049b23b (CONDITIONAL_JUMP)  ; LAB_0049b23b
    LEA EAX,[EAX]                       ; 0049b257
    LEA EDX,[EDX]                       ; 0049b25d
    MOV EAX,dword ptr [ESP + 0x164]     ; 0049b260
        ;   Label: LAB_0049b260
    MOV EDX,dword ptr [ESP + 0x164]     ; 0049b267
    MOV EAX,dword ptr [EAX + 0x190]     ; 0049b26e
    MOV EBP,dword ptr [EDX + 0x1a4]     ; 0049b274
    ADD EAX,EAX                         ; 0049b27a
    ADD EBP,EAX                         ; 0049b27c
    MOV dword ptr [EDX + 0x1a4],EBP     ; 0049b27e
    MOV EDX,dword ptr [0x01c3f53c]      ; 0049b284 | DAT_01c3f53c
    MOV EAX,[0x0061b49c]                ; 0049b28a | DAT_0061b49c
    SHL EDX,0x2                         ; 0049b28f
    SUB EAX,EDX                         ; 0049b292
    MOV ECX,dword ptr [ESP + 0x164]     ; 0049b294
    MOV EDX,EAX                         ; 0049b29b
    MOV ECX,dword ptr [ECX + 0x18c]     ; 0049b29d
    SAR EDX,0x1f                        ; 0049b2a3
    IDIV ECX                            ; 0049b2a6
    MOV EDX,dword ptr [ESP + 0x164]     ; 0049b2a8
    MOV dword ptr [EDX + 0x1a0],EAX     ; 0049b2af
    CMP EAX,0x1                         ; 0049b2b5
    JGE 0x0049b2c4                      ; 0049b2b8
        ;   XREF to: 0049b2c4 (CONDITIONAL_JUMP)  ; LAB_0049b2c4
    MOV dword ptr [EDX + 0x1a0],0x1     ; 0049b2ba
    MOV EDX,dword ptr [ESP + 0x164]     ; 0049b2c4
        ;   Label: LAB_0049b2c4
    MOV EAX,dword ptr [ESP + 0x164]     ; 0049b2cb
    MOV ECX,dword ptr [EDX]             ; 0049b2d2
    CMP ECX,dword ptr [EAX + 0x1a0]     ; 0049b2d4
    JGE 0x0049b2e2                      ; 0049b2da
        ;   XREF to: 0049b2e2 (CONDITIONAL_JUMP)  ; LAB_0049b2e2
    MOV dword ptr [EDX + 0x1a0],ECX     ; 0049b2dc
    MOV EDX,dword ptr [0x0061b498]      ; 0049b2e2 | DAT_0061b498
        ;   Label: LAB_0049b2e2
    LEA EAX,[EDX*0x8 + 0x0]             ; 0049b2e8
    SUB EAX,EDX                         ; 0049b2ef
    MOV EDX,EAX                         ; 0049b2f1
    SAR EDX,0x1f                        ; 0049b2f3
    SHL EDX,0x3                         ; 0049b2f6
    SBB EAX,EDX                         ; 0049b2f9
    SAR EAX,0x3                         ; 0049b2fb
    MOV ECX,dword ptr [ESP + 0x164]     ; 0049b2fe
    MOV EDX,EAX                         ; 0049b305
    MOV ECX,dword ptr [ECX + 0x1a4]     ; 0049b307
    SAR EDX,0x1f                        ; 0049b30d
    IDIV ECX                            ; 0049b310
    MOV EDX,dword ptr [ESP + 0x164]     ; 0049b312
    MOV dword ptr [EDX + 0x1a8],EAX     ; 0049b319
    CMP EAX,0x1                         ; 0049b31f
    JGE 0x0049b32e                      ; 0049b322
        ;   XREF to: 0049b32e (CONDITIONAL_JUMP)  ; LAB_0049b32e
    MOV dword ptr [EDX + 0x1a8],0x1     ; 0049b324
    MOV EDX,dword ptr [ESP + 0x164]     ; 0049b32e
        ;   Label: LAB_0049b32e
    MOV EAX,dword ptr [ESP + 0x164]     ; 0049b335
    MOV ESI,dword ptr [EDX + 0x1a0]     ; 0049b33c
    MOV EAX,dword ptr [EAX]             ; 0049b342
    ADD EAX,ESI                         ; 0049b344
    MOV ECX,dword ptr [ESP + 0x164]     ; 0049b346
    LEA EDX,[EAX + -0x1]                ; 0049b34d
    MOV EDI,dword ptr [ECX + 0x1a0]     ; 0049b350
    MOV EAX,EDX                         ; 0049b356
    SAR EDX,0x1f                        ; 0049b358
    IDIV EDI                            ; 0049b35b
    CMP EAX,dword ptr [ECX + 0x1a8]     ; 0049b35d
    JGE 0x0049b36b                      ; 0049b363
        ;   XREF to: 0049b36b (CONDITIONAL_JUMP)  ; LAB_0049b36b
    MOV dword ptr [ECX + 0x1a8],EAX     ; 0049b365
    MOV EAX,dword ptr [ESP + 0x164]     ; 0049b36b
        ;   Label: LAB_0049b36b
    MOV EDX,dword ptr [EAX + 0x54]      ; 0049b372
    TEST EDX,EDX                        ; 0049b375
    JLE 0x0049b388                      ; 0049b377
        ;   XREF to: 0049b388 (CONDITIONAL_JUMP)  ; LAB_0049b388
    MOV EAX,EDX                         ; 0049b379
    MOV EDX,dword ptr [ESP + 0x164]     ; 0049b37b
    MOV dword ptr [EDX + 0x1a8],EAX     ; 0049b382
    MOV EAX,dword ptr [ESP + 0x164]     ; 0049b388
        ;   Label: LAB_0049b388
    MOV dword ptr [EAX + 0x1f0],0x0     ; 0049b38f
    MOV EDX,dword ptr [ESP + 0x164]     ; 0049b399
    MOV EAX,dword ptr [EAX + 0x1a0]     ; 0049b3a0
    MOV ECX,dword ptr [EDX + 0x1a8]     ; 0049b3a6
    IMUL EAX,ECX                        ; 0049b3ac
    CMP EAX,dword ptr [EDX]             ; 0049b3af
    JGE 0x0049b3c6                      ; 0049b3b1
        ;   XREF to: 0049b3c6 (CONDITIONAL_JUMP)  ; LAB_0049b3c6
    CMP ECX,0x1                         ; 0049b3b3
    JLE 0x0049b7c9                      ; 0049b3b6
        ;   XREF to: 0049b7c9 (CONDITIONAL_JUMP)  ; LAB_0049b7c9
    MOV dword ptr [EDX + 0x1f0],0x2     ; 0049b3bc
    MOV EAX,dword ptr [ESP + 0x164]     ; 0049b3c6
        ;   Label: LAB_0049b3c6
    MOV EDX,dword ptr [ESP + 0x164]     ; 0049b3cd
    MOV EAX,dword ptr [EAX + 0x1a4]     ; 0049b3d4
    IMUL EAX,dword ptr [EDX + 0x1a8]    ; 0049b3da
    LEA EBP,[EAX + 0x8]                 ; 0049b3e1
    MOV ECX,dword ptr [EDX + 0x18c]     ; 0049b3e4
    MOV EAX,dword ptr [EDX + 0x1a0]     ; 0049b3ea
    IMUL EAX,ECX                        ; 0049b3f0
    LEA ESI,[EAX + 0x6]                 ; 0049b3f3
    CALL shape_edittool.cpp_calculateGridWidth_FUN_0049d430 ; 0049b3f6
        ;   XREF to: 0049d430 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateGridWidth_FUN_0049d430()
    MOV EBX,EAX                         ; 0049b3fb
    MOV dword ptr [ESP + 0x130],EAX     ; 0049b3fd
    CALL shape_edittool.cpp_calculateGridHeight_FUN_0049d450 ; 0049b404
        ;   XREF to: 0049d450 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateGridHeight_FUN_0049d450()
    MOV EDX,dword ptr [ESP + 0x164]     ; 0049b409
    MOV EDI,dword ptr [EDX + 0x1f0]     ; 0049b410
    MOV dword ptr [ESP + 0x134],EAX     ; 0049b416
    CMP EDI,0x1                         ; 0049b41d
    JNZ 0x0049b7d8                      ; 0049b420
        ;   XREF to: 0049b7d8 (CONDITIONAL_JUMP)  ; LAB_0049b7d8
    ADD EBP,EBX                         ; 0049b426
    MOV EAX,[0x0061b498]                ; 0049b428 | DAT_0061b498
        ;   Label: LAB_0049b428
    MOV EDX,EAX                         ; 0049b42d
    SAR EDX,0x1f                        ; 0049b42f
    SHL EDX,0x7                         ; 0049b432
    SBB EAX,EDX                         ; 0049b435
    SAR EAX,0x7                         ; 0049b437
    MOV dword ptr [ESP + 0x12c],EAX     ; 0049b43a
    MOV EAX,[0x0061b49c]                ; 0049b441 | DAT_0061b49c
    MOV EDX,EAX                         ; 0049b446
    MOV ECX,0x60                        ; 0049b448
    SAR EDX,0x1f                        ; 0049b44d
    IDIV ECX                            ; 0049b450
    XOR EBX,EBX                         ; 0049b452
    XOR EDI,EDI                         ; 0049b454
    MOV dword ptr [ESP + 0x138],EAX     ; 0049b456
    MOV EAX,dword ptr [ESP + 0x164]     ; 0049b45d
    MOV dword ptr [ESP + 0x140],EBX     ; 0049b464
    MOV dword ptr [ESP + 0x144],EBX     ; 0049b46b
    MOV DL,byte ptr [EAX + 0x5c]        ; 0049b472
    MOV dword ptr [ESP + 0x148],EBX     ; 0049b475
    TEST DL,DL                          ; 0049b47c
    JZ 0x0049b49a                       ; 0049b47e
        ;   XREF to: 0049b49a (CONDITIONAL_JUMP)  ; LAB_0049b49a
    ADD EAX,0x5c                        ; 0049b480
    PUSH EAX                            ; 0049b483
    CALL shape_edittool.cpp_calculateButtonWidth_FUN_0049d950 ; 0049b484
        ;   XREF to: 0049d950 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonWidth_FUN_0049d950(char * button_text)
    MOV ECX,0x1                         ; 0049b489
    ADD ESP,0x4                         ; 0049b48e
    MOV EDI,EAX                         ; 0049b491
    MOV dword ptr [ESP + 0x148],ECX     ; 0049b493
    MOV EAX,dword ptr [ESP + 0x164]     ; 0049b49a
        ;   Label: LAB_0049b49a
    CMP byte ptr [EAX + 0xc0],0x0       ; 0049b4a1
    JZ 0x0049b4c5                       ; 0049b4a8
        ;   XREF to: 0049b4c5 (CONDITIONAL_JUMP)  ; LAB_0049b4c5
    ADD EAX,0xc0                        ; 0049b4aa
    PUSH EAX                            ; 0049b4af
    CALL shape_edittool.cpp_calculateButtonWidth_FUN_0049d950 ; 0049b4b0
        ;   XREF to: 0049d950 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonWidth_FUN_0049d950(char * button_text)
    ADD ESP,0x4                         ; 0049b4b5
    CMP EAX,EDI                         ; 0049b4b8
    JLE 0x0049b4be                      ; 0049b4ba
        ;   XREF to: 0049b4be (CONDITIONAL_JUMP)  ; LAB_0049b4be
    MOV EDI,EAX                         ; 0049b4bc
    INC dword ptr [ESP + 0x148]         ; 0049b4be
        ;   Label: LAB_0049b4be
    CMP dword ptr [ESP + 0x148],0x0     ; 0049b4c5
        ;   Label: LAB_0049b4c5
    JLE 0x0049b54d                      ; 0049b4cd
        ;   XREF to: 0049b54d (CONDITIONAL_JUMP)  ; LAB_0049b54d
    PUSH 0x5dc6c9                       ; 0049b4d3 | = "Cancel"
    CALL shape_edittool.cpp_calculateButtonWidth_FUN_0049d950 ; 0049b4d8
        ;   XREF to: 0049d950 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonWidth_FUN_0049d950(char * button_text)
    ADD ESP,0x4                         ; 0049b4dd
    CMP EAX,EDI                         ; 0049b4e0
    JLE 0x0049b4e6                      ; 0049b4e2
        ;   XREF to: 0049b4e6 (CONDITIONAL_JUMP)  ; LAB_0049b4e6
    MOV EDI,EAX                         ; 0049b4e4
    PUSH 0x0                            ; 0049b4e6
        ;   Label: LAB_0049b4e6
    CALL shape_edittool.cpp_FUN_0049d9e0 ; 0049b4e8
        ;   XREF to: 0049d9e0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_0049d9e0(char * button_text)
    ADD ESP,0x4                         ; 0049b4ed
    MOV EDX,dword ptr [ESP + 0x148]     ; 0049b4f0
    MOV ECX,dword ptr [ESP + 0x12c]     ; 0049b4f7
    DEC EDX                             ; 0049b4fe
    IMUL EDX,ECX                        ; 0049b4ff
    MOV ECX,dword ptr [ESP + 0x148]     ; 0049b502
    IMUL ECX,EDI                        ; 0049b509
    MOV EBX,dword ptr [ESP + 0x138]     ; 0049b50c
    MOV dword ptr [ESP + 0x144],EAX     ; 0049b513
    ADD EBX,EAX                         ; 0049b51a
    MOV EAX,dword ptr [ESP + 0x164]     ; 0049b51c
    ADD ECX,EDX                         ; 0049b523
    MOV EDX,dword ptr [EAX + 0x1f0]     ; 0049b525
    MOV dword ptr [ESP + 0x140],ECX     ; 0049b52b
    CMP EDX,0x2                         ; 0049b532
    JNZ 0x0049b53e                      ; 0049b535
        ;   XREF to: 0049b53e (CONDITIONAL_JUMP)  ; LAB_0049b53e
    ADD EBX,dword ptr [ESP + 0x138]     ; 0049b537
    MOV EAX,dword ptr [ESP + 0x140]     ; 0049b53e
        ;   Label: LAB_0049b53e
    CMP EBP,EAX                         ; 0049b545
    JGE 0x0049b54b                      ; 0049b547
        ;   XREF to: 0049b54b (CONDITIONAL_JUMP)  ; LAB_0049b54b
    MOV EBP,EAX                         ; 0049b549
    ADD ESI,EBX                         ; 0049b54b
        ;   Label: LAB_0049b54b
    MOV EDX,dword ptr [ESP + 0x16c]     ; 0049b54d
        ;   Label: LAB_0049b54d
    PUSH EDX                            ; 0049b554
    MOV ECX,dword ptr [ESP + 0x16c]     ; 0049b555
    PUSH ECX                            ; 0049b55c
    PUSH ESI                            ; 0049b55d
    PUSH EBP                            ; 0049b55e
    MOV ESI,dword ptr [0x0061abc0]      ; 0049b55f | g_CEditorToolsPtr
    PUSH ESI                            ; 0049b565
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00496840 ; 0049b566
        ;   XREF to: 00496840 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00496840(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    MOV EAX,[0x01c4f010]                ; 0049b56b | DAT_01c4f010
    SUB EAX,dword ptr [0x01c4f008]      ; 0049b570 | DAT_01c4f008
    LEA EBP,[EAX + 0x1]                 ; 0049b576
    MOV EDX,dword ptr [0x01c4f00c]      ; 0049b579 | DAT_01c4f00c
    MOV EAX,[0x01c4f014]                ; 0049b57f | DAT_01c4f014
    SUB EAX,EDX                         ; 0049b584
    ADD ESP,0x14                        ; 0049b586
    LEA ESI,[EAX + 0x1]                 ; 0049b589
    MOV EDX,dword ptr [ESP + 0x164]     ; 0049b58c
    MOV EAX,dword ptr [ESP + 0x164]     ; 0049b593
    MOV ECX,dword ptr [EDX + 0x1f0]     ; 0049b59a
    ADD EAX,0x1bc                       ; 0049b5a0
    CMP ECX,0x1                         ; 0049b5a5
    JNZ 0x0049b7e8                      ; 0049b5a8
        ;   XREF to: 0049b7e8 (CONDITIONAL_JUMP)  ; LAB_0049b7e8
    MOV ECX,dword ptr [ESP + 0x130]     ; 0049b5ae
    MOV EDX,dword ptr [0x01c4f014]      ; 0049b5b5 | DAT_01c4f014
    SUB EBP,ECX                         ; 0049b5bb
    SUB EDX,dword ptr [ESP + 0x144]     ; 0049b5bd
    SUB EDX,dword ptr [ESP + 0x138]     ; 0049b5c4
    PUSH EDX                            ; 0049b5cb
    MOV EDX,dword ptr [0x01c4f010]      ; 0049b5cc | DAT_01c4f010
    PUSH EDX                            ; 0049b5d2
    MOV ECX,dword ptr [0x01c4f00c]      ; 0049b5d3 | DAT_01c4f00c
    PUSH ECX                            ; 0049b5d9
    SUB EDX,dword ptr [ESP + 0x13c]     ; 0049b5da
    INC EDX                             ; 0049b5e1
    PUSH EDX                            ; 0049b5e2
        ;   Label: LAB_0049b5e2
    PUSH EAX                            ; 0049b5e3
    CALL shape_edittool.cpp_CEdScrollBar_setPosition_FUN_0049c9f0 ; 0049b5e4
        ;   XREF to: 0049c9f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_setPosition_FUN_0049c9f0(CEdScrollBar * this_ptr, int left_pos, int top_pos, int right_pos, ...)
    ADD ESP,0x14                        ; 0049b5e9
    CMP dword ptr [ESP + 0x148],0x0     ; 0049b5ec
        ;   Label: LAB_0049b5ec
    JLE 0x0049b6c7                      ; 0049b5f4
        ;   XREF to: 0049b6c7 (CONDITIONAL_JUMP)  ; LAB_0049b6c7
    MOV EDX,dword ptr [ESP + 0x144]     ; 0049b5fa
    MOV EAX,[0x01c4f014]                ; 0049b601 | DAT_01c4f014
    SUB EAX,EDX                         ; 0049b606
    INC EAX                             ; 0049b608
    MOV dword ptr [ESP + 0x13c],EAX     ; 0049b609
    MOV EAX,dword ptr [ESP + 0x164]     ; 0049b610
    CMP byte ptr [EAX + 0x5c],0x0       ; 0049b617
    JZ 0x0049b66a                       ; 0049b61b
        ;   XREF to: 0049b66a (CONDITIONAL_JUMP)  ; LAB_0049b66a
    MOV ECX,dword ptr [ESP + 0x140]     ; 0049b61d
    MOV EDX,dword ptr [ESP + 0x164]     ; 0049b624
    MOV EAX,[0x01c4f010]                ; 0049b62b | DAT_01c4f010
    ADD EDX,0x5c                        ; 0049b630
    INC EAX                             ; 0049b633
    PUSH EDX                            ; 0049b634
    SUB EAX,ECX                         ; 0049b635
    MOV EDX,dword ptr [ESP + 0x140]     ; 0049b637
    ADD EDX,dword ptr [ESP + 0x148]     ; 0049b63e
    DEC EDX                             ; 0049b645
    PUSH EDX                            ; 0049b646
    LEA EDX,[EAX + EDI*0x1 + -0x1]      ; 0049b647
    PUSH EDX                            ; 0049b64b
    MOV EDX,dword ptr [ESP + 0x148]     ; 0049b64c
    PUSH EDX                            ; 0049b653
    PUSH EAX                            ; 0049b654
    MOV EAX,dword ptr [ESP + 0x178]     ; 0049b655
    ADD EAX,0x1f4                       ; 0049b65c
    PUSH EAX                            ; 0049b661
    CALL shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_0049d530 ; 0049b662
        ;   XREF to: 0049d530 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_0049d530(CEdButton * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x18                        ; 0049b667
    MOV EAX,dword ptr [ESP + 0x164]     ; 0049b66a
        ;   Label: LAB_0049b66a
    CMP byte ptr [EAX + 0xc0],0x0       ; 0049b671
    JZ 0x0049b6c5                       ; 0049b678
        ;   XREF to: 0049b6c5 (CONDITIONAL_JUMP)  ; LAB_0049b6c5
    MOV EDX,dword ptr [ESP + 0x164]     ; 0049b67a
    ADD EDX,0xc0                        ; 0049b681
    MOV ECX,dword ptr [ESP + 0x144]     ; 0049b687
    PUSH EDX                            ; 0049b68e
    MOV EDX,dword ptr [ESP + 0x140]     ; 0049b68f
    MOV EAX,[0x01c4f010]                ; 0049b696 | DAT_01c4f010
    ADD EDX,ECX                         ; 0049b69b
    INC EAX                             ; 0049b69d
    DEC EDX                             ; 0049b69e
    SUB EAX,EDI                         ; 0049b69f
    PUSH EDX                            ; 0049b6a1
    LEA EDX,[EAX + EDI*0x1 + -0x1]      ; 0049b6a2
    PUSH EDX                            ; 0049b6a6
    MOV EDI,dword ptr [ESP + 0x148]     ; 0049b6a7
    PUSH EDI                            ; 0049b6ae
    PUSH EAX                            ; 0049b6af
    MOV EAX,dword ptr [ESP + 0x178]     ; 0049b6b0
    ADD EAX,0x2d8                       ; 0049b6b7
    PUSH EAX                            ; 0049b6bc
    CALL shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_0049d530 ; 0049b6bd
        ;   XREF to: 0049d530 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_0049d530(CEdButton * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x18                        ; 0049b6c2
    SUB ESI,EBX                         ; 0049b6c5
        ;   Label: LAB_0049b6c5
    MOV ECX,dword ptr [ESP + 0x164]     ; 0049b6c7
        ;   Label: LAB_0049b6c7
    MOV EDX,ESI                         ; 0049b6ce
    MOV EAX,ESI                         ; 0049b6d0
    SAR EDX,0x1f                        ; 0049b6d2
    MOV ECX,dword ptr [ECX + 0x18c]     ; 0049b6d5
    IDIV ECX                            ; 0049b6db
    MOV EDX,dword ptr [ESP + 0x164]     ; 0049b6dd
    MOV ECX,dword ptr [EDX + 0x1a4]     ; 0049b6e4
    MOV dword ptr [EDX + 0x1a0],EAX     ; 0049b6ea
    MOV EDX,EBP                         ; 0049b6f0
    MOV EAX,EBP                         ; 0049b6f2
    SAR EDX,0x1f                        ; 0049b6f4
    IDIV ECX                            ; 0049b6f7
    MOV EDX,dword ptr [ESP + 0x164]     ; 0049b6f9
    MOV dword ptr [EDX + 0x1a8],EAX     ; 0049b700
    MOV ECX,dword ptr [EDX + 0x1a0]     ; 0049b706
    MOV EAX,dword ptr [EDX]             ; 0049b70c
    ADD EAX,ECX                         ; 0049b70e
    LEA EDX,[EAX + -0x1]                ; 0049b710
    MOV ECX,dword ptr [ESP + 0x164]     ; 0049b713
    MOV EAX,EDX                         ; 0049b71a
    MOV EBX,dword ptr [ECX + 0x1a0]     ; 0049b71c
    SAR EDX,0x1f                        ; 0049b722
    IDIV EBX                            ; 0049b725
    CMP EAX,dword ptr [ECX + 0x1a8]     ; 0049b727
    JGE 0x0049b735                      ; 0049b72d
        ;   XREF to: 0049b735 (CONDITIONAL_JUMP)  ; LAB_0049b735
    MOV dword ptr [ECX + 0x1a8],EAX     ; 0049b72f
    MOV EAX,dword ptr [ESP + 0x164]     ; 0049b735
        ;   Label: LAB_0049b735
    CMP dword ptr [EAX + 0x1a8],0x1     ; 0049b73c
    JGE 0x0049b74f                      ; 0049b743
        ;   XREF to: 0049b74f (CONDITIONAL_JUMP)  ; LAB_0049b74f
    MOV dword ptr [EAX + 0x1a8],0x1     ; 0049b745
    MOV EAX,dword ptr [ESP + 0x164]     ; 0049b74f
        ;   Label: LAB_0049b74f
    MOV EDX,dword ptr [ESP + 0x164]     ; 0049b756
    MOV EAX,dword ptr [EAX + 0x1a0]     ; 0049b75d
    IMUL EAX,dword ptr [EDX + 0x1a8]    ; 0049b763
    MOV ECX,dword ptr [EDX + 0x1a8]     ; 0049b76a
    MOV dword ptr [EDX + 0x19c],EAX     ; 0049b770
    MOV EDX,EBP                         ; 0049b776
    MOV EAX,EBP                         ; 0049b778
    SAR EDX,0x1f                        ; 0049b77a
    IDIV ECX                            ; 0049b77d
    MOV EDX,dword ptr [ESP + 0x164]     ; 0049b77f
    MOV dword ptr [EDX + 0x198],0x0     ; 0049b786
    MOV dword ptr [EDX + 0x1a4],EAX     ; 0049b790
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0049b796
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    MOV EAX,dword ptr [ESP + 0x164]     ; 0049b79b
    MOV EBX,0xffffffff                  ; 0049b7a2
    MOV byte ptr [EAX + 0x124],0x0      ; 0049b7a7
    MOV dword ptr [0x01c3f5cc],EBX      ; 0049b7ae | DAT_01c3f5cc
    MOV dword ptr [EAX + 0x188],0x0     ; 0049b7b4
    ADD ESP,0x150                       ; 0049b7be
    POP EBP                             ; 0049b7c4
    POP EDI                             ; 0049b7c5
    POP ESI                             ; 0049b7c6
    POP EBX                             ; 0049b7c7
    RET                                 ; 0049b7c8
    MOV dword ptr [EDX + 0x1f0],0x1     ; 0049b7c9
        ;   Label: LAB_0049b7c9
    JMP 0x0049b3c6                      ; 0049b7d3
        ;   XREF to: 0049b3c6 (UNCONDITIONAL_JUMP)  ; LAB_0049b3c6
    CMP EDI,0x2                         ; 0049b7d8
        ;   Label: LAB_0049b7d8
    JNZ 0x0049b428                      ; 0049b7db
        ;   XREF to: 0049b428 (CONDITIONAL_JUMP)  ; LAB_0049b428
    ADD ESI,EAX                         ; 0049b7e1
    JMP 0x0049b428                      ; 0049b7e3
        ;   XREF to: 0049b428 (UNCONDITIONAL_JUMP)  ; LAB_0049b428
    CMP ECX,0x2                         ; 0049b7e8
        ;   Label: LAB_0049b7e8
    JNZ 0x0049b5ec                      ; 0049b7eb
        ;   XREF to: 0049b5ec (CONDITIONAL_JUMP)  ; LAB_0049b5ec
    SUB ESI,dword ptr [ESP + 0x134]     ; 0049b7f1
    MOV EDX,dword ptr [0x01c4f014]      ; 0049b7f8 | DAT_01c4f014
    SUB EDX,EBX                         ; 0049b7fe
    PUSH EDX                            ; 0049b800
    MOV ECX,dword ptr [0x01c4f010]      ; 0049b801 | DAT_01c4f010
    MOV EDX,dword ptr [0x01c4f014]      ; 0049b807 | DAT_01c4f014
    PUSH ECX                            ; 0049b80d
    SUB EDX,dword ptr [ESP + 0x13c]     ; 0049b80e
    SUB EDX,EBX                         ; 0049b815
    INC EDX                             ; 0049b817
    PUSH EDX                            ; 0049b818
    MOV EDX,dword ptr [0x01c4f008]      ; 0049b819 | DAT_01c4f008
    JMP 0x0049b5e2                      ; 0049b81f
        ;   XREF to: 0049b5e2 (UNCONDITIONAL_JUMP)  ; LAB_0049b5e2

