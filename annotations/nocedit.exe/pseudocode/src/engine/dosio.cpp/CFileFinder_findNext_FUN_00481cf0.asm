; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_dosio_cpp_CFileFinder_findNext_FUN_00481cf0(CFileFinder *this_ptr)
;
; Parameters:
; CFileFinder *    Stack[0x4]:4   this_ptr
;
; XREF[9]:
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 00538a00
;   core_msnedit.cpp_convertAllMissionFiles_FUN_00537230 at 005372dd
;   core_podmain.cpp_CDemonPod_load_FUN_005519c0 at 00551a2a
;   engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030 at 004b51c6
;   engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0 at 004bcdee
;   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 at 0049f531
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0 at 004a373e
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0 at 004a393d
;   shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0 at 004a3b43
;
; Referenced Globals:
;   FIND_NEXT_FILE_A_FUNC* g_FindNextFileAFunc = 00211d96
;   TerminatedCString s_engine_dosio_c_006215de
;   TerminatedCString s_CFileFinder_open_search__006215f0
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_dosio.cpp_CFileFinder_convertStruct_FUN_00481dc0
;   engine_dosio.cpp_CFileFinder_reset_FUN_00481db0
;   FindNextFileA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481cf0
        ;   Label: engine_dosio.cpp_CFileFinder_findNext_FUN_00481cf0
    PUSH EDI                            ; 00481cf1
    SUB ESP,0x140                       ; 00481cf2
    MOV EBX,dword ptr [ESP + 0x14c]     ; 00481cf8
    CMP dword ptr [EBX + 0x10c],0x0     ; 00481cff
    JNZ 0x00481d2d                      ; 00481d06
        ;   XREF to: 00481d2d (CONDITIONAL_JUMP)  ; LAB_00481d2d
    PUSH ESI                            ; 00481d08
    MOV ECX,0x6215de                    ; 00481d09 | = "..\\engine\\dosio.c"
    MOV ESI,0x244                       ; 00481d0e
    PUSH 0x6215f0                       ; 00481d13 | = "CFileFinder::open - search not opened!"
    MOV dword ptr [0x02f0ca48],ECX      ; 00481d18 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00481d1e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00481d24
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00481d29
    POP ESI                             ; 00481d2c
    MOV EAX,ESP                         ; 00481d2d
        ;   Label: LAB_00481d2d
    PUSH EAX                            ; 00481d2f
    MOV EDI,dword ptr [EBX + 0x110]     ; 00481d30
    PUSH EDI                            ; 00481d36
    CALL dword ptr CS:[0x611550]        ; 00481d37 | g_FindNextFileAFunc
    TEST EAX,EAX                        ; 00481d3e
    JZ 0x00481d5c                       ; 00481d40
        ;   XREF to: 00481d5c (CONDITIONAL_JUMP)  ; LAB_00481d5c
    MOV EAX,ESP                         ; 00481d42
    PUSH EAX                            ; 00481d44
    PUSH EBX                            ; 00481d45
    CALL engine_dosio.cpp_CFileFinder_convertStruct_FUN_00481dc0 ; 00481d46
        ;   XREF to: 00481dc0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_convertStruct_FUN_00481dc0(CFileFinder * finder, LPWIN32_FIND_DATAA find_data)
    MOV EAX,0x1                         ; 00481d4b
    ADD ESP,0x8                         ; 00481d50
    ADD ESP,0x140                       ; 00481d53
    POP EDI                             ; 00481d59
    POP EBX                             ; 00481d5a
    RET                                 ; 00481d5b
    PUSH EBX                            ; 00481d5c
        ;   Label: LAB_00481d5c
    CALL engine_dosio.cpp_CFileFinder_reset_FUN_00481db0 ; 00481d5d
        ;   XREF to: 00481db0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_reset_FUN_00481db0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00481d62
    XOR EAX,EAX                         ; 00481d65
    ADD ESP,0x140                       ; 00481d67
    POP EDI                             ; 00481d6d
    POP EBX                             ; 00481d6e
    RET                                 ; 00481d6f

