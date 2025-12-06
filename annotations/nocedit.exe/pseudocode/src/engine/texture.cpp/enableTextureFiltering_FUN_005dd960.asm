; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_texture.cpp_enableTextureFiltering_FUN_005dd960(int enabled)
;
; Parameters:
; int              Stack[0x4]:4   enabled
;
; Referenced Globals:
;   int g_TextureFilteringEnabled = 0x1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005dd960
        ;   Label: engine_texture.cpp_enableTextureFiltering_FUN_005dd960
    MOV [0x006793a0],EAX                ; 005dd964 | int g_TextureFilteringEnabled
    RET                                 ; 005dd969

