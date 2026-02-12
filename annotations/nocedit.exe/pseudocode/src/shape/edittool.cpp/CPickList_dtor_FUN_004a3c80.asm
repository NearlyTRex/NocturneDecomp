; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CPickList * __cdecl shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(CPickList *this_ptr,uint flags)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[73]:
;   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 at 0040f39a
;   core_bodypart.cpp_CBodyPart_initializeInEditor_FUN_0041b280 at 0041b425
;   core_boxactor.cpp_FUN_00423110 at 004232e3
;   core_charactr.cpp_CCharacter_propertyActionCallback_FUN_0042f3e0 at 0042f707
;   core_cloth.cpp_CCloth_addCollisionBone_FUN_0043c430 at 0043c4ee
;   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 at 00479705
;   core_frankgen.cpp_CFrankenstienMachine_initializeInEditor_FUN_004d2770 at 004d2845
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004dba88
;   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 at 004e2829
;   core_menu.cpp_configureCustomKeyBindings_FUN_005138e0 at 005147af
;   ... and 63 more
;
; Referenced Globals:
;   WatcomTypeInfo g_CPickListTypeInfo
;   CStrList_vtable g_CPickListVTable
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_edittool.cpp_CEdButton_dtor_FUN_004a6510
;   shape_edittool.cpp_CEdScrollBar_dtor_FUN_004a5b20
;   shape_edittool.cpp_CPickList_clear_FUN_004a5770
;   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3c80
        ;   Label: shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a3c81
    TEST byte ptr [ESP + 0xc],0x4       ; 004a3c85
    JNZ 0x004a3ceb                      ; 004a3c8a
        ;   XREF to: 004a3ceb (CONDITIONAL_JUMP)  ; LAB_004a3ceb
    PUSH EBX                            ; 004a3c8c
    MOV dword ptr [EBX + 0xc],0x65d494  ; 004a3c8d | g_CPickListVTable
    CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770 ; 004a3c94
        ;   XREF to: 004a5770 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_clear_FUN_004a5770(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004a3c99
    PUSH 0x0                            ; 004a3c9c
    ADD EBX,0x2c0                       ; 004a3c9e
    PUSH EBX                            ; 004a3ca4
    CALL shape_edittool.cpp_CEdButton_dtor_FUN_004a6510 ; 004a3ca5
        ;   XREF to: 004a6510 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_dtor_FUN_004a6510(CEdButton * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a3caa
    PUSH 0x0                            ; 004a3cad
    SUB EAX,0xe4                        ; 004a3caf
    PUSH EAX                            ; 004a3cb4
    CALL shape_edittool.cpp_CEdButton_dtor_FUN_004a6510 ; 004a3cb5
        ;   XREF to: 004a6510 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_dtor_FUN_004a6510(CEdButton * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a3cba
    PUSH 0x0                            ; 004a3cbd
    SUB EAX,0x38                        ; 004a3cbf
    PUSH EAX                            ; 004a3cc2
    CALL shape_edittool.cpp_CEdScrollBar_dtor_FUN_004a5b20 ; 004a3cc3
        ;   XREF to: 004a5b20 (UNCONDITIONAL_CALL)  ; CEdScrollBar * shape_edittool.cpp_CEdScrollBar_dtor_FUN_004a5b20(CEdScrollBar * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a3cc8
    PUSH 0x1                            ; 004a3ccb
    LEA EBX,[EAX + 0xfffffe5c]          ; 004a3ccd
    PUSH EBX                            ; 004a3cd3
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 004a3cd4
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a3cd9
    MOV DL,byte ptr [ESP + 0xc]         ; 004a3cdc
    MOV EBX,EAX                         ; 004a3ce0
    TEST DL,0x2                         ; 004a3ce2
    JNZ 0x004a3d06                      ; 004a3ce5
        ;   XREF to: 004a3d06 (CONDITIONAL_JUMP)  ; LAB_004a3d06
    MOV EAX,EBX                         ; 004a3ce7
    POP EBX                             ; 004a3ce9
    RET                                 ; 004a3cea
    PUSH 0x659960                       ; 004a3ceb | g_CPickListTypeInfo
        ;   Label: LAB_004a3ceb
    PUSH EBX                            ; 004a3cf0
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 004a3cf1
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004a3cf6
    PUSH EAX                            ; 004a3cf9
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 004a3cfa
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004a3cff
    MOV EAX,EBX                         ; 004a3d02
    POP EBX                             ; 004a3d04
    RET                                 ; 004a3d05
    PUSH EAX                            ; 004a3d06
        ;   Label: LAB_004a3d06
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004a3d07
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004a3d0c
    MOV EAX,EBX                         ; 004a3d0f
    POP EBX                             ; 004a3d11
    RET                                 ; 004a3d12

