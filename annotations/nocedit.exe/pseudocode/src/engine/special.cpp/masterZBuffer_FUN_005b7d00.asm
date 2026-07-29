; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_masterZBuffer_FUN_005b7d00(int z_buffer_mode)
;
; Parameters:
; int              Stack[0x4]:4   z_buffer_mode
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0 at 0044cf0f
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80 at 0044cc55
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   APIDLL_masterZBuffer* g_APIDLL_masterZBuffer
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02d03e94],0x0      ; 005b7d00 | g_UseExternalRenderer
        ;   Label: engine_special.cpp_masterZBuffer_FUN_005b7d00
    JNZ 0x005b7d0c                      ; 005b7d07
        ;   XREF to: 005b7d0c (CONDITIONAL_JUMP)  ; LAB_005b7d0c
    XOR EAX,EAX                         ; 005b7d09
    RET                                 ; 005b7d0b
    MOV ECX,dword ptr [ESP + 0x4]       ; 005b7d0c
        ;   Label: LAB_005b7d0c
    PUSH ECX                            ; 005b7d10
    CALL dword ptr [0x03f6b90c]         ; 005b7d11 | g_APIDLL_masterZBuffer
    ADD ESP,0x4                         ; 005b7d17
    RET                                 ; 005b7d1a

