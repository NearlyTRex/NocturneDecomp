; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_beast_cpp_CBeast_processDamage_FUN_004151b0(CBeast *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CBeast *         Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Called Functions:
;   core_enemy.cpp_CEnemy_processDamage_FUN_00479f70
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004151b0
        ;   Label: core_beast.cpp_CBeast_processDamage_FUN_004151b0
    PUSH EAX                            ; 004151b4
    MOV EDX,dword ptr [ESP + 0x8]       ; 004151b5
    PUSH EDX                            ; 004151b9
    MOV dword ptr [EAX + 0x4],0x0       ; 004151ba
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 004151c1
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00479f70(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004151c6
    RET                                 ; 004151c9

