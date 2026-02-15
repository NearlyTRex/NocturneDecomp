; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_game.cpp_CGame_playerControls_FUN_004dbd80 at 004dbda9
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db2f7
;   core_game.cpp_CGame_showFullscreenBitmap_FUN_004e2910 at 004e2eb5
;   core_script.cpp_CScript_executeInitSection_FUN_0055a6c0 at 0055a75d
;   core_script.cpp_CScript_process_FUN_00559960 at 005599e3
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055e054
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   CNetGame* g_CNetGamePtr = 02f7c740
;   CDemonSet* g_CDemonSetPtr = 03114278
;   char[600] g_PrevKeyboardState
;   int g_InputResetFlag
;   int g_StoredCameraValue
;   CNetGame g_CNetGameInstance
;   undefined4 g_CDemonSetInstance.selected_camera_index
;
; Called Functions:
;   core_netgame.cpp_CNetGame_getMyControls_FUN_005438c0
;   crt_memory.c_memset_FUN_005fde40
;   wincore_winrun.cpp_setCursorPosition_FUN_005f30d0
;
; *****************************************************************************

section .text

    PUSH 0x2c                           ; 004dce70
        ;   Label: core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70
    PUSH 0x0                            ; 004dce72
    MOV EDX,dword ptr [0x00680a00]      ; 004dce74 | g_CNetGameInstance | g_CNetGamePtr
    PUSH EDX                            ; 004dce7a | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_getMyControls_FUN_005438c0 ; 004dce7b
        ;   XREF to: 005438c0 (UNCONDITIONAL_CALL)  ; void * * core_netgame.cpp_CNetGame_getMyControls_FUN_005438c0(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 004dce80
    PUSH EAX                            ; 004dce83
    CALL crt_memory.c_memset_FUN_005fde40 ; 004dce84
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004dce89
    PUSH 0x258                          ; 004dce8c
    PUSH 0x0                            ; 004dce91
    PUSH 0x2d82670                      ; 004dce93 | g_PrevKeyboardState
    CALL crt_memory.c_memset_FUN_005fde40 ; 004dce98
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV EAX,[0x00679398]                ; 004dce9d | g_WindowHeight
    MOV EDX,EAX                         ; 004dcea2
    SAR EDX,0x1f                        ; 004dcea4
    SUB EAX,EDX                         ; 004dcea7
    SAR EAX,0x1                         ; 004dcea9
    ADD ESP,0xc                         ; 004dceab
    PUSH EAX                            ; 004dceae
    MOV EAX,[0x00679394]                ; 004dceaf | g_WindowWidth
    MOV EDX,EAX                         ; 004dceb4
    SAR EDX,0x1f                        ; 004dceb6
    SUB EAX,EDX                         ; 004dceb9
    SAR EAX,0x1                         ; 004dcebb
    XOR ECX,ECX                         ; 004dcebd
    PUSH EAX                            ; 004dcebf
    MOV dword ptr [0x02d828c8],ECX      ; 004dcec0 | g_InputResetFlag
    CALL wincore_winrun.cpp_setCursorPosition_FUN_005f30d0 ; 004dcec6
        ;   XREF to: 005f30d0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_setCursorPosition_FUN_005f30d0(int x, int y)
    MOV EAX,[0x006810c8]                ; 004dcecb | g_CDemonSetPtr
    MOV EAX,dword ptr [EAX + 0x15aea4]  ; 004dced0 | g_CDemonSetInstance.selected_camera_index
    ADD ESP,0x8                         ; 004dced6
    MOV [0x02d828cc],EAX                ; 004dced9 | g_StoredCameraValue
    RET                                 ; 004dcede

