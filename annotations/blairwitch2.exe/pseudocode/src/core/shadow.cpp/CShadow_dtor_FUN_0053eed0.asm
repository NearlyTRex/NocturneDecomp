; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CShadow * core_shadow_cpp_CShadow_dtor_FUN_0053eed0(CShadow *this_ptr,uint flags)
;
; Parameters:
; CShadow *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CShadowTypeInfo
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

    PUSH EBX                            ; 0053eed0
        ;   Label: core_shadow.cpp_CShadow_dtor_FUN_0053eed0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0053eed1
    TEST byte ptr [ESP + 0xc],0x4       ; 0053eed5
    JNZ 0x0053ef3d                      ; 0053eeda
        ;   XREF to: 0053ef3d (CONDITIONAL_JUMP)  ; LAB_0053ef3d
    PUSH 0x0                            ; 0053eedc
    ADD EBX,0x3a20                      ; 0053eede
    PUSH EBX                            ; 0053eee4
    CALL core_armour.cpp_FUN_0040f2b0   ; 0053eee5
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040f2b0()
    ADD ESP,0x8                         ; 0053eeea
    PUSH 0x0                            ; 0053eeed
    SUB EAX,0x9c8                       ; 0053eeef
    PUSH EAX                            ; 0053eef4
    CALL core_muzzle.cpp_FUN_0059df70   ; 0053eef5
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059df70()
    ADD ESP,0x8                         ; 0053eefa
    PUSH 0x0                            ; 0053eefd
    SUB EAX,0x34c                       ; 0053eeff
    PUSH EAX                            ; 0053ef04
    CALL core_cloth.cpp_CClothList_dtor_FUN_005b1480 ; 0053ef05
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0053ef0a
    PUSH 0x0                            ; 0053ef0d
    SUB EAX,0x2a58                      ; 0053ef0f
    PUSH EAX                            ; 0053ef14
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 0053ef15
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0053ef1a
    PUSH 0x1                            ; 0053ef1d
    LEA EBX,[EAX + 0xfffffd4c]          ; 0053ef1f
    PUSH EBX                            ; 0053ef25
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 0053ef26
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0053ef2b
    MOV DL,byte ptr [ESP + 0xc]         ; 0053ef2e
    MOV EBX,EAX                         ; 0053ef32
    TEST DL,0x2                         ; 0053ef34
    JNZ 0x0053ef58                      ; 0053ef37
        ;   XREF to: 0053ef58 (CONDITIONAL_JUMP)  ; LAB_0053ef58
    MOV EAX,EBX                         ; 0053ef39
    POP EBX                             ; 0053ef3b
    RET                                 ; 0053ef3c
    PUSH 0x5fb580                       ; 0053ef3d | g_CShadowTypeInfo
        ;   Label: LAB_0053ef3d
    PUSH EBX                            ; 0053ef42
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0053ef43
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0053ef48
    PUSH EAX                            ; 0053ef4b
    CALL crt_unknown.c_FUN_005b7fce     ; 0053ef4c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0053ef51
    MOV EAX,EBX                         ; 0053ef54
    POP EBX                             ; 0053ef56
    RET                                 ; 0053ef57
    PUSH EAX                            ; 0053ef58
        ;   Label: LAB_0053ef58
    CALL crt_unknown.c_FUN_005b7fdc     ; 0053ef59
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 0053ef5e
    MOV EAX,EBX                         ; 0053ef61
    POP EBX                             ; 0053ef63
    RET                                 ; 0053ef64

