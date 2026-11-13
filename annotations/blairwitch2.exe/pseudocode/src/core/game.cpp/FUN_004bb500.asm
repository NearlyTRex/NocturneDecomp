; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004bb500(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)
;
;
; XREF[2]:
;   core_game.cpp_CGame_ctor_FUN_004b2d80 at 004b2fda
;   core_script.cpp_CScript_step_FUN_00522350 at 00527baf
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004bb500
        ;   Label: core_game.cpp_FUN_004bb500
    MOV EDX,dword ptr [ESP + 0x8]       ; 004bb504
    MOV dword ptr [EAX + 0xaf8],EDX     ; 004bb508
    MOV EDX,dword ptr [ESP + 0xc]       ; 004bb50e
    MOV dword ptr [EAX + 0xafc],EDX     ; 004bb512
    MOV EDX,dword ptr [ESP + 0x10]      ; 004bb518
    MOV dword ptr [EAX + 0xb00],EDX     ; 004bb51c
    MOV EDX,dword ptr [ESP + 0x14]      ; 004bb522
    MOV dword ptr [EAX + 0xb08],EDX     ; 004bb526
    MOV EDX,dword ptr [ESP + 0x18]      ; 004bb52c
    MOV dword ptr [EAX + 0xb0c],EDX     ; 004bb530
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004bb536
    MOV dword ptr [EAX + 0xb10],EDX     ; 004bb53a
    MOV EDX,dword ptr [ESP + 0x20]      ; 004bb540
    MOV dword ptr [EAX + 0xb18],EDX     ; 004bb544
    RET                                 ; 004bb54a

