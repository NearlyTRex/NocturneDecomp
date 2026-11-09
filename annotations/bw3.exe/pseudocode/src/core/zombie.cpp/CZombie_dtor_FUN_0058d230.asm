; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CZombie * core_zombie_cpp_CZombie_dtor_FUN_0058d230(CZombie *this_ptr,uint flags)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CZombieTypeInfo
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

    PUSH EBX                            ; 0058d230
        ;   Label: core_zombie.cpp_CZombie_dtor_FUN_0058d230
    MOV EBX,dword ptr [ESP + 0x8]       ; 0058d231
    TEST byte ptr [ESP + 0xc],0x4       ; 0058d235
    JNZ 0x0058d28d                      ; 0058d23a
        ;   XREF to: 0058d28d (CONDITIONAL_JUMP)  ; LAB_0058d28d
    PUSH 0x0                            ; 0058d23c
    ADD EBX,0x385c                      ; 0058d23e
    PUSH EBX                            ; 0058d244
    CALL unkafter_armour.cpp_FUN_00410370 ; 0058d245
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 0058d24a
    PUSH 0x0                            ; 0058d24d
    SUB EAX,0x954                       ; 0058d24f
    PUSH EAX                            ; 0058d254
    CALL core_cloth.cpp_FUN_0043f900    ; 0058d255
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0058d25a
    PUSH 0x0                            ; 0058d25d
    SUB EAX,0x2db0                      ; 0058d25f
    PUSH EAX                            ; 0058d264
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 0058d265
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0058d26a
    PUSH 0x1                            ; 0058d26d
    LEA EBX,[EAX + 0xfffffea8]          ; 0058d26f
    PUSH EBX                            ; 0058d275
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 0058d276
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0058d27b
    MOV DL,byte ptr [ESP + 0xc]         ; 0058d27e
    MOV EBX,EAX                         ; 0058d282
    TEST DL,0x2                         ; 0058d284
    JNZ 0x0058d2a8                      ; 0058d287
        ;   XREF to: 0058d2a8 (CONDITIONAL_JUMP)  ; LAB_0058d2a8
    MOV EAX,EBX                         ; 0058d289
    POP EBX                             ; 0058d28b
    RET                                 ; 0058d28c
    PUSH 0x5e7010                       ; 0058d28d | g_CZombieTypeInfo
        ;   Label: LAB_0058d28d
    PUSH EBX                            ; 0058d292
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0058d293
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 0058d298
    PUSH EAX                            ; 0058d29b
    CALL crt_unknown.c_FUN_005a30b6     ; 0058d29c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0058d2a1
    MOV EAX,EBX                         ; 0058d2a4
    POP EBX                             ; 0058d2a6
    RET                                 ; 0058d2a7
    PUSH EAX                            ; 0058d2a8
        ;   Label: LAB_0058d2a8
    CALL crt_unknown.c_FUN_005a30c4     ; 0058d2a9
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0058d2ae
    MOV EAX,EBX                         ; 0058d2b1
    POP EBX                             ; 0058d2b3
    RET                                 ; 0058d2b4

