; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPlayerInput * __cdecl core_netgame_cpp_CNetGame_getMyControls_FUN_005438c0(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_game.cpp_CGame_playerControls_FUN_004dbd80 at 004dbe15
;   core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70 at 004dce7b
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_0063dfbe
;   TerminatedCString s_CNetGame_getMyControls_I_0063dfd2
;   CHero*[4] g_HeroActors
;   int g_LocalHeroIndex
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005438c0
        ;   Label: core_netgame.cpp_CNetGame_getMyControls_FUN_005438c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005438c1
    CMP dword ptr [EBX],0x0             ; 005438c5
    JZ 0x005438ef                       ; 005438c8
        ;   XREF to: 005438ef (CONDITIONAL_JUMP)  ; LAB_005438ef
    CMP dword ptr [EBX + 0x114],0x0     ; 005438ca
    JL 0x00543902                       ; 005438d1
        ;   XREF to: 00543902 (CONDITIONAL_JUMP)  ; LAB_00543902
    MOV EAX,dword ptr [EBX + 0x114]     ; 005438d3
        ;   Label: LAB_005438d3
    SHL EAX,0x3                         ; 005438d9
    MOV EDX,EAX                         ; 005438dc
    SHL EAX,0x4                         ; 005438de
    SUB EAX,EDX                         ; 005438e1
    MOV EDX,EAX                         ; 005438e3
    LEA EAX,[EBX + 0x20]                ; 005438e5
    ADD EAX,EDX                         ; 005438e8
    ADD EAX,0x4c                        ; 005438ea
    POP EBX                             ; 005438ed
    RET                                 ; 005438ee
    MOV EAX,[0x02db87d0]                ; 005438ef | g_LocalHeroIndex
        ;   Label: LAB_005438ef
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 005438f4 | g_HeroActors
    ADD EAX,0xbe2c                      ; 005438fb
    POP EBX                             ; 00543900
    RET                                 ; 00543901
    PUSH EDI                            ; 00543902
        ;   Label: LAB_00543902
    PUSH ESI                            ; 00543903
    MOV ESI,0x63dfbe                    ; 00543904 | = "..\\core\\netgame.cpp"
    MOV EDI,0xa0f                       ; 00543909
    PUSH 0x63dfd2                       ; 0054390e | = "CNetGame::getMyControls - I'm not in ..."
    MOV dword ptr [0x02f0ca48],ESI      ; 00543913 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00543919 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054391f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00543924
    POP ESI                             ; 00543927
    POP EDI                             ; 00543928
    JMP 0x005438d3                      ; 00543929
        ;   XREF to: 005438d3 (UNCONDITIONAL_JUMP)  ; LAB_005438d3

