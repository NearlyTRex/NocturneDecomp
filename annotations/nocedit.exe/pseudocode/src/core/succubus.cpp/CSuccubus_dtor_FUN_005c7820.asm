; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CSuccubus * core_succubus.cpp_CSuccubus_dtor_FUN_005c7820(CSuccubus * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8, uint d9, uint d10, uint d11)
;
; Parameters:
; CSuccubus *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
; uint             Stack[0x10]:4   d3
; uint             Stack[0x14]:4   d4
; uint             Stack[0x18]:4   d5
; uint             Stack[0x1c]:4   d6
; uint             Stack[0x20]:4   d7
; uint             Stack[0x24]:4   d8
; uint             Stack[0x28]:4   d9
; uint             Stack[0x2c]:4   d10
; uint             Stack[0x30]:4   d11
;
; Referenced Globals:
;   WatcomTypeInfo g_CSuccubusTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_backgnd.cpp_cleanupVector_FUN_004126e0
;   core_backgnd.cpp_freeFires_FUN_00412700
;   core_backgnd.cpp_freeFlames_FUN_00412720
;   core_cloth.cpp_FUN_0043bf80
;   core_morph.cpp_CMorphModel_FUN_0052b330
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c7820
        ;   Label: core_succubus.cpp_CSuccubus_dtor_FUN_005c7820
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c7821
    TEST byte ptr [ESP + 0xc],0x4       ; 005c7825
    JNZ 0x005c78e1                      ; 005c782a | LAB_005c78e1
        ;   XREF to: 005c78e1 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 005c7830
    ADD EBX,0xe33c                      ; 005c7832
    PUSH EBX                            ; 005c7838
    CALL core_morph.cpp_CMorphModel_FUN_0052b330 ; 005c7839 | void core_morph.cpp_CMorphModel_FUN_0052b330(CMorphModel * this_ptr)
        ;   XREF to: 0052b330 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c783e
    PUSH 0x0                            ; 005c7841
    SUB EAX,0x1cc                       ; 005c7843
    PUSH EAX                            ; 005c7848
    CALL core_cloth.cpp_FUN_0043bf80    ; 005c7849 | undefined core_cloth.cpp_FUN_0043bf80()
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c784e
    PUSH 0x0                            ; 005c7851
    SUB EAX,0x22b4                      ; 005c7853
    PUSH EAX                            ; 005c7858
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 005c7859 | CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c785e
    PUSH 0x0                            ; 005c7861
    SUB EAX,0x8af0                      ; 005c7863
    PUSH EAX                            ; 005c7868
    CALL core_backgnd.cpp_freeFlames_FUN_00412720 ; 005c7869 | int core_backgnd.cpp_freeFlames_FUN_00412720(CFlame * * array)
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c786e
    PUSH 0x0                            ; 005c7871
    SUB EAX,0x4b0                       ; 005c7873
    PUSH EAX                            ; 005c7878
    CALL core_backgnd.cpp_freeFires_FUN_00412700 ; 005c7879 | int core_backgnd.cpp_freeFires_FUN_00412700(SFire * * objs)
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c787e
    PUSH 0x0                            ; 005c7881
    SUB EAX,0x20c                       ; 005c7883
    PUSH EAX                            ; 005c7888
    CALL core_backgnd.cpp_cleanupVector_FUN_004126e0 ; 005c7889 | int core_backgnd.cpp_cleanupVector_FUN_004126e0(CVector3f * * objs)
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c788e
    PUSH 0x0                            ; 005c7891
    SUB EAX,0xb4                        ; 005c7893
    PUSH EAX                            ; 005c7898
    CALL core_backgnd.cpp_cleanupVector_FUN_004126e0 ; 005c7899 | int core_backgnd.cpp_cleanupVector_FUN_004126e0(CVector3f * * objs)
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c789e
    PUSH 0x0                            ; 005c78a1
    SUB EAX,0x1c8                       ; 005c78a3
    PUSH EAX                            ; 005c78a8
    CALL core_cloth.cpp_FUN_0043bf80    ; 005c78a9 | undefined core_cloth.cpp_FUN_0043bf80()
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c78ae
    PUSH 0x0                            ; 005c78b1
    SUB EAX,0x293c                      ; 005c78b3
    PUSH EAX                            ; 005c78b8
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 005c78b9 | CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c78be
    PUSH 0x1                            ; 005c78c1
    LEA EBX,[EAX + 0xfffffea8]          ; 005c78c3
    PUSH EBX                            ; 005c78c9
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 005c78ca | CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c78cf
    MOV DL,byte ptr [ESP + 0xc]         ; 005c78d2
    MOV EBX,EAX                         ; 005c78d6
    TEST DL,0x2                         ; 005c78d8
    JNZ 0x005c78fc                      ; 005c78db | LAB_005c78fc
        ;   XREF to: 005c78fc (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 005c78dd
    POP EBX                             ; 005c78df
    RET                                 ; 005c78e0
    PUSH 0x663ab0                       ; 005c78e1 | WatcomTypeInfo g_CSuccubusTypeInfo
        ;   Label: LAB_005c78e1
    PUSH EBX                            ; 005c78e6
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 005c78e7 | void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c78ec
    PUSH EAX                            ; 005c78ef
    CALL crt_memory.c_free_FUN_005fe659 ; 005c78f0 | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005c78f5
    MOV EAX,EBX                         ; 005c78f8
    POP EBX                             ; 005c78fa
    RET                                 ; 005c78fb
    PUSH EAX                            ; 005c78fc
        ;   Label: LAB_005c78fc
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005c78fd | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005c7902
    MOV EAX,EBX                         ; 005c7905
    POP EBX                             ; 005c7907
    RET                                 ; 005c7908

