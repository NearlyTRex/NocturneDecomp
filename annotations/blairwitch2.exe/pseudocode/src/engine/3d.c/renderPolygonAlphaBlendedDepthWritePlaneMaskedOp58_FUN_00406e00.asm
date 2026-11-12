; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_00406e00(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35e68
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c37788
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_004056b0
;   engine_3d.c_renderPolygonDepthWritePass_FUN_00405980
;   engine_clipper.c_clipAndRasterize_FUN_00431d90
;   engine_clipper.c_clipPolygonToViewport_FUN_00433000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406e00
        ;   Label: engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_00406e00
    MOV EBX,dword ptr [ESP + 0x8]       ; 00406e01
    CMP dword ptr [0x01c37788],0x0      ; 00406e05 | DAT_01c37788
    JZ 0x00406f22                       ; 00406e0c
        ;   XREF to: 00406f22 (CONDITIONAL_JUMP)  ; LAB_00406f22
    PUSH ESI                            ; 00406e12
    LEA ESI,[EBX + 0x18]                ; 00406e13
    LEA EAX,[EBX + 0x8]                 ; 00406e16
    PUSH EAX                            ; 00406e19
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 00406e1a
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403970(SClipPlane * plane)
    ADD ESP,0x4                         ; 00406e1f
    TEST EAX,EAX                        ; 00406e22
    JZ 0x00406e71                       ; 00406e24
        ;   XREF to: 00406e71 (CONDITIONAL_JUMP)  ; LAB_00406e71
    CMP dword ptr [0x01c35e68],0x0      ; 00406e26 | DAT_01c35e68
    JZ 0x00406eac                       ; 00406e2d
        ;   XREF to: 00406eac (CONDITIONAL_JUMP)  ; LAB_00406eac
    CMP dword ptr [0x01c38b40],0x0      ; 00406e33 | DAT_01c38b40
    JNZ 0x00406e8b                      ; 00406e3a
        ;   XREF to: 00406e8b (CONDITIONAL_JUMP)  ; LAB_00406e8b
    CMP dword ptr [0x006141c0],0x20     ; 00406e3c | DAT_006141c0
    JNZ 0x00406e7f                      ; 00406e43
        ;   XREF to: 00406e7f (CONDITIONAL_JUMP)  ; LAB_00406e7f
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00406e45 | DAT_01c35e6c
    MOV EAX,0x8d                        ; 00406e4f
        ;   Label: LAB_00406e4f
    PUSH ESI                            ; 00406e54
    MOV ECX,dword ptr [EBX + 0x4]       ; 00406e55
    MOV EDX,0x4                         ; 00406e58
    PUSH ECX                            ; 00406e5d
    MOV [0x01c38b54],EAX                ; 00406e5e | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EDX      ; 00406e63 | DAT_01c38b58
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 00406e69
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00406e6e
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406e71
        ;   Label: LAB_00406e71
    LEA EAX,[EBX + 0x18]                ; 00406e74
    SHL ESI,0x2                         ; 00406e77
    ADD EAX,ESI                         ; 00406e7a
    POP ESI                             ; 00406e7c
    POP EBX                             ; 00406e7d
    RET                                 ; 00406e7e
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00406e7f | DAT_01c35e6c
        ;   Label: LAB_00406e7f
    JMP 0x00406e4f                      ; 00406e89
        ;   XREF to: 00406e4f (UNCONDITIONAL_JUMP)  ; LAB_00406e4f
    CMP dword ptr [0x006141c0],0x20     ; 00406e8b | DAT_006141c0
        ;   Label: LAB_00406e8b
    JNZ 0x00406ea0                      ; 00406e92
        ;   XREF to: 00406ea0 (CONDITIONAL_JUMP)  ; LAB_00406ea0
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00406e94 | DAT_01c35e6c
    JMP 0x00406e4f                      ; 00406e9e
        ;   XREF to: 00406e4f (UNCONDITIONAL_JUMP)  ; LAB_00406e4f
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00406ea0 | DAT_01c35e6c
        ;   Label: LAB_00406ea0
    JMP 0x00406e4f                      ; 00406eaa
        ;   XREF to: 00406e4f (UNCONDITIONAL_JUMP)  ; LAB_00406e4f
    CMP dword ptr [0x01c38b40],0x0      ; 00406eac | DAT_01c38b40
        ;   Label: LAB_00406eac
    JNZ 0x00406f01                      ; 00406eb3
        ;   XREF to: 00406f01 (CONDITIONAL_JUMP)  ; LAB_00406f01
    CMP dword ptr [0x006141c0],0x20     ; 00406eb5 | DAT_006141c0
    JNZ 0x00406ef5                      ; 00406ebc
        ;   XREF to: 00406ef5 (CONDITIONAL_JUMP)  ; LAB_00406ef5
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00406ebe | DAT_01c35e6c
    MOV EAX,0x28d                       ; 00406ec8
        ;   Label: LAB_00406ec8
    PUSH ESI                            ; 00406ecd
    MOV ECX,dword ptr [EBX + 0x4]       ; 00406ece
    XOR EDX,EDX                         ; 00406ed1
    PUSH ECX                            ; 00406ed3
    MOV [0x01c38b54],EAX                ; 00406ed4 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EDX      ; 00406ed9 | DAT_01c38b58
    CALL engine_clipper.c_clipPolygonToViewport_FUN_00433000 ; 00406edf
        ;   XREF to: 00433000 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipPolygonToViewport_FUN_00433000(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00406ee4
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406ee7
    LEA EAX,[EBX + 0x18]                ; 00406eea
    SHL ESI,0x2                         ; 00406eed
    ADD EAX,ESI                         ; 00406ef0
    POP ESI                             ; 00406ef2
    POP EBX                             ; 00406ef3
    RET                                 ; 00406ef4
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00406ef5 | DAT_01c35e6c
        ;   Label: LAB_00406ef5
    JMP 0x00406ec8                      ; 00406eff
        ;   XREF to: 00406ec8 (UNCONDITIONAL_JUMP)  ; LAB_00406ec8
    CMP dword ptr [0x006141c0],0x20     ; 00406f01 | DAT_006141c0
        ;   Label: LAB_00406f01
    JNZ 0x00406f16                      ; 00406f08
        ;   XREF to: 00406f16 (CONDITIONAL_JUMP)  ; LAB_00406f16
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00406f0a | DAT_01c35e6c
    JMP 0x00406ec8                      ; 00406f14
        ;   XREF to: 00406ec8 (UNCONDITIONAL_JUMP)  ; LAB_00406ec8
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00406f16 | DAT_01c35e6c
        ;   Label: LAB_00406f16
    JMP 0x00406ec8                      ; 00406f20
        ;   XREF to: 00406ec8 (UNCONDITIONAL_JUMP)  ; LAB_00406ec8
    PUSH EBX                            ; 00406f22
        ;   Label: LAB_00406f22
    CALL engine_3d.c_renderPolygonDepthWritePass_FUN_00405980 ; 00406f23
        ;   XREF to: 00405980 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_renderPolygonDepthWritePass_FUN_00405980(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 00406f28
    PUSH EBX                            ; 00406f2b
    CALL engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_004056b0 ; 00406f2c
        ;   XREF to: 004056b0 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_004056b0(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 00406f31
    POP EBX                             ; 00406f34
    RET                                 ; 00406f35

