; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_texture_cpp_FUN_00574e00(int param_1)
;
;
; XREF[13]:
;   core_charactr.cpp_CCharacter_renderEthereal_FUN_00426730 at 004267cf
;   core_cloth.cpp_CCloth_render_FUN_005b0fe0 at 005b1077
;   core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_00448b00 at 00448bf9
;   core_flies.cpp_CFlies_renderOpaque_FUN_004a70b0 at 004a726c
;   core_inv.cpp_loadAssets_FUN_004da990 at 004dab4d
;   engine_3d.c_dispatchMRGLToRenderer_FUN_004079f0 at 00407af2
;   engine_3d.c_updateAnimatedTexture_FUN_004050e0 at 0040514d
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 at 0046ca07
;   engine_mini3d.cpp_FUN_004f3380 at 004f338f
;   engine_texture.cpp_FUN_00575070 at 00575076
;   ... and 3 more
;
; Referenced Globals:
;   undefined4 DAT_0070ca74
;   undefined4 DAT_02652eac
;   undefined4 DAT_02652eb0
;
; Called Functions:
;   engine_texture.cpp_CTextureCache_loadTexture_FUN_00573b80
;   engine_texture.cpp_FUN_00574490
;   engine_texture.cpp_FUN_00574520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574e00
        ;   Label: engine_texture.cpp_FUN_00574e00
    PUSH EDI                            ; 00574e01
    MOV EBX,dword ptr [ESP + 0xc]       ; 00574e02
    MOV EDX,dword ptr [0x0070ca74]      ; 00574e06 | DAT_0070ca74
    LEA EAX,[EBX + 0x18]                ; 00574e0c
    XOR EDI,EDI                         ; 00574e0f
    TEST EDX,EDX                        ; 00574e11
    JNZ 0x00574e1b                      ; 00574e13
        ;   XREF to: 00574e1b (CONDITIONAL_JUMP)  ; LAB_00574e1b
    CMP byte ptr [EBX + 0x8],0x0        ; 00574e15
    JNZ 0x00574e1e                      ; 00574e19
        ;   XREF to: 00574e1e (CONDITIONAL_JUMP)  ; LAB_00574e1e
    POP EDI                             ; 00574e1b
        ;   Label: LAB_00574e1b
    POP EBX                             ; 00574e1c
    RET                                 ; 00574e1d
    PUSH ESI                            ; 00574e1e
        ;   Label: LAB_00574e1e
    LEA ESI,[EBX + 0x8]                 ; 00574e1f
    MOV EAX,dword ptr [EBX + 0x4]       ; 00574e22
    PUSH ESI                            ; 00574e25
    AND EAX,0xffff                      ; 00574e26
    PUSH EAX                            ; 00574e2b
    MOV ECX,dword ptr [0x02652eb0]      ; 00574e2c | DAT_02652eb0
    PUSH ECX                            ; 00574e32
    CALL engine_texture.cpp_FUN_00574490 ; 00574e33
        ;   XREF to: 00574490 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00574490()
    MOV EDX,EAX                         ; 00574e38
    ADD ESP,0xc                         ; 00574e3a
    CMP EAX,-0x1                        ; 00574e3d
    JNZ 0x00574e57                      ; 00574e40
        ;   XREF to: 00574e57 (CONDITIONAL_JUMP)  ; LAB_00574e57
    PUSH ESI                            ; 00574e42
    MOV ESI,dword ptr [0x02652eb0]      ; 00574e43 | DAT_02652eb0
    PUSH ESI                            ; 00574e49
    MOV EDI,0x1                         ; 00574e4a
    CALL engine_texture.cpp_CTextureCache_loadTexture_FUN_00573b80 ; 00574e4f
        ;   XREF to: 00573b80 (UNCONDITIONAL_CALL)  ; int engine_texture.cpp_CTextureCache_loadTexture_FUN_00573b80(CTextureCache * this_ptr, char * texture_name)
    ADD ESP,0x8                         ; 00574e54
    MOV dword ptr [EBX + 0x4],EAX       ; 00574e57
        ;   Label: LAB_00574e57
    PUSH EDI                            ; 00574e5a
    PUSH EBX                            ; 00574e5b
    MOV EDI,dword ptr [0x02652eb0]      ; 00574e5c | DAT_02652eb0
    PUSH EDI                            ; 00574e62
    MOV [0x02652eac],EAX                ; 00574e63 | DAT_02652eac
    CALL engine_texture.cpp_FUN_00574520 ; 00574e68
        ;   XREF to: 00574520 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00574520()
    ADD ESP,0xc                         ; 00574e6d
    LEA EAX,[EBX + 0x18]                ; 00574e70
    POP ESI                             ; 00574e73
    POP EDI                             ; 00574e74
    POP EBX                             ; 00574e75
    RET                                 ; 00574e76

