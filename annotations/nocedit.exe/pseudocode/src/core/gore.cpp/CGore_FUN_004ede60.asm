; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_gore.cpp_CGore_FUN_004ede60(CGore * this_ptr)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_FUN_004e07a0 at 004e07c6
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   SMRGLTextureBasic DAT_0067b9b0
;   SMRGLTextureBasic DAT_0067b9c8
;   SMRGLTextureBasic DAT_0067b9e0
;   SMRGLTextureBasic DAT_0067ba28
;   SMRGLTextureBasic DAT_0067ba40
;   SMRGLTextureBasic DAT_0067bba8
;   SMRGLTextureBasic DAT_0067c028
;   SMRGLTextureBasic DAT_0067c040
;   SMRGLTextureBasic DAT_0067c2e0
;   SMRGLTextureBasic DAT_0067cb28
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ede60
        ;   Label: core_gore.cpp_CGore_FUN_004ede60
    PUSH ESI                            ; 004ede61
    PUSH EDI                            ; 004ede62
    PUSH EBP                            ; 004ede63
    PUSH 0x67b9b0                       ; 004ede64 | SMRGLTextureBasic DAT_0067b9b0
    MOV EDX,dword ptr [0x006703ec]      ; 004ede69 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDX                            ; 004ede6f | CDemonRenderer g_CDemonRendererInstance
    MOV EBX,0x67b9c8                    ; 004ede70 | SMRGLTextureBasic DAT_0067b9c8
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004ede75 | void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)
    LEA ESI,[EBX + 0x60]                ; 004ede7a | SMRGLTextureBasic DAT_0067ba28
    ADD ESP,0x8                         ; 004ede7d
    PUSH EBX                            ; 004ede80 | SMRGLTextureBasic DAT_0067b9c8 | DAT_0067b9e0
        ;   Label: LAB_004ede80
    MOV ECX,dword ptr [0x006703ec]      ; 004ede81 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH ECX                            ; 004ede87 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004ede88 | void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)
    ADD EBX,0x18                        ; 004ede8d | SMRGLTextureBasic DAT_0067b9e0
    ADD ESP,0x8                         ; 004ede90
    CMP EBX,ESI                         ; 004ede93
    JNZ 0x004ede80                      ; 004ede95 | LAB_004ede80
        ;   XREF to: 004ede80 (CONDITIONAL_JUMP)
    MOV EBP,0x67ba28                    ; 004ede97 | SMRGLTextureBasic DAT_0067ba28
    XOR EDI,EDI                         ; 004ede9c
    ADD EBP,0x180                       ; 004ede9e
    IMUL EBX,EDI,0x180                  ; 004edea4
        ;   Label: LAB_004edea4
    MOV ESI,EBP                         ; 004edeaa
    ADD EBX,0x67ba28                    ; 004edeac | SMRGLTextureBasic DAT_0067bba8 | SMRGLTextureBasic DAT_0067ba28
    PUSH EBX                            ; 004edeb2 | SMRGLTextureBasic DAT_0067ba28 | DAT_0067ba40 | DAT_0067bba8
        ;   Label: LAB_004edeb2
    MOV EAX,[0x006703ec]                ; 004edeb3 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EAX                            ; 004edeb8 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004edeb9 | void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)
    ADD EBX,0x18                        ; 004edebe | SMRGLTextureBasic DAT_0067ba40
    ADD ESP,0x8                         ; 004edec1
    CMP EBX,ESI                         ; 004edec4
    JNZ 0x004edeb2                      ; 004edec6 | LAB_004edeb2
        ;   XREF to: 004edeb2 (CONDITIONAL_JUMP)
    INC EDI                             ; 004edec8
    ADD EBP,0x180                       ; 004edec9
    CMP EDI,0x4                         ; 004edecf
    JL 0x004edea4                       ; 004eded2 | LAB_004edea4
        ;   XREF to: 004edea4 (CONDITIONAL_JUMP)
    MOV EBP,0x67c028                    ; 004eded4 | SMRGLTextureBasic DAT_0067c028
    XOR EDI,EDI                         ; 004eded9
    ADD EBP,0x2b8                       ; 004ededb
    IMUL EBX,EDI,0x2b8                  ; 004edee1
        ;   Label: LAB_004edee1
    MOV ESI,EBP                         ; 004edee7
    ADD EBX,0x67c028                    ; 004edee9 | SMRGLTextureBasic DAT_0067c2e0 | SMRGLTextureBasic DAT_0067c028
    PUSH EBX                            ; 004edeef | SMRGLTextureBasic DAT_0067c028 | DAT_0067c040 | DAT_0067c2e0
        ;   Label: LAB_004edeef
    MOV EDX,dword ptr [0x006703ec]      ; 004edef0 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDX                            ; 004edef6 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004edef7 | void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)
    ADD EBX,0x18                        ; 004edefc | SMRGLTextureBasic DAT_0067c040
    ADD ESP,0x8                         ; 004edeff
    CMP EBX,ESI                         ; 004edf02
    JNZ 0x004edeef                      ; 004edf04 | LAB_004edeef
        ;   XREF to: 004edeef (CONDITIONAL_JUMP)
    INC EDI                             ; 004edf06
    ADD EBP,0x2b8                       ; 004edf07
    CMP EDI,0x4                         ; 004edf0d
    JL 0x004edee1                       ; 004edf10 | LAB_004edee1
        ;   XREF to: 004edee1 (CONDITIONAL_JUMP)
    PUSH 0x67cb28                       ; 004edf12 | SMRGLTextureBasic DAT_0067cb28
    MOV ECX,dword ptr [0x006703ec]      ; 004edf17 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH ECX                            ; 004edf1d | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004edf1e | void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004edf23
    POP EBP                             ; 004edf26
    POP EDI                             ; 004edf27
    POP ESI                             ; 004edf28
    POP EBX                             ; 004edf29
    RET                                 ; 004edf2a

