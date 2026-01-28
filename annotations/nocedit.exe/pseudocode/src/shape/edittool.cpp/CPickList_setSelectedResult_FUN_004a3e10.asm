; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_edittool_cpp_CPickList_setSelectedResult_FUN_004a3e10(CPickList *this_ptr,int result_value)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   result_value
;
; XREF[9]:
;   core_menu.cpp_configureCustomKeyBindings_FUN_005138e0 at 0051475e
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 005388d1
;   core_script.cpp_FUN_005677a0 at 00567954
;   core_setedit.cpp_EditingGroundTypesAndSaving_FUN_00578630 at 00578677
;   engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030 at 004b5107
;   engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460 at 004b7508
;   engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0 at 004b8505
;   engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40 at 004ba494
;   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 at 004b8d75
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a3e10
        ;   Label: shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10
    MOV EAX,dword ptr [ESP + 0x8]       ; 004a3e14
    MOV dword ptr [EDX + 0x3c],EAX      ; 004a3e18
    RET                                 ; 004a3e1b

