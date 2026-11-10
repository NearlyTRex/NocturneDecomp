; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_showTextInputDialog_FUN_0047c2c0(char *dialog_title,char *input_buffer,int max_length,int flags,int dialog_mode)
;
; Parameters:
; char *           Stack[0x4]:4   dialog_title
; char *           Stack[0x8]:4   input_buffer
; int              Stack[0xc]:4   max_length
; int              Stack[0x10]:4   flags
; int              Stack[0x14]:4   dialog_mode
; Local Variables:
; undefined        Stack[-0x320]:1  local_320
; undefined        Stack[-0x1e0]:1  local_1e0
; undefined        Stack[-0xfc]:1  local_fc
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_edittool.cpp_CEditorTools_showCheatInputDialog_FUN_0047ed20 at 0047ed38
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047ecf0 at 0047ed08
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bcd25
;   TerminatedCString s_gEdFont_must_be_set_by_t_005bcd3b
;   TerminatedCString s_Cancel_005bce00
;   undefined4 DAT_005bce07
;   TerminatedCString s_Cancel_005bce0a
;   CEditorTools* g_CEditorToolsPtr = 01c5b0e4
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fba2c
;   undefined4 DAT_00600284
;   undefined4 DAT_006074b8
;   undefined4 DAT_01c5b0e0
;   undefined4 DAT_01c5bae0
;   undefined4 DAT_01c5bae4
;   undefined4 DAT_01c5bb78
;   ... and 8 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0
;   engine_keys.cpp_CKeys_getInputKey_FUN_004df580
;   shape_edittool.cpp_calculateButtonWidth_FUN_004864f0
;   shape_edittool.cpp_CEdButton_ctor_FUN_00486020
;   shape_edittool.cpp_CEdButton_dtor_FUN_00486050
;   shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004860d0
;   shape_edittool.cpp_CEdButton_wasClicked_FUN_00486440
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047f3e0
;   shape_edittool.cpp_CInputString_backspace_FUN_0047bc60
;   shape_edittool.cpp_CInputString_deleteSelection_FUN_0047bc10
;   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0047bd50
;   shape_edittool.cpp_CInputString_init_FUN_0047ba60
;   shape_edittool.cpp_CInputString_insertChar_FUN_0047bb10
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047c2c0
        ;   Label: shape_edittool.cpp_showTextInputDialog_FUN_0047c2c0
    PUSH ESI                            ; 0047c2c1
    PUSH EDI                            ; 0047c2c2
    PUSH EBP                            ; 0047c2c3
    SUB ESP,0x310                       ; 0047c2c4
    MOV EBP,dword ptr [ESP + 0x328]     ; 0047c2ca
    MOV ESI,dword ptr [ESP + 0x32c]     ; 0047c2d1
    MOV EBX,dword ptr [ESP + 0x334]     ; 0047c2d8
    CMP dword ptr [0x01c5b0e0],0x0      ; 0047c2df | DAT_01c5b0e0
    JZ 0x0047c5e9                       ; 0047c2e6
        ;   XREF to: 0047c5e9 (CONDITIONAL_JUMP)  ; LAB_0047c5e9
    MOV EAX,[0x01c5b0e0]                ; 0047c2ec | DAT_01c5b0e0
        ;   Label: LAB_0047c2ec
    PUSH 0x6a                           ; 0047c2f1
    MOV EDX,dword ptr [EAX + 0x41e8]    ; 0047c2f3
    PUSH EAX                            ; 0047c2f9
    MOV dword ptr [0x01c5bae0],EDX      ; 0047c2fa | DAT_01c5bae0
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0 ; 0047c300
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0047c305
    MOV [0x01c5bae4],EAX                ; 0047c308 | DAT_01c5bae4
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0047c30d
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    TEST byte ptr [ESP + 0x330],0x1     ; 0047c312
    JZ 0x0047c611                       ; 0047c31a
        ;   XREF to: 0047c611 (CONDITIONAL_JUMP)  ; LAB_0047c611
    PUSH EBX                            ; 0047c320
    PUSH ESI                            ; 0047c321
    PUSH EBP                            ; 0047c322
    LEA EAX,[ESP + 0xc]                 ; 0047c323
        ;   Label: LAB_0047c323
    PUSH EAX                            ; 0047c327
    CALL shape_edittool.cpp_CInputString_init_FUN_0047ba60 ; 0047c328
        ;   XREF to: 0047ba60 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_init_FUN_0047ba60(CInputString * this_ptr, char * source_string, int max_length, int mask_mode)
    ADD ESP,0x10                        ; 0047c32d
    MOV EAX,[0x005fba18]                ; 0047c330 | DAT_005fba18
    MOV EDX,EAX                         ; 0047c335
    SAR EDX,0x1f                        ; 0047c337
    SHL EDX,0x7                         ; 0047c33a
    SBB EAX,EDX                         ; 0047c33d
    SAR EAX,0x7                         ; 0047c33f
    MOV ESI,EAX                         ; 0047c342
    MOV EAX,[0x005fba1c]                ; 0047c344 | DAT_005fba1c
    MOV EDX,EAX                         ; 0047c349
    MOV ECX,0x60                        ; 0047c34b
    SAR EDX,0x1f                        ; 0047c350
    IDIV ECX                            ; 0047c353
    PUSH 0x0                            ; 0047c355
    MOV EBX,EAX                         ; 0047c357
    CALL shape_edittool.cpp_FUN_00486580 ; 0047c359
        ;   XREF to: 00486580 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_00486580(char * button_text)
    ADD ESP,0x4                         ; 0047c35e
    MOV ECX,dword ptr [0x01c5bae4]      ; 0047c361 | DAT_01c5bae4
    ADD EBX,EBX                         ; 0047c367
    PUSH 0x0                            ; 0047c369
    MOV EDX,dword ptr [ESP + 0x328]     ; 0047c36b
    ADD EAX,EBX                         ; 0047c372
    PUSH EDX                            ; 0047c374
    ADD EAX,ECX                         ; 0047c375
    MOV EDX,dword ptr [0x005fba18]      ; 0047c377 | DAT_005fba18
    MOV ECX,0x5                         ; 0047c37d
    SHL EDX,0x2                         ; 0047c382
    PUSH EAX                            ; 0047c385
    MOV EAX,EDX                         ; 0047c386
    SAR EDX,0x1f                        ; 0047c388
    IDIV ECX                            ; 0047c38b
    PUSH EAX                            ; 0047c38d
    MOV EBX,dword ptr [0x005fb140]      ; 0047c38e | g_CEditorToolsPtr
    PUSH EBX                            ; 0047c394
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047f3e0 ; 0047c395
        ;   XREF to: 0047f3e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047f3e0(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    ADD ESP,0x14                        ; 0047c39a
    PUSH 0x5bce00                       ; 0047c39d | = "Cancel"
    CALL shape_edittool.cpp_calculateButtonWidth_FUN_004864f0 ; 0047c3a2
        ;   XREF to: 004864f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonWidth_FUN_004864f0(char * button_text)
    MOV ECX,dword ptr [0x01c6b5a8]      ; 0047c3a7 | DAT_01c6b5a8
    MOV EDI,dword ptr [0x01c6b5b0]      ; 0047c3ad | DAT_01c6b5b0
    ADD ECX,EDI                         ; 0047c3b3
    MOV EDX,ECX                         ; 0047c3b5
    SUB EDX,ESI                         ; 0047c3b7
    MOV EBX,EAX                         ; 0047c3b9
    MOV EAX,EDX                         ; 0047c3bb
    SAR EDX,0x1f                        ; 0047c3bd
    SUB EAX,EDX                         ; 0047c3c0
    SAR EAX,0x1                         ; 0047c3c2
    SUB EAX,EBX                         ; 0047c3c4
    LEA EDX,[ECX + ESI*0x1]             ; 0047c3c6
    LEA EDI,[EAX + 0x1]                 ; 0047c3c9
    MOV EAX,EDX                         ; 0047c3cc
    SAR EDX,0x1f                        ; 0047c3ce
    SUB EAX,EDX                         ; 0047c3d1
    SAR EAX,0x1                         ; 0047c3d3
    ADD ESP,0x4                         ; 0047c3d5
    PUSH 0x0                            ; 0047c3d8
    MOV ESI,EAX                         ; 0047c3da
    CALL shape_edittool.cpp_FUN_00486580 ; 0047c3dc
        ;   XREF to: 00486580 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_00486580(char * button_text)
    MOV EDX,dword ptr [0x01c6b5b4]      ; 0047c3e1 | DAT_01c6b5b4
    SUB EDX,EAX                         ; 0047c3e7
    ADD ESP,0x4                         ; 0047c3e9
    LEA EAX,[EDX + 0x1]                 ; 0047c3ec
    MOV dword ptr [ESP + 0x308],EAX     ; 0047c3ef
    LEA EAX,[ESP + 0x224]               ; 0047c3f6
    PUSH EAX                            ; 0047c3fd
    CALL shape_edittool.cpp_CEdButton_ctor_FUN_00486020 ; 0047c3fe
        ;   XREF to: 00486020 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_ctor_FUN_00486020(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 0047c403
    LEA EAX,[ESP + 0x140]               ; 0047c406
    PUSH EAX                            ; 0047c40d
    CALL shape_edittool.cpp_CEdButton_ctor_FUN_00486020 ; 0047c40e
        ;   XREF to: 00486020 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_ctor_FUN_00486020(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 0047c413
    PUSH 0x5bce07                       ; 0047c416 | DAT_005bce07
    MOV EAX,[0x01c6b5b4]                ; 0047c41b | DAT_01c6b5b4
    PUSH EAX                            ; 0047c420
    LEA EAX,[EDI + EBX*0x1 + -0x1]      ; 0047c421
    PUSH EAX                            ; 0047c425
    MOV EDX,dword ptr [ESP + 0x314]     ; 0047c426
    PUSH EDX                            ; 0047c42d
    PUSH EDI                            ; 0047c42e
    LEA EAX,[ESP + 0x238]               ; 0047c42f
    PUSH EAX                            ; 0047c436
    CALL shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004860d0 ; 0047c437
        ;   XREF to: 004860d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004860d0(CEdButton * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x18                        ; 0047c43c
    PUSH 0x5bce0a                       ; 0047c43f | = "Cancel"
    MOV ECX,dword ptr [0x01c6b5b4]      ; 0047c444 | DAT_01c6b5b4
    ADD EBX,ESI                         ; 0047c44a
    PUSH ECX                            ; 0047c44c
    DEC EBX                             ; 0047c44d
    PUSH EBX                            ; 0047c44e
    MOV EBX,dword ptr [ESP + 0x314]     ; 0047c44f
    PUSH EBX                            ; 0047c456
    PUSH ESI                            ; 0047c457
    LEA EAX,[ESP + 0x154]               ; 0047c458
    PUSH EAX                            ; 0047c45f
    MOV EDI,0x1                         ; 0047c460
    CALL shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004860d0 ; 0047c465
        ;   XREF to: 004860d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004860d0(CEdButton * this_ptr, int left, int top, int right, ...)
    MOV EAX,[0x005fba2c]                ; 0047c46a | DAT_005fba2c
    ADD ESP,0x18                        ; 0047c46f
    MOV ESI,0x7f                        ; 0047c472
    MOV dword ptr [ESP + 0x30c],EAX     ; 0047c477
    MOV dword ptr [0x005fba2c],ESI      ; 0047c47e | DAT_005fba2c
    XOR ESI,ESI                         ; 0047c484
    MOV EAX,[0x005fb140]                ; 0047c486 | g_CEditorToolsPtr
        ;   Label: LAB_0047c486
    PUSH EAX                            ; 0047c48b
    CALL shape_edittool.cpp_FUN_0047fa80 ; 0047c48c
        ;   XREF to: 0047fa80 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047fa80()
    ADD ESP,0x4                         ; 0047c491
    PUSH 0x1                            ; 0047c494
    MOV EDX,dword ptr [0x005fb140]      ; 0047c496 | g_CEditorToolsPtr
    PUSH EDX                            ; 0047c49c
    CALL shape_edittool.cpp_FUN_00480200 ; 0047c49d
        ;   XREF to: 00480200 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00480200()
    ADD ESP,0x8                         ; 0047c4a2
    MOV ECX,dword ptr [0x01c6b5ac]      ; 0047c4a5 | DAT_01c6b5ac
    PUSH ECX                            ; 0047c4ab
    MOV EBX,dword ptr [0x01c6b5a8]      ; 0047c4ac | DAT_01c6b5a8
    PUSH EBX                            ; 0047c4b2
    LEA EAX,[ESP + 0x8]                 ; 0047c4b3
    PUSH EAX                            ; 0047c4b7
    CALL shape_edittool.cpp_FUN_0047c050 ; 0047c4b8
        ;   XREF to: 0047c050 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047c050()
    ADD ESP,0xc                         ; 0047c4bd
    TEST ESI,ESI                        ; 0047c4c0
    SETZ AL                             ; 0047c4c2
    AND EAX,0xff                        ; 0047c4c5
    PUSH EAX                            ; 0047c4ca
    LEA EAX,[ESP + 0x228]               ; 0047c4cb
    PUSH EAX                            ; 0047c4d2
    CALL shape_edittool.cpp_FUN_00486120 ; 0047c4d3
        ;   XREF to: 00486120 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00486120()
    ADD ESP,0x8                         ; 0047c4d8
    CMP ESI,0x1                         ; 0047c4db
    SETZ AL                             ; 0047c4de
    AND EAX,0xff                        ; 0047c4e1
    PUSH EAX                            ; 0047c4e6
    LEA EAX,[ESP + 0x144]               ; 0047c4e7
    PUSH EAX                            ; 0047c4ee
    CALL shape_edittool.cpp_FUN_00486120 ; 0047c4ef
        ;   XREF to: 00486120 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00486120()
    ADD ESP,0x8                         ; 0047c4f4
    PUSH 0x0                            ; 0047c4f7
    MOV EAX,[0x005fb140]                ; 0047c4f9 | g_CEditorToolsPtr
    PUSH EAX                            ; 0047c4fe
    CALL shape_edittool.cpp_FUN_00480410 ; 0047c4ff
        ;   XREF to: 00480410 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00480410()
    ADD ESP,0x8                         ; 0047c504
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0 ; 0047c507
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0()
    PUSH 0x2a                           ; 0047c50c
    MOV EAX,[0x00600284]                ; 0047c50e | DAT_00600284
    PUSH EAX                            ; 0047c513 | DAT_01d70a78
    MOV EBX,dword ptr [EAX]             ; 0047c514 | DAT_01d70a78
    CALL dword ptr [EBX]                ; 0047c516
    ADD ESP,0x8                         ; 0047c518
    TEST EAX,EAX                        ; 0047c51b
    JZ 0x0047c61a                       ; 0047c51d
        ;   XREF to: 0047c61a (CONDITIONAL_JUMP)  ; LAB_0047c61a
    PUSH 0x2a                           ; 0047c523
        ;   Label: LAB_0047c523
    MOV EAX,[0x00600284]                ; 0047c525 | DAT_00600284
    PUSH EAX                            ; 0047c52a | DAT_01d70a78
    MOV EBX,dword ptr [EAX]             ; 0047c52b | DAT_01d70a78
    CALL dword ptr [EBX]                ; 0047c52d
    ADD ESP,0x8                         ; 0047c52f
    TEST EAX,EAX                        ; 0047c532
    JZ 0x0047c54b                       ; 0047c534
        ;   XREF to: 0047c54b (CONDITIONAL_JUMP)  ; LAB_0047c54b
    PUSH 0xf                            ; 0047c536
    MOV EAX,[0x00600284]                ; 0047c538 | DAT_00600284
    PUSH EAX                            ; 0047c53d | DAT_01d70a78
    MOV EBX,dword ptr [EAX]             ; 0047c53e | DAT_01d70a78
    CALL dword ptr [EBX + 0x4]          ; 0047c540
    ADD ESP,0x8                         ; 0047c543
    TEST EAX,EAX                        ; 0047c546
    JZ 0x0047c54b                       ; 0047c548
        ;   XREF to: 0047c54b (CONDITIONAL_JUMP)  ; LAB_0047c54b
    DEC ESI                             ; 0047c54a
    CMP ESI,0x2                         ; 0047c54b
        ;   Label: LAB_0047c54b
    JL 0x0047c638                       ; 0047c54e
        ;   XREF to: 0047c638 (CONDITIONAL_JUMP)  ; LAB_0047c638
    XOR ESI,ESI                         ; 0047c554
    CMP dword ptr [0x02d21b80],0x0      ; 0047c556 | DAT_02d21b80
        ;   Label: LAB_0047c556
    JNZ 0x0047c647                      ; 0047c55d
        ;   XREF to: 0047c647 (CONDITIONAL_JUMP)  ; LAB_0047c647
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_00580800 ; 0047c563
        ;   XREF to: 00580800 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_00580800()
        ;   Label: LAB_0047c563
    TEST EAX,EAX                        ; 0047c568
    JZ 0x0047c6ca                       ; 0047c56a
        ;   XREF to: 0047c6ca (CONDITIONAL_JUMP)  ; LAB_0047c6ca
    MOV EAX,[0x00600284]                ; 0047c570 | DAT_00600284
    PUSH EAX                            ; 0047c575 | DAT_01d70a78
    CALL engine_keys.cpp_CKeys_getInputKey_FUN_004df580 ; 0047c576
        ;   XREF to: 004df580 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getInputKey_FUN_004df580(CKeys * this_ptr)
    MOV EBX,EAX                         ; 0047c57b
    ADD ESP,0x4                         ; 0047c57d
    CMP EAX,0x1b                        ; 0047c580
    JZ 0x0047c596                       ; 0047c583
        ;   XREF to: 0047c596 (CONDITIONAL_JUMP)  ; LAB_0047c596
    CMP EAX,0xd                         ; 0047c585
    JNZ 0x0047c676                      ; 0047c588
        ;   XREF to: 0047c676 (CONDITIONAL_JUMP)  ; LAB_0047c676
    TEST ESI,ESI                        ; 0047c58e
    JZ 0x0047c64e                       ; 0047c590
        ;   XREF to: 0047c64e (CONDITIONAL_JUMP)  ; LAB_0047c64e
    XOR EBX,EAX                         ; 0047c596
        ;   Label: LAB_0047c596
    MOV EDX,dword ptr [0x005fb140]      ; 0047c598 | g_CEditorToolsPtr
        ;   Label: LAB_0047c598
    PUSH EDX                            ; 0047c59e
    CALL shape_edittool.cpp_FUN_0047f970 ; 0047c59f
        ;   XREF to: 0047f970 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047f970()
    ADD ESP,0x4                         ; 0047c5a4
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0047c5a7
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    MOV EAX,dword ptr [ESP + 0x30c]     ; 0047c5ac
    PUSH 0x0                            ; 0047c5b3
    MOV [0x005fba2c],EAX                ; 0047c5b5 | DAT_005fba2c
    LEA EAX,[ESP + 0x144]               ; 0047c5ba
    PUSH EAX                            ; 0047c5c1
    CALL shape_edittool.cpp_CEdButton_dtor_FUN_00486050 ; 0047c5c2
        ;   XREF to: 00486050 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_dtor_FUN_00486050(CEdButton * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0047c5c7
    PUSH 0x0                            ; 0047c5ca
    LEA EAX,[ESP + 0x228]               ; 0047c5cc
    PUSH EAX                            ; 0047c5d3
    CALL shape_edittool.cpp_CEdButton_dtor_FUN_00486050 ; 0047c5d4
        ;   XREF to: 00486050 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_dtor_FUN_00486050(CEdButton * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0047c5d9
    MOV EAX,EBX                         ; 0047c5dc
    ADD ESP,0x310                       ; 0047c5de
    POP EBP                             ; 0047c5e4
    POP EDI                             ; 0047c5e5
    POP ESI                             ; 0047c5e6
    POP EBX                             ; 0047c5e7
    RET                                 ; 0047c5e8
    MOV ECX,0x5bcd25                    ; 0047c5e9 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0047c5e9
    MOV EDI,0xa7                        ; 0047c5ee
    PUSH 0x5bcd3b                       ; 0047c5f3 | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d71de0],ECX      ; 0047c5f8 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0047c5fe | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0047c604
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0047c609
    JMP 0x0047c2ec                      ; 0047c60c
        ;   XREF to: 0047c2ec (UNCONDITIONAL_JUMP)  ; LAB_0047c2ec
    PUSH EBX                            ; 0047c611
        ;   Label: LAB_0047c611
    PUSH ESI                            ; 0047c612
    PUSH 0x0                            ; 0047c613
    JMP 0x0047c323                      ; 0047c615
        ;   XREF to: 0047c323 (UNCONDITIONAL_JUMP)  ; LAB_0047c323
    PUSH 0xf                            ; 0047c61a
        ;   Label: LAB_0047c61a
    MOV EAX,[0x00600284]                ; 0047c61c | DAT_00600284
    PUSH EAX                            ; 0047c621 | DAT_01d70a78
    MOV EBX,dword ptr [EAX]             ; 0047c622 | DAT_01d70a78
    CALL dword ptr [EBX + 0x4]          ; 0047c624
    ADD ESP,0x8                         ; 0047c627
    TEST EAX,EAX                        ; 0047c62a
    JZ 0x0047c523                       ; 0047c62c
        ;   XREF to: 0047c523 (CONDITIONAL_JUMP)  ; LAB_0047c523
    INC ESI                             ; 0047c632
    JMP 0x0047c523                      ; 0047c633
        ;   XREF to: 0047c523 (UNCONDITIONAL_JUMP)  ; LAB_0047c523
    TEST ESI,ESI                        ; 0047c638
        ;   Label: LAB_0047c638
    JGE 0x0047c556                      ; 0047c63a
        ;   XREF to: 0047c556 (CONDITIONAL_JUMP)  ; LAB_0047c556
    MOV ESI,EDI                         ; 0047c640
    JMP 0x0047c556                      ; 0047c642
        ;   XREF to: 0047c556 (UNCONDITIONAL_JUMP)  ; LAB_0047c556
    XOR EBX,EBX                         ; 0047c647
        ;   Label: LAB_0047c647
    JMP 0x0047c598                      ; 0047c649
        ;   XREF to: 0047c598 (UNCONDITIONAL_JUMP)  ; LAB_0047c598
    MOV ESI,ESP                         ; 0047c64e
        ;   Label: LAB_0047c64e
    MOV EDI,EBP                         ; 0047c650
    MOV EBX,0x1                         ; 0047c652
    PUSH EDI                            ; 0047c657
    MOV AL,byte ptr [ESI]               ; 0047c658
        ;   Label: LAB_0047c658
    MOV byte ptr [EDI],AL               ; 0047c65a
    CMP AL,0x0                          ; 0047c65c
    JZ 0x0047c670                       ; 0047c65e
        ;   XREF to: 0047c670 (CONDITIONAL_JUMP)  ; LAB_0047c670
    MOV AL,byte ptr [ESI + 0x1]         ; 0047c660
    ADD ESI,0x2                         ; 0047c663
    MOV byte ptr [EDI + 0x1],AL         ; 0047c666
    ADD EDI,0x2                         ; 0047c669
    CMP AL,0x0                          ; 0047c66c
    JNZ 0x0047c658                      ; 0047c66e
        ;   XREF to: 0047c658 (CONDITIONAL_JUMP)  ; LAB_0047c658
    POP EDI                             ; 0047c670
        ;   Label: LAB_0047c670
    JMP 0x0047c598                      ; 0047c671
        ;   XREF to: 0047c598 (UNCONDITIONAL_JUMP)  ; LAB_0047c598
    CMP EAX,0x8                         ; 0047c676
        ;   Label: LAB_0047c676
    JZ 0x0047c6ba                       ; 0047c679
        ;   XREF to: 0047c6ba (CONDITIONAL_JUMP)  ; LAB_0047c6ba
    INC AL                              ; 0047c67b
    AND EAX,0xff                        ; 0047c67d
    TEST byte ptr [EAX + 0x6074b8],0x8  ; 0047c682 | DAT_006074b8
    JZ 0x0047c563                       ; 0047c689
        ;   XREF to: 0047c563 (CONDITIONAL_JUMP)  ; LAB_0047c563
    MOV EAX,ESP                         ; 0047c68f
    PUSH EAX                            ; 0047c691
    CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_0047bc10 ; 0047c692
        ;   XREF to: 0047bc10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteSelection_FUN_0047bc10(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047c697
    PUSH 0x1                            ; 0047c69a
    PUSH EBX                            ; 0047c69c
    LEA EAX,[ESP + 0x8]                 ; 0047c69d
    PUSH EAX                            ; 0047c6a1
    CALL shape_edittool.cpp_CInputString_insertChar_FUN_0047bb10 ; 0047c6a2
        ;   XREF to: 0047bb10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_insertChar_FUN_0047bb10(CInputString * this_ptr, char character, int advance_cursor)
    ADD ESP,0xc                         ; 0047c6a7
    MOV EAX,ESP                         ; 0047c6aa
    PUSH EAX                            ; 0047c6ac
    CALL shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0047baf0 ; 0047c6ad
        ;   XREF to: 0047baf0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0047baf0(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047c6b2
    JMP 0x0047c563                      ; 0047c6b5
        ;   XREF to: 0047c563 (UNCONDITIONAL_JUMP)  ; LAB_0047c563
    MOV EAX,ESP                         ; 0047c6ba
        ;   Label: LAB_0047c6ba
    PUSH EAX                            ; 0047c6bc
    CALL shape_edittool.cpp_CInputString_backspace_FUN_0047bc60 ; 0047c6bd
        ;   XREF to: 0047bc60 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_backspace_FUN_0047bc60(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047c6c2
    JMP 0x0047c563                      ; 0047c6c5
        ;   XREF to: 0047c563 (UNCONDITIONAL_JUMP)  ; LAB_0047c563
    MOV EAX,ESP                         ; 0047c6ca
        ;   Label: LAB_0047c6ca
    PUSH EAX                            ; 0047c6cc
    CALL shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0047bd50 ; 0047c6cd
        ;   XREF to: 0047bd50 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0047bd50(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047c6d2
    LEA EAX,[ESP + 0x224]               ; 0047c6d5
    PUSH EAX                            ; 0047c6dc
    CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_00486440 ; 0047c6dd
        ;   XREF to: 00486440 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdButton_wasClicked_FUN_00486440(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 0047c6e2
    TEST EAX,EAX                        ; 0047c6e5
    JNZ 0x0047c64e                      ; 0047c6e7
        ;   XREF to: 0047c64e (CONDITIONAL_JUMP)  ; LAB_0047c64e
    LEA EAX,[ESP + 0x224]               ; 0047c6ed
    CMP EAX,dword ptr [0x01c5bb78]      ; 0047c6f4 | DAT_01c5bb78
    JNZ 0x0047c6fe                      ; 0047c6fa
        ;   XREF to: 0047c6fe (CONDITIONAL_JUMP)  ; LAB_0047c6fe
    XOR ESI,ESI                         ; 0047c6fc
    LEA EAX,[ESP + 0x140]               ; 0047c6fe
        ;   Label: LAB_0047c6fe
    PUSH EAX                            ; 0047c705
    CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_00486440 ; 0047c706
        ;   XREF to: 00486440 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdButton_wasClicked_FUN_00486440(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 0047c70b
    TEST EAX,EAX                        ; 0047c70e
    JNZ 0x0047c647                      ; 0047c710
        ;   XREF to: 0047c647 (CONDITIONAL_JUMP)  ; LAB_0047c647
    LEA EAX,[ESP + 0x140]               ; 0047c716
    CMP EAX,dword ptr [0x01c5bb78]      ; 0047c71d | DAT_01c5bb78
    JNZ 0x0047c486                      ; 0047c723
        ;   XREF to: 0047c486 (CONDITIONAL_JUMP)  ; LAB_0047c486
    MOV ESI,0x1                         ; 0047c729
    JMP 0x0047c486                      ; 0047c72e
        ;   XREF to: 0047c486 (UNCONDITIONAL_JUMP)  ; LAB_0047c486

