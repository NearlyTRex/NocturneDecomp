; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, int modal_flags)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   min_width
; int              Stack[0xc]:4   min_height
; char *           Stack[0x10]:4   text_content
; int              Stack[0x14]:4   modal_flags
;
; XREF[8]:
;   core_menu.cpp_adjustMouseSensitivity_FUN_005107c0 at 005107f8
;   shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_0049e940 at 0049e98f
;   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 at 004a04b4
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 at 0049fc00
;   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0 at 004a4a76
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130 at 0049e235
;   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0 at 0049ec1f
;   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 at 0049dbe5
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00622eae
;   TerminatedCString s_gEdFont_must_be_set_by_t_00622ec4
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   CBitFont* g_EditorFont
;   int g_FontCharacterHeight
;   int g_FontCharacterWidth
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
;   shape_edittool.cpp_CEditorTools_createModalWindow_FUN_004a0970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0890
        ;   Label: shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890
    PUSH ESI                            ; 004a0891
    PUSH EDI                            ; 004a0892
    PUSH EBP                            ; 004a0893
    MOV EDI,dword ptr [ESP + 0x18]      ; 004a0894
    MOV ESI,dword ptr [ESP + 0x20]      ; 004a0898
    CMP dword ptr [0x02cf1cd0],0x0      ; 004a089c | CBitFont * g_EditorFont
    JNZ 0x004a08c8                      ; 004a08a3 | LAB_004a08c8
        ;   XREF to: 004a08c8 (CONDITIONAL_JUMP)
    MOV ECX,0x622eae                    ; 004a08a5 | = "..\\shape\\edittool.cpp" | s_shape_edittool_cpp_00622eae = ..\shape\edittool.cpp
    MOV EBX,0x8d                        ; 004a08aa
    PUSH 0x622ec4                       ; 004a08af | = "gEdFont must be set by the application." | s_gEdFont_must_be_set_by_t_00622ec4 = gEdFont must be set by the application.
    MOV dword ptr [0x02f0ca48],ECX      ; 004a08b4 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 004a08ba | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a08c0 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004a08c5
    MOV EAX,[0x02cf1cd0]                ; 004a08c8 | CBitFont * g_EditorFont
        ;   Label: LAB_004a08c8
    PUSH 0x6a                           ; 004a08cd
    MOV EDX,dword ptr [EAX + 0x3168]    ; 004a08cf
    PUSH EAX                            ; 004a08d5
    MOV dword ptr [0x02cf2668],EDX      ; 004a08d6 | int g_FontCharacterHeight
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004a08dc | int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a08e1
    MOV [0x02cf266c],EAX                ; 004a08e4 | int g_FontCharacterWidth
    TEST ESI,ESI                        ; 004a08e9
    JNZ 0x004a0941                      ; 004a08eb | LAB_004a0941
        ;   XREF to: 004a0941 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x00679394]      ; 004a08ed | int g_WindowWidth
        ;   Label: LAB_004a08ed
    SUB EDX,EDI                         ; 004a08f3
    MOV EAX,EDX                         ; 004a08f5
    SAR EDX,0x1f                        ; 004a08f7
    SUB EAX,EDX                         ; 004a08fa
    SAR EAX,0x1                         ; 004a08fc
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004a08fe
    MOV EDX,dword ptr [0x00679398]      ; 004a0902 | int g_WindowHeight
    SUB EDX,EDI                         ; 004a0908
    MOV ECX,EAX                         ; 004a090a
    MOV EAX,EDX                         ; 004a090c
    SAR EDX,0x1f                        ; 004a090e
    SUB EAX,EDX                         ; 004a0911
    SAR EAX,0x1                         ; 004a0913
    MOV EBP,dword ptr [ESP + 0x24]      ; 004a0915
    PUSH EBP                            ; 004a0919
    MOV EBX,dword ptr [0x00679398]      ; 004a091a | int g_WindowHeight
    PUSH ESI                            ; 004a0920
    SUB EBX,EAX                         ; 004a0921
    MOV EDX,dword ptr [0x00679394]      ; 004a0923 | int g_WindowWidth
    PUSH EBX                            ; 004a0929
    SUB EDX,ECX                         ; 004a092a
    PUSH EDX                            ; 004a092c
    PUSH EAX                            ; 004a092d
    PUSH ECX                            ; 004a092e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004a092f
    PUSH EAX                            ; 004a0933
    CALL shape_edittool.cpp_CEditorTools_createModalWindow_FUN_004a0970 ; 004a0934 | void shape_edittool.cpp_CEditorTools_createModalWindow_FUN_004a0970(CEditorTools * this_ptr, int left, int top, int right, ...)
        ;   XREF to: 004a0970 (UNCONDITIONAL_CALL)
    ADD ESP,0x1c                        ; 004a0939
    POP EBP                             ; 004a093c
    POP EDI                             ; 004a093d
    POP ESI                             ; 004a093e
    POP EBX                             ; 004a093f
    RET                                 ; 004a0940
    MOV EAX,[0x02cf1cd0]                ; 004a0941 | CBitFont * g_EditorFont
        ;   Label: LAB_004a0941
    PUSH ESI                            ; 004a0946
    MOV EDX,dword ptr [EAX + 0x25e8]    ; 004a0947
    PUSH EAX                            ; 004a094d
    LEA EBX,[EDX + EDX*0x1]             ; 004a094e
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 004a0951 | int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
    ADD EAX,EBX                         ; 004a0956
    ADD ESP,0x8                         ; 004a0958
    CMP EDI,EAX                         ; 004a095b
    JGE 0x004a08ed                      ; 004a095d | LAB_004a08ed
        ;   XREF to: 004a08ed (CONDITIONAL_JUMP)
    MOV EDI,EAX                         ; 004a095f
    JMP 0x004a08ed                      ; 004a0961 | LAB_004a08ed
        ;   XREF to: 004a08ed (UNCONDITIONAL_JUMP)

