; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_setCursorPosition_FUN_0058ed10(int x,int y)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
;
; XREF[6]:
;   core_game.cpp_CGame_processMouseControls_FUN_004b80a0 at 004b810b
;   core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004b8250 at 004b82ca
;   core_menu.cpp_FUN_004eba50 at 004ebada
;   core_menu.cpp_FUN_004ebf10 at 004ec9d9
;   core_menu.cpp_adjustMouseSensitivity_FUN_004eb7c0 at 004eb84a
;   shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00484900 at 004849a7
;
; Referenced Globals:
;   void* PTR_SetCursorPos_005c84e8 = 001c8bb2
;   undefined4 DAT_01c2a37c
;   undefined4 DAT_01c2a380
;
; Called Functions:
;   SetCursorPos
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0058ed10
        ;   Label: wincore_winrun.cpp_setCursorPosition_FUN_0058ed10
    PUSH EDX                            ; 0058ed14
    MOV ECX,dword ptr [ESP + 0x8]       ; 0058ed15
    PUSH ECX                            ; 0058ed19
    CALL dword ptr CS:[0x5c84e8]        ; 0058ed1a | PTR_SetCursorPos_005c84e8
    MOV EAX,dword ptr [ESP + 0x4]       ; 0058ed21
    MOV [0x01c2a37c],EAX                ; 0058ed25 | DAT_01c2a37c
    MOV EAX,dword ptr [ESP + 0x8]       ; 0058ed2a
    MOV [0x01c2a380],EAX                ; 0058ed2e | DAT_01c2a380
    RET                                 ; 0058ed33

