; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools *this_ptr,char *format,...)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   format
; Local Variables:
; va_list_t        Stack[-0x14]:4  local_14
;
; XREF[63]:
;   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 at 004798e1
;   core_dmodel.cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30 at 0047aa42
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047e448
;   core_dmodel.cpp_copyFile_FUN_0047c930 at 0047c9c1
;   core_fileman.cpp_CDemonFileManager_addClothFileToExtractList_FUN_004be150 at 004be164
;   core_fileman.cpp_CDemonFileManager_addDeformableModelToExtractList_FUN_004be070 at 004be084
;   core_fileman.cpp_CDemonFileManager_addKeyframeModelToExtractList_FUN_004be230 at 004be243
;   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 at 004bddac
;   core_fileman.cpp_preprocessMusicFiles_FUN_004bd750 at 004bd8bc
;   core_menu.cpp_configureCustomKeyBindings_FUN_005138e0 at 00514a64
;   ... and 53 more
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00622eae
;   TerminatedCString s_gEdFont_must_be_set_by_t_00622ec4
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   char[1024] g_StatusMessageBuffer
;   CBitFont* g_EditorFont
;   int g_FontCharacterHeight
;   int g_FontCharacterWidth
;   int g_StatusTextColor
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_vsprintf_FUN_005fdba8
;   engine_3d.c_setRenderAlpha_FUN_00406d80
;   engine_font.cpp_CBitFont_drawTextCenter_FUN_004cdde0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004d01d0
;   engine_special.cpp_clearScreen_FUN_005b3e70
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049e790
        ;   Label: shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
    PUSH ESI                            ; 0049e791
    PUSH EDI                            ; 0049e792
    PUSH EBP                            ; 0049e793
    SUB ESP,0x4                         ; 0049e794
    CMP dword ptr [0x02cf1cd0],0x0      ; 0049e797 | g_EditorFont
    JZ 0x0049e83f                       ; 0049e79e
        ;   XREF to: 0049e83f (CONDITIONAL_JUMP)  ; LAB_0049e83f
    MOV EAX,[0x02cf1cd0]                ; 0049e7a4 | g_EditorFont
        ;   Label: LAB_0049e7a4
    PUSH 0x6a                           ; 0049e7a9
    MOV EDX,dword ptr [EAX + 0x3168]    ; 0049e7ab
    PUSH EAX                            ; 0049e7b1
    MOV dword ptr [0x02cf2668],EDX      ; 0049e7b2 | g_FontCharacterHeight
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004d01d0 ; 0049e7b8
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0049e7bd
    MOV [0x02cf266c],EAX                ; 0049e7c0 | g_FontCharacterWidth
    LEA EAX,[ESP + 0x20]                ; 0049e7c5
    MOV dword ptr [ESP],EAX             ; 0049e7c9
    MOV EAX,ESP                         ; 0049e7cc
    PUSH EAX                            ; 0049e7ce
    MOV ESI,dword ptr [ESP + 0x20]      ; 0049e7cf
    PUSH ESI                            ; 0049e7d3
    PUSH 0x2cef930                      ; 0049e7d4 | g_StatusMessageBuffer
    XOR EDI,EDI                         ; 0049e7d9
    CALL crt_stdio.c_vsprintf_FUN_005fdba8 ; 0049e7db
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 0049e7e0
    MOV dword ptr [ESP],EDI             ; 0049e7e3
    CALL engine_special.cpp_clearScreen_FUN_005b3e70 ; 0049e7e6
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_005b3e70()
    PUSH 0xffff                         ; 0049e7eb
    CALL engine_3d.c_setRenderAlpha_FUN_00406d80 ; 0049e7f0
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
    MOV EAX,[0x00679398]                ; 0049e7f5 | g_WindowHeight
    MOV EDX,EAX                         ; 0049e7fa
    SAR EDX,0x1f                        ; 0049e7fc
    SUB EAX,EDX                         ; 0049e7ff
    SAR EAX,0x1                         ; 0049e801
    ADD ESP,0x4                         ; 0049e803
    PUSH 0x2cef930                      ; 0049e806 | g_StatusMessageBuffer
    PUSH -0x1                           ; 0049e80b
    MOV EBP,dword ptr [0x02cf2aa4]      ; 0049e80d | g_StatusTextColor
    PUSH EBP                            ; 0049e813
    PUSH EAX                            ; 0049e814
    MOV EAX,[0x00679394]                ; 0049e815 | g_WindowWidth
    MOV EDX,EAX                         ; 0049e81a
    SAR EDX,0x1f                        ; 0049e81c
    SUB EAX,EDX                         ; 0049e81f
    SAR EAX,0x1                         ; 0049e821
    PUSH EAX                            ; 0049e823
    MOV EAX,[0x02cf1cd0]                ; 0049e824 | g_EditorFont
    PUSH EAX                            ; 0049e829
    CALL engine_font.cpp_CBitFont_drawTextCenter_FUN_004cdde0 ; 0049e82a
        ;   XREF to: 004cdde0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenter_FUN_004cdde0(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x18                        ; 0049e82f
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0049e832
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    ADD ESP,0x4                         ; 0049e837
    POP EBP                             ; 0049e83a
    POP EDI                             ; 0049e83b
    POP ESI                             ; 0049e83c
    POP EBX                             ; 0049e83d
    RET                                 ; 0049e83e
    MOV ECX,0x622eae                    ; 0049e83f | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0049e83f
    MOV EBX,0x8d                        ; 0049e844
    PUSH 0x622ec4                       ; 0049e849 | = "gEdFont must be set by the application."
    MOV dword ptr [0x02f0ca48],ECX      ; 0049e84e | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0049e854 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0049e85a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0049e85f
    JMP 0x0049e7a4                      ; 0049e862
        ;   XREF to: 0049e7a4 (UNCONDITIONAL_JUMP)  ; LAB_0049e7a4

