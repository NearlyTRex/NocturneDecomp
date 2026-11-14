; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_enemy_cpp_CEnemy_setVictim_FUN_00489b60(CEnemy *this_ptr,CDemonActor *victim)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   victim
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052f4e2
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00489b60
        ;   Label: core_enemy.cpp_CEnemy_setVictim_FUN_00489b60
    MOV EDX,dword ptr [ESP + 0x8]       ; 00489b64
    MOV dword ptr [EAX + 0xcde8],0x0    ; 00489b68
    MOV dword ptr [EAX + 0xd04c],EDX    ; 00489b72
    RET                                 ; 00489b78

