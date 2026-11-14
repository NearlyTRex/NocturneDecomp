; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_texture_cpp_enableTextureFiltering_FUN_005750a0(int enabled)
;
; Parameters:
; int              Stack[0x4]:4   enabled
;
; Referenced Globals:
;   undefined4 DAT_006141c4
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005750a0
        ;   Label: engine_texture.cpp_enableTextureFiltering_FUN_005750a0
    MOV [0x006141c4],EAX                ; 005750a4 | DAT_006141c4
    RET                                 ; 005750a9

