; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_charactr_cpp_CCharacter_dtor_FUN_0042b5d0(CCharacter *this_ptr,uint flags)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CCharacterTypeInfo_0059b200
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_armour.cpp_CFlame_arrdtor_FUN_0040fe50
;   core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10
;   core_armour.cpp_SFire_arrdtor_FUN_0040fe30
;   core_cloth.cpp_CClothList_dtor_FUN_00438250
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042b5d0
        ;   Label: core_charactr.cpp_CCharacter_dtor_FUN_0042b5d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0042b5d1
    TEST byte ptr [ESP + 0xc],0x4       ; 0042b5d5
    JNZ 0x0042b661                      ; 0042b5da
        ;   XREF to: 0042b661 (CONDITIONAL_JUMP)  ; LAB_0042b661
    PUSH 0x0                            ; 0042b5e0
    ADD EBX,0x33c4                      ; 0042b5e2
    PUSH EBX                            ; 0042b5e8
    CALL core_armour.cpp_CFlame_arrdtor_FUN_0040fe50 ; 0042b5e9
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor_FUN_0040fe50(CFlame * objs, uint flags)
    ADD ESP,0x8                         ; 0042b5ee
    PUSH 0x0                            ; 0042b5f1
    SUB EAX,0x4b0                       ; 0042b5f3
    PUSH EAX                            ; 0042b5f8
    CALL core_armour.cpp_SFire_arrdtor_FUN_0040fe30 ; 0042b5f9
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor_FUN_0040fe30(SFire * objs, uint flags)
    ADD ESP,0x8                         ; 0042b5fe
    PUSH 0x0                            ; 0042b601
    SUB EAX,0x20c                       ; 0042b603
    PUSH EAX                            ; 0042b608
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 0042b609
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 0042b60e
    PUSH 0x0                            ; 0042b611
    SUB EAX,0xb4                        ; 0042b613
    PUSH EAX                            ; 0042b618
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 0042b619
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 0042b61e
    PUSH 0x0                            ; 0042b621
    SUB EAX,0x1c8                       ; 0042b623
    PUSH EAX                            ; 0042b628
    CALL core_cloth.cpp_CClothList_dtor_FUN_00438250 ; 0042b629
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00438250(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0042b62e
    PUSH 0x0                            ; 0042b631
    SUB EAX,0x293c                      ; 0042b633
    PUSH EAX                            ; 0042b638
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 0042b639
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0042b63e
    PUSH 0x1                            ; 0042b641
    LEA EBX,[EAX + 0xfffffeb0]          ; 0042b643
    PUSH EBX                            ; 0042b649
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 0042b64a
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0042b64f
    MOV DL,byte ptr [ESP + 0xc]         ; 0042b652
    MOV EBX,EAX                         ; 0042b656
    TEST DL,0x2                         ; 0042b658
    JNZ 0x0042b67c                      ; 0042b65b
        ;   XREF to: 0042b67c (CONDITIONAL_JUMP)  ; LAB_0042b67c
    MOV EAX,EBX                         ; 0042b65d
    POP EBX                             ; 0042b65f
    RET                                 ; 0042b660
    PUSH 0x59b200                       ; 0042b661 | g_CCharacterTypeInfo_0059b200
        ;   Label: LAB_0042b661
    PUSH EBX                            ; 0042b666
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0042b667
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0042b66c
    PUSH EAX                            ; 0042b66f
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0042b670
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0042b675
    MOV EAX,EBX                         ; 0042b678
    POP EBX                             ; 0042b67a
    RET                                 ; 0042b67b
    PUSH EAX                            ; 0042b67c
        ;   Label: LAB_0042b67c
    CALL crt_unknown.c_FUN_00564494     ; 0042b67d
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 0042b682
    MOV EAX,EBX                         ; 0042b685
    POP EBX                             ; 0042b687
    RET                                 ; 0042b688

