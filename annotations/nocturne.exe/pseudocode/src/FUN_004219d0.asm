; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004219d0(undefined4 param_1,int param_2)
;
;
; Called Functions:
;   core_enemy.cpp_CEnemy_processDamage_FUN_00479f70
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004219d0
        ;   Label: FUN_004219d0
    PUSH EAX                            ; 004219d4
    MOV EDX,dword ptr [ESP + 0x8]       ; 004219d5
    PUSH EDX                            ; 004219d9
    MOV dword ptr [EAX + 0x4],0x0       ; 004219da
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 004219e1
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_processDamage_FUN_00479f70()
    ADD ESP,0x8                         ; 004219e6
    RET                                 ; 004219e9

