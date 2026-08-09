; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mission_cpp_CDemonMission_startMission_FUN_004d9780(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_game.cpp_CGame_FUN_004a4170 at 004a48cc
;   core_game.cpp_CGame_FUN_004a4b50 at 004a4ebf
;   core_mission.cpp_CDemonMission_run_FUN_004d9440 at 004d95a7
;   core_netgame.cpp_CNetGame_runLobby_FUN_004eb520 at 004ebb5f
;
; Referenced Globals:
;   TerminatedCString s_Can_t_run_mission_no_her_00589e67
;   TerminatedCString s_Can_t_run_mission_no_loc_00589e84
;   TerminatedCString s_Loading_script_00589ea6
;   CEditorTools* g_CEditorTools_PTR_005b6d50 = 01bcd074
;   undefined4 DAT_005b7650
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   CLevelLoader* g_CLevelLoader_PTR_005baca0 = 01cc3160
;   undefined4 DAT_005be220
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 g_CGame_01c775ec.letterbox_mode
;   undefined4 g_CGame_01c775ec.is_loading
;   undefined4 DAT_01cae0d4
;   int g_LocalHeroIndex
;   CScript g_CScript_01e56da0
;   CDemonSet g_CDemonSet_01e57284
;
; Called Functions:
;   core_event.cpp_CEventList_reset_FUN_0047aa00
;   core_level.cpp_CLevelLoader_update_FUN_004c59e0
;   core_mission.cpp_CDemonMission_loadScript_FUN_004d86d0
;   core_mission.cpp_CDemonMission_loadSet_FUN_004d9020
;   core_mission.cpp_CDemonMission_prepareAllActors_FUN_004d8db0
;   core_script.cpp_CScript_executeInitSection_FUN_004ff170
;   core_script.cpp_CScript_FUN_004feff0
;   core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_005135f0
;   shape_edittool.cpp_FUN_0046fcd0
;   support_newmsg.cpp_getLocalizedString_FUN_004ee370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d9780
        ;   Label: core_mission.cpp_CDemonMission_startMission_FUN_004d9780
    PUSH ESI                            ; 004d9781
    PUSH EDI                            ; 004d9782
    PUSH EBP                            ; 004d9783
    MOV EBX,dword ptr [ESP + 0x14]      ; 004d9784
    CMP dword ptr [0x01cae0d4],0x1      ; 004d9788 | DAT_01cae0d4
    JL 0x004d9847                       ; 004d978f
        ;   XREF to: 004d9847 (CONDITIONAL_JUMP)  ; LAB_004d9847
    MOV EAX,[0x01cae0e8]                ; 004d9795 | g_LocalHeroIndex
    CMP dword ptr [EAX*0x4 + 0x1cae0d8],0x0 ; 004d979a
    JZ 0x004d9862                       ; 004d97a2
        ;   XREF to: 004d9862 (CONDITIONAL_JUMP)  ; LAB_004d9862
    PUSH EBX                            ; 004d97a8
    CALL core_mission.cpp_CDemonMission_prepareAllActors_FUN_004d8db0 ; 004d97a9
        ;   XREF to: 004d8db0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_prepareAllActors_FUN_004d8db0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004d97ae
    LEA EAX,[EBX + 0x51c]               ; 004d97b1
    MOV dword ptr [EBX + 0x528],0xffffffff ; 004d97b7
    MOV ESI,dword ptr [0x005b7650]      ; 004d97c1 | DAT_005b7650
    MOV dword ptr [EAX + 0x8],0x0       ; 004d97c7
    PUSH ESI                            ; 004d97ce
    MOV EDX,dword ptr [EAX + 0x8]       ; 004d97cf
    MOV dword ptr [EAX + 0x4],EDX       ; 004d97d2
    MOV EDX,dword ptr [EAX + 0x4]       ; 004d97d5
    MOV dword ptr [EAX],EDX             ; 004d97d8
    CALL core_event.cpp_CEventList_reset_FUN_0047aa00 ; 004d97da
        ;   XREF to: 0047aa00 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_reset_FUN_0047aa00(CEventList * this_ptr)
    MOV EAX,[0x005b9354]                ; 004d97df | g_CGame_PTR_005b9354
    MOV dword ptr [EAX + 0x228],0x0     ; 004d97e4 | g_CGame_01c775ec.letterbox_mode
    MOV EAX,[0x01cae0e8]                ; 004d97ee | g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004d97f3
    ADD ESP,0x4                         ; 004d97fa
    MOV EDI,dword ptr [EAX + 0x2c]      ; 004d97fd
    PUSH EDI                            ; 004d9800
    PUSH EBX                            ; 004d9801
    CALL core_mission.cpp_CDemonMission_loadSet_FUN_004d9020 ; 004d9802
        ;   XREF to: 004d9020 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_loadSet_FUN_004d9020(CDemonMission * this_ptr, int set_index)
    ADD ESP,0x8                         ; 004d9807
    PUSH 0x0                            ; 004d980a
    PUSH 0x589ea6                       ; 004d980c | = "Loading script"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d9811
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004d9816
    PUSH EAX                            ; 004d9819
    MOV EBP,dword ptr [0x005baca0]      ; 004d981a | g_CLevelLoader_PTR_005baca0
    PUSH EBP                            ; 004d9820
    CALL core_level.cpp_CLevelLoader_update_FUN_004c59e0 ; 004d9821
        ;   XREF to: 004c59e0 (UNCONDITIONAL_CALL)  ; void core_level.cpp_CLevelLoader_update_FUN_004c59e0(CLevelLoader * this_ptr, char * text, int clear_screen)
    MOV EAX,[0x005b9354]                ; 004d9826 | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004d982b
    MOV EDX,dword ptr [EAX + 0x234]     ; 004d982e | g_CGame_01c775ec.is_loading
    PUSH EDX                            ; 004d9834
    PUSH EBX                            ; 004d9835
    CALL core_mission.cpp_CDemonMission_loadScript_FUN_004d86d0 ; 004d9836
        ;   XREF to: 004d86d0 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_loadScript_FUN_004d86d0(CDemonMission * this_ptr, int is_loading)
    ADD ESP,0x8                         ; 004d983b
    TEST EAX,EAX                        ; 004d983e
    JNZ 0x004d987d                      ; 004d9840
        ;   XREF to: 004d987d (CONDITIONAL_JUMP)  ; LAB_004d987d
    POP EBP                             ; 004d9842
    POP EDI                             ; 004d9843
    POP ESI                             ; 004d9844
    POP EBX                             ; 004d9845
    RET                                 ; 004d9846
    PUSH 0x589e67                       ; 004d9847 | = "Can't run mission - no heros"
        ;   Label: LAB_004d9847
    MOV EBP,dword ptr [0x005b6d50]      ; 004d984c | g_CEditorTools_PTR_005b6d50
    PUSH EBP                            ; 004d9852
    CALL shape_edittool.cpp_FUN_0046fcd0 ; 004d9853
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0046fcd0()
    ADD ESP,0x8                         ; 004d9858
    XOR EAX,EAX                         ; 004d985b
    POP EBP                             ; 004d985d
    POP EDI                             ; 004d985e
    POP ESI                             ; 004d985f
    POP EBX                             ; 004d9860
    RET                                 ; 004d9861
    PUSH 0x589e84                       ; 004d9862 | = "Can't run mission - no local hero"
        ;   Label: LAB_004d9862
    MOV EDI,dword ptr [0x005b6d50]      ; 004d9867 | g_CEditorTools_PTR_005b6d50
    PUSH EDI                            ; 004d986d
    CALL shape_edittool.cpp_FUN_0046fcd0 ; 004d986e
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0046fcd0()
    ADD ESP,0x8                         ; 004d9873
    XOR EAX,EAX                         ; 004d9876
    POP EBP                             ; 004d9878
    POP EDI                             ; 004d9879
    POP ESI                             ; 004d987a
    POP EBX                             ; 004d987b
    RET                                 ; 004d987c
    MOV ECX,dword ptr [0x005be220]      ; 004d987d | DAT_005be220
        ;   Label: LAB_004d987d
    PUSH ECX                            ; 004d9883 | g_CScript_01e56da0
    CALL core_script.cpp_CScript_FUN_004feff0 ; 004d9884
        ;   XREF to: 004feff0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_FUN_004feff0(CScript * this_ptr)
    ADD ESP,0x4                         ; 004d9889
    MOV EBX,dword ptr [0x005be220]      ; 004d988c | DAT_005be220
    PUSH EBX                            ; 004d9892 | g_CScript_01e56da0
    CALL core_script.cpp_CScript_executeInitSection_FUN_004ff170 ; 004d9893
        ;   XREF to: 004ff170 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_executeInitSection_FUN_004ff170(CScript * this_ptr)
    ADD ESP,0x4                         ; 004d9898
    MOV ESI,dword ptr [0x005be368]      ; 004d989b | g_CDemonSet_PTR_005be368
    PUSH ESI                            ; 004d98a1 | g_CDemonSet_01e57284
    CALL core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_005135f0 ; 004d98a2
        ;   XREF to: 005135f0 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_005135f0(CDemonSet * this_ptr)
    MOV EAX,0x1                         ; 004d98a7
    ADD ESP,0x4                         ; 004d98ac
    POP EBP                             ; 004d98af
    POP EDI                             ; 004d98b0
    POP ESI                             ; 004d98b1
    POP EBX                             ; 004d98b2
    RET                                 ; 004d98b3

