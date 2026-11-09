; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_keys_cpp_CKeys_getAndClearKeyState_FUN_004dfe60(CKeys *this_ptr,EInputCodeType key_code)
;
; Parameters:
; CKeys *          Stack[0x4]:4   this_ptr
; EInputCodeType   Stack[0x8]:4   key_code
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dfe60
        ;   Label: engine_keys.cpp_CKeys_getAndClearKeyState_FUN_004dfe60
    MOV EDX,dword ptr [ESP + 0xc]       ; 004dfe61
    XOR EAX,EAX                         ; 004dfe65
    XOR BL,BL                           ; 004dfe67
    MOV AL,byte ptr [EDX + 0x1c37790]   ; 004dfe69
    MOV byte ptr [EDX + 0x1c37790],BL   ; 004dfe6f
    POP EBX                             ; 004dfe75
    RET                                 ; 004dfe76

