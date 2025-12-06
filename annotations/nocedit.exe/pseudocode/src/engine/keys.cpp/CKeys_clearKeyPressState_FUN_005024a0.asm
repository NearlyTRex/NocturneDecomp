; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys * this, int keyCode)
;
; Parameters:
; CKeys *          Stack[0x4]:4   this
; int              Stack[0x8]:4   keyCode
;
; XREF[1]:
;   core_game.cpp_CGame_resetKeyState_FUN_004dbe60 at 004dc145
;
; Referenced Globals:
;   char[256] g_KeyboardState
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005024a0
        ;   Label: engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0
    XOR DL,DL                           ; 005024a4
    MOV byte ptr [EAX + 0x2d03e98],DL   ; 005024a6 | char[256] g_KeyboardState
    RET                                 ; 005024ac

