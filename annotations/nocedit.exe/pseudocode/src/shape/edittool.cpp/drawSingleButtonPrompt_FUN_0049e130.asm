; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_edittool_cpp_drawSingleButtonPrompt_FUN_0049e130(char *title,char *message,int color)
;
; Parameters:
; char *           Stack[0x4]:4   title
; char *           Stack[0x8]:4   message
; int              Stack[0xc]:4   color
; Local Variables:
; undefined1       Stack[-0x108]:1  local_108
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 at 0049e777
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 at 0049e6d7
;   shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0 at 0049e727
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00622eae
;   TerminatedCString s_gEdFont_must_be_set_by_t_00622ec4
;   TerminatedCString s_Cancel_00622faa
;   TerminatedCString s_Cancel_00622fb1
;   TerminatedCString s_OK_00622fb8
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   int g_WindowHeight = 0xc8
;   CBitFont* g_EditorFont
;   CEditorTools g_CEditorToolsInstance
;   int g_FontCharacterHeight
;   int g_FontCharacterWidth
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;   ... and 2 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_3d.c_setRenderAlpha_FUN_00406d80
;   engine_font.cpp_CBitFont_drawText_FUN_004cda80
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
;   shape_edittool.cpp_calculateButtonHeight_FUN_004a6970
;   shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0
;   shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0
;   shape_edittool.cpp_CEdButton_dtor_FUN_004a6510
;   shape_edittool.cpp_CEdButton_paint_FUN_004a65e0
;   shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590
;   shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049e130
        ;   Label: shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130
    PUSH ESI                            ; 0049e131
    PUSH EDI                            ; 0049e132
    PUSH EBP                            ; 0049e133
    SUB ESP,0xf8                        ; 0049e134
    MOV EBP,dword ptr [ESP + 0x110]     ; 0049e13a
    CMP dword ptr [0x02cf1cd0],0x0      ; 0049e141 | g_EditorFont
    JZ 0x0049e3a3                       ; 0049e148
        ;   XREF to: 0049e3a3 (CONDITIONAL_JUMP)  ; LAB_0049e3a3
    MOV EAX,[0x02cf1cd0]                ; 0049e14e | g_EditorFont
        ;   Label: LAB_0049e14e
    PUSH 0x6a                           ; 0049e153
    MOV EDX,dword ptr [EAX + 0x3168]    ; 0049e155
    PUSH EAX                            ; 0049e15b
    MOV dword ptr [0x02cf2668],EDX      ; 0049e15c | g_FontCharacterHeight
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 0049e162
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    MOV [0x02cf266c],EAX                ; 0049e167 | g_FontCharacterWidth
    MOV EAX,[0x00679398]                ; 0049e16c | g_WindowHeight
    MOV EDX,EAX                         ; 0049e171
    MOV EBX,0x60                        ; 0049e173
    SAR EDX,0x1f                        ; 0049e178
    IDIV EBX                            ; 0049e17b
    ADD ESP,0x8                         ; 0049e17d
    PUSH 0x622faa                       ; 0049e180 | = "Cancel"
    MOV EBX,EAX                         ; 0049e185
    CALL shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0 ; 0049e187
        ;   XREF to: 004a68e0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0(char * button_text)
    ADD ESP,0x4                         ; 0049e18c
    PUSH 0x0                            ; 0049e18f
    MOV dword ptr [ESP + 0xf4],EAX      ; 0049e191
    CALL shape_edittool.cpp_calculateButtonHeight_FUN_004a6970 ; 0049e198
        ;   XREF to: 004a6970 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonHeight_FUN_004a6970(char * button_text)
    ADD ESP,0x4                         ; 0049e19d
    MOV ESI,dword ptr [ESP + 0x10c]     ; 0049e1a0
    PUSH ESI                            ; 0049e1a7
    MOV EDI,dword ptr [0x02cf1cd0]      ; 0049e1a8 | g_EditorFont
    ADD EBX,EBX                         ; 0049e1ae
    PUSH EDI                            ; 0049e1b0
    ADD EBX,EAX                         ; 0049e1b1
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 0049e1b3
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 0049e1b8
    MOV EDI,EAX                         ; 0049e1bb
    PUSH EBP                            ; 0049e1bd
    MOV dword ptr [ESP + 0xf8],EAX      ; 0049e1be
    MOV EAX,[0x02cf1cd0]                ; 0049e1c5 | g_EditorFont
    PUSH EAX                            ; 0049e1ca
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 0049e1cb
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 0049e1d0
    MOV ESI,EAX                         ; 0049e1d3
    CMP EAX,EDI                         ; 0049e1d5
    JLE 0x0049e1e0                      ; 0049e1d7
        ;   XREF to: 0049e1e0 (CONDITIONAL_JUMP)  ; LAB_0049e1e0
    MOV dword ptr [ESP + 0xf4],EAX      ; 0049e1d9
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0049e1e0
        ;   Label: LAB_0049e1e0
    CMP EAX,dword ptr [ESP + 0xf4]      ; 0049e1e7
    JG 0x0049e3cb                       ; 0049e1ee
        ;   XREF to: 0049e3cb (CONDITIONAL_JUMP)  ; LAB_0049e3cb
    PUSH EBP                            ; 0049e1f4
        ;   Label: LAB_0049e1f4
    MOV ECX,dword ptr [0x02cf1cd0]      ; 0049e1f5 | g_EditorFont
    PUSH ECX                            ; 0049e1fb
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40 ; 0049e1fc
        ;   XREF to: 004cff40 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 0049e201
    PUSH 0x0                            ; 0049e204
    MOV EDX,dword ptr [ESP + 0x110]     ; 0049e206
    PUSH EDX                            ; 0049e20d
    MOV EDX,dword ptr [0x02cf266c]      ; 0049e20e | g_FontCharacterWidth
    ADD EDX,EDX                         ; 0049e214
    MOV EDI,EAX                         ; 0049e216
    ADD EAX,EDX                         ; 0049e218
    ADD EAX,EBX                         ; 0049e21a
    PUSH EAX                            ; 0049e21c
    MOV EAX,[0x02cf2668]                ; 0049e21d | g_FontCharacterHeight
    MOV ECX,dword ptr [ESP + 0x100]     ; 0049e222
    SHL EAX,0x2                         ; 0049e229
    ADD EAX,ECX                         ; 0049e22c
    PUSH EAX                            ; 0049e22e
    MOV EAX,[0x00678a60]                ; 0049e22f | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 0049e234 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890 ; 0049e235
        ;   XREF to: 004a0890 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    ADD ESP,0x14                        ; 0049e23a
    PUSH 0x622fb1                       ; 0049e23d | = "Cancel"
    CALL shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0 ; 0049e242
        ;   XREF to: 004a68e0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0(char * button_text)
    MOV EDX,dword ptr [0x02d02560]      ; 0049e247 | g_ClipRight
    MOV dword ptr [ESP + 0xf0],EAX      ; 0049e24d
    ADD ESP,0x4                         ; 0049e254
    MOV EAX,[0x02d02558]                ; 0049e257 | g_ClipLeft
    MOV ECX,dword ptr [ESP + 0xec]      ; 0049e25c
    ADD EDX,EAX                         ; 0049e263
    SUB EDX,ECX                         ; 0049e265
    MOV EAX,EDX                         ; 0049e267
    SAR EDX,0x1f                        ; 0049e269
    SUB EAX,EDX                         ; 0049e26c
    SAR EAX,0x1                         ; 0049e26e
    INC EAX                             ; 0049e270
    PUSH 0x0                            ; 0049e271
    MOV dword ptr [ESP + 0xe8],EAX      ; 0049e273
    CALL shape_edittool.cpp_calculateButtonHeight_FUN_004a6970 ; 0049e27a
        ;   XREF to: 004a6970 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonHeight_FUN_004a6970(char * button_text)
    MOV EDX,dword ptr [0x02d02564]      ; 0049e27f | g_ClipBottom
    SUB EDX,EAX                         ; 0049e285
    ADD ESP,0x4                         ; 0049e287
    LEA EAX,[EDX + 0x1]                 ; 0049e28a
    MOV dword ptr [ESP + 0xe8],EAX      ; 0049e28d
    MOV EAX,ESP                         ; 0049e294
    PUSH EAX                            ; 0049e296
    CALL shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0 ; 0049e297
        ;   XREF to: 004a64e0 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 0049e29c
    PUSH 0x622fb8                       ; 0049e29f | = "OK"
    MOV EAX,[0x02d02564]                ; 0049e2a4 | g_ClipBottom
    MOV EDX,dword ptr [ESP + 0xf0]      ; 0049e2a9
    PUSH EAX                            ; 0049e2b0
    MOV EAX,dword ptr [ESP + 0xec]      ; 0049e2b1
    ADD EAX,EDX                         ; 0049e2b8
    DEC EAX                             ; 0049e2ba
    PUSH EAX                            ; 0049e2bb
    MOV ECX,dword ptr [ESP + 0xf4]      ; 0049e2bc
    PUSH ECX                            ; 0049e2c3
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0049e2c4
    PUSH EAX                            ; 0049e2cb
    LEA EAX,[ESP + 0x14]                ; 0049e2cc
    PUSH EAX                            ; 0049e2d0
    CALL shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590 ; 0049e2d1
        ;   XREF to: 004a6590 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590(CEdButton * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x18                        ; 0049e2d6
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0049e2d9
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00 ; 0049e2de
        ;   XREF to: 005f2f00 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00()
        ;   Label: LAB_0049e2de
    TEST EAX,EAX                        ; 0049e2e3
    JNZ 0x0049e3d7                      ; 0049e2e5
        ;   XREF to: 0049e3d7 (CONDITIONAL_JUMP)  ; LAB_0049e3d7
    MOV EAX,ESP                         ; 0049e2eb
    PUSH EAX                            ; 0049e2ed
    CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830 ; 0049e2ee
        ;   XREF to: 004a6830 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 0049e2f3
    TEST EAX,EAX                        ; 0049e2f6
    JNZ 0x0049e3d7                      ; 0049e2f8
        ;   XREF to: 0049e3d7 (CONDITIONAL_JUMP)  ; LAB_0049e3d7
    MOV EDX,dword ptr [0x00678a60]      ; 0049e2fe | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 0049e304 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80 ; 0049e305
        ;   XREF to: 004a0f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0049e30a
    PUSH 0x1                            ; 0049e30d
    MOV ECX,dword ptr [0x00678a60]      ; 0049e30f | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 0049e315 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_drawWindowSeparator_FUN_004a1230 ; 0049e316
        ;   XREF to: 004a1230 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_drawWindowSeparator_FUN_004a1230(CEditorTools * editor_tools, int line_position)
    ADD ESP,0x8                         ; 0049e31b
    PUSH 0xffff                         ; 0049e31e
    CALL engine_3d.c_setRenderAlpha_FUN_00406d80 ; 0049e323
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
    MOV EDX,dword ptr [0x02d0255c]      ; 0049e328 | g_ClipTop
    MOV ECX,dword ptr [0x02d02564]      ; 0049e32e | g_ClipBottom
    ADD ESP,0x4                         ; 0049e334
    ADD EDX,ECX                         ; 0049e337
    PUSH -0x1                           ; 0049e339
    SUB EDX,EDI                         ; 0049e33b
    MOV EAX,dword ptr [ESP + 0x118]     ; 0049e33d
    SUB EDX,EBX                         ; 0049e344
    PUSH EAX                            ; 0049e346
    MOV EAX,EDX                         ; 0049e347
    SAR EDX,0x1f                        ; 0049e349
    SUB EAX,EDX                         ; 0049e34c
    SAR EAX,0x1                         ; 0049e34e
    MOV EDX,dword ptr [0x02d02558]      ; 0049e350 | g_ClipLeft
    PUSH EAX                            ; 0049e356
    ADD EDX,dword ptr [0x02d02560]      ; 0049e357 | g_ClipRight
    SUB EDX,ESI                         ; 0049e35d
    MOV EAX,EDX                         ; 0049e35f
    SAR EDX,0x1f                        ; 0049e361
    SUB EAX,EDX                         ; 0049e364
    SAR EAX,0x1                         ; 0049e366
    PUSH EAX                            ; 0049e368
    PUSH EBP                            ; 0049e369
    MOV EDX,dword ptr [0x02cf1cd0]      ; 0049e36a | g_EditorFont
    PUSH EDX                            ; 0049e370
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 0049e371
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 0049e376
    PUSH 0x1                            ; 0049e379
    LEA EAX,[ESP + 0x4]                 ; 0049e37b
    PUSH EAX                            ; 0049e37f
    CALL shape_edittool.cpp_CEdButton_paint_FUN_004a65e0 ; 0049e380
        ;   XREF to: 004a65e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_paint_FUN_004a65e0(CEdButton * this_ptr, int draw_border_flag)
    ADD ESP,0x8                         ; 0049e385
    PUSH 0x0                            ; 0049e388
    MOV ECX,dword ptr [0x00678a60]      ; 0049e38a | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 0049e390 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380 ; 0049e391
        ;   XREF to: 004a1380 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380(CEditorTools * this_ptr, int use_clipping)
    ADD ESP,0x8                         ; 0049e396
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0049e399
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    JMP 0x0049e2de                      ; 0049e39e
        ;   XREF to: 0049e2de (UNCONDITIONAL_JUMP)  ; LAB_0049e2de
    MOV ECX,0x622eae                    ; 0049e3a3 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0049e3a3
    MOV EBX,0x8d                        ; 0049e3a8
    PUSH 0x622ec4                       ; 0049e3ad | = "gEdFont must be set by the application."
    MOV dword ptr [0x02f0ca48],ECX      ; 0049e3b2 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0049e3b8 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0049e3be
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0049e3c3
    JMP 0x0049e14e                      ; 0049e3c6
        ;   XREF to: 0049e14e (UNCONDITIONAL_JUMP)  ; LAB_0049e14e
    MOV dword ptr [ESP + 0xf4],EAX      ; 0049e3cb
        ;   Label: LAB_0049e3cb
    JMP 0x0049e1f4                      ; 0049e3d2
        ;   XREF to: 0049e1f4 (UNCONDITIONAL_JUMP)  ; LAB_0049e1f4
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0049e3d7
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   Label: LAB_0049e3d7
    MOV EBX,dword ptr [0x00678a60]      ; 0049e3dc | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EBX                            ; 0049e3e2 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 0049e3e3
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0049e3e8
    PUSH 0x0                            ; 0049e3eb
    LEA EAX,[ESP + 0x4]                 ; 0049e3ed
    PUSH EAX                            ; 0049e3f1
    CALL shape_edittool.cpp_CEdButton_dtor_FUN_004a6510 ; 0049e3f2
        ;   XREF to: 004a6510 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_dtor_FUN_004a6510(CEdButton * this_ptr)
    ADD ESP,0x8                         ; 0049e3f7
    ADD ESP,0xf8                        ; 0049e3fa
    POP EBP                             ; 0049e400
    POP EDI                             ; 0049e401
    POP ESI                             ; 0049e402
    POP EBX                             ; 0049e403
    RET                                 ; 0049e404

