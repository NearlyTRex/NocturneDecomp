; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_unknown_c_FUN_005c0336(void *ptr)
;
; Parameters:
; void *           Stack[0x4]:4   ptr
;
; XREF[174]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_00537550 at 00537561
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00538990 at 005389a7
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730 at 00408770
;   core_ammo.cpp_CAmmo_dtor_FUN_0040e000 at 0040e035
;   core_ammobox.cpp_CAmmoBox_dtor_FUN_0040e520 at 0040e555
;   core_anvil.cpp_CAnvil_dtor_FUN_0040e930 at 0040e965
;   core_armour.cpp_CArmour_dtor_FUN_0040ecc0 at 0040ed2c
;   core_armour.cpp_CEnemy_dtor_FUN_0040ed50 at 0040edbc
;   core_armour.cpp_CFlame_dtor_FUN_0040ede0 at 0040ee15
;   core_backgnd.cpp_CBackgroundActor_dtor_FUN_0040f130 at 0040f165
;   ... and 164 more
;
; Called Functions:
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005c0336
        ;   Label: crt_unknown.c_FUN_005c0336
    PUSH EDX                            ; 005c033a
    CALL crt_unknown.c_FUN_005c0344     ; 005c033b
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 005c0340
    RET                                 ; 005c0343

