; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_dosio_c_CFileFinder_openSearch_FUN_00481c70(CFileFinder *this_ptr,char *search_pattern)
;
; Parameters:
; CFileFinder *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   search_pattern
;
; XREF[10]:
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 00538955
;   core_msnedit.cpp_FUN_00537230 at 0053724f
;   core_podmain.cpp_CDemonPod_load_FUN_005519c0 at 00551a09
;   engine_dosio.c_getFileTimestamp_FUN_00481960 at 0048199f
;   engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030 at 004b512f
;   engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0 at 004bcdbc
;   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 at 0049f603
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0 at 004a3701
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0 at 004a38f4
;   shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0 at 004a3ab4
;
; Referenced Globals:
;   FIND_FIRST_FILE_A_FUNC* g_FindFirstFileAFunc = 00211d84
;
; Called Functions:
;   engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70
;   engine_dosio.c_CFileFinder_convertStruct_FUN_00481dc0
;   engine_dosio.c_CFileFinder_reset_FUN_00481db0
;   FindFirstFileA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481c70
        ;   Label: engine_dosio.c_CFileFinder_openSearch_FUN_00481c70
    SUB ESP,0x140                       ; 00481c71
    MOV EBX,dword ptr [ESP + 0x148]     ; 00481c77
    PUSH EBX                            ; 00481c7e
    CALL engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70 ; 00481c7f
        ;   XREF to: 00481d70 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00481c84
    MOV EAX,ESP                         ; 00481c87
    PUSH EAX                            ; 00481c89
    MOV EDX,dword ptr [ESP + 0x150]     ; 00481c8a
    PUSH EDX                            ; 00481c91
    CALL dword ptr CS:[0x61154c]        ; 00481c92 | g_FindFirstFileAFunc
    CMP EAX,-0x1                        ; 00481c99
    JNZ 0x00481cb5                      ; 00481c9c
        ;   XREF to: 00481cb5 (CONDITIONAL_JUMP)  ; LAB_00481cb5
    CMP dword ptr [EBX + 0x10c],0x0     ; 00481c9e
    JZ 0x00481cd3                       ; 00481ca5
        ;   XREF to: 00481cd3 (CONDITIONAL_JUMP)  ; LAB_00481cd3
    MOV EAX,dword ptr [EBX + 0x10c]     ; 00481ca7
        ;   Label: LAB_00481ca7
    ADD ESP,0x140                       ; 00481cad
    POP EBX                             ; 00481cb3
    RET                                 ; 00481cb4
    MOV dword ptr [EBX + 0x110],EAX     ; 00481cb5
        ;   Label: LAB_00481cb5
    MOV EAX,ESP                         ; 00481cbb
    PUSH EAX                            ; 00481cbd
    PUSH EBX                            ; 00481cbe
    CALL engine_dosio.c_CFileFinder_convertStruct_FUN_00481dc0 ; 00481cbf
        ;   XREF to: 00481dc0 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_CFileFinder_convertStruct_FUN_00481dc0(CFileFinder * finder, LPWIN32_FIND_DATAA find_data)
    ADD ESP,0x8                         ; 00481cc4
    MOV dword ptr [EBX + 0x10c],0x1     ; 00481cc7
    JMP 0x00481ca7                      ; 00481cd1
        ;   XREF to: 00481ca7 (UNCONDITIONAL_JUMP)  ; LAB_00481ca7
    PUSH EBX                            ; 00481cd3
        ;   Label: LAB_00481cd3
    CALL engine_dosio.c_CFileFinder_reset_FUN_00481db0 ; 00481cd4
        ;   XREF to: 00481db0 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_CFileFinder_reset_FUN_00481db0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00481cd9
    MOV EAX,dword ptr [EBX + 0x10c]     ; 00481cdc
    ADD ESP,0x140                       ; 00481ce2
    POP EBX                             ; 00481ce8
    RET                                 ; 00481ce9

