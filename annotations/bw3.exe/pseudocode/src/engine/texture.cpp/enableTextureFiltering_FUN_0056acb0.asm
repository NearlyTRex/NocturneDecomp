; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_texture_cpp_enableTextureFiltering_FUN_0056acb0(int enabled)
;
; Parameters:
; int              Stack[0x4]:4   enabled
;
; Referenced Globals:
;   undefined4 DAT_005fba24
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056acb0
        ;   Label: engine_texture.cpp_enableTextureFiltering_FUN_0056acb0
    MOV [0x005fba24],EAX                ; 0056acb4 | DAT_005fba24
    RET                                 ; 0056acb9

