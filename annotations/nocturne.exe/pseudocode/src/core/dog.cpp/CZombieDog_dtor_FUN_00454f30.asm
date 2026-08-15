; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CZombieDog * __cdecl core_dog_cpp_CZombieDog_dtor_FUN_00454f30(CZombieDog *this_ptr,uint flags)
;
; Parameters:
; CZombieDog *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CZombieDogTypeInfo_0059c240
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_armour.cpp_CFlame_arrdtor50_FUN_0040fe50
;   core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10
;   core_armour.cpp_SFire_arrdtor50_FUN_0040fe30
;   core_cloth.cpp_CClothList_dtor_FUN_00438250
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_operator_delete_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00454f30
        ;   Label: core_dog.cpp_CZombieDog_dtor_FUN_00454f30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00454f31
    TEST byte ptr [ESP + 0xc],0x4       ; 00454f35
    JNZ 0x00454fc1                      ; 00454f3a
        ;   XREF to: 00454fc1 (CONDITIONAL_JUMP)  ; LAB_00454fc1
    PUSH 0x0                            ; 00454f40
    ADD EBX,0x33c4                      ; 00454f42
    PUSH EBX                            ; 00454f48
    CALL core_armour.cpp_CFlame_arrdtor50_FUN_0040fe50 ; 00454f49
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor50_FUN_0040fe50(CFlame * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00454f4e
    PUSH 0x0                            ; 00454f51
    SUB EAX,0x4b0                       ; 00454f53
    PUSH EAX                            ; 00454f58
    CALL core_armour.cpp_SFire_arrdtor50_FUN_0040fe30 ; 00454f59
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor50_FUN_0040fe30(SFire * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00454f5e
    PUSH 0x0                            ; 00454f61
    SUB EAX,0x20c                       ; 00454f63
    PUSH EAX                            ; 00454f68
    CALL core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10 ; 00454f69
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00454f6e
    PUSH 0x0                            ; 00454f71
    SUB EAX,0xb4                        ; 00454f73
    PUSH EAX                            ; 00454f78
    CALL core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10 ; 00454f79
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00454f7e
    PUSH 0x0                            ; 00454f81
    SUB EAX,0x1c8                       ; 00454f83
    PUSH EAX                            ; 00454f88
    CALL core_cloth.cpp_CClothList_dtor_FUN_00438250 ; 00454f89
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00438250(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00454f8e
    PUSH 0x0                            ; 00454f91
    SUB EAX,0x293c                      ; 00454f93
    PUSH EAX                            ; 00454f98
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 00454f99
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00454f9e
    PUSH 0x1                            ; 00454fa1
    LEA EBX,[EAX + 0xfffffeb0]          ; 00454fa3
    PUSH EBX                            ; 00454fa9
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 00454faa
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00454faf
    MOV DL,byte ptr [ESP + 0xc]         ; 00454fb2
    MOV EBX,EAX                         ; 00454fb6
    TEST DL,0x2                         ; 00454fb8
    JNZ 0x00454fdc                      ; 00454fbb
        ;   XREF to: 00454fdc (CONDITIONAL_JUMP)  ; LAB_00454fdc
    MOV EAX,EBX                         ; 00454fbd
    POP EBX                             ; 00454fbf
    RET                                 ; 00454fc0
    PUSH 0x59c240                       ; 00454fc1 | g_CZombieDogTypeInfo_0059c240
        ;   Label: LAB_00454fc1
    PUSH EBX                            ; 00454fc6
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 00454fc7
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00454fcc
    PUSH EAX                            ; 00454fcf
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00454fd0
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00454fd5
    MOV EAX,EBX                         ; 00454fd8
    POP EBX                             ; 00454fda
    RET                                 ; 00454fdb
    PUSH EAX                            ; 00454fdc
        ;   Label: LAB_00454fdc
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 00454fdd
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 00454fe2
    MOV EAX,EBX                         ; 00454fe5
    POP EBX                             ; 00454fe7
    RET                                 ; 00454fe8

