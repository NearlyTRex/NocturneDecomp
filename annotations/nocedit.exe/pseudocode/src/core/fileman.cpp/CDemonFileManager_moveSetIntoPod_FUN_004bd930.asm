; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fileman.cpp_CDemonFileManager_moveSetIntoPod_FUN_004bd930(CDemonFileManager * this_ptr)
;
; Parameters:
; CDemonFileManager * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x104]:1  local_104
;
; XREF[1]:
;   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 at 004be451
;
; Referenced Globals:
;   TerminatedCString s_set_006295a2
;   TerminatedCString s_models_006295a8
;   TerminatedCString s_Select_set_to_build_pod_006295af
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsPtr
;
; Called Functions:
;   core_fileman.cpp_CDemonFileManager_addSetToExtractList_FUN_004bd8e0
;   engine_fileio.cpp_CFileManager_closeExtractFile_FUN_004b7c60
;   engine_fileio.cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10
;   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50
;   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bd930
        ;   Label: core_fileman.cpp_CDemonFileManager_moveSetIntoPod_FUN_004bd930
    SUB ESP,0x100                       ; 004bd931
    MOV EBX,dword ptr [ESP + 0x108]     ; 004bd937
    PUSH 0x0                            ; 004bd93e
    LEA EAX,[ESP + 0x4]                 ; 004bd940
    PUSH EAX                            ; 004bd944
    PUSH 0x6295a2                       ; 004bd945 | = "*.set" | s_set_006295a2 = *.set
    PUSH 0x6295a8                       ; 004bd94a | = "models" | s_models_006295a8 = models
    PUSH 0x6295af                       ; 004bd94f | = "Select set to build pod." | s_Select_set_to_build_pod_006295af = Select set to build pod.
    MOV EDX,dword ptr [0x00678a60]      ; 004bd954 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EDX                            ; 004bd95a | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 ; 004bd95b | int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * search_pattern, char * directory, char * target_filename, ...)
        ;   XREF to: 0049f270 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 004bd960
    TEST EAX,EAX                        ; 004bd963
    JNZ 0x004bd96f                      ; 004bd965 | LAB_004bd96f
        ;   XREF to: 004bd96f (CONDITIONAL_JUMP)
    ADD ESP,0x100                       ; 004bd967
    POP EBX                             ; 004bd96d
    RET                                 ; 004bd96e
    PUSH EBX                            ; 004bd96f
        ;   Label: LAB_004bd96f
    CALL engine_fileio.cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10 ; 004bd970 | void engine_fileio.cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10(CFileManager * this_ptr)
        ;   XREF to: 004b7c10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004bd975
    MOV EAX,ESP                         ; 004bd978
    PUSH EAX                            ; 004bd97a
    PUSH EBX                            ; 004bd97b
    CALL core_fileman.cpp_CDemonFileManager_addSetToExtractList_FUN_004bd8e0 ; 004bd97c | void core_fileman.cpp_CDemonFileManager_addSetToExtractList_FUN_004bd8e0(CDemonFileManager * file_manager_ptr, char * set_filename)
        ;   XREF to: 004bd8e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004bd981
    PUSH EBX                            ; 004bd984
    CALL engine_fileio.cpp_CFileManager_closeExtractFile_FUN_004b7c60 ; 004bd985 | void engine_fileio.cpp_CFileManager_closeExtractFile_FUN_004b7c60(CFileManager * this_ptr)
        ;   XREF to: 004b7c60 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004bd98a
    PUSH 0x0                            ; 004bd98d
    PUSH 0x0                            ; 004bd98f
    PUSH EBX                            ; 004bd991
    CALL engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 ; 004bd992 | void engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50(CFileManager * this_ptr, char * pod_filename, char * volume_name)
        ;   XREF to: 004b5a50 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004bd997
    ADD ESP,0x100                       ; 004bd99a
    POP EBX                             ; 004bd9a0
    RET                                 ; 004bd9a1

