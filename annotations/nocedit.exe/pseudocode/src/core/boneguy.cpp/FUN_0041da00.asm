; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_boneguy.cpp_FUN_0041da00()
;
;
; Called Functions:
;   core_enemy.cpp_CEnemy_FUN_004aa250
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0041da00
        ;   Label: core_boneguy.cpp_FUN_0041da00
    PUSH EDX                            ; 0041da04
    CALL core_enemy.cpp_CEnemy_FUN_004aa250 ; 0041da05 | void core_enemy.cpp_CEnemy_FUN_004aa250(CEnemy * this_ptr)
        ;   XREF to: 004aa250 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0041da0a
    RET                                 ; 0041da0d

