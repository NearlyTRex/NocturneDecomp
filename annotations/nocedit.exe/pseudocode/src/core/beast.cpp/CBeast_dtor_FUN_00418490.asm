; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBeast * __cdecl core_beast_cpp_CBeast_dtor_FUN_00418490(CBeast *this_ptr,uint flags)
;
; Parameters:
; CBeast *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBeastTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_armour.cpp_freeFires_FUN_00412700
;   core_armour.cpp_freeFlames_FUN_00412720
;   core_armour.cpp_freeVectors_FUN_004126e0
;   core_cloth.cpp_FUN_0043bf80
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00418490
        ;   Label: core_beast.cpp_CBeast_dtor_FUN_00418490
    MOV EBX,dword ptr [ESP + 0x8]       ; 00418491
    TEST byte ptr [ESP + 0xc],0x4       ; 00418495
    JNZ 0x00418521                      ; 0041849a
        ;   XREF to: 00418521 (CONDITIONAL_JUMP)  ; LAB_00418521
    PUSH 0x0                            ; 004184a0
    ADD EBX,0x33cc                      ; 004184a2
    PUSH EBX                            ; 004184a8
    CALL core_armour.cpp_freeFlames_FUN_00412720 ; 004184a9
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_freeFlames_FUN_00412720(CFlame * objs)
    ADD ESP,0x8                         ; 004184ae
    PUSH 0x0                            ; 004184b1
    SUB EAX,0x4b0                       ; 004184b3
    PUSH EAX                            ; 004184b8
    CALL core_armour.cpp_freeFires_FUN_00412700 ; 004184b9
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_freeFires_FUN_00412700(SFire * objs)
    ADD ESP,0x8                         ; 004184be
    PUSH 0x0                            ; 004184c1
    SUB EAX,0x20c                       ; 004184c3
    PUSH EAX                            ; 004184c8
    CALL core_armour.cpp_freeVectors_FUN_004126e0 ; 004184c9
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_freeVectors_FUN_004126e0(CVector3f * objs)
    ADD ESP,0x8                         ; 004184ce
    PUSH 0x0                            ; 004184d1
    SUB EAX,0xb4                        ; 004184d3
    PUSH EAX                            ; 004184d8
    CALL core_armour.cpp_freeVectors_FUN_004126e0 ; 004184d9
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_freeVectors_FUN_004126e0(CVector3f * objs)
    ADD ESP,0x8                         ; 004184de
    PUSH 0x0                            ; 004184e1
    SUB EAX,0x1c8                       ; 004184e3
    PUSH EAX                            ; 004184e8
    CALL core_cloth.cpp_FUN_0043bf80    ; 004184e9
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)  ; int core_cloth.cpp_FUN_0043bf80()
    ADD ESP,0x8                         ; 004184ee
    PUSH 0x0                            ; 004184f1
    SUB EAX,0x293c                      ; 004184f3
    PUSH EAX                            ; 004184f8
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 004184f9
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004184fe
    PUSH 0x1                            ; 00418501
    LEA EBX,[EAX + 0xfffffea8]          ; 00418503
    PUSH EBX                            ; 00418509
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 0041850a
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041850f
    MOV DL,byte ptr [ESP + 0xc]         ; 00418512
    MOV EBX,EAX                         ; 00418516
    TEST DL,0x2                         ; 00418518
    JNZ 0x0041853c                      ; 0041851b
        ;   XREF to: 0041853c (CONDITIONAL_JUMP)  ; LAB_0041853c
    MOV EAX,EBX                         ; 0041851d
    POP EBX                             ; 0041851f
    RET                                 ; 00418520
    PUSH 0x65abd0                       ; 00418521 | g_CBeastTypeInfo
        ;   Label: LAB_00418521
    PUSH EBX                            ; 00418526
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 00418527
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0041852c
    PUSH EAX                            ; 0041852f
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00418530
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00418535
    MOV EAX,EBX                         ; 00418538
    POP EBX                             ; 0041853a
    RET                                 ; 0041853b
    PUSH EAX                            ; 0041853c
        ;   Label: LAB_0041853c
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 0041853d
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 00418542
    MOV EAX,EBX                         ; 00418545
    POP EBX                             ; 00418547
    RET                                 ; 00418548

