; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CShadowsc * core_shotgun_cpp_CShadowsc_dtor_FUN_00546f40(CShadowsc *this_ptr,uint flags)
;
; Parameters:
; CShadowsc *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CShadowscTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   core_armour.cpp_FUN_00410370
;   core_cloth.cpp_CClothList_dtor_FUN_0043f900
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546f40
        ;   Label: core_shotgun.cpp_CShadowsc_dtor_FUN_00546f40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00546f41
    TEST byte ptr [ESP + 0xc],0x4       ; 00546f45
    JNZ 0x00546f9d                      ; 00546f4a
        ;   XREF to: 00546f9d (CONDITIONAL_JUMP)  ; LAB_00546f9d
    PUSH 0x0                            ; 00546f4c
    ADD EBX,0x385c                      ; 00546f4e
    PUSH EBX                            ; 00546f54
    CALL core_armour.cpp_FUN_00410370   ; 00546f55
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 00546f5a
    PUSH 0x0                            ; 00546f5d
    SUB EAX,0x954                       ; 00546f5f
    PUSH EAX                            ; 00546f64
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043f900 ; 00546f65
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00546f6a
    PUSH 0x0                            ; 00546f6d
    SUB EAX,0x2db0                      ; 00546f6f
    PUSH EAX                            ; 00546f74
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 00546f75
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00546f7a
    PUSH 0x1                            ; 00546f7d
    LEA EBX,[EAX + 0xfffffea8]          ; 00546f7f
    PUSH EBX                            ; 00546f85
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 00546f86
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00546f8b
    MOV DL,byte ptr [ESP + 0xc]         ; 00546f8e
    MOV EBX,EAX                         ; 00546f92
    TEST DL,0x2                         ; 00546f94
    JNZ 0x00546fb8                      ; 00546f97
        ;   XREF to: 00546fb8 (CONDITIONAL_JUMP)  ; LAB_00546fb8
    MOV EAX,EBX                         ; 00546f99
    POP EBX                             ; 00546f9b
    RET                                 ; 00546f9c
    PUSH 0x5e44b0                       ; 00546f9d | g_CShadowscTypeInfo
        ;   Label: LAB_00546f9d
    PUSH EBX                            ; 00546fa2
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00546fa3
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00546fa8
    PUSH EAX                            ; 00546fab
    CALL crt_unknown.c_FUN_005a30b6     ; 00546fac
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00546fb1
    MOV EAX,EBX                         ; 00546fb4
    POP EBX                             ; 00546fb6
    RET                                 ; 00546fb7
    PUSH EAX                            ; 00546fb8
        ;   Label: LAB_00546fb8
    CALL crt_unknown.c_FUN_005a30c4     ; 00546fb9
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00546fbe
    MOV EAX,EBX                         ; 00546fc1
    POP EBX                             ; 00546fc3
    RET                                 ; 00546fc4

