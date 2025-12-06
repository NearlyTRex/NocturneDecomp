; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CTVBat * core_tvbat.cpp_CTVBat_dtor_FUN_005e5460(CTVBat * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
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
;   WatcomTypeInfo g_CTVBatTypeInfo
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

    PUSH EBX                            ; 005e5460
        ;   Label: core_tvbat.cpp_CTVBat_dtor_FUN_005e5460
    MOV EBX,dword ptr [ESP + 0x8]       ; 005e5461
    TEST byte ptr [ESP + 0xc],0x4       ; 005e5465
    JNZ 0x005e54f1                      ; 005e546a | LAB_005e54f1
        ;   XREF to: 005e54f1 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 005e5470
    ADD EBX,0x33cc                      ; 005e5472
    PUSH EBX                            ; 005e5478
    CALL core_backgnd.cpp_freeFlames_FUN_00412720 ; 005e5479 | int core_backgnd.cpp_freeFlames_FUN_00412720(CFlame * * array)
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e547e
    PUSH 0x0                            ; 005e5481
    SUB EAX,0x4b0                       ; 005e5483
    PUSH EAX                            ; 005e5488
    CALL core_backgnd.cpp_freeFires_FUN_00412700 ; 005e5489 | int core_backgnd.cpp_freeFires_FUN_00412700(SFire * * objs)
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e548e
    PUSH 0x0                            ; 005e5491
    SUB EAX,0x20c                       ; 005e5493
    PUSH EAX                            ; 005e5498
    CALL core_backgnd.cpp_cleanupVector_FUN_004126e0 ; 005e5499 | int core_backgnd.cpp_cleanupVector_FUN_004126e0(CVector3f * * objs)
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e549e
    PUSH 0x0                            ; 005e54a1
    SUB EAX,0xb4                        ; 005e54a3
    PUSH EAX                            ; 005e54a8
    CALL core_backgnd.cpp_cleanupVector_FUN_004126e0 ; 005e54a9 | int core_backgnd.cpp_cleanupVector_FUN_004126e0(CVector3f * * objs)
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e54ae
    PUSH 0x0                            ; 005e54b1
    SUB EAX,0x1c8                       ; 005e54b3
    PUSH EAX                            ; 005e54b8
    CALL core_cloth.cpp_FUN_0043bf80    ; 005e54b9 | undefined core_cloth.cpp_FUN_0043bf80()
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e54be
    PUSH 0x0                            ; 005e54c1
    SUB EAX,0x293c                      ; 005e54c3
    PUSH EAX                            ; 005e54c8
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 005e54c9 | CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e54ce
    PUSH 0x1                            ; 005e54d1
    LEA EBX,[EAX + 0xfffffea8]          ; 005e54d3
    PUSH EBX                            ; 005e54d9
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 005e54da | CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e54df
    MOV DL,byte ptr [ESP + 0xc]         ; 005e54e2
    MOV EBX,EAX                         ; 005e54e6
    TEST DL,0x2                         ; 005e54e8
    JNZ 0x005e550c                      ; 005e54eb | LAB_005e550c
        ;   XREF to: 005e550c (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 005e54ed
    POP EBX                             ; 005e54ef
    RET                                 ; 005e54f0
    PUSH 0x664e40                       ; 005e54f1 | WatcomTypeInfo g_CTVBatTypeInfo
        ;   Label: LAB_005e54f1
    PUSH EBX                            ; 005e54f6
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 005e54f7 | void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e54fc
    PUSH EAX                            ; 005e54ff
    CALL crt_memory.c_free_FUN_005fe659 ; 005e5500 | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005e5505
    MOV EAX,EBX                         ; 005e5508
    POP EBX                             ; 005e550a
    RET                                 ; 005e550b
    PUSH EAX                            ; 005e550c
        ;   Label: LAB_005e550c
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005e550d | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005e5512
    MOV EAX,EBX                         ; 005e5515
    POP EBX                             ; 005e5517
    RET                                 ; 005e5518

