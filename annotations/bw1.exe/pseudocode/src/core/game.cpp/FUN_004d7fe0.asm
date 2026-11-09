; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004d7fe0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005e33bc
;   undefined4 DAT_005e33c4
;   undefined4 DAT_005e33cc
;   CConsole* g_CConsolePtr = 007db5f0
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 DAT_01cd0c90
;
; Called Functions:
;   engine_console.cpp_FUN_00445430
;   wincore_winrun.cpp_FUN_005b2420
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 004d7fe0
        ;   Label: core_game.cpp_FUN_004d7fe0
    MOV EAX,[0x0061d95c]                ; 004d7fe3 | g_CGamePtr
    CMP dword ptr [EAX + 0x228],0x1     ; 004d7fe8
    JZ 0x004d7ff5                       ; 004d7fef
        ;   XREF to: 004d7ff5 (CONDITIONAL_JUMP)  ; LAB_004d7ff5
    ADD ESP,0xc                         ; 004d7ff1
    RET                                 ; 004d7ff4
    PUSH ESI                            ; 004d7ff5
        ;   Label: LAB_004d7ff5
    PUSH EBX                            ; 004d7ff6
    CALL wincore_winrun.cpp_FUN_005b2420 ; 004d7ff7
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b2420()
    MOV ECX,dword ptr [0x01cd0c90]      ; 004d7ffc | DAT_01cd0c90
    SUB EAX,ECX                         ; 004d8002
    MOV dword ptr [ESP + 0x10],EAX      ; 004d8004
    FILD dword ptr [ESP + 0x10]         ; 004d8008
    FMUL double ptr [0x005e33bc]        ; 004d800c | DAT_005e33bc
    MOV EAX,[0x0061d95c]                ; 004d8012 | g_CGamePtr
    FMUL double ptr [0x005e33c4]        ; 004d8017 | DAT_005e33c4
    FLD float ptr [EAX + 0x294]         ; 004d801d
    FXCH                                ; 004d8023
    FMUL double ptr [0x005e33cc]        ; 004d8025 | DAT_005e33cc
    FDIVRP                              ; 004d802b
    SUB ESP,0x8                         ; 004d802d
    MOV EBX,dword ptr [ESP + 0x20]      ; 004d8030
    FSTP double ptr [ESP]               ; 004d8034
    PUSH EBX                            ; 004d8037
    PUSH 0x5e33ac                       ; 004d8038
    MOV ESI,dword ptr [0x00611100]      ; 004d803d | g_CConsolePtr
    PUSH ESI                            ; 004d8043
    CALL engine_console.cpp_FUN_00445430 ; 004d8044
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x14                        ; 004d8049
    POP EBX                             ; 004d804c
    POP ESI                             ; 004d804d
    ADD ESP,0xc                         ; 004d804e
    RET                                 ; 004d8051

