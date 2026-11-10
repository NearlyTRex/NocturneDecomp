; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBaal * core_baal_cpp_CBaal_dtor_FUN_00597d00(CBaal *this_ptr,uint flags)
;
; Parameters:
; CBaal *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBaalTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   core_cloth.cpp_CClothList_dtor_FUN_0043f900
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;   unkafter_armour.cpp_FUN_00410370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00597d00
        ;   Label: core_baal.cpp_CBaal_dtor_FUN_00597d00
    MOV EBX,dword ptr [ESP + 0x8]       ; 00597d01
    TEST byte ptr [ESP + 0xc],0x4       ; 00597d05
    JNZ 0x00597d5d                      ; 00597d0a
        ;   XREF to: 00597d5d (CONDITIONAL_JUMP)  ; LAB_00597d5d
    PUSH 0x0                            ; 00597d0c
    ADD EBX,0x385c                      ; 00597d0e
    PUSH EBX                            ; 00597d14
    CALL unkafter_armour.cpp_FUN_00410370 ; 00597d15
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 00597d1a
    PUSH 0x0                            ; 00597d1d
    SUB EAX,0x954                       ; 00597d1f
    PUSH EAX                            ; 00597d24
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043f900 ; 00597d25
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00597d2a
    PUSH 0x0                            ; 00597d2d
    SUB EAX,0x2db0                      ; 00597d2f
    PUSH EAX                            ; 00597d34
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 00597d35
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00597d3a
    PUSH 0x1                            ; 00597d3d
    LEA EBX,[EAX + 0xfffffea8]          ; 00597d3f
    PUSH EBX                            ; 00597d45
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 00597d46
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00597d4b
    MOV DL,byte ptr [ESP + 0xc]         ; 00597d4e
    MOV EBX,EAX                         ; 00597d52
    TEST DL,0x2                         ; 00597d54
    JNZ 0x00597d78                      ; 00597d57
        ;   XREF to: 00597d78 (CONDITIONAL_JUMP)  ; LAB_00597d78
    MOV EAX,EBX                         ; 00597d59
    POP EBX                             ; 00597d5b
    RET                                 ; 00597d5c
    PUSH 0x5e7820                       ; 00597d5d | g_CBaalTypeInfo
        ;   Label: LAB_00597d5d
    PUSH EBX                            ; 00597d62
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00597d63
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 00597d68
    PUSH EAX                            ; 00597d6b
    CALL crt_unknown.c_FUN_005a30b6     ; 00597d6c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00597d71
    MOV EAX,EBX                         ; 00597d74
    POP EBX                             ; 00597d76
    RET                                 ; 00597d77
    PUSH EAX                            ; 00597d78
        ;   Label: LAB_00597d78
    CALL crt_unknown.c_FUN_005a30c4     ; 00597d79
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00597d7e
    MOV EAX,EBX                         ; 00597d81
    POP EBX                             ; 00597d83
    RET                                 ; 00597d84

