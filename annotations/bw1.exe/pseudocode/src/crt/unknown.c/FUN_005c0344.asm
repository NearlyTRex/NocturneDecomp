; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c0344(int param_1)
;
;
; XREF[171]:
;   cockpit_ckptutil.c_FUN_004387f0 at 00438984
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730 at 0040877d
;   core_ammo.cpp_CAmmo_dtor_FUN_0040e000 at 0040e042
;   core_ammobox.cpp_CAmmoBox_dtor_FUN_0040e520 at 0040e562
;   core_anvil.cpp_CAnvil_dtor_FUN_0040e930 at 0040e972
;   core_armour.cpp_CArmour_dtor_FUN_0040ecc0 at 0040ed39
;   core_armour.cpp_CEnemy_dtor_FUN_0040ed50 at 0040edc9
;   core_armour.cpp_CFlame_dtor_FUN_0040ede0 at 0040ee22
;   core_backgnd.cpp_CBackgroundActor_dtor_FUN_0040f130 at 0040f172
;   core_baron.cpp_CBaronWeapon_dtor_FUN_00410730 at 00410772
;   ... and 161 more
;
; Called Functions:
;   crt_unknown.c_FUN_005c09f0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005c0344
        ;   Label: crt_unknown.c_FUN_005c0344
    TEST EDX,EDX                        ; 005c0348
    JNZ 0x005c034d                      ; 005c034a
        ;   XREF to: 005c034d (CONDITIONAL_JUMP)  ; LAB_005c034d
    RET                                 ; 005c034c
    PUSH EDX                            ; 005c034d
        ;   Label: LAB_005c034d
    CALL crt_unknown.c_FUN_005c09f0     ; 005c034e
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 005c0353
    RET                                 ; 005c0356

