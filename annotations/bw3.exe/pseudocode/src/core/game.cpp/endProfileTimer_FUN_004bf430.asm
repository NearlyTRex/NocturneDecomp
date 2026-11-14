; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_endProfileTimer_FUN_004bf430(char *timer_name)
;
; Parameters:
; char *           Stack[0x4]:4   timer_name
;
; Referenced Globals:
;   undefined4 DAT_005c39c0
;   undefined4 DAT_005c39c8
;   undefined4 DAT_005c39d0
;   CConsole* g_CConsolePtr = 007f7ea4
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 DAT_01d22c98
;
; Called Functions:
;   engine_console.cpp_CConsole_printf_FUN_00441ff0
;   wincore_winrun.cpp_getTime_FUN_005806a0
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 004bf430
        ;   Label: core_game.cpp_endProfileTimer_FUN_004bf430
    MOV EAX,[0x005fe9dc]                ; 004bf433 | g_CGamePtr
    CMP dword ptr [EAX + 0x230],0x1     ; 004bf438
    JZ 0x004bf445                       ; 004bf43f
        ;   XREF to: 004bf445 (CONDITIONAL_JUMP)  ; LAB_004bf445
    ADD ESP,0xc                         ; 004bf441
    RET                                 ; 004bf444
    PUSH ESI                            ; 004bf445
        ;   Label: LAB_004bf445
    PUSH EBX                            ; 004bf446
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 004bf447
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV ECX,dword ptr [0x01d22c98]      ; 004bf44c | DAT_01d22c98
    SUB EAX,ECX                         ; 004bf452
    MOV dword ptr [ESP + 0x10],EAX      ; 004bf454
    FILD dword ptr [ESP + 0x10]         ; 004bf458
    FMUL double ptr [0x005c39c0]        ; 004bf45c | DAT_005c39c0
    MOV EAX,[0x005fe9dc]                ; 004bf462 | g_CGamePtr
    FMUL double ptr [0x005c39c8]        ; 004bf467 | DAT_005c39c8
    FLD float ptr [EAX + 0x314]         ; 004bf46d
    FXCH                                ; 004bf473
    FMUL double ptr [0x005c39d0]        ; 004bf475 | DAT_005c39d0
    FDIVRP                              ; 004bf47b
    SUB ESP,0x8                         ; 004bf47d
    MOV EBX,dword ptr [ESP + 0x20]      ; 004bf480
    FSTP double ptr [ESP]               ; 004bf484
    PUSH EBX                            ; 004bf487
    PUSH 0x5c39b0                       ; 004bf488
    MOV ESI,dword ptr [0x005f1690]      ; 004bf48d | g_CConsolePtr
    PUSH ESI                            ; 004bf493
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 004bf494
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0x14                        ; 004bf499
    POP EBX                             ; 004bf49c
    POP ESI                             ; 004bf49d
    ADD ESP,0xc                         ; 004bf49e
    RET                                 ; 004bf4a1

