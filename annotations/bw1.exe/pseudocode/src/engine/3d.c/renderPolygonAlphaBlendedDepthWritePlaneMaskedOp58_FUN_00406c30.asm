; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_00406c30(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4f028
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c50948
;   undefined4 DAT_01c51d00
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_004054e0
;   engine_3d.c_renderPolygonDepthWritePass_FUN_004057b0
;   engine_clipper.c_clipAndRasterize_FUN_0043cbf0
;   engine_clipper.c_clipPolygonToViewport_FUN_0043de60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406c30
        ;   Label: engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_00406c30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00406c31
    CMP dword ptr [0x01c50948],0x0      ; 00406c35 | DAT_01c50948
    JZ 0x00406d52                       ; 00406c3c
        ;   XREF to: 00406d52 (CONDITIONAL_JUMP)  ; LAB_00406d52
    PUSH ESI                            ; 00406c42
    LEA ESI,[EBX + 0x18]                ; 00406c43
    LEA EAX,[EBX + 0x8]                 ; 00406c46
    PUSH EAX                            ; 00406c49
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00406c4a
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 00406c4f
    TEST EAX,EAX                        ; 00406c52
    JZ 0x00406ca1                       ; 00406c54
        ;   XREF to: 00406ca1 (CONDITIONAL_JUMP)  ; LAB_00406ca1
    CMP dword ptr [0x01c4f028],0x0      ; 00406c56 | DAT_01c4f028
    JZ 0x00406cdc                       ; 00406c5d
        ;   XREF to: 00406cdc (CONDITIONAL_JUMP)  ; LAB_00406cdc
    CMP dword ptr [0x01c51d00],0x0      ; 00406c63 | DAT_01c51d00
    JNZ 0x00406cbb                      ; 00406c6a
        ;   XREF to: 00406cbb (CONDITIONAL_JUMP)  ; LAB_00406cbb
    CMP dword ptr [0x0061b4a0],0x20     ; 00406c6c | DAT_0061b4a0
    JNZ 0x00406caf                      ; 00406c73
        ;   XREF to: 00406caf (CONDITIONAL_JUMP)  ; LAB_00406caf
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 00406c75 | DAT_01c4f02c
    MOV EAX,0x8d                        ; 00406c7f
        ;   Label: LAB_00406c7f
    PUSH ESI                            ; 00406c84
    MOV ECX,dword ptr [EBX + 0x4]       ; 00406c85
    MOV EDX,0x4                         ; 00406c88
    PUSH ECX                            ; 00406c8d
    MOV [0x01c51d14],EAX                ; 00406c8e | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EDX      ; 00406c93 | DAT_01c51d18
    CALL engine_clipper.c_clipAndRasterize_FUN_0043cbf0 ; 00406c99
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043cbf0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00406c9e
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406ca1
        ;   Label: LAB_00406ca1
    LEA EAX,[EBX + 0x18]                ; 00406ca4
    SHL ESI,0x2                         ; 00406ca7
    ADD EAX,ESI                         ; 00406caa
    POP ESI                             ; 00406cac
    POP EBX                             ; 00406cad
    RET                                 ; 00406cae
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00406caf | DAT_01c4f02c
        ;   Label: LAB_00406caf
    JMP 0x00406c7f                      ; 00406cb9
        ;   XREF to: 00406c7f (UNCONDITIONAL_JUMP)  ; LAB_00406c7f
    CMP dword ptr [0x0061b4a0],0x20     ; 00406cbb | DAT_0061b4a0
        ;   Label: LAB_00406cbb
    JNZ 0x00406cd0                      ; 00406cc2
        ;   XREF to: 00406cd0 (CONDITIONAL_JUMP)  ; LAB_00406cd0
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00406cc4 | DAT_01c4f02c
    JMP 0x00406c7f                      ; 00406cce
        ;   XREF to: 00406c7f (UNCONDITIONAL_JUMP)  ; LAB_00406c7f
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00406cd0 | DAT_01c4f02c
        ;   Label: LAB_00406cd0
    JMP 0x00406c7f                      ; 00406cda
        ;   XREF to: 00406c7f (UNCONDITIONAL_JUMP)  ; LAB_00406c7f
    CMP dword ptr [0x01c51d00],0x0      ; 00406cdc | DAT_01c51d00
        ;   Label: LAB_00406cdc
    JNZ 0x00406d31                      ; 00406ce3
        ;   XREF to: 00406d31 (CONDITIONAL_JUMP)  ; LAB_00406d31
    CMP dword ptr [0x0061b4a0],0x20     ; 00406ce5 | DAT_0061b4a0
    JNZ 0x00406d25                      ; 00406cec
        ;   XREF to: 00406d25 (CONDITIONAL_JUMP)  ; LAB_00406d25
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 00406cee | DAT_01c4f02c
    MOV EAX,0x28d                       ; 00406cf8
        ;   Label: LAB_00406cf8
    PUSH ESI                            ; 00406cfd
    MOV ECX,dword ptr [EBX + 0x4]       ; 00406cfe
    XOR EDX,EDX                         ; 00406d01
    PUSH ECX                            ; 00406d03
    MOV [0x01c51d14],EAX                ; 00406d04 | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EDX      ; 00406d09 | DAT_01c51d18
    CALL engine_clipper.c_clipPolygonToViewport_FUN_0043de60 ; 00406d0f
        ;   XREF to: 0043de60 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipPolygonToViewport_FUN_0043de60(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00406d14
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406d17
    LEA EAX,[EBX + 0x18]                ; 00406d1a
    SHL ESI,0x2                         ; 00406d1d
    ADD EAX,ESI                         ; 00406d20
    POP ESI                             ; 00406d22
    POP EBX                             ; 00406d23
    RET                                 ; 00406d24
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00406d25 | DAT_01c4f02c
        ;   Label: LAB_00406d25
    JMP 0x00406cf8                      ; 00406d2f
        ;   XREF to: 00406cf8 (UNCONDITIONAL_JUMP)  ; LAB_00406cf8
    CMP dword ptr [0x0061b4a0],0x20     ; 00406d31 | DAT_0061b4a0
        ;   Label: LAB_00406d31
    JNZ 0x00406d46                      ; 00406d38
        ;   XREF to: 00406d46 (CONDITIONAL_JUMP)  ; LAB_00406d46
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00406d3a | DAT_01c4f02c
    JMP 0x00406cf8                      ; 00406d44
        ;   XREF to: 00406cf8 (UNCONDITIONAL_JUMP)  ; LAB_00406cf8
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00406d46 | DAT_01c4f02c
        ;   Label: LAB_00406d46
    JMP 0x00406cf8                      ; 00406d50
        ;   XREF to: 00406cf8 (UNCONDITIONAL_JUMP)  ; LAB_00406cf8
    PUSH EBX                            ; 00406d52
        ;   Label: LAB_00406d52
    CALL engine_3d.c_renderPolygonDepthWritePass_FUN_004057b0 ; 00406d53
        ;   XREF to: 004057b0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_renderPolygonDepthWritePass_FUN_004057b0()
    ADD ESP,0x4                         ; 00406d58
    PUSH EBX                            ; 00406d5b
    CALL engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_004054e0 ; 00406d5c
        ;   XREF to: 004054e0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_004054e0()
    ADD ESP,0x4                         ; 00406d61
    POP EBX                             ; 00406d64
    RET                                 ; 00406d65

