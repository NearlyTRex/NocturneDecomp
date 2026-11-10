; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMattanntote * core_mattnntt_cpp_CMattanntote_dtor_FUN_00593ca0(CMattanntote *this_ptr,uint flags)
;
; Parameters:
; CMattanntote *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CMattanntoteTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   core_cloth.cpp_CClothList_dtor_FUN_0043f900
;   core_firestff.cpp_FUN_004a5930
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;   unkafter_armour.cpp_FUN_00410370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00593ca0
        ;   Label: core_mattnntt.cpp_CMattanntote_dtor_FUN_00593ca0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00593ca1
    TEST byte ptr [ESP + 0xc],0x4       ; 00593ca5
    JNZ 0x00593d0d                      ; 00593caa
        ;   XREF to: 00593d0d (CONDITIONAL_JUMP)  ; LAB_00593d0d
    PUSH 0x0                            ; 00593cac
    ADD EBX,0xd0b8                      ; 00593cae
    PUSH EBX                            ; 00593cb4
    CALL core_firestff.cpp_FUN_004a5930 ; 00593cb5
        ;   XREF to: 004a5930 (UNCONDITIONAL_CALL)  ; undefined core_firestff.cpp_FUN_004a5930()
    ADD ESP,0x8                         ; 00593cba
    PUSH 0x0                            ; 00593cbd
    SUB EAX,0x985c                      ; 00593cbf
    PUSH EAX                            ; 00593cc4
    CALL unkafter_armour.cpp_FUN_00410370 ; 00593cc5
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 00593cca
    PUSH 0x0                            ; 00593ccd
    SUB EAX,0x954                       ; 00593ccf
    PUSH EAX                            ; 00593cd4
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043f900 ; 00593cd5
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00593cda
    PUSH 0x0                            ; 00593cdd
    SUB EAX,0x2db0                      ; 00593cdf
    PUSH EAX                            ; 00593ce4
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 00593ce5
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00593cea
    PUSH 0x1                            ; 00593ced
    LEA EBX,[EAX + 0xfffffea8]          ; 00593cef
    PUSH EBX                            ; 00593cf5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 00593cf6
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00593cfb
    MOV DL,byte ptr [ESP + 0xc]         ; 00593cfe
    MOV EBX,EAX                         ; 00593d02
    TEST DL,0x2                         ; 00593d04
    JNZ 0x00593d28                      ; 00593d07
        ;   XREF to: 00593d28 (CONDITIONAL_JUMP)  ; LAB_00593d28
    MOV EAX,EBX                         ; 00593d09
    POP EBX                             ; 00593d0b
    RET                                 ; 00593d0c
    PUSH 0x5e74e0                       ; 00593d0d | g_CMattanntoteTypeInfo
        ;   Label: LAB_00593d0d
    PUSH EBX                            ; 00593d12
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00593d13
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 00593d18
    PUSH EAX                            ; 00593d1b
    CALL crt_unknown.c_FUN_005a30b6     ; 00593d1c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00593d21
    MOV EAX,EBX                         ; 00593d24
    POP EBX                             ; 00593d26
    RET                                 ; 00593d27
    PUSH EAX                            ; 00593d28
        ;   Label: LAB_00593d28
    CALL crt_unknown.c_FUN_005a30c4     ; 00593d29
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00593d2e
    MOV EAX,EBX                         ; 00593d31
    POP EBX                             ; 00593d33
    RET                                 ; 00593d34

