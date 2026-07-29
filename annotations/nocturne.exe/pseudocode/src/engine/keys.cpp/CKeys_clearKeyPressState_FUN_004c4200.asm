; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_keys_cpp_CKeys_clearKeyPressState_FUN_004c4200(CKeys *this_ptr,EInputCodeType key_code)
;
; Parameters:
; CKeys *          Stack[0x4]:4   this_ptr
; EInputCodeType   Stack[0x8]:4   key_code
;
; XREF[1]:
;   core_game.cpp_CGame_resetKeyState_FUN_0049e8b0 at 0049ea67
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004c4200
        ;   Label: engine_keys.cpp_CKeys_clearKeyPressState_FUN_004c4200
    XOR DL,DL                           ; 004c4204
    MOV byte ptr [EAX + 0x1c02598],DL   ; 004c4206
    RET                                 ; 004c420c

