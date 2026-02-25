; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dog_cpp_CZombieDog_randomize_FUN_0047f960(CZombieDog *this_ptr)
;
; Parameters:
; CZombieDog *     Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_enemy.cpp_CEnemy_randomize_FUN_004aa250
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0047f960
        ;   Label: core_dog.cpp_CZombieDog_randomize_FUN_0047f960
    PUSH EDX                            ; 0047f964
    CALL core_enemy.cpp_CEnemy_randomize_FUN_004aa250 ; 0047f965
        ;   XREF to: 004aa250 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_randomize_FUN_004aa250(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0047f96a
    RET                                 ; 0047f96d

