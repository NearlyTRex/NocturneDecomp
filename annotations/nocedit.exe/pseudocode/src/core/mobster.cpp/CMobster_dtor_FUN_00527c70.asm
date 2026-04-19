; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMobster * __cdecl core_mobster_cpp_CMobster_dtor_FUN_00527c70(CMobster *this_ptr,uint flags)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CMobsterTypeInfo
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

    PUSH EBX                            ; 00527c70
        ;   Label: core_mobster.cpp_CMobster_dtor_FUN_00527c70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00527c71
    TEST byte ptr [ESP + 0xc],0x4       ; 00527c75
    JNZ 0x00527d01                      ; 00527c7a
        ;   XREF to: 00527d01 (CONDITIONAL_JUMP)  ; LAB_00527d01
    PUSH 0x0                            ; 00527c80
    ADD EBX,0x33cc                      ; 00527c82
    PUSH EBX                            ; 00527c88
    CALL core_armour.cpp_CFlame_arrdtor_FUN_00412720 ; 00527c89
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor_FUN_00412720(CFlame * objs, uint flags)
    ADD ESP,0x8                         ; 00527c8e
    PUSH 0x0                            ; 00527c91
    SUB EAX,0x4b0                       ; 00527c93
    PUSH EAX                            ; 00527c98
    CALL core_armour.cpp_SFire_arrdtor_FUN_00412700 ; 00527c99
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor_FUN_00412700(SFire * objs, uint flags)
    ADD ESP,0x8                         ; 00527c9e
    PUSH 0x0                            ; 00527ca1
    SUB EAX,0x20c                       ; 00527ca3
    PUSH EAX                            ; 00527ca8
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_004126e0 ; 00527ca9
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_004126e0(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 00527cae
    PUSH 0x0                            ; 00527cb1
    SUB EAX,0xb4                        ; 00527cb3
    PUSH EAX                            ; 00527cb8
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_004126e0 ; 00527cb9
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_004126e0(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 00527cbe
    PUSH 0x0                            ; 00527cc1
    SUB EAX,0x1c8                       ; 00527cc3
    PUSH EAX                            ; 00527cc8
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043bf80 ; 00527cc9
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043bf80(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00527cce
    PUSH 0x0                            ; 00527cd1
    SUB EAX,0x293c                      ; 00527cd3
    PUSH EAX                            ; 00527cd8
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 00527cd9
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00527cde
    PUSH 0x1                            ; 00527ce1
    LEA EBX,[EAX + 0xfffffea8]          ; 00527ce3
    PUSH EBX                            ; 00527ce9
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 00527cea
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00527cef
    MOV DL,byte ptr [ESP + 0xc]         ; 00527cf2
    MOV EBX,EAX                         ; 00527cf6
    TEST DL,0x2                         ; 00527cf8
    JNZ 0x00527d1c                      ; 00527cfb
        ;   XREF to: 00527d1c (CONDITIONAL_JUMP)  ; LAB_00527d1c
    MOV EAX,EBX                         ; 00527cfd
    POP EBX                             ; 00527cff
    RET                                 ; 00527d00
    PUSH 0x661900                       ; 00527d01 | g_CMobsterTypeInfo
        ;   Label: LAB_00527d01
    PUSH EBX                            ; 00527d06
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 00527d07
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00527d0c
    PUSH EAX                            ; 00527d0f
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00527d10
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00527d15
    MOV EAX,EBX                         ; 00527d18
    POP EBX                             ; 00527d1a
    RET                                 ; 00527d1b
    PUSH EAX                            ; 00527d1c
        ;   Label: LAB_00527d1c
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 00527d1d
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 00527d22
    MOV EAX,EBX                         ; 00527d25
    POP EBX                             ; 00527d27
    RET                                 ; 00527d28

