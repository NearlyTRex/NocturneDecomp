; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTheHand * __cdecl core_thehand_cpp_CTheHand_dtor_FUN_00599c20(CTheHand *this_ptr,uint flags)
;
; Parameters:
; CTheHand *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CTheHandTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   core_armour.cpp_FUN_0040ee30
;   core_cloth.cpp_CClothList_dtor_FUN_00441ca0
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00599c20
        ;   Label: core_thehand.cpp_CTheHand_dtor_FUN_00599c20
    MOV EBX,dword ptr [ESP + 0x8]       ; 00599c21
    TEST byte ptr [ESP + 0xc],0x4       ; 00599c25
    JNZ 0x00599c7d                      ; 00599c2a
        ;   XREF to: 00599c7d (CONDITIONAL_JUMP)  ; LAB_00599c7d
    PUSH 0x0                            ; 00599c2c
    ADD EBX,0x35dc                      ; 00599c2e
    PUSH EBX                            ; 00599c34
    CALL core_armour.cpp_FUN_0040ee30   ; 00599c35
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040ee30()
    ADD ESP,0x8                         ; 00599c3a
    PUSH 0x0                            ; 00599c3d
    SUB EAX,0x93c                       ; 00599c3f
    PUSH EAX                            ; 00599c44
    CALL core_cloth.cpp_CClothList_dtor_FUN_00441ca0 ; 00599c45
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00599c4a
    PUSH 0x0                            ; 00599c4d
    SUB EAX,0x2b48                      ; 00599c4f
    PUSH EAX                            ; 00599c54
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 00599c55
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00599c5a
    PUSH 0x1                            ; 00599c5d
    LEA EBX,[EAX + 0xfffffea8]          ; 00599c5f
    PUSH EBX                            ; 00599c65
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 00599c66
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00599c6b
    MOV DL,byte ptr [ESP + 0xc]         ; 00599c6e
    MOV EBX,EAX                         ; 00599c72
    TEST DL,0x2                         ; 00599c74
    JNZ 0x00599c98                      ; 00599c77
        ;   XREF to: 00599c98 (CONDITIONAL_JUMP)  ; LAB_00599c98
    MOV EAX,EBX                         ; 00599c79
    POP EBX                             ; 00599c7b
    RET                                 ; 00599c7c
    PUSH 0x606f50                       ; 00599c7d | g_CTheHandTypeInfo
        ;   Label: LAB_00599c7d
    PUSH EBX                            ; 00599c82
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 00599c83
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00599c88
    PUSH EAX                            ; 00599c8b
    CALL crt_unknown.c_FUN_005c0336     ; 00599c8c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00599c91
    MOV EAX,EBX                         ; 00599c94
    POP EBX                             ; 00599c96
    RET                                 ; 00599c97
    PUSH EAX                            ; 00599c98
        ;   Label: LAB_00599c98
    CALL crt_unknown.c_FUN_005c0344     ; 00599c99
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00599c9e
    MOV EAX,EBX                         ; 00599ca1
    POP EBX                             ; 00599ca3
    RET                                 ; 00599ca4

