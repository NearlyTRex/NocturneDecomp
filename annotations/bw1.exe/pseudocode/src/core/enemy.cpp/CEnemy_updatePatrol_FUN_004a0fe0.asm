; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(CEnemy *this_ptr,float delta_time)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[23]:
;   core_batcreat.cpp_CBatCreature_process_FUN_004115b0 at 00411d54
;   core_batman.cpp_CBatman_process_FUN_00412ba0 at 00413516
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bb40 at 0041c52a
;   core_bride.cpp_CBride_process_FUN_00423b70 at 00423cd1
;   core_carved.cpp_CCarved_process_FUN_00428ae0 at 00429c33
;   core_constrct.cpp_CConstruct_process_FUN_00445cb0 at 00446981
;   core_cow.cpp_CZombieCow_process_FUN_00448570 at 00448938
;   core_demnfolk.cpp_CDemnfolk_process_FUN_00459100 at 0045a4c0
;   core_dog.cpp_CZombieDog_process_FUN_004768a0 at 00476d02
;   core_dracbrid.cpp_CDraculaBride_process_FUN_0047b510 at 0047c4b8
;   ... and 13 more
;
; Referenced Globals:
;   TerminatedCString s_Capture_005dcba3
;   undefined4 DAT_0061b4d0
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 g_CGameInstance.freeze_enemies_enabled
;
; Called Functions:
;   core_charactr.cpp_FUN_00433f10
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0fe0
        ;   Label: core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a0fe1
    MOV EAX,[0x0061d95c]                ; 004a0fe5 | g_CGamePtr
    CMP dword ptr [EAX + 0x1f0],0x0     ; 004a0fea | g_CGameInstance.freeze_enemies_enabled
    JNZ 0x004a100b                      ; 004a0ff1
        ;   XREF to: 004a100b (CONDITIONAL_JUMP)  ; LAB_004a100b
    PUSH 0x5dcba3                       ; 004a0ff3 | = "Capture"
    MOV ECX,dword ptr [0x0061b4d0]      ; 004a0ff8 | DAT_0061b4d0
    PUSH ECX                            ; 004a0ffe
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 004a0fff
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004a1004
    TEST EAX,EAX                        ; 004a1007
    JZ 0x004a101c                       ; 004a1009
        ;   XREF to: 004a101c (CONDITIONAL_JUMP)  ; LAB_004a101c
    PUSH 0x0                            ; 004a100b
        ;   Label: LAB_004a100b
    PUSH dword ptr [ESP + 0x10]         ; 004a100d
    PUSH EBX                            ; 004a1011
    CALL core_charactr.cpp_FUN_00433f10 ; 004a1012
        ;   XREF to: 00433f10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00433f10()
    ADD ESP,0xc                         ; 004a1017
    POP EBX                             ; 004a101a
    RET                                 ; 004a101b
    LEA EAX,[EBX + 0xc1f4]              ; 004a101c
        ;   Label: LAB_004a101c
    PUSH EAX                            ; 004a1022
    PUSH dword ptr [ESP + 0x10]         ; 004a1023
    PUSH EBX                            ; 004a1027
    CALL core_charactr.cpp_FUN_00433f10 ; 004a1028
        ;   XREF to: 00433f10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00433f10()
    ADD ESP,0xc                         ; 004a102d
    POP EBX                             ; 004a1030
    RET                                 ; 004a1031

