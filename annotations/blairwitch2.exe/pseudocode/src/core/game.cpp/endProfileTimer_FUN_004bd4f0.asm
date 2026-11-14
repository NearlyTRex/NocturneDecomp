; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_endProfileTimer_FUN_004bd4f0(char *timer_name)
;
; Parameters:
; char *           Stack[0x4]:4   timer_name
;
; Referenced Globals:
;   undefined4 DAT_005d8863
;   undefined4 DAT_005d886b
;   undefined4 DAT_005d8873
;   CConsole* g_CConsolePtr = 007c158c
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 DAT_01cb8118
;
; Called Functions:
;   engine_console.cpp_CConsole_printf_FUN_00436710
;   wincore_winrun.cpp_getTime_FUN_0058e9e0
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 004bd4f0
        ;   Label: core_game.cpp_endProfileTimer_FUN_004bd4f0
    MOV EAX,[0x00616494]                ; 004bd4f3 | g_CGamePtr
    CMP dword ptr [EAX + 0x228],0x1     ; 004bd4f8
    JZ 0x004bd505                       ; 004bd4ff
        ;   XREF to: 004bd505 (CONDITIONAL_JUMP)  ; LAB_004bd505
    ADD ESP,0xc                         ; 004bd501
    RET                                 ; 004bd504
    PUSH ESI                            ; 004bd505
        ;   Label: LAB_004bd505
    PUSH EBX                            ; 004bd506
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 004bd507
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_0058e9e0()
    MOV ECX,dword ptr [0x01cb8118]      ; 004bd50c | DAT_01cb8118
    SUB EAX,ECX                         ; 004bd512
    MOV dword ptr [ESP + 0x10],EAX      ; 004bd514
    FILD dword ptr [ESP + 0x10]         ; 004bd518
    FMUL double ptr [0x005d8863]        ; 004bd51c | DAT_005d8863
    MOV EAX,[0x00616494]                ; 004bd522 | g_CGamePtr
    FMUL double ptr [0x005d886b]        ; 004bd527 | DAT_005d886b
    FLD float ptr [EAX + 0x284]         ; 004bd52d
    FXCH                                ; 004bd533
    FMUL double ptr [0x005d8873]        ; 004bd535 | DAT_005d8873
    FDIVRP                              ; 004bd53b
    SUB ESP,0x8                         ; 004bd53d
    MOV EBX,dword ptr [ESP + 0x20]      ; 004bd540
    FSTP double ptr [ESP]               ; 004bd544
    PUSH EBX                            ; 004bd547
    PUSH 0x5d884f                       ; 004bd548
    MOV ESI,dword ptr [0x00609ed0]      ; 004bd54d | g_CConsolePtr
    PUSH ESI                            ; 004bd553
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 004bd554
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0x14                        ; 004bd559
    POP EBX                             ; 004bd55c
    POP ESI                             ; 004bd55d
    ADD ESP,0xc                         ; 004bd55e
    RET                                 ; 004bd561

