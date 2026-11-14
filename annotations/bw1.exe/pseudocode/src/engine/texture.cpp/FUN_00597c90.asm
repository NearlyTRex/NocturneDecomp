; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_texture_cpp_FUN_00597c90(SMRGLTextureBasic *texture,SRGBColorPalette *palette)
;
; Parameters:
; SMRGLTextureBasic * Stack[0x4]:4   texture
; SRGBColorPalette * Stack[0x8]:4   palette
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_updateTexture_FUN_00484fb0 at 00484fba
;
; Referenced Globals:
;   undefined4 DAT_02c8a680
;
; Called Functions:
;   engine_texture.cpp_FUN_005976a0
;   engine_texture.cpp_FUN_00597a20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00597c90
        ;   Label: engine_texture.cpp_FUN_00597c90
    MOV EDX,dword ptr [ESP + 0x8]       ; 00597c91
    PUSH EDX                            ; 00597c95
    CALL engine_texture.cpp_FUN_00597a20 ; 00597c96
        ;   XREF to: 00597a20 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00597a20()
    ADD ESP,0x4                         ; 00597c9b
    MOV ECX,dword ptr [ESP + 0x8]       ; 00597c9e
    PUSH ECX                            ; 00597ca2
    MOV EBX,dword ptr [0x02c8a680]      ; 00597ca3 | DAT_02c8a680
    PUSH EBX                            ; 00597ca9
    CALL engine_texture.cpp_FUN_005976a0 ; 00597caa
        ;   XREF to: 005976a0 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_005976a0()
    ADD ESP,0x8                         ; 00597caf
    POP EBX                             ; 00597cb2
    RET                                 ; 00597cb3

