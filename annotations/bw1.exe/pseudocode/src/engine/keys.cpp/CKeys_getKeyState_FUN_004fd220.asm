; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_keys_cpp_CKeys_getKeyState_FUN_004fd220(CKeys *this_ptr,EInputCodeType key_code)
;
; Parameters:
; CKeys *          Stack[0x4]:4   this_ptr
; EInputCodeType   Stack[0x8]:4   key_code
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004fd220
        ;   Label: engine_keys.cpp_CKeys_getKeyState_FUN_004fd220
    XOR EAX,EAX                         ; 004fd224
    MOV AL,byte ptr [EDX + 0x1c50950]   ; 004fd226
    RET                                 ; 004fd22c

