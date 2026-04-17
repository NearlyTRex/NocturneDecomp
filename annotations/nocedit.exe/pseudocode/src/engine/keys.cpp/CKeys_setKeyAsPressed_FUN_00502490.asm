; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_keys_cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys *this_ptr,EInputCodeType key_code)
;
; Parameters:
; CKeys *          Stack[0x4]:4   this_ptr
; EInputCodeType   Stack[0x8]:4   key_code
;
; XREF[1]:
;   core_game.cpp_CGame_resetKeyState_FUN_004dbe60 at 004dbea2
;
; Referenced Globals:
;   char[4952] g_KeyboardState
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00502490
        ;   Label: engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490
    MOV byte ptr [EAX + 0x2d03e98],0x1  ; 00502494 | g_KeyboardState
    RET                                 ; 0050249b

