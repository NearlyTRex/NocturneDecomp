; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * core_biggs_cpp_FUN_00415a30(CDemonActor *param_1,byte param_2)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CBiggsTypeInfo_0059a700
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_armour.cpp_CFlame_arrdtor_FUN_0040fe50
;   core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10
;   core_armour.cpp_SFire_arrdtor_FUN_0040fe30
;   core_cloth.cpp_CClothList_dtor_FUN_00438250
;   core_morph.cpp_CMorph_dtor_FUN_004e0070
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415a30
        ;   Label: core_biggs.cpp_FUN_00415a30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00415a31
    TEST byte ptr [ESP + 0xc],0x4       ; 00415a35
    JNZ 0x00415ad1                      ; 00415a3a
        ;   XREF to: 00415ad1 (CONDITIONAL_JUMP)  ; LAB_00415ad1
    PUSH 0x0                            ; 00415a40
    ADD EBX,0xbea8                      ; 00415a42
    PUSH EBX                            ; 00415a48
    CALL core_morph.cpp_CMorph_dtor_FUN_004e0070 ; 00415a49
        ;   XREF to: 004e0070 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_dtor_FUN_004e0070(CMorph * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00415a4e
    PUSH 0x0                            ; 00415a51
    SUB EAX,0x8ae4                      ; 00415a53
    PUSH EAX                            ; 00415a58
    CALL core_armour.cpp_CFlame_arrdtor_FUN_0040fe50 ; 00415a59
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor_FUN_0040fe50(CFlame * objs, uint flags)
    ADD ESP,0x8                         ; 00415a5e
    PUSH 0x0                            ; 00415a61
    SUB EAX,0x4b0                       ; 00415a63
    PUSH EAX                            ; 00415a68
    CALL core_armour.cpp_SFire_arrdtor_FUN_0040fe30 ; 00415a69
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor_FUN_0040fe30(SFire * objs, uint flags)
    ADD ESP,0x8                         ; 00415a6e
    PUSH 0x0                            ; 00415a71
    SUB EAX,0x20c                       ; 00415a73
    PUSH EAX                            ; 00415a78
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 00415a79
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 00415a7e
    PUSH 0x0                            ; 00415a81
    SUB EAX,0xb4                        ; 00415a83
    PUSH EAX                            ; 00415a88
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 00415a89
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 00415a8e
    PUSH 0x0                            ; 00415a91
    SUB EAX,0x1c8                       ; 00415a93
    PUSH EAX                            ; 00415a98
    CALL core_cloth.cpp_CClothList_dtor_FUN_00438250 ; 00415a99
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00438250(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00415a9e
    PUSH 0x0                            ; 00415aa1
    SUB EAX,0x293c                      ; 00415aa3
    PUSH EAX                            ; 00415aa8
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 00415aa9
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00415aae
    PUSH 0x1                            ; 00415ab1
    LEA EBX,[EAX + 0xfffffeb0]          ; 00415ab3
    PUSH EBX                            ; 00415ab9
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 00415aba
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00415abf
    MOV DL,byte ptr [ESP + 0xc]         ; 00415ac2
    MOV EBX,EAX                         ; 00415ac6
    TEST DL,0x2                         ; 00415ac8
    JNZ 0x00415aec                      ; 00415acb
        ;   XREF to: 00415aec (CONDITIONAL_JUMP)  ; LAB_00415aec
    MOV EAX,EBX                         ; 00415acd
    POP EBX                             ; 00415acf
    RET                                 ; 00415ad0
    PUSH 0x59a700                       ; 00415ad1 | g_CBiggsTypeInfo_0059a700
        ;   Label: LAB_00415ad1
    PUSH EBX                            ; 00415ad6
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 00415ad7
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00415adc
    PUSH EAX                            ; 00415adf
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00415ae0
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00415ae5
    MOV EAX,EBX                         ; 00415ae8
    POP EBX                             ; 00415aea
    RET                                 ; 00415aeb
    PUSH EAX                            ; 00415aec
        ;   Label: LAB_00415aec
    CALL crt_unknown.c_FUN_00564494     ; 00415aed
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 00415af2
    MOV EAX,EBX                         ; 00415af5
    POP EBX                             ; 00415af7
    RET                                 ; 00415af8

