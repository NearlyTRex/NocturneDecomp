; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEnemy * __cdecl core_enemy_cpp_CEnemy_dtor_FUN_0041aba0(CEnemy *this_ptr,uint flags)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CEnemyTypeInfo
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

    PUSH EBX                            ; 0041aba0
        ;   Label: core_enemy.cpp_CEnemy_dtor_FUN_0041aba0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041aba1
    TEST byte ptr [ESP + 0xc],0x4       ; 0041aba5
    JNZ 0x0041abfd                      ; 0041abaa
        ;   XREF to: 0041abfd (CONDITIONAL_JUMP)  ; LAB_0041abfd
    PUSH 0x0                            ; 0041abac
    ADD EBX,0x385c                      ; 0041abae
    PUSH EBX                            ; 0041abb4
    CALL core_armour.cpp_FUN_00410370   ; 0041abb5
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 0041abba
    PUSH 0x0                            ; 0041abbd
    SUB EAX,0x954                       ; 0041abbf
    PUSH EAX                            ; 0041abc4
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043f900 ; 0041abc5
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041abca
    PUSH 0x0                            ; 0041abcd
    SUB EAX,0x2db0                      ; 0041abcf
    PUSH EAX                            ; 0041abd4
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 0041abd5
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041abda
    PUSH 0x1                            ; 0041abdd
    LEA EBX,[EAX + 0xfffffea8]          ; 0041abdf
    PUSH EBX                            ; 0041abe5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 0041abe6
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041abeb
    MOV DL,byte ptr [ESP + 0xc]         ; 0041abee
    MOV EBX,EAX                         ; 0041abf2
    TEST DL,0x2                         ; 0041abf4
    JNZ 0x0041ac18                      ; 0041abf7
        ;   XREF to: 0041ac18 (CONDITIONAL_JUMP)  ; LAB_0041ac18
    MOV EAX,EBX                         ; 0041abf9
    POP EBX                             ; 0041abfb
    RET                                 ; 0041abfc
    PUSH 0x5dc8f0                       ; 0041abfd | g_CEnemyTypeInfo
        ;   Label: LAB_0041abfd
    PUSH EBX                            ; 0041ac02
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0041ac03
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0041ac08
    PUSH EAX                            ; 0041ac0b
    CALL crt_unknown.c_FUN_005a30b6     ; 0041ac0c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0041ac11
    MOV EAX,EBX                         ; 0041ac14
    POP EBX                             ; 0041ac16
    RET                                 ; 0041ac17
    PUSH EAX                            ; 0041ac18
        ;   Label: LAB_0041ac18
    CALL crt_unknown.c_FUN_005a30c4     ; 0041ac19
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0041ac1e
    MOV EAX,EBX                         ; 0041ac21
    POP EBX                             ; 0041ac23
    RET                                 ; 0041ac24

