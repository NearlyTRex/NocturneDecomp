; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_larva_cpp_CLarva_dtor_FUN_00503cc0(CLarva *this_ptr,uint flags)
;
; Parameters:
; CLarva *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CLarvaTypeInfo
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

    PUSH EBX                            ; 00503cc0
        ;   Label: core_larva.cpp_CLarva_dtor_FUN_00503cc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00503cc1
    TEST byte ptr [ESP + 0xc],0x4       ; 00503cc5
    JNZ 0x00503d51                      ; 00503cca
        ;   XREF to: 00503d51 (CONDITIONAL_JUMP)  ; LAB_00503d51
    PUSH 0x0                            ; 00503cd0
    ADD EBX,0x33cc                      ; 00503cd2
    PUSH EBX                            ; 00503cd8
    CALL core_armour.cpp_CFlame_arrdtor50_FUN_00412720 ; 00503cd9
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor50_FUN_00412720(CFlame * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00503cde
    PUSH 0x0                            ; 00503ce1
    SUB EAX,0x4b0                       ; 00503ce3
    PUSH EAX                            ; 00503ce8
    CALL core_armour.cpp_SFire_arrdtor50_FUN_00412700 ; 00503ce9
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor50_FUN_00412700(SFire * objs, uint flags)
    ADD ESP,0x8                         ; 00503cee
    PUSH 0x0                            ; 00503cf1
    SUB EAX,0x20c                       ; 00503cf3
    PUSH EAX                            ; 00503cf8
    CALL core_armour.cpp_CVector3f_arrdtor15_FUN_004126e0 ; 00503cf9
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor15_FUN_004126e0(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00503cfe
    PUSH 0x0                            ; 00503d01
    SUB EAX,0xb4                        ; 00503d03
    PUSH EAX                            ; 00503d08
    CALL core_armour.cpp_CVector3f_arrdtor15_FUN_004126e0 ; 00503d09
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor15_FUN_004126e0(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00503d0e
    PUSH 0x0                            ; 00503d11
    SUB EAX,0x1c8                       ; 00503d13
    PUSH EAX                            ; 00503d18
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043bf80 ; 00503d19
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043bf80(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00503d1e
    PUSH 0x0                            ; 00503d21
    SUB EAX,0x293c                      ; 00503d23
    PUSH EAX                            ; 00503d28
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 00503d29
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00503d2e
    PUSH 0x1                            ; 00503d31
    LEA EBX,[EAX + 0xfffffea8]          ; 00503d33
    PUSH EBX                            ; 00503d39
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 00503d3a
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00503d3f
    MOV DL,byte ptr [ESP + 0xc]         ; 00503d42
    MOV EBX,EAX                         ; 00503d46
    TEST DL,0x2                         ; 00503d48
    JNZ 0x00503d6c                      ; 00503d4b
        ;   XREF to: 00503d6c (CONDITIONAL_JUMP)  ; LAB_00503d6c
    MOV EAX,EBX                         ; 00503d4d
    POP EBX                             ; 00503d4f
    RET                                 ; 00503d50
    PUSH 0x6608a0                       ; 00503d51 | g_CLarvaTypeInfo
        ;   Label: LAB_00503d51
    PUSH EBX                            ; 00503d56
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 00503d57
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00503d5c
    PUSH EAX                            ; 00503d5f
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00503d60
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00503d65
    MOV EAX,EBX                         ; 00503d68
    POP EBX                             ; 00503d6a
    RET                                 ; 00503d6b
    PUSH EAX                            ; 00503d6c
        ;   Label: LAB_00503d6c
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 00503d6d
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 00503d72
    MOV EAX,EBX                         ; 00503d75
    POP EBX                             ; 00503d77
    RET                                 ; 00503d78

