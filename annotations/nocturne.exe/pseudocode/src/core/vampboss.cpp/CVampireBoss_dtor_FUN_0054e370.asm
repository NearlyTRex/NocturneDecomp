; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_dtor_FUN_0054e370(CVampireBoss *this_ptr,uint flags)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CVampireBossTypeInfo_005a3be0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_armour.cpp_CFlame_arrdtor50_FUN_0040fe50
;   core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10
;   core_armour.cpp_SFire_arrdtor50_FUN_0040fe30
;   core_cloth.cpp_CCloth_dtor_FUN_00435160
;   core_cloth.cpp_CClothList_dtor_FUN_00438250
;   core_morph.cpp_CMorph_dtor_FUN_004e0070
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_operator_delete_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e370
        ;   Label: core_vampboss.cpp_CVampireBoss_dtor_FUN_0054e370
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054e371
    TEST byte ptr [ESP + 0xc],0x4       ; 0054e375
    JNZ 0x0054e451                      ; 0054e37a
        ;   XREF to: 0054e451 (CONDITIONAL_JUMP)  ; LAB_0054e451
    PUSH 0x0                            ; 0054e380
    ADD EBX,0xbe16c                     ; 0054e382
    PUSH EBX                            ; 0054e388
    CALL core_morph.cpp_CMorph_dtor_FUN_004e0070 ; 0054e389
        ;   XREF to: 004e0070 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_dtor_FUN_004e0070(CMorph * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054e38e
    PUSH 0x0                            ; 0054e391
    SUB EAX,0x3ab34                     ; 0054e393
    PUSH EAX                            ; 0054e398
    CALL core_cloth.cpp_CCloth_dtor_FUN_00435160 ; 0054e399
        ;   XREF to: 00435160 (UNCONDITIONAL_CALL)  ; CCloth * core_cloth.cpp_CCloth_dtor_FUN_00435160(CCloth * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054e39e
    PUSH 0x0                            ; 0054e3a1
    SUB EAX,0x3ab30                     ; 0054e3a3
    PUSH EAX                            ; 0054e3a8
    CALL core_cloth.cpp_CCloth_dtor_FUN_00435160 ; 0054e3a9
        ;   XREF to: 00435160 (UNCONDITIONAL_CALL)  ; CCloth * core_cloth.cpp_CCloth_dtor_FUN_00435160(CCloth * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054e3ae
    PUSH 0x0                            ; 0054e3b1
    SUB EAX,0x3ab30                     ; 0054e3b3
    PUSH EAX                            ; 0054e3b8
    CALL core_cloth.cpp_CCloth_dtor_FUN_00435160 ; 0054e3b9
        ;   XREF to: 00435160 (UNCONDITIONAL_CALL)  ; CCloth * core_cloth.cpp_CCloth_dtor_FUN_00435160(CCloth * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054e3be
    PUSH 0x0                            ; 0054e3c1
    SUB EAX,0x22b4                      ; 0054e3c3
    PUSH EAX                            ; 0054e3c8
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 0054e3c9
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054e3ce
    PUSH 0x0                            ; 0054e3d1
    SUB EAX,0x8960                      ; 0054e3d3
    PUSH EAX                            ; 0054e3d8
    CALL core_armour.cpp_CFlame_arrdtor50_FUN_0040fe50 ; 0054e3d9
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor50_FUN_0040fe50(CFlame * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054e3de
    PUSH 0x0                            ; 0054e3e1
    SUB EAX,0x4b0                       ; 0054e3e3
    PUSH EAX                            ; 0054e3e8
    CALL core_armour.cpp_SFire_arrdtor50_FUN_0040fe30 ; 0054e3e9
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor50_FUN_0040fe30(SFire * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054e3ee
    PUSH 0x0                            ; 0054e3f1
    SUB EAX,0x20c                       ; 0054e3f3
    PUSH EAX                            ; 0054e3f8
    CALL core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10 ; 0054e3f9
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054e3fe
    PUSH 0x0                            ; 0054e401
    SUB EAX,0xb4                        ; 0054e403
    PUSH EAX                            ; 0054e408
    CALL core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10 ; 0054e409
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054e40e
    PUSH 0x0                            ; 0054e411
    SUB EAX,0x1c8                       ; 0054e413
    PUSH EAX                            ; 0054e418
    CALL core_cloth.cpp_CClothList_dtor_FUN_00438250 ; 0054e419
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00438250(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054e41e
    PUSH 0x0                            ; 0054e421
    SUB EAX,0x293c                      ; 0054e423
    PUSH EAX                            ; 0054e428
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 0054e429
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054e42e
    LEA EBX,[EAX + 0xfffffeb0]          ; 0054e431
    PUSH 0x1                            ; 0054e437
    PUSH EBX                            ; 0054e439
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 0054e43a
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054e43f
    MOV DL,byte ptr [ESP + 0xc]         ; 0054e442
    MOV EBX,EAX                         ; 0054e446
    TEST DL,0x2                         ; 0054e448
    JNZ 0x0054e46c                      ; 0054e44b
        ;   XREF to: 0054e46c (CONDITIONAL_JUMP)  ; LAB_0054e46c
    MOV EAX,EBX                         ; 0054e44d
    POP EBX                             ; 0054e44f
    RET                                 ; 0054e450
    PUSH 0x5a3be0                       ; 0054e451 | g_CVampireBossTypeInfo_005a3be0
        ;   Label: LAB_0054e451
    PUSH EBX                            ; 0054e456
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0054e457
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0054e45c
    PUSH EAX                            ; 0054e45f
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0054e460
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0054e465
    MOV EAX,EBX                         ; 0054e468
    POP EBX                             ; 0054e46a
    RET                                 ; 0054e46b
    PUSH EAX                            ; 0054e46c
        ;   Label: LAB_0054e46c
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 0054e46d
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 0054e472
    MOV EAX,EBX                         ; 0054e475
    POP EBX                             ; 0054e477
    RET                                 ; 0054e478

