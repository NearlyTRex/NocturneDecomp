; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBiggs * core_biggs_cpp_CBiggs_dtor_FUN_004150f0(CBiggs *this_ptr,uint flags)
;
; Parameters:
; CBiggs *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBiggsTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   core_armour.cpp_FUN_0040ee30
;   core_cloth.cpp_CClothList_dtor_FUN_00441ca0
;   core_morph.cpp_CMorph_dtor_FUN_00522fc0
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004150f0
        ;   Label: core_biggs.cpp_CBiggs_dtor_FUN_004150f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004150f1
    TEST byte ptr [ESP + 0xc],0x4       ; 004150f5
    JNZ 0x0041515d                      ; 004150fa
        ;   XREF to: 0041515d (CONDITIONAL_JUMP)  ; LAB_0041515d
    PUSH 0x0                            ; 004150fc
    ADD EBX,0xc3ec                      ; 004150fe
    PUSH EBX                            ; 00415104
    CALL core_morph.cpp_CMorph_dtor_FUN_00522fc0 ; 00415105
        ;   XREF to: 00522fc0 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_dtor_FUN_00522fc0(CMorph * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041510a
    PUSH 0x0                            ; 0041510d
    SUB EAX,0x8e10                      ; 0041510f
    PUSH EAX                            ; 00415114
    CALL core_armour.cpp_FUN_0040ee30   ; 00415115
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040ee30()
    ADD ESP,0x8                         ; 0041511a
    PUSH 0x0                            ; 0041511d
    SUB EAX,0x93c                       ; 0041511f
    PUSH EAX                            ; 00415124
    CALL core_cloth.cpp_CClothList_dtor_FUN_00441ca0 ; 00415125
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041512a
    PUSH 0x0                            ; 0041512d
    SUB EAX,0x2b48                      ; 0041512f
    PUSH EAX                            ; 00415134
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 00415135
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041513a
    PUSH 0x1                            ; 0041513d
    LEA EBX,[EAX + 0xfffffea8]          ; 0041513f
    PUSH EBX                            ; 00415145
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 00415146
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041514b
    MOV DL,byte ptr [ESP + 0xc]         ; 0041514e
    MOV EBX,EAX                         ; 00415152
    TEST DL,0x2                         ; 00415154
    JNZ 0x00415178                      ; 00415157
        ;   XREF to: 00415178 (CONDITIONAL_JUMP)  ; LAB_00415178
    MOV EAX,EBX                         ; 00415159
    POP EBX                             ; 0041515b
    RET                                 ; 0041515c
    PUSH 0x5fc720                       ; 0041515d | g_CBiggsTypeInfo
        ;   Label: LAB_0041515d
    PUSH EBX                            ; 00415162
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 00415163
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00415168
    PUSH EAX                            ; 0041516b
    CALL crt_unknown.c_FUN_005c0336     ; 0041516c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00415171
    MOV EAX,EBX                         ; 00415174
    POP EBX                             ; 00415176
    RET                                 ; 00415177
    PUSH EAX                            ; 00415178
        ;   Label: LAB_00415178
    CALL crt_unknown.c_FUN_005c0344     ; 00415179
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0041517e
    MOV EAX,EBX                         ; 00415181
    POP EBX                             ; 00415183
    RET                                 ; 00415184

