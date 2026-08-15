; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CNPC * __cdecl core_npc_cpp_CNPC_dtor_FUN_004f4700(CNPC *this_ptr,uint flags)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CNPCTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_armour.cpp_CFlame_arrdtor50_FUN_00412720
;   core_armour.cpp_CVector3f_arrdtor15_FUN_004126e0
;   core_armour.cpp_SFire_arrdtor50_FUN_00412700
;   core_cloth.cpp_CClothList_dtor_FUN_0043bf80
;   core_path.cpp_CPathMap_dtor_FUN_005464d0
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4700
        ;   Label: core_npc.cpp_CNPC_dtor_FUN_004f4700
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f4701
    TEST byte ptr [ESP + 0xc],0x4       ; 004f4705
    JNZ 0x004f47a1                      ; 004f470a
        ;   XREF to: 004f47a1 (CONDITIONAL_JUMP)  ; LAB_004f47a1
    PUSH 0x0                            ; 004f4710
    ADD EBX,0xbe24                      ; 004f4712
    PUSH EBX                            ; 004f4718
    CALL core_path.cpp_CPathMap_dtor_FUN_005464d0 ; 004f4719
        ;   XREF to: 005464d0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_dtor_FUN_005464d0(CPathMap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f471e
    PUSH 0x0                            ; 004f4721
    SUB EAX,0x8a58                      ; 004f4723
    PUSH EAX                            ; 004f4728
    CALL core_armour.cpp_CFlame_arrdtor50_FUN_00412720 ; 004f4729
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor50_FUN_00412720(CFlame * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f472e
    PUSH 0x0                            ; 004f4731
    SUB EAX,0x4b0                       ; 004f4733
    PUSH EAX                            ; 004f4738
    CALL core_armour.cpp_SFire_arrdtor50_FUN_00412700 ; 004f4739
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor50_FUN_00412700(SFire * objs, uint flags)
    ADD ESP,0x8                         ; 004f473e
    PUSH 0x0                            ; 004f4741
    SUB EAX,0x20c                       ; 004f4743
    PUSH EAX                            ; 004f4748
    CALL core_armour.cpp_CVector3f_arrdtor15_FUN_004126e0 ; 004f4749
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor15_FUN_004126e0(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f474e
    PUSH 0x0                            ; 004f4751
    SUB EAX,0xb4                        ; 004f4753
    PUSH EAX                            ; 004f4758
    CALL core_armour.cpp_CVector3f_arrdtor15_FUN_004126e0 ; 004f4759
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor15_FUN_004126e0(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f475e
    PUSH 0x0                            ; 004f4761
    SUB EAX,0x1c8                       ; 004f4763
    PUSH EAX                            ; 004f4768
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043bf80 ; 004f4769
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043bf80(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f476e
    PUSH 0x0                            ; 004f4771
    SUB EAX,0x293c                      ; 004f4773
    PUSH EAX                            ; 004f4778
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 004f4779
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f477e
    PUSH 0x1                            ; 004f4781
    LEA EBX,[EAX + 0xfffffea8]          ; 004f4783
    PUSH EBX                            ; 004f4789
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 004f478a
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f478f
    MOV DL,byte ptr [ESP + 0xc]         ; 004f4792
    MOV EBX,EAX                         ; 004f4796
    TEST DL,0x2                         ; 004f4798
    JNZ 0x004f47bc                      ; 004f479b
        ;   XREF to: 004f47bc (CONDITIONAL_JUMP)  ; LAB_004f47bc
    MOV EAX,EBX                         ; 004f479d
    POP EBX                             ; 004f479f
    RET                                 ; 004f47a0
    PUSH 0x65faf0                       ; 004f47a1 | g_CNPCTypeInfo
        ;   Label: LAB_004f47a1
    PUSH EBX                            ; 004f47a6
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 004f47a7
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004f47ac
    PUSH EAX                            ; 004f47af
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 004f47b0
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004f47b5
    MOV EAX,EBX                         ; 004f47b8
    POP EBX                             ; 004f47ba
    RET                                 ; 004f47bb
    PUSH EAX                            ; 004f47bc
        ;   Label: LAB_004f47bc
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 004f47bd
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004f47c2
    MOV EAX,EBX                         ; 004f47c5
    POP EBX                             ; 004f47c7
    RET                                 ; 004f47c8

