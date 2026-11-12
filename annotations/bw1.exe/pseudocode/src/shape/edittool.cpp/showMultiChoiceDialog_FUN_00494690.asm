; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_showMultiChoiceDialog_FUN_00494690(CStrList *str_list,char *dialog_title,int dialog_mode)
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
;   shape_edittool.cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_00494d20 at 00494da4
;   shape_edittool.cpp_FUN_00494de0 at 00494e64
;   shape_edittool.cpp_FUN_00494ea0 at 00494f4e
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dbc68
;   TerminatedCString s_gEdFont_must_be_set_by_t_005dbc7e
;   TerminatedCString s_Cancel_005dbdc8
;   TerminatedCString s_Cancel_005dbdcf
;   WatcomTypeInfo g_CEdButtonTypeInfo
;   CEditorTools* g_CEditorToolsPtr = 01c3eb54
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061b4ac
;   undefined4 DAT_0061f2a4
;   undefined4 DAT_01c3eb50
;   undefined4 DAT_01c3f538
;   undefined4 DAT_01c3f53c
;   undefined4 DAT_01c3f5d0
;   undefined4 DAT_01c4f008
;   ... and 7 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_ctype.c_toupper_FUN_005c12b0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_memory.c___vec_new_FUN_005c2694
;   crt_memory.c_operator_new_array_FUN_005c1268
;   crt_unknown.c_FUN_005c0336
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0
;   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004fd270
;   shape_edittool.cpp_calculateButtonWidth_FUN_0049d950
;   shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_0049d530
;   shape_edittool.cpp_CEdButton_wasClicked_FUN_0049d8a0
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00496840
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494690
        ;   Label: shape_edittool.cpp_showMultiChoiceDialog_FUN_00494690
    PUSH ESI                            ; 00494691
    PUSH EBP                            ; 00494692
    SUB ESP,0x144                       ; 00494693
    CMP dword ptr [0x01c3eb50],0x0      ; 00494699 | DAT_01c3eb50
    JNZ 0x004946c5                      ; 004946a0
        ;   XREF to: 004946c5 (CONDITIONAL_JUMP)  ; LAB_004946c5
    MOV ECX,0x5dbc68                    ; 004946a2 | = "..\\shape\\edittool.cpp"
    MOV EBX,0xa4                        ; 004946a7
    PUSH 0x5dbc7e                       ; 004946ac | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d1d400],ECX      ; 004946b1 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 004946b7 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004946bd
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004946c2
    MOV EAX,[0x01c3eb50]                ; 004946c5 | DAT_01c3eb50
        ;   Label: LAB_004946c5
    PUSH 0x6a                           ; 004946ca
    MOV EDX,dword ptr [EAX + 0x41e8]    ; 004946cc
    PUSH EAX                            ; 004946d2
    MOV dword ptr [0x01c3f538],EDX      ; 004946d3 | DAT_01c3f538
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510 ; 004946d9
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004946de
    MOV ESI,dword ptr [ESP + 0x158]     ; 004946e1
    MOV [0x01c3f53c],EAX                ; 004946e8 | DAT_01c3f53c
    TEST ESI,ESI                        ; 004946ed
    JZ 0x00494b5c                       ; 004946ef
        ;   XREF to: 00494b5c (CONDITIONAL_JUMP)  ; LAB_00494b5c
    MOV ESI,dword ptr [ESI]             ; 004946f5
    CMP ESI,0x1                         ; 004946f7
    JL 0x00494b5c                       ; 004946fa
        ;   XREF to: 00494b5c (CONDITIONAL_JUMP)  ; LAB_00494b5c
    PUSH EDI                            ; 00494700
    PUSH 0x5ff870                       ; 00494701 | g_CEdButtonTypeInfo
    MOV EBP,ESI                         ; 00494706
    PUSH ESI                            ; 00494708
    LEA EAX,[ESI*0x8 + 0x0]             ; 00494709
    SUB EAX,ESI                         ; 00494710
    SHL EAX,0x3                         ; 00494712
    ADD EAX,ESI                         ; 00494715
    SHL EAX,0x2                         ; 00494717
    ADD EAX,0x4                         ; 0049471a
    PUSH EAX                            ; 0049471d
    CALL crt_memory.c_operator_new_array_FUN_005c1268 ; 0049471e
        ;   XREF to: 005c1268 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005c1268()
    ADD ESP,0x4                         ; 00494723
    PUSH EAX                            ; 00494726
    XOR EDI,EDI                         ; 00494727
    CALL crt_memory.c___vec_new_FUN_005c2694 ; 00494729
        ;   XREF to: 005c2694 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_new_FUN_005c2694()
    ADD ESP,0xc                         ; 0049472e
    XOR EBX,EBX                         ; 00494731
    MOV dword ptr [ESP + 0x110],EAX     ; 00494733
    MOV dword ptr [ESP + 0x13c],EDI     ; 0049473a
    TEST ESI,ESI                        ; 00494741
    JLE 0x0049481c                      ; 00494743
        ;   XREF to: 0049481c (CONDITIONAL_JUMP)  ; LAB_0049481c
    MOV dword ptr [ESP + 0x134],EAX     ; 00494749
    PUSH EBX                            ; 00494750
        ;   Label: LAB_00494750
    MOV ECX,dword ptr [ESP + 0x160]     ; 00494751
    PUSH ECX                            ; 00494758
    LEA EDI,[ESP + 0xc]                 ; 00494759
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0 ; 0049475d
        ;   XREF to: 004998a0 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00494762
    MOV ESI,EAX                         ; 00494765
    MOV DL,0x5e                         ; 00494767
    PUSH EDI                            ; 00494769
    MOV AL,byte ptr [ESI]               ; 0049476a
        ;   Label: LAB_0049476a
    MOV byte ptr [EDI],AL               ; 0049476c
    CMP AL,0x0                          ; 0049476e
    JZ 0x00494782                       ; 00494770
        ;   XREF to: 00494782 (CONDITIONAL_JUMP)  ; LAB_00494782
    MOV AL,byte ptr [ESI + 0x1]         ; 00494772
    ADD ESI,0x2                         ; 00494775
    MOV byte ptr [EDI + 0x1],AL         ; 00494778
    ADD EDI,0x2                         ; 0049477b
    CMP AL,0x0                          ; 0049477e
    JNZ 0x0049476a                      ; 00494780
        ;   XREF to: 0049476a (CONDITIONAL_JUMP)  ; LAB_0049476a
    POP EDI                             ; 00494782
        ;   Label: LAB_00494782
    LEA ESI,[ESP + 0x4]                 ; 00494783
    MOV AL,byte ptr [ESI]               ; 00494787
        ;   Label: LAB_00494787
    CMP AL,DL                           ; 00494789
    JZ 0x0049479f                       ; 0049478b
        ;   XREF to: 0049479f (CONDITIONAL_JUMP)  ; LAB_0049479f
    CMP AL,0x0                          ; 0049478d
    JZ 0x0049479d                       ; 0049478f
        ;   XREF to: 0049479d (CONDITIONAL_JUMP)  ; LAB_0049479d
    INC ESI                             ; 00494791
    MOV AL,byte ptr [ESI]               ; 00494792
    CMP AL,DL                           ; 00494794
    JZ 0x0049479f                       ; 00494796
        ;   XREF to: 0049479f (CONDITIONAL_JUMP)  ; LAB_0049479f
    INC ESI                             ; 00494798
    CMP AL,0x0                          ; 00494799
    JNZ 0x00494787                      ; 0049479b
        ;   XREF to: 00494787 (CONDITIONAL_JUMP)  ; LAB_00494787
    SUB ESI,ESI                         ; 0049479d
        ;   Label: LAB_0049479d
    MOV EDI,ESI                         ; 0049479f
        ;   Label: LAB_0049479f
    TEST ESI,ESI                        ; 004947a1
    JZ 0x004947e3                       ; 004947a3
        ;   XREF to: 004947e3 (CONDITIONAL_JUMP)  ; LAB_004947e3
    MOV EDX,dword ptr [ESP + 0x134]     ; 004947a5
    MOV AL,byte ptr [ESI + 0x1]         ; 004947ac
    INC ESI                             ; 004947af
    MOV byte ptr [EDX + 0x4],AL         ; 004947b0
    PUSH EDI                            ; 004947b3
    MOV AL,byte ptr [ESI]               ; 004947b4
        ;   Label: LAB_004947b4
    MOV byte ptr [EDI],AL               ; 004947b6
    CMP AL,0x0                          ; 004947b8
    JZ 0x004947cc                       ; 004947ba
        ;   XREF to: 004947cc (CONDITIONAL_JUMP)  ; LAB_004947cc
    MOV AL,byte ptr [ESI + 0x1]         ; 004947bc
    ADD ESI,0x2                         ; 004947bf
    MOV byte ptr [EDI + 0x1],AL         ; 004947c2
    ADD EDI,0x2                         ; 004947c5
    CMP AL,0x0                          ; 004947c8
    JNZ 0x004947b4                      ; 004947ca
        ;   XREF to: 004947b4 (CONDITIONAL_JUMP)  ; LAB_004947b4
    POP EDI                             ; 004947cc
        ;   Label: LAB_004947cc
    LEA EAX,[ESP + 0x4]                 ; 004947cd
    PUSH EAX                            ; 004947d1
    PUSH EBX                            ; 004947d2
    MOV ESI,dword ptr [ESP + 0x164]     ; 004947d3
    PUSH ESI                            ; 004947da
    CALL shape_edittool.cpp_CStrList_setStringAt_FUN_00499a50 ; 004947db
        ;   XREF to: 00499a50 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_setStringAt_FUN_00499a50(CStrList * this_ptr, int index, char * new_string)
    ADD ESP,0xc                         ; 004947e0
    LEA EAX,[ESP + 0x4]                 ; 004947e3
        ;   Label: LAB_004947e3
    PUSH EAX                            ; 004947e7
    CALL shape_edittool.cpp_calculateButtonWidth_FUN_0049d950 ; 004947e8
        ;   XREF to: 0049d950 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonWidth_FUN_0049d950(char * button_text)
    ADD ESP,0x4                         ; 004947ed
    CMP EAX,dword ptr [ESP + 0x13c]     ; 004947f0
    JLE 0x00494800                      ; 004947f7
        ;   XREF to: 00494800 (CONDITIONAL_JUMP)  ; LAB_00494800
    MOV dword ptr [ESP + 0x13c],EAX     ; 004947f9
    MOV EAX,dword ptr [ESP + 0x134]     ; 00494800
        ;   Label: LAB_00494800
    ADD EAX,0xe4                        ; 00494807
    INC EBX                             ; 0049480c
    MOV dword ptr [ESP + 0x134],EAX     ; 0049480d
    CMP EBX,EBP                         ; 00494814
    JL 0x00494750                       ; 00494816
        ;   XREF to: 00494750 (CONDITIONAL_JUMP)  ; LAB_00494750
    PUSH 0x5dbdc8                       ; 0049481c | = "Cancel"
        ;   Label: LAB_0049481c
    CALL shape_edittool.cpp_calculateButtonWidth_FUN_0049d950 ; 00494821
        ;   XREF to: 0049d950 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonWidth_FUN_0049d950(char * button_text)
    ADD ESP,0x4                         ; 00494826
    CMP EAX,dword ptr [ESP + 0x13c]     ; 00494829
    JLE 0x00494846                      ; 00494830
        ;   XREF to: 00494846 (CONDITIONAL_JUMP)  ; LAB_00494846
    PUSH 0x5dbdcf                       ; 00494832 | = "Cancel"
    CALL shape_edittool.cpp_calculateButtonWidth_FUN_0049d950 ; 00494837
        ;   XREF to: 0049d950 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonWidth_FUN_0049d950(char * button_text)
    ADD ESP,0x4                         ; 0049483c
    MOV dword ptr [ESP + 0x13c],EAX     ; 0049483f
    MOV EAX,[0x0061b498]                ; 00494846 | DAT_0061b498
        ;   Label: LAB_00494846
    MOV EDX,EAX                         ; 0049484b
    SAR EDX,0x1f                        ; 0049484d
    SHL EDX,0x7                         ; 00494850
    SBB EAX,EDX                         ; 00494853
    SAR EAX,0x7                         ; 00494855
    MOV dword ptr [ESP + 0x114],EAX     ; 00494858
    MOV EAX,[0x0061b49c]                ; 0049485f | DAT_0061b49c
    MOV EDX,EAX                         ; 00494864
    MOV EBX,0x60                        ; 00494866
    SAR EDX,0x1f                        ; 0049486b
    IDIV EBX                            ; 0049486e
    MOV ECX,dword ptr [ESP + 0x160]     ; 00494870
    MOV ESI,EAX                         ; 00494877
    LEA EAX,[EBP + -0x1]                ; 00494879
    TEST ECX,ECX                        ; 0049487c
    JNZ 0x00494b6b                      ; 0049487e
        ;   XREF to: 00494b6b (CONDITIONAL_JUMP)  ; LAB_00494b6b
    MOV EDX,dword ptr [ESP + 0x114]     ; 00494884
    SUB EDX,0x2                         ; 0049488b
    IMUL EAX,EDX                        ; 0049488e
    MOV EDX,dword ptr [ESP + 0x13c]     ; 00494891
    IMUL EDX,EBP                        ; 00494898
    ADD EAX,EDX                         ; 0049489b
    PUSH ECX                            ; 0049489d
    LEA EBX,[EAX + 0x1]                 ; 0049489e
    CALL shape_edittool.cpp_FUN_0049d9e0 ; 004948a1
        ;   XREF to: 0049d9e0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_0049d9e0(char * button_text)
    ADD ESP,0x4                         ; 004948a6
    LEA EDI,[EAX + -0x1]                ; 004948a9
    MOV EAX,dword ptr [ESP + 0x158]     ; 004948ac
        ;   Label: LAB_004948ac
    PUSH EAX                            ; 004948b3
    MOV EDX,dword ptr [0x01c3eb50]      ; 004948b4 | DAT_01c3eb50
    PUSH EDX                            ; 004948ba
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0 ; 004948bb
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004948c0
    MOV EDX,EAX                         ; 004948c3
    CMP EBX,EAX                         ; 004948c5
    JLE 0x004948cb                      ; 004948c7
        ;   XREF to: 004948cb (CONDITIONAL_JUMP)  ; LAB_004948cb
    MOV EDX,EBX                         ; 004948c9
    PUSH 0x0                            ; 004948cb
        ;   Label: LAB_004948cb
    MOV ECX,dword ptr [ESP + 0x15c]     ; 004948cd
    PUSH ECX                            ; 004948d4
    PUSH EDI                            ; 004948d5
    PUSH EDX                            ; 004948d6
    MOV EDI,dword ptr [0x0061abc0]      ; 004948d7 | g_CEditorToolsPtr
    PUSH EDI                            ; 004948dd
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00496840 ; 004948de
        ;   XREF to: 00496840 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00496840(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    MOV EAX,[0x01c4f010]                ; 004948e3 | DAT_01c4f010
    SUB EAX,dword ptr [0x01c4f008]      ; 004948e8 | DAT_01c4f008
    LEA EDX,[EAX + 0x1]                 ; 004948ee
    SUB EDX,EBX                         ; 004948f1
    MOV EAX,EDX                         ; 004948f3
    SAR EDX,0x1f                        ; 004948f5
    SUB EAX,EDX                         ; 004948f8
    SAR EAX,0x1                         ; 004948fa
    ADD ESP,0x14                        ; 004948fc
    XOR EDI,EDI                         ; 004948ff
    MOV dword ptr [ESP + 0x128],EAX     ; 00494901
    TEST EBP,EBP                        ; 00494908
    JLE 0x00494a31                      ; 0049490a
        ;   XREF to: 00494a31 (CONDITIONAL_JUMP)  ; LAB_00494a31
    LEA EAX,[ESI + -0x1]                ; 00494910
    MOV dword ptr [ESP + 0x120],EAX     ; 00494913
    IMUL EAX,EDI                        ; 0049491a
    MOV EDX,dword ptr [ESP + 0x114]     ; 0049491d
    DEC EDX                             ; 00494924
    MOV dword ptr [ESP + 0x11c],EDX     ; 00494925
    MOV dword ptr [ESP + 0x12c],EAX     ; 0049492c
    IMUL EAX,EDX,0x0                    ; 00494933
    MOV dword ptr [ESP + 0x130],EAX     ; 00494936
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0049493d
    MOV dword ptr [ESP + 0x124],EAX     ; 00494944
    IMUL EAX,EDI                        ; 0049494b
    MOV EBX,dword ptr [ESP + 0x110]     ; 0049494e
    MOV dword ptr [ESP + 0x138],EAX     ; 00494955
    MOV ECX,dword ptr [ESP + 0x128]     ; 0049495c
        ;   Label: LAB_0049495c
    MOV ESI,dword ptr [0x01c4f008]      ; 00494963 | DAT_01c4f008
    MOV EAX,dword ptr [ESP + 0x160]     ; 00494969
    ADD ESI,ECX                         ; 00494970
    TEST EAX,EAX                        ; 00494972
    JNZ 0x00494b8c                      ; 00494974
        ;   XREF to: 00494b8c (CONDITIONAL_JUMP)  ; LAB_00494b8c
    MOV EAX,dword ptr [ESP + 0x138]     ; 0049497a
    MOV EDX,dword ptr [ESP + 0x130]     ; 00494981
    ADD ESI,EAX                         ; 00494988
    PUSH 0x0                            ; 0049498a
    ADD ESI,EDX                         ; 0049498c
    CALL shape_edittool.cpp_FUN_0049d9e0 ; 0049498e
        ;   XREF to: 0049d9e0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_0049d9e0(char * button_text)
    ADD ESP,0x4                         ; 00494993
    MOV EDX,dword ptr [0x01c4f014]      ; 00494996 | DAT_01c4f014
    PUSH EDI                            ; 0049499c
    SUB EDX,EAX                         ; 0049499d
    MOV ECX,dword ptr [ESP + 0x160]     ; 0049499f
    LEA EAX,[EDX + 0x1]                 ; 004949a6
    PUSH ECX                            ; 004949a9
    MOV dword ptr [ESP + 0x110],EAX     ; 004949aa
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0 ; 004949b1
        ;   XREF to: 004998a0 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004949b6
    PUSH EAX                            ; 004949b9
    MOV EAX,[0x01c4f014]                ; 004949ba | DAT_01c4f014
    PUSH EAX                            ; 004949bf
    MOV EAX,dword ptr [ESP + 0x144]     ; 004949c0
    ADD EAX,ESI                         ; 004949c7
    DEC EAX                             ; 004949c9
    PUSH EAX                            ; 004949ca
    MOV EDX,dword ptr [ESP + 0x114]     ; 004949cb
    PUSH EDX                            ; 004949d2
        ;   Label: LAB_004949d2
    PUSH ESI                            ; 004949d3
    PUSH EBX                            ; 004949d4
    CALL shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_0049d530 ; 004949d5
        ;   XREF to: 0049d530 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_0049d530(CEdButton * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x18                        ; 004949da
    MOV EAX,dword ptr [ESP + 0x120]     ; 004949dd
    MOV EDX,dword ptr [ESP + 0x12c]     ; 004949e4
    MOV ECX,dword ptr [ESP + 0x130]     ; 004949eb
    MOV ESI,dword ptr [ESP + 0x138]     ; 004949f2
    ADD EBX,0xe4                        ; 004949f9
    ADD EDX,EAX                         ; 004949ff
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00494a01
    INC EDI                             ; 00494a08
    ADD ECX,EAX                         ; 00494a09
    MOV EAX,dword ptr [ESP + 0x124]     ; 00494a0b
    MOV dword ptr [ESP + 0x12c],EDX     ; 00494a12
    ADD ESI,EAX                         ; 00494a19
    MOV dword ptr [ESP + 0x130],ECX     ; 00494a1b
    MOV dword ptr [ESP + 0x138],ESI     ; 00494a22
    CMP EDI,EBP                         ; 00494a29
    JL 0x0049495c                       ; 00494a2b
        ;   XREF to: 0049495c (CONDITIONAL_JUMP)  ; LAB_0049495c
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 00494a31
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
        ;   Label: LAB_00494a31
    MOV EAX,[0x0061b4ac]                ; 00494a36 | DAT_0061b4ac
    MOV EDI,0x7f                        ; 00494a3b
    MOV dword ptr [ESP + 0x104],EAX     ; 00494a40
    XOR EAX,EAX                         ; 00494a47
    MOV dword ptr [0x0061b4ac],EDI      ; 00494a49 | DAT_0061b4ac
    MOV dword ptr [ESP + 0x140],EAX     ; 00494a4f
    LEA EAX,[EBP + -0x1]                ; 00494a56
    MOV EDI,0xfffffffe                  ; 00494a59
    MOV dword ptr [ESP + 0x118],EAX     ; 00494a5e
    PUSH 0x1c                           ; 00494a65
        ;   Label: LAB_00494a65
    MOV EAX,[0x0061f2a4]                ; 00494a67 | DAT_0061f2a4
    PUSH EAX                            ; 00494a6c | DAT_01d1bca0
    MOV EBX,dword ptr [EAX]             ; 00494a6d | DAT_01d1bca0
    CALL dword ptr [EBX + 0x4]          ; 00494a6f
    ADD ESP,0x8                         ; 00494a72
    TEST EAX,EAX                        ; 00494a75
    JZ 0x00494a80                       ; 00494a77
        ;   XREF to: 00494a80 (CONDITIONAL_JUMP)  ; LAB_00494a80
    MOV EDI,dword ptr [ESP + 0x140]     ; 00494a79
    PUSH 0x2a                           ; 00494a80
        ;   Label: LAB_00494a80
    MOV EAX,[0x0061f2a4]                ; 00494a82 | DAT_0061f2a4
    PUSH EAX                            ; 00494a87 | DAT_01d1bca0
    MOV EBX,dword ptr [EAX]             ; 00494a88 | DAT_01d1bca0
    CALL dword ptr [EBX]                ; 00494a8a
    ADD ESP,0x8                         ; 00494a8c
    TEST EAX,EAX                        ; 00494a8f
    JZ 0x00494be9                       ; 00494a91
        ;   XREF to: 00494be9 (CONDITIONAL_JUMP)  ; LAB_00494be9
    PUSH 0x2a                           ; 00494a97
        ;   Label: LAB_00494a97
    MOV EAX,[0x0061f2a4]                ; 00494a99 | DAT_0061f2a4
    PUSH EAX                            ; 00494a9e | DAT_01d1bca0
    MOV EBX,dword ptr [EAX]             ; 00494a9f | DAT_01d1bca0
    CALL dword ptr [EBX]                ; 00494aa1
    ADD ESP,0x8                         ; 00494aa3
    TEST EAX,EAX                        ; 00494aa6
    JZ 0x00494ac5                       ; 00494aa8
        ;   XREF to: 00494ac5 (CONDITIONAL_JUMP)  ; LAB_00494ac5
    PUSH 0xf                            ; 00494aaa
    MOV EAX,[0x0061f2a4]                ; 00494aac | DAT_0061f2a4
    PUSH EAX                            ; 00494ab1 | DAT_01d1bca0
    MOV EBX,dword ptr [EAX]             ; 00494ab2 | DAT_01d1bca0
    CALL dword ptr [EBX + 0x4]          ; 00494ab4
    ADD ESP,0x8                         ; 00494ab7
    TEST EAX,EAX                        ; 00494aba
    JZ 0x00494ac5                       ; 00494abc
        ;   XREF to: 00494ac5 (CONDITIONAL_JUMP)  ; LAB_00494ac5
    DEC dword ptr [ESP + 0x140]         ; 00494abe
    MOV ESI,dword ptr [ESP + 0x140]     ; 00494ac5
        ;   Label: LAB_00494ac5
    CMP EBP,ESI                         ; 00494acc
    JG 0x00494c0d                       ; 00494ace
        ;   XREF to: 00494c0d (CONDITIONAL_JUMP)  ; LAB_00494c0d
    XOR EDX,EDX                         ; 00494ad4
    MOV dword ptr [ESP + 0x140],EDX     ; 00494ad6
    CMP dword ptr [0x02c9be70],0x0      ; 00494add | DAT_02c9be70
        ;   Label: LAB_00494add
    JNZ 0x00494c28                      ; 00494ae4
        ;   XREF to: 00494c28 (CONDITIONAL_JUMP)  ; LAB_00494c28
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_005b2580 ; 00494aea
        ;   XREF to: 005b2580 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_005b2580()
        ;   Label: LAB_00494aea
    TEST EAX,EAX                        ; 00494aef
    JZ 0x00494c78                       ; 00494af1
        ;   XREF to: 00494c78 (CONDITIONAL_JUMP)  ; LAB_00494c78
    MOV EBX,dword ptr [0x0061f2a4]      ; 00494af7 | DAT_0061f2a4
    PUSH EBX                            ; 00494afd | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004fd270 ; 00494afe
        ;   XREF to: 004fd270 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004fd270(CKeys * this_ptr)
    ADD ESP,0x4                         ; 00494b03
    MOV ESI,dword ptr [ESP + 0x110]     ; 00494b06
    XOR EBX,EBX                         ; 00494b0d
    MOV DL,byte ptr [ESI + 0x4]         ; 00494b0f
    MOV dword ptr [ESP + 0x144],EAX     ; 00494b12
    TEST DL,DL                          ; 00494b19
    JZ 0x00494b4b                       ; 00494b1b
        ;   XREF to: 00494b4b (CONDITIONAL_JUMP)  ; LAB_00494b4b
    CMP EBX,EBP                         ; 00494b1d
        ;   Label: LAB_00494b1d
    JGE 0x00494b4b                      ; 00494b1f
        ;   XREF to: 00494b4b (CONDITIONAL_JUMP)  ; LAB_00494b4b
    XOR EAX,EAX                         ; 00494b21
    MOV AL,byte ptr [ESI + 0x4]         ; 00494b23
    PUSH EAX                            ; 00494b26
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 00494b27
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 00494b2c
    CMP EAX,dword ptr [ESP + 0x144]     ; 00494b2f
    JNZ 0x00494b3a                      ; 00494b36
        ;   XREF to: 00494b3a (CONDITIONAL_JUMP)  ; LAB_00494b3a
    MOV EDI,EBX                         ; 00494b38
    MOV DH,byte ptr [ESI + 0xe8]        ; 00494b3a
        ;   Label: LAB_00494b3a
    ADD ESI,0xe4                        ; 00494b40
    INC EBX                             ; 00494b46
    TEST DH,DH                          ; 00494b47
    JNZ 0x00494b1d                      ; 00494b49
        ;   XREF to: 00494b1d (CONDITIONAL_JUMP)  ; LAB_00494b1d
    CMP dword ptr [ESP + 0x144],0x1b    ; 00494b4b
        ;   Label: LAB_00494b4b
    JNZ 0x00494aea                      ; 00494b53
        ;   XREF to: 00494aea (CONDITIONAL_JUMP)  ; LAB_00494aea
    MOV EDI,0xffffffff                  ; 00494b55
    JMP 0x00494aea                      ; 00494b5a
        ;   XREF to: 00494aea (UNCONDITIONAL_JUMP)  ; LAB_00494aea
    MOV EAX,0xffffffff                  ; 00494b5c
        ;   Label: LAB_00494b5c
    ADD ESP,0x144                       ; 00494b61
    POP EBP                             ; 00494b67
    POP ESI                             ; 00494b68
    POP EBX                             ; 00494b69
    RET                                 ; 00494b6a
    LEA EDI,[ESI + -0x2]                ; 00494b6b
        ;   Label: LAB_00494b6b
    IMUL EDI,EAX                        ; 00494b6e
    PUSH 0x0                            ; 00494b71
    CALL shape_edittool.cpp_FUN_0049d9e0 ; 00494b73
        ;   XREF to: 0049d9e0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_0049d9e0(char * button_text)
    IMUL EAX,EBP                        ; 00494b78
    MOV EBX,dword ptr [ESP + 0x140]     ; 00494b7b
    ADD ESP,0x4                         ; 00494b82
    ADD EDI,EAX                         ; 00494b85
    JMP 0x004948ac                      ; 00494b87
        ;   XREF to: 004948ac (UNCONDITIONAL_JUMP)  ; LAB_004948ac
    PUSH 0x0                            ; 00494b8c
        ;   Label: LAB_00494b8c
    CALL shape_edittool.cpp_FUN_0049d9e0 ; 00494b8e
        ;   XREF to: 0049d9e0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_0049d9e0(char * button_text)
    IMUL EAX,EDI                        ; 00494b93
    ADD ESP,0x4                         ; 00494b96
    MOV EDX,dword ptr [0x01c4f00c]      ; 00494b99 | DAT_01c4f00c
    MOV ECX,dword ptr [ESP + 0x12c]     ; 00494b9f
    ADD EAX,EDX                         ; 00494ba6
    ADD EAX,ECX                         ; 00494ba8
    DEC EAX                             ; 00494baa
    PUSH EDI                            ; 00494bab
    MOV dword ptr [ESP + 0x110],EAX     ; 00494bac
    MOV EAX,dword ptr [ESP + 0x160]     ; 00494bb3
    PUSH EAX                            ; 00494bba
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0 ; 00494bbb
        ;   XREF to: 004998a0 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00494bc0
    PUSH EAX                            ; 00494bc3
    PUSH 0x0                            ; 00494bc4
    CALL shape_edittool.cpp_FUN_0049d9e0 ; 00494bc6
        ;   XREF to: 0049d9e0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_0049d9e0(char * button_text)
    ADD ESP,0x4                         ; 00494bcb
    MOV EDX,dword ptr [ESP + 0x110]     ; 00494bce
    ADD EAX,EDX                         ; 00494bd5
    DEC EAX                             ; 00494bd7
    PUSH EAX                            ; 00494bd8
    MOV EAX,dword ptr [ESP + 0x144]     ; 00494bd9
    ADD EAX,ESI                         ; 00494be0
    DEC EAX                             ; 00494be2
    PUSH EAX                            ; 00494be3
    JMP 0x004949d2                      ; 00494be4
        ;   XREF to: 004949d2 (UNCONDITIONAL_JUMP)  ; LAB_004949d2
    PUSH 0xf                            ; 00494be9
        ;   Label: LAB_00494be9
    MOV EAX,[0x0061f2a4]                ; 00494beb | DAT_0061f2a4
    PUSH EAX                            ; 00494bf0 | DAT_01d1bca0
    MOV EBX,dword ptr [EAX]             ; 00494bf1 | DAT_01d1bca0
    CALL dword ptr [EBX + 0x4]          ; 00494bf3
    ADD ESP,0x8                         ; 00494bf6
    TEST EAX,EAX                        ; 00494bf9
    JZ 0x00494a97                       ; 00494bfb
        ;   XREF to: 00494a97 (CONDITIONAL_JUMP)  ; LAB_00494a97
    INC dword ptr [ESP + 0x140]         ; 00494c01
    JMP 0x00494a97                      ; 00494c08
        ;   XREF to: 00494a97 (UNCONDITIONAL_JUMP)  ; LAB_00494a97
    TEST ESI,ESI                        ; 00494c0d
        ;   Label: LAB_00494c0d
    JGE 0x00494add                      ; 00494c0f
        ;   XREF to: 00494add (CONDITIONAL_JUMP)  ; LAB_00494add
    MOV EAX,dword ptr [ESP + 0x118]     ; 00494c15
    MOV dword ptr [ESP + 0x140],EAX     ; 00494c1c
    JMP 0x00494add                      ; 00494c23
        ;   XREF to: 00494add (UNCONDITIONAL_JUMP)  ; LAB_00494add
    MOV EDI,0xffffffff                  ; 00494c28
        ;   Label: LAB_00494c28
    PUSH 0x5ff870                       ; 00494c2d | g_CEdButtonTypeInfo
        ;   Label: LAB_00494c2d
    MOV ECX,dword ptr [ESP + 0x114]     ; 00494c32
    PUSH ECX                            ; 00494c39
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 00494c3a
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00494c3f
    PUSH EAX                            ; 00494c42
    CALL crt_unknown.c_FUN_005c0336     ; 00494c43
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00494c48
    MOV EAX,dword ptr [ESP + 0x104]     ; 00494c4b
    MOV [0x0061b4ac],EAX                ; 00494c52 | DAT_0061b4ac
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 00494c57
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    MOV EBX,dword ptr [0x0061abc0]      ; 00494c5c | g_CEditorToolsPtr
    PUSH EBX                            ; 00494c62
    CALL shape_edittool.cpp_FUN_00496dd0 ; 00494c63
        ;   XREF to: 00496dd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00496dd0()
    ADD ESP,0x4                         ; 00494c68
    MOV EAX,EDI                         ; 00494c6b
    POP EDI                             ; 00494c6d
    ADD ESP,0x144                       ; 00494c6e
    POP EBP                             ; 00494c74
    POP ESI                             ; 00494c75
    POP EBX                             ; 00494c76
    RET                                 ; 00494c77
    XOR EBX,EBX                         ; 00494c78
        ;   Label: LAB_00494c78
    TEST EBP,EBP                        ; 00494c7a
    JLE 0x00494cae                      ; 00494c7c
        ;   XREF to: 00494cae (CONDITIONAL_JUMP)  ; LAB_00494cae
    MOV ESI,dword ptr [ESP + 0x110]     ; 00494c7e
    PUSH ESI                            ; 00494c85
        ;   Label: LAB_00494c85
    CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_0049d8a0 ; 00494c86
        ;   XREF to: 0049d8a0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdButton_wasClicked_FUN_0049d8a0(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 00494c8b
    TEST EAX,EAX                        ; 00494c8e
    JZ 0x00494c94                       ; 00494c90
        ;   XREF to: 00494c94 (CONDITIONAL_JUMP)  ; LAB_00494c94
    MOV EDI,EBX                         ; 00494c92
    CMP ESI,dword ptr [0x01c3f5d0]      ; 00494c94 | DAT_01c3f5d0
        ;   Label: LAB_00494c94
    JNZ 0x00494ca3                      ; 00494c9a
        ;   XREF to: 00494ca3 (CONDITIONAL_JUMP)  ; LAB_00494ca3
    MOV dword ptr [ESP + 0x140],EBX     ; 00494c9c
    INC EBX                             ; 00494ca3
        ;   Label: LAB_00494ca3
    ADD ESI,0xe4                        ; 00494ca4
    CMP EBX,EBP                         ; 00494caa
    JL 0x00494c85                       ; 00494cac
        ;   XREF to: 00494c85 (CONDITIONAL_JUMP)  ; LAB_00494c85
    MOV ESI,dword ptr [0x0061abc0]      ; 00494cae | g_CEditorToolsPtr
        ;   Label: LAB_00494cae
    PUSH ESI                            ; 00494cb4
    CALL shape_edittool.cpp_FUN_00496ee0 ; 00494cb5
        ;   XREF to: 00496ee0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00496ee0()
    ADD ESP,0x4                         ; 00494cba
    XOR ESI,ESI                         ; 00494cbd
    TEST EBP,EBP                        ; 00494cbf
    JLE 0x00494cee                      ; 00494cc1
        ;   XREF to: 00494cee (CONDITIONAL_JUMP)  ; LAB_00494cee
    MOV EBX,dword ptr [ESP + 0x110]     ; 00494cc3
    CMP ESI,dword ptr [ESP + 0x140]     ; 00494cca
        ;   Label: LAB_00494cca
    SETZ AL                             ; 00494cd1
    AND EAX,0xff                        ; 00494cd4
    PUSH EAX                            ; 00494cd9
    PUSH EBX                            ; 00494cda
    INC ESI                             ; 00494cdb
    CALL shape_edittool.cpp_FUN_0049d580 ; 00494cdc
        ;   XREF to: 0049d580 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0049d580()
    ADD ESP,0x8                         ; 00494ce1
    ADD EBX,0xe4                        ; 00494ce4
    CMP ESI,EBP                         ; 00494cea
    JL 0x00494cca                       ; 00494cec
        ;   XREF to: 00494cca (CONDITIONAL_JUMP)  ; LAB_00494cca
    PUSH 0x0                            ; 00494cee
        ;   Label: LAB_00494cee
    MOV ECX,dword ptr [0x0061abc0]      ; 00494cf0 | g_CEditorToolsPtr
    PUSH ECX                            ; 00494cf6
    CALL shape_edittool.cpp_FUN_00497870 ; 00494cf7
        ;   XREF to: 00497870 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00497870()
    ADD ESP,0x8                         ; 00494cfc
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005acff0 ; 00494cff
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005acff0()
    CMP EDI,-0x2                        ; 00494d04
    JZ 0x00494a65                       ; 00494d07
        ;   XREF to: 00494a65 (CONDITIONAL_JUMP)  ; LAB_00494a65
    JMP 0x00494c2d                      ; 00494d0d
        ;   XREF to: 00494c2d (UNCONDITIONAL_JUMP)  ; LAB_00494c2d

