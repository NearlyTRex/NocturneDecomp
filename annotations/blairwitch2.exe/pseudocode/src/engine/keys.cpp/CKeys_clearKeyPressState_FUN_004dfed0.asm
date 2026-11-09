; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_keys_cpp_CKeys_clearKeyPressState_FUN_004dfed0(CKeys *this_ptr,EInputCodeType key_code)
;
; Parameters:
; CKeys *          Stack[0x4]:4   this_ptr
; EInputCodeType   Stack[0x8]:4   key_code
;
; XREF[1]:
;   core_game.cpp_CGame_resetKeyState_FUN_004b7140 at 004b72f7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004dfed0
        ;   Label: engine_keys.cpp_CKeys_clearKeyPressState_FUN_004dfed0
    XOR DL,DL                           ; 004dfed4
    MOV byte ptr [EAX + 0x1c37790],DL   ; 004dfed6
    RET                                 ; 004dfedc

