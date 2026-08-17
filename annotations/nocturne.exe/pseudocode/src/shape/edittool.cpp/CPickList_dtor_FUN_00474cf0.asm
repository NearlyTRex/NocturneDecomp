; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPickList * __cdecl shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(CPickList *this_ptr,uint flags)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[12]:
;   core_game.cpp_CGame_FUN_004a4b50 at 004a51e6
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049e436
;   core_menu.cpp_configureCustomKeyBindings_FUN_004d2d00 at 004d3bd9
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d2176
;   core_mission.cpp_CDemonMission_ensureHeroPlaceholder_FUN_004d9c20 at 004d9d86
;   core_sound.cpp_CSound_selectReverbPreset_FUN_0052ed40 at 0052edab
;   engine_pod.cpp_CPodFile_verifyChecksum_FUN_004f8240 at 004f84f4
;   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_00470730 at 00470a3d
;   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_00470550 at 004706bf
;   shape_edittool.cpp_FUN_00470230 at 004702fd
;   ... and 2 more
;
; Referenced Globals:
;   CPickList_full_vtable g_CPickListVTable
;   WatcomTypeInfo g_CPickListTypeInfo_0059cad0
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_operator_delete_FUN_00564494
;   shape_edittool.cpp_CEdScrollBar_dtor_FUN_00476490
;   shape_edittool.cpp_CPickList_clear_FUN_00476160
;   shape_edittool.cpp_CStrList_dtor_FUN_00473b80
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00474cf0
        ;   Label: shape_edittool.cpp_CPickList_dtor_FUN_00474cf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00474cf1
    TEST byte ptr [ESP + 0xc],0x4       ; 00474cf5
    JNZ 0x00474d3d                      ; 00474cfa
        ;   XREF to: 00474d3d (CONDITIONAL_JUMP)  ; LAB_00474d3d
    PUSH EBX                            ; 00474cfc
    MOV dword ptr [EBX + 0xc],0x59ca94  ; 00474cfd | g_CPickListVTable
    CALL shape_edittool.cpp_CPickList_clear_FUN_00476160 ; 00474d04
        ;   XREF to: 00476160 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_clear_FUN_00476160(CPickList * this_ptr)
    ADD ESP,0x4                         ; 00474d09
    PUSH 0x0                            ; 00474d0c
    ADD EBX,0x138                       ; 00474d0e
    PUSH EBX                            ; 00474d14
    CALL shape_edittool.cpp_CEdScrollBar_dtor_FUN_00476490 ; 00474d15
        ;   XREF to: 00476490 (UNCONDITIONAL_CALL)  ; CEdScrollBar * shape_edittool.cpp_CEdScrollBar_dtor_FUN_00476490(CEdScrollBar * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00474d1a
    PUSH 0x1                            ; 00474d1d
    LEA EBX,[EAX + 0xfffffec8]          ; 00474d1f
    PUSH EBX                            ; 00474d25
    CALL shape_edittool.cpp_CStrList_dtor_FUN_00473b80 ; 00474d26
        ;   XREF to: 00473b80 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_00473b80(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00474d2b
    MOV DL,byte ptr [ESP + 0xc]         ; 00474d2e
    MOV EBX,EAX                         ; 00474d32
    TEST DL,0x2                         ; 00474d34
    JNZ 0x00474d58                      ; 00474d37
        ;   XREF to: 00474d58 (CONDITIONAL_JUMP)  ; LAB_00474d58
    MOV EAX,EBX                         ; 00474d39
    POP EBX                             ; 00474d3b
    RET                                 ; 00474d3c
    PUSH 0x59cad0                       ; 00474d3d | g_CPickListTypeInfo_0059cad0
        ;   Label: LAB_00474d3d
    PUSH EBX                            ; 00474d42
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 00474d43
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00474d48
    PUSH EAX                            ; 00474d4b
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00474d4c
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00474d51
    MOV EAX,EBX                         ; 00474d54
    POP EBX                             ; 00474d56
    RET                                 ; 00474d57
    PUSH EAX                            ; 00474d58
        ;   Label: LAB_00474d58
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 00474d59
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 00474d5e
    MOV EAX,EBX                         ; 00474d61
    POP EBX                             ; 00474d63
    RET                                 ; 00474d64

