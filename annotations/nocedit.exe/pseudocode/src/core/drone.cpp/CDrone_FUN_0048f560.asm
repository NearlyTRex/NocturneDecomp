; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_drone_cpp_CDrone_FUN_0048f560(CDrone *this_ptr)
;
; Parameters:
; CDrone *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_enemy.cpp_CEnemy_FUN_004aa250
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0048f560
        ;   Label: core_drone.cpp_CDrone_FUN_0048f560
    PUSH EDX                            ; 0048f564
    CALL core_enemy.cpp_CEnemy_FUN_004aa250 ; 0048f565
        ;   XREF to: 004aa250 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_FUN_004aa250(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0048f56a
    RET                                 ; 0048f56d

