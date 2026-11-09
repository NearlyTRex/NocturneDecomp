; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004dfec0(CKeys *this_ptr,EInputCodeType key_code)
;
; Parameters:
; CKeys *          Stack[0x4]:4   this_ptr
; EInputCodeType   Stack[0x8]:4   key_code
;
; XREF[1]:
;   core_game.cpp_CGame_resetKeyState_FUN_004b7140 at 004b7182
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004dfec0
        ;   Label: engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004dfec0
    MOV byte ptr [EAX + 0x1c37790],0x1  ; 004dfec4
    RET                                 ; 004dfecb

