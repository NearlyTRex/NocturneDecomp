; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_texture_cpp_FUN_0056ac80(SMRGLTextureBasic *texture,SRGBColorPalette *palette)
;
; Parameters:
; SMRGLTextureBasic * Stack[0x4]:4   texture
; SRGBColorPalette * Stack[0x8]:4   palette
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_updateTexture_FUN_0046e690 at 0046e69a
;
; Referenced Globals:
;   undefined4 DAT_02cfd0d0
;
; Called Functions:
;   engine_texture.cpp_FUN_0056a690
;   engine_texture.cpp_FUN_0056aa10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056ac80
        ;   Label: engine_texture.cpp_FUN_0056ac80
    MOV EDX,dword ptr [ESP + 0x8]       ; 0056ac81
    PUSH EDX                            ; 0056ac85
    CALL engine_texture.cpp_FUN_0056aa10 ; 0056ac86
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_0056aa10()
    ADD ESP,0x4                         ; 0056ac8b
    MOV ECX,dword ptr [ESP + 0x8]       ; 0056ac8e
    PUSH ECX                            ; 0056ac92
    MOV EBX,dword ptr [0x02cfd0d0]      ; 0056ac93 | DAT_02cfd0d0
    PUSH EBX                            ; 0056ac99
    CALL engine_texture.cpp_FUN_0056a690 ; 0056ac9a
        ;   XREF to: 0056a690 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_0056a690()
    ADD ESP,0x8                         ; 0056ac9f
    POP EBX                             ; 0056aca2
    RET                                 ; 0056aca3

