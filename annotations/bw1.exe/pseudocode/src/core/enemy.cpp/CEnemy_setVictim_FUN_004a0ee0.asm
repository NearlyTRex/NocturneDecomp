; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_enemy_cpp_CEnemy_setVictim_FUN_004a0ee0(CEnemy *this_ptr,CDemonActor *victim)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   victim
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00544460 at 00549dfb
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a0ee0
        ;   Label: core_enemy.cpp_CEnemy_setVictim_FUN_004a0ee0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a0ee4
    MOV dword ptr [EAX + 0xc1ec],0x0    ; 004a0ee8
    MOV dword ptr [EAX + 0xc260],EDX    ; 004a0ef2
    RET                                 ; 004a0ef8

