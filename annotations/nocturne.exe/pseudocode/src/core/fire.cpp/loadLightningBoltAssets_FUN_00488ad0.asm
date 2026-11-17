; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_loadLightningBoltAssets_FUN_00488ad0(void)
;
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_loadAssets_FUN_0048af70 at 0048afcb
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   SMRGLTextureBasic[6] g_SMRGLTextureBasic_ARRAY_005b8b14
;   undefined4 g_SMRGLTextureBasic_ARRAY_005b8b14[1].base.type
;   SMRGLTextureBasic g_SMRGLTextureBasic_005b8ba4
;   CDemonRenderer g_CDemonRenderer_01b4d738
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488ad0
        ;   Label: core_fire.cpp_loadLightningBoltAssets_FUN_00488ad0
    PUSH ESI                            ; 00488ad1
    MOV EBX,0x5b8b14                    ; 00488ad2 | g_SMRGLTextureBasic_ARRAY_005b8b14
    LEA ESI,[EBX + 0x90]                ; 00488ad7 | g_SMRGLTextureBasic_005b8ba4
    PUSH EBX                            ; 00488add | g_SMRGLTextureBasic_ARRAY_005b8b14 | g_SMRGLTextureBasic_ARRAY_005b8b14[1].base.type
        ;   Label: LAB_00488add
    MOV EDX,dword ptr [0x005ae704]      ; 00488ade | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 00488ae4 | g_CDemonRenderer_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 00488ae5
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD EBX,0x18                        ; 00488aea
    ADD ESP,0x8                         ; 00488aed
    CMP EBX,ESI                         ; 00488af0
    JNZ 0x00488add                      ; 00488af2
        ;   XREF to: 00488add (CONDITIONAL_JUMP)  ; LAB_00488add
    POP ESI                             ; 00488af4
    POP EBX                             ; 00488af5
    RET                                 ; 00488af6

