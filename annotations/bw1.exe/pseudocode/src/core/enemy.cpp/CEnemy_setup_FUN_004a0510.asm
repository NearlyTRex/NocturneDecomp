; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_enemy_cpp_CEnemy_setup_FUN_004a0510(CEnemy *this_ptr)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
;
; XREF[35]:
;   core_armour.cpp_CArmour_setup_FUN_0040ea80 at 0040ea85
;   core_batcreat.cpp_FUN_00411280 at 00411292
;   core_batman.cpp_FUN_00412840 at 00412852
;   core_beast.cpp_FUN_00414750 at 00414767
;   core_biggs.cpp_FUN_00414ab0 at 00414ab8
;   core_boneguy.cpp_FUN_0041b940 at 0041bae2
;   core_bride.cpp_FUN_00423940 at 00423b28
;   core_bugs.cpp_FUN_00425120 at 00425143
;   core_carved.cpp_FUN_004287e0 at 00428a0f
;   core_constrct.cpp_FUN_004459c0 at 004459ee
;   ... and 25 more
;
; Called Functions:
;   core_charactr.cpp_FUN_0042c510
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a0510
        ;   Label: core_enemy.cpp_CEnemy_setup_FUN_004a0510
    PUSH EDX                            ; 004a0514
    CALL core_charactr.cpp_FUN_0042c510 ; 004a0515
        ;   XREF to: 0042c510 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c510(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004a051a
    RET                                 ; 004a051d

