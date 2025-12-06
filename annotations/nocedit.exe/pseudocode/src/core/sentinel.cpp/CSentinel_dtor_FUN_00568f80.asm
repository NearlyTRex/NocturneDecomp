; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CSentinel * core_sentinel.cpp_CSentinel_dtor_FUN_00568f80(CSentinel * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8)
;
; Parameters:
; CSentinel *      Stack[0x4]:4   this_ptr
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
;   WatcomTypeInfo g_CSentinelTypeInfo
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

    PUSH EBX                            ; 00568f80
        ;   Label: core_sentinel.cpp_CSentinel_dtor_FUN_00568f80
    MOV EBX,dword ptr [ESP + 0x8]       ; 00568f81
    TEST byte ptr [ESP + 0xc],0x4       ; 00568f85
    JNZ 0x00569011                      ; 00568f8a | LAB_00569011
        ;   XREF to: 00569011 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 00568f90
    ADD EBX,0x33cc                      ; 00568f92
    PUSH EBX                            ; 00568f98
    CALL core_backgnd.cpp_freeFlames_FUN_00412720 ; 00568f99 | int core_backgnd.cpp_freeFlames_FUN_00412720(CFlame * * array)
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00568f9e
    PUSH 0x0                            ; 00568fa1
    SUB EAX,0x4b0                       ; 00568fa3
    PUSH EAX                            ; 00568fa8
    CALL core_backgnd.cpp_freeFires_FUN_00412700 ; 00568fa9 | int core_backgnd.cpp_freeFires_FUN_00412700(SFire * * objs)
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00568fae
    PUSH 0x0                            ; 00568fb1
    SUB EAX,0x20c                       ; 00568fb3
    PUSH EAX                            ; 00568fb8
    CALL core_backgnd.cpp_cleanupVector_FUN_004126e0 ; 00568fb9 | int core_backgnd.cpp_cleanupVector_FUN_004126e0(CVector3f * * objs)
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00568fbe
    PUSH 0x0                            ; 00568fc1
    SUB EAX,0xb4                        ; 00568fc3
    PUSH EAX                            ; 00568fc8
    CALL core_backgnd.cpp_cleanupVector_FUN_004126e0 ; 00568fc9 | int core_backgnd.cpp_cleanupVector_FUN_004126e0(CVector3f * * objs)
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00568fce
    PUSH 0x0                            ; 00568fd1
    SUB EAX,0x1c8                       ; 00568fd3
    PUSH EAX                            ; 00568fd8
    CALL core_cloth.cpp_FUN_0043bf80    ; 00568fd9 | undefined core_cloth.cpp_FUN_0043bf80()
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00568fde
    PUSH 0x0                            ; 00568fe1
    SUB EAX,0x293c                      ; 00568fe3
    PUSH EAX                            ; 00568fe8
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 00568fe9 | CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00568fee
    PUSH 0x1                            ; 00568ff1
    LEA EBX,[EAX + 0xfffffea8]          ; 00568ff3
    PUSH EBX                            ; 00568ff9
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 00568ffa | CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00568fff
    MOV DL,byte ptr [ESP + 0xc]         ; 00569002
    MOV EBX,EAX                         ; 00569006
    TEST DL,0x2                         ; 00569008
    JNZ 0x0056902c                      ; 0056900b | LAB_0056902c
        ;   XREF to: 0056902c (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 0056900d
    POP EBX                             ; 0056900f
    RET                                 ; 00569010
    PUSH 0x662800                       ; 00569011 | WatcomTypeInfo g_CSentinelTypeInfo
        ;   Label: LAB_00569011
    PUSH EBX                            ; 00569016
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 00569017 | void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0056901c
    PUSH EAX                            ; 0056901f
    CALL crt_memory.c_free_FUN_005fe659 ; 00569020 | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00569025
    MOV EAX,EBX                         ; 00569028
    POP EBX                             ; 0056902a
    RET                                 ; 0056902b
    PUSH EAX                            ; 0056902c
        ;   Label: LAB_0056902c
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 0056902d | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00569032
    MOV EAX,EBX                         ; 00569035
    POP EBX                             ; 00569037
    RET                                 ; 00569038

