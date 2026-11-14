; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mission_cpp_FUN_004fce00(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_game.cpp_FUN_004bbf70 at 004bc613
;   core_game.cpp_FUN_004bc840 at 004bca46
;   core_mission.cpp_CDemonMission_run_FUN_004fcb00 at 004fcc72
;   core_netgame.cpp_CNetGame_runLobby_FUN_0050cf50 at 0050d58b
;
; Referenced Globals:
;   TerminatedCString s_Can_t_run_mission_no_her_005de8f3
;   TerminatedCString s_Can_t_run_mission_no_loc_005de910
;   TerminatedCString s_Loading_script_005de932
;   CEditorTools* g_CEditorToolsPtr = 01c25594
;   undefined4 DAT_006141f0
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 DAT_00617e10
;   CScript* g_CScriptPtr = 01e65cd0
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CGameInstance.letterbox_mode
;   undefined4 DAT_01cedee0
;   undefined4 DAT_01cedef4
;
; Called Functions:
;   core_event.cpp_CEventList_reset_FUN_00489380
;   core_level.cpp_CLevelLoader_update_FUN_004e1600
;   core_mission.cpp_CDemonMission_loadSet_FUN_004fc6b0
;   core_mission.cpp_CDemonMission_prepareAllActors_FUN_004fc350
;   core_mission.cpp_FUN_004fbc90
;   core_script.cpp_CScript_executeInitSection_FUN_00522200
;   core_script.cpp_CScript_initRuntime_FUN_00522080
;   core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00539840
;   shape_edittool.cpp_CEditorTools_showError_FUN_0047be40
;   support_newmsg.cpp_getLocalizedString_FUN_0050fe80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fce00
        ;   Label: core_mission.cpp_FUN_004fce00
    PUSH ESI                            ; 004fce01
    PUSH EBP                            ; 004fce02
    MOV EBX,dword ptr [ESP + 0x10]      ; 004fce03
    CMP dword ptr [0x01cedee0],0x1      ; 004fce07 | DAT_01cedee0
    JL 0x004fce39                       ; 004fce0e
        ;   XREF to: 004fce39 (CONDITIONAL_JUMP)  ; LAB_004fce39
    MOV EAX,[0x01cedef4]                ; 004fce10 | DAT_01cedef4
    CMP dword ptr [EAX*0x4 + 0x1cedee4],0x0 ; 004fce15
    JNZ 0x004fce47                      ; 004fce1d
        ;   XREF to: 004fce47 (CONDITIONAL_JUMP)  ; LAB_004fce47
    PUSH 0x5de910                       ; 004fce1f | = "Can't run mission - no local hero"
    MOV EBX,dword ptr [0x006138e0]      ; 004fce24 | g_CEditorToolsPtr
    PUSH EBX                            ; 004fce2a
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047be40 ; 004fce2b
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047be40(CEditorTools * this_ptr, char * format)
        ;   Label: LAB_004fce2b
    ADD ESP,0x8                         ; 004fce30
    XOR EAX,EAX                         ; 004fce33
    POP EBP                             ; 004fce35
    POP ESI                             ; 004fce36
    POP EBX                             ; 004fce37
    RET                                 ; 004fce38
    PUSH 0x5de8f3                       ; 004fce39 | = "Can't run mission - no heros"
        ;   Label: LAB_004fce39
    MOV ESI,dword ptr [0x006138e0]      ; 004fce3e | g_CEditorToolsPtr
    PUSH ESI                            ; 004fce44
    JMP 0x004fce2b                      ; 004fce45
        ;   XREF to: 004fce2b (UNCONDITIONAL_JUMP)  ; LAB_004fce2b
    PUSH EDI                            ; 004fce47
        ;   Label: LAB_004fce47
    PUSH EBX                            ; 004fce48
    CALL core_mission.cpp_CDemonMission_prepareAllActors_FUN_004fc350 ; 004fce49
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_prepareAllActors_FUN_004fc350(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004fce4e
    LEA EAX,[EBX + 0x111c]              ; 004fce51
    MOV dword ptr [EBX + 0x1128],0xffffffff ; 004fce57
    MOV ESI,dword ptr [0x006141f0]      ; 004fce61 | DAT_006141f0
    MOV dword ptr [EAX + 0x8],0x0       ; 004fce67
    PUSH ESI                            ; 004fce6e
    MOV EDX,dword ptr [EAX + 0x8]       ; 004fce6f
    MOV dword ptr [EAX + 0x4],EDX       ; 004fce72
    MOV EDX,dword ptr [EAX + 0x4]       ; 004fce75
    MOV dword ptr [EAX],EDX             ; 004fce78
    CALL core_event.cpp_CEventList_reset_FUN_00489380 ; 004fce7a
        ;   XREF to: 00489380 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_reset_FUN_00489380(CEventList * this_ptr)
    MOV EAX,[0x00616494]                ; 004fce7f | g_CGamePtr
    MOV dword ptr [EAX + 0x244],0x0     ; 004fce84 | g_CGameInstance.letterbox_mode
    MOV EAX,[0x01cedef4]                ; 004fce8e | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004fce93
    ADD ESP,0x4                         ; 004fce9a
    MOV EDI,dword ptr [EAX + 0x2c]      ; 004fce9d
    PUSH EDI                            ; 004fcea0
    PUSH EBX                            ; 004fcea1
    CALL core_mission.cpp_CDemonMission_loadSet_FUN_004fc6b0 ; 004fcea2
        ;   XREF to: 004fc6b0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_loadSet_FUN_004fc6b0(CDemonMission * this_ptr, int set_index)
    ADD ESP,0x8                         ; 004fcea7
    PUSH 0x0                            ; 004fceaa
    PUSH 0x5de932                       ; 004fceac | = "Loading script"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004fceb1
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004fceb6
    PUSH EAX                            ; 004fceb9
    MOV EBP,dword ptr [0x00617e10]      ; 004fceba | DAT_00617e10
    PUSH EBP                            ; 004fcec0
    CALL core_level.cpp_CLevelLoader_update_FUN_004e1600 ; 004fcec1
        ;   XREF to: 004e1600 (UNCONDITIONAL_CALL)  ; void core_level.cpp_CLevelLoader_update_FUN_004e1600(CLevelLoader * this_ptr, char * text, int clear_screen)
    ADD ESP,0xc                         ; 004fcec6
    PUSH EBX                            ; 004fcec9
    CALL core_mission.cpp_FUN_004fbc90  ; 004fceca
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004fbc90()
    ADD ESP,0x4                         ; 004fcecf
    MOV EAX,[0x0061b460]                ; 004fced2 | g_CScriptPtr
    PUSH EAX                            ; 004fced7
    CALL core_script.cpp_CScript_initRuntime_FUN_00522080 ; 004fced8
        ;   XREF to: 00522080 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_initRuntime_FUN_00522080(CScript * this_ptr)
    ADD ESP,0x4                         ; 004fcedd
    MOV EDX,dword ptr [0x0061b460]      ; 004fcee0 | g_CScriptPtr
    PUSH EDX                            ; 004fcee6
    CALL core_script.cpp_CScript_executeInitSection_FUN_00522200 ; 004fcee7
        ;   XREF to: 00522200 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_executeInitSection_FUN_00522200(CScript * this_ptr)
    ADD ESP,0x4                         ; 004fceec
    MOV ECX,dword ptr [0x0061b5a8]      ; 004fceef | g_CDemonSetPtr
    PUSH ECX                            ; 004fcef5
    CALL core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00539840 ; 004fcef6
        ;   XREF to: 00539840 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00539840(CDemonSet * this_ptr)
    MOV EAX,0x1                         ; 004fcefb
    ADD ESP,0x4                         ; 004fcf00
    POP EDI                             ; 004fcf03
    POP EBP                             ; 004fcf04
    POP ESI                             ; 004fcf05
    POP EBX                             ; 004fcf06
    RET                                 ; 004fcf07

