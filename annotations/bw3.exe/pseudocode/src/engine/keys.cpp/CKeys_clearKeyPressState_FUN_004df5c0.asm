; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_keys_cpp_CKeys_clearKeyPressState_FUN_004df5c0(CKeys *this_ptr,EInputCodeType key_code)
;
; Parameters:
; CKeys *          Stack[0x4]:4   this_ptr
; EInputCodeType   Stack[0x8]:4   key_code
;
; XREF[1]:
;   core_game.cpp_CGame_resetKeyState_FUN_004b93e0 at 004b9597
;
; Referenced Globals:
;   undefined4 DAT_01c6cef0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004df5c0
        ;   Label: engine_keys.cpp_CKeys_clearKeyPressState_FUN_004df5c0
    XOR DL,DL                           ; 004df5c4
    MOV byte ptr [EAX + 0x1c6cef0],DL   ; 004df5c6 | DAT_01c6cef0
    RET                                 ; 004df5cc

