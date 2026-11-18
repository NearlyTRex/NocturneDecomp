; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setFrameTranslation2_FUN_005117e0(CVector3f *position)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   position
;
; Referenced Globals:
;   float g_FLOAT_01d22510
;   float g_FLOAT_01d22514
;   float g_FLOAT_01d22518
;   void* g_PTR_01d2257c
;   int g_INT_01d24ffc
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005117e0
        ;   Label: engine_mini3d.cpp_setFrameTranslation2_FUN_005117e0
    FLD float ptr [0x01d22510]          ; 005117e4 | g_FLOAT_01d22510
    MOV EAX,[0x01d2257c]                ; 005117ea | g_PTR_01d2257c
    FSUB float ptr [EDX]                ; 005117ef
    FLD float ptr [0x01d22514]          ; 005117f1 | g_FLOAT_01d22514
    FXCH                                ; 005117f7
    FSTP float ptr [EAX + 0x24]         ; 005117f9
    FSUB float ptr [EDX + 0x4]          ; 005117fc
    FLD float ptr [0x01d22518]          ; 005117ff | g_FLOAT_01d22518
    FXCH                                ; 00511805
    FSTP float ptr [EAX + 0x28]         ; 00511807
    FSUB float ptr [EDX + 0x8]          ; 0051180a
    MOV EDX,0x1                         ; 0051180d
    FSTP float ptr [EAX + 0x2c]         ; 00511812
    MOV dword ptr [0x01d24ffc],EDX      ; 00511815 | g_INT_01d24ffc
    RET                                 ; 0051181b

