; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSmiley * __cdecl core_smiley_cpp_CSmiley_dtor_FUN_005a3880(CSmiley *this_ptr,uint flags)
;
; Parameters:
; CSmiley *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CSmileyTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_armour.cpp_CFlame_arrdtor_FUN_00412720
;   core_armour.cpp_CVector3f_arrdtor_FUN_004126e0
;   core_armour.cpp_SFire_arrdtor_FUN_00412700
;   core_cloth.cpp_CClothList_dtor_FUN_0043bf80
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3880
        ;   Label: core_smiley.cpp_CSmiley_dtor_FUN_005a3880
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a3881
    TEST byte ptr [ESP + 0xc],0x4       ; 005a3885
    JNZ 0x005a3911                      ; 005a388a
        ;   XREF to: 005a3911 (CONDITIONAL_JUMP)  ; LAB_005a3911
    PUSH 0x0                            ; 005a3890
    ADD EBX,0x33cc                      ; 005a3892
    PUSH EBX                            ; 005a3898
    CALL core_armour.cpp_CFlame_arrdtor_FUN_00412720 ; 005a3899
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor_FUN_00412720(CFlame * objs, uint flags)
    ADD ESP,0x8                         ; 005a389e
    PUSH 0x0                            ; 005a38a1
    SUB EAX,0x4b0                       ; 005a38a3
    PUSH EAX                            ; 005a38a8
    CALL core_armour.cpp_SFire_arrdtor_FUN_00412700 ; 005a38a9
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor_FUN_00412700(SFire * objs, uint flags)
    ADD ESP,0x8                         ; 005a38ae
    PUSH 0x0                            ; 005a38b1
    SUB EAX,0x20c                       ; 005a38b3
    PUSH EAX                            ; 005a38b8
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_004126e0 ; 005a38b9
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_004126e0(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 005a38be
    PUSH 0x0                            ; 005a38c1
    SUB EAX,0xb4                        ; 005a38c3
    PUSH EAX                            ; 005a38c8
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_004126e0 ; 005a38c9
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_004126e0(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 005a38ce
    PUSH 0x0                            ; 005a38d1
    SUB EAX,0x1c8                       ; 005a38d3
    PUSH EAX                            ; 005a38d8
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043bf80 ; 005a38d9
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043bf80(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a38de
    PUSH 0x0                            ; 005a38e1
    SUB EAX,0x293c                      ; 005a38e3
    PUSH EAX                            ; 005a38e8
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 005a38e9
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a38ee
    PUSH 0x1                            ; 005a38f1
    LEA EBX,[EAX + 0xfffffea8]          ; 005a38f3
    PUSH EBX                            ; 005a38f9
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 005a38fa
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a38ff
    MOV DL,byte ptr [ESP + 0xc]         ; 005a3902
    MOV EBX,EAX                         ; 005a3906
    TEST DL,0x2                         ; 005a3908
    JNZ 0x005a392c                      ; 005a390b
        ;   XREF to: 005a392c (CONDITIONAL_JUMP)  ; LAB_005a392c
    MOV EAX,EBX                         ; 005a390d
    POP EBX                             ; 005a390f
    RET                                 ; 005a3910
    PUSH 0x6630f0                       ; 005a3911 | g_CSmileyTypeInfo
        ;   Label: LAB_005a3911
    PUSH EBX                            ; 005a3916
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 005a3917
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005a391c
    PUSH EAX                            ; 005a391f
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005a3920
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005a3925
    MOV EAX,EBX                         ; 005a3928
    POP EBX                             ; 005a392a
    RET                                 ; 005a392b
    PUSH EAX                            ; 005a392c
        ;   Label: LAB_005a392c
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 005a392d
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005a3932
    MOV EAX,EBX                         ; 005a3935
    POP EBX                             ; 005a3937
    RET                                 ; 005a3938

