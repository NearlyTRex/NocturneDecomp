; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * core_batman_cpp_FUN_00414c60(CDemonActor *param_1,byte param_2)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CBatmanTypeInfo_0059a2b0
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

    PUSH EBX                            ; 00414c60
        ;   Label: core_batman.cpp_FUN_00414c60
    MOV EBX,dword ptr [ESP + 0x8]       ; 00414c61
    TEST byte ptr [ESP + 0xc],0x4       ; 00414c65
    JNZ 0x00414cf1                      ; 00414c6a
        ;   XREF to: 00414cf1 (CONDITIONAL_JUMP)  ; LAB_00414cf1
    PUSH 0x0                            ; 00414c70
    ADD EBX,0x33c4                      ; 00414c72
    PUSH EBX                            ; 00414c78
    CALL core_armour.cpp_CFlame_arrdtor_FUN_0040fe50 ; 00414c79
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor_FUN_0040fe50(CFlame * objs, uint flags)
    ADD ESP,0x8                         ; 00414c7e
    PUSH 0x0                            ; 00414c81
    SUB EAX,0x4b0                       ; 00414c83
    PUSH EAX                            ; 00414c88
    CALL core_armour.cpp_SFire_arrdtor_FUN_0040fe30 ; 00414c89
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor_FUN_0040fe30(SFire * objs, uint flags)
    ADD ESP,0x8                         ; 00414c8e
    PUSH 0x0                            ; 00414c91
    SUB EAX,0x20c                       ; 00414c93
    PUSH EAX                            ; 00414c98
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 00414c99
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 00414c9e
    PUSH 0x0                            ; 00414ca1
    SUB EAX,0xb4                        ; 00414ca3
    PUSH EAX                            ; 00414ca8
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 00414ca9
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 00414cae
    PUSH 0x0                            ; 00414cb1
    SUB EAX,0x1c8                       ; 00414cb3
    PUSH EAX                            ; 00414cb8
    CALL core_cloth.cpp_CClothList_dtor_FUN_00438250 ; 00414cb9
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00438250(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00414cbe
    PUSH 0x0                            ; 00414cc1
    SUB EAX,0x293c                      ; 00414cc3
    PUSH EAX                            ; 00414cc8
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 00414cc9
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00414cce
    PUSH 0x1                            ; 00414cd1
    LEA EBX,[EAX + 0xfffffeb0]          ; 00414cd3
    PUSH EBX                            ; 00414cd9
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 00414cda
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00414cdf
    MOV DL,byte ptr [ESP + 0xc]         ; 00414ce2
    MOV EBX,EAX                         ; 00414ce6
    TEST DL,0x2                         ; 00414ce8
    JNZ 0x00414d0c                      ; 00414ceb
        ;   XREF to: 00414d0c (CONDITIONAL_JUMP)  ; LAB_00414d0c
    MOV EAX,EBX                         ; 00414ced
    POP EBX                             ; 00414cef
    RET                                 ; 00414cf0
    PUSH 0x59a2b0                       ; 00414cf1 | g_CBatmanTypeInfo_0059a2b0
        ;   Label: LAB_00414cf1
    PUSH EBX                            ; 00414cf6
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 00414cf7
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00414cfc
    PUSH EAX                            ; 00414cff
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00414d00
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00414d05
    MOV EAX,EBX                         ; 00414d08
    POP EBX                             ; 00414d0a
    RET                                 ; 00414d0b
    PUSH EAX                            ; 00414d0c
        ;   Label: LAB_00414d0c
    CALL crt_unknown.c_FUN_00564494     ; 00414d0d
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 00414d12
    MOV EAX,EBX                         ; 00414d15
    POP EBX                             ; 00414d17
    RET                                 ; 00414d18

