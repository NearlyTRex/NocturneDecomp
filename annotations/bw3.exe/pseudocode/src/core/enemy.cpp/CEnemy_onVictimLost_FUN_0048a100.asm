; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_enemy_cpp_CEnemy_onVictimLost_FUN_0048a100(CEnemy *this_ptr,CDemonActor *lost_actor)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   lost_actor
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0048a100
        ;   Label: core_enemy.cpp_CEnemy_onVictimLost_FUN_0048a100
    MOV EAX,dword ptr [ESP + 0x8]       ; 0048a104
    CMP EAX,dword ptr [EDX + 0xcde4]    ; 0048a108
    JZ 0x0048a111                       ; 0048a10e
        ;   XREF to: 0048a111 (CONDITIONAL_JUMP)  ; LAB_0048a111
    RET                                 ; 0048a110
    PUSH EDX                            ; 0048a111
        ;   Label: LAB_0048a111
    MOV EAX,dword ptr [EDX + 0x154]     ; 0048a112
    CALL dword ptr [EAX + 0xf8]         ; 0048a118
    ADD ESP,0x4                         ; 0048a11e
    RET                                 ; 0048a121

