; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy *this_ptr,float delta_time)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[24]:
;   core_baal.cpp_CBaal_process_FUN_005968a0 at 005972b1
;   core_boneguy.cpp_CBaalSkel_process_FUN_00419b40 at 0041a537
;   core_boneguy.cpp_CBoneGuy_process_FUN_004179b0 at 004183f7
;   core_carved.cpp_CCarved_process_FUN_00425da0 at 00426eef
;   core_construc.cpp_CConstruct_process_FUN_00442a20 at 004437f1
;   core_cow.cpp_CZombieCow_process_FUN_00445130 at 00445501
;   core_demnfolk.cpp_FUN_00455080 at 004564db
;   core_dog.cpp_CZombieDog_process_FUN_004628b0 at 00462e71
;   core_gargoyle.cpp_CGargoyle_process_FUN_004c5350 at 004c5a1c
;   core_ghoul.cpp_CGhoul_process_FUN_004c6eb0 at 004c7fca
;   ... and 14 more
;
; Referenced Globals:
;   undefined4 s_Capture_005bdcf6+1
;   undefined4 DAT_005fba60
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 g_CGameInstance.freeze_enemies_enabled
;
; Called Functions:
;   core_charactr.cpp_FUN_004333e0
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489ff0
        ;   Label: core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00489ff1
    MOV EAX,[0x005fe9dc]                ; 00489ff5 | g_CGamePtr
    CMP dword ptr [EAX + 0x1f8],0x0     ; 00489ffa | g_CGameInstance.freeze_enemies_enabled
    JNZ 0x0048a01b                      ; 0048a001
        ;   XREF to: 0048a01b (CONDITIONAL_JUMP)  ; LAB_0048a01b
    PUSH 0x5bdcf7                       ; 0048a003 | s_Capture_005bdcf6+1
    MOV ECX,dword ptr [0x005fba60]      ; 0048a008 | DAT_005fba60
    PUSH ECX                            ; 0048a00e
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 0048a00f
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0048a014
    TEST EAX,EAX                        ; 0048a017
    JZ 0x0048a02c                       ; 0048a019
        ;   XREF to: 0048a02c (CONDITIONAL_JUMP)  ; LAB_0048a02c
    PUSH 0x0                            ; 0048a01b
        ;   Label: LAB_0048a01b
    PUSH dword ptr [ESP + 0x10]         ; 0048a01d
    PUSH EBX                            ; 0048a021
    CALL core_charactr.cpp_FUN_004333e0 ; 0048a022
        ;   XREF to: 004333e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004333e0()
    ADD ESP,0xc                         ; 0048a027
    POP EBX                             ; 0048a02a
    RET                                 ; 0048a02b
    LEA EAX,[EBX + 0xcdf0]              ; 0048a02c
        ;   Label: LAB_0048a02c
    PUSH EAX                            ; 0048a032
    PUSH dword ptr [ESP + 0x10]         ; 0048a033
    PUSH EBX                            ; 0048a037
    CALL core_charactr.cpp_FUN_004333e0 ; 0048a038
        ;   XREF to: 004333e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004333e0()
    ADD ESP,0xc                         ; 0048a03d
    POP EBX                             ; 0048a040
    RET                                 ; 0048a041

