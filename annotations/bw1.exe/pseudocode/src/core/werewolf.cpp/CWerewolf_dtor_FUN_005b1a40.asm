; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWerewolf * core_werewolf_cpp_CWerewolf_dtor_FUN_005b1a40(CWerewolf *this_ptr,uint flags)
;
; Parameters:
; CWerewolf *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CWerewolfTypeInfo
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

    PUSH EBX                            ; 005b1a40
        ;   Label: core_werewolf.cpp_CWerewolf_dtor_FUN_005b1a40
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b1a41
    TEST byte ptr [ESP + 0xc],0x4       ; 005b1a45
    JNZ 0x005b1a9d                      ; 005b1a4a
        ;   XREF to: 005b1a9d (CONDITIONAL_JUMP)  ; LAB_005b1a9d
    PUSH 0x0                            ; 005b1a4c
    ADD EBX,0x35dc                      ; 005b1a4e
    PUSH EBX                            ; 005b1a54
    CALL core_armour.cpp_FUN_0040ee30   ; 005b1a55
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040ee30()
    ADD ESP,0x8                         ; 005b1a5a
    PUSH 0x0                            ; 005b1a5d
    SUB EAX,0x93c                       ; 005b1a5f
    PUSH EAX                            ; 005b1a64
    CALL core_cloth.cpp_CClothList_dtor_FUN_00441ca0 ; 005b1a65
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005b1a6a
    PUSH 0x0                            ; 005b1a6d
    SUB EAX,0x2b48                      ; 005b1a6f
    PUSH EAX                            ; 005b1a74
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 005b1a75
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005b1a7a
    PUSH 0x1                            ; 005b1a7d
    LEA EBX,[EAX + 0xfffffea8]          ; 005b1a7f
    PUSH EBX                            ; 005b1a85
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 005b1a86
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005b1a8b
    MOV DL,byte ptr [ESP + 0xc]         ; 005b1a8e
    MOV EBX,EAX                         ; 005b1a92
    TEST DL,0x2                         ; 005b1a94
    JNZ 0x005b1ab8                      ; 005b1a97
        ;   XREF to: 005b1ab8 (CONDITIONAL_JUMP)  ; LAB_005b1ab8
    MOV EAX,EBX                         ; 005b1a99
    POP EBX                             ; 005b1a9b
    RET                                 ; 005b1a9c
    PUSH 0x608140                       ; 005b1a9d | g_CWerewolfTypeInfo
        ;   Label: LAB_005b1a9d
    PUSH EBX                            ; 005b1aa2
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 005b1aa3
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005b1aa8
    PUSH EAX                            ; 005b1aab
    CALL crt_unknown.c_FUN_005c0336     ; 005b1aac
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 005b1ab1
    MOV EAX,EBX                         ; 005b1ab4
    POP EBX                             ; 005b1ab6
    RET                                 ; 005b1ab7
    PUSH EAX                            ; 005b1ab8
        ;   Label: LAB_005b1ab8
    CALL crt_unknown.c_FUN_005c0344     ; 005b1ab9
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 005b1abe
    MOV EAX,EBX                         ; 005b1ac1
    POP EBX                             ; 005b1ac3
    RET                                 ; 005b1ac4

