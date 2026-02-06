; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_cloth_cpp_calcLightAttenuation_FUN_0043e2a0(float dist_sq)
;
; Parameters:
; float            Stack[0x4]:4   dist_sq
;
; Referenced Globals:
;   int g_LightAttenuationMax
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043e2a0
        ;   Label: core_cloth.cpp_calcLightAttenuation_FUN_0043e2a0
    MOV EDX,dword ptr [0x02d7a7bc]      ; 0043e2a4 | g_LightAttenuationMax
    SAR EAX,0x1                         ; 0043e2aa
    SUB EDX,EAX                         ; 0043e2ac
    MOV EAX,EDX                         ; 0043e2ae
    RET                                 ; 0043e2b0

