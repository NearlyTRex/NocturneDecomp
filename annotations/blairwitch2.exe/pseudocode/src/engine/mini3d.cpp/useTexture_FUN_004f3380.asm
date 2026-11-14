; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_useTexture_FUN_004f3380(int texture)
;
; Parameters:
; int              Stack[0x4]:4   texture
;
; XREF[3]:
;   engine_font.cpp_FUN_004a97a0 at 004a97f2
;   engine_mini3d.cpp_fillRect_FUN_004f90d0 at 004f92ec
;   engine_mini3d.cpp_useDefaultTexture_FUN_004f9330 at 004f9335
;
; Referenced Globals:
;   undefined4 DAT_01d0d2b4
;
; Called Functions:
;   engine_texture.cpp_FUN_00574e00
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01d0d2b4],0x0      ; 004f3380 | DAT_01d0d2b4
        ;   Label: engine_mini3d.cpp_useTexture_FUN_004f3380
    JZ 0x004f338a                       ; 004f3387
        ;   XREF to: 004f338a (CONDITIONAL_JUMP)  ; LAB_004f338a
    RET                                 ; 004f3389
    MOV ECX,dword ptr [ESP + 0x4]       ; 004f338a
        ;   Label: LAB_004f338a
    PUSH ECX                            ; 004f338e
    CALL engine_texture.cpp_FUN_00574e00 ; 004f338f
        ;   XREF to: 00574e00 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00574e00()
    ADD ESP,0x4                         ; 004f3394
    RET                                 ; 004f3397

