; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTentacle * __cdecl core_tentacle_cpp_CTentacle_dtor_FUN_005dbcf0(CTentacle *this_ptr,uint flags)
;
; Parameters:
; CTentacle *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CTentacleTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_armour.cpp_CFlame_arrdtor50_FUN_00412720
;   core_armour.cpp_CVector3f_arrdtor15_FUN_004126e0
;   core_armour.cpp_SFire_arrdtor50_FUN_00412700
;   core_cloth.cpp_CClothList_dtor_FUN_0043bf80
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dbcf0
        ;   Label: core_tentacle.cpp_CTentacle_dtor_FUN_005dbcf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005dbcf1
    TEST byte ptr [ESP + 0xc],0x4       ; 005dbcf5
    JNZ 0x005dbd81                      ; 005dbcfa
        ;   XREF to: 005dbd81 (CONDITIONAL_JUMP)  ; LAB_005dbd81
    PUSH 0x0                            ; 005dbd00
    ADD EBX,0x33cc                      ; 005dbd02
    PUSH EBX                            ; 005dbd08
    CALL core_armour.cpp_CFlame_arrdtor50_FUN_00412720 ; 005dbd09
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor50_FUN_00412720(CFlame * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005dbd0e
    PUSH 0x0                            ; 005dbd11
    SUB EAX,0x4b0                       ; 005dbd13
    PUSH EAX                            ; 005dbd18
    CALL core_armour.cpp_SFire_arrdtor50_FUN_00412700 ; 005dbd19
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor50_FUN_00412700(SFire * objs, uint flags)
    ADD ESP,0x8                         ; 005dbd1e
    PUSH 0x0                            ; 005dbd21
    SUB EAX,0x20c                       ; 005dbd23
    PUSH EAX                            ; 005dbd28
    CALL core_armour.cpp_CVector3f_arrdtor15_FUN_004126e0 ; 005dbd29
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor15_FUN_004126e0(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005dbd2e
    PUSH 0x0                            ; 005dbd31
    SUB EAX,0xb4                        ; 005dbd33
    PUSH EAX                            ; 005dbd38
    CALL core_armour.cpp_CVector3f_arrdtor15_FUN_004126e0 ; 005dbd39
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor15_FUN_004126e0(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005dbd3e
    PUSH 0x0                            ; 005dbd41
    SUB EAX,0x1c8                       ; 005dbd43
    PUSH EAX                            ; 005dbd48
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043bf80 ; 005dbd49
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043bf80(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005dbd4e
    PUSH 0x0                            ; 005dbd51
    SUB EAX,0x293c                      ; 005dbd53
    PUSH EAX                            ; 005dbd58
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 005dbd59
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005dbd5e
    PUSH 0x1                            ; 005dbd61
    LEA EBX,[EAX + 0xfffffea8]          ; 005dbd63
    PUSH EBX                            ; 005dbd69
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 005dbd6a
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005dbd6f
    MOV DL,byte ptr [ESP + 0xc]         ; 005dbd72
    MOV EBX,EAX                         ; 005dbd76
    TEST DL,0x2                         ; 005dbd78
    JNZ 0x005dbd9c                      ; 005dbd7b
        ;   XREF to: 005dbd9c (CONDITIONAL_JUMP)  ; LAB_005dbd9c
    MOV EAX,EBX                         ; 005dbd7d
    POP EBX                             ; 005dbd7f
    RET                                 ; 005dbd80
    PUSH 0x6645e0                       ; 005dbd81 | g_CTentacleTypeInfo
        ;   Label: LAB_005dbd81
    PUSH EBX                            ; 005dbd86
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 005dbd87
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005dbd8c
    PUSH EAX                            ; 005dbd8f
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005dbd90
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005dbd95
    MOV EAX,EBX                         ; 005dbd98
    POP EBX                             ; 005dbd9a
    RET                                 ; 005dbd9b
    PUSH EAX                            ; 005dbd9c
        ;   Label: LAB_005dbd9c
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 005dbd9d
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005dbda2
    MOV EAX,EBX                         ; 005dbda5
    POP EBX                             ; 005dbda7
    RET                                 ; 005dbda8

