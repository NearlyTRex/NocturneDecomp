; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0(CStrList *this_ptr,int index)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
;
; XREF[8]:
;   core_msnedit.cpp_CDemonMission_FUN_0053dcf0 at 0053de02
;   core_msnedit.cpp_CDemonMission_FUN_0053df90 at 0053e0b3
;   core_script.cpp_CScript_editorAction_FUN_00564820 at 00564fd9
;   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 at 004bae7d
;   engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0 at 004b79ac
;   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 at 004b7190
;   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 at 004b9a2a
;   engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0 at 004bd061
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a2de0
        ;   Label: shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0
    MOV ECX,dword ptr [ESP + 0x8]       ; 004a2de4
    PUSH ECX                            ; 004a2de8
    PUSH ECX                            ; 004a2de9
    MOV EAX,dword ptr [EDX + 0xc]       ; 004a2dea
    PUSH EDX                            ; 004a2ded
    CALL dword ptr [EAX + 0x4]          ; 004a2dee
    ADD ESP,0xc                         ; 004a2df1
    RET                                 ; 004a2df4

