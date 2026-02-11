; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_mobster_cpp_CMobster_FUN_00527c30(CMobster *this_ptr)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_enemy.cpp_CEnemy_randomize_FUN_004aa250
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00527c30
        ;   Label: core_mobster.cpp_CMobster_FUN_00527c30
    PUSH EDX                            ; 00527c34
    CALL core_enemy.cpp_CEnemy_randomize_FUN_004aa250 ; 00527c35
        ;   XREF to: 004aa250 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_randomize_FUN_004aa250(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00527c3a
    RET                                 ; 00527c3d

