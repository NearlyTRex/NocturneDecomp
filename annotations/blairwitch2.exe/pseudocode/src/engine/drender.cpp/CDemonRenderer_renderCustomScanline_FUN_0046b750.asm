; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0046b750(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,CustomScanlineFunc *scanline_renderer)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
; CustomScanlineFunc * Stack[0xc]:4   scanline_renderer
;
; XREF[4]:
;   core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00448900 at 00448aab
;   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_0044ac60 at 0044af4f
;   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_0044c830 at 0044cedb
;   core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00533f40 at 00533fdb
;
; Referenced Globals:
;   undefined4 DAT_007bee30
;   undefined4 DAT_007bee34
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   core_xform.cpp_transformAndClipGeometry_FUN_00594f40
;   core_zombie.cpp_FUN_0059a5d0
;   engine_3d.c_isVisiblePlane_FUN_00403970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b750
        ;   Label: engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0046b750
    PUSH ESI                            ; 0046b751
    PUSH EDI                            ; 0046b752
    PUSH EBP                            ; 0046b753
    MOV EBX,dword ptr [ESP + 0x18]      ; 0046b754
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046b758
    CMP dword ptr [EAX + 0xc],0x0       ; 0046b75c
    JNZ 0x0046b771                      ; 0046b760
        ;   XREF to: 0046b771 (CONDITIONAL_JUMP)  ; LAB_0046b771
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046b762
    CMP dword ptr [EAX + 0x4],0x0       ; 0046b766
    JZ 0x0046b790                       ; 0046b76a
        ;   XREF to: 0046b790 (CONDITIONAL_JUMP)  ; LAB_0046b790
    POP EBP                             ; 0046b76c
        ;   Label: LAB_0046b76c
    POP EDI                             ; 0046b76d
    POP ESI                             ; 0046b76e
    POP EBX                             ; 0046b76f
    RET                                 ; 0046b770
    LEA EAX,[EBX + 0x8]                 ; 0046b771
        ;   Label: LAB_0046b771
    PUSH EAX                            ; 0046b774
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 0046b775
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 0046b77a
    TEST EAX,EAX                        ; 0046b77d
    JZ 0x0046b76c                       ; 0046b77f
        ;   XREF to: 0046b76c (CONDITIONAL_JUMP)  ; LAB_0046b76c
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046b781
    CMP dword ptr [EAX + 0x4],0x0       ; 0046b785
    JZ 0x0046b790                       ; 0046b789
        ;   XREF to: 0046b790 (CONDITIONAL_JUMP)  ; LAB_0046b790
    POP EBP                             ; 0046b78b
    POP EDI                             ; 0046b78c
    POP ESI                             ; 0046b78d
    POP EBX                             ; 0046b78e
    RET                                 ; 0046b78f
    LEA EAX,[EBX + 0x18]                ; 0046b790
        ;   Label: LAB_0046b790
    MOV ESI,0xc4                        ; 0046b793
    PUSH EAX                            ; 0046b798
    MOV EBP,dword ptr [EBX + 0x4]       ; 0046b799
    MOV EDI,0x6                         ; 0046b79c
    PUSH EBP                            ; 0046b7a1
    MOV dword ptr [0x01c38b54],ESI      ; 0046b7a2 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EDI      ; 0046b7a8 | DAT_01c38b58
    CALL core_xform.cpp_transformAndClipGeometry_FUN_00594f40 ; 0046b7ae
        ;   XREF to: 00594f40 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_transformAndClipGeometry_FUN_00594f40(int vertex_count, int * vertex_indices)
    MOV EAX,[0x007bee30]                ; 0046b7b3 | DAT_007bee30
    ADD ESP,0x8                         ; 0046b7b8
    CMP EAX,0x2                         ; 0046b7bb
    JLE 0x0046b76c                      ; 0046b7be
        ;   XREF to: 0046b76c (CONDITIONAL_JUMP)  ; LAB_0046b76c
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0046b7c0
    PUSH EDX                            ; 0046b7c4
    PUSH EAX                            ; 0046b7c5
    PUSH 0x7bee34                       ; 0046b7c6 | DAT_007bee34
    CALL core_zombie.cpp_FUN_0059a5d0   ; 0046b7cb
        ;   XREF to: 0059a5d0 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_0059a5d0(SRenderVertex * vertex_buffer, int vertex_count, CustomScanlineFunc * scanline_renderer)
    ADD ESP,0xc                         ; 0046b7d0
    POP EBP                             ; 0046b7d3
    POP EDI                             ; 0046b7d4
    POP ESI                             ; 0046b7d5
    POP EBX                             ; 0046b7d6
    RET                                 ; 0046b7d7

