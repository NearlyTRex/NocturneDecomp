; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_calculateButtonHeight_FUN_004a6970(char *button_text)
;
; Parameters:
; char *           Stack[0x4]:4   button_text
;
; XREF[7]:
;   shape_edittool.cpp_CEdButton_calculateAndSetBounds_FUN_004a6550 at 004a6558
;   shape_edittool.cpp_CEditorTools_drawWindowSeparator_FUN_004a1230 at 004a12a6
;   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0 at 004a49f8
;   shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40 at 004a4e3c
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130 at 0049e198
;   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0 at 0049ebe2
;   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 at 0049dba9
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00622eae
;   TerminatedCString s_gEdFont_must_be_set_by_t_00622ec4
;   int g_WindowHeight = 0xc8
;   CBitFont* g_EditorFont
;   int g_FontCharacterHeight
;   int g_FontCharacterWidth
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004d01d0
;   engine_font.cpp_CBitFont_getTextHeight_FUN_004cff40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6970
        ;   Label: shape_edittool.cpp_calculateButtonHeight_FUN_004a6970
    PUSH EDI                            ; 004a6971
    MOV EBX,dword ptr [ESP + 0xc]       ; 004a6972
    CMP dword ptr [0x02cf1cd0],0x0      ; 004a6976 | g_EditorFont
    JNZ 0x004a69a4                      ; 004a697d
        ;   XREF to: 004a69a4 (CONDITIONAL_JUMP)  ; LAB_004a69a4
    PUSH ESI                            ; 004a697f
    MOV ECX,0x622eae                    ; 004a6980 | = "..\\shape\\edittool.cpp"
    MOV ESI,0x8d                        ; 004a6985
    PUSH 0x622ec4                       ; 004a698a | = "gEdFont must be set by the application."
    MOV dword ptr [0x02f0ca48],ECX      ; 004a698f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 004a6995 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a699b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a69a0
    POP ESI                             ; 004a69a3
    MOV EAX,[0x02cf1cd0]                ; 004a69a4 | g_EditorFont
        ;   Label: LAB_004a69a4
    PUSH 0x6a                           ; 004a69a9
    MOV ECX,dword ptr [EAX + 0x3168]    ; 004a69ab
    PUSH EAX                            ; 004a69b1
    MOV dword ptr [0x02cf2668],ECX      ; 004a69b2 | g_FontCharacterHeight
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004d01d0 ; 004a69b8
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004a69bd
    MOV [0x02cf266c],EAX                ; 004a69c0 | g_FontCharacterWidth
    TEST EBX,EBX                        ; 004a69c5
    JNZ 0x004a69eb                      ; 004a69c7
        ;   XREF to: 004a69eb (CONDITIONAL_JUMP)  ; LAB_004a69eb
    MOV ECX,dword ptr [0x02cf1cd0]      ; 004a69c9 | g_EditorFont
    MOV ECX,dword ptr [ECX + 0x316c]    ; 004a69cf
    MOV EAX,[0x00679398]                ; 004a69d5 | g_WindowHeight
        ;   Label: LAB_004a69d5
    MOV EDX,EAX                         ; 004a69da
    MOV EBX,0x50                        ; 004a69dc
    SAR EDX,0x1f                        ; 004a69e1
    IDIV EBX                            ; 004a69e4
    ADD EAX,ECX                         ; 004a69e6
    POP EDI                             ; 004a69e8
    POP EBX                             ; 004a69e9
    RET                                 ; 004a69ea
    PUSH EBX                            ; 004a69eb
        ;   Label: LAB_004a69eb
    MOV EDI,dword ptr [0x02cf1cd0]      ; 004a69ec | g_EditorFont
    PUSH EDI                            ; 004a69f2
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_004cff40 ; 004a69f3
        ;   XREF to: 004cff40 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextHeight_FUN_004cff40(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 004a69f8
    MOV ECX,EAX                         ; 004a69fb
    JMP 0x004a69d5                      ; 004a69fd
        ;   XREF to: 004a69d5 (UNCONDITIONAL_JUMP)  ; LAB_004a69d5

