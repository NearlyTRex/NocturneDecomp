; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_keys_cpp_CKeys_getKeyState_FUN_004dfe50(CKeys *this_ptr,EInputCodeType key_code)
;
; Parameters:
; CKeys *          Stack[0x4]:4   this_ptr
; EInputCodeType   Stack[0x8]:4   key_code
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004dfe50
        ;   Label: engine_keys.cpp_CKeys_getKeyState_FUN_004dfe50
    XOR EAX,EAX                         ; 004dfe54
    MOV AL,byte ptr [EDX + 0x1c37790]   ; 004dfe56
    RET                                 ; 004dfe5c

