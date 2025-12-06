; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CEditorTools_drawWindowSeparator_FUN_004a1230(CEditorTools * editor_tools, int line_position)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   editor_tools
; int              Stack[0x8]:4   line_position
;
; XREF[3]:
;   shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40 at 004a4d62
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130 at 0049e316
;   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 at 0049dced
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_006234e2
;   TerminatedCString s_CEditorTools_paintWindow_006234f8
;   int g_WindowHeight = 0xc8
;   int g_WindowStackCount
;   SWindow[5] g_WindowStack
;   undefined4 DAT_02cf1ce4
;   undefined4 DAT_02cf1ce8
;   undefined4 DAT_02cf1cec
;   int g_WindowBorderColor1
;   int g_WindowBorderColor2
;   int g_ClipTop
;   int g_ActiveRenderColor
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_2d.c_drawHLine_FUN_00402ee0
;   shape_edittool.cpp_calculateButtonHeight_FUN_004a6970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1230
        ;   Label: shape_edittool.cpp_CEditorTools_drawWindowSeparator_FUN_004a1230
    PUSH ESI                            ; 004a1231
    PUSH EDI                            ; 004a1232
    PUSH EBP                            ; 004a1233
    CMP dword ptr [0x02cf1cdc],0x1      ; 004a1234 | int g_WindowStackCount
    JGE 0x004a1260                      ; 004a123b | LAB_004a1260
        ;   XREF to: 004a1260 (CONDITIONAL_JUMP)
    MOV ECX,0x6234e2                    ; 004a123d | = "..\\shape\\edittool.cpp" | s_shape_edittool_cpp_006234e2 = ..\shape\edittool.cpp
    MOV EBX,0x8c6                       ; 004a1242
    PUSH 0x6234f8                       ; 004a1247 | = "CEditorTools::paintWindow() called bu..." | s_CEditorTools_paintWindow_006234f8 = CEditorTools::paintWindow() called but no window was opened!
    MOV dword ptr [0x02f0ca48],ECX      ; 004a124c | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 004a1252 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a1258 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004a125d
    MOV EBX,dword ptr [0x02cf1cdc]      ; 004a1260 | int g_WindowStackCount
        ;   Label: LAB_004a1260
    DEC EBX                             ; 004a1266
    MOV EAX,EBX                         ; 004a1267
    SHL EAX,0x4                         ; 004a1269
    SUB EAX,EBX                         ; 004a126c
    SHL EAX,0x2                         ; 004a126e
    ADD EAX,EBX                         ; 004a1271
    MOV EBX,0x2cf1ce0                   ; 004a1273 | SWindow[5] g_WindowStack
    SHL EAX,0x3                         ; 004a1278
    ADD EBX,EAX                         ; 004a127b
    MOV EAX,dword ptr [EBX + 0x4]       ; 004a127d | DAT_02cf1ce4
    MOV EDI,dword ptr [0x02d0255c]      ; 004a1280 | int g_ClipTop
    MOV [0x02d0255c],EAX                ; 004a1286 | int g_ClipTop
    MOV EAX,[0x00679398]                ; 004a128b | int g_WindowHeight
    MOV EDX,EAX                         ; 004a1290
    MOV ESI,0x60                        ; 004a1292
    SAR EDX,0x1f                        ; 004a1297
    IDIV ESI                            ; 004a129a
    PUSH 0x0                            ; 004a129c
    MOV EBP,dword ptr [0x02d02570]      ; 004a129e | int g_ActiveRenderColor
    MOV ESI,EAX                         ; 004a12a4
    CALL shape_edittool.cpp_calculateButtonHeight_FUN_004a6970 ; 004a12a6 | int shape_edittool.cpp_calculateButtonHeight_FUN_004a6970(char * button_text)
        ;   XREF to: 004a6970 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004a12ab
    MOV EDX,dword ptr [ESP + 0x18]      ; 004a12ae
    IMUL EDX,EAX                        ; 004a12b2
    MOV EAX,dword ptr [ESP + 0x18]      ; 004a12b5
    INC EAX                             ; 004a12b9
    IMUL EAX,ESI                        ; 004a12ba
    MOV ESI,dword ptr [EBX + 0xc]       ; 004a12bd | DAT_02cf1cec
    ADD EAX,EDX                         ; 004a12c0
    SUB ESI,EAX                         ; 004a12c2
    MOV EAX,[0x02cf2a7c]                ; 004a12c4 | int g_WindowBorderColor1
    MOV [0x02d02570],EAX                ; 004a12c9 | int g_ActiveRenderColor
    MOV EAX,dword ptr [EBX + 0x8]       ; 004a12ce | DAT_02cf1ce8
    SUB EAX,0x2                         ; 004a12d1
    PUSH EAX                            ; 004a12d4
    MOV EAX,dword ptr [EBX]             ; 004a12d5 | SWindow[5] g_WindowStack
    PUSH ESI                            ; 004a12d7
    INC EAX                             ; 004a12d8
    PUSH EAX                            ; 004a12d9
    CALL engine_2d.c_drawHLine_FUN_00402ee0 ; 004a12da | void engine_2d.c_drawHLine_FUN_00402ee0(int x1, int y, int x2)
        ;   XREF to: 00402ee0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02cf2a7c]                ; 004a12df | int g_WindowBorderColor1
    MOV EDX,dword ptr [0x02cf2a80]      ; 004a12e4 | int g_WindowBorderColor2
    ADD ESP,0xc                         ; 004a12ea
    CMP EAX,EDX                         ; 004a12ed
    JNZ 0x004a1302                      ; 004a12ef | LAB_004a1302
        ;   XREF to: 004a1302 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d02570],EBP      ; 004a12f1 | int g_ActiveRenderColor
    MOV dword ptr [0x02d0255c],EDI      ; 004a12f7 | int g_ClipTop
    POP EBP                             ; 004a12fd
    POP EDI                             ; 004a12fe
    POP ESI                             ; 004a12ff
    POP EBX                             ; 004a1300
    RET                                 ; 004a1301
    MOV EAX,dword ptr [EBX + 0x8]       ; 004a1302 | DAT_02cf1ce8
        ;   Label: LAB_004a1302
    SUB EAX,0x2                         ; 004a1305
    PUSH EAX                            ; 004a1308
    DEC ESI                             ; 004a1309
    MOV EAX,dword ptr [EBX]             ; 004a130a | SWindow[5] g_WindowStack
    PUSH ESI                            ; 004a130c
    INC EAX                             ; 004a130d
    PUSH EAX                            ; 004a130e
    MOV dword ptr [0x02d02570],EDX      ; 004a130f | int g_ActiveRenderColor
    CALL engine_2d.c_drawHLine_FUN_00402ee0 ; 004a1315 | void engine_2d.c_drawHLine_FUN_00402ee0(int x1, int y, int x2)
        ;   XREF to: 00402ee0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004a131a
    MOV dword ptr [0x02d02570],EBP      ; 004a131d | int g_ActiveRenderColor
    MOV dword ptr [0x02d0255c],EDI      ; 004a1323 | int g_ClipTop
    POP EBP                             ; 004a1329
    POP EDI                             ; 004a132a
    POP ESI                             ; 004a132b
    POP EBX                             ; 004a132c
    RET                                 ; 004a132d

