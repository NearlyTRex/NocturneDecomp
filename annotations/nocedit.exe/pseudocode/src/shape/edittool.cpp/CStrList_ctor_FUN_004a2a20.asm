; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CStrList * __cdecl shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(CStrList *this_ptr)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
;
; XREF[24]:
;   core_fileman.cpp_preprocessMusicFiles_FUN_004bd750 at 004bd762
;   core_msnedit.cpp_CDemonMission_FUN_0053b030 at 0053b042
;   core_msnedit.cpp_CDemonMission_FUN_0053b510 at 0053b522
;   core_script.cpp_CScript_FUN_005671a0 at 005671c0
;   core_script.cpp_CScript_ctor_FUN_005597f0 at 005597f8
;   core_script.cpp_parseConditionExpression_FUN_00561a30 at 00561a42
;   core_skeledit.cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0 at 00596084
;   core_sound.cpp_playSfxInternal_FUN_005b1fd0 at 005b2461
;   core_sound.cpp_staticInit_FUN_005b1760 at 005b1772
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004bb49a
;   ... and 14 more
;
; Referenced Globals:
;   CStrList_vtable g_CStrListVTable
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a2a20
        ;   Label: shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
    MOV dword ptr [EAX],0x0             ; 004a2a24
    MOV dword ptr [EAX + 0x8],0x0       ; 004a2a2a
    MOV dword ptr [EAX + 0x4],0x0       ; 004a2a31
    MOV dword ptr [EAX + 0xc],0x65d474  ; 004a2a38 | g_CStrListVTable
    RET                                 ; 004a2a3f

