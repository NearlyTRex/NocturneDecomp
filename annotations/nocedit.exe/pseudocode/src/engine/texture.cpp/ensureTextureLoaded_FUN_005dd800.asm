; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * __cdecl engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(SMRGLTextureBasic *texture)
;
; Parameters:
; SMRGLTextureBasic * Stack[0x4]:4   texture
;
; XREF[14]:
;   core_charactr.cpp_CCharacter_renderEthereal_FUN_0042af60 at 0042afff
;   core_cloth.cpp_CCloth_render_FUN_0043bae0 at 0043bb77
;   core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0 at 004716d9
;   core_flies.cpp_CFlies_renderOpaque_FUN_004cc300 at 004cc4a5
;   engine_3d.c_dispatchMRGLToRenderer_FUN_00407aa0 at 00407ba2
;   engine_3d.c_updateAnimatedTexture_FUN_004050c0 at 0040512d
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 at 0048db87
;   engine_font.cpp_CBitFont_render3DCharacter_FUN_004ce2d0 at 004ce32d
;   engine_model.c_loadMRGLTextures_FUN_00528870 at 0052889d
;   engine_texture.cpp_loadAndUpdateTexture_FUN_005dd930 at 005dd936
;   ... and 4 more
;
; Referenced Globals:
;   int g_TexturesDisabled
;   byte* g_CurrentPalette
;   int g_UseExternalRenderer
;   int g_CurrentTextureIndex
;   CTextureCache* g_TextureCacheInstance
;
; Called Functions:
;   engine_texture.cpp_CTextureCache_findTexture_FUN_005dd180
;   engine_texture.cpp_CTextureCache_loadTexture_FUN_005dcc00
;   engine_texture.cpp_CTextureCache_setupTexture_FUN_005dd200
;   wincore_windll.cpp_selectTexture_FUN_005b7340
;   wincore_windll.cpp_updateTexture_FUN_005b7380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dd800
        ;   Label: engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
    PUSH ESI                            ; 005dd801
    PUSH EBP                            ; 005dd802
    MOV EBX,dword ptr [ESP + 0x10]      ; 005dd803
    MOV EDX,dword ptr [0x00772a74]      ; 005dd807 | g_TexturesDisabled
    LEA EAX,[EBX + 0x18]                ; 005dd80d
    XOR ESI,ESI                         ; 005dd810
    TEST EDX,EDX                        ; 005dd812
    JNZ 0x005dd81c                      ; 005dd814
        ;   XREF to: 005dd81c (CONDITIONAL_JUMP)  ; LAB_005dd81c
    CMP byte ptr [EBX + 0x8],0x0        ; 005dd816
    JNZ 0x005dd820                      ; 005dd81a
        ;   XREF to: 005dd820 (CONDITIONAL_JUMP)  ; LAB_005dd820
    POP EBP                             ; 005dd81c
        ;   Label: LAB_005dd81c
    POP ESI                             ; 005dd81d
    POP EBX                             ; 005dd81e
    RET                                 ; 005dd81f
    PUSH EDI                            ; 005dd820
        ;   Label: LAB_005dd820
    LEA EDI,[EBX + 0x8]                 ; 005dd821
    MOV EAX,dword ptr [EBX + 0x4]       ; 005dd824
    PUSH EDI                            ; 005dd827
    AND EAX,0xffff                      ; 005dd828
    PUSH EAX                            ; 005dd82d
    MOV ECX,dword ptr [0x03f87358]      ; 005dd82e | g_TextureCacheInstance
    PUSH ECX                            ; 005dd834
    CALL engine_texture.cpp_CTextureCache_findTexture_FUN_005dd180 ; 005dd835
        ;   XREF to: 005dd180 (UNCONDITIONAL_CALL)  ; int engine_texture.cpp_CTextureCache_findTexture_FUN_005dd180(CTextureCache * this_ptr, int hint_index, char * texture_name)
    MOV EDX,EAX                         ; 005dd83a
    ADD ESP,0xc                         ; 005dd83c
    CMP EAX,-0x1                        ; 005dd83f
    JNZ 0x005dd859                      ; 005dd842
        ;   XREF to: 005dd859 (CONDITIONAL_JUMP)  ; LAB_005dd859
    PUSH EDI                            ; 005dd844
    MOV ESI,dword ptr [0x03f87358]      ; 005dd845 | g_TextureCacheInstance
    PUSH ESI                            ; 005dd84b
    CALL engine_texture.cpp_CTextureCache_loadTexture_FUN_005dcc00 ; 005dd84c
        ;   XREF to: 005dcc00 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_CTextureCache_loadTexture_FUN_005dcc00(CTextureCache * cache, char * texture_name)
    MOV ESI,0x1                         ; 005dd851
    ADD ESP,0x8                         ; 005dd856
    MOV dword ptr [EBX + 0x4],EAX       ; 005dd859
        ;   Label: LAB_005dd859
    PUSH EAX                            ; 005dd85c
    MOV EDI,dword ptr [0x03f87358]      ; 005dd85d | g_TextureCacheInstance
    PUSH EDI                            ; 005dd863
    MOV [0x03f87354],EAX                ; 005dd864 | g_CurrentTextureIndex
    CALL engine_texture.cpp_CTextureCache_setupTexture_FUN_005dd200 ; 005dd869
        ;   XREF to: 005dd200 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_CTextureCache_setupTexture_FUN_005dd200(CTextureCache * cache, int texture_index)
    MOV EBP,dword ptr [0x02d03e94]      ; 005dd86e | g_UseExternalRenderer
    ADD ESP,0x8                         ; 005dd874
    TEST EBP,EBP                        ; 005dd877
    JZ 0x005dd88f                       ; 005dd879
        ;   XREF to: 005dd88f (CONDITIONAL_JUMP)  ; LAB_005dd88f
    TEST ESI,ESI                        ; 005dd87b
    JNZ 0x005dd897                      ; 005dd87d
        ;   XREF to: 005dd897 (CONDITIONAL_JUMP)  ; LAB_005dd897
    MOV ESI,dword ptr [0x02d01920]      ; 005dd87f | g_CurrentPalette
    PUSH ESI                            ; 005dd885
    PUSH EBX                            ; 005dd886
    CALL wincore_windll.cpp_selectTexture_FUN_005b7340 ; 005dd887
        ;   XREF to: 005b7340 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_selectTexture_FUN_005b7340(SMRGLTextureBasic * tex, byte * palette_data)
    ADD ESP,0x8                         ; 005dd88c
    LEA EAX,[EBX + 0x18]                ; 005dd88f
        ;   Label: LAB_005dd88f
    POP EDI                             ; 005dd892
    POP EBP                             ; 005dd893
    POP ESI                             ; 005dd894
    POP EBX                             ; 005dd895
    RET                                 ; 005dd896
    MOV EAX,[0x02d01920]                ; 005dd897 | g_CurrentPalette
        ;   Label: LAB_005dd897
    PUSH EAX                            ; 005dd89c
    PUSH EBX                            ; 005dd89d
    CALL wincore_windll.cpp_updateTexture_FUN_005b7380 ; 005dd89e
        ;   XREF to: 005b7380 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_updateTexture_FUN_005b7380(SMRGLTextureBasic * tex, SRGBColorPalette * palette_data)
    ADD ESP,0x8                         ; 005dd8a3
    MOV EDX,dword ptr [0x03f87354]      ; 005dd8a6 | g_CurrentTextureIndex
    PUSH EDX                            ; 005dd8ac
    MOV ECX,dword ptr [0x03f87358]      ; 005dd8ad | g_TextureCacheInstance
    PUSH ECX                            ; 005dd8b3
    ADD ESP,0x8                         ; 005dd8b4
    LEA EAX,[EBX + 0x18]                ; 005dd8b7
    POP EDI                             ; 005dd8ba
    POP EBP                             ; 005dd8bb
    POP ESI                             ; 005dd8bc
    POP EBX                             ; 005dd8bd
    RET                                 ; 005dd8be

