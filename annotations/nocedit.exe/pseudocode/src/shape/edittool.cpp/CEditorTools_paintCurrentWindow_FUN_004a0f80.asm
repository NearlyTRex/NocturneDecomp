; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(CEditorTools *this_ptr)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[8]:
;   core_menu.cpp_adjustMouseSensitivity_FUN_005107c0 at 0051085f
;   shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870 at 0049e8cc
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 at 0049fc5a
;   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 at 004a05e1
;   shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40 at 004a4d51
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130 at 0049e305
;   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0 at 0049ef9e
;   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 at 0049dcdc
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00622eae
;   TerminatedCString s_gEdFont_must_be_set_by_t_00622ec4
;   TerminatedCString s_shape_edittool_cpp_0062348d
;   TerminatedCString s_CEditorTools_paintWindow_006234a3
;   TerminatedCString s_j_006234e0
;   CBitFont* g_EditorFont
;   int g_WindowStackCount
;   SWindow[5] g_WindowStack
;   undefined4 DAT_02cf1ce4
;   undefined4 DAT_02cf1ce8
;   undefined4 DAT_02cf1cec
;   undefined4 DAT_02cf1d18
;   int g_FontCharacterHeight
;   int g_FontCharacterWidth
;   int INT_02cf2a78
;   ... and 8 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_2d.c_drawHLine_FUN_00402ee0
;   engine_2d.c_drawVLine_FUN_00402ff0
;   engine_2d.c_fillRectColor_FUN_00403170
;   engine_2d.c_fillRectWithBorder_FUN_00403200
;   engine_3d.c_setRenderAlpha_FUN_00406d80
;   engine_font.cpp_CBitFont_drawText_FUN_004cda80
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004d01d0
;   engine_font.cpp_CBitFont_getTextHeight_FUN_004cff40
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
;   engine_matrix.c_popViewport_FUN_0050e480
;   engine_matrix.c_pushViewport_FUN_0050e320
;   shape_edittool.cpp_paintWindowBackground_FUN_0049e590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0f80
        ;   Label: shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80
    PUSH ESI                            ; 004a0f81
    PUSH EDI                            ; 004a0f82
    PUSH EBP                            ; 004a0f83
    SUB ESP,0x4                         ; 004a0f84
    CMP dword ptr [0x02cf1cd0],0x0      ; 004a0f87 | g_EditorFont
    JZ 0x004a10a4                       ; 004a0f8e
        ;   XREF to: 004a10a4 (CONDITIONAL_JUMP)  ; LAB_004a10a4
    MOV EAX,[0x02cf1cd0]                ; 004a0f94 | g_EditorFont
        ;   Label: LAB_004a0f94
    PUSH 0x6a                           ; 004a0f99
    MOV EDX,dword ptr [EAX + 0x3168]    ; 004a0f9b
    PUSH EAX                            ; 004a0fa1
    MOV dword ptr [0x02cf2668],EDX      ; 004a0fa2 | g_FontCharacterHeight
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004d01d0 ; 004a0fa8
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    MOV ESI,dword ptr [0x02cf1cdc]      ; 004a0fad | g_WindowStackCount
    ADD ESP,0x8                         ; 004a0fb3
    MOV [0x02cf266c],EAX                ; 004a0fb6 | g_FontCharacterWidth
    CMP ESI,0x1                         ; 004a0fbb
    JGE 0x004a0fe3                      ; 004a0fbe
        ;   XREF to: 004a0fe3 (CONDITIONAL_JUMP)  ; LAB_004a0fe3
    MOV EDI,0x62348d                    ; 004a0fc0 | = "..\\shape\\edittool.cpp"
    MOV EBP,0x887                       ; 004a0fc5
    PUSH 0x6234a3                       ; 004a0fca | = "CEditorTools::paintWindow() called bu..."
    MOV dword ptr [0x02f0ca48],EDI      ; 004a0fcf | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 004a0fd5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a0fdb
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a0fe0
    MOV EAX,[0x02d02570]                ; 004a0fe3 | g_ActiveRenderColor
        ;   Label: LAB_004a0fe3
    MOV dword ptr [ESP],EAX             ; 004a0fe8
    MOV EAX,[0x02cf1cdc]                ; 004a0feb | g_WindowStackCount
    DEC EAX                             ; 004a0ff0
    MOV EBX,EAX                         ; 004a0ff1
    SHL EBX,0x4                         ; 004a0ff3
    SUB EBX,EAX                         ; 004a0ff6
    SHL EBX,0x2                         ; 004a0ff8
    ADD EBX,EAX                         ; 004a0ffb
    SHL EBX,0x3                         ; 004a0ffd
    ADD EBX,0x2cf1ce0                   ; 004a1000 | g_WindowStack
    CALL shape_edittool.cpp_paintWindowBackground_FUN_0049e590 ; 004a1006
        ;   XREF to: 0049e590 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_paintWindowBackground_FUN_0049e590()
    MOV EAX,dword ptr [EBX + 0xc]       ; 004a100b | DAT_02cf1cec
    MOV EDX,dword ptr [EBX + 0x4]       ; 004a100e | DAT_02cf1ce4
    SUB EAX,EDX                         ; 004a1011
    INC EAX                             ; 004a1013
    MOV ECX,dword ptr [EBX]             ; 004a1014 | g_WindowStack
    PUSH EAX                            ; 004a1016
    MOV EAX,dword ptr [EBX + 0x8]       ; 004a1017 | DAT_02cf1ce8
    SUB EAX,ECX                         ; 004a101a
    INC EAX                             ; 004a101c
    PUSH EAX                            ; 004a101d
    PUSH EDX                            ; 004a101e
    PUSH ECX                            ; 004a101f
    CALL engine_matrix.c_pushViewport_FUN_0050e320 ; 004a1020
        ;   XREF to: 0050e320 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pushViewport_FUN_0050e320(int x, int y, int width, int height)
    ADD ESP,0x10                        ; 004a1025
    MOV EBP,dword ptr [0x02cf2a7c]      ; 004a1028 | g_WindowBorderColor1
    PUSH EBP                            ; 004a102e
    MOV EAX,[0x02cf2a78]                ; 004a102f | INT_02cf2a78
    PUSH EAX                            ; 004a1034
    MOV EAX,dword ptr [EBX + 0xc]       ; 004a1035 | DAT_02cf1cec
    SUB EAX,0x2                         ; 004a1038
    PUSH EAX                            ; 004a103b
    MOV EAX,dword ptr [EBX + 0x8]       ; 004a103c | DAT_02cf1ce8
    SUB EAX,0x2                         ; 004a103f
    PUSH EAX                            ; 004a1042
    MOV EAX,dword ptr [EBX + 0x4]       ; 004a1043 | DAT_02cf1ce4
    INC EAX                             ; 004a1046
    PUSH EAX                            ; 004a1047
    MOV EAX,dword ptr [EBX]             ; 004a1048 | g_WindowStack
    INC EAX                             ; 004a104a
    PUSH EAX                            ; 004a104b
    CALL engine_2d.c_fillRectWithBorder_FUN_00403200 ; 004a104c
        ;   XREF to: 00403200 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectWithBorder_FUN_00403200(int x1, int y1, int x2, int y2, ...)
    MOV EAX,[0x02cf2a80]                ; 004a1051 | g_WindowBorderColor2
    MOV [0x02d02570],EAX                ; 004a1056 | g_ActiveRenderColor
    MOV EAX,dword ptr [EBX + 0x8]       ; 004a105b | DAT_02cf1ce8
    ADD ESP,0x18                        ; 004a105e
    DEC EAX                             ; 004a1061
    PUSH EAX                            ; 004a1062
    MOV EAX,dword ptr [EBX + 0xc]       ; 004a1063 | DAT_02cf1cec
    DEC EAX                             ; 004a1066
    PUSH EAX                            ; 004a1067
    MOV EDX,dword ptr [EBX]             ; 004a1068 | g_WindowStack
    PUSH EDX                            ; 004a106a
    CALL engine_2d.c_drawHLine_FUN_00402ee0 ; 004a106b
        ;   XREF to: 00402ee0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402ee0(int x1, int y, int x2)
    MOV EAX,dword ptr [EBX + 0xc]       ; 004a1070 | DAT_02cf1cec
    ADD ESP,0xc                         ; 004a1073
    DEC EAX                             ; 004a1076
    PUSH EAX                            ; 004a1077
    MOV ECX,dword ptr [EBX + 0x4]       ; 004a1078 | DAT_02cf1ce4
    MOV EAX,dword ptr [EBX + 0x8]       ; 004a107b | DAT_02cf1ce8
    PUSH ECX                            ; 004a107e
    DEC EAX                             ; 004a107f
    PUSH EAX                            ; 004a1080
    CALL engine_2d.c_drawVLine_FUN_00402ff0 ; 004a1081
        ;   XREF to: 00402ff0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawVLine_FUN_00402ff0(int x, int y1, int y2)
    ADD ESP,0xc                         ; 004a1086
    CALL engine_matrix.c_popViewport_FUN_0050e480 ; 004a1089
        ;   XREF to: 0050e480 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_popViewport_FUN_0050e480()
    CMP byte ptr [EBX + 0x38],0x0       ; 004a108e | DAT_02cf1d18
    JNZ 0x004a10cc                      ; 004a1092
        ;   XREF to: 004a10cc (CONDITIONAL_JUMP)  ; LAB_004a10cc
    MOV EAX,dword ptr [ESP]             ; 004a1094
    MOV [0x02d02570],EAX                ; 004a1097 | g_ActiveRenderColor
    ADD ESP,0x4                         ; 004a109c
        ;   Label: LAB_004a109c
    POP EBP                             ; 004a109f
    POP EDI                             ; 004a10a0
    POP ESI                             ; 004a10a1
    POP EBX                             ; 004a10a2
    RET                                 ; 004a10a3
    MOV ECX,0x622eae                    ; 004a10a4 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004a10a4
    MOV EBX,0x8d                        ; 004a10a9
    PUSH 0x622ec4                       ; 004a10ae | = "gEdFont must be set by the application."
    MOV dword ptr [0x02f0ca48],ECX      ; 004a10b3 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 004a10b9 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a10bf
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a10c4
    JMP 0x004a0f94                      ; 004a10c7
        ;   XREF to: 004a0f94 (UNCONDITIONAL_JUMP)  ; LAB_004a0f94
    MOV EAX,dword ptr [EBX + 0x4]       ; 004a10cc | DAT_02cf1ce4
        ;   Label: LAB_004a10cc
    MOV EBP,dword ptr [0x02d0255c]      ; 004a10cf | g_ClipTop
    MOV [0x02d0255c],EAX                ; 004a10d5 | g_ClipTop
    MOV EAX,[0x02cf266c]                ; 004a10da | g_FontCharacterWidth
    MOV EDX,EAX                         ; 004a10df
    SAR EDX,0x1f                        ; 004a10e1
    SUB EAX,EDX                         ; 004a10e4
    SAR EAX,0x1                         ; 004a10e6
    ADD EAX,dword ptr [EBX + 0x4]       ; 004a10e8 | DAT_02cf1ce4
    MOV EDX,dword ptr [0x02cf266c]      ; 004a10eb | g_FontCharacterWidth
    LEA ESI,[EAX + -0x1]                ; 004a10f1
    LEA EAX,[EDX*0x4 + 0x0]             ; 004a10f4
    ADD EDX,EAX                         ; 004a10fb
    MOV EAX,EDX                         ; 004a10fd
    SAR EDX,0x1f                        ; 004a10ff
    SHL EDX,0x2                         ; 004a1102
    SBB EAX,EDX                         ; 004a1105
    SAR EAX,0x2                         ; 004a1107
    MOV EDI,dword ptr [0x02cf2a88]      ; 004a110a | g_WindowFillColor
    ADD EAX,ESI                         ; 004a1110
    PUSH EDI                            ; 004a1112
    DEC EAX                             ; 004a1113
    PUSH EAX                            ; 004a1114
    MOV EAX,dword ptr [EBX + 0x8]       ; 004a1115 | DAT_02cf1ce8
    SUB EAX,0x2                         ; 004a1118
    PUSH EAX                            ; 004a111b
    MOV EAX,dword ptr [EBX]             ; 004a111c | g_WindowStack
    PUSH ESI                            ; 004a111e
    INC EAX                             ; 004a111f
    PUSH EAX                            ; 004a1120
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 004a1121
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004a1126
    PUSH 0xffff                         ; 004a1129
    CALL engine_3d.c_setRenderAlpha_FUN_00406d80 ; 004a112e
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
    ADD ESP,0x4                         ; 004a1133
    PUSH -0x1                           ; 004a1136
    MOV EAX,[0x02cf2a84]                ; 004a1138 | g_TitleBarColor
    PUSH EAX                            ; 004a113d
    MOV EAX,[0x02cf266c]                ; 004a113e | g_FontCharacterWidth
    MOV EDX,EAX                         ; 004a1143
    SAR EDX,0x1f                        ; 004a1145
    SUB EAX,EDX                         ; 004a1148
    SAR EAX,0x1                         ; 004a114a
    ADD EAX,dword ptr [EBX + 0x4]       ; 004a114c | DAT_02cf1ce4
    PUSH EAX                            ; 004a114f
    LEA ESI,[EBX + 0x38]                ; 004a1150
    MOV EDI,dword ptr [EBX]             ; 004a1153 | g_WindowStack
    PUSH ESI                            ; 004a1155
    MOV EAX,[0x02cf1cd0]                ; 004a1156 | g_EditorFont
    MOV ECX,dword ptr [EBX + 0x8]       ; 004a115b | DAT_02cf1ce8
    PUSH EAX                            ; 004a115e
    ADD EDI,ECX                         ; 004a115f
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 004a1161
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    MOV EDX,EDI                         ; 004a1166
    SUB EDX,EAX                         ; 004a1168
    MOV EAX,EDX                         ; 004a116a
    SAR EDX,0x1f                        ; 004a116c
    SUB EAX,EDX                         ; 004a116f
    SAR EAX,0x1                         ; 004a1171
    ADD ESP,0x8                         ; 004a1173
    PUSH EAX                            ; 004a1176
    PUSH ESI                            ; 004a1177
    MOV EDX,dword ptr [0x02cf1cd0]      ; 004a1178 | g_EditorFont
    PUSH EDX                            ; 004a117e
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004a117f
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004a1184
    PUSH ESI                            ; 004a1187
    MOV ECX,dword ptr [0x02cf1cd0]      ; 004a1188 | g_EditorFont
    PUSH ECX                            ; 004a118e
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_004cff40 ; 004a118f
        ;   XREF to: 004cff40 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextHeight_FUN_004cff40(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 004a1194
    PUSH 0x6234e0                       ; 004a1197 | = "j"
    MOV EDI,dword ptr [0x02cf1cd0]      ; 004a119c | g_EditorFont
    MOV ESI,dword ptr [0x02cf266c]      ; 004a11a2 | g_FontCharacterWidth
    PUSH EDI                            ; 004a11a8
    ADD ESI,EAX                         ; 004a11a9
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_004cff40 ; 004a11ab
        ;   XREF to: 004cff40 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextHeight_FUN_004cff40(CBitFont * this_ptr, char * text_string)
    ADD EAX,dword ptr [0x02cf266c]      ; 004a11b0 | g_FontCharacterWidth
    ADD ESP,0x8                         ; 004a11b6
    CMP ESI,EAX                         ; 004a11b9
    JGE 0x004a11bf                      ; 004a11bb
        ;   XREF to: 004a11bf (CONDITIONAL_JUMP)  ; LAB_004a11bf
    MOV ESI,EAX                         ; 004a11bd
    MOV EAX,[0x02cf2a7c]                ; 004a11bf | g_WindowBorderColor1
        ;   Label: LAB_004a11bf
    MOV [0x02d02570],EAX                ; 004a11c4 | g_ActiveRenderColor
    MOV EAX,dword ptr [EBX + 0x8]       ; 004a11c9 | DAT_02cf1ce8
    SUB EAX,0x2                         ; 004a11cc
    MOV ECX,dword ptr [EBX + 0x4]       ; 004a11cf | DAT_02cf1ce4
    PUSH EAX                            ; 004a11d2
    ADD ESI,ECX                         ; 004a11d3
    MOV EAX,dword ptr [EBX]             ; 004a11d5 | g_WindowStack
    PUSH ESI                            ; 004a11d7
    INC EAX                             ; 004a11d8
    PUSH EAX                            ; 004a11d9
    CALL engine_2d.c_drawHLine_FUN_00402ee0 ; 004a11da
        ;   XREF to: 00402ee0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402ee0(int x1, int y, int x2)
    MOV EAX,[0x02cf2a7c]                ; 004a11df | g_WindowBorderColor1
    MOV EDI,dword ptr [0x02cf2a80]      ; 004a11e4 | g_WindowBorderColor2
    ADD ESP,0xc                         ; 004a11ea
    CMP EAX,EDI                         ; 004a11ed
    JZ 0x004a120c                       ; 004a11ef
        ;   XREF to: 004a120c (CONDITIONAL_JUMP)  ; LAB_004a120c
    MOV EAX,dword ptr [EBX + 0x8]       ; 004a11f1 | DAT_02cf1ce8
    SUB EAX,0x2                         ; 004a11f4
    PUSH EAX                            ; 004a11f7
    DEC ESI                             ; 004a11f8
    MOV EAX,dword ptr [EBX]             ; 004a11f9 | g_WindowStack
    PUSH ESI                            ; 004a11fb
    INC EAX                             ; 004a11fc
    PUSH EAX                            ; 004a11fd
    MOV dword ptr [0x02d02570],EDI      ; 004a11fe | g_ActiveRenderColor
    CALL engine_2d.c_drawHLine_FUN_00402ee0 ; 004a1204
        ;   XREF to: 00402ee0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402ee0(int x1, int y, int x2)
    ADD ESP,0xc                         ; 004a1209
    MOV dword ptr [0x02d0255c],EBP      ; 004a120c | g_ClipTop
        ;   Label: LAB_004a120c
    MOV EAX,dword ptr [ESP]             ; 004a1212
    MOV [0x02d02570],EAX                ; 004a1215 | g_ActiveRenderColor
    ADD ESP,0x4                         ; 004a121a
    POP EBP                             ; 004a121d
    POP EDI                             ; 004a121e
    POP ESI                             ; 004a121f
    POP EBX                             ; 004a1220
    RET                                 ; 004a1221

