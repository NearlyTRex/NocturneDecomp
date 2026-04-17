; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_keys_cpp_CKeys_getAndClearKeyState_FUN_00502430(CKeys *this_ptr,EInputCodeType key_code)
;
; Parameters:
; CKeys *          Stack[0x4]:4   this_ptr
; EInputCodeType   Stack[0x8]:4   key_code
;
; Referenced Globals:
;   char[4952] g_KeyboardState
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502430
        ;   Label: engine_keys.cpp_CKeys_getAndClearKeyState_FUN_00502430
    MOV EDX,dword ptr [ESP + 0xc]       ; 00502431
    XOR EAX,EAX                         ; 00502435
    XOR BL,BL                           ; 00502437
    MOV AL,byte ptr [EDX + 0x2d03e98]   ; 00502439 | g_KeyboardState
    MOV byte ptr [EDX + 0x2d03e98],BL   ; 0050243f | g_KeyboardState
    POP EBX                             ; 00502445
    RET                                 ; 00502446

