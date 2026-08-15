; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBride * __cdecl core_bride_cpp_CBride_dtor_FUN_00424b80(CBride *this_ptr,uint flags)
;
; Parameters:
; CBride *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBrideTypeInfo
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

    PUSH EBX                            ; 00424b80
        ;   Label: core_bride.cpp_CBride_dtor_FUN_00424b80
    MOV EBX,dword ptr [ESP + 0x8]       ; 00424b81
    TEST byte ptr [ESP + 0xc],0x4       ; 00424b85
    JNZ 0x00424c11                      ; 00424b8a
        ;   XREF to: 00424c11 (CONDITIONAL_JUMP)  ; LAB_00424c11
    PUSH 0x0                            ; 00424b90
    ADD EBX,0x33cc                      ; 00424b92
    PUSH EBX                            ; 00424b98
    CALL core_armour.cpp_CFlame_arrdtor50_FUN_00412720 ; 00424b99
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor50_FUN_00412720(CFlame * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00424b9e
    PUSH 0x0                            ; 00424ba1
    SUB EAX,0x4b0                       ; 00424ba3
    PUSH EAX                            ; 00424ba8
    CALL core_armour.cpp_SFire_arrdtor50_FUN_00412700 ; 00424ba9
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor50_FUN_00412700(SFire * objs, uint flags)
    ADD ESP,0x8                         ; 00424bae
    PUSH 0x0                            ; 00424bb1
    SUB EAX,0x20c                       ; 00424bb3
    PUSH EAX                            ; 00424bb8
    CALL core_armour.cpp_CVector3f_arrdtor15_FUN_004126e0 ; 00424bb9
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor15_FUN_004126e0(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00424bbe
    PUSH 0x0                            ; 00424bc1
    SUB EAX,0xb4                        ; 00424bc3
    PUSH EAX                            ; 00424bc8
    CALL core_armour.cpp_CVector3f_arrdtor15_FUN_004126e0 ; 00424bc9
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor15_FUN_004126e0(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00424bce
    PUSH 0x0                            ; 00424bd1
    SUB EAX,0x1c8                       ; 00424bd3
    PUSH EAX                            ; 00424bd8
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043bf80 ; 00424bd9
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043bf80(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00424bde
    PUSH 0x0                            ; 00424be1
    SUB EAX,0x293c                      ; 00424be3
    PUSH EAX                            ; 00424be8
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 00424be9
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00424bee
    PUSH 0x1                            ; 00424bf1
    LEA EBX,[EAX + 0xfffffea8]          ; 00424bf3
    PUSH EBX                            ; 00424bf9
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 00424bfa
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00424bff
    MOV DL,byte ptr [ESP + 0xc]         ; 00424c02
    MOV EBX,EAX                         ; 00424c06
    TEST DL,0x2                         ; 00424c08
    JNZ 0x00424c2c                      ; 00424c0b
        ;   XREF to: 00424c2c (CONDITIONAL_JUMP)  ; LAB_00424c2c
    MOV EAX,EBX                         ; 00424c0d
    POP EBX                             ; 00424c0f
    RET                                 ; 00424c10
    PUSH 0x65b590                       ; 00424c11 | g_CBrideTypeInfo
        ;   Label: LAB_00424c11
    PUSH EBX                            ; 00424c16
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 00424c17
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00424c1c
    PUSH EAX                            ; 00424c1f
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00424c20
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00424c25
    MOV EAX,EBX                         ; 00424c28
    POP EBX                             ; 00424c2a
    RET                                 ; 00424c2b
    PUSH EAX                            ; 00424c2c
        ;   Label: LAB_00424c2c
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 00424c2d
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 00424c32
    MOV EAX,EBX                         ; 00424c35
    POP EBX                             ; 00424c37
    RET                                 ; 00424c38

