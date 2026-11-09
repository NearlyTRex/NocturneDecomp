; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CUnionZombie * core_unionzom_cpp_CUnionZombie_dtor_FUN_005a3e70(CUnionZombie *this_ptr,uint flags)
;
; Parameters:
; CUnionZombie *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   undefined4 g_CUnionZombieVTable
;   WatcomTypeInfo g_CUnionZombieTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   core_cloth.cpp_FUN_005b1480
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;   unkaddr_0059d350.cpp_FUN_0059df70
;   unkaddr_005a7eb0.cpp_FUN_005a8100
;   unkafter_armour.cpp_FUN_0040f2b0
;   unkafter_superopt.cpp_FUN_005a8220
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3e70
        ;   Label: core_unionzom.cpp_CUnionZombie_dtor_FUN_005a3e70
    PUSH ESI                            ; 005a3e71
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a3e72
    TEST byte ptr [ESP + 0x10],0x4      ; 005a3e76
    JNZ 0x005a3f07                      ; 005a3e7b
        ;   XREF to: 005a3f07 (CONDITIONAL_JUMP)  ; LAB_005a3f07
    PUSH 0x0                            ; 005a3e81
    LEA ESI,[EBX + 0x264]               ; 005a3e83
    PUSH ESI                            ; 005a3e89
    MOV dword ptr [EBX + 0x2b0],0x5ff554 ; 005a3e8a | g_CUnionZombieVTable
    CALL unkaddr_005a7eb0.cpp_FUN_005a8100 ; 005a3e94
        ;   XREF to: 005a8100 (UNCONDITIONAL_CALL)  ; undefined unkaddr_005a7eb0.cpp_FUN_005a8100()
    ADD ESP,0x8                         ; 005a3e99
    PUSH ESI                            ; 005a3e9c
    CALL unkafter_superopt.cpp_FUN_005a8220 ; 005a3e9d
        ;   XREF to: 005a8220 (UNCONDITIONAL_CALL)  ; undefined unkafter_superopt.cpp_FUN_005a8220()
    ADD ESP,0x4                         ; 005a3ea2
    PUSH 0x0                            ; 005a3ea5
    ADD EBX,0x3a20                      ; 005a3ea7
    PUSH EBX                            ; 005a3ead
    CALL unkafter_armour.cpp_FUN_0040f2b0 ; 005a3eae
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_0040f2b0()
    ADD ESP,0x8                         ; 005a3eb3
    PUSH 0x0                            ; 005a3eb6
    SUB EAX,0x9c8                       ; 005a3eb8
    PUSH EAX                            ; 005a3ebd
    CALL unkaddr_0059d350.cpp_FUN_0059df70 ; 005a3ebe
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059df70()
    ADD ESP,0x8                         ; 005a3ec3
    PUSH 0x0                            ; 005a3ec6
    SUB EAX,0x34c                       ; 005a3ec8
    PUSH EAX                            ; 005a3ecd
    CALL core_cloth.cpp_FUN_005b1480    ; 005a3ece
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a3ed3
    PUSH 0x0                            ; 005a3ed6
    SUB EAX,0x2a58                      ; 005a3ed8
    PUSH EAX                            ; 005a3edd
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 005a3ede
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a3ee3
    PUSH 0x1                            ; 005a3ee6
    LEA EBX,[EAX + 0xfffffd4c]          ; 005a3ee8
    PUSH EBX                            ; 005a3eee
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 005a3eef
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a3ef4
    MOV DL,byte ptr [ESP + 0x10]        ; 005a3ef7
    MOV EBX,EAX                         ; 005a3efb
    TEST DL,0x2                         ; 005a3efd
    JNZ 0x005a3f23                      ; 005a3f00
        ;   XREF to: 005a3f23 (CONDITIONAL_JUMP)  ; LAB_005a3f23
    MOV EAX,EBX                         ; 005a3f02
    POP ESI                             ; 005a3f04
    POP EBX                             ; 005a3f05
    RET                                 ; 005a3f06
    PUSH 0x5ff6e0                       ; 005a3f07 | g_CUnionZombieTypeInfo
        ;   Label: LAB_005a3f07
    PUSH EBX                            ; 005a3f0c
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 005a3f0d
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 005a3f12
    PUSH EAX                            ; 005a3f15
    CALL crt_unknown.c_FUN_005b7fce     ; 005a3f16
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 005a3f1b
    MOV EAX,EBX                         ; 005a3f1e
    POP ESI                             ; 005a3f20
    POP EBX                             ; 005a3f21
    RET                                 ; 005a3f22
    PUSH EAX                            ; 005a3f23
        ;   Label: LAB_005a3f23
    CALL crt_unknown.c_FUN_005b7fdc     ; 005a3f24
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 005a3f29
    MOV EAX,EBX                         ; 005a3f2c
    POP ESI                             ; 005a3f2e
    POP EBX                             ; 005a3f2f
    RET                                 ; 005a3f30

