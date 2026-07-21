; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_enemy_cpp_CEnemy_setVictim_FUN_00479f50(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00503e42
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00479f50
        ;   Label: core_enemy.cpp_CEnemy_setVictim_FUN_00479f50
    MOV EDX,dword ptr [ESP + 0x8]       ; 00479f54
    MOV dword ptr [EAX + 0xbca8],0x0    ; 00479f58
    MOV dword ptr [EAX + 0xbd1c],EDX    ; 00479f62
    RET                                 ; 00479f68

