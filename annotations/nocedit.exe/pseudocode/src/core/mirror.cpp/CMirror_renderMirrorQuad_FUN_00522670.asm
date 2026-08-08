; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mirror_cpp_CMirror_renderMirrorQuad_FUN_00522670(CMirror *this_ptr)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
; Local Variables:
; SMRGLPrimitiveQuadIndex Stack[-0x64]:40  local_64
; CVector3i        Stack[-0x3c]:12  local_3c
; CVector3i        Stack[-0x30]:12  local_30
; CVector3i        Stack[-0x24]:12  local_24
; CVector3i        Stack[-0x18]:12  local_18
;
; Referenced Globals:
;   float g_MirrorProjectionScale = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0048ab50
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
;   engine_special.cpp_transformPoint_FUN_005b5a25
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00522670
        ;   Label: core_mirror.cpp_CMirror_renderMirrorQuad_FUN_00522670
    PUSH ESI                            ; 00522671
    PUSH EDI                            ; 00522672
    SUB ESP,0x58                        ; 00522673
    MOV ESI,dword ptr [ESP + 0x68]      ; 00522676
    MOV EDX,dword ptr [0x006703ec]      ; 0052267a | g_CDemonRendererPtr2
    LEA EBX,[ESP + 0x40]                ; 00522680
    MOV EAX,ESI                         ; 00522684
    MOV EDX,dword ptr [EDX]             ; 00522686 | g_CDemonRendererInstance
    FLD float ptr [EAX]                 ; 00522688
    FMUL float ptr [0x006616e0]         ; 0052268a | g_MirrorProjectionScale
    FISTP dword ptr [EBX]               ; 00522690
    FLD float ptr [EAX + 0x4]           ; 00522692
    FMUL float ptr [0x006616e0]         ; 00522695 | g_MirrorProjectionScale
    FISTP dword ptr [EBX + 0x4]         ; 0052269b
    FLD float ptr [EAX + 0x8]           ; 0052269e
    FMUL float ptr [0x006616e0]         ; 005226a1 | g_MirrorProjectionScale
    FISTP dword ptr [EBX + 0x8]         ; 005226a7
    LEA EAX,[ESP + 0x40]                ; 005226aa
    PUSH EAX                            ; 005226ae
    PUSH EDX                            ; 005226af
    CALL engine_special.cpp_transformPoint_FUN_005b5a25 ; 005226b0
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x006703ec]                ; 005226b5 | g_CDemonRendererPtr2
    LEA EBX,[ESP + 0x3c]                ; 005226ba
    ADD ESP,0x8                         ; 005226be
    MOV EDX,dword ptr [EAX]             ; 005226c1 | g_CDemonRendererInstance
    LEA EAX,[ESI + 0xc]                 ; 005226c3
    FLD float ptr [EAX]                 ; 005226c6
    FMUL float ptr [0x006616e0]         ; 005226c8 | g_MirrorProjectionScale
    FISTP dword ptr [EBX]               ; 005226ce
    FLD float ptr [EAX + 0x4]           ; 005226d0
    FMUL float ptr [0x006616e0]         ; 005226d3 | g_MirrorProjectionScale
    FISTP dword ptr [EBX + 0x4]         ; 005226d9
    FLD float ptr [EAX + 0x8]           ; 005226dc
    FMUL float ptr [0x006616e0]         ; 005226df | g_MirrorProjectionScale
    FISTP dword ptr [EBX + 0x8]         ; 005226e5
    LEA EAX,[ESP + 0x34]                ; 005226e8
    PUSH EAX                            ; 005226ec
    ADD EDX,0x30                        ; 005226ed
    PUSH EDX                            ; 005226f0
    CALL engine_special.cpp_transformPoint_FUN_005b5a25 ; 005226f1
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x30]                ; 005226f6
    MOV EDX,dword ptr [0x006703ec]      ; 005226fa | g_CDemonRendererPtr2
    ADD ESP,0x8                         ; 00522700
    LEA EAX,[ESI + 0x18]                ; 00522703
    MOV EDX,dword ptr [EDX]             ; 00522706 | g_CDemonRendererInstance
    FLD float ptr [EAX]                 ; 00522708
    FMUL float ptr [0x006616e0]         ; 0052270a | g_MirrorProjectionScale
    FISTP dword ptr [EBX]               ; 00522710
    FLD float ptr [EAX + 0x4]           ; 00522712
    FMUL float ptr [0x006616e0]         ; 00522715 | g_MirrorProjectionScale
    FISTP dword ptr [EBX + 0x4]         ; 0052271b
    FLD float ptr [EAX + 0x8]           ; 0052271e
    FMUL float ptr [0x006616e0]         ; 00522721 | g_MirrorProjectionScale
    FISTP dword ptr [EBX + 0x8]         ; 00522727
    LEA EAX,[ESP + 0x28]                ; 0052272a
    PUSH EAX                            ; 0052272e
    ADD EDX,0x60                        ; 0052272f
    PUSH EDX                            ; 00522732
    CALL engine_special.cpp_transformPoint_FUN_005b5a25 ; 00522733
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x006703ec]                ; 00522738 | g_CDemonRendererPtr2
    MOV EAX,dword ptr [EAX]             ; 0052273d | g_CDemonRendererInstance
    ADD ESP,0x8                         ; 0052273f
    LEA EDX,[EAX + 0x90]                ; 00522742
    LEA EBX,[ESP + 0x4c]                ; 00522748
    LEA EAX,[ESI + 0x24]                ; 0052274c
    FLD float ptr [EAX]                 ; 0052274f
    FMUL float ptr [0x006616e0]         ; 00522751 | g_MirrorProjectionScale
    FISTP dword ptr [EBX]               ; 00522757
    FLD float ptr [EAX + 0x4]           ; 00522759
    FMUL float ptr [0x006616e0]         ; 0052275c | g_MirrorProjectionScale
    FISTP dword ptr [EBX + 0x4]         ; 00522762
    FLD float ptr [EAX + 0x8]           ; 00522765
    FMUL float ptr [0x006616e0]         ; 00522768 | g_MirrorProjectionScale
    FISTP dword ptr [EBX + 0x8]         ; 0052276e
    LEA EAX,[ESP + 0x4c]                ; 00522771
    PUSH EAX                            ; 00522775
    PUSH EDX                            ; 00522776
    CALL engine_special.cpp_transformPoint_FUN_005b5a25 ; 00522777
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0052277c
    PUSH 0x1                            ; 0052277f
    MOV EDX,dword ptr [0x006703ec]      ; 00522781 | g_CDemonRendererPtr2
    PUSH EDX                            ; 00522787 | g_CDemonRendererInstance
    XOR EBX,EBX                         ; 00522788
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 0052278a
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
    MOV ECX,0x4                         ; 0052278f
    MOV EDX,0x1                         ; 00522794
    LEA EAX,[ESP + 0x8]                 ; 00522799
    ADD ESP,0x8                         ; 0052279d
    MOV ESI,dword ptr [0x006703ec]      ; 005227a0 | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x4],ECX       ; 005227a6
    MOV dword ptr [ESP + 0x14],EBX      ; 005227aa
    MOV dword ptr [ESP + 0x10],EBX      ; 005227ae
    MOV dword ptr [ESP + 0xc],EBX       ; 005227b2
    MOV dword ptr [ESP + 0x8],EBX       ; 005227b6
    MOV dword ptr [ESP + 0x18],EBX      ; 005227ba
    MOV dword ptr [ESP + 0x1c],EDX      ; 005227be
    PUSH EAX                            ; 005227c2
    MOV ECX,0x2                         ; 005227c3
    MOV EBX,0x3                         ; 005227c8
    PUSH ESI                            ; 005227cd | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x28],ECX      ; 005227ce
    MOV dword ptr [ESP + 0x2c],EBX      ; 005227d2
    CALL engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0048ab50 ; 005227d6
        ;   XREF to: 0048ab50 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0048ab50(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 005227db
    PUSH 0x1                            ; 005227de
    MOV EDI,dword ptr [0x006703ec]      ; 005227e0 | g_CDemonRendererPtr2
    PUSH EDI                            ; 005227e6 | g_CDemonRendererInstance
    MOV EBX,EAX                         ; 005227e7
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 005227e9
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 005227ee
    MOV EAX,EBX                         ; 005227f1
    ADD ESP,0x58                        ; 005227f3
    POP EDI                             ; 005227f6
    POP ESI                             ; 005227f7
    POP EBX                             ; 005227f8
    RET                                 ; 005227f9

