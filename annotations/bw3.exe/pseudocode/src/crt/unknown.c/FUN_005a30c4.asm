; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a30c4(int param_1)
;
;
; XREF[179]:
;   cockpit_ckptutil.c_FUN_00436400 at 00436594
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770 at 004087bd
;   core_ammo.cpp_CAmmoBullet_dtor_FUN_0040e420 at 0040e462
;   core_ammo.cpp_CAmmoManaLarge_dtor_FUN_0040e470 at 0040e4b2
;   core_ammo.cpp_CAmmoMana_dtor_FUN_0040e4c0 at 0040e502
;   core_ammo.cpp_CAmmo_dtor_FUN_0040e510 at 0040e552
;   core_ammobox.cpp_CAmmoBox_dtor_FUN_0040ea10 at 0040ea52
;   core_armour.cpp_CFlame_dtor_FUN_00410320 at 00410362
;   core_asgaya.cpp_CAsgaya_dtor_FUN_005a1b50 at 005a1be9
;   core_baal.cpp_CBaal_dtor_FUN_00597d00 at 00597d79
;   ... and 169 more
;
; Called Functions:
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a30c4
        ;   Label: crt_unknown.c_FUN_005a30c4
    TEST EDX,EDX                        ; 005a30c8
    JNZ 0x005a30cd                      ; 005a30ca
        ;   XREF to: 005a30cd (CONDITIONAL_JUMP)  ; LAB_005a30cd
    RET                                 ; 005a30cc
    PUSH EDX                            ; 005a30cd
        ;   Label: LAB_005a30cd
    CALL crt_unknown.c_FUN_005a3770     ; 005a30ce
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 005a30d3
    RET                                 ; 005a30d6

