; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * core_hiram_cpp_CHiram_dtor_FUN_004b6670(CDemonActor *param_1,byte param_2)
;
;
; Referenced Globals:
;   CCharacter_full_vtable g_CHiramVTable
;   WatcomTypeInfo g_CHiramTypeInfo_0059eee0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_armour.cpp_CFlame_arrdtor_FUN_0040fe50
;   core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10
;   core_armour.cpp_SFire_arrdtor_FUN_0040fe30
;   core_cloth.cpp_CClothList_dtor_FUN_00438250
;   core_path.cpp_CPathMap_dtor_FUN_004efdd0
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b6670
        ;   Label: core_hiram.cpp_CHiram_dtor_FUN_004b6670
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b6671
    TEST byte ptr [ESP + 0xc],0x4       ; 004b6675
    JNZ 0x004b671b                      ; 004b667a
        ;   XREF to: 004b671b (CONDITIONAL_JUMP)  ; LAB_004b671b
    PUSH 0x0                            ; 004b6680
    ADD EBX,0xbc8c                      ; 004b6682
    PUSH EBX                            ; 004b6688
    MOV dword ptr [EBX + 0xffff44c0],0x59eda4 ; 004b6689 | g_CHiramVTable
    CALL core_path.cpp_CPathMap_dtor_FUN_004efdd0 ; 004b6693
        ;   XREF to: 004efdd0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_dtor_FUN_004efdd0(CPathMap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b6698
    PUSH 0x0                            ; 004b669b
    SUB EAX,0x88c8                      ; 004b669d
    PUSH EAX                            ; 004b66a2
    CALL core_armour.cpp_CFlame_arrdtor_FUN_0040fe50 ; 004b66a3
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor_FUN_0040fe50(CFlame * objs, uint flags)
    ADD ESP,0x8                         ; 004b66a8
    PUSH 0x0                            ; 004b66ab
    SUB EAX,0x4b0                       ; 004b66ad
    PUSH EAX                            ; 004b66b2
    CALL core_armour.cpp_SFire_arrdtor_FUN_0040fe30 ; 004b66b3
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor_FUN_0040fe30(SFire * objs, uint flags)
    ADD ESP,0x8                         ; 004b66b8
    PUSH 0x0                            ; 004b66bb
    SUB EAX,0x20c                       ; 004b66bd
    PUSH EAX                            ; 004b66c2
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 004b66c3
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 004b66c8
    PUSH 0x0                            ; 004b66cb
    SUB EAX,0xb4                        ; 004b66cd
    PUSH EAX                            ; 004b66d2
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 004b66d3
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 004b66d8
    PUSH 0x0                            ; 004b66db
    SUB EAX,0x1c8                       ; 004b66dd
    PUSH EAX                            ; 004b66e2
    CALL core_cloth.cpp_CClothList_dtor_FUN_00438250 ; 004b66e3
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00438250(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b66e8
    PUSH 0x0                            ; 004b66eb
    SUB EAX,0x293c                      ; 004b66ed
    PUSH EAX                            ; 004b66f2
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 004b66f3
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b66f8
    PUSH 0x1                            ; 004b66fb
    LEA EBX,[EAX + 0xfffffeb0]          ; 004b66fd
    PUSH EBX                            ; 004b6703
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 004b6704
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b6709
    MOV DL,byte ptr [ESP + 0xc]         ; 004b670c
    MOV EBX,EAX                         ; 004b6710
    TEST DL,0x2                         ; 004b6712
    JNZ 0x004b6736                      ; 004b6715
        ;   XREF to: 004b6736 (CONDITIONAL_JUMP)  ; LAB_004b6736
    MOV EAX,EBX                         ; 004b6717
    POP EBX                             ; 004b6719
    RET                                 ; 004b671a
    PUSH 0x59eee0                       ; 004b671b | g_CHiramTypeInfo_0059eee0
        ;   Label: LAB_004b671b
    PUSH EBX                            ; 004b6720
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004b6721
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004b6726
    PUSH EAX                            ; 004b6729
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004b672a
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 004b672f
    MOV EAX,EBX                         ; 004b6732
    POP EBX                             ; 004b6734
    RET                                 ; 004b6735
    PUSH EAX                            ; 004b6736
        ;   Label: LAB_004b6736
    CALL crt_unknown.c_FUN_00564494     ; 004b6737
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 004b673c
    MOV EAX,EBX                         ; 004b673f
    POP EBX                             ; 004b6741
    RET                                 ; 004b6742

