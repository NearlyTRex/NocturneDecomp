; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_enemy_cpp_CEnemy_setup_FUN_004796b0(CEnemy *this_ptr)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
;
; XREF[27]:
;   core_armour.cpp_FUN_0040fa00 at 0040fa05
;   core_batcreat.cpp_CBatCreature_setup_FUN_00412160 at 00412168
;   core_batman.cpp_CBatman_setup_FUN_004134a0 at 004134a8
;   core_beast.cpp_CBeast_setup_FUN_004150b0 at 004150c7
;   core_biggs.cpp_FUN_00415430 at 00415438
;   core_boneguy.cpp_CBoneGuy_setup_FUN_00418800 at 004189a2
;   core_bride.cpp_CBride_setup_FUN_0041fc20 at 0041fdfe
;   core_bugs.cpp_CBugs_setup_FUN_004211e0 at 00421203
;   core_cow.cpp_CZombieCow_setup_FUN_0043bc50 at 0043bc9e
;   core_dog.cpp_CZombieDog_setup_FUN_004546d0 at 0045471d
;   ... and 17 more
;
; Called Functions:
;   core_charactr.cpp_CCharacter_setup_FUN_00424260
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004796b0
        ;   Label: core_enemy.cpp_CEnemy_setup_FUN_004796b0
    PUSH EDX                            ; 004796b4
    CALL core_charactr.cpp_CCharacter_setup_FUN_00424260 ; 004796b5
        ;   XREF to: 00424260 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_setup_FUN_00424260(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004796ba
    RET                                 ; 004796bd

