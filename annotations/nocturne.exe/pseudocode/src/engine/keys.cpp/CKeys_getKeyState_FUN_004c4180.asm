; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_keys_cpp_CKeys_getKeyState_FUN_004c4180(CKeys *this_ptr,EInputCodeType key_code)
;
; Parameters:
; CKeys *          Stack[0x4]:4   this_ptr
; EInputCodeType   Stack[0x8]:4   key_code
;
; Referenced Globals:
;   undefined4 DAT_01c02598
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004c4180
        ;   Label: engine_keys.cpp_CKeys_getKeyState_FUN_004c4180
    XOR EAX,EAX                         ; 004c4184
    MOV AL,byte ptr [EDX + 0x1c02598]   ; 004c4186 | DAT_01c02598
    RET                                 ; 004c418c

