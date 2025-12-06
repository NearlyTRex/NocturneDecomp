; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack void crt_memory.c_free_FUN_005fe659(void * ptr)
;
; Parameters:
; void *           Stack[0x4]:4   ptr
;
; XREF[182]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0 at 0054a909
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60 at 0054bd8e
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30 at 00408a65
;   core_ammo.cpp_CAmmo_dtor_FUN_004114e0 at 00411515
;   core_ammobox.cpp_CAmmoBox_dtor_FUN_00411c20 at 00411c55
;   core_anvil.cpp_CAnvil_dtor_FUN_004120e0 at 00412115
;   core_armour.cpp_CArmour_dtor_FUN_00412500 at 004125a0
;   core_backgnd.cpp_CBackgroundActor_dtor_FUN_00412ad0 at 00412b05
;   core_backgnd.cpp_CFlame_dtor_FUN_00412690 at 004126c5
;   core_baron.cpp_CBaronWeapon_dtor_FUN_004140b0 at 004140e5
;   ... and 172 more
;
; Called Functions:
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005fe659
        ;   Label: crt_memory.c_free_FUN_005fe659
    PUSH EDX                            ; 005fe65d
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005fe65e | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005fe663
    RET                                 ; 005fe666

