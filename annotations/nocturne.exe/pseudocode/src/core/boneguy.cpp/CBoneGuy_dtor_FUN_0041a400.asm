; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * core_boneguy_cpp_CBoneGuy_dtor_FUN_0041a400(CDemonActor *param_1,byte param_2)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CBoneGuyTypeInfo_0059aa20
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_armour.cpp_CFlame_arrdtor_FUN_0040fe50
;   core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10
;   core_armour.cpp_SFire_arrdtor_FUN_0040fe30
;   core_boneguy.cpp_SBoneGuyBox_arrdtor_FUN_0041a4f0
;   core_cloth.cpp_CClothList_dtor_FUN_00438250
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041a400
        ;   Label: core_boneguy.cpp_CBoneGuy_dtor_FUN_0041a400
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041a401
    TEST byte ptr [ESP + 0xc],0x4       ; 0041a405
    JNZ 0x0041a4a1                      ; 0041a40a
        ;   XREF to: 0041a4a1 (CONDITIONAL_JUMP)  ; LAB_0041a4a1
    PUSH 0x0                            ; 0041a410
    ADD EBX,0xbda4                      ; 0041a412
    PUSH EBX                            ; 0041a418
    CALL core_boneguy.cpp_SBoneGuyBox_arrdtor_FUN_0041a4f0 ; 0041a419
        ;   XREF to: 0041a4f0 (UNCONDITIONAL_CALL)  ; SBoneGuyBox * core_boneguy.cpp_SBoneGuyBox_arrdtor_FUN_0041a4f0(SBoneGuyBox * objs, uint flags)
    ADD ESP,0x8                         ; 0041a41e
    PUSH 0x0                            ; 0041a421
    SUB EAX,0x89e0                      ; 0041a423
    PUSH EAX                            ; 0041a428
    CALL core_armour.cpp_CFlame_arrdtor_FUN_0040fe50 ; 0041a429
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor_FUN_0040fe50(CFlame * objs, uint flags)
    ADD ESP,0x8                         ; 0041a42e
    PUSH 0x0                            ; 0041a431
    SUB EAX,0x4b0                       ; 0041a433
    PUSH EAX                            ; 0041a438
    CALL core_armour.cpp_SFire_arrdtor_FUN_0040fe30 ; 0041a439
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor_FUN_0040fe30(SFire * objs, uint flags)
    ADD ESP,0x8                         ; 0041a43e
    PUSH 0x0                            ; 0041a441
    SUB EAX,0x20c                       ; 0041a443
    PUSH EAX                            ; 0041a448
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 0041a449
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 0041a44e
    PUSH 0x0                            ; 0041a451
    SUB EAX,0xb4                        ; 0041a453
    PUSH EAX                            ; 0041a458
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 0041a459
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 0041a45e
    PUSH 0x0                            ; 0041a461
    SUB EAX,0x1c8                       ; 0041a463
    PUSH EAX                            ; 0041a468
    CALL core_cloth.cpp_CClothList_dtor_FUN_00438250 ; 0041a469
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00438250(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041a46e
    PUSH 0x0                            ; 0041a471
    SUB EAX,0x293c                      ; 0041a473
    PUSH EAX                            ; 0041a478
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 0041a479
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041a47e
    PUSH 0x1                            ; 0041a481
    LEA EBX,[EAX + 0xfffffeb0]          ; 0041a483
    PUSH EBX                            ; 0041a489
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 0041a48a
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041a48f
    MOV DL,byte ptr [ESP + 0xc]         ; 0041a492
    MOV EBX,EAX                         ; 0041a496
    TEST DL,0x2                         ; 0041a498
    JNZ 0x0041a4bc                      ; 0041a49b
        ;   XREF to: 0041a4bc (CONDITIONAL_JUMP)  ; LAB_0041a4bc
    MOV EAX,EBX                         ; 0041a49d
    POP EBX                             ; 0041a49f
    RET                                 ; 0041a4a0
    PUSH 0x59aa20                       ; 0041a4a1 | g_CBoneGuyTypeInfo_0059aa20
        ;   Label: LAB_0041a4a1
    PUSH EBX                            ; 0041a4a6
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0041a4a7
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0041a4ac
    PUSH EAX                            ; 0041a4af
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0041a4b0
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0041a4b5
    MOV EAX,EBX                         ; 0041a4b8
    POP EBX                             ; 0041a4ba
    RET                                 ; 0041a4bb
    PUSH EAX                            ; 0041a4bc
        ;   Label: LAB_0041a4bc
    CALL crt_unknown.c_FUN_00564494     ; 0041a4bd
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 0041a4c2
    MOV EAX,EBX                         ; 0041a4c5
    POP EBX                             ; 0041a4c7
    RET                                 ; 0041a4c8

