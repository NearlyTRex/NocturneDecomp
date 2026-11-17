; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_light_cpp_setDirectionalLightVector_FUN_004e0b50(int dir_x,int dir_y,int dir_z)
;
; Parameters:
; int              Stack[0x4]:4   dir_x
; int              Stack[0x8]:4   dir_y
; int              Stack[0xc]:4   dir_z
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_scaleAndSetDirectionalLight_FUN_0046d120 at 0046d16a
;   engine_drender.cpp_CDemonRenderer_setLightDirection_FUN_0046d100 at 0046d110
;
; Referenced Globals:
;   int g_LightDirectionX
;   int g_LightDirectionY
;   int g_LightDirectionZ
;   int g_LightDirectionX2
;   int g_LightDirectionY2
;   int g_LightDirectionZ2
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e0b50
        ;   Label: engine_light.cpp_setDirectionalLightVector_FUN_004e0b50
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e0b54
    MOV ECX,dword ptr [ESP + 0xc]       ; 004e0b58
    MOV dword ptr [0x01c6e2f0],EDX      ; 004e0b5c | g_LightDirectionX
    MOV [0x01d70c3c],EAX                ; 004e0b62 | g_LightDirectionY2
    MOV [0x01c6e2f4],EAX                ; 004e0b67 | g_LightDirectionY
    MOV dword ptr [0x01d70c40],ECX      ; 004e0b6c | g_LightDirectionZ2
    MOV dword ptr [0x01c6e2f8],ECX      ; 004e0b72 | g_LightDirectionZ
    MOV dword ptr [0x01d70c38],EDX      ; 004e0b78 | g_LightDirectionX2
    RET                                 ; 004e0b7e

