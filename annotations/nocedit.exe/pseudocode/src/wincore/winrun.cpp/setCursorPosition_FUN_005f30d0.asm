; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void wincore_winrun.cpp_setCursorPosition_FUN_005f30d0(int x, int y)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
;
; XREF[4]:
;   core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70 at 004dcec6
;   core_game.cpp_SettingCursorPos_FUN_004dccc0 at 004dcd2b
;   core_menu.cpp_adjustMouseSensitivity_FUN_005107c0 at 0051084a
;   shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0 at 004a61e3
;
; Referenced Globals:
;   SetCursorPos* g_SetCursorPosFunc = 00211bb8
;   int g_MouseX
;   int g_MouseY
;
; Called Functions:
;   SetCursorPos
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005f30d0
        ;   Label: wincore_winrun.cpp_setCursorPosition_FUN_005f30d0
    PUSH EDX                            ; 005f30d4
    MOV ECX,dword ptr [ESP + 0x8]       ; 005f30d5
    PUSH ECX                            ; 005f30d9
    CALL dword ptr CS:[0x6114e0]        ; 005f30da | g_SetCursorPosFunc
    MOV EAX,dword ptr [ESP + 0x4]       ; 005f30e1
    MOV [0x02cf6a8c],EAX                ; 005f30e5 | g_MouseX
    MOV EAX,dword ptr [ESP + 0x8]       ; 005f30ea
    MOV [0x02cf6a90],EAX                ; 005f30ee | g_MouseY
    RET                                 ; 005f30f3

