; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_texture_cpp_enableTextureFiltering_FUN_00597cc0(int enabled)
;
; Parameters:
; int              Stack[0x4]:4   enabled
;
; Referenced Globals:
;   undefined4 DAT_0061b4a4
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00597cc0
        ;   Label: engine_texture.cpp_enableTextureFiltering_FUN_00597cc0
    MOV [0x0061b4a4],EAX                ; 00597cc4 | DAT_0061b4a4
    RET                                 ; 00597cc9

