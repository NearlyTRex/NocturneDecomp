; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_succubus_cpp_CSuccubus_processDamage_FUN_00592c90(CSuccubus *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CSuccubus *      Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Called Functions:
;   core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00592c90
        ;   Label: core_succubus.cpp_CSuccubus_processDamage_FUN_00592c90
    PUSH EAX                            ; 00592c94
    MOV EDX,dword ptr [ESP + 0x8]       ; 00592c95
    PUSH EDX                            ; 00592c99
    MOV dword ptr [EAX + 0x4],0x0       ; 00592c9a
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00 ; 00592ca1
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00592ca6
    RET                                 ; 00592ca9

