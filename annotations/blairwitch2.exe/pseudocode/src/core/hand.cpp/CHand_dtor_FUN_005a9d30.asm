; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHand * core_hand_cpp_CHand_dtor_FUN_005a9d30(CHand *this_ptr,uint flags)
;
; Parameters:
; CHand *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   undefined4 g_CHandVTable
;   WatcomTypeInfo g_CHandTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   core_cloth.cpp_FUN_005b1480
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;   unkaddr_0059d350.cpp_FUN_0059df70
;   unkafter_armour.cpp_FUN_0040f2b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9d30
        ;   Label: core_hand.cpp_CHand_dtor_FUN_005a9d30
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a9d31
    TEST byte ptr [ESP + 0xc],0x4       ; 005a9d35
    JNZ 0x005a9da7                      ; 005a9d3a
        ;   XREF to: 005a9da7 (CONDITIONAL_JUMP)  ; LAB_005a9da7
    PUSH 0x0                            ; 005a9d3c
    ADD EBX,0x3a20                      ; 005a9d3e
    PUSH EBX                            ; 005a9d44
    MOV dword ptr [EBX + 0xffffc890],0x6008a4 ; 005a9d45 | g_CHandVTable
    CALL unkafter_armour.cpp_FUN_0040f2b0 ; 005a9d4f
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_0040f2b0()
    ADD ESP,0x8                         ; 005a9d54
    PUSH 0x0                            ; 005a9d57
    SUB EAX,0x9c8                       ; 005a9d59
    PUSH EAX                            ; 005a9d5e
    CALL unkaddr_0059d350.cpp_FUN_0059df70 ; 005a9d5f
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059df70()
    ADD ESP,0x8                         ; 005a9d64
    PUSH 0x0                            ; 005a9d67
    SUB EAX,0x34c                       ; 005a9d69
    PUSH EAX                            ; 005a9d6e
    CALL core_cloth.cpp_FUN_005b1480    ; 005a9d6f
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a9d74
    PUSH 0x0                            ; 005a9d77
    SUB EAX,0x2a58                      ; 005a9d79
    PUSH EAX                            ; 005a9d7e
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 005a9d7f
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a9d84
    PUSH 0x1                            ; 005a9d87
    LEA EBX,[EAX + 0xfffffd4c]          ; 005a9d89
    PUSH EBX                            ; 005a9d8f
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 005a9d90
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a9d95
    MOV DL,byte ptr [ESP + 0xc]         ; 005a9d98
    MOV EBX,EAX                         ; 005a9d9c
    TEST DL,0x2                         ; 005a9d9e
    JNZ 0x005a9dc2                      ; 005a9da1
        ;   XREF to: 005a9dc2 (CONDITIONAL_JUMP)  ; LAB_005a9dc2
    MOV EAX,EBX                         ; 005a9da3
    POP EBX                             ; 005a9da5
    RET                                 ; 005a9da6
    PUSH 0x600a30                       ; 005a9da7 | g_CHandTypeInfo
        ;   Label: LAB_005a9da7
    PUSH EBX                            ; 005a9dac
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 005a9dad
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 005a9db2
    PUSH EAX                            ; 005a9db5
    CALL crt_unknown.c_FUN_005b7fce     ; 005a9db6
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 005a9dbb
    MOV EAX,EBX                         ; 005a9dbe
    POP EBX                             ; 005a9dc0
    RET                                 ; 005a9dc1
    PUSH EAX                            ; 005a9dc2
        ;   Label: LAB_005a9dc2
    CALL crt_unknown.c_FUN_005b7fdc     ; 005a9dc3
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 005a9dc8
    MOV EAX,EBX                         ; 005a9dcb
    POP EBX                             ; 005a9dcd
    RET                                 ; 005a9dce

