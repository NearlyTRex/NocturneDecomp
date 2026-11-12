; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGrandma * core_bwgrndma_cpp_CGrandma_dtor_FUN_005a7e10(CGrandma *this_ptr,uint flags)
;
; Parameters:
; CGrandma *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CGrandmaTypeInfo
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

    PUSH EBX                            ; 005a7e10
        ;   Label: core_bwgrndma.cpp_CGrandma_dtor_FUN_005a7e10
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a7e11
    TEST byte ptr [ESP + 0xc],0x4       ; 005a7e15
    JNZ 0x005a7e7d                      ; 005a7e1a
        ;   XREF to: 005a7e7d (CONDITIONAL_JUMP)  ; LAB_005a7e7d
    PUSH 0x0                            ; 005a7e1c
    ADD EBX,0x3a20                      ; 005a7e1e
    PUSH EBX                            ; 005a7e24
    CALL core_armour.cpp_FUN_0040f2b0   ; 005a7e25
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040f2b0()
    ADD ESP,0x8                         ; 005a7e2a
    PUSH 0x0                            ; 005a7e2d
    SUB EAX,0x9c8                       ; 005a7e2f
    PUSH EAX                            ; 005a7e34
    CALL core_muzzle.cpp_FUN_0059df70   ; 005a7e35
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059df70()
    ADD ESP,0x8                         ; 005a7e3a
    PUSH 0x0                            ; 005a7e3d
    SUB EAX,0x34c                       ; 005a7e3f
    PUSH EAX                            ; 005a7e44
    CALL core_cloth.cpp_CClothList_dtor_FUN_005b1480 ; 005a7e45
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a7e4a
    PUSH 0x0                            ; 005a7e4d
    SUB EAX,0x2a58                      ; 005a7e4f
    PUSH EAX                            ; 005a7e54
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 005a7e55
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a7e5a
    PUSH 0x1                            ; 005a7e5d
    LEA EBX,[EAX + 0xfffffd4c]          ; 005a7e5f
    PUSH EBX                            ; 005a7e65
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 005a7e66
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a7e6b
    MOV DL,byte ptr [ESP + 0xc]         ; 005a7e6e
    MOV EBX,EAX                         ; 005a7e72
    TEST DL,0x2                         ; 005a7e74
    JNZ 0x005a7e98                      ; 005a7e77
        ;   XREF to: 005a7e98 (CONDITIONAL_JUMP)  ; LAB_005a7e98
    MOV EAX,EBX                         ; 005a7e79
    POP EBX                             ; 005a7e7b
    RET                                 ; 005a7e7c
    PUSH 0x600290                       ; 005a7e7d | g_CGrandmaTypeInfo
        ;   Label: LAB_005a7e7d
    PUSH EBX                            ; 005a7e82
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 005a7e83
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005a7e88
    PUSH EAX                            ; 005a7e8b
    CALL crt_unknown.c_FUN_005b7fce     ; 005a7e8c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 005a7e91
    MOV EAX,EBX                         ; 005a7e94
    POP EBX                             ; 005a7e96
    RET                                 ; 005a7e97
    PUSH EAX                            ; 005a7e98
        ;   Label: LAB_005a7e98
    CALL crt_unknown.c_FUN_005b7fdc     ; 005a7e99
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 005a7e9e
    MOV EAX,EBX                         ; 005a7ea1
    POP EBX                             ; 005a7ea3
    RET                                 ; 005a7ea4

