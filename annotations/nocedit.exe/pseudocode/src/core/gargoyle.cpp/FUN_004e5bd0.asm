; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CGargoyle * core_gargoyle.cpp_FUN_004e5bd0(CGargoyle * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8)
;
; Parameters:
; CGargoyle *      Stack[0x4]:4   this_ptr
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
;   WatcomTypeInfo g_CGargoyleTypeInfo
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

    PUSH EBX                            ; 004e5bd0
        ;   Label: core_gargoyle.cpp_FUN_004e5bd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e5bd1
    TEST byte ptr [ESP + 0xc],0x4       ; 004e5bd5
    JNZ 0x004e5c61                      ; 004e5bda
        ;   XREF to: 004e5c61 (CONDITIONAL_JUMP)  ; LAB_004e5c61
    PUSH 0x0                            ; 004e5be0
    ADD EBX,0x33cc                      ; 004e5be2
    PUSH EBX                            ; 004e5be8
    CALL core_backgnd.cpp_freeFlames_FUN_00412720 ; 004e5be9
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)  ; int core_backgnd.cpp_freeFlames_FUN_00412720(CFlame * * array)
    ADD ESP,0x8                         ; 004e5bee
    PUSH 0x0                            ; 004e5bf1
    SUB EAX,0x4b0                       ; 004e5bf3
    PUSH EAX                            ; 004e5bf8
    CALL core_backgnd.cpp_freeFires_FUN_00412700 ; 004e5bf9
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)  ; int core_backgnd.cpp_freeFires_FUN_00412700(SFire * * objs)
    ADD ESP,0x8                         ; 004e5bfe
    PUSH 0x0                            ; 004e5c01
    SUB EAX,0x20c                       ; 004e5c03
    PUSH EAX                            ; 004e5c08
    CALL core_backgnd.cpp_cleanupVector_FUN_004126e0 ; 004e5c09
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; int core_backgnd.cpp_cleanupVector_FUN_004126e0(CVector3f * * objs)
    ADD ESP,0x8                         ; 004e5c0e
    PUSH 0x0                            ; 004e5c11
    SUB EAX,0xb4                        ; 004e5c13
    PUSH EAX                            ; 004e5c18
    CALL core_backgnd.cpp_cleanupVector_FUN_004126e0 ; 004e5c19
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; int core_backgnd.cpp_cleanupVector_FUN_004126e0(CVector3f * * objs)
    ADD ESP,0x8                         ; 004e5c1e
    PUSH 0x0                            ; 004e5c21
    SUB EAX,0x1c8                       ; 004e5c23
    PUSH EAX                            ; 004e5c28
    CALL core_cloth.cpp_FUN_0043bf80    ; 004e5c29
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_0043bf80()
    ADD ESP,0x8                         ; 004e5c2e
    PUSH 0x0                            ; 004e5c31
    SUB EAX,0x293c                      ; 004e5c33
    PUSH EAX                            ; 004e5c38
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 004e5c39
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 004e5c3e
    PUSH 0x1                            ; 004e5c41
    LEA EBX,[EAX + 0xfffffea8]          ; 004e5c43
    PUSH EBX                            ; 004e5c49
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 004e5c4a
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
    ADD ESP,0x8                         ; 004e5c4f
    MOV DL,byte ptr [ESP + 0xc]         ; 004e5c52
    MOV EBX,EAX                         ; 004e5c56
    TEST DL,0x2                         ; 004e5c58
    JNZ 0x004e5c7c                      ; 004e5c5b
        ;   XREF to: 004e5c7c (CONDITIONAL_JUMP)  ; LAB_004e5c7c
    MOV EAX,EBX                         ; 004e5c5d
    POP EBX                             ; 004e5c5f
    RET                                 ; 004e5c60
    PUSH 0x65ebb0                       ; 004e5c61 | g_CGargoyleTypeInfo
        ;   Label: LAB_004e5c61
    PUSH EBX                            ; 004e5c66
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 004e5c67
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004e5c6c
    PUSH EAX                            ; 004e5c6f
    CALL crt_memory.c_free_FUN_005fe659 ; 004e5c70
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004e5c75
    MOV EAX,EBX                         ; 004e5c78
    POP EBX                             ; 004e5c7a
    RET                                 ; 004e5c7b
    PUSH EAX                            ; 004e5c7c
        ;   Label: LAB_004e5c7c
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004e5c7d
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004e5c82
    MOV EAX,EBX                         ; 004e5c85
    POP EBX                             ; 004e5c87
    RET                                 ; 004e5c88

