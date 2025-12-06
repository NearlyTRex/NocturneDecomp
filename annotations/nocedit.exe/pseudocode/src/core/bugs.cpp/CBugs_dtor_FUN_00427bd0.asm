; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBugs * core_bugs.cpp_CBugs_dtor_FUN_00427bd0(CBugs * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8, uint d9)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
; uint             Stack[0x10]:4   d3
; uint             Stack[0x14]:4   d4
; uint             Stack[0x18]:4   d5
; uint             Stack[0x1c]:4   d6
; uint             Stack[0x20]:4   d7
; uint             Stack[0x24]:4   d8
; uint             Stack[0x28]:4   d9
;
; Referenced Globals:
;   WatcomTypeInfo g_CBugsTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_backgnd.cpp_cleanupVector_FUN_004126e0
;   core_backgnd.cpp_freeFires_FUN_00412700
;   core_backgnd.cpp_freeFlames_FUN_00412720
;   core_bugs.cpp_FUN_00427cc0
;   core_cloth.cpp_FUN_0043bf80
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427bd0
        ;   Label: core_bugs.cpp_CBugs_dtor_FUN_00427bd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00427bd1
    TEST byte ptr [ESP + 0xc],0x4       ; 00427bd5
    JNZ 0x00427c71                      ; 00427bda | LAB_00427c71
        ;   XREF to: 00427c71 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 00427be0
    ADD EBX,0xbec4                      ; 00427be2
    PUSH EBX                            ; 00427be8
    CALL core_bugs.cpp_FUN_00427cc0     ; 00427be9 | int core_bugs.cpp_FUN_00427cc0(SBug * * objs)
        ;   XREF to: 00427cc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00427bee
    PUSH 0x0                            ; 00427bf1
    SUB EAX,0x8af8                      ; 00427bf3
    PUSH EAX                            ; 00427bf8
    CALL core_backgnd.cpp_freeFlames_FUN_00412720 ; 00427bf9 | int core_backgnd.cpp_freeFlames_FUN_00412720(CFlame * * array)
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00427bfe
    PUSH 0x0                            ; 00427c01
    SUB EAX,0x4b0                       ; 00427c03
    PUSH EAX                            ; 00427c08
    CALL core_backgnd.cpp_freeFires_FUN_00412700 ; 00427c09 | int core_backgnd.cpp_freeFires_FUN_00412700(SFire * * objs)
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00427c0e
    PUSH 0x0                            ; 00427c11
    SUB EAX,0x20c                       ; 00427c13
    PUSH EAX                            ; 00427c18
    CALL core_backgnd.cpp_cleanupVector_FUN_004126e0 ; 00427c19 | int core_backgnd.cpp_cleanupVector_FUN_004126e0(CVector3f * * objs)
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00427c1e
    PUSH 0x0                            ; 00427c21
    SUB EAX,0xb4                        ; 00427c23
    PUSH EAX                            ; 00427c28
    CALL core_backgnd.cpp_cleanupVector_FUN_004126e0 ; 00427c29 | int core_backgnd.cpp_cleanupVector_FUN_004126e0(CVector3f * * objs)
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00427c2e
    PUSH 0x0                            ; 00427c31
    SUB EAX,0x1c8                       ; 00427c33
    PUSH EAX                            ; 00427c38
    CALL core_cloth.cpp_FUN_0043bf80    ; 00427c39 | undefined core_cloth.cpp_FUN_0043bf80()
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00427c3e
    PUSH 0x0                            ; 00427c41
    SUB EAX,0x293c                      ; 00427c43
    PUSH EAX                            ; 00427c48
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 00427c49 | CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00427c4e
    PUSH 0x1                            ; 00427c51
    LEA EBX,[EAX + 0xfffffea8]          ; 00427c53
    PUSH EBX                            ; 00427c59
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 00427c5a | CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00427c5f
    MOV DL,byte ptr [ESP + 0xc]         ; 00427c62
    MOV EBX,EAX                         ; 00427c66
    TEST DL,0x2                         ; 00427c68
    JNZ 0x00427c8c                      ; 00427c6b | LAB_00427c8c
        ;   XREF to: 00427c8c (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 00427c6d
    POP EBX                             ; 00427c6f
    RET                                 ; 00427c70
    PUSH 0x65b790                       ; 00427c71 | WatcomTypeInfo g_CBugsTypeInfo
        ;   Label: LAB_00427c71
    PUSH EBX                            ; 00427c76
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 00427c77 | void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00427c7c
    PUSH EAX                            ; 00427c7f
    CALL crt_memory.c_free_FUN_005fe659 ; 00427c80 | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00427c85
    MOV EAX,EBX                         ; 00427c88
    POP EBX                             ; 00427c8a
    RET                                 ; 00427c8b
    PUSH EAX                            ; 00427c8c
        ;   Label: LAB_00427c8c
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 00427c8d | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00427c92
    MOV EAX,EBX                         ; 00427c95
    POP EBX                             ; 00427c97
    RET                                 ; 00427c98

