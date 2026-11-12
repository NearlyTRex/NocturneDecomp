; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBatCreature * core_batcreat_cpp_CBatCreature_dtor_FUN_00412a20(CBatCreature *this_ptr,uint flags)
;
; Parameters:
; CBatCreature *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBatCreatureTypeInfo
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

    PUSH EBX                            ; 00412a20
        ;   Label: core_batcreat.cpp_CBatCreature_dtor_FUN_00412a20
    MOV EBX,dword ptr [ESP + 0x8]       ; 00412a21
    TEST byte ptr [ESP + 0xc],0x4       ; 00412a25
    JNZ 0x00412a8d                      ; 00412a2a
        ;   XREF to: 00412a8d (CONDITIONAL_JUMP)  ; LAB_00412a8d
    PUSH 0x0                            ; 00412a2c
    ADD EBX,0x3a20                      ; 00412a2e
    PUSH EBX                            ; 00412a34
    CALL core_armour.cpp_FUN_0040f2b0   ; 00412a35
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040f2b0()
    ADD ESP,0x8                         ; 00412a3a
    PUSH 0x0                            ; 00412a3d
    SUB EAX,0x9c8                       ; 00412a3f
    PUSH EAX                            ; 00412a44
    CALL core_muzzle.cpp_FUN_0059df70   ; 00412a45
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059df70()
    ADD ESP,0x8                         ; 00412a4a
    PUSH 0x0                            ; 00412a4d
    SUB EAX,0x34c                       ; 00412a4f
    PUSH EAX                            ; 00412a54
    CALL core_cloth.cpp_CClothList_dtor_FUN_005b1480 ; 00412a55
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00412a5a
    PUSH 0x0                            ; 00412a5d
    SUB EAX,0x2a58                      ; 00412a5f
    PUSH EAX                            ; 00412a64
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 00412a65
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00412a6a
    PUSH 0x1                            ; 00412a6d
    LEA EBX,[EAX + 0xfffffd4c]          ; 00412a6f
    PUSH EBX                            ; 00412a75
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 00412a76
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00412a7b
    MOV DL,byte ptr [ESP + 0xc]         ; 00412a7e
    MOV EBX,EAX                         ; 00412a82
    TEST DL,0x2                         ; 00412a84
    JNZ 0x00412aa8                      ; 00412a87
        ;   XREF to: 00412aa8 (CONDITIONAL_JUMP)  ; LAB_00412aa8
    MOV EAX,EBX                         ; 00412a89
    POP EBX                             ; 00412a8b
    RET                                 ; 00412a8c
    PUSH 0x5f3050                       ; 00412a8d | g_CBatCreatureTypeInfo
        ;   Label: LAB_00412a8d
    PUSH EBX                            ; 00412a92
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 00412a93
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00412a98
    PUSH EAX                            ; 00412a9b
    CALL crt_unknown.c_FUN_005b7fce     ; 00412a9c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 00412aa1
    MOV EAX,EBX                         ; 00412aa4
    POP EBX                             ; 00412aa6
    RET                                 ; 00412aa7
    PUSH EAX                            ; 00412aa8
        ;   Label: LAB_00412aa8
    CALL crt_unknown.c_FUN_005b7fdc     ; 00412aa9
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 00412aae
    MOV EAX,EBX                         ; 00412ab1
    POP EBX                             ; 00412ab3
    RET                                 ; 00412ab4

