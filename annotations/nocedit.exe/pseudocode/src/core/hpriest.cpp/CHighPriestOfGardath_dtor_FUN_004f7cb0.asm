; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CHighPriestOfGardath * core_hpriest.cpp_CHighPriestOfGardath_dtor_FUN_004f7cb0(CHighPriestOfGardath * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8, uint d9)
;
; Parameters:
; CHighPriestOfGardath * Stack[0x4]:4   this_ptr
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
;   WatcomTypeInfo g_CHighPriestOfGardathTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_backgnd.cpp_cleanupVector_FUN_004126e0
;   core_backgnd.cpp_freeFires_FUN_00412700
;   core_backgnd.cpp_freeFlames_FUN_00412720
;   core_cloth.cpp_FUN_0043bf80
;   core_path.cpp_CPathMap_dtor_FUN_005464d0
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f7cb0
        ;   Label: core_hpriest.cpp_CHighPriestOfGardath_dtor_FUN_004f7cb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f7cb1
    TEST byte ptr [ESP + 0xc],0x4       ; 004f7cb5
    JNZ 0x004f7d51                      ; 004f7cba
        ;   XREF to: 004f7d51 (CONDITIONAL_JUMP)  ; LAB_004f7d51
    PUSH 0x0                            ; 004f7cc0
    ADD EBX,0xbe24                      ; 004f7cc2
    PUSH EBX                            ; 004f7cc8
    CALL core_path.cpp_CPathMap_dtor_FUN_005464d0 ; 004f7cc9
        ;   XREF to: 005464d0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_dtor_FUN_005464d0(CPathMap * this_ptr)
    ADD ESP,0x8                         ; 004f7cce
    PUSH 0x0                            ; 004f7cd1
    SUB EAX,0x8a58                      ; 004f7cd3
    PUSH EAX                            ; 004f7cd8
    CALL core_backgnd.cpp_freeFlames_FUN_00412720 ; 004f7cd9
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)  ; int core_backgnd.cpp_freeFlames_FUN_00412720(CFlame * * array)
    ADD ESP,0x8                         ; 004f7cde
    PUSH 0x0                            ; 004f7ce1
    SUB EAX,0x4b0                       ; 004f7ce3
    PUSH EAX                            ; 004f7ce8
    CALL core_backgnd.cpp_freeFires_FUN_00412700 ; 004f7ce9
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)  ; int core_backgnd.cpp_freeFires_FUN_00412700(SFire * * objs)
    ADD ESP,0x8                         ; 004f7cee
    PUSH 0x0                            ; 004f7cf1
    SUB EAX,0x20c                       ; 004f7cf3
    PUSH EAX                            ; 004f7cf8
    CALL core_backgnd.cpp_cleanupVector_FUN_004126e0 ; 004f7cf9
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; int core_backgnd.cpp_cleanupVector_FUN_004126e0(CVector3f * * objs)
    ADD ESP,0x8                         ; 004f7cfe
    PUSH 0x0                            ; 004f7d01
    SUB EAX,0xb4                        ; 004f7d03
    PUSH EAX                            ; 004f7d08
    CALL core_backgnd.cpp_cleanupVector_FUN_004126e0 ; 004f7d09
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; int core_backgnd.cpp_cleanupVector_FUN_004126e0(CVector3f * * objs)
    ADD ESP,0x8                         ; 004f7d0e
    PUSH 0x0                            ; 004f7d11
    SUB EAX,0x1c8                       ; 004f7d13
    PUSH EAX                            ; 004f7d18
    CALL core_cloth.cpp_FUN_0043bf80    ; 004f7d19
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_0043bf80()
    ADD ESP,0x8                         ; 004f7d1e
    PUSH 0x0                            ; 004f7d21
    SUB EAX,0x293c                      ; 004f7d23
    PUSH EAX                            ; 004f7d28
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 004f7d29
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 004f7d2e
    PUSH 0x1                            ; 004f7d31
    LEA EBX,[EAX + 0xfffffea8]          ; 004f7d33
    PUSH EBX                            ; 004f7d39
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 004f7d3a
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
    ADD ESP,0x8                         ; 004f7d3f
    MOV DL,byte ptr [ESP + 0xc]         ; 004f7d42
    MOV EBX,EAX                         ; 004f7d46
    TEST DL,0x2                         ; 004f7d48
    JNZ 0x004f7d6c                      ; 004f7d4b
        ;   XREF to: 004f7d6c (CONDITIONAL_JUMP)  ; LAB_004f7d6c
    MOV EAX,EBX                         ; 004f7d4d
    POP EBX                             ; 004f7d4f
    RET                                 ; 004f7d50
    PUSH 0x65fff0                       ; 004f7d51 | g_CHighPriestOfGardathTypeInfo
        ;   Label: LAB_004f7d51
    PUSH EBX                            ; 004f7d56
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 004f7d57
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004f7d5c
    PUSH EAX                            ; 004f7d5f
    CALL crt_memory.c_free_FUN_005fe659 ; 004f7d60
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004f7d65
    MOV EAX,EBX                         ; 004f7d68
    POP EBX                             ; 004f7d6a
    RET                                 ; 004f7d6b
    PUSH EAX                            ; 004f7d6c
        ;   Label: LAB_004f7d6c
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004f7d6d
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004f7d72
    MOV EAX,EBX                         ; 004f7d75
    POP EBX                             ; 004f7d77
    RET                                 ; 004f7d78

