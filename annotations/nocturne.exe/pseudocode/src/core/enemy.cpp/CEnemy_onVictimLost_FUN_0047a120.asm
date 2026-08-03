; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_enemy_cpp_CEnemy_onVictimLost_FUN_0047a120(CEnemy *this_ptr,CDemonActor *lost_actor)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   lost_actor
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0047a120
        ;   Label: core_enemy.cpp_CEnemy_onVictimLost_FUN_0047a120
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047a124
    CMP EAX,dword ptr [EDX + 0xbca4]    ; 0047a128
    JZ 0x0047a131                       ; 0047a12e
        ;   XREF to: 0047a131 (CONDITIONAL_JUMP)  ; LAB_0047a131
    RET                                 ; 0047a130
    PUSH EDX                            ; 0047a131
        ;   Label: LAB_0047a131
    MOV EAX,dword ptr [EDX + 0x14c]     ; 0047a132
    CALL dword ptr [EAX + 0xf0]         ; 0047a138
    ADD ESP,0x4                         ; 0047a13e
    RET                                 ; 0047a141

