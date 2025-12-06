; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_setdir.cpp_CZThumb_pushRenderingContext_FUN_00574e70(CZThumb * this_ptr)
;
; Parameters:
; CZThumb *        Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0 at 00574bb0
;   core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00574910 at 00574a3a
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   CDemonRenderer g_CDemonRendererInstance
;   int g_SavedWindowWidth
;   int g_SavedWindowHeight
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
;   engine_drender.cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0048c670
;   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574e70
        ;   Label: core_setdir.cpp_CZThumb_pushRenderingContext_FUN_00574e70
    PUSH ESI                            ; 00574e71
    PUSH EDI                            ; 00574e72
    MOV EBX,dword ptr [ESP + 0x10]      ; 00574e73
    MOV EAX,[0x00679394]                ; 00574e77 | int g_WindowWidth
    MOV [0x033648ec],EAX                ; 00574e7c | int g_SavedWindowWidth
    MOV EAX,[0x00679398]                ; 00574e81 | int g_WindowHeight
    MOV [0x033648f0],EAX                ; 00574e86 | int g_SavedWindowHeight
    MOV EAX,dword ptr [EBX]             ; 00574e8b
    MOV [0x00679394],EAX                ; 00574e8d | int g_WindowWidth
    MOV EAX,dword ptr [EBX + 0x4]       ; 00574e92
    MOV [0x00679398],EAX                ; 00574e95 | int g_WindowHeight
    DEC EAX                             ; 00574e9a
    PUSH EAX                            ; 00574e9b
    MOV EAX,dword ptr [EBX]             ; 00574e9c
    DEC EAX                             ; 00574e9e
    PUSH EAX                            ; 00574e9f
    PUSH 0x0                            ; 00574ea0
    PUSH 0x0                            ; 00574ea2
    MOV EDX,dword ptr [0x006703ec]      ; 00574ea4 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDX                            ; 00574eaa | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890 ; 00574eab | void engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890(CDemonRenderer * this_ptr, int x, int y, int width, ...)
        ;   XREF to: 0048c890 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00574eb0
    LEA EAX,[EBX + 0x8]                 ; 00574eb3
    PUSH EAX                            ; 00574eb6
    MOV ECX,dword ptr [0x006703ec]      ; 00574eb7 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH ECX                            ; 00574ebd | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150 ; 00574ebe | void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150(CDemonRenderer * this_ptr, CVector3i * point_ptr)
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00574ec3
    MOV ESI,dword ptr [0x006703ec]      ; 00574ec6 | CDemonRenderer * g_CDemonRendererPtr
    PUSH dword ptr [EBX + 0x20]         ; 00574ecc
    PUSH ESI                            ; 00574ecf | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0048c670 ; 00574ed0 | void engine_drender.cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0048c670(CDemonRenderer * this_ptr, float scale_factor)
        ;   XREF to: 0048c670 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00574ed5
    ADD EBX,0x14                        ; 00574ed8
    PUSH EBX                            ; 00574edb
    MOV EDI,dword ptr [0x006703ec]      ; 00574edc | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDI                            ; 00574ee2 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0 ; 00574ee3 | void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(CDemonRenderer * this_ptr)
        ;   XREF to: 0048c1d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00574ee8
    POP EDI                             ; 00574eeb
    POP ESI                             ; 00574eec
    POP EBX                             ; 00574eed
    RET                                 ; 00574eee

