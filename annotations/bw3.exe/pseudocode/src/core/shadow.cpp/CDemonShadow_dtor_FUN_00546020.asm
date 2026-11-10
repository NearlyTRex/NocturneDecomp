; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonShadow * core_shadow_cpp_CDemonShadow_dtor_FUN_00546020(CDemonShadow *this_ptr,uint flags)
;
; Parameters:
; CDemonShadow *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CDemonShadowTypeInfo
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

    PUSH EBX                            ; 00546020
        ;   Label: core_shadow.cpp_CDemonShadow_dtor_FUN_00546020
    MOV EBX,dword ptr [ESP + 0x8]       ; 00546021
    TEST byte ptr [ESP + 0xc],0x4       ; 00546025
    JNZ 0x0054607d                      ; 0054602a
        ;   XREF to: 0054607d (CONDITIONAL_JUMP)  ; LAB_0054607d
    PUSH 0x0                            ; 0054602c
    ADD EBX,0x385c                      ; 0054602e
    PUSH EBX                            ; 00546034
    CALL unkafter_armour.cpp_FUN_00410370 ; 00546035
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 0054603a
    PUSH 0x0                            ; 0054603d
    SUB EAX,0x954                       ; 0054603f
    PUSH EAX                            ; 00546044
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043f900 ; 00546045
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054604a
    PUSH 0x0                            ; 0054604d
    SUB EAX,0x2db0                      ; 0054604f
    PUSH EAX                            ; 00546054
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 00546055
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054605a
    PUSH 0x1                            ; 0054605d
    LEA EBX,[EAX + 0xfffffea8]          ; 0054605f
    PUSH EBX                            ; 00546065
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 00546066
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054606b
    MOV DL,byte ptr [ESP + 0xc]         ; 0054606e
    MOV EBX,EAX                         ; 00546072
    TEST DL,0x2                         ; 00546074
    JNZ 0x00546098                      ; 00546077
        ;   XREF to: 00546098 (CONDITIONAL_JUMP)  ; LAB_00546098
    MOV EAX,EBX                         ; 00546079
    POP EBX                             ; 0054607b
    RET                                 ; 0054607c
    PUSH 0x5e42b0                       ; 0054607d | g_CDemonShadowTypeInfo
        ;   Label: LAB_0054607d
    PUSH EBX                            ; 00546082
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00546083
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 00546088
    PUSH EAX                            ; 0054608b
    CALL crt_unknown.c_FUN_005a30b6     ; 0054608c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00546091
    MOV EAX,EBX                         ; 00546094
    POP EBX                             ; 00546096
    RET                                 ; 00546097
    PUSH EAX                            ; 00546098
        ;   Label: LAB_00546098
    CALL crt_unknown.c_FUN_005a30c4     ; 00546099
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0054609e
    MOV EAX,EBX                         ; 005460a1
    POP EBX                             ; 005460a3
    RET                                 ; 005460a4

