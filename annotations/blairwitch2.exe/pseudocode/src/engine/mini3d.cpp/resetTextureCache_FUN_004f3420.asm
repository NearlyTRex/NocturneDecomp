; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_resetTextureCache_FUN_004f3420(void)
;
;
; Referenced Globals:
;   int g_INT_01c37788
;   void* g_PTR_0264bcbc
;
; Called Functions:
;   engine_texture.cpp_clearTextureCache_FUN_00575010
;
; *****************************************************************************

section .text

    CALL engine_texture.cpp_clearTextureCache_FUN_00575010 ; 004f3420
        ;   XREF to: 00575010 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_clearTextureCache_FUN_00575010()
        ;   Label: engine_mini3d.cpp_resetTextureCache_FUN_004f3420
    CMP dword ptr [0x0264bcbc],0x0      ; 004f3425 | g_PTR_0264bcbc
    JZ 0x004f3437                       ; 004f342c
        ;   XREF to: 004f3437 (CONDITIONAL_JUMP)  ; LAB_004f3437
    CMP dword ptr [0x01c37788],0x0      ; 004f342e | g_INT_01c37788
    JNZ 0x004f3438                      ; 004f3435
        ;   XREF to: 004f3438 (CONDITIONAL_JUMP)  ; LAB_004f3438
    RET                                 ; 004f3437
        ;   Label: LAB_004f3437
    CALL dword ptr [0x0264bcbc]         ; 004f3438 | g_PTR_0264bcbc
        ;   Label: LAB_004f3438
    RET                                 ; 004f343e

