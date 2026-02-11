; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_enemy_cpp_CEnemy_onVictimLost_FUN_004aa0c0(CEnemy *this_ptr,CDemonActor *lost_actor)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   lost_actor
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004aa0c0
        ;   Label: core_enemy.cpp_CEnemy_onVictimLost_FUN_004aa0c0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004aa0c4
    CMP EAX,dword ptr [EDX + 0xbe3c]    ; 004aa0c8
    JZ 0x004aa0d1                       ; 004aa0ce
        ;   XREF to: 004aa0d1 (CONDITIONAL_JUMP)  ; LAB_004aa0d1
    RET                                 ; 004aa0d0
    PUSH EDX                            ; 004aa0d1
        ;   Label: LAB_004aa0d1
    MOV EAX,dword ptr [EDX + 0x154]     ; 004aa0d2
    CALL dword ptr [EAX + 0x10c]        ; 004aa0d8
    ADD ESP,0x4                         ; 004aa0de
    RET                                 ; 004aa0e1

