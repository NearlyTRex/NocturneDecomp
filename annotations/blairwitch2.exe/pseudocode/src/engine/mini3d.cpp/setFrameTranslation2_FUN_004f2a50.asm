; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setFrameTranslation2_FUN_004f2a50(CVector3f *position)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   position
;
; Referenced Globals:
;   float g_FLOAT_01d098b0
;   float g_FLOAT_01d098b4
;   float g_FLOAT_01d098b8
;   void* g_PTR_01d09918
;   int g_INT_01d0c398
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f2a50
        ;   Label: engine_mini3d.cpp_setFrameTranslation2_FUN_004f2a50
    FLD float ptr [0x01d098b0]          ; 004f2a54 | g_FLOAT_01d098b0
    MOV EAX,[0x01d09918]                ; 004f2a5a | g_PTR_01d09918
    FSUB float ptr [EDX]                ; 004f2a5f
    FLD float ptr [0x01d098b4]          ; 004f2a61 | g_FLOAT_01d098b4
    FXCH                                ; 004f2a67
    FSTP float ptr [EAX + 0x24]         ; 004f2a69
    FSUB float ptr [EDX + 0x4]          ; 004f2a6c
    FLD float ptr [0x01d098b8]          ; 004f2a6f | g_FLOAT_01d098b8
    FXCH                                ; 004f2a75
    FSTP float ptr [EAX + 0x28]         ; 004f2a77
    FSUB float ptr [EDX + 0x8]          ; 004f2a7a
    MOV EDX,0x1                         ; 004f2a7d
    FSTP float ptr [EAX + 0x2c]         ; 004f2a82
    MOV dword ptr [0x01d0c398],EDX      ; 004f2a85 | g_INT_01d0c398
    RET                                 ; 004f2a8b

