; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMimic * core_mimic_cpp_CMimic_dtor_FUN_004f0400(CMimic *this_ptr,uint flags)
;
; Parameters:
; CMimic *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   CEnemy_full_vtable g_CMimicVTable
;   WatcomTypeInfo g_CMimicTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   core_armour.cpp_FUN_0040f2b0
;   core_cloth.cpp_CClothList_dtor_FUN_005b1480
;   core_morph.cpp_CMorph_dtor_FUN_005b6e80
;   core_necklace.cpp_FUN_005ade00
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;   unkaddr_0059d350.cpp_FUN_0059df70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f0400
        ;   Label: core_mimic.cpp_CMimic_dtor_FUN_004f0400
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f0401
    TEST byte ptr [ESP + 0xc],0x4       ; 004f0405
    JNZ 0x004f04c1                      ; 004f040a
        ;   XREF to: 004f04c1 (CONDITIONAL_JUMP)  ; LAB_004f04c1
    MOV EAX,dword ptr [EBX + 0x4c350]   ; 004f0410
    MOV dword ptr [EBX + 0x2b0],0x5f9e94 ; 004f0416 | g_CMimicVTable
    TEST EAX,EAX                        ; 004f0420
    JZ 0x004f0436                       ; 004f0422
        ;   XREF to: 004f0436 (CONDITIONAL_JUMP)  ; LAB_004f0436
    PUSH 0x2                            ; 004f0424
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004f0426
    PUSH EAX                            ; 004f042c
    CALL dword ptr [EDX + 0xd8]         ; 004f042d
    ADD ESP,0x8                         ; 004f0433
    PUSH 0x0                            ; 004f0436
        ;   Label: LAB_004f0436
    ADD EBX,0x4b720                     ; 004f0438
    PUSH EBX                            ; 004f043e
    MOV dword ptr [EBX + 0xc30],0x0     ; 004f043f
    CALL core_morph.cpp_CMorph_dtor_FUN_005b6e80 ; 004f0449
        ;   XREF to: 005b6e80 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_dtor_FUN_005b6e80(CMorph * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f044e
    PUSH 0x0                            ; 004f0451
    SUB EAX,0x3ab60                     ; 004f0453
    PUSH EAX                            ; 004f0458
    CALL core_necklace.cpp_FUN_005ade00 ; 004f0459
        ;   XREF to: 005ade00 (UNCONDITIONAL_CALL)  ; undefined core_necklace.cpp_FUN_005ade00()
    ADD ESP,0x8                         ; 004f045e
    PUSH 0x0                            ; 004f0461
    SUB EAX,0xd1a0                      ; 004f0463
    PUSH EAX                            ; 004f0468
    CALL core_armour.cpp_FUN_0040f2b0   ; 004f0469
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040f2b0()
    ADD ESP,0x8                         ; 004f046e
    PUSH 0x0                            ; 004f0471
    SUB EAX,0x9c8                       ; 004f0473
    PUSH EAX                            ; 004f0478
    CALL unkaddr_0059d350.cpp_FUN_0059df70 ; 004f0479
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059df70()
    ADD ESP,0x8                         ; 004f047e
    PUSH 0x0                            ; 004f0481
    SUB EAX,0x34c                       ; 004f0483
    PUSH EAX                            ; 004f0488
    CALL core_cloth.cpp_CClothList_dtor_FUN_005b1480 ; 004f0489
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f048e
    PUSH 0x0                            ; 004f0491
    SUB EAX,0x2a58                      ; 004f0493
    PUSH EAX                            ; 004f0498
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 004f0499
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f049e
    PUSH 0x1                            ; 004f04a1
    LEA EBX,[EAX + 0xfffffd4c]          ; 004f04a3
    PUSH EBX                            ; 004f04a9
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 004f04aa
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f04af
    MOV DL,byte ptr [ESP + 0xc]         ; 004f04b2
    MOV EBX,EAX                         ; 004f04b6
    TEST DL,0x2                         ; 004f04b8
    JNZ 0x004f04dc                      ; 004f04bb
        ;   XREF to: 004f04dc (CONDITIONAL_JUMP)  ; LAB_004f04dc
    MOV EAX,EBX                         ; 004f04bd
    POP EBX                             ; 004f04bf
    RET                                 ; 004f04c0
    PUSH 0x5f9ff0                       ; 004f04c1 | g_CMimicTypeInfo
        ;   Label: LAB_004f04c1
    PUSH EBX                            ; 004f04c6
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 004f04c7
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 004f04cc
    PUSH EAX                            ; 004f04cf
    CALL crt_unknown.c_FUN_005b7fce     ; 004f04d0
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 004f04d5
    MOV EAX,EBX                         ; 004f04d8
    POP EBX                             ; 004f04da
    RET                                 ; 004f04db
    PUSH EAX                            ; 004f04dc
        ;   Label: LAB_004f04dc
    CALL crt_unknown.c_FUN_005b7fdc     ; 004f04dd
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 004f04e2
    MOV EAX,EBX                         ; 004f04e5
    POP EBX                             ; 004f04e7
    RET                                 ; 004f04e8

