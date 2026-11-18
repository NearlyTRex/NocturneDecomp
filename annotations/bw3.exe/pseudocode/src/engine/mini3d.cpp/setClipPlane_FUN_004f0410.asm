; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setClipPlane_FUN_004f0410(float a,float b,float c,float d)
;
; Parameters:
; float            Stack[0x4]:4   a
; float            Stack[0x8]:4   b
; float            Stack[0xc]:4   c
; float            Stack[0x10]:4   d
;
; Referenced Globals:
;   float g_FLOAT_01d7a69c
;   float g_FLOAT_01d7a6a0
;   float g_FLOAT_01d7a6a4
;   float g_FLOAT_01d7a6a8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f0410
        ;   Label: engine_mini3d.cpp_setClipPlane_FUN_004f0410
    MOV [0x01d7a69c],EAX                ; 004f0414 | g_FLOAT_01d7a69c
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f0419
    MOV [0x01d7a6a0],EAX                ; 004f041d | g_FLOAT_01d7a6a0
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f0422
    MOV [0x01d7a6a4],EAX                ; 004f0426 | g_FLOAT_01d7a6a4
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f042b
    MOV [0x01d7a6a8],EAX                ; 004f042f | g_FLOAT_01d7a6a8
    RET                                 ; 004f0434

