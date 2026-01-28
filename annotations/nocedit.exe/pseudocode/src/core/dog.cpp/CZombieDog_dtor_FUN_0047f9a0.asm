; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CZombieDog * __cdecl core_dog_cpp_CZombieDog_dtor_FUN_0047f9a0 (CZombieDog *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8)
;
; Parameters:
; CZombieDog *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
; uint             Stack[0x10]:4   d3
; uint             Stack[0x14]:4   d4
; uint             Stack[0x18]:4   d5
; uint             Stack[0x1c]:4   d6
; uint             Stack[0x20]:4   d7
; uint             Stack[0x24]:4   d8
;
; Referenced Globals:
;   WatcomTypeInfo g_CZombieDogTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_backgnd.cpp_cleanupVector_FUN_004126e0
;   core_backgnd.cpp_freeFires_FUN_00412700
;   core_backgnd.cpp_freeFlames_FUN_00412720
;   core_cloth.cpp_FUN_0043bf80
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047f9a0
        ;   Label: core_dog.cpp_CZombieDog_dtor_FUN_0047f9a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0047f9a1
    TEST byte ptr [ESP + 0xc],0x4       ; 0047f9a5
    JNZ 0x0047fa31                      ; 0047f9aa
        ;   XREF to: 0047fa31 (CONDITIONAL_JUMP)  ; LAB_0047fa31
    PUSH 0x0                            ; 0047f9b0
    ADD EBX,0x33cc                      ; 0047f9b2
    PUSH EBX                            ; 0047f9b8
    CALL core_backgnd.cpp_freeFlames_FUN_00412720 ; 0047f9b9
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)  ; int core_backgnd.cpp_freeFlames_FUN_00412720(CFlame * * array)
    ADD ESP,0x8                         ; 0047f9be
    PUSH 0x0                            ; 0047f9c1
    SUB EAX,0x4b0                       ; 0047f9c3
    PUSH EAX                            ; 0047f9c8
    CALL core_backgnd.cpp_freeFires_FUN_00412700 ; 0047f9c9
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)  ; int core_backgnd.cpp_freeFires_FUN_00412700(SFire * * objs)
    ADD ESP,0x8                         ; 0047f9ce
    PUSH 0x0                            ; 0047f9d1
    SUB EAX,0x20c                       ; 0047f9d3
    PUSH EAX                            ; 0047f9d8
    CALL core_backgnd.cpp_cleanupVector_FUN_004126e0 ; 0047f9d9
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; int core_backgnd.cpp_cleanupVector_FUN_004126e0(CVector3f * * objs)
    ADD ESP,0x8                         ; 0047f9de
    PUSH 0x0                            ; 0047f9e1
    SUB EAX,0xb4                        ; 0047f9e3
    PUSH EAX                            ; 0047f9e8
    CALL core_backgnd.cpp_cleanupVector_FUN_004126e0 ; 0047f9e9
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; int core_backgnd.cpp_cleanupVector_FUN_004126e0(CVector3f * * objs)
    ADD ESP,0x8                         ; 0047f9ee
    PUSH 0x0                            ; 0047f9f1
    SUB EAX,0x1c8                       ; 0047f9f3
    PUSH EAX                            ; 0047f9f8
    CALL core_cloth.cpp_FUN_0043bf80    ; 0047f9f9
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_0043bf80()
    ADD ESP,0x8                         ; 0047f9fe
    PUSH 0x0                            ; 0047fa01
    SUB EAX,0x293c                      ; 0047fa03
    PUSH EAX                            ; 0047fa08
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 0047fa09
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0047fa0e
    PUSH 0x1                            ; 0047fa11
    LEA EBX,[EAX + 0xfffffea8]          ; 0047fa13
    PUSH EBX                            ; 0047fa19
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 0047fa1a
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
    ADD ESP,0x8                         ; 0047fa1f
    MOV DL,byte ptr [ESP + 0xc]         ; 0047fa22
    MOV EBX,EAX                         ; 0047fa26
    TEST DL,0x2                         ; 0047fa28
    JNZ 0x0047fa4c                      ; 0047fa2b
        ;   XREF to: 0047fa4c (CONDITIONAL_JUMP)  ; LAB_0047fa4c
    MOV EAX,EBX                         ; 0047fa2d
    POP EBX                             ; 0047fa2f
    RET                                 ; 0047fa30
    PUSH 0x65cbb0                       ; 0047fa31 | g_CZombieDogTypeInfo
        ;   Label: LAB_0047fa31
    PUSH EBX                            ; 0047fa36
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 0047fa37
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0047fa3c
    PUSH EAX                            ; 0047fa3f
    CALL crt_memory.c_free_FUN_005fe659 ; 0047fa40
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0047fa45
    MOV EAX,EBX                         ; 0047fa48
    POP EBX                             ; 0047fa4a
    RET                                 ; 0047fa4b
    PUSH EAX                            ; 0047fa4c
        ;   Label: LAB_0047fa4c
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 0047fa4d
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 0047fa52
    MOV EAX,EBX                         ; 0047fa55
    POP EBX                             ; 0047fa57
    RET                                 ; 0047fa58

