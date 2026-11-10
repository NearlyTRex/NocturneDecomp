; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWeapon * __cdecl core_weapon_cpp_CWeapon_dtor_FUN_00589ae0(CWeapon *this_ptr,uint flags)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[17]:
;   core_baron.cpp_CBaronWeapon_dtor_FUN_00410bb0 at 00410bbf
;   core_crossbow.cpp_CCrossbow_dtor_FUN_0043ae70 at 0043ae96
;   core_dynamite.cpp_CDynamite_dtor_FUN_0047a3e0 at 0047a3ef
;   core_elephant.cpp_CElephantGun_dtor_FUN_00486730 at 0048673f
;   core_flamegun.cpp_CFlameThrower_dtor_FUN_004a0fb0 at 004a0fbf
;   core_flashlit.cpp_CFlashlight_dtor_FUN_004a11b0 at 004a11bf
;   core_gun.cpp_CGun_dtor_FUN_004cc6b0 at 004cc6bf
;   core_lantern.cpp_CLantern_dtor_FUN_0059d170 at 0059d17f
;   core_lightgun.cpp_CLightGun_dtor_FUN_004e40e0 at 004e40ef
;   core_melee.cpp_CMelee_dtor_FUN_004ead30 at 004ead3f
;   ... and 7 more
;
; Referenced Globals:
;   CWeapon_full_vtable g_CWeaponVTable
;   WatcomTypeInfo g_CWeaponTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   core_box.cpp_CBox_dtor_FUN_005b1c70
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00589ae0
        ;   Label: core_weapon.cpp_CWeapon_dtor_FUN_00589ae0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00589ae1
    TEST byte ptr [ESP + 0xc],0x4       ; 00589ae5
    JNZ 0x00589b27                      ; 00589aea
        ;   XREF to: 00589b27 (CONDITIONAL_JUMP)  ; LAB_00589b27
    PUSH 0x0                            ; 00589aec
    ADD EBX,0x464                       ; 00589aee
    PUSH EBX                            ; 00589af4
    MOV dword ptr [EBX + 0xfffffe4c],0x5fdf64 ; 00589af5 | g_CWeaponVTable
    CALL core_box.cpp_CBox_dtor_FUN_005b1c70 ; 00589aff
        ;   XREF to: 005b1c70 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_dtor_FUN_005b1c70(CBox * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00589b04
    PUSH 0x1                            ; 00589b07
    LEA EBX,[EAX + 0xfffffb9c]          ; 00589b09
    PUSH EBX                            ; 00589b0f
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 00589b10
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00589b15
    MOV DL,byte ptr [ESP + 0xc]         ; 00589b18
    MOV EBX,EAX                         ; 00589b1c
    TEST DL,0x2                         ; 00589b1e
    JNZ 0x00589b42                      ; 00589b21
        ;   XREF to: 00589b42 (CONDITIONAL_JUMP)  ; LAB_00589b42
    MOV EAX,EBX                         ; 00589b23
    POP EBX                             ; 00589b25
    RET                                 ; 00589b26
    PUSH 0x5fe070                       ; 00589b27 | g_CWeaponTypeInfo
        ;   Label: LAB_00589b27
    PUSH EBX                            ; 00589b2c
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 00589b2d
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 00589b32
    PUSH EAX                            ; 00589b35
    CALL crt_unknown.c_FUN_005b7fce     ; 00589b36
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 00589b3b
    MOV EAX,EBX                         ; 00589b3e
    POP EBX                             ; 00589b40
    RET                                 ; 00589b41
    PUSH EAX                            ; 00589b42
        ;   Label: LAB_00589b42
    CALL crt_unknown.c_FUN_005b7fdc     ; 00589b43
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 00589b48
    MOV EAX,EBX                         ; 00589b4b
    POP EBX                             ; 00589b4d
    RET                                 ; 00589b4e

