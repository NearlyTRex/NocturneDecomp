; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGhoul * __cdecl core_ghoul_cpp_CGhoul_dtor_FUN_004e0f20(CGhoul *this_ptr,uint flags)
;
; Parameters:
; CGhoul *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CGhoulTypeInfo
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

    PUSH EBX                            ; 004e0f20
        ;   Label: core_ghoul.cpp_CGhoul_dtor_FUN_004e0f20
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e0f21
    TEST byte ptr [ESP + 0xc],0x4       ; 004e0f25
    JNZ 0x004e0f7d                      ; 004e0f2a
        ;   XREF to: 004e0f7d (CONDITIONAL_JUMP)  ; LAB_004e0f7d
    PUSH 0x0                            ; 004e0f2c
    ADD EBX,0x35dc                      ; 004e0f2e
    PUSH EBX                            ; 004e0f34
    CALL core_armour.cpp_FUN_0040ee30   ; 004e0f35
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040ee30()
    ADD ESP,0x8                         ; 004e0f3a
    PUSH 0x0                            ; 004e0f3d
    SUB EAX,0x93c                       ; 004e0f3f
    PUSH EAX                            ; 004e0f44
    CALL core_cloth.cpp_CClothList_dtor_FUN_00441ca0 ; 004e0f45
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e0f4a
    PUSH 0x0                            ; 004e0f4d
    SUB EAX,0x2b48                      ; 004e0f4f
    PUSH EAX                            ; 004e0f54
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 004e0f55
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e0f5a
    PUSH 0x1                            ; 004e0f5d
    LEA EBX,[EAX + 0xfffffea8]          ; 004e0f5f
    PUSH EBX                            ; 004e0f65
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 004e0f66
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e0f6b
    MOV DL,byte ptr [ESP + 0xc]         ; 004e0f6e
    MOV EBX,EAX                         ; 004e0f72
    TEST DL,0x2                         ; 004e0f74
    JNZ 0x004e0f98                      ; 004e0f77
        ;   XREF to: 004e0f98 (CONDITIONAL_JUMP)  ; LAB_004e0f98
    MOV EAX,EBX                         ; 004e0f79
    POP EBX                             ; 004e0f7b
    RET                                 ; 004e0f7c
    PUSH 0x601430                       ; 004e0f7d | g_CGhoulTypeInfo
        ;   Label: LAB_004e0f7d
    PUSH EBX                            ; 004e0f82
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004e0f83
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004e0f88
    PUSH EAX                            ; 004e0f8b
    CALL crt_unknown.c_FUN_005c0336     ; 004e0f8c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004e0f91
    MOV EAX,EBX                         ; 004e0f94
    POP EBX                             ; 004e0f96
    RET                                 ; 004e0f97
    PUSH EAX                            ; 004e0f98
        ;   Label: LAB_004e0f98
    CALL crt_unknown.c_FUN_005c0344     ; 004e0f99
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004e0f9e
    MOV EAX,EBX                         ; 004e0fa1
    POP EBX                             ; 004e0fa3
    RET                                 ; 004e0fa4

