; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0(char *button_text)
;
; Parameters:
; char *           Stack[0x4]:4   button_text
;
; XREF[5]:
;   shape_edittool.cpp_CEdButton_calculateAndSetBounds_FUN_004a6550 at 004a6567
;   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0 at 004a49c0
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130 at 0049e242
;   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0 at 0049eb69
;   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 at 0049dbf2
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00622eae
;   TerminatedCString s_gEdFont_must_be_set_by_t_00622ec4
;   char g_DefaultButtonText = \x00
;   int g_WindowWidth = 0x140
;   CBitFont* g_EditorFont
;   int g_FontCharacterHeight
;   int g_FontCharacterWidth
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004d01d0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a68e0
        ;   Label: shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0
    PUSH EDI                            ; 004a68e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004a68e2
    CMP dword ptr [0x02cf1cd0],0x0      ; 004a68e6 | g_EditorFont
    JNZ 0x004a6914                      ; 004a68ed
        ;   XREF to: 004a6914 (CONDITIONAL_JUMP)  ; LAB_004a6914
    PUSH ESI                            ; 004a68ef
    MOV ECX,0x622eae                    ; 004a68f0 | = "..\\shape\\edittool.cpp"
    MOV ESI,0x8d                        ; 004a68f5
    PUSH 0x622ec4                       ; 004a68fa | = "gEdFont must be set by the application."
    MOV dword ptr [0x02f0ca48],ECX      ; 004a68ff | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 004a6905 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a690b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a6910
    POP ESI                             ; 004a6913
    MOV EAX,[0x02cf1cd0]                ; 004a6914 | g_EditorFont
        ;   Label: LAB_004a6914
    PUSH 0x6a                           ; 004a6919
    MOV ECX,dword ptr [EAX + 0x3168]    ; 004a691b
    PUSH EAX                            ; 004a6921
    MOV dword ptr [0x02cf2668],ECX      ; 004a6922 | g_FontCharacterHeight
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004d01d0 ; 004a6928
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004a692d
    MOV [0x02cf266c],EAX                ; 004a6930 | g_FontCharacterWidth
    TEST EBX,EBX                        ; 004a6935
    JNZ 0x004a693e                      ; 004a6937
        ;   XREF to: 004a693e (CONDITIONAL_JUMP)  ; LAB_004a693e
    MOV EBX,0x623fa0                    ; 004a6939 | g_DefaultButtonText
    PUSH EBX                            ; 004a693e | g_DefaultButtonText
        ;   Label: LAB_004a693e
    MOV EDI,dword ptr [0x02cf1cd0]      ; 004a693f | g_EditorFont
    PUSH EDI                            ; 004a6945
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 004a6946
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    MOV ECX,EAX                         ; 004a694b
    MOV EAX,[0x00679394]                ; 004a694d | g_WindowWidth
    MOV EDX,EAX                         ; 004a6952
    MOV EBX,0x28                        ; 004a6954
    SAR EDX,0x1f                        ; 004a6959
    IDIV EBX                            ; 004a695c
    ADD ESP,0x8                         ; 004a695e
    ADD EAX,ECX                         ; 004a6961
    POP EDI                             ; 004a6963
    POP EBX                             ; 004a6964
    RET                                 ; 004a6965

