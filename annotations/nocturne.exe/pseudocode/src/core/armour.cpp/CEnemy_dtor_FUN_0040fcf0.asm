; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEnemy * __cdecl core_armour_cpp_CEnemy_dtor_FUN_0040fcf0(CEnemy *this_ptr,uint flags)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CEnemyTypeInfo_00599920
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_armour.cpp_CFlame_arrdtor50_FUN_0040fe50
;   core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10
;   core_armour.cpp_SFire_arrdtor50_FUN_0040fe30
;   core_cloth.cpp_CClothList_dtor_FUN_00438250
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_operator_delete_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040fcf0
        ;   Label: core_armour.cpp_CEnemy_dtor_FUN_0040fcf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040fcf1
    TEST byte ptr [ESP + 0xc],0x4       ; 0040fcf5
    JNZ 0x0040fd81                      ; 0040fcfa
        ;   XREF to: 0040fd81 (CONDITIONAL_JUMP)  ; LAB_0040fd81
    PUSH 0x0                            ; 0040fd00
    ADD EBX,0x33c4                      ; 0040fd02
    PUSH EBX                            ; 0040fd08
    CALL core_armour.cpp_CFlame_arrdtor50_FUN_0040fe50 ; 0040fd09
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor50_FUN_0040fe50(CFlame * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040fd0e
    PUSH 0x0                            ; 0040fd11
    SUB EAX,0x4b0                       ; 0040fd13
    PUSH EAX                            ; 0040fd18
    CALL core_armour.cpp_SFire_arrdtor50_FUN_0040fe30 ; 0040fd19
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor50_FUN_0040fe30(SFire * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040fd1e
    PUSH 0x0                            ; 0040fd21
    SUB EAX,0x20c                       ; 0040fd23
    PUSH EAX                            ; 0040fd28
    CALL core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10 ; 0040fd29
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040fd2e
    PUSH 0x0                            ; 0040fd31
    SUB EAX,0xb4                        ; 0040fd33
    PUSH EAX                            ; 0040fd38
    CALL core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10 ; 0040fd39
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040fd3e
    PUSH 0x0                            ; 0040fd41
    SUB EAX,0x1c8                       ; 0040fd43
    PUSH EAX                            ; 0040fd48
    CALL core_cloth.cpp_CClothList_dtor_FUN_00438250 ; 0040fd49
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00438250(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040fd4e
    PUSH 0x0                            ; 0040fd51
    SUB EAX,0x293c                      ; 0040fd53
    PUSH EAX                            ; 0040fd58
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 0040fd59
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040fd5e
    PUSH 0x1                            ; 0040fd61
    LEA EBX,[EAX + 0xfffffeb0]          ; 0040fd63
    PUSH EBX                            ; 0040fd69
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 0040fd6a
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040fd6f
    MOV DL,byte ptr [ESP + 0xc]         ; 0040fd72
    MOV EBX,EAX                         ; 0040fd76
    TEST DL,0x2                         ; 0040fd78
    JNZ 0x0040fd9c                      ; 0040fd7b
        ;   XREF to: 0040fd9c (CONDITIONAL_JUMP)  ; LAB_0040fd9c
    MOV EAX,EBX                         ; 0040fd7d
    POP EBX                             ; 0040fd7f
    RET                                 ; 0040fd80
    PUSH 0x599920                       ; 0040fd81 | g_CEnemyTypeInfo_00599920
        ;   Label: LAB_0040fd81
    PUSH EBX                            ; 0040fd86
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0040fd87
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0040fd8c
    PUSH EAX                            ; 0040fd8f
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0040fd90
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0040fd95
    MOV EAX,EBX                         ; 0040fd98
    POP EBX                             ; 0040fd9a
    RET                                 ; 0040fd9b
    PUSH EAX                            ; 0040fd9c
        ;   Label: LAB_0040fd9c
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 0040fd9d
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 0040fda2
    MOV EAX,EBX                         ; 0040fda5
    POP EBX                             ; 0040fda7
    RET                                 ; 0040fda8

