; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_enemy_cpp_CEnemy_onVictimLost_FUN_00488a80(CEnemy *this_ptr,CDemonActor *lost_actor)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   lost_actor
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00488a80
        ;   Label: core_enemy.cpp_CEnemy_onVictimLost_FUN_00488a80
    MOV EAX,dword ptr [ESP + 0x8]       ; 00488a84
    CMP EAX,dword ptr [EDX + 0x10a78]   ; 00488a88
    JZ 0x00488a91                       ; 00488a8e
        ;   XREF to: 00488a91 (CONDITIONAL_JUMP)  ; LAB_00488a91
    RET                                 ; 00488a90
    PUSH EDX                            ; 00488a91
        ;   Label: LAB_00488a91
    MOV EAX,dword ptr [EDX + 0x2b0]     ; 00488a92
    CALL dword ptr [EAX + 0x100]        ; 00488a98
    ADD ESP,0x4                         ; 00488a9e
    RET                                 ; 00488aa1

