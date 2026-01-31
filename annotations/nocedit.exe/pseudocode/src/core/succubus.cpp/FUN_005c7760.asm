; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_succubus_cpp_FUN_005c7760(void)
;
;
; Called Functions:
;   core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005c7760
        ;   Label: core_succubus.cpp_FUN_005c7760
    PUSH EAX                            ; 005c7764
    MOV EDX,dword ptr [ESP + 0x8]       ; 005c7765
    PUSH EDX                            ; 005c7769
    MOV dword ptr [EAX + 0x4],0x0       ; 005c776a
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10 ; 005c7771
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 005c7776
    RET                                 ; 005c7779

