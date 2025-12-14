; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CImp * core_imp.cpp_FUN_004fb180(CImp * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8)
;
; Parameters:
; CImp *           Stack[0x4]:4   this_ptr
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
;   WatcomTypeInfo g_CImpTypeInfo
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

    PUSH EBX                            ; 004fb180
        ;   Label: core_imp.cpp_FUN_004fb180
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fb181
    TEST byte ptr [ESP + 0xc],0x4       ; 004fb185
    JNZ 0x004fb211                      ; 004fb18a
        ;   XREF to: 004fb211 (CONDITIONAL_JUMP)  ; LAB_004fb211
    PUSH 0x0                            ; 004fb190
    ADD EBX,0x33cc                      ; 004fb192
    PUSH EBX                            ; 004fb198
    CALL core_backgnd.cpp_freeFlames_FUN_00412720 ; 004fb199
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)  ; int core_backgnd.cpp_freeFlames_FUN_00412720(CFlame * * array)
    ADD ESP,0x8                         ; 004fb19e
    PUSH 0x0                            ; 004fb1a1
    SUB EAX,0x4b0                       ; 004fb1a3
    PUSH EAX                            ; 004fb1a8
    CALL core_backgnd.cpp_freeFires_FUN_00412700 ; 004fb1a9
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)  ; int core_backgnd.cpp_freeFires_FUN_00412700(SFire * * objs)
    ADD ESP,0x8                         ; 004fb1ae
    PUSH 0x0                            ; 004fb1b1
    SUB EAX,0x20c                       ; 004fb1b3
    PUSH EAX                            ; 004fb1b8
    CALL core_backgnd.cpp_cleanupVector_FUN_004126e0 ; 004fb1b9
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; int core_backgnd.cpp_cleanupVector_FUN_004126e0(CVector3f * * objs)
    ADD ESP,0x8                         ; 004fb1be
    PUSH 0x0                            ; 004fb1c1
    SUB EAX,0xb4                        ; 004fb1c3
    PUSH EAX                            ; 004fb1c8
    CALL core_backgnd.cpp_cleanupVector_FUN_004126e0 ; 004fb1c9
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; int core_backgnd.cpp_cleanupVector_FUN_004126e0(CVector3f * * objs)
    ADD ESP,0x8                         ; 004fb1ce
    PUSH 0x0                            ; 004fb1d1
    SUB EAX,0x1c8                       ; 004fb1d3
    PUSH EAX                            ; 004fb1d8
    CALL core_cloth.cpp_FUN_0043bf80    ; 004fb1d9
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_0043bf80()
    ADD ESP,0x8                         ; 004fb1de
    PUSH 0x0                            ; 004fb1e1
    SUB EAX,0x293c                      ; 004fb1e3
    PUSH EAX                            ; 004fb1e8
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 004fb1e9
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 004fb1ee
    PUSH 0x1                            ; 004fb1f1
    LEA EBX,[EAX + 0xfffffea8]          ; 004fb1f3
    PUSH EBX                            ; 004fb1f9
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 004fb1fa
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
    ADD ESP,0x8                         ; 004fb1ff
    MOV DL,byte ptr [ESP + 0xc]         ; 004fb202
    MOV EBX,EAX                         ; 004fb206
    TEST DL,0x2                         ; 004fb208
    JNZ 0x004fb22c                      ; 004fb20b
        ;   XREF to: 004fb22c (CONDITIONAL_JUMP)  ; LAB_004fb22c
    MOV EAX,EBX                         ; 004fb20d
    POP EBX                             ; 004fb20f
    RET                                 ; 004fb210
    PUSH 0x660360                       ; 004fb211 | g_CImpTypeInfo
        ;   Label: LAB_004fb211
    PUSH EBX                            ; 004fb216
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 004fb217
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004fb21c
    PUSH EAX                            ; 004fb21f
    CALL crt_memory.c_free_FUN_005fe659 ; 004fb220
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004fb225
    MOV EAX,EBX                         ; 004fb228
    POP EBX                             ; 004fb22a
    RET                                 ; 004fb22b
    PUSH EAX                            ; 004fb22c
        ;   Label: LAB_004fb22c
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004fb22d
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004fb232
    MOV EAX,EBX                         ; 004fb235
    POP EBX                             ; 004fb237
    RET                                 ; 004fb238

