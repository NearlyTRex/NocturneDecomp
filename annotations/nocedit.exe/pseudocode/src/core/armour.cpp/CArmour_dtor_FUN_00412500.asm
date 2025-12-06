; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CArmour * core_armour.cpp_CArmour_dtor_FUN_00412500(CArmour * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8)
;
; Parameters:
; CArmour *        Stack[0x4]:4   this_ptr
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
;   WatcomTypeInfo g_CArmourTypeInfo
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

    PUSH EBX                            ; 00412500
        ;   Label: core_armour.cpp_CArmour_dtor_FUN_00412500
    MOV EBX,dword ptr [ESP + 0x8]       ; 00412501
    TEST byte ptr [ESP + 0xc],0x4       ; 00412505
    JNZ 0x00412591                      ; 0041250a | LAB_00412591
        ;   XREF to: 00412591 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 00412510
    ADD EBX,0x33cc                      ; 00412512
    PUSH EBX                            ; 00412518
    CALL core_backgnd.cpp_freeFlames_FUN_00412720 ; 00412519 | int core_backgnd.cpp_freeFlames_FUN_00412720(CFlame * * array)
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041251e
    PUSH 0x0                            ; 00412521
    SUB EAX,0x4b0                       ; 00412523
    PUSH EAX                            ; 00412528
    CALL core_backgnd.cpp_freeFires_FUN_00412700 ; 00412529 | int core_backgnd.cpp_freeFires_FUN_00412700(SFire * * objs)
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041252e
    PUSH 0x0                            ; 00412531
    SUB EAX,0x20c                       ; 00412533
    PUSH EAX                            ; 00412538
    CALL core_backgnd.cpp_cleanupVector_FUN_004126e0 ; 00412539 | int core_backgnd.cpp_cleanupVector_FUN_004126e0(CVector3f * * objs)
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041253e
    PUSH 0x0                            ; 00412541
    SUB EAX,0xb4                        ; 00412543
    PUSH EAX                            ; 00412548
    CALL core_backgnd.cpp_cleanupVector_FUN_004126e0 ; 00412549 | int core_backgnd.cpp_cleanupVector_FUN_004126e0(CVector3f * * objs)
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041254e
    PUSH 0x0                            ; 00412551
    SUB EAX,0x1c8                       ; 00412553
    PUSH EAX                            ; 00412558
    CALL core_cloth.cpp_FUN_0043bf80    ; 00412559 | undefined core_cloth.cpp_FUN_0043bf80()
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041255e
    PUSH 0x0                            ; 00412561
    SUB EAX,0x293c                      ; 00412563
    PUSH EAX                            ; 00412568
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 00412569 | CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041256e
    PUSH 0x1                            ; 00412571
    LEA EBX,[EAX + 0xfffffea8]          ; 00412573
    PUSH EBX                            ; 00412579
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 0041257a | CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041257f
    MOV DL,byte ptr [ESP + 0xc]         ; 00412582
    MOV EBX,EAX                         ; 00412586
    TEST DL,0x2                         ; 00412588
    JNZ 0x004125ac                      ; 0041258b | LAB_004125ac
        ;   XREF to: 004125ac (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 0041258d
    POP EBX                             ; 0041258f
    RET                                 ; 00412590
    PUSH 0x659ea0                       ; 00412591 | WatcomTypeInfo g_CArmourTypeInfo
        ;   Label: LAB_00412591
    PUSH EBX                            ; 00412596
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 00412597 | void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041259c
    PUSH EAX                            ; 0041259f
    CALL crt_memory.c_free_FUN_005fe659 ; 004125a0 | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004125a5
    MOV EAX,EBX                         ; 004125a8
    POP EBX                             ; 004125aa
    RET                                 ; 004125ab
    PUSH EAX                            ; 004125ac
        ;   Label: LAB_004125ac
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004125ad | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004125b2
    MOV EAX,EBX                         ; 004125b5
    POP EBX                             ; 004125b7
    RET                                 ; 004125b8

