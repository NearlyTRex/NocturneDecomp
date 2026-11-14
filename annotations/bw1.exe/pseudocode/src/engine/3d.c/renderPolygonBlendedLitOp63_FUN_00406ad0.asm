; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonBlendedLitOp63_FUN_00406ad0(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4f028
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d00
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_004039d0
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_clipper.c_clipAndRasterize_FUN_0043cbf0
;   engine_clipper.c_clipPolygonToViewport_FUN_0043de60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406ad0
        ;   Label: engine_3d.c_renderPolygonBlendedLitOp63_FUN_00406ad0
    PUSH ESI                            ; 00406ad1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00406ad2
    LEA ESI,[EBX + 0x18]                ; 00406ad6
    LEA EAX,[EBX + 0x8]                 ; 00406ad9
    PUSH EAX                            ; 00406adc
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00406add
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 00406ae2
    TEST EAX,EAX                        ; 00406ae5
    JZ 0x00406b49                       ; 00406ae7
        ;   XREF to: 00406b49 (CONDITIONAL_JUMP)  ; LAB_00406b49
    CMP dword ptr [0x01c51d00],0x0      ; 00406ae9 | DAT_01c51d00
    JNZ 0x00406b63                      ; 00406af0
        ;   XREF to: 00406b63 (CONDITIONAL_JUMP)  ; LAB_00406b63
    CMP dword ptr [0x0061b4a0],0x20     ; 00406af2 | DAT_0061b4a0
    JNZ 0x00406b57                      ; 00406af9
        ;   XREF to: 00406b57 (CONDITIONAL_JUMP)  ; LAB_00406b57
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 00406afb | DAT_01c4f02c
    CMP dword ptr [0x01c4f028],0x0      ; 00406b05 | DAT_01c4f028
        ;   Label: LAB_00406b05
    JZ 0x00406b84                       ; 00406b0c
        ;   XREF to: 00406b84 (CONDITIONAL_JUMP)  ; LAB_00406b84
    MOV dword ptr [0x01c51d14],0x67     ; 00406b12 | DAT_01c51d14
    MOV EDX,0x1                         ; 00406b1c
        ;   Label: LAB_00406b1c
    PUSH EBX                            ; 00406b21
    MOV dword ptr [0x01c51d18],EDX      ; 00406b22 | DAT_01c51d18
    CALL engine_3d.c_calculatePolygonLighting_FUN_004039d0 ; 00406b28
        ;   XREF to: 004039d0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_004039d0(SMRGLHeaderPrimitive * prim)
    MOV ECX,dword ptr [0x01c4f028]      ; 00406b2d | DAT_01c4f028
    ADD ESP,0x4                         ; 00406b33
    TEST ECX,ECX                        ; 00406b36
    JZ 0x00406b90                       ; 00406b38
        ;   XREF to: 00406b90 (CONDITIONAL_JUMP)  ; LAB_00406b90
    PUSH EDI                            ; 00406b3a
    PUSH ESI                            ; 00406b3b
    MOV EDI,dword ptr [EBX + 0x4]       ; 00406b3c
    PUSH EDI                            ; 00406b3f
    CALL engine_clipper.c_clipAndRasterize_FUN_0043cbf0 ; 00406b40
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043cbf0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00406b45
    POP EDI                             ; 00406b48
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406b49
        ;   Label: LAB_00406b49
    LEA EAX,[EBX + 0x18]                ; 00406b4c
    SHL ESI,0x2                         ; 00406b4f
    ADD EAX,ESI                         ; 00406b52
    POP ESI                             ; 00406b54
    POP EBX                             ; 00406b55
    RET                                 ; 00406b56
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00406b57 | DAT_01c4f02c
        ;   Label: LAB_00406b57
    JMP 0x00406b05                      ; 00406b61
        ;   XREF to: 00406b05 (UNCONDITIONAL_JUMP)  ; LAB_00406b05
    CMP dword ptr [0x0061b4a0],0x20     ; 00406b63 | DAT_0061b4a0
        ;   Label: LAB_00406b63
    JNZ 0x00406b78                      ; 00406b6a
        ;   XREF to: 00406b78 (CONDITIONAL_JUMP)  ; LAB_00406b78
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00406b6c | DAT_01c4f02c
    JMP 0x00406b05                      ; 00406b76
        ;   XREF to: 00406b05 (UNCONDITIONAL_JUMP)  ; LAB_00406b05
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00406b78 | DAT_01c4f02c
        ;   Label: LAB_00406b78
    JMP 0x00406b05                      ; 00406b82
        ;   XREF to: 00406b05 (UNCONDITIONAL_JUMP)  ; LAB_00406b05
    MOV dword ptr [0x01c51d14],0x267    ; 00406b84 | DAT_01c51d14
        ;   Label: LAB_00406b84
    JMP 0x00406b1c                      ; 00406b8e
        ;   XREF to: 00406b1c (UNCONDITIONAL_JUMP)  ; LAB_00406b1c
    PUSH ESI                            ; 00406b90
        ;   Label: LAB_00406b90
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406b91
    PUSH ESI                            ; 00406b94
    CALL engine_clipper.c_clipPolygonToViewport_FUN_0043de60 ; 00406b95
        ;   XREF to: 0043de60 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipPolygonToViewport_FUN_0043de60(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00406b9a
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406b9d
    LEA EAX,[EBX + 0x18]                ; 00406ba0
    SHL ESI,0x2                         ; 00406ba3
    ADD EAX,ESI                         ; 00406ba6
    POP ESI                             ; 00406ba8
    POP EBX                             ; 00406ba9
    RET                                 ; 00406baa

