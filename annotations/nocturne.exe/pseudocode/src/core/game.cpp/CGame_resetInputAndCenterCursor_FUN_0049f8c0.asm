; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_game.cpp_CGame_playerControls_FUN_0049e7d0 at 0049e7f9
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049dd90
;   core_game.cpp_FUN_004a57c0 at 004a5b66
;   core_script.cpp_CScript_executeInitSection_FUN_004ff170 at 004ff20d
;   core_script.cpp_CScript_process_FUN_004fe5b0 at 004fe633
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00502b04
;
; Referenced Globals:
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   CNetGame* g_CNetGame_PTR_005bdee0 = 01cea280
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 DAT_01c78418
;   undefined4 DAT_01c7841c
;   undefined4 g_CDemonSet_01e57284.selected_camera_index
;
; Called Functions:
;   core_netgame.cpp_CNetGame_getMyControls_FUN_004eda40
;   crt_memory.c_memset_FUN_00563cc0
;   wincore_winrun.cpp_setCursorPosition_FUN_00558d60
;
; *****************************************************************************

section .text

    PUSH 0x2c                           ; 0049f8c0
        ;   Label: core_game.cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0
    PUSH 0x0                            ; 0049f8c2
    MOV EDX,dword ptr [0x005bdee0]      ; 0049f8c4 | g_CNetGame_PTR_005bdee0
    PUSH EDX                            ; 0049f8ca
    CALL core_netgame.cpp_CNetGame_getMyControls_FUN_004eda40 ; 0049f8cb
        ;   XREF to: 004eda40 (UNCONDITIONAL_CALL)  ; SPlayerInput * core_netgame.cpp_CNetGame_getMyControls_FUN_004eda40(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 0049f8d0
    PUSH EAX                            ; 0049f8d3
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0049f8d4
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0049f8d9
    PUSH 0x258                          ; 0049f8dc
    PUSH 0x0                            ; 0049f8e1
    PUSH 0x1c781c0                      ; 0049f8e3
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0049f8e8
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    MOV EAX,[0x005b7620]                ; 0049f8ed | DAT_005b7620
    MOV EDX,EAX                         ; 0049f8f2
    SAR EDX,0x1f                        ; 0049f8f4
    SUB EAX,EDX                         ; 0049f8f7
    SAR EAX,0x1                         ; 0049f8f9
    ADD ESP,0xc                         ; 0049f8fb
    PUSH EAX                            ; 0049f8fe
    MOV EAX,[0x005b761c]                ; 0049f8ff | DAT_005b761c
    MOV EDX,EAX                         ; 0049f904
    SAR EDX,0x1f                        ; 0049f906
    SUB EAX,EDX                         ; 0049f909
    SAR EAX,0x1                         ; 0049f90b
    XOR ECX,ECX                         ; 0049f90d
    PUSH EAX                            ; 0049f90f
    MOV dword ptr [0x01c78418],ECX      ; 0049f910 | DAT_01c78418
    CALL wincore_winrun.cpp_setCursorPosition_FUN_00558d60 ; 0049f916
        ;   XREF to: 00558d60 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_setCursorPosition_FUN_00558d60(int x, int y)
    MOV EAX,[0x005be368]                ; 0049f91b | g_CDemonSet_PTR_005be368
    MOV EAX,dword ptr [EAX + 0x15aabc]  ; 0049f920 | g_CDemonSet_01e57284.selected_camera_index
    ADD ESP,0x8                         ; 0049f926
    MOV [0x01c7841c],EAX                ; 0049f929 | DAT_01c7841c
    RET                                 ; 0049f92e

