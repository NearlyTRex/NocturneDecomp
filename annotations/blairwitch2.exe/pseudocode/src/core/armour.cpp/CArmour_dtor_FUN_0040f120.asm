; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CArmour * core_armour_cpp_CArmour_dtor_FUN_0040f120(CArmour *this_ptr,uint flags)
;
; Parameters:
; CArmour *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CArmourTypeInfo
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

    PUSH EBX                            ; 0040f120
        ;   Label: core_armour.cpp_CArmour_dtor_FUN_0040f120
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040f121
    TEST byte ptr [ESP + 0xc],0x4       ; 0040f125
    JNZ 0x0040f18d                      ; 0040f12a
        ;   XREF to: 0040f18d (CONDITIONAL_JUMP)  ; LAB_0040f18d
    PUSH 0x0                            ; 0040f12c
    ADD EBX,0x3a20                      ; 0040f12e
    PUSH EBX                            ; 0040f134
    CALL core_armour.cpp_FUN_0040f2b0   ; 0040f135
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040f2b0()
    ADD ESP,0x8                         ; 0040f13a
    PUSH 0x0                            ; 0040f13d
    SUB EAX,0x9c8                       ; 0040f13f
    PUSH EAX                            ; 0040f144
    CALL core_muzzle.cpp_FUN_0059df70   ; 0040f145
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059df70()
    ADD ESP,0x8                         ; 0040f14a
    PUSH 0x0                            ; 0040f14d
    SUB EAX,0x34c                       ; 0040f14f
    PUSH EAX                            ; 0040f154
    CALL core_cloth.cpp_CClothList_dtor_FUN_005b1480 ; 0040f155
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040f15a
    PUSH 0x0                            ; 0040f15d
    SUB EAX,0x2a58                      ; 0040f15f
    PUSH EAX                            ; 0040f164
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 0040f165
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040f16a
    PUSH 0x1                            ; 0040f16d
    LEA EBX,[EAX + 0xfffffd4c]          ; 0040f16f
    PUSH EBX                            ; 0040f175
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 0040f176
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040f17b
    MOV DL,byte ptr [ESP + 0xc]         ; 0040f17e
    MOV EBX,EAX                         ; 0040f182
    TEST DL,0x2                         ; 0040f184
    JNZ 0x0040f1a8                      ; 0040f187
        ;   XREF to: 0040f1a8 (CONDITIONAL_JUMP)  ; LAB_0040f1a8
    MOV EAX,EBX                         ; 0040f189
    POP EBX                             ; 0040f18b
    RET                                 ; 0040f18c
    PUSH 0x5f27e0                       ; 0040f18d | g_CArmourTypeInfo
        ;   Label: LAB_0040f18d
    PUSH EBX                            ; 0040f192
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0040f193
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0040f198
    PUSH EAX                            ; 0040f19b
    CALL crt_unknown.c_FUN_005b7fce     ; 0040f19c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0040f1a1
    MOV EAX,EBX                         ; 0040f1a4
    POP EBX                             ; 0040f1a6
    RET                                 ; 0040f1a7
    PUSH EAX                            ; 0040f1a8
        ;   Label: LAB_0040f1a8
    CALL crt_unknown.c_FUN_005b7fdc     ; 0040f1a9
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 0040f1ae
    MOV EAX,EBX                         ; 0040f1b1
    POP EBX                             ; 0040f1b3
    RET                                 ; 0040f1b4

