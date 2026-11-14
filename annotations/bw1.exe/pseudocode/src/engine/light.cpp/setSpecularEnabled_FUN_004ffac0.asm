; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_light_cpp_setSpecularEnabled_FUN_004ffac0(int enabled)
;
; Parameters:
; int              Stack[0x4]:4   enabled
;
; Referenced Globals:
;   undefined4 DAT_0061f314
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ffac0
        ;   Label: engine_light.cpp_setSpecularEnabled_FUN_004ffac0
    MOV [0x0061f314],EAX                ; 004ffac4 | DAT_0061f314
    RET                                 ; 004ffac9

