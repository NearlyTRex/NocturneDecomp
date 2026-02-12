; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CTVBat * __cdecl core_tvbat_cpp_CTVBat_dtor_FUN_005e5460(CTVBat *this_ptr,uint flags)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CTVBatTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_armour.cpp_CFlame_arrdtor_FUN_00412720
;   core_armour.cpp_CVector3f_arrdtor_FUN_004126e0
;   core_armour.cpp_SFire_arrdtor_FUN_00412700
;   core_cloth.cpp_CClothList_dtor_FUN_0043bf80
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e5460
        ;   Label: core_tvbat.cpp_CTVBat_dtor_FUN_005e5460
    MOV EBX,dword ptr [ESP + 0x8]       ; 005e5461
    TEST byte ptr [ESP + 0xc],0x4       ; 005e5465
    JNZ 0x005e54f1                      ; 005e546a
        ;   XREF to: 005e54f1 (CONDITIONAL_JUMP)  ; LAB_005e54f1
    PUSH 0x0                            ; 005e5470
    ADD EBX,0x33cc                      ; 005e5472
    PUSH EBX                            ; 005e5478
    CALL core_armour.cpp_CFlame_arrdtor_FUN_00412720 ; 005e5479
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor_FUN_00412720(CFlame * objs, uint flags)
    ADD ESP,0x8                         ; 005e547e
    PUSH 0x0                            ; 005e5481
    SUB EAX,0x4b0                       ; 005e5483
    PUSH EAX                            ; 005e5488
    CALL core_armour.cpp_SFire_arrdtor_FUN_00412700 ; 005e5489
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor_FUN_00412700(SFire * objs, uint flags)
    ADD ESP,0x8                         ; 005e548e
    PUSH 0x0                            ; 005e5491
    SUB EAX,0x20c                       ; 005e5493
    PUSH EAX                            ; 005e5498
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_004126e0 ; 005e5499
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_004126e0(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 005e549e
    PUSH 0x0                            ; 005e54a1
    SUB EAX,0xb4                        ; 005e54a3
    PUSH EAX                            ; 005e54a8
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_004126e0 ; 005e54a9
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_004126e0(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 005e54ae
    PUSH 0x0                            ; 005e54b1
    SUB EAX,0x1c8                       ; 005e54b3
    PUSH EAX                            ; 005e54b8
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043bf80 ; 005e54b9
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043bf80(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005e54be
    PUSH 0x0                            ; 005e54c1
    SUB EAX,0x293c                      ; 005e54c3
    PUSH EAX                            ; 005e54c8
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 005e54c9
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005e54ce
    PUSH 0x1                            ; 005e54d1
    LEA EBX,[EAX + 0xfffffea8]          ; 005e54d3
    PUSH EBX                            ; 005e54d9
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 005e54da
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005e54df
    MOV DL,byte ptr [ESP + 0xc]         ; 005e54e2
    MOV EBX,EAX                         ; 005e54e6
    TEST DL,0x2                         ; 005e54e8
    JNZ 0x005e550c                      ; 005e54eb
        ;   XREF to: 005e550c (CONDITIONAL_JUMP)  ; LAB_005e550c
    MOV EAX,EBX                         ; 005e54ed
    POP EBX                             ; 005e54ef
    RET                                 ; 005e54f0
    PUSH 0x664e40                       ; 005e54f1 | g_CTVBatTypeInfo
        ;   Label: LAB_005e54f1
    PUSH EBX                            ; 005e54f6
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 005e54f7
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005e54fc
    PUSH EAX                            ; 005e54ff
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005e5500
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005e5505
    MOV EAX,EBX                         ; 005e5508
    POP EBX                             ; 005e550a
    RET                                 ; 005e550b
    PUSH EAX                            ; 005e550c
        ;   Label: LAB_005e550c
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005e550d
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005e5512
    MOV EAX,EBX                         ; 005e5515
    POP EBX                             ; 005e5517
    RET                                 ; 005e5518

