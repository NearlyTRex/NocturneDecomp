; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_enemy_cpp_CEnemy_setVictim_FUN_004a9ef0(CEnemy *this_ptr,CDemonActor *victim)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   victim
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055f388
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a9ef0
        ;   Label: core_enemy.cpp_CEnemy_setVictim_FUN_004a9ef0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a9ef4
    MOV dword ptr [EAX + 0xbe40],0x0    ; 004a9ef8
    MOV dword ptr [EAX + 0xbeb4],EDX    ; 004a9f02
    RET                                 ; 004a9f08

