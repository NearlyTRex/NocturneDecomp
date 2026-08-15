; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHostage * __cdecl core_hostage_cpp_CHostage_dtor_FUN_004b8b70(CHostage *this_ptr,uint flags)
;
; Parameters:
; CHostage *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CHostageTypeInfo_0059f080
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_armour.cpp_CFlame_arrdtor50_FUN_0040fe50
;   core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10
;   core_armour.cpp_SFire_arrdtor50_FUN_0040fe30
;   core_cloth.cpp_CClothList_dtor_FUN_00438250
;   core_path.cpp_CPathMap_dtor_FUN_004efdd0
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_operator_delete_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b8b70
        ;   Label: core_hostage.cpp_CHostage_dtor_FUN_004b8b70
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b8b71
    TEST byte ptr [ESP + 0xc],0x4       ; 004b8b75
    JNZ 0x004b8c11                      ; 004b8b7a
        ;   XREF to: 004b8c11 (CONDITIONAL_JUMP)  ; LAB_004b8c11
    PUSH 0x0                            ; 004b8b80
    ADD EBX,0xbc8c                      ; 004b8b82
    PUSH EBX                            ; 004b8b88
    CALL core_path.cpp_CPathMap_dtor_FUN_004efdd0 ; 004b8b89
        ;   XREF to: 004efdd0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_dtor_FUN_004efdd0(CPathMap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b8b8e
    PUSH 0x0                            ; 004b8b91
    SUB EAX,0x88c8                      ; 004b8b93
    PUSH EAX                            ; 004b8b98
    CALL core_armour.cpp_CFlame_arrdtor50_FUN_0040fe50 ; 004b8b99
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor50_FUN_0040fe50(CFlame * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b8b9e
    PUSH 0x0                            ; 004b8ba1
    SUB EAX,0x4b0                       ; 004b8ba3
    PUSH EAX                            ; 004b8ba8
    CALL core_armour.cpp_SFire_arrdtor50_FUN_0040fe30 ; 004b8ba9
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor50_FUN_0040fe30(SFire * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b8bae
    PUSH 0x0                            ; 004b8bb1
    SUB EAX,0x20c                       ; 004b8bb3
    PUSH EAX                            ; 004b8bb8
    CALL core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10 ; 004b8bb9
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b8bbe
    PUSH 0x0                            ; 004b8bc1
    SUB EAX,0xb4                        ; 004b8bc3
    PUSH EAX                            ; 004b8bc8
    CALL core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10 ; 004b8bc9
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b8bce
    PUSH 0x0                            ; 004b8bd1
    SUB EAX,0x1c8                       ; 004b8bd3
    PUSH EAX                            ; 004b8bd8
    CALL core_cloth.cpp_CClothList_dtor_FUN_00438250 ; 004b8bd9
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00438250(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b8bde
    PUSH 0x0                            ; 004b8be1
    SUB EAX,0x293c                      ; 004b8be3
    PUSH EAX                            ; 004b8be8
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 004b8be9
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b8bee
    PUSH 0x1                            ; 004b8bf1
    LEA EBX,[EAX + 0xfffffeb0]          ; 004b8bf3
    PUSH EBX                            ; 004b8bf9
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 004b8bfa
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b8bff
    MOV DL,byte ptr [ESP + 0xc]         ; 004b8c02
    MOV EBX,EAX                         ; 004b8c06
    TEST DL,0x2                         ; 004b8c08
    JNZ 0x004b8c2c                      ; 004b8c0b
        ;   XREF to: 004b8c2c (CONDITIONAL_JUMP)  ; LAB_004b8c2c
    MOV EAX,EBX                         ; 004b8c0d
    POP EBX                             ; 004b8c0f
    RET                                 ; 004b8c10
    PUSH 0x59f080                       ; 004b8c11 | g_CHostageTypeInfo_0059f080
        ;   Label: LAB_004b8c11
    PUSH EBX                            ; 004b8c16
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004b8c17
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004b8c1c
    PUSH EAX                            ; 004b8c1f
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004b8c20
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 004b8c25
    MOV EAX,EBX                         ; 004b8c28
    POP EBX                             ; 004b8c2a
    RET                                 ; 004b8c2b
    PUSH EAX                            ; 004b8c2c
        ;   Label: LAB_004b8c2c
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 004b8c2d
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 004b8c32
    MOV EAX,EBX                         ; 004b8c35
    POP EBX                             ; 004b8c37
    RET                                 ; 004b8c38

