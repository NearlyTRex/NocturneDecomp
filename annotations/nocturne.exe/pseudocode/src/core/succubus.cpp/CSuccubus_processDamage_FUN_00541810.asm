; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_succubus_cpp_CSuccubus_processDamage_FUN_00541810(CSuccubus *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CSuccubus *      Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Called Functions:
;   core_enemy.cpp_CEnemy_processDamage_FUN_00479f70
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00541810
        ;   Label: core_succubus.cpp_CSuccubus_processDamage_FUN_00541810
    PUSH EAX                            ; 00541814
    MOV EDX,dword ptr [ESP + 0x8]       ; 00541815
    PUSH EDX                            ; 00541819
    MOV dword ptr [EAX + 0x4],0x0       ; 0054181a
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 00541821
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00479f70(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00541826
    RET                                 ; 00541829

