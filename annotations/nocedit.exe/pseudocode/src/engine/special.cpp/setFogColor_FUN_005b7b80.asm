; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_setFogColor_FUN_005b7b80(int red,int green,int blue)
;
; Parameters:
; int              Stack[0x4]:4   red
; int              Stack[0x8]:4   green
; int              Stack[0xc]:4   blue
;
; XREF[3]:
;   core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0 at 00453c7d
;   core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00453640 at 0045368a
;   engine_2d.c_setSolidColor_FUN_004033a0 at 00403418
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   APIDLL_setFogColor* g_APIDLL_setFogColor
;   int g_FogColorRed
;   int g_FogColorGreen
;   int g_FogColorBlue
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b7b80
        ;   Label: engine_special.cpp_setFogColor_FUN_005b7b80
    MOV EAX,dword ptr [ESP + 0x8]       ; 005b7b81
    MOV EDX,dword ptr [ESP + 0xc]       ; 005b7b85
    MOV ECX,dword ptr [ESP + 0x10]      ; 005b7b89
    MOV EBX,dword ptr [0x02d03e94]      ; 005b7b8d | g_UseExternalRenderer
    MOV dword ptr [0x03f6b984],EDX      ; 005b7b93 | g_FogColorGreen
    MOV dword ptr [0x03f6b988],ECX      ; 005b7b99 | g_FogColorBlue
    MOV [0x03f6b980],EAX                ; 005b7b9f | g_FogColorRed
    TEST EBX,EBX                        ; 005b7ba4
    JNZ 0x005b7bac                      ; 005b7ba6
        ;   XREF to: 005b7bac (CONDITIONAL_JUMP)  ; LAB_005b7bac
    XOR EAX,EAX                         ; 005b7ba8
    POP EBX                             ; 005b7baa
    RET                                 ; 005b7bab
    PUSH ECX                            ; 005b7bac
        ;   Label: LAB_005b7bac
    PUSH EDX                            ; 005b7bad
    PUSH EAX                            ; 005b7bae
    CALL dword ptr [0x03f6b8f0]         ; 005b7baf | g_APIDLL_setFogColor
    ADD ESP,0xc                         ; 005b7bb5
    POP EBX                             ; 005b7bb8
    RET                                 ; 005b7bb9

