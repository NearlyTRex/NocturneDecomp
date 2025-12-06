; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char engine_keys.cpp_CKeys_getAndClearKeyState_FUN_00502430(CKeys * this, int keyCode)
;
; Parameters:
; CKeys *          Stack[0x4]:4   this
; int              Stack[0x8]:4   keyCode
;
; Referenced Globals:
;   char[256] g_KeyboardState
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502430
        ;   Label: engine_keys.cpp_CKeys_getAndClearKeyState_FUN_00502430
    MOV EDX,dword ptr [ESP + 0xc]       ; 00502431
    XOR EAX,EAX                         ; 00502435
    XOR BL,BL                           ; 00502437
    MOV AL,byte ptr [EDX + 0x2d03e98]   ; 00502439 | char[256] g_KeyboardState
    MOV byte ptr [EDX + 0x2d03e98],BL   ; 0050243f | char[256] g_KeyboardState
    POP EBX                             ; 00502445
    RET                                 ; 00502446

