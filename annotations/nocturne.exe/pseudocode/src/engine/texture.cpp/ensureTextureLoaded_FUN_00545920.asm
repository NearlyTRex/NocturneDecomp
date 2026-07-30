; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_texture_cpp_ensureTextureLoaded_FUN_00545920(SMRGLTextureBasic *texture)
;
; Parameters:
; SMRGLTextureBasic * Stack[0x4]:4   texture
;
; XREF[13]:
;   core_charactr.cpp_FUN_004270e0 at 0042717f
;   core_cloth.cpp_CCloth_render_FUN_00437db0 at 00437e47
;   core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_0044d060 at 0044d159
;   core_flies.cpp_CFlies_renderOpaque_FUN_0048f490 at 0048f637
;   engine_3d.c_FUN_00405b40 at 00405c2c
;   engine_3d.c_FUN_00408fc0 at 004090c2
;   engine_3d.c_updateAnimatedTexture_FUN_00406690 at 004066fd
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 at 00461eb7
;   engine_font.cpp_CBitFont_render3DCharacter_FUN_004911f0 at 0049124d
;   engine_model.c_loadMRGLTextures_FUN_004dd690 at 004dd6bd
;   ... and 3 more
;
; Referenced Globals:
;   undefined4 DAT_006b0278
;   undefined4 DAT_01c00020
;   undefined4 DAT_01c02594
;   undefined4 DAT_02dd0f80
;   undefined4 DAT_02dd0f84
;
; Called Functions:
;   engine_special.cpp_selectTexture_FUN_00532400
;   engine_special.cpp_updateTexture_FUN_00532440
;   engine_texture.cpp_CTextureCache_findTexture_FUN_00545390
;   engine_texture.cpp_CTextureCache_loadTexture_FUN_00544ef0
;   engine_texture.cpp_CTextureCache_setupTexture_FUN_00545410
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00545920
        ;   Label: engine_texture.cpp_ensureTextureLoaded_FUN_00545920
    PUSH EDI                            ; 00545921
    PUSH EBP                            ; 00545922
    MOV EBX,dword ptr [ESP + 0x10]      ; 00545923
    MOV EDX,dword ptr [0x006b0278]      ; 00545927 | DAT_006b0278
    LEA EAX,[EBX + 0x18]                ; 0054592d
    XOR EDI,EDI                         ; 00545930
    TEST EDX,EDX                        ; 00545932
    JNZ 0x0054593c                      ; 00545934
        ;   XREF to: 0054593c (CONDITIONAL_JUMP)  ; LAB_0054593c
    CMP byte ptr [EBX + 0x8],0x0        ; 00545936
    JNZ 0x00545940                      ; 0054593a
        ;   XREF to: 00545940 (CONDITIONAL_JUMP)  ; LAB_00545940
    POP EBP                             ; 0054593c
        ;   Label: LAB_0054593c
    POP EDI                             ; 0054593d
    POP EBX                             ; 0054593e
    RET                                 ; 0054593f
    PUSH ESI                            ; 00545940
        ;   Label: LAB_00545940
    LEA ESI,[EBX + 0x8]                 ; 00545941
    MOV EAX,dword ptr [EBX + 0x4]       ; 00545944
    PUSH ESI                            ; 00545947
    AND EAX,0xffff                      ; 00545948
    PUSH EAX                            ; 0054594d
    MOV ECX,dword ptr [0x02dd0f84]      ; 0054594e | DAT_02dd0f84
    PUSH ECX                            ; 00545954
    CALL engine_texture.cpp_CTextureCache_findTexture_FUN_00545390 ; 00545955
        ;   XREF to: 00545390 (UNCONDITIONAL_CALL)  ; int engine_texture.cpp_CTextureCache_findTexture_FUN_00545390(CTextureCache * this_ptr, int hint_index, char * texture_name)
    ADD ESP,0xc                         ; 0054595a
    CMP EAX,-0x1                        ; 0054595d
    JNZ 0x0054597a                      ; 00545960
        ;   XREF to: 0054597a (CONDITIONAL_JUMP)  ; LAB_0054597a
    PUSH ESI                            ; 00545962
    MOV ESI,dword ptr [0x02dd0f84]      ; 00545963 | DAT_02dd0f84
    PUSH ESI                            ; 00545969
    MOV EDI,0x1                         ; 0054596a
    CALL engine_texture.cpp_CTextureCache_loadTexture_FUN_00544ef0 ; 0054596f
        ;   XREF to: 00544ef0 (UNCONDITIONAL_CALL)  ; int engine_texture.cpp_CTextureCache_loadTexture_FUN_00544ef0(CTextureCache * cache, char * texture_name)
    ADD ESP,0x8                         ; 00545974
    MOV dword ptr [EBX + 0x4],EAX       ; 00545977
    PUSH EAX                            ; 0054597a
        ;   Label: LAB_0054597a
    MOV EBP,dword ptr [0x02dd0f84]      ; 0054597b | DAT_02dd0f84
    PUSH EBP                            ; 00545981
    MOV [0x02dd0f80],EAX                ; 00545982 | DAT_02dd0f80
    CALL engine_texture.cpp_CTextureCache_setupTexture_FUN_00545410 ; 00545987
        ;   XREF to: 00545410 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_CTextureCache_setupTexture_FUN_00545410()
    MOV EAX,[0x01c02594]                ; 0054598c | DAT_01c02594
    ADD ESP,0x8                         ; 00545991
    TEST EAX,EAX                        ; 00545994
    JZ 0x005459ac                       ; 00545996
        ;   XREF to: 005459ac (CONDITIONAL_JUMP)  ; LAB_005459ac
    TEST EDI,EDI                        ; 00545998
    JNZ 0x005459b4                      ; 0054599a
        ;   XREF to: 005459b4 (CONDITIONAL_JUMP)  ; LAB_005459b4
    MOV ECX,dword ptr [0x01c00020]      ; 0054599c | DAT_01c00020
    PUSH ECX                            ; 005459a2
    PUSH EBX                            ; 005459a3
    CALL engine_special.cpp_selectTexture_FUN_00532400 ; 005459a4
        ;   XREF to: 00532400 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_selectTexture_FUN_00532400(SMRGLTextureBasic * tex, SRGBColorPalette * palette_data)
    ADD ESP,0x8                         ; 005459a9
    LEA EAX,[EBX + 0x18]                ; 005459ac
        ;   Label: LAB_005459ac
    POP ESI                             ; 005459af
    POP EBP                             ; 005459b0
    POP EDI                             ; 005459b1
    POP EBX                             ; 005459b2
    RET                                 ; 005459b3
    MOV EDX,dword ptr [0x01c00020]      ; 005459b4 | DAT_01c00020
        ;   Label: LAB_005459b4
    PUSH EDX                            ; 005459ba
    PUSH EBX                            ; 005459bb
    CALL engine_special.cpp_updateTexture_FUN_00532440 ; 005459bc
        ;   XREF to: 00532440 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_updateTexture_FUN_00532440(SMRGLTextureBasic * tex, SRGBColorPalette * palette_data)
    ADD ESP,0x8                         ; 005459c1
    LEA EAX,[EBX + 0x18]                ; 005459c4
    POP ESI                             ; 005459c7
    POP EBP                             ; 005459c8
    POP EDI                             ; 005459c9
    POP EBX                             ; 005459ca
    RET                                 ; 005459cb

