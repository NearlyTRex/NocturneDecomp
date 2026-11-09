; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_keys_cpp_CKeys_getKeyState_FUN_004df540(CKeys *this_ptr,EInputCodeType key_code)
;
; Parameters:
; CKeys *          Stack[0x4]:4   this_ptr
; EInputCodeType   Stack[0x8]:4   key_code
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004df540
        ;   Label: engine_keys.cpp_CKeys_getKeyState_FUN_004df540
    XOR EAX,EAX                         ; 004df544
    MOV AL,byte ptr [EDX + 0x1c6cef0]   ; 004df546
    RET                                 ; 004df54c

