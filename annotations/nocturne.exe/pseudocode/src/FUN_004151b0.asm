; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004151b0(undefined4 param_1,int param_2)
;
;
; Called Functions:
;   core_enemy.cpp_CEnemy_processDamage_FUN_00479f70
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004151b0
        ;   Label: FUN_004151b0
    PUSH EAX                            ; 004151b4
    MOV EDX,dword ptr [ESP + 0x8]       ; 004151b5
    PUSH EDX                            ; 004151b9
    MOV dword ptr [EAX + 0x4],0x0       ; 004151ba
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 004151c1
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_processDamage_FUN_00479f70()
    ADD ESP,0x8                         ; 004151c6
    RET                                 ; 004151c9

