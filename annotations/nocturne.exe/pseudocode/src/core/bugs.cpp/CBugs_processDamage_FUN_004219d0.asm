; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_CBugs_processDamage_FUN_004219d0(CBugs *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Called Functions:
;   core_enemy.cpp_CEnemy_processDamage_FUN_00479f70
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004219d0
        ;   Label: core_bugs.cpp_CBugs_processDamage_FUN_004219d0
    PUSH EAX                            ; 004219d4
    MOV EDX,dword ptr [ESP + 0x8]       ; 004219d5
    PUSH EDX                            ; 004219d9
    MOV dword ptr [EAX + 0x4],0x0       ; 004219da
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 004219e1
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00479f70(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004219e6
    RET                                 ; 004219e9

