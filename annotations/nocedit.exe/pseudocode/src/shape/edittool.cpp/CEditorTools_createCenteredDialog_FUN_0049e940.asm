; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_createCenteredDialog_FUN_0049e940(CEditorTools *this_ptr,char *dialog_text)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   dialog_text
;
; XREF[4]:
;   core_skeledit.cpp_CDeformableModel_FUN_0058c190 at 0058d20f
;   core_skeledit.cpp_FUN_00589b10 at 00589b3f
;   core_texlist.cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0 at 005dc2f8
;   shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520 at 0051d7f1
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00622eae
;   TerminatedCString s_gEdFont_must_be_set_by_t_00622ec4
;   int g_WindowWidth = 0x140
;   CBitFont* g_EditorFont
;   int g_FontCharacterHeight
;   int g_FontCharacterWidth
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0049e940
        ;   Label: shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_0049e940
    PUSH EDI                            ; 0049e941
    CMP dword ptr [0x02cf1cd0],0x0      ; 0049e942 | g_EditorFont
    JZ 0x0049e99a                       ; 0049e949
        ;   XREF to: 0049e99a (CONDITIONAL_JUMP)  ; LAB_0049e99a
    MOV EAX,[0x02cf1cd0]                ; 0049e94b | g_EditorFont
        ;   Label: LAB_0049e94b
    PUSH 0x6a                           ; 0049e950
    MOV EDX,dword ptr [EAX + 0x3168]    ; 0049e952
    PUSH EAX                            ; 0049e958
    MOV dword ptr [0x02cf2668],EDX      ; 0049e959 | g_FontCharacterHeight
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 0049e95f
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0049e964
    MOV ECX,0x5                         ; 0049e967
    MOV EDX,dword ptr [0x00679394]      ; 0049e96c | g_WindowWidth
    PUSH 0x0                            ; 0049e972
    MOV ESI,dword ptr [ESP + 0x14]      ; 0049e974
    MOV [0x02cf266c],EAX                ; 0049e978 | g_FontCharacterWidth
    PUSH ESI                            ; 0049e97d
    SHL EDX,0x2                         ; 0049e97e
    PUSH EAX                            ; 0049e981
    MOV EAX,EDX                         ; 0049e982
    SAR EDX,0x1f                        ; 0049e984
    IDIV ECX                            ; 0049e987
    PUSH EAX                            ; 0049e989
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0049e98a
    PUSH EDI                            ; 0049e98e
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890 ; 0049e98f
        ;   XREF to: 004a0890 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    ADD ESP,0x14                        ; 0049e994
    POP EDI                             ; 0049e997
    POP ESI                             ; 0049e998
    RET                                 ; 0049e999
    PUSH EBX                            ; 0049e99a
        ;   Label: LAB_0049e99a
    MOV ECX,0x622eae                    ; 0049e99b | = "..\\shape\\edittool.cpp"
    MOV EBX,0x8d                        ; 0049e9a0
    PUSH 0x622ec4                       ; 0049e9a5 | = "gEdFont must be set by the application."
    MOV dword ptr [0x02f0ca48],ECX      ; 0049e9aa | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0049e9b0 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0049e9b6
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0049e9bb
    POP EBX                             ; 0049e9be
    JMP 0x0049e94b                      ; 0049e9bf
        ;   XREF to: 0049e94b (UNCONDITIONAL_JUMP)  ; LAB_0049e94b

