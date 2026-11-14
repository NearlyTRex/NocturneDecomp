; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBeast * __cdecl core_beast_cpp_CBeast_dtor_FUN_00414c10(CBeast *this_ptr,uint flags)
;
; Parameters:
; CBeast *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBeastTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   core_armour.cpp_FUN_0040f2b0
;   core_cloth.cpp_CClothList_dtor_FUN_005b1480
;   core_muzzle.cpp_FUN_0059df70
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414c10
        ;   Label: core_beast.cpp_CBeast_dtor_FUN_00414c10
    MOV EBX,dword ptr [ESP + 0x8]       ; 00414c11
    TEST byte ptr [ESP + 0xc],0x4       ; 00414c15
    JNZ 0x00414c7d                      ; 00414c1a
        ;   XREF to: 00414c7d (CONDITIONAL_JUMP)  ; LAB_00414c7d
    PUSH 0x0                            ; 00414c1c
    ADD EBX,0x3a20                      ; 00414c1e
    PUSH EBX                            ; 00414c24
    CALL core_armour.cpp_FUN_0040f2b0   ; 00414c25
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040f2b0()
    ADD ESP,0x8                         ; 00414c2a
    PUSH 0x0                            ; 00414c2d
    SUB EAX,0x9c8                       ; 00414c2f
    PUSH EAX                            ; 00414c34
    CALL core_muzzle.cpp_FUN_0059df70   ; 00414c35
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059df70()
    ADD ESP,0x8                         ; 00414c3a
    PUSH 0x0                            ; 00414c3d
    SUB EAX,0x34c                       ; 00414c3f
    PUSH EAX                            ; 00414c44
    CALL core_cloth.cpp_CClothList_dtor_FUN_005b1480 ; 00414c45
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00414c4a
    PUSH 0x0                            ; 00414c4d
    SUB EAX,0x2a58                      ; 00414c4f
    PUSH EAX                            ; 00414c54
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 00414c55
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00414c5a
    PUSH 0x1                            ; 00414c5d
    LEA EBX,[EAX + 0xfffffd4c]          ; 00414c5f
    PUSH EBX                            ; 00414c65
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 00414c66
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00414c6b
    MOV DL,byte ptr [ESP + 0xc]         ; 00414c6e
    MOV EBX,EAX                         ; 00414c72
    TEST DL,0x2                         ; 00414c74
    JNZ 0x00414c98                      ; 00414c77
        ;   XREF to: 00414c98 (CONDITIONAL_JUMP)  ; LAB_00414c98
    MOV EAX,EBX                         ; 00414c79
    POP EBX                             ; 00414c7b
    RET                                 ; 00414c7c
    PUSH 0x5f34d0                       ; 00414c7d | g_CBeastTypeInfo
        ;   Label: LAB_00414c7d
    PUSH EBX                            ; 00414c82
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 00414c83
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00414c88
    PUSH EAX                            ; 00414c8b
    CALL crt_unknown.c_FUN_005b7fce     ; 00414c8c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 00414c91
    MOV EAX,EBX                         ; 00414c94
    POP EBX                             ; 00414c96
    RET                                 ; 00414c97
    PUSH EAX                            ; 00414c98
        ;   Label: LAB_00414c98
    CALL crt_unknown.c_FUN_005b7fdc     ; 00414c99
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 00414c9e
    MOV EAX,EBX                         ; 00414ca1
    POP EBX                             ; 00414ca3
    RET                                 ; 00414ca4

