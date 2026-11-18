; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setExtraRenderFlags_FUN_004f3560(int value)
;
; Parameters:
; int              Stack[0x4]:4   value
;
; Referenced Globals:
;   int g_INT_01d0985c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f3560
        ;   Label: engine_mini3d.cpp_setExtraRenderFlags_FUN_004f3560
    MOV [0x01d0985c],EAX                ; 004f3564 | g_INT_01d0985c
    RET                                 ; 004f3569

