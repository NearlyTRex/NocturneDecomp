; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_beast_cpp_CBeast_processDamage_FUN_00418380(CBeast *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CBeast *         Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Called Functions:
;   core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00418380
        ;   Label: core_beast.cpp_CBeast_processDamage_FUN_00418380
    PUSH EAX                            ; 00418384
    MOV EDX,dword ptr [ESP + 0x8]       ; 00418385
    PUSH EDX                            ; 00418389
    MOV dword ptr [EAX + 0x4],0x0       ; 0041838a
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10 ; 00418391
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00418396
    RET                                 ; 00418399

