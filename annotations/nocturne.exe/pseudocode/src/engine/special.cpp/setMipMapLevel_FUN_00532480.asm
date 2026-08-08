; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_setMipMapLevel_FUN_00532480(int mipmap_level)
;
; Parameters:
; int              Stack[0x4]:4   mipmap_level
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   APIDLL_setMipMapLevel* g_APIDLL_setMipMapLevel
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c02594],0x0      ; 00532480 | g_UseExternalRenderer
        ;   Label: engine_special.cpp_setMipMapLevel_FUN_00532480
    JNZ 0x0053248c                      ; 00532487
        ;   XREF to: 0053248c (CONDITIONAL_JUMP)  ; LAB_0053248c
    XOR EAX,EAX                         ; 00532489
    RET                                 ; 0053248b
    MOV ECX,dword ptr [ESP + 0x4]       ; 0053248c
        ;   Label: LAB_0053248c
    PUSH ECX                            ; 00532490
    CALL dword ptr [0x02dc9da4]         ; 00532491 | g_APIDLL_setMipMapLevel
    ADD ESP,0x4                         ; 00532497
    RET                                 ; 0053249a

