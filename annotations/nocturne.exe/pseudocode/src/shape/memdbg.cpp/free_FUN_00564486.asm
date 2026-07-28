; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_memdbg_cpp_free_FUN_00564486(void *ptr)
;
; Parameters:
; void *           Stack[0x4]:4   ptr
;
; XREF[151]:
;   cockpit_pkbitmap.cpp_FUN_004f3f50 at 004f3f61
;   cockpit_pkbitmap.cpp_FUN_004f5320 at 004f5337
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 at 00409ee0
;   core_ammo.cpp_CAmmo_dtor_FUN_0040ef90 at 0040efc5
;   core_ammobox.cpp_FUN_0040f4b0 at 0040f4e5
;   core_anvil.cpp_FUN_0040f8b0 at 0040f8e5
;   core_armour.cpp_CEnemy_dtor_FUN_0040fcf0 at 0040fd90
;   core_armour.cpp_CFlame_dtor_FUN_0040fdc0 at 0040fdf5
;   core_armour.cpp_FUN_0040fc30 at 0040fcd0
;   core_backgnd.cpp_FUN_004100f0 at 00410125
;   ... and 141 more
;
; Called Functions:
;   crt_unknown.c_FUN_00564494
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00564486
        ;   Label: shape_memdbg.cpp_free_FUN_00564486
    PUSH EDX                            ; 0056448a
    CALL crt_unknown.c_FUN_00564494     ; 0056448b
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 00564490
    RET                                 ; 00564493

