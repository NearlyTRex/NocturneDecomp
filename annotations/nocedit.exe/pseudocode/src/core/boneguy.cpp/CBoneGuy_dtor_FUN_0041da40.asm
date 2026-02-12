; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_dtor_FUN_0041da40(CBoneGuy *this_ptr,uint flags)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBoneGuyTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_armour.cpp_CFlame_arrdtor_FUN_00412720
;   core_armour.cpp_CVector3f_arrdtor_FUN_004126e0
;   core_armour.cpp_SFire_arrdtor_FUN_00412700
;   core_boneguy.cpp_SBoneGuyBox_arrdtor_FUN_0041db30
;   core_cloth.cpp_CClothList_dtor_FUN_0043bf80
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041da40
        ;   Label: core_boneguy.cpp_CBoneGuy_dtor_FUN_0041da40
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041da41
    TEST byte ptr [ESP + 0xc],0x4       ; 0041da45
    JNZ 0x0041dae1                      ; 0041da4a
        ;   XREF to: 0041dae1 (CONDITIONAL_JUMP)  ; LAB_0041dae1
    PUSH 0x0                            ; 0041da50
    ADD EBX,0xbf3c                      ; 0041da52
    PUSH EBX                            ; 0041da58
    CALL core_boneguy.cpp_SBoneGuyBox_arrdtor_FUN_0041db30 ; 0041da59
        ;   XREF to: 0041db30 (UNCONDITIONAL_CALL)  ; SBoneGuyBox * core_boneguy.cpp_SBoneGuyBox_arrdtor_FUN_0041db30(SBoneGuyBox * objs, uint flags)
    ADD ESP,0x8                         ; 0041da5e
    PUSH 0x0                            ; 0041da61
    SUB EAX,0x8b70                      ; 0041da63
    PUSH EAX                            ; 0041da68
    CALL core_armour.cpp_CFlame_arrdtor_FUN_00412720 ; 0041da69
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor_FUN_00412720(CFlame * objs, uint flags)
    ADD ESP,0x8                         ; 0041da6e
    PUSH 0x0                            ; 0041da71
    SUB EAX,0x4b0                       ; 0041da73
    PUSH EAX                            ; 0041da78
    CALL core_armour.cpp_SFire_arrdtor_FUN_00412700 ; 0041da79
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor_FUN_00412700(SFire * objs, uint flags)
    ADD ESP,0x8                         ; 0041da7e
    PUSH 0x0                            ; 0041da81
    SUB EAX,0x20c                       ; 0041da83
    PUSH EAX                            ; 0041da88
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_004126e0 ; 0041da89
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_004126e0(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 0041da8e
    PUSH 0x0                            ; 0041da91
    SUB EAX,0xb4                        ; 0041da93
    PUSH EAX                            ; 0041da98
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_004126e0 ; 0041da99
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_004126e0(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 0041da9e
    PUSH 0x0                            ; 0041daa1
    SUB EAX,0x1c8                       ; 0041daa3
    PUSH EAX                            ; 0041daa8
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043bf80 ; 0041daa9
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043bf80(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041daae
    PUSH 0x0                            ; 0041dab1
    SUB EAX,0x293c                      ; 0041dab3
    PUSH EAX                            ; 0041dab8
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 0041dab9
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041dabe
    PUSH 0x1                            ; 0041dac1
    LEA EBX,[EAX + 0xfffffea8]          ; 0041dac3
    PUSH EBX                            ; 0041dac9
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 0041daca
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041dacf
    MOV DL,byte ptr [ESP + 0xc]         ; 0041dad2
    MOV EBX,EAX                         ; 0041dad6
    TEST DL,0x2                         ; 0041dad8
    JNZ 0x0041dafc                      ; 0041dadb
        ;   XREF to: 0041dafc (CONDITIONAL_JUMP)  ; LAB_0041dafc
    MOV EAX,EBX                         ; 0041dadd
    POP EBX                             ; 0041dadf
    RET                                 ; 0041dae0
    PUSH 0x65b100                       ; 0041dae1 | g_CBoneGuyTypeInfo
        ;   Label: LAB_0041dae1
    PUSH EBX                            ; 0041dae6
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 0041dae7
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0041daec
    PUSH EAX                            ; 0041daef
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0041daf0
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0041daf5
    MOV EAX,EBX                         ; 0041daf8
    POP EBX                             ; 0041dafa
    RET                                 ; 0041dafb
    PUSH EAX                            ; 0041dafc
        ;   Label: LAB_0041dafc
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 0041dafd
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 0041db02
    MOV EAX,EBX                         ; 0041db05
    POP EBX                             ; 0041db07
    RET                                 ; 0041db08

