; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFileFinder * __cdecl engine_dosio_c_CFileFinder_ctor_FUN_00481c30(CFileFinder *this_ptr)
;
; Parameters:
; CFileFinder *    Stack[0x4]:4   this_ptr
;
; XREF[10]:
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 00538940
;   core_msnedit.cpp_convertAllMissionFiles_FUN_00537230 at 0053723d
;   core_podmain.cpp_CDemonPod_load_FUN_005519c0 at 005519f7
;   engine_dosio.c_getFileSizeWithFinder_FUN_00481960 at 0048198c
;   engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030 at 004b5117
;   engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0 at 004bcda7
;   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 at 0049f4dc
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0 at 004a36e9
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0 at 004a38dc
;   shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0 at 004a3a9f
;
; Called Functions:
;   engine_dosio.c_CFileFinder_reset_FUN_00481db0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481c30
        ;   Label: engine_dosio.c_CFileFinder_ctor_FUN_00481c30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00481c31
    PUSH EBX                            ; 00481c35
    MOV dword ptr [EBX + 0x10c],0x0     ; 00481c36
    CALL engine_dosio.c_CFileFinder_reset_FUN_00481db0 ; 00481c40
        ;   XREF to: 00481db0 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_CFileFinder_reset_FUN_00481db0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00481c45
    MOV EAX,EBX                         ; 00481c48
    POP EBX                             ; 00481c4a
    RET                                 ; 00481c4b

