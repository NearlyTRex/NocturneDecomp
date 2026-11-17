; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_light_cpp_setDirectionalLightVector_FUN_004ffa90(int dir_x,int dir_y,int dir_z)
;
; Parameters:
; int              Stack[0x4]:4   dir_x
; int              Stack[0x8]:4   dir_y
; int              Stack[0xc]:4   dir_z
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_scaleAndSetDirectionalLight_FUN_00483a40 at 00483a8a
;   engine_drender.cpp_CDemonRenderer_setLightDirection_FUN_00483a20 at 00483a30
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

    MOV EDX,dword ptr [ESP + 0x4]       ; 004ffa90
        ;   Label: engine_light.cpp_setDirectionalLightVector_FUN_004ffa90
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ffa94
    MOV ECX,dword ptr [ESP + 0xc]       ; 004ffa98
    MOV dword ptr [0x01c51d50],EDX      ; 004ffa9c | g_LightDirectionX
    MOV [0x01d1c224],EAX                ; 004ffaa2 | g_LightDirectionY2
    MOV [0x01c51d54],EAX                ; 004ffaa7 | g_LightDirectionY
    MOV dword ptr [0x01d1c228],ECX      ; 004ffaac | g_LightDirectionZ2
    MOV dword ptr [0x01c51d58],ECX      ; 004ffab2 | g_LightDirectionZ
    MOV dword ptr [0x01d1c220],EDX      ; 004ffab8 | g_LightDirectionX2
    RET                                 ; 004ffabe

