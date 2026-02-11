; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_gore_cpp_CBloodSplat_FUN_004ec470(CBloodSplat *this_ptr)
;
; Parameters:
; CBloodSplat *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gore.cpp_CGore_FUN_004ed830 at 004ed85a
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   undefined4 g_RenderVertexBuffer[0].u
;   undefined4 g_RenderVertexBuffer[0].v
;   undefined4 g_RenderVertexBuffer[1].u
;   undefined4 g_RenderVertexBuffer[1].v
;   undefined4 g_RenderVertexBuffer[2].u
;   undefined4 g_RenderVertexBuffer[2].v
;   undefined4 g_RenderVertexBuffer[3].u
;   undefined4 g_RenderVertexBuffer[3].v
;   undefined4 DAT_00f80000
;   CDemonRenderer g_CDemonRendererInstance
;   undefined4 DAT_02d83368.base.count
;   int INT_02d83380
;   int INT_02d83384
;   int INT_02d83388
;   ... and 1 more
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ec470
        ;   Label: core_gore.cpp_CBloodSplat_FUN_004ec470
    PUSH ESI                            ; 004ec471
    PUSH EDI                            ; 004ec472
    PUSH EBP                            ; 004ec473
    MOV EDX,0x4                         ; 004ec474
    MOV EBX,0x1                         ; 004ec479
    MOV ESI,0x2                         ; 004ec47e
    MOV EDI,0x3                         ; 004ec483
    MOV EBP,0x80000                     ; 004ec488
    MOV EAX,0xf80000                    ; 004ec48d | DAT_00f80000
    PUSH 0xffff                         ; 004ec492
    XOR ECX,ECX                         ; 004ec497
    MOV dword ptr [0x02d8336c],EDX      ; 004ec499 | DAT_02d83368.base.count
    MOV dword ptr [0x02d83380],ECX      ; 004ec49f | INT_02d83380
    MOV dword ptr [0x02d83384],EBX      ; 004ec4a5 | INT_02d83384
    MOV dword ptr [0x02d83388],ESI      ; 004ec4ab | INT_02d83388
    MOV dword ptr [0x02d8338c],EDI      ; 004ec4b1 | INT_02d8338c
    MOV dword ptr [0x0068802c],EBP      ; 004ec4b7 | g_RenderVertexBuffer[0].u
    MOV [0x00688030],EAX                ; 004ec4bd | g_RenderVertexBuffer[0].v
    MOV [0x0068805c],EAX                ; 004ec4c2 | g_RenderVertexBuffer[1].u
    MOV [0x00688060],EAX                ; 004ec4c7 | g_RenderVertexBuffer[1].v
    MOV [0x0068808c],EAX                ; 004ec4cc | g_RenderVertexBuffer[2].u
    MOV EAX,[0x006703ec]                ; 004ec4d1 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV dword ptr [0x00688090],EBP      ; 004ec4d6 | g_RenderVertexBuffer[2].v
    PUSH EAX                            ; 004ec4dc | g_CDemonRendererInstance
    MOV dword ptr [0x006880bc],EBP      ; 004ec4dd | g_RenderVertexBuffer[3].u
    MOV dword ptr [0x006880c0],EBP      ; 004ec4e3 | g_RenderVertexBuffer[3].v
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 004ec4e9
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004ec4ee
    POP EBP                             ; 004ec4f1
    POP EDI                             ; 004ec4f2
    POP ESI                             ; 004ec4f3
    POP EBX                             ; 004ec4f4
    RET                                 ; 004ec4f5

