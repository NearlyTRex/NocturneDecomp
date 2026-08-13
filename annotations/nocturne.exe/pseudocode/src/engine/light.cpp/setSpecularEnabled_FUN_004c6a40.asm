; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_light_cpp_setSpecularEnabled_FUN_004c6a40(int enabled)
;
; Parameters:
; int              Stack[0x4]:4   enabled
;
; Referenced Globals:
;   undefined4 DAT_005bacd4
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c6a40
        ;   Label: engine_light.cpp_setSpecularEnabled_FUN_004c6a40
    MOV [0x005bacd4],EAX                ; 004c6a44 | DAT_005bacd4
    RET                                 ; 004c6a49

