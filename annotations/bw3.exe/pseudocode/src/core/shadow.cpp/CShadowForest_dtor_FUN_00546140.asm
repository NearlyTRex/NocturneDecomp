; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CShadowForest * core_shadow_cpp_CShadowForest_dtor_FUN_00546140(CShadowForest *this_ptr,uint flags)
;
; Parameters:
; CShadowForest *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CShadow_ForestTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   core_cloth.cpp_FUN_0043f900
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;   unkafter_armour.cpp_FUN_00410370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546140
        ;   Label: core_shadow.cpp_CShadowForest_dtor_FUN_00546140
    MOV EBX,dword ptr [ESP + 0x8]       ; 00546141
    TEST byte ptr [ESP + 0xc],0x4       ; 00546145
    JNZ 0x0054619d                      ; 0054614a
        ;   XREF to: 0054619d (CONDITIONAL_JUMP)  ; LAB_0054619d
    PUSH 0x0                            ; 0054614c
    ADD EBX,0x385c                      ; 0054614e
    PUSH EBX                            ; 00546154
    CALL unkafter_armour.cpp_FUN_00410370 ; 00546155
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 0054615a
    PUSH 0x0                            ; 0054615d
    SUB EAX,0x954                       ; 0054615f
    PUSH EAX                            ; 00546164
    CALL core_cloth.cpp_FUN_0043f900    ; 00546165
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054616a
    PUSH 0x0                            ; 0054616d
    SUB EAX,0x2db0                      ; 0054616f
    PUSH EAX                            ; 00546174
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 00546175
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054617a
    PUSH 0x1                            ; 0054617d
    LEA EBX,[EAX + 0xfffffea8]          ; 0054617f
    PUSH EBX                            ; 00546185
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 00546186
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054618b
    MOV DL,byte ptr [ESP + 0xc]         ; 0054618e
    MOV EBX,EAX                         ; 00546192
    TEST DL,0x2                         ; 00546194
    JNZ 0x005461b8                      ; 00546197
        ;   XREF to: 005461b8 (CONDITIONAL_JUMP)  ; LAB_005461b8
    MOV EAX,EBX                         ; 00546199
    POP EBX                             ; 0054619b
    RET                                 ; 0054619c
    PUSH 0x5e42f0                       ; 0054619d | g_CShadow_ForestTypeInfo
        ;   Label: LAB_0054619d
    PUSH EBX                            ; 005461a2
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 005461a3
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 005461a8
    PUSH EAX                            ; 005461ab
    CALL crt_unknown.c_FUN_005a30b6     ; 005461ac
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 005461b1
    MOV EAX,EBX                         ; 005461b4
    POP EBX                             ; 005461b6
    RET                                 ; 005461b7
    PUSH EAX                            ; 005461b8
        ;   Label: LAB_005461b8
    CALL crt_unknown.c_FUN_005a30c4     ; 005461b9
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 005461be
    MOV EAX,EBX                         ; 005461c1
    POP EBX                             ; 005461c3
    RET                                 ; 005461c4

