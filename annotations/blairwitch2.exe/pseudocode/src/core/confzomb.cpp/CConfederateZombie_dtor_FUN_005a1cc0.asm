; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CConfederateZombie * core_confzomb_cpp_CConfederateZombie_dtor_FUN_005a1cc0(CConfederateZombie *this_ptr,uint flags)
;
; Parameters:
; CConfederateZombie * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   undefined4 g_CConfederateZombieVTable
;   WatcomTypeInfo g_CConfederateZombieTypeInfo
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

    PUSH EBX                            ; 005a1cc0
        ;   Label: core_confzomb.cpp_CConfederateZombie_dtor_FUN_005a1cc0
    PUSH ESI                            ; 005a1cc1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a1cc2
    TEST byte ptr [ESP + 0x10],0x4      ; 005a1cc6
    JNZ 0x005a1d57                      ; 005a1ccb
        ;   XREF to: 005a1d57 (CONDITIONAL_JUMP)  ; LAB_005a1d57
    PUSH 0x0                            ; 005a1cd1
    LEA ESI,[EBX + 0x264]               ; 005a1cd3
    PUSH ESI                            ; 005a1cd9
    MOV dword ptr [EBX + 0x2b0],0x5fefa4 ; 005a1cda | g_CConfederateZombieVTable
    CALL unkaddr_005a7eb0.cpp_FUN_005a8100 ; 005a1ce4
        ;   XREF to: 005a8100 (UNCONDITIONAL_CALL)  ; undefined unkaddr_005a7eb0.cpp_FUN_005a8100()
    ADD ESP,0x8                         ; 005a1ce9
    PUSH ESI                            ; 005a1cec
    CALL unkafter_superopt.cpp_FUN_005a8220 ; 005a1ced
        ;   XREF to: 005a8220 (UNCONDITIONAL_CALL)  ; undefined unkafter_superopt.cpp_FUN_005a8220()
    ADD ESP,0x4                         ; 005a1cf2
    PUSH 0x0                            ; 005a1cf5
    ADD EBX,0x3a20                      ; 005a1cf7
    PUSH EBX                            ; 005a1cfd
    CALL unkafter_armour.cpp_FUN_0040f2b0 ; 005a1cfe
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_0040f2b0()
    ADD ESP,0x8                         ; 005a1d03
    PUSH 0x0                            ; 005a1d06
    SUB EAX,0x9c8                       ; 005a1d08
    PUSH EAX                            ; 005a1d0d
    CALL unkaddr_0059d350.cpp_FUN_0059df70 ; 005a1d0e
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059df70()
    ADD ESP,0x8                         ; 005a1d13
    PUSH 0x0                            ; 005a1d16
    SUB EAX,0x34c                       ; 005a1d18
    PUSH EAX                            ; 005a1d1d
    CALL core_cloth.cpp_FUN_005b1480    ; 005a1d1e
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a1d23
    PUSH 0x0                            ; 005a1d26
    SUB EAX,0x2a58                      ; 005a1d28
    PUSH EAX                            ; 005a1d2d
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 005a1d2e
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a1d33
    PUSH 0x1                            ; 005a1d36
    LEA EBX,[EAX + 0xfffffd4c]          ; 005a1d38
    PUSH EBX                            ; 005a1d3e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 005a1d3f
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a1d44
    MOV DL,byte ptr [ESP + 0x10]        ; 005a1d47
    MOV EBX,EAX                         ; 005a1d4b
    TEST DL,0x2                         ; 005a1d4d
    JNZ 0x005a1d73                      ; 005a1d50
        ;   XREF to: 005a1d73 (CONDITIONAL_JUMP)  ; LAB_005a1d73
    MOV EAX,EBX                         ; 005a1d52
    POP ESI                             ; 005a1d54
    POP EBX                             ; 005a1d55
    RET                                 ; 005a1d56
    PUSH 0x5ff130                       ; 005a1d57 | g_CConfederateZombieTypeInfo
        ;   Label: LAB_005a1d57
    PUSH EBX                            ; 005a1d5c
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 005a1d5d
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 005a1d62
    PUSH EAX                            ; 005a1d65
    CALL crt_unknown.c_FUN_005b7fce     ; 005a1d66
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 005a1d6b
    MOV EAX,EBX                         ; 005a1d6e
    POP ESI                             ; 005a1d70
    POP EBX                             ; 005a1d71
    RET                                 ; 005a1d72
    PUSH EAX                            ; 005a1d73
        ;   Label: LAB_005a1d73
    CALL crt_unknown.c_FUN_005b7fdc     ; 005a1d74
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 005a1d79
    MOV EAX,EBX                         ; 005a1d7c
    POP ESI                             ; 005a1d7e
    POP EBX                             ; 005a1d7f
    RET                                 ; 005a1d80

