; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActor * core_hotdemon.cpp_FUN_004f7a40(CHotDemon * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8)
;
; Parameters:
; CHotDemon *      Stack[0x4]:4   this_ptr
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
;   WatcomTypeInfo g_CHotDemonTypeInfo
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

    PUSH EBX                            ; 004f7a40
        ;   Label: core_hotdemon.cpp_FUN_004f7a40
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f7a41
    TEST byte ptr [ESP + 0xc],0x4       ; 004f7a45
    JNZ 0x004f7ad1                      ; 004f7a4a | LAB_004f7ad1
        ;   XREF to: 004f7ad1 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 004f7a50
    ADD EBX,0x33cc                      ; 004f7a52
    PUSH EBX                            ; 004f7a58
    CALL core_backgnd.cpp_freeFlames_FUN_00412720 ; 004f7a59 | int core_backgnd.cpp_freeFlames_FUN_00412720(CFlame * * array)
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f7a5e
    PUSH 0x0                            ; 004f7a61
    SUB EAX,0x4b0                       ; 004f7a63
    PUSH EAX                            ; 004f7a68
    CALL core_backgnd.cpp_freeFires_FUN_00412700 ; 004f7a69 | int core_backgnd.cpp_freeFires_FUN_00412700(SFire * * objs)
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f7a6e
    PUSH 0x0                            ; 004f7a71
    SUB EAX,0x20c                       ; 004f7a73
    PUSH EAX                            ; 004f7a78
    CALL core_backgnd.cpp_cleanupVector_FUN_004126e0 ; 004f7a79 | int core_backgnd.cpp_cleanupVector_FUN_004126e0(CVector3f * * objs)
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f7a7e
    PUSH 0x0                            ; 004f7a81
    SUB EAX,0xb4                        ; 004f7a83
    PUSH EAX                            ; 004f7a88
    CALL core_backgnd.cpp_cleanupVector_FUN_004126e0 ; 004f7a89 | int core_backgnd.cpp_cleanupVector_FUN_004126e0(CVector3f * * objs)
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f7a8e
    PUSH 0x0                            ; 004f7a91
    SUB EAX,0x1c8                       ; 004f7a93
    PUSH EAX                            ; 004f7a98
    CALL core_cloth.cpp_FUN_0043bf80    ; 004f7a99 | undefined core_cloth.cpp_FUN_0043bf80()
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f7a9e
    PUSH 0x0                            ; 004f7aa1
    SUB EAX,0x293c                      ; 004f7aa3
    PUSH EAX                            ; 004f7aa8
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 004f7aa9 | CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f7aae
    PUSH 0x1                            ; 004f7ab1
    LEA EBX,[EAX + 0xfffffea8]          ; 004f7ab3
    PUSH EBX                            ; 004f7ab9
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 004f7aba | CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f7abf
    MOV DL,byte ptr [ESP + 0xc]         ; 004f7ac2
    MOV EBX,EAX                         ; 004f7ac6
    TEST DL,0x2                         ; 004f7ac8
    JNZ 0x004f7aec                      ; 004f7acb | LAB_004f7aec
        ;   XREF to: 004f7aec (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 004f7acd
    POP EBX                             ; 004f7acf
    RET                                 ; 004f7ad0
    PUSH 0x65fe50                       ; 004f7ad1 | WatcomTypeInfo g_CHotDemonTypeInfo
        ;   Label: LAB_004f7ad1
    PUSH EBX                            ; 004f7ad6
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 004f7ad7 | void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f7adc
    PUSH EAX                            ; 004f7adf
    CALL crt_memory.c_free_FUN_005fe659 ; 004f7ae0 | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004f7ae5
    MOV EAX,EBX                         ; 004f7ae8
    POP EBX                             ; 004f7aea
    RET                                 ; 004f7aeb
    PUSH EAX                            ; 004f7aec
        ;   Label: LAB_004f7aec
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004f7aed | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004f7af2
    MOV EAX,EBX                         ; 004f7af5
    POP EBX                             ; 004f7af7
    RET                                 ; 004f7af8

