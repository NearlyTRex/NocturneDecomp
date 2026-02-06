; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CHostage * __cdecl core_hostage_cpp_CHostage_dtor_FUN_004f6b60(CHostage *this_ptr,uint flags)
;
; Parameters:
; CHostage *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CHostageTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_armour.cpp_freeFires_FUN_00412700
;   core_armour.cpp_freeFlames_FUN_00412720
;   core_armour.cpp_freeVectors_FUN_004126e0
;   core_cloth.cpp_CClothList_dtor_FUN_0043bf80
;   core_path.cpp_CPathMap_dtor_FUN_005464d0
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6b60
        ;   Label: core_hostage.cpp_CHostage_dtor_FUN_004f6b60
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f6b61
    TEST byte ptr [ESP + 0xc],0x4       ; 004f6b65
    JNZ 0x004f6c01                      ; 004f6b6a
        ;   XREF to: 004f6c01 (CONDITIONAL_JUMP)  ; LAB_004f6c01
    PUSH 0x0                            ; 004f6b70
    ADD EBX,0xbe24                      ; 004f6b72
    PUSH EBX                            ; 004f6b78
    CALL core_path.cpp_CPathMap_dtor_FUN_005464d0 ; 004f6b79
        ;   XREF to: 005464d0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_dtor_FUN_005464d0(CPathMap * this_ptr)
    ADD ESP,0x8                         ; 004f6b7e
    PUSH 0x0                            ; 004f6b81
    SUB EAX,0x8a58                      ; 004f6b83
    PUSH EAX                            ; 004f6b88
    CALL core_armour.cpp_freeFlames_FUN_00412720 ; 004f6b89
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_freeFlames_FUN_00412720(CFlame * objs)
    ADD ESP,0x8                         ; 004f6b8e
    PUSH 0x0                            ; 004f6b91
    SUB EAX,0x4b0                       ; 004f6b93
    PUSH EAX                            ; 004f6b98
    CALL core_armour.cpp_freeFires_FUN_00412700 ; 004f6b99
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_freeFires_FUN_00412700(SFire * objs)
    ADD ESP,0x8                         ; 004f6b9e
    PUSH 0x0                            ; 004f6ba1
    SUB EAX,0x20c                       ; 004f6ba3
    PUSH EAX                            ; 004f6ba8
    CALL core_armour.cpp_freeVectors_FUN_004126e0 ; 004f6ba9
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_freeVectors_FUN_004126e0(CVector3f * objs)
    ADD ESP,0x8                         ; 004f6bae
    PUSH 0x0                            ; 004f6bb1
    SUB EAX,0xb4                        ; 004f6bb3
    PUSH EAX                            ; 004f6bb8
    CALL core_armour.cpp_freeVectors_FUN_004126e0 ; 004f6bb9
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_freeVectors_FUN_004126e0(CVector3f * objs)
    ADD ESP,0x8                         ; 004f6bbe
    PUSH 0x0                            ; 004f6bc1
    SUB EAX,0x1c8                       ; 004f6bc3
    PUSH EAX                            ; 004f6bc8
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043bf80 ; 004f6bc9
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043bf80(CClothList * this_ptr)
    ADD ESP,0x8                         ; 004f6bce
    PUSH 0x0                            ; 004f6bd1
    SUB EAX,0x293c                      ; 004f6bd3
    PUSH EAX                            ; 004f6bd8
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 004f6bd9
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f6bde
    PUSH 0x1                            ; 004f6be1
    LEA EBX,[EAX + 0xfffffea8]          ; 004f6be3
    PUSH EBX                            ; 004f6be9
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 004f6bea
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f6bef
    MOV DL,byte ptr [ESP + 0xc]         ; 004f6bf2
    MOV EBX,EAX                         ; 004f6bf6
    TEST DL,0x2                         ; 004f6bf8
    JNZ 0x004f6c1c                      ; 004f6bfb
        ;   XREF to: 004f6c1c (CONDITIONAL_JUMP)  ; LAB_004f6c1c
    MOV EAX,EBX                         ; 004f6bfd
    POP EBX                             ; 004f6bff
    RET                                 ; 004f6c00
    PUSH 0x65fc90                       ; 004f6c01 | g_CHostageTypeInfo
        ;   Label: LAB_004f6c01
    PUSH EBX                            ; 004f6c06
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 004f6c07
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004f6c0c
    PUSH EAX                            ; 004f6c0f
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 004f6c10
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004f6c15
    MOV EAX,EBX                         ; 004f6c18
    POP EBX                             ; 004f6c1a
    RET                                 ; 004f6c1b
    PUSH EAX                            ; 004f6c1c
        ;   Label: LAB_004f6c1c
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004f6c1d
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004f6c22
    MOV EAX,EBX                         ; 004f6c25
    POP EBX                             ; 004f6c27
    RET                                 ; 004f6c28

