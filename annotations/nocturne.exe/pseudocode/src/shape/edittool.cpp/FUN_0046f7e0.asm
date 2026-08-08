; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 shape_edittool_cpp_FUN_0046f7e0(char *param_1,char *param_2,int param_3,byte param_4,int param_5)
;
; Local Variables:
; undefined        Stack[-0x150]:1  local_150
; undefined1       Stack[-0x14f]:1  local_14f
;
; XREF[2]:
;   shape_edittool.cpp_CEditorTools_showCheatInputDialog_FUN_00471630 at 00471648
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00471600 at 00471618
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0057e4fa
;   TerminatedCString s_gEdFont_must_be_set_by_t_0057e510
;   CEditorTools* g_CEditorTools_PTR_005b6d50 = 01bcd074
;   int g_WindowWidth = 0x140
;   int INT_005b7630 = 0x7f
;   CKeys* g_CKeys_PTR_005bac64 = 01cc30e4
;   uchar[257] g_CharacterClassificationTable
;   undefined4 DAT_01bcd070
;   undefined4 DAT_01bcd9b8
;   undefined4 DAT_01bcd9bc
;   int g_ClipLeft
;   int g_ClipTop
;   CKeys g_CKeys_01cc30e4
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   engine_2d.c_clearInputAndWait_FUN_00403f50
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0
;   engine_keys.cpp_CKeys_getInputKey_FUN_004c41c0
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00471a80
;   shape_edittool.cpp_CInputString_backspace_FUN_0046f2a0
;   shape_edittool.cpp_CInputString_deleteSelection_FUN_0046f250
;   shape_edittool.cpp_CInputString_draw_FUN_0046f680
;   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0046f390
;   shape_edittool.cpp_CInputString_init_FUN_0046f0a0
;   shape_edittool.cpp_CInputString_insertChar_FUN_0046f150
;   shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0046f130
;   shape_edittool.cpp_FUN_004720c0
;   shape_edittool.cpp_FUN_004722b0
;   wincore_wddvmem.cpp_swapBuffers_FUN_00553910
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046f7e0
        ;   Label: shape_edittool.cpp_FUN_0046f7e0
    PUSH ESI                            ; 0046f7e1
    PUSH EDI                            ; 0046f7e2
    PUSH EBP                            ; 0046f7e3
    SUB ESP,0x140                       ; 0046f7e4
    MOV EDI,dword ptr [ESP + 0x158]     ; 0046f7ea
    MOV ESI,dword ptr [ESP + 0x15c]     ; 0046f7f1
    MOV EBX,dword ptr [ESP + 0x164]     ; 0046f7f8
    CMP dword ptr [0x01bcd070],0x0      ; 0046f7ff | DAT_01bcd070
    JZ 0x0046f8e0                       ; 0046f806
        ;   XREF to: 0046f8e0 (CONDITIONAL_JUMP)  ; LAB_0046f8e0
    MOV EAX,[0x01bcd070]                ; 0046f80c | DAT_01bcd070
        ;   Label: LAB_0046f80c
    PUSH 0x6a                           ; 0046f811
    MOV EDX,dword ptr [EAX + 0x3168]    ; 0046f813
    PUSH EAX                            ; 0046f819
    MOV dword ptr [0x01bcd9b8],EDX      ; 0046f81a | DAT_01bcd9b8
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 0046f820
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0046f825
    MOV [0x01bcd9bc],EAX                ; 0046f828 | DAT_01bcd9bc
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 0046f82d
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403f50()
    TEST byte ptr [ESP + 0x160],0x1     ; 0046f832
    JZ 0x0046f908                       ; 0046f83a
        ;   XREF to: 0046f908 (CONDITIONAL_JUMP)  ; LAB_0046f908
    PUSH EBX                            ; 0046f840
    PUSH ESI                            ; 0046f841
    PUSH EDI                            ; 0046f842
    LEA EAX,[ESP + 0xc]                 ; 0046f843
        ;   Label: LAB_0046f843
    PUSH EAX                            ; 0046f847
    CALL shape_edittool.cpp_CInputString_init_FUN_0046f0a0 ; 0046f848
        ;   XREF to: 0046f0a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_init_FUN_0046f0a0(CInputString * this_ptr, char * source_string, int max_length, int mask_mode)
    ADD ESP,0x10                        ; 0046f84d
    PUSH 0x0                            ; 0046f850
    MOV EAX,dword ptr [ESP + 0x158]     ; 0046f852
    PUSH EAX                            ; 0046f859
    MOV EDX,dword ptr [0x01bcd9bc]      ; 0046f85a | DAT_01bcd9bc
    PUSH EDX                            ; 0046f860
    MOV EDX,dword ptr [0x005b761c]      ; 0046f861 | g_WindowWidth
    SHL EDX,0x2                         ; 0046f867
    MOV EBX,0x5                         ; 0046f86a
    MOV EAX,EDX                         ; 0046f86f
    SAR EDX,0x1f                        ; 0046f871
    IDIV EBX                            ; 0046f874
    PUSH EAX                            ; 0046f876
    MOV ECX,dword ptr [0x005b6d50]      ; 0046f877 | g_CEditorTools_PTR_005b6d50
    PUSH ECX                            ; 0046f87d
    MOV ESI,0x8                         ; 0046f87e
    MOV EBX,0x7f                        ; 0046f883
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00471a80 ; 0046f888
        ;   XREF to: 00471a80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00471a80(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    MOV EBP,dword ptr [0x005b7630]      ; 0046f88d | INT_005b7630
    ADD ESP,0x14                        ; 0046f893
    MOV dword ptr [0x005b7630],EBX      ; 0046f896 | INT_005b7630
    MOV EAX,[0x005b6d50]                ; 0046f89c | g_CEditorTools_PTR_005b6d50
        ;   Label: LAB_0046f89c
    PUSH EAX                            ; 0046f8a1
    CALL shape_edittool.cpp_FUN_004722b0 ; 0046f8a2
        ;   XREF to: 004722b0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004722b0()
    ADD ESP,0x4                         ; 0046f8a7
    MOV EDX,dword ptr [0x01c00c5c]      ; 0046f8aa | g_ClipTop
    PUSH EDX                            ; 0046f8b0
    MOV ECX,dword ptr [0x01c00c58]      ; 0046f8b1 | g_ClipLeft
    PUSH ECX                            ; 0046f8b7
    LEA EAX,[ESP + 0x8]                 ; 0046f8b8
    PUSH EAX                            ; 0046f8bc
    CALL shape_edittool.cpp_CInputString_draw_FUN_0046f680 ; 0046f8bd
        ;   XREF to: 0046f680 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_draw_FUN_0046f680(CInputString * this_ptr, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0046f8c2
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 0046f8c5
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_00558b70 ; 0046f8ca
        ;   XREF to: 00558b70 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_00558b70()
        ;   Label: LAB_0046f8ca
    TEST EAX,EAX                        ; 0046f8cf
    JNZ 0x0046f911                      ; 0046f8d1
        ;   XREF to: 0046f911 (CONDITIONAL_JUMP)  ; LAB_0046f911
    MOV EAX,ESP                         ; 0046f8d3
    PUSH EAX                            ; 0046f8d5
    CALL shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0046f390 ; 0046f8d6
        ;   XREF to: 0046f390 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0046f390(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0046f8db
    JMP 0x0046f89c                      ; 0046f8de
        ;   XREF to: 0046f89c (UNCONDITIONAL_JUMP)  ; LAB_0046f89c
    MOV ECX,0x57e4fa                    ; 0046f8e0 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0046f8e0
    MOV EBP,0x8b                        ; 0046f8e5
    PUSH 0x57e510                       ; 0046f8ea | = "gEdFont must be set by the application."
    MOV dword ptr [0x01cc4800],ECX      ; 0046f8ef | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBP      ; 0046f8f5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0046f8fb
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0046f900
    JMP 0x0046f80c                      ; 0046f903
        ;   XREF to: 0046f80c (UNCONDITIONAL_JUMP)  ; LAB_0046f80c
    PUSH EBX                            ; 0046f908
        ;   Label: LAB_0046f908
    PUSH ESI                            ; 0046f909
    PUSH 0x0                            ; 0046f90a
    JMP 0x0046f843                      ; 0046f90c
        ;   XREF to: 0046f843 (UNCONDITIONAL_JUMP)  ; LAB_0046f843
    MOV EBX,dword ptr [0x005bac64]      ; 0046f911 | g_CKeys_PTR_005bac64
        ;   Label: LAB_0046f911
    PUSH EBX                            ; 0046f917 | g_CKeys_01cc30e4
    CALL engine_keys.cpp_CKeys_getInputKey_FUN_004c41c0 ; 0046f918
        ;   XREF to: 004c41c0 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getInputKey_FUN_004c41c0(CKeys * this_ptr)
    MOV EBX,EAX                         ; 0046f91d
    ADD ESP,0x4                         ; 0046f91f
    CMP EAX,0x1b                        ; 0046f922
    JZ 0x0046f93e                       ; 0046f925
        ;   XREF to: 0046f93e (CONDITIONAL_JUMP)  ; LAB_0046f93e
    CMP EAX,0xd                         ; 0046f927
    JZ 0x0046f965                       ; 0046f92a
        ;   XREF to: 0046f965 (CONDITIONAL_JUMP)  ; LAB_0046f965
    CMP EAX,0x8                         ; 0046f92c
    JNZ 0x0046f9a2                      ; 0046f92f
        ;   XREF to: 0046f9a2 (CONDITIONAL_JUMP)  ; LAB_0046f9a2
    MOV EAX,ESP                         ; 0046f931
    PUSH EAX                            ; 0046f933
    CALL shape_edittool.cpp_CInputString_backspace_FUN_0046f2a0 ; 0046f934
        ;   XREF to: 0046f2a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_backspace_FUN_0046f2a0(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0046f939
    JMP 0x0046f8ca                      ; 0046f93c
        ;   XREF to: 0046f8ca (UNCONDITIONAL_JUMP)  ; LAB_0046f8ca
    MOV EDI,dword ptr [0x005b6d50]      ; 0046f93e | g_CEditorTools_PTR_005b6d50
        ;   Label: LAB_0046f93e
    PUSH EDI                            ; 0046f944
    CALL shape_edittool.cpp_FUN_004720c0 ; 0046f945
        ;   XREF to: 004720c0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004720c0()
    ADD ESP,0x4                         ; 0046f94a
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 0046f94d
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403f50()
    MOV dword ptr [0x005b7630],EBP      ; 0046f952 | INT_005b7630
    XOR EAX,EAX                         ; 0046f958
    ADD ESP,0x140                       ; 0046f95a
        ;   Label: LAB_0046f95a
    POP EBP                             ; 0046f960
    POP EDI                             ; 0046f961
    POP ESI                             ; 0046f962
    POP EBX                             ; 0046f963
    RET                                 ; 0046f964
    MOV ESI,ESP                         ; 0046f965
        ;   Label: LAB_0046f965
    PUSH EDI                            ; 0046f967
    MOV AL,byte ptr [ESI]               ; 0046f968
        ;   Label: LAB_0046f968
    MOV byte ptr [EDI],AL               ; 0046f96a
    CMP AL,0x0                          ; 0046f96c
    JZ 0x0046f980                       ; 0046f96e
        ;   XREF to: 0046f980 (CONDITIONAL_JUMP)  ; LAB_0046f980
    MOV AL,byte ptr [ESI + 0x1]         ; 0046f970
    ADD ESI,0x2                         ; 0046f973
    MOV byte ptr [EDI + 0x1],AL         ; 0046f976
    ADD EDI,0x2                         ; 0046f979
    CMP AL,0x0                          ; 0046f97c
    JNZ 0x0046f968                      ; 0046f97e
        ;   XREF to: 0046f968 (CONDITIONAL_JUMP)  ; LAB_0046f968
    POP EDI                             ; 0046f980
        ;   Label: LAB_0046f980
    MOV ESI,dword ptr [0x005b6d50]      ; 0046f981 | g_CEditorTools_PTR_005b6d50
    PUSH ESI                            ; 0046f987
    CALL shape_edittool.cpp_FUN_004720c0 ; 0046f988
        ;   XREF to: 004720c0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004720c0()
    ADD ESP,0x4                         ; 0046f98d
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 0046f990
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403f50()
    MOV EAX,0x1                         ; 0046f995
    MOV dword ptr [0x005b7630],EBP      ; 0046f99a | INT_005b7630
    JMP 0x0046f95a                      ; 0046f9a0
        ;   XREF to: 0046f95a (UNCONDITIONAL_JUMP)  ; LAB_0046f95a
    INC AL                              ; 0046f9a2
        ;   Label: LAB_0046f9a2
    AND EAX,0xff                        ; 0046f9a4
    TEST byte ptr [EAX + 0x5c168c],0x8  ; 0046f9a9 | g_CharacterClassificationTable
    JZ 0x0046f8ca                       ; 0046f9b0
        ;   XREF to: 0046f8ca (CONDITIONAL_JUMP)  ; LAB_0046f8ca
    MOV EAX,ESP                         ; 0046f9b6
    PUSH EAX                            ; 0046f9b8
    CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_0046f250 ; 0046f9b9
        ;   XREF to: 0046f250 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteSelection_FUN_0046f250(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0046f9be
    PUSH 0x1                            ; 0046f9c1
    PUSH EBX                            ; 0046f9c3
    LEA EAX,[ESP + 0x8]                 ; 0046f9c4
    PUSH EAX                            ; 0046f9c8
    CALL shape_edittool.cpp_CInputString_insertChar_FUN_0046f150 ; 0046f9c9
        ;   XREF to: 0046f150 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_insertChar_FUN_0046f150(CInputString * this_ptr, char character, int advance_cursor)
    ADD ESP,0xc                         ; 0046f9ce
    MOV EAX,ESP                         ; 0046f9d1
    PUSH EAX                            ; 0046f9d3
    CALL shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0046f130 ; 0046f9d4
        ;   XREF to: 0046f130 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0046f130(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0046f9d9
    JMP 0x0046f8ca                      ; 0046f9dc
        ;   XREF to: 0046f8ca (UNCONDITIONAL_JUMP)  ; LAB_0046f8ca

