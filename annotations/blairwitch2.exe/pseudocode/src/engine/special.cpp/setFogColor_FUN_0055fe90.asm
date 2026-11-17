; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_setFogColor_FUN_0055fe90(int red,int green,int blue)
;
; Parameters:
; int              Stack[0x4]:4   red
; int              Stack[0x8]:4   green
; int              Stack[0xc]:4   blue
;
; XREF[3]:
;   core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00443180 at 0044322d
;   core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00442bf0 at 00442c3a
;   engine_2d.c_setSolidColor_FUN_004033f0 at 00403468
;
; Referenced Globals:
;   int g_INT_01c37788
;   void* g_PTR_0264bc1c
;   int g_FogColorRed
;   int g_FogColorGreen
;   int g_FogColorBlue
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055fe90
        ;   Label: engine_special.cpp_setFogColor_FUN_0055fe90
    MOV EAX,dword ptr [ESP + 0x8]       ; 0055fe91
    MOV EDX,dword ptr [ESP + 0xc]       ; 0055fe95
    MOV ECX,dword ptr [ESP + 0x10]      ; 0055fe99
    MOV EBX,dword ptr [0x01c37788]      ; 0055fe9d | g_INT_01c37788
    MOV dword ptr [0x0264bce8],EDX      ; 0055fea3 | g_FogColorGreen
    MOV dword ptr [0x0264bcec],ECX      ; 0055fea9 | g_FogColorBlue
    MOV [0x0264bce4],EAX                ; 0055feaf | g_FogColorRed
    TEST EBX,EBX                        ; 0055feb4
    JNZ 0x0055febc                      ; 0055feb6
        ;   XREF to: 0055febc (CONDITIONAL_JUMP)  ; LAB_0055febc
    XOR EAX,EAX                         ; 0055feb8
    POP EBX                             ; 0055feba
    RET                                 ; 0055febb
    PUSH ECX                            ; 0055febc
        ;   Label: LAB_0055febc
    PUSH EDX                            ; 0055febd
    PUSH EAX                            ; 0055febe
    CALL dword ptr [0x0264bc1c]         ; 0055febf | g_PTR_0264bc1c
    ADD ESP,0xc                         ; 0055fec5
    POP EBX                             ; 0055fec8
    RET                                 ; 0055fec9

