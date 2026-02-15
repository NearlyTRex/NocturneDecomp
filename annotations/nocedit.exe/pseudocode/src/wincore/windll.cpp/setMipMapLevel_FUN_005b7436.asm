; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_windll_cpp_setMipMapLevel_FUN_005b7436(int mipmap_level)
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

    LEA EAX,[EAX]                       ; 005b7436
        ;   Label: wincore_windll.cpp_setMipMapLevel_FUN_005b7436
    LEA EDX,[EDX]                       ; 005b743c
    CMP dword ptr [0x02d03e94],0x0      ; 005b7440 | g_UseExternalRenderer
    JNZ 0x005b744c                      ; 005b7447
        ;   XREF to: 005b744c (CONDITIONAL_JUMP)  ; LAB_005b744c
    XOR EAX,EAX                         ; 005b7449
    RET                                 ; 005b744b
    MOV ECX,dword ptr [ESP + 0x4]       ; 005b744c
        ;   Label: LAB_005b744c
    PUSH ECX                            ; 005b7450
    CALL dword ptr [0x03f6b8c4]         ; 005b7451 | g_APIDLL_setMipMapLevel
    ADD ESP,0x4                         ; 005b7457
    RET                                 ; 005b745a

