; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_keys_cpp_CKeys_getAndClearKeyState_FUN_004fd230(CKeys *this_ptr,EInputCodeType key_code)
;
; Parameters:
; CKeys *          Stack[0x4]:4   this_ptr
; EInputCodeType   Stack[0x8]:4   key_code
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd230
        ;   Label: engine_keys.cpp_CKeys_getAndClearKeyState_FUN_004fd230
    MOV EDX,dword ptr [ESP + 0xc]       ; 004fd231
    XOR EAX,EAX                         ; 004fd235
    XOR BL,BL                           ; 004fd237
    MOV AL,byte ptr [EDX + 0x1c50950]   ; 004fd239
    MOV byte ptr [EDX + 0x1c50950],BL   ; 004fd23f
    POP EBX                             ; 004fd245
    RET                                 ; 004fd246

