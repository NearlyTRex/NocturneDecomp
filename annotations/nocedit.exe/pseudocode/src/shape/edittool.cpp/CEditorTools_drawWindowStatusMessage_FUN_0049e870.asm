; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_edittool_cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870 (CEditorTools *this_ptr,char *format_string,...)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   format_string
; Local Variables:
; va_list_t        Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_skeledit.cpp_FUN_00589b10 at 00589b53
;   core_skeledit.cpp_FUN_0058c190 at 0058d223
;   core_texlist.cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0 at 005dc3d5
;   shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520 at 0051d805
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00622eae
;   TerminatedCString s_gEdFont_must_be_set_by_t_00622ec4
;   char[2048] g_ConfirmationMessageBuffer
;   CBitFont* g_EditorFont
;   int g_FontCharacterHeight
;   int g_FontCharacterWidth
;   int g_WindowStatusTextColor
;   int g_ClipLeft
;   int g_ClipTop
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c__vsprintf_FUN_005fdba8
;   engine_3d.c_setRenderAlpha_FUN_00406d80
;   engine_font.cpp_CBitFont_drawText_FUN_004cda80
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
;   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049e870
        ;   Label: shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870
    PUSH ESI                            ; 0049e871
    PUSH EDI                            ; 0049e872
    PUSH EBP                            ; 0049e873
    SUB ESP,0x4                         ; 0049e874
    CMP dword ptr [0x02cf1cd0],0x0      ; 0049e877 | g_EditorFont
    JZ 0x0049e918                       ; 0049e87e
        ;   XREF to: 0049e918 (CONDITIONAL_JUMP)  ; LAB_0049e918
    MOV EAX,[0x02cf1cd0]                ; 0049e884 | g_EditorFont
        ;   Label: LAB_0049e884
    PUSH 0x6a                           ; 0049e889
    MOV EDX,dword ptr [EAX + 0x3168]    ; 0049e88b
    PUSH EAX                            ; 0049e891
    MOV dword ptr [0x02cf2668],EDX      ; 0049e892 | g_FontCharacterHeight
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 0049e898
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0049e89d
    MOV [0x02cf266c],EAX                ; 0049e8a0 | g_FontCharacterWidth
    LEA EAX,[ESP + 0x20]                ; 0049e8a5
    MOV dword ptr [ESP],EAX             ; 0049e8a9
    MOV EAX,ESP                         ; 0049e8ac
    PUSH EAX                            ; 0049e8ae
    MOV ESI,dword ptr [ESP + 0x20]      ; 0049e8af
    PUSH ESI                            ; 0049e8b3
    PUSH 0x2cefd30                      ; 0049e8b4 | g_ConfirmationMessageBuffer
    CALL crt_stdio.c__vsprintf_FUN_005fdba8 ; 0049e8b9
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 0049e8be
    MOV EBP,dword ptr [ESP + 0x18]      ; 0049e8c1
    XOR EDI,EDI                         ; 0049e8c5
    PUSH EBP                            ; 0049e8c7
    MOV dword ptr [ESP + 0x4],EDI       ; 0049e8c8
    CALL shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80 ; 0049e8cc
        ;   XREF to: 004a0f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0049e8d1
    PUSH 0xffff                         ; 0049e8d4
    CALL engine_3d.c_setRenderAlpha_FUN_00406d80 ; 0049e8d9
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
    ADD ESP,0x4                         ; 0049e8de
    PUSH -0x1                           ; 0049e8e1
    MOV EAX,[0x02cf2aa8]                ; 0049e8e3 | g_WindowStatusTextColor
    PUSH EAX                            ; 0049e8e8
    MOV EDX,dword ptr [0x02d0255c]      ; 0049e8e9 | g_ClipTop
    PUSH EDX                            ; 0049e8ef
    MOV ECX,dword ptr [0x02d02558]      ; 0049e8f0 | g_ClipLeft
    PUSH ECX                            ; 0049e8f6
    PUSH 0x2cefd30                      ; 0049e8f7 | g_ConfirmationMessageBuffer
    MOV EBX,dword ptr [0x02cf1cd0]      ; 0049e8fc | g_EditorFont
    PUSH EBX                            ; 0049e902
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 0049e903
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 0049e908
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0049e90b
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    ADD ESP,0x4                         ; 0049e910
    POP EBP                             ; 0049e913
    POP EDI                             ; 0049e914
    POP ESI                             ; 0049e915
    POP EBX                             ; 0049e916
    RET                                 ; 0049e917
    MOV ECX,0x622eae                    ; 0049e918 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0049e918
    MOV EBX,0x8d                        ; 0049e91d
    PUSH 0x622ec4                       ; 0049e922 | = "gEdFont must be set by the application."
    MOV dword ptr [0x02f0ca48],ECX      ; 0049e927 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0049e92d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0049e933
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0049e938
    JMP 0x0049e884                      ; 0049e93b
        ;   XREF to: 0049e884 (UNCONDITIONAL_JUMP)  ; LAB_0049e884

