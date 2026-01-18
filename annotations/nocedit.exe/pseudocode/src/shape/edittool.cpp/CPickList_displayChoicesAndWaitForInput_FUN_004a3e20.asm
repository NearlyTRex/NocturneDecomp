; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   dialog_title
; int              Stack[0xc]:4   config_param1
; int              Stack[0x10]:4   config_param2
;
; XREF[75]:
;   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 at 0040f4e3
;   core_bodypart.cpp_CBodyPart_initializeInEditor_FUN_0041b280 at 0041b3e5
;   core_boxactor.cpp_FUN_00423110 at 004231cf
;   core_charactr.cpp_CCharacter_FUN_0042f3e0 at 0042f4f5
;   core_cloth.cpp_FUN_0043c430 at 0043c4bc
;   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 at 0047961d
;   core_frankgen.cpp_FUN_004d2770 at 004d2827
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db4cc
;   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 at 004e2784
;   core_menu.cpp_configureCustomKeyBindings_FUN_005138e0 at 00514783
;   ... and 65 more
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00622eae
;   TerminatedCString s_gEdFont_must_be_set_by_t_00622ec4
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   int g_InputKeyMask = 0x7f
;   CBitFont* g_EditorFont
;   CEditorTools g_CEditorToolsInstance
;   int g_FontCharacterHeight
;   int g_FontCharacterWidth
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
;   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
;   shape_edittool.cpp_CPickList_handleDialogInput_FUN_004a4340
;   shape_edittool.cpp_CPickList_initializeDialog_FUN_004a3ef0
;   shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3e20
        ;   Label: shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
    PUSH ESI                            ; 004a3e21
    PUSH EDI                            ; 004a3e22
    PUSH EBP                            ; 004a3e23
    MOV ESI,dword ptr [ESP + 0x14]      ; 004a3e24
    CMP dword ptr [0x02cf1cd0],0x0      ; 004a3e28 | g_EditorFont
    JNZ 0x004a3e54                      ; 004a3e2f
        ;   XREF to: 004a3e54 (CONDITIONAL_JUMP)  ; LAB_004a3e54
    MOV ECX,0x622eae                    ; 004a3e31 | = "..\\shape\\edittool.cpp"
    MOV EBX,0x8d                        ; 004a3e36
    PUSH 0x622ec4                       ; 004a3e3b | = "gEdFont must be set by the application."
    MOV dword ptr [0x02f0ca48],ECX      ; 004a3e40 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 004a3e46 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a3e4c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a3e51
    MOV EAX,[0x02cf1cd0]                ; 004a3e54 | g_EditorFont
        ;   Label: LAB_004a3e54
    PUSH 0x6a                           ; 004a3e59
    MOV EBX,dword ptr [EAX + 0x3168]    ; 004a3e5b
    PUSH EAX                            ; 004a3e61
    MOV dword ptr [0x02cf2668],EBX      ; 004a3e62 | g_FontCharacterHeight
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004a3e68
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004a3e6d
    MOV EDI,dword ptr [ESI]             ; 004a3e70
    MOV [0x02cf266c],EAX                ; 004a3e72 | g_FontCharacterWidth
    CMP EDI,0x1                         ; 004a3e77
    JL 0x004a3ee4                       ; 004a3e7a
        ;   XREF to: 004a3ee4 (CONDITIONAL_JUMP)  ; LAB_004a3ee4
    MOV EAX,dword ptr [ESP + 0x20]      ; 004a3e7c
    PUSH EAX                            ; 004a3e80
    MOV EDX,dword ptr [ESP + 0x20]      ; 004a3e81
    PUSH EDX                            ; 004a3e85
    MOV ECX,dword ptr [ESP + 0x20]      ; 004a3e86
    PUSH ECX                            ; 004a3e8a
    MOV EBP,0x7f                        ; 004a3e8b
    PUSH ESI                            ; 004a3e90
    MOV EDI,dword ptr [0x006793a8]      ; 004a3e91 | g_InputKeyMask
    MOV dword ptr [0x006793a8],EBP      ; 004a3e97 | g_InputKeyMask
    CALL shape_edittool.cpp_CPickList_initializeDialog_FUN_004a3ef0 ; 004a3e9d
        ;   XREF to: 004a3ef0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_initializeDialog_FUN_004a3ef0(CPickList * this_ptr, char * dialog_title, int initial_selected_index, int config_parameter)
    ADD ESP,0x10                        ; 004a3ea2
    PUSH ESI                            ; 004a3ea5
        ;   Label: LAB_004a3ea5
    CALL shape_edittool.cpp_CPickList_handleDialogInput_FUN_004a4340 ; 004a3ea6
        ;   XREF to: 004a4340 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_handleDialogInput_FUN_004a4340(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004a3eab
    PUSH ESI                            ; 004a3eae
    MOV EBX,EAX                         ; 004a3eaf
    CALL shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40 ; 004a3eb1
        ;   XREF to: 004a4d40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004a3eb6
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004a3eb9
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CMP EBX,-0x2                        ; 004a3ebe
    JZ 0x004a3ea5                       ; 004a3ec1
        ;   XREF to: 004a3ea5 (CONDITIONAL_JUMP)  ; LAB_004a3ea5
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004a3ec3
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV ESI,dword ptr [0x00678a60]      ; 004a3ec8 | g_CEditorToolsPtr
    PUSH ESI                            ; 004a3ece | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 004a3ecf
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 004a3ed4
    MOV dword ptr [0x006793a8],EDI      ; 004a3ed7 | g_InputKeyMask
    MOV EAX,EBX                         ; 004a3edd
    POP EBP                             ; 004a3edf
    POP EDI                             ; 004a3ee0
    POP ESI                             ; 004a3ee1
    POP EBX                             ; 004a3ee2
    RET                                 ; 004a3ee3
    MOV EAX,0xffffffff                  ; 004a3ee4
        ;   Label: LAB_004a3ee4
    POP EBP                             ; 004a3ee9
    POP EDI                             ; 004a3eea
    POP ESI                             ; 004a3eeb
    POP EBX                             ; 004a3eec
    RET                                 ; 004a3eed

