; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_unknown_c_FUN_005a30b6(void *ptr)
;
; Parameters:
; void *           Stack[0x4]:4   ptr
;
; XREF[182]:
;   cockpit_pkbitmap.cpp_FUN_0050f230 at 0050f241
;   cockpit_pkbitmap.cpp_FUN_00510670 at 00510687
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770 at 004087b0
;   core_ammo.cpp_CAmmoBullet_dtor_FUN_0040e420 at 0040e455
;   core_ammo.cpp_CAmmoManaLarge_dtor_FUN_0040e470 at 0040e4a5
;   core_ammo.cpp_CAmmoMana_dtor_FUN_0040e4c0 at 0040e4f5
;   core_ammo.cpp_CAmmo_dtor_FUN_0040e510 at 0040e545
;   core_ammobox.cpp_CAmmoBox_dtor_FUN_0040ea10 at 0040ea45
;   core_armour.cpp_CFlame_dtor_FUN_00410320 at 00410355
;   core_asgaya.cpp_CAsgaya_dtor_FUN_005a1b50 at 005a1bdc
;   ... and 172 more
;
; Called Functions:
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a30b6
        ;   Label: crt_unknown.c_FUN_005a30b6
    PUSH EDX                            ; 005a30ba
    CALL crt_unknown.c_FUN_005a30c4     ; 005a30bb
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 005a30c0
    RET                                 ; 005a30c3

