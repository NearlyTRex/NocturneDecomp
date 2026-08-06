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
;   undefined4 DAT_005b8b14
;   undefined4 DAT_005b8b2c
;   undefined4 DAT_005b8ba4
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488ad0
        ;   Label: core_fire.cpp_loadLightningBoltAssets_FUN_00488ad0
    PUSH ESI                            ; 00488ad1
    MOV EBX,0x5b8b14                    ; 00488ad2 | DAT_005b8b14
    LEA ESI,[EBX + 0x90]                ; 00488ad7 | DAT_005b8ba4
    PUSH EBX                            ; 00488add | DAT_005b8b14 | DAT_005b8b2c
        ;   Label: LAB_00488add
    MOV EDX,dword ptr [0x005ae704]      ; 00488ade | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 00488ae4 | DAT_01b4d738
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

