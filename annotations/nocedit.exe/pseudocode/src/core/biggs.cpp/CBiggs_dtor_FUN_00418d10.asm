; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBiggs * core_biggs.cpp_CBiggs_dtor_FUN_00418d10(CBiggs * this_ptr, uint d1)
;
; Parameters:
; CBiggs *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
;
; Referenced Globals:
;   WatcomTypeInfo g_CBiggsTypeInfo
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

    PUSH EBX                            ; 00418d10
        ;   Label: core_biggs.cpp_CBiggs_dtor_FUN_00418d10
    MOV EBX,dword ptr [ESP + 0x8]       ; 00418d11
    TEST byte ptr [ESP + 0xc],0x4       ; 00418d15
    JNZ 0x00418db1                      ; 00418d1a
        ;   XREF to: 00418db1 (CONDITIONAL_JUMP)  ; LAB_00418db1
    PUSH 0x0                            ; 00418d20
    ADD EBX,0xc040                      ; 00418d22
    PUSH EBX                            ; 00418d28
    CALL core_morph.cpp_CMorphModel_FUN_0052b330 ; 00418d29
        ;   XREF to: 0052b330 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_FUN_0052b330(CMorphModel * this_ptr)
    ADD ESP,0x8                         ; 00418d2e
    PUSH 0x0                            ; 00418d31
    SUB EAX,0x8c74                      ; 00418d33
    PUSH EAX                            ; 00418d38
    CALL core_backgnd.cpp_freeFlames_FUN_00412720 ; 00418d39
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)  ; int core_backgnd.cpp_freeFlames_FUN_00412720(CFlame * * array)
    ADD ESP,0x8                         ; 00418d3e
    PUSH 0x0                            ; 00418d41
    SUB EAX,0x4b0                       ; 00418d43
    PUSH EAX                            ; 00418d48
    CALL core_backgnd.cpp_freeFires_FUN_00412700 ; 00418d49
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)  ; int core_backgnd.cpp_freeFires_FUN_00412700(SFire * * objs)
    ADD ESP,0x8                         ; 00418d4e
    PUSH 0x0                            ; 00418d51
    SUB EAX,0x20c                       ; 00418d53
    PUSH EAX                            ; 00418d58
    CALL core_backgnd.cpp_cleanupVector_FUN_004126e0 ; 00418d59
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; int core_backgnd.cpp_cleanupVector_FUN_004126e0(CVector3f * * objs)
    ADD ESP,0x8                         ; 00418d5e
    PUSH 0x0                            ; 00418d61
    SUB EAX,0xb4                        ; 00418d63
    PUSH EAX                            ; 00418d68
    CALL core_backgnd.cpp_cleanupVector_FUN_004126e0 ; 00418d69
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; int core_backgnd.cpp_cleanupVector_FUN_004126e0(CVector3f * * objs)
    ADD ESP,0x8                         ; 00418d6e
    PUSH 0x0                            ; 00418d71
    SUB EAX,0x1c8                       ; 00418d73
    PUSH EAX                            ; 00418d78
    CALL core_cloth.cpp_FUN_0043bf80    ; 00418d79
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_0043bf80()
    ADD ESP,0x8                         ; 00418d7e
    PUSH 0x0                            ; 00418d81
    SUB EAX,0x293c                      ; 00418d83
    PUSH EAX                            ; 00418d88
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 00418d89
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 00418d8e
    PUSH 0x1                            ; 00418d91
    LEA EBX,[EAX + 0xfffffea8]          ; 00418d93
    PUSH EBX                            ; 00418d99
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 00418d9a
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
    ADD ESP,0x8                         ; 00418d9f
    MOV DL,byte ptr [ESP + 0xc]         ; 00418da2
    MOV EBX,EAX                         ; 00418da6
    TEST DL,0x2                         ; 00418da8
    JNZ 0x00418dcc                      ; 00418dab
        ;   XREF to: 00418dcc (CONDITIONAL_JUMP)  ; LAB_00418dcc
    MOV EAX,EBX                         ; 00418dad
    POP EBX                             ; 00418daf
    RET                                 ; 00418db0
    PUSH 0x65ad90                       ; 00418db1 | g_CBiggsTypeInfo
        ;   Label: LAB_00418db1
    PUSH EBX                            ; 00418db6
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 00418db7
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00418dbc
    PUSH EAX                            ; 00418dbf
    CALL crt_memory.c_free_FUN_005fe659 ; 00418dc0
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00418dc5
    MOV EAX,EBX                         ; 00418dc8
    POP EBX                             ; 00418dca
    RET                                 ; 00418dcb
    PUSH EAX                            ; 00418dcc
        ;   Label: LAB_00418dcc
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 00418dcd
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 00418dd2
    MOV EAX,EBX                         ; 00418dd5
    POP EBX                             ; 00418dd7
    RET                                 ; 00418dd8

