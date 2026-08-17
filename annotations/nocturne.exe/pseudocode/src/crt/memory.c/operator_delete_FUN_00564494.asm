; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_memory_c_operator_delete_FUN_00564494(void *ptr)
;
; Parameters:
; void *           Stack[0x4]:4   ptr
;
; XREF[147]:
;   cockpit_ckptutil.c_generateScrollHeightMap_FUN_0042e7b0 at 0042e944
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 at 00409eed
;   core_ammo.cpp_CAmmo_dtor_FUN_0040ef90 at 0040efd2
;   core_ammobox.cpp_CAmmoBox_dtor_FUN_0040f4b0 at 0040f4f2
;   core_anvil.cpp_CAnvil_dtor_FUN_0040f8b0 at 0040f8f2
;   core_armour.cpp_CArmour_dtor_FUN_0040fc30 at 0040fcdd
;   core_armour.cpp_CEnemy_dtor_FUN_0040fcf0 at 0040fd9d
;   core_armour.cpp_CFlame_dtor_FUN_0040fdc0 at 0040fe02
;   core_backgnd.cpp_CBackgroundActor_dtor_FUN_004100f0 at 00410132
;   core_baron.cpp_CBaronWeapon_dtor_FUN_00411610 at 00411652
;   ... and 137 more
;
; Called Functions:
;   crt_memory.c_free_FUN_005638d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00564494
        ;   Label: crt_memory.c_operator_delete_FUN_00564494
    TEST EDX,EDX                        ; 00564498
    JNZ 0x0056449d                      ; 0056449a
        ;   XREF to: 0056449d (CONDITIONAL_JUMP)  ; LAB_0056449d
    RET                                 ; 0056449c
    PUSH EDX                            ; 0056449d
        ;   Label: LAB_0056449d
    CALL crt_memory.c_free_FUN_005638d0 ; 0056449e
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005638d0(void * ptr)
    ADD ESP,0x4                         ; 005644a3
    RET                                 ; 005644a6

