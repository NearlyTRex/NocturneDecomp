; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_cow_cpp_CZombieCow_FUN_00444c90(CZombieCow *this_ptr)
;
; Parameters:
; CZombieCow *     Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_enemy.cpp_CEnemy_FUN_004aa250
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00444c90
        ;   Label: core_cow.cpp_CZombieCow_FUN_00444c90
    PUSH EDX                            ; 00444c94
    CALL core_enemy.cpp_CEnemy_FUN_004aa250 ; 00444c95
        ;   XREF to: 004aa250 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_FUN_004aa250(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00444c9a
    RET                                 ; 00444c9d

