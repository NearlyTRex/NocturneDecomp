; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDrummer * __cdecl core_tbplayer_cpp_CDrummer_dtor_FUN_005da540(CDrummer *this_ptr,uint flags)
;
; Parameters:
; CDrummer *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CDrummerTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_armour.cpp_CFlame_arrdtor_FUN_00412720
;   core_armour.cpp_CVector3f_arrdtor_FUN_004126e0
;   core_armour.cpp_SFire_arrdtor_FUN_00412700
;   core_cloth.cpp_CClothList_dtor_FUN_0043bf80
;   core_path.cpp_CPathMap_dtor_FUN_005464d0
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005da540
        ;   Label: core_tbplayer.cpp_CDrummer_dtor_FUN_005da540
    MOV EBX,dword ptr [ESP + 0x8]       ; 005da541
    TEST byte ptr [ESP + 0xc],0x4       ; 005da545
    JNZ 0x005da5e1                      ; 005da54a
        ;   XREF to: 005da5e1 (CONDITIONAL_JUMP)  ; LAB_005da5e1
    PUSH 0x0                            ; 005da550
    ADD EBX,0xbe24                      ; 005da552
    PUSH EBX                            ; 005da558
    CALL core_path.cpp_CPathMap_dtor_FUN_005464d0 ; 005da559
        ;   XREF to: 005464d0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_dtor_FUN_005464d0(CPathMap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005da55e
    PUSH 0x0                            ; 005da561
    SUB EAX,0x8a58                      ; 005da563
    PUSH EAX                            ; 005da568
    CALL core_armour.cpp_CFlame_arrdtor_FUN_00412720 ; 005da569
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor_FUN_00412720(CFlame * objs, uint flags)
    ADD ESP,0x8                         ; 005da56e
    PUSH 0x0                            ; 005da571
    SUB EAX,0x4b0                       ; 005da573
    PUSH EAX                            ; 005da578
    CALL core_armour.cpp_SFire_arrdtor_FUN_00412700 ; 005da579
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor_FUN_00412700(SFire * objs, uint flags)
    ADD ESP,0x8                         ; 005da57e
    PUSH 0x0                            ; 005da581
    SUB EAX,0x20c                       ; 005da583
    PUSH EAX                            ; 005da588
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_004126e0 ; 005da589
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_004126e0(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 005da58e
    PUSH 0x0                            ; 005da591
    SUB EAX,0xb4                        ; 005da593
    PUSH EAX                            ; 005da598
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_004126e0 ; 005da599
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_004126e0(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 005da59e
    PUSH 0x0                            ; 005da5a1
    SUB EAX,0x1c8                       ; 005da5a3
    PUSH EAX                            ; 005da5a8
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043bf80 ; 005da5a9
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043bf80(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005da5ae
    PUSH 0x0                            ; 005da5b1
    SUB EAX,0x293c                      ; 005da5b3
    PUSH EAX                            ; 005da5b8
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 005da5b9
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005da5be
    PUSH 0x1                            ; 005da5c1
    LEA EBX,[EAX + 0xfffffea8]          ; 005da5c3
    PUSH EBX                            ; 005da5c9
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 005da5ca
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005da5cf
    MOV DL,byte ptr [ESP + 0xc]         ; 005da5d2
    MOV EBX,EAX                         ; 005da5d6
    TEST DL,0x2                         ; 005da5d8
    JNZ 0x005da5fc                      ; 005da5db
        ;   XREF to: 005da5fc (CONDITIONAL_JUMP)  ; LAB_005da5fc
    MOV EAX,EBX                         ; 005da5dd
    POP EBX                             ; 005da5df
    RET                                 ; 005da5e0
    PUSH 0x6641d0                       ; 005da5e1 | g_CDrummerTypeInfo
        ;   Label: LAB_005da5e1
    PUSH EBX                            ; 005da5e6
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 005da5e7
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005da5ec
    PUSH EAX                            ; 005da5ef
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005da5f0
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005da5f5
    MOV EAX,EBX                         ; 005da5f8
    POP EBX                             ; 005da5fa
    RET                                 ; 005da5fb
    PUSH EAX                            ; 005da5fc
        ;   Label: LAB_005da5fc
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005da5fd
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005da602
    MOV EAX,EBX                         ; 005da605
    POP EBX                             ; 005da607
    RET                                 ; 005da608

