; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_keys_cpp_CKeys_getKeyState_FUN_00502420(CKeys *this_ptr,EInputCodeType key_code)
;
; Parameters:
; CKeys *          Stack[0x4]:4   this_ptr
; EInputCodeType   Stack[0x8]:4   key_code
;
; Referenced Globals:
;   char[512] g_KeyboardState
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00502420
        ;   Label: engine_keys.cpp_CKeys_getKeyState_FUN_00502420
    XOR EAX,EAX                         ; 00502424
    MOV AL,byte ptr [EDX + 0x2d03e98]   ; 00502426 | g_KeyboardState
    RET                                 ; 0050242c

