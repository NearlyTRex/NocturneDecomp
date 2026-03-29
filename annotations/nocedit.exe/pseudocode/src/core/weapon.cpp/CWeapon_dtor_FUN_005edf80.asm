; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWeapon * __cdecl core_weapon_cpp_CWeapon_dtor_FUN_005edf80(CWeapon *this_ptr,uint flags)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[13]:
;   core_baron.cpp_CBaronWeapon_dtor_FUN_004140b0 at 004140bf
;   core_crossbow.cpp_CCrossbow_dtor_FUN_004495a0 at 004495c6
;   core_dynamite.cpp_CDynamite_dtor_FUN_0049d120 at 0049d12f
;   core_elephant.cpp_CElephantGun_dtor_FUN_004a7be0 at 004a7bef
;   core_flamegun.cpp_CFlameThrower_dtor_FUN_004cbb00 at 004cbb0f
;   core_flashlit.cpp_CFlashlight_dtor_FUN_004cbc60 at 004cbc6f
;   core_gun.cpp_CGun_dtor_FUN_004f0b50 at 004f0b5f
;   core_lightgun.cpp_CLightGun_dtor_FUN_00506a50 at 00506a5f
;   core_melee.cpp_CMelee_dtor_FUN_0050edf0 at 0050edff
;   core_shotgun.cpp_CShotgun_dtor_FUN_00588ae0 at 00588aef
;   ... and 3 more
;
; Referenced Globals:
;   CDemonActor_vtable g_CWeaponVTable
;   WatcomTypeInfo g_CWeaponTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_box.cpp_CBox_dtor_FUN_0041dd00
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005edf80
        ;   Label: core_weapon.cpp_CWeapon_dtor_FUN_005edf80
    MOV EBX,dword ptr [ESP + 0x8]       ; 005edf81
    TEST byte ptr [ESP + 0xc],0x4       ; 005edf85
    JNZ 0x005edfc7                      ; 005edf8a
        ;   XREF to: 005edfc7 (CONDITIONAL_JUMP)  ; LAB_005edfc7
    PUSH 0x0                            ; 005edf8c
    ADD EBX,0x308                       ; 005edf8e
    PUSH EBX                            ; 005edf94
    MOV dword ptr [EBX + 0xfffffe4c],0x6655b4 ; 005edf95 | g_CWeaponVTable
    CALL core_box.cpp_CBox_dtor_FUN_0041dd00 ; 005edf9f
        ;   XREF to: 0041dd00 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_dtor_FUN_0041dd00(CBox * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005edfa4
    PUSH 0x1                            ; 005edfa7
    LEA EBX,[EAX + 0xfffffcf8]          ; 005edfa9
    PUSH EBX                            ; 005edfaf
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 005edfb0
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005edfb5
    MOV DL,byte ptr [ESP + 0xc]         ; 005edfb8
    MOV EBX,EAX                         ; 005edfbc
    TEST DL,0x2                         ; 005edfbe
    JNZ 0x005edfe2                      ; 005edfc1
        ;   XREF to: 005edfe2 (CONDITIONAL_JUMP)  ; LAB_005edfe2
    MOV EAX,EBX                         ; 005edfc3
    POP EBX                             ; 005edfc5
    RET                                 ; 005edfc6
    PUSH 0x6656c0                       ; 005edfc7 | g_CWeaponTypeInfo
        ;   Label: LAB_005edfc7
    PUSH EBX                            ; 005edfcc
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 005edfcd
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005edfd2
    PUSH EAX                            ; 005edfd5
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005edfd6
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005edfdb
    MOV EAX,EBX                         ; 005edfde
    POP EBX                             ; 005edfe0
    RET                                 ; 005edfe1
    PUSH EAX                            ; 005edfe2
        ;   Label: LAB_005edfe2
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 005edfe3
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005edfe8
    MOV EAX,EBX                         ; 005edfeb
    POP EBX                             ; 005edfed
    RET                                 ; 005edfee

