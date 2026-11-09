; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSuccubus * core_succubus_cpp_CSuccubus_dtor_FUN_00592ce0(CSuccubus *this_ptr,uint flags)
;
; Parameters:
; CSuccubus *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CSuccubusTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   core_cloth.cpp_FUN_00441ca0
;   core_morph.cpp_CMorph_dtor_FUN_00522fc0
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;   unkafter_armour.cpp_FUN_0040ee30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00592ce0
        ;   Label: core_succubus.cpp_CSuccubus_dtor_FUN_00592ce0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00592ce1
    TEST byte ptr [ESP + 0xc],0x4       ; 00592ce5
    JNZ 0x00592d71                      ; 00592cea
        ;   XREF to: 00592d71 (CONDITIONAL_JUMP)  ; LAB_00592d71
    PUSH 0x0                            ; 00592cf0
    ADD EBX,0xe7d8                      ; 00592cf2
    PUSH EBX                            ; 00592cf8
    CALL core_morph.cpp_CMorph_dtor_FUN_00522fc0 ; 00592cf9
        ;   XREF to: 00522fc0 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_dtor_FUN_00522fc0(CMorph * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00592cfe
    PUSH 0x0                            ; 00592d01
    SUB EAX,0x1cc                       ; 00592d03
    PUSH EAX                            ; 00592d08
    CALL core_cloth.cpp_FUN_00441ca0    ; 00592d09
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00592d0e
    PUSH 0x0                            ; 00592d11
    SUB EAX,0x23a4                      ; 00592d13
    PUSH EAX                            ; 00592d18
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 00592d19
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00592d1e
    PUSH 0x0                            ; 00592d21
    SUB EAX,0x8c8c                      ; 00592d23
    PUSH EAX                            ; 00592d28
    CALL unkafter_armour.cpp_FUN_0040ee30 ; 00592d29
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_0040ee30()
    ADD ESP,0x8                         ; 00592d2e
    PUSH 0x0                            ; 00592d31
    SUB EAX,0x93c                       ; 00592d33
    PUSH EAX                            ; 00592d38
    CALL core_cloth.cpp_FUN_00441ca0    ; 00592d39
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00592d3e
    PUSH 0x0                            ; 00592d41
    SUB EAX,0x2b48                      ; 00592d43
    PUSH EAX                            ; 00592d48
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 00592d49
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00592d4e
    PUSH 0x1                            ; 00592d51
    LEA EBX,[EAX + 0xfffffea8]          ; 00592d53
    PUSH EBX                            ; 00592d59
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 00592d5a
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00592d5f
    MOV DL,byte ptr [ESP + 0xc]         ; 00592d62
    MOV EBX,EAX                         ; 00592d66
    TEST DL,0x2                         ; 00592d68
    JNZ 0x00592d8c                      ; 00592d6b
        ;   XREF to: 00592d8c (CONDITIONAL_JUMP)  ; LAB_00592d8c
    MOV EAX,EBX                         ; 00592d6d
    POP EBX                             ; 00592d6f
    RET                                 ; 00592d70
    PUSH 0x6063d0                       ; 00592d71 | g_CSuccubusTypeInfo
        ;   Label: LAB_00592d71
    PUSH EBX                            ; 00592d76
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 00592d77
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 00592d7c
    PUSH EAX                            ; 00592d7f
    CALL crt_unknown.c_FUN_005c0336     ; 00592d80
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00592d85
    MOV EAX,EBX                         ; 00592d88
    POP EBX                             ; 00592d8a
    RET                                 ; 00592d8b
    PUSH EAX                            ; 00592d8c
        ;   Label: LAB_00592d8c
    CALL crt_unknown.c_FUN_005c0344     ; 00592d8d
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00592d92
    MOV EAX,EBX                         ; 00592d95
    POP EBX                             ; 00592d97
    RET                                 ; 00592d98

