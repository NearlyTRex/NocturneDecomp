; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CGhoul * __cdecl core_ghoul_cpp_CGhoul_dtor_FUN_004e8f10 (CGhoul *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8)
;
; Parameters:
; CGhoul *         Stack[0x4]:4   this_ptr
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
;   WatcomTypeInfo g_CGhoulTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_backgnd.cpp_cleanupVector_FUN_004126e0
;   core_backgnd.cpp_freeFires_FUN_00412700
;   core_backgnd.cpp_freeFlames_FUN_00412720
;   core_cloth.cpp_FUN_0043bf80
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e8f10
        ;   Label: core_ghoul.cpp_CGhoul_dtor_FUN_004e8f10
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e8f11
    TEST byte ptr [ESP + 0xc],0x4       ; 004e8f15
    JNZ 0x004e8fa1                      ; 004e8f1a
        ;   XREF to: 004e8fa1 (CONDITIONAL_JUMP)  ; LAB_004e8fa1
    PUSH 0x0                            ; 004e8f20
    ADD EBX,0x33cc                      ; 004e8f22
    PUSH EBX                            ; 004e8f28
    CALL core_backgnd.cpp_freeFlames_FUN_00412720 ; 004e8f29
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)  ; int core_backgnd.cpp_freeFlames_FUN_00412720(CFlame * * array)
    ADD ESP,0x8                         ; 004e8f2e
    PUSH 0x0                            ; 004e8f31
    SUB EAX,0x4b0                       ; 004e8f33
    PUSH EAX                            ; 004e8f38
    CALL core_backgnd.cpp_freeFires_FUN_00412700 ; 004e8f39
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)  ; int core_backgnd.cpp_freeFires_FUN_00412700(SFire * * objs)
    ADD ESP,0x8                         ; 004e8f3e
    PUSH 0x0                            ; 004e8f41
    SUB EAX,0x20c                       ; 004e8f43
    PUSH EAX                            ; 004e8f48
    CALL core_backgnd.cpp_cleanupVector_FUN_004126e0 ; 004e8f49
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; int core_backgnd.cpp_cleanupVector_FUN_004126e0(CVector3f * * objs)
    ADD ESP,0x8                         ; 004e8f4e
    PUSH 0x0                            ; 004e8f51
    SUB EAX,0xb4                        ; 004e8f53
    PUSH EAX                            ; 004e8f58
    CALL core_backgnd.cpp_cleanupVector_FUN_004126e0 ; 004e8f59
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; int core_backgnd.cpp_cleanupVector_FUN_004126e0(CVector3f * * objs)
    ADD ESP,0x8                         ; 004e8f5e
    PUSH 0x0                            ; 004e8f61
    SUB EAX,0x1c8                       ; 004e8f63
    PUSH EAX                            ; 004e8f68
    CALL core_cloth.cpp_FUN_0043bf80    ; 004e8f69
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)  ; int core_cloth.cpp_FUN_0043bf80()
    ADD ESP,0x8                         ; 004e8f6e
    PUSH 0x0                            ; 004e8f71
    SUB EAX,0x293c                      ; 004e8f73
    PUSH EAX                            ; 004e8f78
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 004e8f79
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 004e8f7e
    PUSH 0x1                            ; 004e8f81
    LEA EBX,[EAX + 0xfffffea8]          ; 004e8f83
    PUSH EBX                            ; 004e8f89
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 004e8f8a
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
    ADD ESP,0x8                         ; 004e8f8f
    MOV DL,byte ptr [ESP + 0xc]         ; 004e8f92
    MOV EBX,EAX                         ; 004e8f96
    TEST DL,0x2                         ; 004e8f98
    JNZ 0x004e8fbc                      ; 004e8f9b
        ;   XREF to: 004e8fbc (CONDITIONAL_JUMP)  ; LAB_004e8fbc
    MOV EAX,EBX                         ; 004e8f9d
    POP EBX                             ; 004e8f9f
    RET                                 ; 004e8fa0
    PUSH 0x65eeb0                       ; 004e8fa1 | g_CGhoulTypeInfo
        ;   Label: LAB_004e8fa1
    PUSH EBX                            ; 004e8fa6
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 004e8fa7
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004e8fac
    PUSH EAX                            ; 004e8faf
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 004e8fb0
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004e8fb5
    MOV EAX,EBX                         ; 004e8fb8
    POP EBX                             ; 004e8fba
    RET                                 ; 004e8fbb
    PUSH EAX                            ; 004e8fbc
        ;   Label: LAB_004e8fbc
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004e8fbd
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004e8fc2
    MOV EAX,EBX                         ; 004e8fc5
    POP EBX                             ; 004e8fc7
    RET                                 ; 004e8fc8

