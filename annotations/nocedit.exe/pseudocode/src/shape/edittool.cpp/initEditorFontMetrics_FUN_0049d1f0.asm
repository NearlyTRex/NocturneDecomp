; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_initEditorFontMetrics_FUN_0049d1f0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00622eae
;   TerminatedCString s_gEdFont_must_be_set_by_t_00622ec4
;   CBitFont* g_EditorFont
;   int g_FontCharacterHeight
;   int g_FontCharacterWidth
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02cf1cd0],0x0      ; 0049d1f0 | CBitFont * g_EditorFont
        ;   Label: shape_edittool.cpp_initEditorFontMetrics_FUN_0049d1f0
    JZ 0x0049d21b                       ; 0049d1f7 | LAB_0049d21b
        ;   XREF to: 0049d21b (CONDITIONAL_JUMP)
    MOV EAX,[0x02cf1cd0]                ; 0049d1f9 | CBitFont * g_EditorFont
        ;   Label: LAB_0049d1f9
    PUSH 0x6a                           ; 0049d1fe
    MOV EDX,dword ptr [EAX + 0x3168]    ; 0049d200
    PUSH EAX                            ; 0049d206
    MOV dword ptr [0x02cf2668],EDX      ; 0049d207 | int g_FontCharacterHeight
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 0049d20d | int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0049d212
    MOV [0x02cf266c],EAX                ; 0049d215 | int g_FontCharacterWidth
    RET                                 ; 0049d21a
    PUSH EBX                            ; 0049d21b
        ;   Label: LAB_0049d21b
    MOV ECX,0x622eae                    ; 0049d21c | = "..\\shape\\edittool.cpp" | s_shape_edittool_cpp_00622eae = ..\shape\edittool.cpp
    MOV EBX,0x8d                        ; 0049d221
    PUSH 0x622ec4                       ; 0049d226 | = "gEdFont must be set by the application." | s_gEdFont_must_be_set_by_t_00622ec4 = gEdFont must be set by the application.
    MOV dword ptr [0x02f0ca48],ECX      ; 0049d22b | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0049d231 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0049d237 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0049d23c
    POP EBX                             ; 0049d23f
    JMP 0x0049d1f9                      ; 0049d240 | LAB_0049d1f9
        ;   XREF to: 0049d1f9 (UNCONDITIONAL_JUMP)

