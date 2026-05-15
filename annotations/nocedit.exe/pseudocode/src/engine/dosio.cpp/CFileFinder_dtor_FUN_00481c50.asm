; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFileFinder * __cdecl engine_dosio_cpp_CFileFinder_dtor_FUN_00481c50(CFileFinder *this_ptr,uint flags)
;
; Parameters:
; CFileFinder *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[10]:
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 00538a20
;   core_msnedit.cpp_convertAllMissionFiles_FUN_00537230 at 005372f6
;   core_podmain.cpp_CDemonPod_load_FUN_005519c0 at 00551a52
;   engine_dosio.cpp_getFileSizeWithFinder_FUN_00481960 at 004819bc
;   engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030 at 004b52ef
;   engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0 at 004bce0a
;   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 at 0049f983
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0 at 004a376a
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0 at 004a3969
;   shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0 at 004a3b72
;
; Called Functions:
;   engine_dosio.cpp_CFileFinder_closeSearch_FUN_00481d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481c50
        ;   Label: engine_dosio.cpp_CFileFinder_dtor_FUN_00481c50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00481c51
    PUSH EBX                            ; 00481c55
    CALL engine_dosio.cpp_CFileFinder_closeSearch_FUN_00481d70 ; 00481c56
        ;   XREF to: 00481d70 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_closeSearch_FUN_00481d70(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00481c5b
    MOV EAX,EBX                         ; 00481c5e
    POP EBX                             ; 00481c60
    RET                                 ; 00481c61

