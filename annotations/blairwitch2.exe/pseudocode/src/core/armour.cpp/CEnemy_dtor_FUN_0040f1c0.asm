; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEnemy * __cdecl core_armour_cpp_CEnemy_dtor_FUN_0040f1c0(CEnemy *this_ptr,uint flags)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CEnemyTypeInfo
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

    PUSH EBX                            ; 0040f1c0
        ;   Label: core_armour.cpp_CEnemy_dtor_FUN_0040f1c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040f1c1
    TEST byte ptr [ESP + 0xc],0x4       ; 0040f1c5
    JNZ 0x0040f22d                      ; 0040f1ca
        ;   XREF to: 0040f22d (CONDITIONAL_JUMP)  ; LAB_0040f22d
    PUSH 0x0                            ; 0040f1cc
    ADD EBX,0x3a20                      ; 0040f1ce
    PUSH EBX                            ; 0040f1d4
    CALL core_armour.cpp_FUN_0040f2b0   ; 0040f1d5
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040f2b0()
    ADD ESP,0x8                         ; 0040f1da
    PUSH 0x0                            ; 0040f1dd
    SUB EAX,0x9c8                       ; 0040f1df
    PUSH EAX                            ; 0040f1e4
    CALL core_muzzle.cpp_FUN_0059df70   ; 0040f1e5
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059df70()
    ADD ESP,0x8                         ; 0040f1ea
    PUSH 0x0                            ; 0040f1ed
    SUB EAX,0x34c                       ; 0040f1ef
    PUSH EAX                            ; 0040f1f4
    CALL core_cloth.cpp_CClothList_dtor_FUN_005b1480 ; 0040f1f5
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040f1fa
    PUSH 0x0                            ; 0040f1fd
    SUB EAX,0x2a58                      ; 0040f1ff
    PUSH EAX                            ; 0040f204
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 0040f205
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040f20a
    PUSH 0x1                            ; 0040f20d
    LEA EBX,[EAX + 0xfffffd4c]          ; 0040f20f
    PUSH EBX                            ; 0040f215
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 0040f216
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040f21b
    MOV DL,byte ptr [ESP + 0xc]         ; 0040f21e
    MOV EBX,EAX                         ; 0040f222
    TEST DL,0x2                         ; 0040f224
    JNZ 0x0040f248                      ; 0040f227
        ;   XREF to: 0040f248 (CONDITIONAL_JUMP)  ; LAB_0040f248
    MOV EAX,EBX                         ; 0040f229
    POP EBX                             ; 0040f22b
    RET                                 ; 0040f22c
    PUSH 0x5f2800                       ; 0040f22d | g_CEnemyTypeInfo
        ;   Label: LAB_0040f22d
    PUSH EBX                            ; 0040f232
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0040f233
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0040f238
    PUSH EAX                            ; 0040f23b
    CALL crt_unknown.c_FUN_005b7fce     ; 0040f23c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0040f241
    MOV EAX,EBX                         ; 0040f244
    POP EBX                             ; 0040f246
    RET                                 ; 0040f247
    PUSH EAX                            ; 0040f248
        ;   Label: LAB_0040f248
    CALL crt_unknown.c_FUN_005b7fdc     ; 0040f249
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 0040f24e
    MOV EAX,EBX                         ; 0040f251
    POP EBX                             ; 0040f253
    RET                                 ; 0040f254

