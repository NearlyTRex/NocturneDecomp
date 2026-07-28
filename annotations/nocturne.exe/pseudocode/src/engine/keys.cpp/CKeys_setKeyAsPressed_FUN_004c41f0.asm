; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004c41f0(CKeys *this_ptr,EInputCodeType key_code)
;
; Parameters:
; CKeys *          Stack[0x4]:4   this_ptr
; EInputCodeType   Stack[0x8]:4   key_code
;
; XREF[1]:
;   core_game.cpp_CGame_resetKeyState_FUN_0049e8b0 at 0049e8f2
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004c41f0
        ;   Label: engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004c41f0
    MOV byte ptr [EAX + 0x1c02598],0x1  ; 004c41f4
    RET                                 ; 004c41fb

