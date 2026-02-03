; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActor * __cdecl core_charactr_cpp_CCharacter_dtor_FUN_0042f9f0(CCharacter *this_ptr,uint flags)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CCharacterTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_armour.cpp_freeFires_FUN_00412700
;   core_armour.cpp_freeFlames_FUN_00412720
;   core_armour.cpp_freeVectors_FUN_004126e0
;   core_cloth.cpp_FUN_0043bf80
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042f9f0
        ;   Label: core_charactr.cpp_CCharacter_dtor_FUN_0042f9f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0042f9f1
    TEST byte ptr [ESP + 0xc],0x4       ; 0042f9f5
    JNZ 0x0042fa81                      ; 0042f9fa
        ;   XREF to: 0042fa81 (CONDITIONAL_JUMP)  ; LAB_0042fa81
    PUSH 0x0                            ; 0042fa00
    ADD EBX,0x33cc                      ; 0042fa02
    PUSH EBX                            ; 0042fa08
    CALL core_armour.cpp_freeFlames_FUN_00412720 ; 0042fa09
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_freeFlames_FUN_00412720(CFlame * objs)
    ADD ESP,0x8                         ; 0042fa0e
    PUSH 0x0                            ; 0042fa11
    SUB EAX,0x4b0                       ; 0042fa13
    PUSH EAX                            ; 0042fa18
    CALL core_armour.cpp_freeFires_FUN_00412700 ; 0042fa19
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_freeFires_FUN_00412700(SFire * objs)
    ADD ESP,0x8                         ; 0042fa1e
    PUSH 0x0                            ; 0042fa21
    SUB EAX,0x20c                       ; 0042fa23
    PUSH EAX                            ; 0042fa28
    CALL core_armour.cpp_freeVectors_FUN_004126e0 ; 0042fa29
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_freeVectors_FUN_004126e0(CVector3f * objs)
    ADD ESP,0x8                         ; 0042fa2e
    PUSH 0x0                            ; 0042fa31
    SUB EAX,0xb4                        ; 0042fa33
    PUSH EAX                            ; 0042fa38
    CALL core_armour.cpp_freeVectors_FUN_004126e0 ; 0042fa39
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_freeVectors_FUN_004126e0(CVector3f * objs)
    ADD ESP,0x8                         ; 0042fa3e
    PUSH 0x0                            ; 0042fa41
    SUB EAX,0x1c8                       ; 0042fa43
    PUSH EAX                            ; 0042fa48
    CALL core_cloth.cpp_FUN_0043bf80    ; 0042fa49
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)  ; int core_cloth.cpp_FUN_0043bf80()
    ADD ESP,0x8                         ; 0042fa4e
    PUSH 0x0                            ; 0042fa51
    SUB EAX,0x293c                      ; 0042fa53
    PUSH EAX                            ; 0042fa58
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 0042fa59
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0042fa5e
    PUSH 0x1                            ; 0042fa61
    LEA EBX,[EAX + 0xfffffea8]          ; 0042fa63
    PUSH EBX                            ; 0042fa69
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 0042fa6a
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0042fa6f
    MOV DL,byte ptr [ESP + 0xc]         ; 0042fa72
    MOV EBX,EAX                         ; 0042fa76
    TEST DL,0x2                         ; 0042fa78
    JNZ 0x0042fa9c                      ; 0042fa7b
        ;   XREF to: 0042fa9c (CONDITIONAL_JUMP)  ; LAB_0042fa9c
    MOV EAX,EBX                         ; 0042fa7d
    POP EBX                             ; 0042fa7f
    RET                                 ; 0042fa80
    PUSH 0x65b9c0                       ; 0042fa81 | g_CCharacterTypeInfo
        ;   Label: LAB_0042fa81
    PUSH EBX                            ; 0042fa86
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 0042fa87
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0042fa8c
    PUSH EAX                            ; 0042fa8f
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0042fa90
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0042fa95
    MOV EAX,EBX                         ; 0042fa98
    POP EBX                             ; 0042fa9a
    RET                                 ; 0042fa9b
    PUSH EAX                            ; 0042fa9c
        ;   Label: LAB_0042fa9c
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 0042fa9d
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 0042faa2
    MOV EAX,EBX                         ; 0042faa5
    POP EBX                             ; 0042faa7
    RET                                 ; 0042faa8

