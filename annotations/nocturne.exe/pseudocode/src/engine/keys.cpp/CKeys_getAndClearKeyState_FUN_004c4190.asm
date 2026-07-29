; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_keys_cpp_CKeys_getAndClearKeyState_FUN_004c4190(CKeys *this_ptr,EInputCodeType key_code)
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

    PUSH EBX                            ; 004c4190
        ;   Label: engine_keys.cpp_CKeys_getAndClearKeyState_FUN_004c4190
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c4191
    XOR EAX,EAX                         ; 004c4195
    XOR BL,BL                           ; 004c4197
    MOV AL,byte ptr [EDX + 0x1c02598]   ; 004c4199 | DAT_01c02598
    MOV byte ptr [EDX + 0x1c02598],BL   ; 004c419f | DAT_01c02598
    POP EBX                             ; 004c41a5
    RET                                 ; 004c41a6

