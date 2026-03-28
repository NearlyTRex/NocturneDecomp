; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBassPlayer * __cdecl core_tbplayer_cpp_CBassPlayer_dtor_FUN_005da610(CBassPlayer *this_ptr,uint flags)
;
; Parameters:
; CBassPlayer *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBassPlayerTypeInfo
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
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005da610
        ;   Label: core_tbplayer.cpp_CBassPlayer_dtor_FUN_005da610
    MOV EBX,dword ptr [ESP + 0x8]       ; 005da611
    TEST byte ptr [ESP + 0xc],0x4       ; 005da615
    JNZ 0x005da6b1                      ; 005da61a
        ;   XREF to: 005da6b1 (CONDITIONAL_JUMP)  ; LAB_005da6b1
    PUSH 0x0                            ; 005da620
    ADD EBX,0xbe24                      ; 005da622
    PUSH EBX                            ; 005da628
    CALL core_path.cpp_CPathMap_dtor_FUN_005464d0 ; 005da629
        ;   XREF to: 005464d0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_dtor_FUN_005464d0(CPathMap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005da62e
    PUSH 0x0                            ; 005da631
    SUB EAX,0x8a58                      ; 005da633
    PUSH EAX                            ; 005da638
    CALL core_armour.cpp_CFlame_arrdtor_FUN_00412720 ; 005da639
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor_FUN_00412720(CFlame * objs, uint flags)
    ADD ESP,0x8                         ; 005da63e
    PUSH 0x0                            ; 005da641
    SUB EAX,0x4b0                       ; 005da643
    PUSH EAX                            ; 005da648
    CALL core_armour.cpp_SFire_arrdtor_FUN_00412700 ; 005da649
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor_FUN_00412700(SFire * objs, uint flags)
    ADD ESP,0x8                         ; 005da64e
    PUSH 0x0                            ; 005da651
    SUB EAX,0x20c                       ; 005da653
    PUSH EAX                            ; 005da658
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_004126e0 ; 005da659
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_004126e0(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 005da65e
    PUSH 0x0                            ; 005da661
    SUB EAX,0xb4                        ; 005da663
    PUSH EAX                            ; 005da668
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_004126e0 ; 005da669
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_004126e0(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 005da66e
    PUSH 0x0                            ; 005da671
    SUB EAX,0x1c8                       ; 005da673
    PUSH EAX                            ; 005da678
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043bf80 ; 005da679
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043bf80(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005da67e
    PUSH 0x0                            ; 005da681
    SUB EAX,0x293c                      ; 005da683
    PUSH EAX                            ; 005da688
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 005da689
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005da68e
    PUSH 0x1                            ; 005da691
    LEA EBX,[EAX + 0xfffffea8]          ; 005da693
    PUSH EBX                            ; 005da699
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 005da69a
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005da69f
    MOV DL,byte ptr [ESP + 0xc]         ; 005da6a2
    MOV EBX,EAX                         ; 005da6a6
    TEST DL,0x2                         ; 005da6a8
    JNZ 0x005da6cc                      ; 005da6ab
        ;   XREF to: 005da6cc (CONDITIONAL_JUMP)  ; LAB_005da6cc
    MOV EAX,EBX                         ; 005da6ad
    POP EBX                             ; 005da6af
    RET                                 ; 005da6b0
    PUSH 0x6641f0                       ; 005da6b1 | g_CBassPlayerTypeInfo
        ;   Label: LAB_005da6b1
    PUSH EBX                            ; 005da6b6
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 005da6b7
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005da6bc
    PUSH EAX                            ; 005da6bf
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005da6c0
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005da6c5
    MOV EAX,EBX                         ; 005da6c8
    POP EBX                             ; 005da6ca
    RET                                 ; 005da6cb
    PUSH EAX                            ; 005da6cc
        ;   Label: LAB_005da6cc
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 005da6cd
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005da6d2
    MOV EAX,EBX                         ; 005da6d5
    POP EBX                             ; 005da6d7
    RET                                 ; 005da6d8

