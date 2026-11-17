; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_light_cpp_setDirectionalLightVector_FUN_004e2600(int dir_x,int dir_y,int dir_z)
;
; Parameters:
; int              Stack[0x4]:4   dir_x
; int              Stack[0x8]:4   dir_y
; int              Stack[0xc]:4   dir_z
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_scaleAndSetDirectionalLight_FUN_0046b540 at 0046b58a
;   engine_drender.cpp_CDemonRenderer_setLightDirection_FUN_0046b520 at 0046b530
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

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e2600
        ;   Label: engine_light.cpp_setDirectionalLightVector_FUN_004e2600
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e2604
    MOV ECX,dword ptr [ESP + 0xc]       ; 004e2608
    MOV dword ptr [0x01c38b90],EDX      ; 004e260c | g_LightDirectionX
    MOV [0x01d03508],EAX                ; 004e2612 | g_LightDirectionY2
    MOV [0x01c38b94],EAX                ; 004e2617 | g_LightDirectionY
    MOV dword ptr [0x01d0350c],ECX      ; 004e261c | g_LightDirectionZ2
    MOV dword ptr [0x01c38b98],ECX      ; 004e2622 | g_LightDirectionZ
    MOV dword ptr [0x01d03504],EDX      ; 004e2628 | g_LightDirectionX2
    RET                                 ; 004e262e

