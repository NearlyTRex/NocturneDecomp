; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWeapon * __cdecl core_weapon_cpp_CWeapon_dtor_FUN_005ad5d0(CWeapon *this_ptr,uint flags)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[15]:
;   core_baron.cpp_CBaronWeapon_dtor_FUN_00410730 at 0041073f
;   core_crossbow.cpp_CCrossbow_dtor_FUN_0044a120 at 0044a146
;   core_dynamite.cpp_CDynamite_dtor_FUN_004928d0 at 004928df
;   core_elephant.cpp_CElephantGun_dtor_FUN_0049ed90 at 0049ed9f
;   core_flamegun.cpp_CFlameThrower_dtor_FUN_004b9860 at 004b986f
;   core_flashlit.cpp_CFlashlight_dtor_FUN_004b9a60 at 004b9a6f
;   core_gun.cpp_CGun_dtor_FUN_004e8f70 at 004e8f7f
;   core_lightgun.cpp_CLightGun_dtor_FUN_00501560 at 0050156f
;   core_lightpis.cpp_CLightPis_dtor_FUN_00502cc0 at 00502ccf
;   core_melee.cpp_CMelee_dtor_FUN_00509a90 at 00509a9f
;   ... and 5 more
;
; Referenced Globals:
;   CWeapon_full_vtable g_CWeaponVTable
;   WatcomTypeInfo g_CWeaponTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   core_box.cpp_CBox_dtor_FUN_0041dab0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad5d0
        ;   Label: core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ad5d1
    TEST byte ptr [ESP + 0xc],0x4       ; 005ad5d5
    JNZ 0x005ad617                      ; 005ad5da
        ;   XREF to: 005ad617 (CONDITIONAL_JUMP)  ; LAB_005ad617
    PUSH 0x0                            ; 005ad5dc
    ADD EBX,0x308                       ; 005ad5de
    PUSH EBX                            ; 005ad5e4
    MOV dword ptr [EBX + 0xfffffe4c],0x607e74 ; 005ad5e5 | g_CWeaponVTable
    CALL core_box.cpp_CBox_dtor_FUN_0041dab0 ; 005ad5ef
        ;   XREF to: 0041dab0 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_dtor_FUN_0041dab0(CBox * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005ad5f4
    PUSH 0x1                            ; 005ad5f7
    LEA EBX,[EAX + 0xfffffcf8]          ; 005ad5f9
    PUSH EBX                            ; 005ad5ff
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 005ad600
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005ad605
    MOV DL,byte ptr [ESP + 0xc]         ; 005ad608
    MOV EBX,EAX                         ; 005ad60c
    TEST DL,0x2                         ; 005ad60e
    JNZ 0x005ad632                      ; 005ad611
        ;   XREF to: 005ad632 (CONDITIONAL_JUMP)  ; LAB_005ad632
    MOV EAX,EBX                         ; 005ad613
    POP EBX                             ; 005ad615
    RET                                 ; 005ad616
    PUSH 0x607f70                       ; 005ad617 | g_CWeaponTypeInfo
        ;   Label: LAB_005ad617
    PUSH EBX                            ; 005ad61c
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 005ad61d
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005ad622
    PUSH EAX                            ; 005ad625
    CALL crt_unknown.c_FUN_005c0336     ; 005ad626
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 005ad62b
    MOV EAX,EBX                         ; 005ad62e
    POP EBX                             ; 005ad630
    RET                                 ; 005ad631
    PUSH EAX                            ; 005ad632
        ;   Label: LAB_005ad632
    CALL crt_unknown.c_FUN_005c0344     ; 005ad633
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 005ad638
    MOV EAX,EBX                         ; 005ad63b
    POP EBX                             ; 005ad63d
    RET                                 ; 005ad63e

