; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_enemy_cpp_CEnemy_setup_FUN_00487eb0(CEnemy *this_ptr)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
;
; XREF[30]:
;   core_armour.cpp_CArmour_setup_FUN_0040eee0 at 0040eee5
;   core_batcreat.cpp_CBatCreature_setup_FUN_004116f0 at 004116f8
;   core_batman.cpp_CBatman_setup_FUN_00412be0 at 00412be8
;   core_beast.cpp_CBeast_setup_FUN_00414a60 at 00414a77
;   core_biggs.cpp_CBiggs_setup_FUN_00414dd0 at 00414dd8
;   core_boneguy.cpp_CBoneGuy_setup_FUN_004184c0 at 00418662
;   core_bride.cpp_CBride_setup_FUN_0041d9c0 at 0041db9e
;   core_bugs.cpp_CBugs_setup_FUN_0041f0f0 at 0041f113
;   core_conveyor.cpp_CConstruct_setup_FUN_00436be0 at 00436be8
;   core_cow.cpp_CZombieCow_setup_FUN_00439150 at 0043919e
;   ... and 20 more
;
; Called Functions:
;   core_charactr.cpp_CCharacter_setup_FUN_00422930
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00487eb0
        ;   Label: core_enemy.cpp_CEnemy_setup_FUN_00487eb0
    PUSH EDX                            ; 00487eb4
    CALL core_charactr.cpp_CCharacter_setup_FUN_00422930 ; 00487eb5
        ;   XREF to: 00422930 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_setup_FUN_00422930(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00487eba
    RET                                 ; 00487ebd

