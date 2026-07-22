; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_enemy_cpp_CEnemy_setup_FUN_004796b0(undefined4 param_1)
;
;
; XREF[27]:
;   FUN_0040fa00 at 0040fa05
;   FUN_004150b0 at 004150c7
;   FUN_00415430 at 00415438
;   FUN_004d4650 at 004d4815
;   FUN_00540c20 at 00540c65
;   FUN_0054c3e0 at 0054c3ec
;   core_batcreat.cpp_CBatCreature_setup_FUN_00412160 at 00412168
;   core_batman.cpp_CBatman_setup_FUN_004134a0 at 004134a8
;   core_boneguy.cpp_CBoneGuy_setup_FUN_00418800 at 004189a2
;   core_bride.cpp_CBride_setup_FUN_0041fc20 at 0041fdfe
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
        ;   XREF to: 00424260 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_setup_FUN_00424260()
    ADD ESP,0x4                         ; 004796ba
    RET                                 ; 004796bd

