; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_water_cpp_CWater_captureTextures_FUN_005507d0(CWater *this_ptr)
;
; Parameters:
; CWater *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_CDemonSet_loadAssets_FUN_0050d280 at 0050d28c
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   SMRGLTextureBasic[16] g_WaterTextures
;   undefined4 g_WaterTextures[1].base.type
;   SMRGLPrimitiveQuad g_WaterRenderQuad
;   CDemonRenderer g_CDemonRenderer_01b4d738
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005507d0
        ;   Label: core_water.cpp_CWater_captureTextures_FUN_005507d0
    PUSH ESI                            ; 005507d1
    MOV EBX,0x5c11f4                    ; 005507d2 | g_WaterTextures
    LEA ESI,[EBX + 0x180]               ; 005507d7 | g_WaterRenderQuad
    PUSH EBX                            ; 005507dd | g_WaterTextures | g_WaterTextures[1].base.type
        ;   Label: LAB_005507dd
    MOV EDX,dword ptr [0x005ae704]      ; 005507de | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 005507e4 | g_CDemonRenderer_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 005507e5
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD EBX,0x18                        ; 005507ea
    ADD ESP,0x8                         ; 005507ed
    CMP EBX,ESI                         ; 005507f0
    JNZ 0x005507dd                      ; 005507f2
        ;   XREF to: 005507dd (CONDITIONAL_JUMP)  ; LAB_005507dd
    POP ESI                             ; 005507f4
    POP EBX                             ; 005507f5
    RET                                 ; 005507f6

