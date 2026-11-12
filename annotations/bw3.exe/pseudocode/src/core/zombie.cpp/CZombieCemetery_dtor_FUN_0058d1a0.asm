; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CZombieCemetery * core_zombie_cpp_CZombieCemetery_dtor_FUN_0058d1a0(CZombieCemetery *this_ptr,uint flags)
;
; Parameters:
; CZombieCemetery * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CZombieCemeteryTypeInfo
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

    PUSH EBX                            ; 0058d1a0
        ;   Label: core_zombie.cpp_CZombieCemetery_dtor_FUN_0058d1a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0058d1a1
    TEST byte ptr [ESP + 0xc],0x4       ; 0058d1a5
    JNZ 0x0058d1fd                      ; 0058d1aa
        ;   XREF to: 0058d1fd (CONDITIONAL_JUMP)  ; LAB_0058d1fd
    PUSH 0x0                            ; 0058d1ac
    ADD EBX,0x385c                      ; 0058d1ae
    PUSH EBX                            ; 0058d1b4
    CALL core_armour.cpp_FUN_00410370   ; 0058d1b5
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 0058d1ba
    PUSH 0x0                            ; 0058d1bd
    SUB EAX,0x954                       ; 0058d1bf
    PUSH EAX                            ; 0058d1c4
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043f900 ; 0058d1c5
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0058d1ca
    PUSH 0x0                            ; 0058d1cd
    SUB EAX,0x2db0                      ; 0058d1cf
    PUSH EAX                            ; 0058d1d4
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 0058d1d5
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0058d1da
    PUSH 0x1                            ; 0058d1dd
    LEA EBX,[EAX + 0xfffffea8]          ; 0058d1df
    PUSH EBX                            ; 0058d1e5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 0058d1e6
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0058d1eb
    MOV DL,byte ptr [ESP + 0xc]         ; 0058d1ee
    MOV EBX,EAX                         ; 0058d1f2
    TEST DL,0x2                         ; 0058d1f4
    JNZ 0x0058d218                      ; 0058d1f7
        ;   XREF to: 0058d218 (CONDITIONAL_JUMP)  ; LAB_0058d218
    MOV EAX,EBX                         ; 0058d1f9
    POP EBX                             ; 0058d1fb
    RET                                 ; 0058d1fc
    PUSH 0x5e6ff0                       ; 0058d1fd | g_CZombieCemeteryTypeInfo
        ;   Label: LAB_0058d1fd
    PUSH EBX                            ; 0058d202
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0058d203
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0058d208
    PUSH EAX                            ; 0058d20b
    CALL crt_unknown.c_FUN_005a30b6     ; 0058d20c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0058d211
    MOV EAX,EBX                         ; 0058d214
    POP EBX                             ; 0058d216
    RET                                 ; 0058d217
    PUSH EAX                            ; 0058d218
        ;   Label: LAB_0058d218
    CALL crt_unknown.c_FUN_005a30c4     ; 0058d219
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0058d21e
    MOV EAX,EBX                         ; 0058d221
    POP EBX                             ; 0058d223
    RET                                 ; 0058d224

