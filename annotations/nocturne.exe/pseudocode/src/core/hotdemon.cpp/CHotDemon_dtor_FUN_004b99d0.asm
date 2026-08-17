; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHotDemon * __cdecl core_hotdemon_cpp_CHotDemon_dtor_FUN_004b99d0(CHotDemon *this_ptr,uint flags)
;
; Parameters:
; CHotDemon *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CHotDemonTypeInfo_0059f220
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

    PUSH EBX                            ; 004b99d0
        ;   Label: core_hotdemon.cpp_CHotDemon_dtor_FUN_004b99d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b99d1
    TEST byte ptr [ESP + 0xc],0x4       ; 004b99d5
    JNZ 0x004b9a61                      ; 004b99da
        ;   XREF to: 004b9a61 (CONDITIONAL_JUMP)  ; LAB_004b9a61
    PUSH 0x0                            ; 004b99e0
    ADD EBX,0x33c4                      ; 004b99e2
    PUSH EBX                            ; 004b99e8
    CALL core_armour.cpp_CFlame_arrdtor50_FUN_0040fe50 ; 004b99e9
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor50_FUN_0040fe50(CFlame * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b99ee
    PUSH 0x0                            ; 004b99f1
    SUB EAX,0x4b0                       ; 004b99f3
    PUSH EAX                            ; 004b99f8
    CALL core_armour.cpp_SFire_arrdtor50_FUN_0040fe30 ; 004b99f9
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor50_FUN_0040fe30(SFire * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b99fe
    PUSH 0x0                            ; 004b9a01
    SUB EAX,0x20c                       ; 004b9a03
    PUSH EAX                            ; 004b9a08
    CALL core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10 ; 004b9a09
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b9a0e
    PUSH 0x0                            ; 004b9a11
    SUB EAX,0xb4                        ; 004b9a13
    PUSH EAX                            ; 004b9a18
    CALL core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10 ; 004b9a19
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b9a1e
    PUSH 0x0                            ; 004b9a21
    SUB EAX,0x1c8                       ; 004b9a23
    PUSH EAX                            ; 004b9a28
    CALL core_cloth.cpp_CClothList_dtor_FUN_00438250 ; 004b9a29
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00438250(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b9a2e
    PUSH 0x0                            ; 004b9a31
    SUB EAX,0x293c                      ; 004b9a33
    PUSH EAX                            ; 004b9a38
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 004b9a39
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b9a3e
    PUSH 0x1                            ; 004b9a41
    LEA EBX,[EAX + 0xfffffeb0]          ; 004b9a43
    PUSH EBX                            ; 004b9a49
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 004b9a4a
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b9a4f
    MOV DL,byte ptr [ESP + 0xc]         ; 004b9a52
    MOV EBX,EAX                         ; 004b9a56
    TEST DL,0x2                         ; 004b9a58
    JNZ 0x004b9a7c                      ; 004b9a5b
        ;   XREF to: 004b9a7c (CONDITIONAL_JUMP)  ; LAB_004b9a7c
    MOV EAX,EBX                         ; 004b9a5d
    POP EBX                             ; 004b9a5f
    RET                                 ; 004b9a60
    PUSH 0x59f220                       ; 004b9a61 | g_CHotDemonTypeInfo_0059f220
        ;   Label: LAB_004b9a61
    PUSH EBX                            ; 004b9a66
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004b9a67
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004b9a6c
    PUSH EAX                            ; 004b9a6f
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004b9a70
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 004b9a75
    MOV EAX,EBX                         ; 004b9a78
    POP EBX                             ; 004b9a7a
    RET                                 ; 004b9a7b
    PUSH EAX                            ; 004b9a7c
        ;   Label: LAB_004b9a7c
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 004b9a7d
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 004b9a82
    MOV EAX,EBX                         ; 004b9a85
    POP EBX                             ; 004b9a87
    RET                                 ; 004b9a88

