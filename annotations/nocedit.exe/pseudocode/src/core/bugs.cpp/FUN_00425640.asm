; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_bugs_cpp_FUN_00425640(void)
;
;
; Called Functions:
;   core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00425640
        ;   Label: core_bugs.cpp_FUN_00425640
    PUSH EAX                            ; 00425644
    MOV EDX,dword ptr [ESP + 0x8]       ; 00425645
    PUSH EDX                            ; 00425649
    MOV dword ptr [EAX + 0x4],0x0       ; 0042564a
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10 ; 00425651
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00425656
    RET                                 ; 00425659

