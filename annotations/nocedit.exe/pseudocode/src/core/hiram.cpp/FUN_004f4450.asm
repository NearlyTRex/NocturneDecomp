; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CHiram * core_hiram.cpp_FUN_004f4450(CHiram * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8, uint d9)
;
; Parameters:
; CHiram *         Stack[0x4]:4   this_ptr
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
;   CDemonActor_vtable g_CHiramVTable
;   WatcomTypeInfo g_CHiramTypeInfo
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

    PUSH EBX                            ; 004f4450
        ;   Label: core_hiram.cpp_FUN_004f4450
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f4451
    TEST byte ptr [ESP + 0xc],0x4       ; 004f4455
    JNZ 0x004f44fb                      ; 004f445a
        ;   XREF to: 004f44fb (CONDITIONAL_JUMP)  ; LAB_004f44fb
    PUSH 0x0                            ; 004f4460
    ADD EBX,0xbe24                      ; 004f4462
    PUSH EBX                            ; 004f4468
    MOV dword ptr [EBX + 0xffff4330],0x65f974 ; 004f4469 | g_CHiramVTable
    CALL core_path.cpp_CPathMap_dtor_FUN_005464d0 ; 004f4473
        ;   XREF to: 005464d0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_dtor_FUN_005464d0(CPathMap * this_ptr)
    ADD ESP,0x8                         ; 004f4478
    PUSH 0x0                            ; 004f447b
    SUB EAX,0x8a58                      ; 004f447d
    PUSH EAX                            ; 004f4482
    CALL core_backgnd.cpp_freeFlames_FUN_00412720 ; 004f4483
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)  ; int core_backgnd.cpp_freeFlames_FUN_00412720(CFlame * * array)
    ADD ESP,0x8                         ; 004f4488
    PUSH 0x0                            ; 004f448b
    SUB EAX,0x4b0                       ; 004f448d
    PUSH EAX                            ; 004f4492
    CALL core_backgnd.cpp_freeFires_FUN_00412700 ; 004f4493
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)  ; int core_backgnd.cpp_freeFires_FUN_00412700(SFire * * objs)
    ADD ESP,0x8                         ; 004f4498
    PUSH 0x0                            ; 004f449b
    SUB EAX,0x20c                       ; 004f449d
    PUSH EAX                            ; 004f44a2
    CALL core_backgnd.cpp_cleanupVector_FUN_004126e0 ; 004f44a3
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; int core_backgnd.cpp_cleanupVector_FUN_004126e0(CVector3f * * objs)
    ADD ESP,0x8                         ; 004f44a8
    PUSH 0x0                            ; 004f44ab
    SUB EAX,0xb4                        ; 004f44ad
    PUSH EAX                            ; 004f44b2
    CALL core_backgnd.cpp_cleanupVector_FUN_004126e0 ; 004f44b3
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; int core_backgnd.cpp_cleanupVector_FUN_004126e0(CVector3f * * objs)
    ADD ESP,0x8                         ; 004f44b8
    PUSH 0x0                            ; 004f44bb
    SUB EAX,0x1c8                       ; 004f44bd
    PUSH EAX                            ; 004f44c2
    CALL core_cloth.cpp_FUN_0043bf80    ; 004f44c3
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_0043bf80()
    ADD ESP,0x8                         ; 004f44c8
    PUSH 0x0                            ; 004f44cb
    SUB EAX,0x293c                      ; 004f44cd
    PUSH EAX                            ; 004f44d2
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 004f44d3
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 004f44d8
    PUSH 0x1                            ; 004f44db
    LEA EBX,[EAX + 0xfffffea8]          ; 004f44dd
    PUSH EBX                            ; 004f44e3
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 004f44e4
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
    ADD ESP,0x8                         ; 004f44e9
    MOV DL,byte ptr [ESP + 0xc]         ; 004f44ec
    MOV EBX,EAX                         ; 004f44f0
    TEST DL,0x2                         ; 004f44f2
    JNZ 0x004f4516                      ; 004f44f5
        ;   XREF to: 004f4516 (CONDITIONAL_JUMP)  ; LAB_004f4516
    MOV EAX,EBX                         ; 004f44f7
    POP EBX                             ; 004f44f9
    RET                                 ; 004f44fa
    PUSH 0x65fad0                       ; 004f44fb | g_CHiramTypeInfo
        ;   Label: LAB_004f44fb
    PUSH EBX                            ; 004f4500
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 004f4501
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004f4506
    PUSH EAX                            ; 004f4509
    CALL crt_memory.c_free_FUN_005fe659 ; 004f450a
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004f450f
    MOV EAX,EBX                         ; 004f4512
    POP EBX                             ; 004f4514
    RET                                 ; 004f4515
    PUSH EAX                            ; 004f4516
        ;   Label: LAB_004f4516
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004f4517
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004f451c
    MOV EAX,EBX                         ; 004f451f
    POP EBX                             ; 004f4521
    RET                                 ; 004f4522

