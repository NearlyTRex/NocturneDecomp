; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004fd290(CKeys *this_ptr,EInputCodeType key_code)
;
; Parameters:
; CKeys *          Stack[0x4]:4   this_ptr
; EInputCodeType   Stack[0x8]:4   key_code
;
; XREF[1]:
;   core_game.cpp_CGame_resetKeyState_FUN_004d0960 at 004d09a2
;
; Referenced Globals:
;   undefined4 DAT_01c50950
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004fd290
        ;   Label: engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004fd290
    MOV byte ptr [EAX + 0x1c50950],0x1  ; 004fd294 | DAT_01c50950
    RET                                 ; 004fd29b

