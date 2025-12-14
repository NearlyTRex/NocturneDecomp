; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_game.cpp_FUN_004e3110()
;
; Local Variables:
; undefined8       Stack[-0x1c]:8  local_1c
; undefined4       Stack[-0x4]:4  local_4
;
; Referenced Globals:
;   TerminatedCString s_s_3_2f_ms_0062d3e9
;   double DOUBLE_0062d3fd = 0.0555555555555556
;   double DOUBLE_0062d405 = 0.0000152587890625
;   double DOUBLE_0062d40d = 1000
;   CConsole* g_CConsolePtr = 0083b1a4
;   CGame* g_CGamePtr = 02d81a9c
;   CConsole g_ConsolePtr
;   CGame g_CGameInstance
;   undefined4 DAT_02d81ca8
;   undefined4 g_CGameInstance.delta_time_float
;   int g_ProfileStartTime
;
; Called Functions:
;   engine_console.cpp_CConsole_printf_FUN_00441890
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 004e3110
        ;   Label: core_game.cpp_FUN_004e3110
    MOV EAX,[0x0067b654]                ; 004e3113 | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0x20c],0x1     ; 004e3118 | DAT_02d81ca8
    JZ 0x004e3125                       ; 004e311f
        ;   XREF to: 004e3125 (CONDITIONAL_JUMP)  ; LAB_004e3125
    ADD ESP,0xc                         ; 004e3121
    RET                                 ; 004e3124
    PUSH ESI                            ; 004e3125
        ;   Label: LAB_004e3125
    PUSH EBX                            ; 004e3126
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004e3127
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV ECX,dword ptr [0x02d831fc]      ; 004e312c | g_ProfileStartTime
    SUB EAX,ECX                         ; 004e3132
    MOV dword ptr [ESP + 0x10],EAX      ; 004e3134
    FILD dword ptr [ESP + 0x10]         ; 004e3138
    FMUL double ptr [0x0062d3fd]        ; 004e313c | DOUBLE_0062d3fd
    MOV EAX,[0x0067b654]                ; 004e3142 | g_CGamePtr
    FMUL double ptr [0x0062d405]        ; 004e3147 | DOUBLE_0062d405
    FLD float ptr [EAX + 0x264]         ; 004e314d | g_CGameInstance.delta_time_float
    FXCH                                ; 004e3153
    FMUL double ptr [0x0062d40d]        ; 004e3155 | DOUBLE_0062d40d
    FDIVRP                              ; 004e315b
    SUB ESP,0x8                         ; 004e315d
    MOV EBX,dword ptr [ESP + 0x20]      ; 004e3160
    FSTP double ptr [ESP]               ; 004e3164
    PUSH EBX                            ; 004e3167
    PUSH 0x62d3e9                       ; 004e3168 | = "%s : %3.2f ms\n"
    MOV ESI,dword ptr [0x0066e8e0]      ; 004e316d | g_CConsolePtr
    PUSH ESI                            ; 004e3173 | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004e3174
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x14                        ; 004e3179
    POP EBX                             ; 004e317c
    POP ESI                             ; 004e317d
    ADD ESP,0xc                         ; 004e317e
    RET                                 ; 004e3181

