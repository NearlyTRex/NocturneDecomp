; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_batcreat_cpp_CBatCreature_dtor_FUN_00416320(CBatCreature *this_ptr,uint flags)
;
; Parameters:
; CBatCreature *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBatCreatureTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_armour.cpp_CFlame_arrdtor_FUN_00412720
;   core_armour.cpp_CVector3f_arrdtor_FUN_004126e0
;   core_armour.cpp_SFire_arrdtor_FUN_00412700
;   core_cloth.cpp_CClothList_dtor_FUN_0043bf80
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00416320
        ;   Label: core_batcreat.cpp_CBatCreature_dtor_FUN_00416320
    MOV EBX,dword ptr [ESP + 0x8]       ; 00416321
    TEST byte ptr [ESP + 0xc],0x4       ; 00416325
    JNZ 0x004163b1                      ; 0041632a
        ;   XREF to: 004163b1 (CONDITIONAL_JUMP)  ; LAB_004163b1
    PUSH 0x0                            ; 00416330
    ADD EBX,0x33cc                      ; 00416332
    PUSH EBX                            ; 00416338
    CALL core_armour.cpp_CFlame_arrdtor_FUN_00412720 ; 00416339
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor_FUN_00412720(CFlame * objs, uint flags)
    ADD ESP,0x8                         ; 0041633e
    PUSH 0x0                            ; 00416341
    SUB EAX,0x4b0                       ; 00416343
    PUSH EAX                            ; 00416348
    CALL core_armour.cpp_SFire_arrdtor_FUN_00412700 ; 00416349
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor_FUN_00412700(SFire * objs, uint flags)
    ADD ESP,0x8                         ; 0041634e
    PUSH 0x0                            ; 00416351
    SUB EAX,0x20c                       ; 00416353
    PUSH EAX                            ; 00416358
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_004126e0 ; 00416359
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_004126e0(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 0041635e
    PUSH 0x0                            ; 00416361
    SUB EAX,0xb4                        ; 00416363
    PUSH EAX                            ; 00416368
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_004126e0 ; 00416369
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_004126e0(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 0041636e
    PUSH 0x0                            ; 00416371
    SUB EAX,0x1c8                       ; 00416373
    PUSH EAX                            ; 00416378
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043bf80 ; 00416379
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043bf80(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041637e
    PUSH 0x0                            ; 00416381
    SUB EAX,0x293c                      ; 00416383
    PUSH EAX                            ; 00416388
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 00416389
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041638e
    PUSH 0x1                            ; 00416391
    LEA EBX,[EAX + 0xfffffea8]          ; 00416393
    PUSH EBX                            ; 00416399
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 0041639a
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041639f
    MOV DL,byte ptr [ESP + 0xc]         ; 004163a2
    MOV EBX,EAX                         ; 004163a6
    TEST DL,0x2                         ; 004163a8
    JNZ 0x004163cc                      ; 004163ab
        ;   XREF to: 004163cc (CONDITIONAL_JUMP)  ; LAB_004163cc
    MOV EAX,EBX                         ; 004163ad
    POP EBX                             ; 004163af
    RET                                 ; 004163b0
    PUSH 0x65a730                       ; 004163b1 | g_CBatCreatureTypeInfo
        ;   Label: LAB_004163b1
    PUSH EBX                            ; 004163b6
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 004163b7
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004163bc
    PUSH EAX                            ; 004163bf
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 004163c0
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004163c5
    MOV EAX,EBX                         ; 004163c8
    POP EBX                             ; 004163ca
    RET                                 ; 004163cb
    PUSH EAX                            ; 004163cc
        ;   Label: LAB_004163cc
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 004163cd
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004163d2
    MOV EAX,EBX                         ; 004163d5
    POP EBX                             ; 004163d7
    RET                                 ; 004163d8

