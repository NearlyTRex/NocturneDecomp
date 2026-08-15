; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CArmour * __cdecl core_armour_cpp_CArmour_dtor_FUN_0040fc30(CArmour *this_ptr,uint flags)
;
; Parameters:
; CArmour *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CArmourTypeInfo_00599900
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

    PUSH EBX                            ; 0040fc30
        ;   Label: core_armour.cpp_CArmour_dtor_FUN_0040fc30
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040fc31
    TEST byte ptr [ESP + 0xc],0x4       ; 0040fc35
    JNZ 0x0040fcc1                      ; 0040fc3a
        ;   XREF to: 0040fcc1 (CONDITIONAL_JUMP)  ; LAB_0040fcc1
    PUSH 0x0                            ; 0040fc40
    ADD EBX,0x33c4                      ; 0040fc42
    PUSH EBX                            ; 0040fc48
    CALL core_armour.cpp_CFlame_arrdtor50_FUN_0040fe50 ; 0040fc49
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor50_FUN_0040fe50(CFlame * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040fc4e
    PUSH 0x0                            ; 0040fc51
    SUB EAX,0x4b0                       ; 0040fc53
    PUSH EAX                            ; 0040fc58
    CALL core_armour.cpp_SFire_arrdtor50_FUN_0040fe30 ; 0040fc59
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor50_FUN_0040fe30(SFire * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040fc5e
    PUSH 0x0                            ; 0040fc61
    SUB EAX,0x20c                       ; 0040fc63
    PUSH EAX                            ; 0040fc68
    CALL core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10 ; 0040fc69
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040fc6e
    PUSH 0x0                            ; 0040fc71
    SUB EAX,0xb4                        ; 0040fc73
    PUSH EAX                            ; 0040fc78
    CALL core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10 ; 0040fc79
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040fc7e
    PUSH 0x0                            ; 0040fc81
    SUB EAX,0x1c8                       ; 0040fc83
    PUSH EAX                            ; 0040fc88
    CALL core_cloth.cpp_CClothList_dtor_FUN_00438250 ; 0040fc89
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00438250(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040fc8e
    PUSH 0x0                            ; 0040fc91
    SUB EAX,0x293c                      ; 0040fc93
    PUSH EAX                            ; 0040fc98
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 0040fc99
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040fc9e
    PUSH 0x1                            ; 0040fca1
    LEA EBX,[EAX + 0xfffffeb0]          ; 0040fca3
    PUSH EBX                            ; 0040fca9
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 0040fcaa
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040fcaf
    MOV DL,byte ptr [ESP + 0xc]         ; 0040fcb2
    MOV EBX,EAX                         ; 0040fcb6
    TEST DL,0x2                         ; 0040fcb8
    JNZ 0x0040fcdc                      ; 0040fcbb
        ;   XREF to: 0040fcdc (CONDITIONAL_JUMP)  ; LAB_0040fcdc
    MOV EAX,EBX                         ; 0040fcbd
    POP EBX                             ; 0040fcbf
    RET                                 ; 0040fcc0
    PUSH 0x599900                       ; 0040fcc1 | g_CArmourTypeInfo_00599900
        ;   Label: LAB_0040fcc1
    PUSH EBX                            ; 0040fcc6
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0040fcc7
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0040fccc
    PUSH EAX                            ; 0040fccf
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0040fcd0
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0040fcd5
    MOV EAX,EBX                         ; 0040fcd8
    POP EBX                             ; 0040fcda
    RET                                 ; 0040fcdb
    PUSH EAX                            ; 0040fcdc
        ;   Label: LAB_0040fcdc
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 0040fcdd
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 0040fce2
    MOV EAX,EBX                         ; 0040fce5
    POP EBX                             ; 0040fce7
    RET                                 ; 0040fce8

