; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_light_cpp_setAmbientLightLevel_FUN_00505490(int light_level)
;
; Parameters:
; int              Stack[0x4]:4   light_level
;
; XREF[3]:
;   core_texlist.cpp_CTextureList_previewTexture_FUN_005dc760 at 005dc829
;   engine_drender.cpp_CDemonRenderer_setLightIntensity_FUN_0048c690 at 0048c6a9
;   shape_design.c_showFacetPartEditor_FUN_0045f1d0 at 0045f42b
;
; Referenced Globals:
;   int g_AmbientLightLevel = 0x8000
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00505490
        ;   Label: engine_light.cpp_setAmbientLightLevel_FUN_00505490
    TEST EAX,EAX                        ; 00505494
    JL 0x005054aa                       ; 00505496
        ;   XREF to: 005054aa (CONDITIONAL_JUMP)  ; LAB_005054aa
    CMP EAX,0xffff                      ; 00505498
    JLE 0x005054a4                      ; 0050549d
        ;   XREF to: 005054a4 (CONDITIONAL_JUMP)  ; LAB_005054a4
    MOV EAX,0xffff                      ; 0050549f
    MOV [0x0067cfc8],EAX                ; 005054a4 | g_AmbientLightLevel
        ;   Label: LAB_005054a4
    RET                                 ; 005054a9
    XOR EAX,EAX                         ; 005054aa
        ;   Label: LAB_005054aa
    MOV [0x0067cfc8],EAX                ; 005054ac | g_AmbientLightLevel
    RET                                 ; 005054b1

