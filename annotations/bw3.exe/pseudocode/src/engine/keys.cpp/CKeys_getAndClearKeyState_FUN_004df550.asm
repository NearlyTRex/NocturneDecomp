; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_keys_cpp_CKeys_getAndClearKeyState_FUN_004df550(CKeys *this_ptr,EInputCodeType key_code)
;
; Parameters:
; CKeys *          Stack[0x4]:4   this_ptr
; EInputCodeType   Stack[0x8]:4   key_code
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004df550
        ;   Label: engine_keys.cpp_CKeys_getAndClearKeyState_FUN_004df550
    MOV EDX,dword ptr [ESP + 0xc]       ; 004df551
    XOR EAX,EAX                         ; 004df555
    XOR BL,BL                           ; 004df557
    MOV AL,byte ptr [EDX + 0x1c6cef0]   ; 004df559
    MOV byte ptr [EDX + 0x1c6cef0],BL   ; 004df55f
    POP EBX                             ; 004df565
    RET                                 ; 004df566

