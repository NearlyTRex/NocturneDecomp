; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_enemy.cpp_CEnemy_FUN_004a9650(CEnemy * this_ptr)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
;
; XREF[27]:
;   core_armour.cpp_CArmour_FUN_00412240 at 00412245
;   core_batcreat.cpp_CBatCreature_FUN_00415150 at 00415158
;   core_batman.cpp_CBatman_FUN_00416510 at 00416518
;   core_beast.cpp_FUN_00418280 at 00418297
;   core_biggs.cpp_FUN_00418680 at 00418688
;   core_boneguy.cpp_CBoneGuy_explode_FUN_0041bd90 at 0041bf32
;   core_bride.cpp_FUN_00423810 at 004239ee
;   core_bugs.cpp_FUN_00424e50 at 00424e73
;   core_cow.cpp_FUN_004441b0 at 004441fe
;   core_dog.cpp_CZombieDog_setup_FUN_0047f0c0 at 0047f10d
;   ... and 17 more
;
; Called Functions:
;   core_charactr.cpp_CCharacter_FUN_00428140
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a9650
        ;   Label: core_enemy.cpp_CEnemy_FUN_004a9650
    PUSH EDX                            ; 004a9654
    CALL core_charactr.cpp_CCharacter_FUN_00428140 ; 004a9655 | void core_charactr.cpp_CCharacter_FUN_00428140(CCharacter * this_ptr)
        ;   XREF to: 00428140 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004a965a
    RET                                 ; 004a965d

