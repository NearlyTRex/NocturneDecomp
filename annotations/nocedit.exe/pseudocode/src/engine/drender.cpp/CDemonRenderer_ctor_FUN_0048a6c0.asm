; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonRenderer * __cdecl engine_drender_cpp_CDemonRenderer_ctor_FUN_0048a6c0(CDemonRenderer *this_ptr)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   engine_drender.cpp_staticInit_FUN_0048a6b0 at 0048a6b5
;
; Referenced Globals:
;   SRenderVertex[16] g_RenderVertexBuffer
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0048a6c0
        ;   Label: engine_drender.cpp_CDemonRenderer_ctor_FUN_0048a6c0
    MOV dword ptr [EAX + 0x8],0x0       ; 0048a6c4
    MOV dword ptr [EAX],0x688014        ; 0048a6cb | g_RenderVertexBuffer
    MOV dword ptr [EAX + 0xc],0x1       ; 0048a6d1
    MOV dword ptr [EAX + 0x10],0x1      ; 0048a6d8
    MOV dword ptr [EAX + 0x14],0x0      ; 0048a6df
    MOV dword ptr [EAX + 0x1c],0x0      ; 0048a6e6
    MOV dword ptr [EAX + 0x20],0x0      ; 0048a6ed
    MOV dword ptr [EAX + 0x4],0x0       ; 0048a6f4
    RET                                 ; 0048a6fb

