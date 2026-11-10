; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_enemy_cpp_CEnemy_onVictimLost_FUN_004a10f0(CEnemy *this_ptr,CDemonActor *lost_actor)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   lost_actor
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a10f0
        ;   Label: core_enemy.cpp_CEnemy_onVictimLost_FUN_004a10f0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004a10f4
    CMP EAX,dword ptr [EDX + 0xc1e8]    ; 004a10f8
    JZ 0x004a1101                       ; 004a10fe
        ;   XREF to: 004a1101 (CONDITIONAL_JUMP)  ; LAB_004a1101
    RET                                 ; 004a1100
    PUSH EDX                            ; 004a1101
        ;   Label: LAB_004a1101
    MOV EAX,dword ptr [EDX + 0x154]     ; 004a1102
    CALL dword ptr [EAX + 0xf8]         ; 004a1108
    ADD ESP,0x4                         ; 004a110e
    RET                                 ; 004a1111

