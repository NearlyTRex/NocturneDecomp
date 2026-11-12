; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTwigZombie * core_fforest_cpp_CTwigZombie_dtor_FUN_005a2eb0(CTwigZombie *this_ptr,uint flags)
;
; Parameters:
; CTwigZombie *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CTwigZombieTypeInfo
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

    PUSH EBX                            ; 005a2eb0
        ;   Label: core_fforest.cpp_CTwigZombie_dtor_FUN_005a2eb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a2eb1
    TEST byte ptr [ESP + 0xc],0x4       ; 005a2eb5
    JNZ 0x005a2f1d                      ; 005a2eba
        ;   XREF to: 005a2f1d (CONDITIONAL_JUMP)  ; LAB_005a2f1d
    PUSH 0x0                            ; 005a2ebc
    ADD EBX,0x3a20                      ; 005a2ebe
    PUSH EBX                            ; 005a2ec4
    CALL core_armour.cpp_FUN_0040f2b0   ; 005a2ec5
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040f2b0()
    ADD ESP,0x8                         ; 005a2eca
    PUSH 0x0                            ; 005a2ecd
    SUB EAX,0x9c8                       ; 005a2ecf
    PUSH EAX                            ; 005a2ed4
    CALL core_muzzle.cpp_FUN_0059df70   ; 005a2ed5
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059df70()
    ADD ESP,0x8                         ; 005a2eda
    PUSH 0x0                            ; 005a2edd
    SUB EAX,0x34c                       ; 005a2edf
    PUSH EAX                            ; 005a2ee4
    CALL core_cloth.cpp_CClothList_dtor_FUN_005b1480 ; 005a2ee5
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a2eea
    PUSH 0x0                            ; 005a2eed
    SUB EAX,0x2a58                      ; 005a2eef
    PUSH EAX                            ; 005a2ef4
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 005a2ef5
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a2efa
    PUSH 0x1                            ; 005a2efd
    LEA EBX,[EAX + 0xfffffd4c]          ; 005a2eff
    PUSH EBX                            ; 005a2f05
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 005a2f06
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a2f0b
    MOV DL,byte ptr [ESP + 0xc]         ; 005a2f0e
    MOV EBX,EAX                         ; 005a2f12
    TEST DL,0x2                         ; 005a2f14
    JNZ 0x005a2f38                      ; 005a2f17
        ;   XREF to: 005a2f38 (CONDITIONAL_JUMP)  ; LAB_005a2f38
    MOV EAX,EBX                         ; 005a2f19
    POP EBX                             ; 005a2f1b
    RET                                 ; 005a2f1c
    PUSH 0x5ff310                       ; 005a2f1d | g_CTwigZombieTypeInfo
        ;   Label: LAB_005a2f1d
    PUSH EBX                            ; 005a2f22
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 005a2f23
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 005a2f28
    PUSH EAX                            ; 005a2f2b
    CALL crt_unknown.c_FUN_005b7fce     ; 005a2f2c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 005a2f31
    MOV EAX,EBX                         ; 005a2f34
    POP EBX                             ; 005a2f36
    RET                                 ; 005a2f37
    PUSH EAX                            ; 005a2f38
        ;   Label: LAB_005a2f38
    CALL crt_unknown.c_FUN_005b7fdc     ; 005a2f39
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 005a2f3e
    MOV EAX,EBX                         ; 005a2f41
    POP EBX                             ; 005a2f43
    RET                                 ; 005a2f44

