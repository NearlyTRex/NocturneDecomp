; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDraculaBride * __cdecl core_dracbrid_cpp_CDraculaBride_dtor_FUN_00486d70(CDraculaBride *this_ptr,uint flags)
;
; Parameters:
; CDraculaBride *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CDraculaBrideTypeInfo
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

    PUSH EBX                            ; 00486d70
        ;   Label: core_dracbrid.cpp_CDraculaBride_dtor_FUN_00486d70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00486d71
    TEST byte ptr [ESP + 0xc],0x4       ; 00486d75
    JNZ 0x00486e01                      ; 00486d7a
        ;   XREF to: 00486e01 (CONDITIONAL_JUMP)  ; LAB_00486e01
    PUSH 0x0                            ; 00486d80
    ADD EBX,0x33cc                      ; 00486d82
    PUSH EBX                            ; 00486d88
    CALL core_armour.cpp_CFlame_arrdtor_FUN_00412720 ; 00486d89
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor_FUN_00412720(CFlame * objs, uint flags)
    ADD ESP,0x8                         ; 00486d8e
    PUSH 0x0                            ; 00486d91
    SUB EAX,0x4b0                       ; 00486d93
    PUSH EAX                            ; 00486d98
    CALL core_armour.cpp_SFire_arrdtor_FUN_00412700 ; 00486d99
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor_FUN_00412700(SFire * objs, uint flags)
    ADD ESP,0x8                         ; 00486d9e
    PUSH 0x0                            ; 00486da1
    SUB EAX,0x20c                       ; 00486da3
    PUSH EAX                            ; 00486da8
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_004126e0 ; 00486da9
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_004126e0(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 00486dae
    PUSH 0x0                            ; 00486db1
    SUB EAX,0xb4                        ; 00486db3
    PUSH EAX                            ; 00486db8
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_004126e0 ; 00486db9
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_004126e0(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 00486dbe
    PUSH 0x0                            ; 00486dc1
    SUB EAX,0x1c8                       ; 00486dc3
    PUSH EAX                            ; 00486dc8
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043bf80 ; 00486dc9
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043bf80(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00486dce
    PUSH 0x0                            ; 00486dd1
    SUB EAX,0x293c                      ; 00486dd3
    PUSH EAX                            ; 00486dd8
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 00486dd9
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00486dde
    PUSH 0x1                            ; 00486de1
    LEA EBX,[EAX + 0xfffffea8]          ; 00486de3
    PUSH EBX                            ; 00486de9
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 00486dea
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00486def
    MOV DL,byte ptr [ESP + 0xc]         ; 00486df2
    MOV EBX,EAX                         ; 00486df6
    TEST DL,0x2                         ; 00486df8
    JNZ 0x00486e1c                      ; 00486dfb
        ;   XREF to: 00486e1c (CONDITIONAL_JUMP)  ; LAB_00486e1c
    MOV EAX,EBX                         ; 00486dfd
    POP EBX                             ; 00486dff
    RET                                 ; 00486e00
    PUSH 0x65cf20                       ; 00486e01 | g_CDraculaBrideTypeInfo
        ;   Label: LAB_00486e01
    PUSH EBX                            ; 00486e06
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 00486e07
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00486e0c
    PUSH EAX                            ; 00486e0f
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00486e10
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00486e15
    MOV EAX,EBX                         ; 00486e18
    POP EBX                             ; 00486e1a
    RET                                 ; 00486e1b
    PUSH EAX                            ; 00486e1c
        ;   Label: LAB_00486e1c
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 00486e1d
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 00486e22
    MOV EAX,EBX                         ; 00486e25
    POP EBX                             ; 00486e27
    RET                                 ; 00486e28

