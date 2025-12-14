; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_werewolf.cpp_FUN_005f21e0()
;
;
; Called Functions:
;   core_enemy.cpp_CEnemy_FUN_004aa250
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005f21e0
        ;   Label: core_werewolf.cpp_FUN_005f21e0
    PUSH EDX                            ; 005f21e4
    CALL core_enemy.cpp_CEnemy_FUN_004aa250 ; 005f21e5
        ;   XREF to: 004aa250 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_FUN_004aa250(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005f21ea
    RET                                 ; 005f21ed

