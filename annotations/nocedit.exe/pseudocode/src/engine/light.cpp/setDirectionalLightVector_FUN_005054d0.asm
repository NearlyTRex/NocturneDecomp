; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_light_cpp_setDirectionalLightVector_FUN_005054d0(int dir_x,int dir_y,int dir_z)
;
; Parameters:
; int              Stack[0x4]:4   dir_x
; int              Stack[0x8]:4   dir_y
; int              Stack[0xc]:4   dir_z
;
; XREF[4]:
;   core_texlist.cpp_CTextureList_previewTexture_FUN_005dc760 at 005dc844
;   engine_drender.cpp_CDemonRenderer_scaleAndSetDirectionalLight_FUN_0048c6e0 at 0048c72a
;   engine_drender.cpp_CDemonRenderer_setLightDirection_FUN_0048c6c0 at 0048c6d0
;   shape_design.c_showFacetPartEditor_FUN_0045f1d0 at 0045f41e
;
; Referenced Globals:
;   int g_LightDirectionX
;   int g_LightDirectionY
;   int g_LightDirectionZ
;   int g_LightDirectionX2
;   int g_LightDirectionY2
;   int g_LightDirectionZ2
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005054d0
        ;   Label: engine_light.cpp_setDirectionalLightVector_FUN_005054d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005054d4
    MOV ECX,dword ptr [ESP + 0xc]       ; 005054d8
    MOV dword ptr [0x02d052dc],EDX      ; 005054dc | g_LightDirectionX
    MOV [0x02dd3098],EAX                ; 005054e2 | g_LightDirectionY2
    MOV [0x02d052e0],EAX                ; 005054e7 | g_LightDirectionY
    MOV dword ptr [0x02dd309c],ECX      ; 005054ec | g_LightDirectionZ2
    MOV dword ptr [0x02d052e4],ECX      ; 005054f2 | g_LightDirectionZ
    MOV dword ptr [0x02dd3094],EDX      ; 005054f8 | g_LightDirectionX2
    RET                                 ; 005054fe

