; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_unknown_c_FUN_005b7fce(void *ptr)
;
; Parameters:
; void *           Stack[0x4]:4   ptr
;
; XREF[187]:
;   cockpit_pkbitmap.cpp_FUN_00516200 at 00516211
;   cockpit_pkbitmap.cpp_FUN_00517640 at 00517657
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930 at 00408990
;   core_ammo.cpp_CAmmo_dtor_FUN_0040de50 at 0040de8f
;   core_ammobox.cpp_CAmmoBox_dtor_FUN_0040e980 at 0040e9b5
;   core_anvil.cpp_CAnvil_dtor_FUN_0040ed90 at 0040edc5
;   core_armour.cpp_CArmour_dtor_FUN_0040f120 at 0040f19c
;   core_armour.cpp_CEnemy_dtor_FUN_0040f1c0 at 0040f23c
;   core_armour.cpp_CFlame_dtor_FUN_0040f260 at 0040f295
;   core_backgnd.cpp_CBackgroundActor_dtor_FUN_0040f5b0 at 0040f5e5
;   ... and 177 more
;
; Called Functions:
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005b7fce
        ;   Label: crt_unknown.c_FUN_005b7fce
    PUSH EDX                            ; 005b7fd2
    CALL crt_unknown.c_FUN_005b7fdc     ; 005b7fd3
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 005b7fd8
    RET                                 ; 005b7fdb

