; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBassPlayer * __cdecl core_tbplayer_cpp_CBassPlayer_dtor_FUN_005436f0(CBassPlayer *this_ptr,uint flags)
;
; Parameters:
; CBassPlayer *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBassPlayerTypeInfo_005a2ea0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_armour.cpp_CFlame_arrdtor50_FUN_0040fe50
;   core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10
;   core_armour.cpp_SFire_arrdtor50_FUN_0040fe30
;   core_cloth.cpp_CClothList_dtor_FUN_00438250
;   core_path.cpp_CPathMap_dtor_FUN_004efdd0
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_operator_delete_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005436f0
        ;   Label: core_tbplayer.cpp_CBassPlayer_dtor_FUN_005436f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005436f1
    TEST byte ptr [ESP + 0xc],0x4       ; 005436f5
    JNZ 0x00543791                      ; 005436fa
        ;   XREF to: 00543791 (CONDITIONAL_JUMP)  ; LAB_00543791
    PUSH 0x0                            ; 00543700
    ADD EBX,0xbc8c                      ; 00543702
    PUSH EBX                            ; 00543708
    CALL core_path.cpp_CPathMap_dtor_FUN_004efdd0 ; 00543709
        ;   XREF to: 004efdd0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_dtor_FUN_004efdd0(CPathMap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054370e
    PUSH 0x0                            ; 00543711
    SUB EAX,0x88c8                      ; 00543713
    PUSH EAX                            ; 00543718
    CALL core_armour.cpp_CFlame_arrdtor50_FUN_0040fe50 ; 00543719
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor50_FUN_0040fe50(CFlame * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054371e
    PUSH 0x0                            ; 00543721
    SUB EAX,0x4b0                       ; 00543723
    PUSH EAX                            ; 00543728
    CALL core_armour.cpp_SFire_arrdtor50_FUN_0040fe30 ; 00543729
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor50_FUN_0040fe30(SFire * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054372e
    PUSH 0x0                            ; 00543731
    SUB EAX,0x20c                       ; 00543733
    PUSH EAX                            ; 00543738
    CALL core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10 ; 00543739
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054373e
    PUSH 0x0                            ; 00543741
    SUB EAX,0xb4                        ; 00543743
    PUSH EAX                            ; 00543748
    CALL core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10 ; 00543749
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054374e
    PUSH 0x0                            ; 00543751
    SUB EAX,0x1c8                       ; 00543753
    PUSH EAX                            ; 00543758
    CALL core_cloth.cpp_CClothList_dtor_FUN_00438250 ; 00543759
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00438250(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054375e
    PUSH 0x0                            ; 00543761
    SUB EAX,0x293c                      ; 00543763
    PUSH EAX                            ; 00543768
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 00543769
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054376e
    PUSH 0x1                            ; 00543771
    LEA EBX,[EAX + 0xfffffeb0]          ; 00543773
    PUSH EBX                            ; 00543779
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 0054377a
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054377f
    MOV DL,byte ptr [ESP + 0xc]         ; 00543782
    MOV EBX,EAX                         ; 00543786
    TEST DL,0x2                         ; 00543788
    JNZ 0x005437ac                      ; 0054378b
        ;   XREF to: 005437ac (CONDITIONAL_JUMP)  ; LAB_005437ac
    MOV EAX,EBX                         ; 0054378d
    POP EBX                             ; 0054378f
    RET                                 ; 00543790
    PUSH 0x5a2ea0                       ; 00543791 | g_CBassPlayerTypeInfo_005a2ea0
        ;   Label: LAB_00543791
    PUSH EBX                            ; 00543796
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 00543797
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0054379c
    PUSH EAX                            ; 0054379f
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 005437a0
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 005437a5
    MOV EAX,EBX                         ; 005437a8
    POP EBX                             ; 005437aa
    RET                                 ; 005437ab
    PUSH EAX                            ; 005437ac
        ;   Label: LAB_005437ac
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 005437ad
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 005437b2
    MOV EAX,EBX                         ; 005437b5
    POP EBX                             ; 005437b7
    RET                                 ; 005437b8

