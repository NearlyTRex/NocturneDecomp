; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStrList * __cdecl shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(CStrList *this_ptr,uint flags)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[22]:
;   core_fileman.cpp_preprocessMusicFiles_FUN_004bd750 at 004bd874
;   core_msnedit.cpp_CDemonMission_editActorAtIndex_FUN_0053b030 at 0053b489
;   core_msnedit.cpp_CDemonMission_editActorDetailed_FUN_0053b510 at 0053b969
;   core_script.cpp_CScript_dtor_FUN_00559840 at 00559854
;   core_script.cpp_CScript_extractCrossReferences_FUN_005671a0 at 0056720e
;   core_script.cpp_parseConditionExpression_FUN_00561a30 at 00561bd6
;   core_skeledit.cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0 at 0059684c
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004bb550
;   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 at 004baee2
;   engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0 at 004bce34
;   ... and 12 more
;
; Referenced Globals:
;   CStrList_vtable g_CStrListVTable
;   WatcomTypeInfo g_CStrListTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_edittool.cpp_CStrList_clear_FUN_004a2b10
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2a40
        ;   Label: shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a2a41
    TEST byte ptr [ESP + 0xc],0x4       ; 004a2a45
    JNZ 0x004a2a67                      ; 004a2a4a
        ;   XREF to: 004a2a67 (CONDITIONAL_JUMP)  ; LAB_004a2a67
    PUSH EBX                            ; 004a2a4c
    MOV dword ptr [EBX + 0xc],0x65d474  ; 004a2a4d | g_CStrListVTable
    CALL shape_edittool.cpp_CStrList_clear_FUN_004a2b10 ; 004a2a54
        ;   XREF to: 004a2b10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_clear_FUN_004a2b10(CStrList * this_ptr)
    ADD ESP,0x4                         ; 004a2a59
    TEST byte ptr [ESP + 0xc],0x2       ; 004a2a5c
    JNZ 0x004a2a82                      ; 004a2a61
        ;   XREF to: 004a2a82 (CONDITIONAL_JUMP)  ; LAB_004a2a82
    MOV EAX,EBX                         ; 004a2a63
    POP EBX                             ; 004a2a65
    RET                                 ; 004a2a66
    PUSH 0x65d4f0                       ; 004a2a67 | g_CStrListTypeInfo
        ;   Label: LAB_004a2a67
    PUSH EBX                            ; 004a2a6c
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 004a2a6d
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004a2a72
    PUSH EAX                            ; 004a2a75
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 004a2a76
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004a2a7b
    MOV EAX,EBX                         ; 004a2a7e
    POP EBX                             ; 004a2a80
    RET                                 ; 004a2a81
    PUSH EBX                            ; 004a2a82
        ;   Label: LAB_004a2a82
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 004a2a83
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004a2a88
    MOV EAX,EBX                         ; 004a2a8b
    POP EBX                             ; 004a2a8d
    RET                                 ; 004a2a8e

