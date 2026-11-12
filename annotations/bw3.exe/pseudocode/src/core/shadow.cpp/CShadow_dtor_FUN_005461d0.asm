; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CShadow * core_shadow_cpp_CShadow_dtor_FUN_005461d0(CShadow *this_ptr,uint flags)
;
; Parameters:
; CShadow *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CShadowTypeInfo
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

    PUSH EBX                            ; 005461d0
        ;   Label: core_shadow.cpp_CShadow_dtor_FUN_005461d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005461d1
    TEST byte ptr [ESP + 0xc],0x4       ; 005461d5
    JNZ 0x0054622d                      ; 005461da
        ;   XREF to: 0054622d (CONDITIONAL_JUMP)  ; LAB_0054622d
    PUSH 0x0                            ; 005461dc
    ADD EBX,0x385c                      ; 005461de
    PUSH EBX                            ; 005461e4
    CALL core_armour.cpp_FUN_00410370   ; 005461e5
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 005461ea
    PUSH 0x0                            ; 005461ed
    SUB EAX,0x954                       ; 005461ef
    PUSH EAX                            ; 005461f4
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043f900 ; 005461f5
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005461fa
    PUSH 0x0                            ; 005461fd
    SUB EAX,0x2db0                      ; 005461ff
    PUSH EAX                            ; 00546204
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 00546205
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054620a
    PUSH 0x1                            ; 0054620d
    LEA EBX,[EAX + 0xfffffea8]          ; 0054620f
    PUSH EBX                            ; 00546215
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 00546216
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054621b
    MOV DL,byte ptr [ESP + 0xc]         ; 0054621e
    MOV EBX,EAX                         ; 00546222
    TEST DL,0x2                         ; 00546224
    JNZ 0x00546248                      ; 00546227
        ;   XREF to: 00546248 (CONDITIONAL_JUMP)  ; LAB_00546248
    MOV EAX,EBX                         ; 00546229
    POP EBX                             ; 0054622b
    RET                                 ; 0054622c
    PUSH 0x5e4310                       ; 0054622d | g_CShadowTypeInfo
        ;   Label: LAB_0054622d
    PUSH EBX                            ; 00546232
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00546233
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00546238
    PUSH EAX                            ; 0054623b
    CALL crt_unknown.c_FUN_005a30b6     ; 0054623c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00546241
    MOV EAX,EBX                         ; 00546244
    POP EBX                             ; 00546246
    RET                                 ; 00546247
    PUSH EAX                            ; 00546248
        ;   Label: LAB_00546248
    CALL crt_unknown.c_FUN_005a30c4     ; 00546249
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0054624e
    MOV EAX,EBX                         ; 00546251
    POP EBX                             ; 00546253
    RET                                 ; 00546254

