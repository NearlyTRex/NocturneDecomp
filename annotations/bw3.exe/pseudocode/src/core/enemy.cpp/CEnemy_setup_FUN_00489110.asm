; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_enemy_cpp_CEnemy_setup_FUN_00489110(CEnemy *this_ptr)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
;
; XREF[29]:
;   core_baal.cpp_FUN_00596730 at 005967bb
;   core_boneguy.cpp_FUN_00417630 at 004177f8
;   core_bugs.cpp_FUN_00421060 at 00421083
;   core_carved.cpp_FUN_00425ab0 at 00425cb3
;   core_constrct.cpp_FUN_004425f0 at 0044261e
;   core_cow.cpp_FUN_00444fd0 at 0044501e
;   core_demnfolk.cpp_FUN_00454d20 at 00454f26
;   core_dog.cpp_FUN_00462790 at 004627dd
;   core_gargoyle.cpp_FUN_004c4ee0 at 004c4ee8
;   core_ghoul.cpp_FUN_004c6a10 at 004c6c17
;   ... and 19 more
;
; Called Functions:
;   core_charactr.cpp_FUN_0042b0e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00489110
        ;   Label: core_enemy.cpp_CEnemy_setup_FUN_00489110
    PUSH EDX                            ; 00489114
    CALL core_charactr.cpp_FUN_0042b0e0 ; 00489115
        ;   XREF to: 0042b0e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b0e0()
    ADD ESP,0x4                         ; 0048911a
    RET                                 ; 0048911d

