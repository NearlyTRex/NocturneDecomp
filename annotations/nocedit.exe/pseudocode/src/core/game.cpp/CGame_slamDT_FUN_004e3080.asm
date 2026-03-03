; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_slamDT_FUN_004e3080(CGame *this_ptr,float delta_time)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[5]:
;   core_fire.cpp_CSpark_process_FUN_004c0240 at 004c02aa
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da196
;   core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_00543800 at 00543830
;   core_stranger.cpp_CStranger_processFrame_FUN_005bb960 at 005bbac0
;   core_stranger.cpp_CStranger_process_FUN_005bb830 at 005bb8ad
;
; Referenced Globals:
;   TerminatedCString s_core_game_cpp_0062d3b7
;   TerminatedCString s_CGame_slamDT_invalid_dt_0062d3c8
;   float g_DeltaTimeScale = 65536
;   int g_GlobalDeltaTimeInt
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e3080
        ;   Label: core_game.cpp_CGame_slamDT_FUN_004e3080
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e3081
    FLD float ptr [ESP + 0xc]           ; 004e3085
    FLDZ                                ; 004e3089
    FCOMPP                              ; 004e308b
    FNSTSW AX                           ; 004e308d
    SAHF                                ; 004e308f
    JA 0x004e30c1                       ; 004e3090
        ;   XREF to: 004e30c1 (CONDITIONAL_JUMP)  ; LAB_004e30c1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e3092
        ;   Label: LAB_004e3092
    MOV dword ptr [EBX + 0x264],EAX     ; 004e3096
    FLD float ptr [EBX + 0x264]         ; 004e309c
    FMUL float ptr [0x0062d3e5]         ; 004e30a2 | g_DeltaTimeScale
    CALL crt_math.c_round_FUN_005fe6b0  ; 004e30a8
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBX + 0x260]       ; 004e30ad
    MOV EBX,dword ptr [EBX + 0x260]     ; 004e30b3
    MOV dword ptr [0x02cf6a80],EBX      ; 004e30b9 | g_GlobalDeltaTimeInt
    POP EBX                             ; 004e30bf
    RET                                 ; 004e30c0
    MOV EDX,0x62d3b7                    ; 004e30c1 | = "..\\core\\game.cpp"
        ;   Label: LAB_004e30c1
    MOV ECX,0x10ac                      ; 004e30c6
    PUSH 0x62d3c8                       ; 004e30cb | = "CGame::slamDT - invalid dt!"
    MOV dword ptr [0x02f0ca48],EDX      ; 004e30d0 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004e30d6 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004e30dc
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004e30e1
    JMP 0x004e3092                      ; 004e30e4
        ;   XREF to: 004e3092 (UNCONDITIONAL_JUMP)  ; LAB_004e3092

