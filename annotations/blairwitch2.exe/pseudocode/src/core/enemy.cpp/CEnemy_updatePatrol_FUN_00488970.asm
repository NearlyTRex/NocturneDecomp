; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(CEnemy *this_ptr,float delta_time)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[20]:
;   core_batcreat.cpp_CBatCreature_process_FUN_00411a10 at 004120ed
;   core_batman.cpp_CBatman_process_FUN_00412f40 at 00413816
;   core_boneguy.cpp_CBoneGuy_process_FUN_004186c0 at 004190aa
;   core_bride.cpp_CBride_process_FUN_0041dbe0 at 0041dd1a
;   core_conveyor.cpp_CConstruct_process_FUN_00436e80 at 0043775a
;   core_cow.cpp_CZombieCow_process_FUN_004392b0 at 00439678
;   core_dog.cpp_CZombieDog_process_FUN_0045e360 at 0045e7c2
;   core_dracbrid.cpp_CDraculaBride_process_FUN_00462ff0 at 00463f98
;   core_drone.cpp_CDrone_process_FUN_0046d870 at 0046dd64
;   core_gargoyle.cpp_CGargoyle_process_FUN_004c0050 at 004c071b
;   ... and 10 more
;
; Referenced Globals:
;   TerminatedCString s_Capture_005d2e0a
;   undefined4 DAT_006141f0
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 g_CGameInstance.freeze_enemies_enabled
;
; Called Functions:
;   core_charactr.cpp_FUN_00429f20
;   core_event.cpp_CEventList_evaluateCondition_FUN_0048e340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488970
        ;   Label: core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970
    MOV EBX,dword ptr [ESP + 0x8]       ; 00488971
    MOV EAX,[0x00616494]                ; 00488975 | g_CGamePtr
    CMP dword ptr [EAX + 0x1f0],0x0     ; 0048897a | g_CGameInstance.freeze_enemies_enabled
    JNZ 0x0048899b                      ; 00488981
        ;   XREF to: 0048899b (CONDITIONAL_JUMP)  ; LAB_0048899b
    PUSH 0x5d2e0a                       ; 00488983 | = "Capture"
    MOV ECX,dword ptr [0x006141f0]      ; 00488988 | DAT_006141f0
    PUSH ECX                            ; 0048898e
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 0048898f
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00488994
    TEST EAX,EAX                        ; 00488997
    JZ 0x004889ac                       ; 00488999
        ;   XREF to: 004889ac (CONDITIONAL_JUMP)  ; LAB_004889ac
    PUSH 0x0                            ; 0048899b
        ;   Label: LAB_0048899b
    PUSH dword ptr [ESP + 0x10]         ; 0048899d
    PUSH EBX                            ; 004889a1
    CALL core_charactr.cpp_FUN_00429f20 ; 004889a2
        ;   XREF to: 00429f20 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00429f20()
    ADD ESP,0xc                         ; 004889a7
    POP EBX                             ; 004889aa
    RET                                 ; 004889ab
    LEA EAX,[EBX + 0x10a84]             ; 004889ac
        ;   Label: LAB_004889ac
    PUSH EAX                            ; 004889b2
    PUSH dword ptr [ESP + 0x10]         ; 004889b3
    PUSH EBX                            ; 004889b7
    CALL core_charactr.cpp_FUN_00429f20 ; 004889b8
        ;   XREF to: 00429f20 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00429f20()
    ADD ESP,0xc                         ; 004889bd
    POP EBX                             ; 004889c0
    RET                                 ; 004889c1

