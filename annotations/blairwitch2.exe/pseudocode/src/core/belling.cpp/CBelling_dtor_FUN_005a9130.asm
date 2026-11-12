; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBelling * core_belling_cpp_CBelling_dtor_FUN_005a9130(CBelling *this_ptr,uint flags)
;
; Parameters:
; CBelling *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBellingTypeInfo
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

    PUSH EBX                            ; 005a9130
        ;   Label: core_belling.cpp_CBelling_dtor_FUN_005a9130
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a9131
    TEST byte ptr [ESP + 0xc],0x4       ; 005a9135
    JNZ 0x005a919d                      ; 005a913a
        ;   XREF to: 005a919d (CONDITIONAL_JUMP)  ; LAB_005a919d
    PUSH 0x0                            ; 005a913c
    ADD EBX,0x3a20                      ; 005a913e
    PUSH EBX                            ; 005a9144
    CALL core_armour.cpp_FUN_0040f2b0   ; 005a9145
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040f2b0()
    ADD ESP,0x8                         ; 005a914a
    PUSH 0x0                            ; 005a914d
    SUB EAX,0x9c8                       ; 005a914f
    PUSH EAX                            ; 005a9154
    CALL core_muzzle.cpp_FUN_0059df70   ; 005a9155
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059df70()
    ADD ESP,0x8                         ; 005a915a
    PUSH 0x0                            ; 005a915d
    SUB EAX,0x34c                       ; 005a915f
    PUSH EAX                            ; 005a9164
    CALL core_cloth.cpp_CClothList_dtor_FUN_005b1480 ; 005a9165
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a916a
    PUSH 0x0                            ; 005a916d
    SUB EAX,0x2a58                      ; 005a916f
    PUSH EAX                            ; 005a9174
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 005a9175
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a917a
    PUSH 0x1                            ; 005a917d
    LEA EBX,[EAX + 0xfffffd4c]          ; 005a917f
    PUSH EBX                            ; 005a9185
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 005a9186
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a918b
    MOV DL,byte ptr [ESP + 0xc]         ; 005a918e
    MOV EBX,EAX                         ; 005a9192
    TEST DL,0x2                         ; 005a9194
    JNZ 0x005a91b8                      ; 005a9197
        ;   XREF to: 005a91b8 (CONDITIONAL_JUMP)  ; LAB_005a91b8
    MOV EAX,EBX                         ; 005a9199
    POP EBX                             ; 005a919b
    RET                                 ; 005a919c
    PUSH 0x600670                       ; 005a919d | g_CBellingTypeInfo
        ;   Label: LAB_005a919d
    PUSH EBX                            ; 005a91a2
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 005a91a3
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005a91a8
    PUSH EAX                            ; 005a91ab
    CALL crt_unknown.c_FUN_005b7fce     ; 005a91ac
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 005a91b1
    MOV EAX,EBX                         ; 005a91b4
    POP EBX                             ; 005a91b6
    RET                                 ; 005a91b7
    PUSH EAX                            ; 005a91b8
        ;   Label: LAB_005a91b8
    CALL crt_unknown.c_FUN_005b7fdc     ; 005a91b9
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 005a91be
    MOV EAX,EBX                         ; 005a91c1
    POP EBX                             ; 005a91c3
    RET                                 ; 005a91c4

