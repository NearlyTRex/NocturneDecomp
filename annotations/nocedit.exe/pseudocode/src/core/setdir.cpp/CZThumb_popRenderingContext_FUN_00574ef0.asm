; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setdir_cpp_CZThumb_popRenderingContext_FUN_00574ef0(CZThumb *this_ptr)
;
; Parameters:
; CZThumb *        Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0 at 00574e08
;   core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00574910 at 00574a72
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   CDemonRenderer g_CDemonRendererInstance
;   int g_SavedWindowWidth
;   int g_SavedWindowHeight
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x006703ec]      ; 00574ef0 | g_CDemonRendererInstance | g_CDemonRendererPtr2
        ;   Label: core_setdir.cpp_CZThumb_popRenderingContext_FUN_00574ef0
    PUSH EDX                            ; 00574ef6 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480 ; 00574ef7
        ;   XREF to: 0048c8c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480()
    MOV EAX,[0x033648ec]                ; 00574efc | g_SavedWindowWidth
    MOV [0x00679394],EAX                ; 00574f01 | g_WindowWidth
    MOV EAX,[0x033648f0]                ; 00574f06 | g_SavedWindowHeight
    ADD ESP,0x4                         ; 00574f0b
    MOV [0x00679398],EAX                ; 00574f0e | g_WindowHeight
    RET                                 ; 00574f13

