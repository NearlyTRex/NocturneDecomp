; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_game.cpp_CGame_playerControls_FUN_004dbd80(CGame * this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db398
;
; Referenced Globals:
;   TerminatedCString s_core_game_cpp_0062b835
;   TerminatedCString s_CGame_playerControls_unk_0062b846
;   CNetGame* g_CNetGameInstance = 02f7c740
;   CDemonSet* g_CDemonSetPtr = 03114278
;   char[256] g_KeyboardState
;   undefined4 CHAR_ARRAY_02d03e9c
;   char[600] g_PrevKeyboardState
;   undefined4 CHAR_ARRAY_02d82674
;   int g_InputResetFlag
;   int g_StoredCameraValue
;   int g_CheatSystemEnabled
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   undefined4 DAT_02f7c740
;   undefined4 g_CDemonSetInstance.selected_camera_index
;
; Called Functions:
;   core_game.cpp_CallToJoystickStuff_FUN_004dc230
;   core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70
;   core_game.cpp_KeypressesAndCGame_FUN_004dc3e0
;   core_game.cpp_SettingCursorPos_FUN_004dccc0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_netgame.cpp_CNetGame_getMyControls_FUN_005438c0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004dbd80
        ;   Label: core_game.cpp_CGame_playerControls_FUN_004dbd80
    PUSH EBP                            ; 004dbd81
    MOV ESI,dword ptr [ESP + 0xc]       ; 004dbd82
    CMP dword ptr [0x02d828d0],0x0      ; 004dbd86 | int g_CheatSystemEnabled
    JNZ 0x004dbda8                      ; 004dbd8d | LAB_004dbda8
        ;   XREF to: 004dbda8 (CONDITIONAL_JUMP)
    CMP dword ptr [ESI + 0x1fc],0x0     ; 004dbd8f
    JNZ 0x004dbda5                      ; 004dbd96 | LAB_004dbda5
        ;   XREF to: 004dbda5 (CONDITIONAL_JUMP)
    CMP dword ptr [ESI + 0x238],0x0     ; 004dbd98
    JZ 0x004dbe0d                       ; 004dbd9f | LAB_004dbe0d
        ;   XREF to: 004dbe0d (CONDITIONAL_JUMP)
    POP EBP                             ; 004dbda5
        ;   Label: LAB_004dbda5
    POP ESI                             ; 004dbda6
    RET                                 ; 004dbda7
    PUSH ESI                            ; 004dbda8
        ;   Label: LAB_004dbda8
    CALL core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70 ; 004dbda9 | void core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(CGame * this_ptr)
        ;   XREF to: 004dce70 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004dbdae
    POP EBP                             ; 004dbdb1
    POP ESI                             ; 004dbdb2
    RET                                 ; 004dbdb3
    PUSH EDX                            ; 004dbdb4
        ;   Label: LAB_004dbdb4
    PUSH ESI                            ; 004dbdb5
    CALL core_game.cpp_KeypressesAndCGame_FUN_004dc3e0 ; 004dbdb6 | void core_game.cpp_KeypressesAndCGame_FUN_004dc3e0(CGame * game, SPlayerControl * ctrl)
        ;   XREF to: 004dc3e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004dbdbb
        ;   Label: LAB_004dbdbb
    MOV ECX,0x258                       ; 004dbdbe
        ;   Label: LAB_004dbdbe
    MOV ESI,0x2d03e98                   ; 004dbdc3 | char[256] g_KeyboardState
    MOV EDI,0x2d82670                   ; 004dbdc8 | char[600] g_PrevKeyboardState
    PUSH EDI                            ; 004dbdcd | char[600] g_PrevKeyboardState
    MOV EAX,ECX                         ; 004dbdce
    SHR ECX,0x2                         ; 004dbdd0
    MOVSD.REP ES:EDI,ESI                ; 004dbdd3 | char[600] g_PrevKeyboardState | char[256] g_KeyboardState
    MOV CL,AL                           ; 004dbdd5
    AND CL,0x3                          ; 004dbdd7
    MOVSB.REP ES:EDI,ESI                ; 004dbdda | char[600] g_PrevKeyboardState | char[256] g_KeyboardState
    POP EDI                             ; 004dbddc
    MOV EAX,[0x02cf6a94]                ; 004dbddd | int g_MouseButtonFlags
    MOV [0x02d828c8],EAX                ; 004dbde2 | int g_InputResetFlag
    MOV EAX,[0x006810c8]                ; 004dbde7 | CDemonSet * g_CDemonSetPtr
    MOV EAX,dword ptr [EAX + 0x15aea4]  ; 004dbdec | g_CDemonSetInstance.selected_camera_index
    MOV [0x02d828cc],EAX                ; 004dbdf2 | int g_StoredCameraValue
    POP EDI                             ; 004dbdf7
    POP EBP                             ; 004dbdf8
    POP ESI                             ; 004dbdf9
    RET                                 ; 004dbdfa
    PUSH EDX                            ; 004dbdfb
        ;   Label: LAB_004dbdfb
    PUSH ESI                            ; 004dbdfc
    CALL core_game.cpp_CallToJoystickStuff_FUN_004dc230 ; 004dbdfd | void core_game.cpp_CallToJoystickStuff_FUN_004dc230(CGame * this_ptr, int unk1, SPlayerControl * unk)
        ;   XREF to: 004dc230 (UNCONDITIONAL_CALL)
    JMP 0x004dbdbb                      ; 004dbe02 | LAB_004dbdbb
        ;   XREF to: 004dbdbb (UNCONDITIONAL_JUMP)
    PUSH EDX                            ; 004dbe04
        ;   Label: LAB_004dbe04
    PUSH ESI                            ; 004dbe05
    CALL core_game.cpp_SettingCursorPos_FUN_004dccc0 ; 004dbe06 | void core_game.cpp_SettingCursorPos_FUN_004dccc0(CGame * game, SPlayerControl * ctrl)
        ;   XREF to: 004dccc0 (UNCONDITIONAL_CALL)
    JMP 0x004dbdbb                      ; 004dbe0b | LAB_004dbdbb
        ;   XREF to: 004dbdbb (UNCONDITIONAL_JUMP)
    PUSH EDI                            ; 004dbe0d
        ;   Label: LAB_004dbe0d
    MOV EDI,dword ptr [0x00680a00]      ; 004dbe0e | CNetGame * g_CNetGameInstance
    PUSH EDI                            ; 004dbe14 | undefined4 DAT_02f7c740
    CALL core_netgame.cpp_CNetGame_getMyControls_FUN_005438c0 ; 004dbe15 | void * * core_netgame.cpp_CNetGame_getMyControls_FUN_005438c0(CNetGame * this_ptr)
        ;   XREF to: 005438c0 (UNCONDITIONAL_CALL)
    MOV EDX,EAX                         ; 004dbe1a
    MOV EAX,dword ptr [ESI + 0xbc]      ; 004dbe1c
    ADD ESP,0x4                         ; 004dbe22
    CMP EAX,0x1                         ; 004dbe25
    JNC 0x004dbe30                      ; 004dbe28 | LAB_004dbe30
        ;   XREF to: 004dbe30 (CONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 004dbe2a
    JZ 0x004dbdb4                       ; 004dbe2c | LAB_004dbdb4
        ;   XREF to: 004dbdb4 (CONDITIONAL_JUMP)
    JMP 0x004dbe37                      ; 004dbe2e | LAB_004dbe37
        ;   XREF to: 004dbe37 (UNCONDITIONAL_JUMP)
    JBE 0x004dbe04                      ; 004dbe30 | LAB_004dbe04
        ;   Label: LAB_004dbe30
        ;   XREF to: 004dbe04 (CONDITIONAL_JUMP)
    CMP EAX,0x2                         ; 004dbe32
    JZ 0x004dbdfb                       ; 004dbe35 | LAB_004dbdfb
        ;   XREF to: 004dbdfb (CONDITIONAL_JUMP)
    MOV EBP,0x62b835                    ; 004dbe37 | = "..\\core\\game.cpp" | s_core_game_cpp_0062b835 = ..\core\game.cpp
        ;   Label: LAB_004dbe37
    MOV EAX,0x728                       ; 004dbe3c
    PUSH 0x62b846                       ; 004dbe41 | = "CGame::playerControls - unknown contr..." | s_CGame_playerControls_unk_0062b846 = CGame::playerControls - unknown control type
    MOV dword ptr [0x02f0ca48],EBP      ; 004dbe46 | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 004dbe4c | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004dbe51 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004dbe56
    JMP 0x004dbdbe                      ; 004dbe59 | LAB_004dbdbe
        ;   XREF to: 004dbdbe (UNCONDITIONAL_JUMP)

