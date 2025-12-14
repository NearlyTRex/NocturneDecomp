; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_texlist.cpp_CTextureList_captureTexture_FUN_005dc270(CTextureList * this_ptr, uint texture_index)
;
; Parameters:
; CTextureList *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   texture_index
;
; XREF[1]:
;   core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004ef880 at 004ef8a6
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005dc270
        ;   Label: core_texlist.cpp_CTextureList_captureTexture_FUN_005dc270
    AND EDX,0xfff                       ; 005dc274
    LEA EAX,[EDX*0x4 + 0x0]             ; 005dc27a
    SUB EAX,EDX                         ; 005dc281
    MOV EDX,dword ptr [ESP + 0x4]       ; 005dc283
    SHL EAX,0x3                         ; 005dc287
    ADD EDX,0x4                         ; 005dc28a
    ADD EAX,EDX                         ; 005dc28d
    PUSH EAX                            ; 005dc28f
    MOV EDX,dword ptr [0x006703ec]      ; 005dc290 | g_CDemonRendererInstance | g_CDemonRendererPtr
    PUSH EDX                            ; 005dc296 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 005dc297
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 005dc29c
    RET                                 ; 005dc29f

