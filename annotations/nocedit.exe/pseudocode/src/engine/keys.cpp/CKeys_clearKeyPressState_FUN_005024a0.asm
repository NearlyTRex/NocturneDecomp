; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_keys_cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys *this_ptr,EInputCodeType key_code)
;
; Parameters:
; CKeys *          Stack[0x4]:4   this_ptr
; EInputCodeType   Stack[0x8]:4   key_code
;
; XREF[1]:
;   core_game.cpp_CGame_resetKeyState_FUN_004dbe60 at 004dc145
;
; Referenced Globals:
;   char[512] g_KeyboardState
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005024a0
        ;   Label: engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0
    XOR DL,DL                           ; 005024a4
    MOV byte ptr [EAX + 0x2d03e98],DL   ; 005024a6 | g_KeyboardState
    RET                                 ; 005024ac

