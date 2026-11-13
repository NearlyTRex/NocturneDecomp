; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_drawSingleButtonPrompt_FUN_0047b800(char *title,char *message,int color)
;
; Parameters:
; char *           Stack[0x4]:4   title
; char *           Stack[0x8]:4   message
; int              Stack[0xc]:4   color
; Local Variables:
; undefined        Stack[-0x108]:1  local_108
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   shape_edittool.cpp_CEditorTools_showError_FUN_0047be40 at 0047be77
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0047bda0 at 0047bdd7
;   shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0 at 0047be27
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d1e6f
;   TerminatedCString s_gEdFont_must_be_set_by_t_005d1e85
;   TerminatedCString s_Cancel_005d1f5b
;   TerminatedCString s_Cancel_005d1f62
;   undefined4 DAT_005d1f69
;   CEditorTools* g_CEditorToolsPtr = 01c25594
;   undefined4 DAT_006141bc
;   undefined4 DAT_01c25590
;   undefined4 DAT_01c25f78
;   undefined4 DAT_01c25f7c
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e50
;   undefined4 DAT_01c35e54
;   undefined4 DAT_01d046a0
;   ... and 1 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_3d.c_setRenderAlpha_FUN_00406da0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560
;   engine_font.cpp_CBitFont_getTextHeight_FUN_004aafb0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00
;   engine_font.cpp_FUN_004a8df0
;   engine_mini3d.cpp_setAlpha_FUN_004f3570
;   shape_edittool.cpp_calculateButtonHeight_FUN_00485380
;   shape_edittool.cpp_calculateButtonWidth_FUN_004852f0
;   shape_edittool.cpp_CEdButton_ctor_FUN_00484e20
;   shape_edittool.cpp_CEdButton_dtor_FUN_00484e50
;   shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_00484ed0
;   shape_edittool.cpp_CEdButton_wasClicked_FUN_00485240
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047e1d0
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047b800
        ;   Label: shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047b800
    PUSH ESI                            ; 0047b801
    PUSH EDI                            ; 0047b802
    PUSH EBP                            ; 0047b803
    SUB ESP,0xf8                        ; 0047b804
    MOV ESI,dword ptr [ESP + 0x110]     ; 0047b80a
    CMP dword ptr [0x01c25590],0x0      ; 0047b811 | DAT_01c25590
    JZ 0x0047ba80                       ; 0047b818
        ;   XREF to: 0047ba80 (CONDITIONAL_JUMP)  ; LAB_0047ba80
    MOV EAX,[0x01c25590]                ; 0047b81e | DAT_01c25590
        ;   Label: LAB_0047b81e
    PUSH 0x6a                           ; 0047b823
    MOV EDX,dword ptr [EAX + 0x41e8]    ; 0047b825
    PUSH EAX                            ; 0047b82b
    MOV dword ptr [0x01c25f78],EDX      ; 0047b82c | DAT_01c25f78
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 0047b832
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    MOV [0x01c25f7c],EAX                ; 0047b837 | DAT_01c25f7c
    MOV EAX,[0x006141bc]                ; 0047b83c | DAT_006141bc
    MOV EDX,EAX                         ; 0047b841
    MOV EBX,0x60                        ; 0047b843
    SAR EDX,0x1f                        ; 0047b848
    IDIV EBX                            ; 0047b84b
    ADD ESP,0x8                         ; 0047b84d
    PUSH 0x5d1f5b                       ; 0047b850 | = "Cancel"
    MOV EBX,EAX                         ; 0047b855
    CALL shape_edittool.cpp_calculateButtonWidth_FUN_004852f0 ; 0047b857
        ;   XREF to: 004852f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonWidth_FUN_004852f0(char * button_text)
    ADD ESP,0x4                         ; 0047b85c
    PUSH 0x0                            ; 0047b85f
    MOV dword ptr [ESP + 0xf4],EAX      ; 0047b861
    CALL shape_edittool.cpp_calculateButtonHeight_FUN_00485380 ; 0047b868
        ;   XREF to: 00485380 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonHeight_FUN_00485380(char * button_text)
    ADD ESP,0x4                         ; 0047b86d
    MOV EDI,dword ptr [ESP + 0x10c]     ; 0047b870
    PUSH EDI                            ; 0047b877
    MOV EBP,dword ptr [0x01c25590]      ; 0047b878 | DAT_01c25590
    ADD EBX,EBX                         ; 0047b87e
    PUSH EBP                            ; 0047b880
    ADD EBX,EAX                         ; 0047b881
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00 ; 0047b883
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 0047b888
    MOV EBP,EAX                         ; 0047b88b
    PUSH ESI                            ; 0047b88d
    MOV dword ptr [ESP + 0xf8],EAX      ; 0047b88e
    MOV EAX,[0x01c25590]                ; 0047b895 | DAT_01c25590
    PUSH EAX                            ; 0047b89a
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00 ; 0047b89b
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 0047b8a0
    MOV EDI,EAX                         ; 0047b8a3
    CMP EAX,EBP                         ; 0047b8a5
    JLE 0x0047b8b0                      ; 0047b8a7
        ;   XREF to: 0047b8b0 (CONDITIONAL_JUMP)  ; LAB_0047b8b0
    MOV dword ptr [ESP + 0xf4],EAX      ; 0047b8a9
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0047b8b0
        ;   Label: LAB_0047b8b0
    CMP EAX,dword ptr [ESP + 0xf4]      ; 0047b8b7
    JG 0x0047baa8                       ; 0047b8be
        ;   XREF to: 0047baa8 (CONDITIONAL_JUMP)  ; LAB_0047baa8
    PUSH ESI                            ; 0047b8c4
        ;   Label: LAB_0047b8c4
    MOV ECX,dword ptr [0x01c25590]      ; 0047b8c5 | DAT_01c25590
    PUSH ECX                            ; 0047b8cb
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_004aafb0 ; 0047b8cc
        ;   XREF to: 004aafb0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextHeight_FUN_004aafb0(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 0047b8d1
    PUSH 0x0                            ; 0047b8d4
    MOV EDX,dword ptr [ESP + 0x110]     ; 0047b8d6
    PUSH EDX                            ; 0047b8dd
    MOV EDX,dword ptr [0x01c25f7c]      ; 0047b8de | DAT_01c25f7c
    ADD EDX,EDX                         ; 0047b8e4
    MOV EBP,EAX                         ; 0047b8e6
    ADD EAX,EDX                         ; 0047b8e8
    ADD EAX,EBX                         ; 0047b8ea
    PUSH EAX                            ; 0047b8ec
    MOV EAX,[0x01c25f78]                ; 0047b8ed | DAT_01c25f78
    MOV ECX,dword ptr [ESP + 0x100]     ; 0047b8f2
    SHL EAX,0x2                         ; 0047b8f9
    ADD EAX,ECX                         ; 0047b8fc
    PUSH EAX                            ; 0047b8fe
    MOV EAX,[0x006138e0]                ; 0047b8ff | g_CEditorToolsPtr
    PUSH EAX                            ; 0047b904
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047e1d0 ; 0047b905
        ;   XREF to: 0047e1d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047e1d0(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    ADD ESP,0x14                        ; 0047b90a
    PUSH 0x5d1f62                       ; 0047b90d | = "Cancel"
    CALL shape_edittool.cpp_calculateButtonWidth_FUN_004852f0 ; 0047b912
        ;   XREF to: 004852f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonWidth_FUN_004852f0(char * button_text)
    MOV EDX,dword ptr [0x01c35e50]      ; 0047b917 | DAT_01c35e50
    MOV dword ptr [ESP + 0xf0],EAX      ; 0047b91d
    ADD ESP,0x4                         ; 0047b924
    MOV EAX,[0x01c35e48]                ; 0047b927 | DAT_01c35e48
    MOV ECX,dword ptr [ESP + 0xec]      ; 0047b92c
    ADD EDX,EAX                         ; 0047b933
    SUB EDX,ECX                         ; 0047b935
    MOV EAX,EDX                         ; 0047b937
    SAR EDX,0x1f                        ; 0047b939
    SUB EAX,EDX                         ; 0047b93c
    SAR EAX,0x1                         ; 0047b93e
    INC EAX                             ; 0047b940
    PUSH 0x0                            ; 0047b941
    MOV dword ptr [ESP + 0xe8],EAX      ; 0047b943
    CALL shape_edittool.cpp_calculateButtonHeight_FUN_00485380 ; 0047b94a
        ;   XREF to: 00485380 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonHeight_FUN_00485380(char * button_text)
    MOV EDX,dword ptr [0x01c35e54]      ; 0047b94f | DAT_01c35e54
    SUB EDX,EAX                         ; 0047b955
    ADD ESP,0x4                         ; 0047b957
    LEA EAX,[EDX + 0x1]                 ; 0047b95a
    MOV dword ptr [ESP + 0xe8],EAX      ; 0047b95d
    MOV EAX,ESP                         ; 0047b964
    PUSH EAX                            ; 0047b966
    CALL shape_edittool.cpp_CEdButton_ctor_FUN_00484e20 ; 0047b967
        ;   XREF to: 00484e20 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_ctor_FUN_00484e20(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 0047b96c
    PUSH 0x5d1f69                       ; 0047b96f | DAT_005d1f69
    MOV EAX,[0x01c35e54]                ; 0047b974 | DAT_01c35e54
    MOV EDX,dword ptr [ESP + 0xf0]      ; 0047b979
    PUSH EAX                            ; 0047b980
    MOV EAX,dword ptr [ESP + 0xec]      ; 0047b981
    ADD EAX,EDX                         ; 0047b988
    DEC EAX                             ; 0047b98a
    PUSH EAX                            ; 0047b98b
    MOV ECX,dword ptr [ESP + 0xf4]      ; 0047b98c
    PUSH ECX                            ; 0047b993
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0047b994
    PUSH EAX                            ; 0047b99b
    LEA EAX,[ESP + 0x14]                ; 0047b99c
    PUSH EAX                            ; 0047b9a0
    CALL shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_00484ed0 ; 0047b9a1
        ;   XREF to: 00484ed0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_00484ed0(CEdButton * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x18                        ; 0047b9a6
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0047b9a9
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_0058eb40 ; 0047b9ae
        ;   XREF to: 0058eb40 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_0058eb40()
        ;   Label: LAB_0047b9ae
    TEST EAX,EAX                        ; 0047b9b3
    JNZ 0x0047bab4                      ; 0047b9b5
        ;   XREF to: 0047bab4 (CONDITIONAL_JUMP)  ; LAB_0047bab4
    MOV EAX,ESP                         ; 0047b9bb
    PUSH EAX                            ; 0047b9bd
    CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_00485240 ; 0047b9be
        ;   XREF to: 00485240 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdButton_wasClicked_FUN_00485240(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 0047b9c3
    TEST EAX,EAX                        ; 0047b9c6
    JNZ 0x0047bab4                      ; 0047b9c8
        ;   XREF to: 0047bab4 (CONDITIONAL_JUMP)  ; LAB_0047bab4
    MOV EDX,dword ptr [0x006138e0]      ; 0047b9ce | g_CEditorToolsPtr
    PUSH EDX                            ; 0047b9d4
    CALL shape_edittool.cpp_FUN_0047e870 ; 0047b9d5
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047e870()
    ADD ESP,0x4                         ; 0047b9da
    PUSH 0x1                            ; 0047b9dd
    MOV ECX,dword ptr [0x006138e0]      ; 0047b9df | g_CEditorToolsPtr
    PUSH ECX                            ; 0047b9e5
    CALL shape_edittool.cpp_FUN_0047eff0 ; 0047b9e6
        ;   XREF to: 0047eff0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047eff0()
    ADD ESP,0x8                         ; 0047b9eb
    PUSH 0xffff                         ; 0047b9ee
    CALL engine_3d.c_setRenderAlpha_FUN_00406da0 ; 0047b9f3
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406da0(int alpha_color_value)
    ADD ESP,0x4                         ; 0047b9f8
    PUSH 0x3f800000                     ; 0047b9fb
    CALL engine_mini3d.cpp_setAlpha_FUN_004f3570 ; 0047ba00
        ;   XREF to: 004f3570 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setAlpha_FUN_004f3570(float alpha)
    MOV EDX,dword ptr [0x01c35e4c]      ; 0047ba05 | DAT_01c35e4c
    MOV ECX,dword ptr [0x01c35e54]      ; 0047ba0b | DAT_01c35e54
    ADD ESP,0x4                         ; 0047ba11
    ADD EDX,ECX                         ; 0047ba14
    PUSH -0x1                           ; 0047ba16
    SUB EDX,EBP                         ; 0047ba18
    MOV EAX,dword ptr [ESP + 0x118]     ; 0047ba1a
    SUB EDX,EBX                         ; 0047ba21
    PUSH EAX                            ; 0047ba23
    MOV EAX,EDX                         ; 0047ba24
    SAR EDX,0x1f                        ; 0047ba26
    SUB EAX,EDX                         ; 0047ba29
    SAR EAX,0x1                         ; 0047ba2b
    MOV EDX,dword ptr [0x01c35e48]      ; 0047ba2d | DAT_01c35e48
    PUSH EAX                            ; 0047ba33
    ADD EDX,dword ptr [0x01c35e50]      ; 0047ba34 | DAT_01c35e50
    SUB EDX,EDI                         ; 0047ba3a
    MOV EAX,EDX                         ; 0047ba3c
    SAR EDX,0x1f                        ; 0047ba3e
    SUB EAX,EDX                         ; 0047ba41
    SAR EAX,0x1                         ; 0047ba43
    PUSH EAX                            ; 0047ba45
    PUSH ESI                            ; 0047ba46
    MOV EDX,dword ptr [0x01c25590]      ; 0047ba47 | DAT_01c25590
    PUSH EDX                            ; 0047ba4d
    CALL engine_font.cpp_FUN_004a8df0   ; 0047ba4e
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    ADD ESP,0x18                        ; 0047ba53
    PUSH 0x1                            ; 0047ba56
    LEA EAX,[ESP + 0x4]                 ; 0047ba58
    PUSH EAX                            ; 0047ba5c
    CALL shape_edittool.cpp_FUN_00484f20 ; 0047ba5d
        ;   XREF to: 00484f20 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00484f20()
    ADD ESP,0x8                         ; 0047ba62
    PUSH 0x0                            ; 0047ba65
    MOV ECX,dword ptr [0x006138e0]      ; 0047ba67 | g_CEditorToolsPtr
    PUSH ECX                            ; 0047ba6d
    CALL shape_edittool.cpp_FUN_0047f210 ; 0047ba6e
        ;   XREF to: 0047f210 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047f210()
    ADD ESP,0x8                         ; 0047ba73
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00589560 ; 0047ba76
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00589560()
    JMP 0x0047b9ae                      ; 0047ba7b
        ;   XREF to: 0047b9ae (UNCONDITIONAL_JUMP)  ; LAB_0047b9ae
    MOV ECX,0x5d1e6f                    ; 0047ba80 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0047ba80
    MOV EBX,0xa0                        ; 0047ba85
    PUSH 0x5d1e85                       ; 0047ba8a | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d046a0],ECX      ; 0047ba8f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0047ba95 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0047ba9b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0047baa0
    JMP 0x0047b81e                      ; 0047baa3
        ;   XREF to: 0047b81e (UNCONDITIONAL_JUMP)  ; LAB_0047b81e
    MOV dword ptr [ESP + 0xf4],EAX      ; 0047baa8
        ;   Label: LAB_0047baa8
    JMP 0x0047b8c4                      ; 0047baaf
        ;   XREF to: 0047b8c4 (UNCONDITIONAL_JUMP)  ; LAB_0047b8c4
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0047bab4
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
        ;   Label: LAB_0047bab4
    MOV EBX,dword ptr [0x006138e0]      ; 0047bab9 | g_CEditorToolsPtr
    PUSH EBX                            ; 0047babf
    CALL shape_edittool.cpp_FUN_0047e760 ; 0047bac0
        ;   XREF to: 0047e760 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047e760()
    ADD ESP,0x4                         ; 0047bac5
    PUSH 0x0                            ; 0047bac8
    LEA EAX,[ESP + 0x4]                 ; 0047baca
    PUSH EAX                            ; 0047bace
    CALL shape_edittool.cpp_CEdButton_dtor_FUN_00484e50 ; 0047bacf
        ;   XREF to: 00484e50 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_dtor_FUN_00484e50(CEdButton * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0047bad4
    ADD ESP,0xf8                        ; 0047bad7
    POP EBP                             ; 0047badd
    POP EDI                             ; 0047bade
    POP ESI                             ; 0047badf
    POP EBX                             ; 0047bae0
    RET                                 ; 0047bae1

