; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFogColorOp6_FUN_00403b70(SMRGLHeaderPrimitive *prim)
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
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_clipper.c_clipAndRasterize_FUN_0043cbf0
;   engine_clipper.c_clipPolygonToViewport_FUN_0043de60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403b70
        ;   Label: engine_3d.c_renderPolygonFogColorOp6_FUN_00403b70
    PUSH ESI                            ; 00403b71
    PUSH EBP                            ; 00403b72
    MOV EBX,dword ptr [ESP + 0x10]      ; 00403b73
    LEA ESI,[EBX + 0x18]                ; 00403b77
    LEA EAX,[EBX + 0x8]                 ; 00403b7a
    PUSH EAX                            ; 00403b7d
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00403b7e
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 00403b83
    TEST EAX,EAX                        ; 00403b86
    JZ 0x00403bd2                       ; 00403b88
        ;   XREF to: 00403bd2 (CONDITIONAL_JUMP)  ; LAB_00403bd2
    CMP dword ptr [0x01c4f028],0x0      ; 00403b8a | DAT_01c4f028
    JZ 0x00403c0e                       ; 00403b91
        ;   XREF to: 00403c0e (CONDITIONAL_JUMP)  ; LAB_00403c0e
    CMP dword ptr [0x01c51d00],0x0      ; 00403b97 | DAT_01c51d00
    JNZ 0x00403bed                      ; 00403b9e
        ;   XREF to: 00403bed (CONDITIONAL_JUMP)  ; LAB_00403bed
    CMP dword ptr [0x0061b4a0],0x20     ; 00403ba0 | DAT_0061b4a0
    JNZ 0x00403be1                      ; 00403ba7
        ;   XREF to: 00403be1 (CONDITIONAL_JUMP)  ; LAB_00403be1
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 00403ba9 | DAT_01c4f02c
    MOV EBP,0x4                         ; 00403bb3
        ;   Label: LAB_00403bb3
    PUSH ESI                            ; 00403bb8
    MOV EDX,dword ptr [EBX + 0x4]       ; 00403bb9
    XOR EAX,EAX                         ; 00403bbc
    PUSH EDX                            ; 00403bbe
    MOV dword ptr [0x01c51d14],EBP      ; 00403bbf | DAT_01c51d14
    MOV [0x01c51d18],EAX                ; 00403bc5 | DAT_01c51d18
    CALL engine_clipper.c_clipAndRasterize_FUN_0043cbf0 ; 00403bca
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043cbf0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00403bcf
    MOV ESI,dword ptr [EBX + 0x4]       ; 00403bd2
        ;   Label: LAB_00403bd2
    LEA EAX,[EBX + 0x18]                ; 00403bd5
    SHL ESI,0x2                         ; 00403bd8
    ADD EAX,ESI                         ; 00403bdb
    POP EBP                             ; 00403bdd
    POP ESI                             ; 00403bde
    POP EBX                             ; 00403bdf
    RET                                 ; 00403be0
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00403be1 | DAT_01c4f02c
        ;   Label: LAB_00403be1
    JMP 0x00403bb3                      ; 00403beb
        ;   XREF to: 00403bb3 (UNCONDITIONAL_JUMP)  ; LAB_00403bb3
    CMP dword ptr [0x0061b4a0],0x20     ; 00403bed | DAT_0061b4a0
        ;   Label: LAB_00403bed
    JNZ 0x00403c02                      ; 00403bf4
        ;   XREF to: 00403c02 (CONDITIONAL_JUMP)  ; LAB_00403c02
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00403bf6 | DAT_01c4f02c
    JMP 0x00403bb3                      ; 00403c00
        ;   XREF to: 00403bb3 (UNCONDITIONAL_JUMP)  ; LAB_00403bb3
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00403c02 | DAT_01c4f02c
        ;   Label: LAB_00403c02
    JMP 0x00403bb3                      ; 00403c0c
        ;   XREF to: 00403bb3 (UNCONDITIONAL_JUMP)  ; LAB_00403bb3
    CMP dword ptr [0x01c51d00],0x0      ; 00403c0e | DAT_01c51d00
        ;   Label: LAB_00403c0e
    JNZ 0x00403c64                      ; 00403c15
        ;   XREF to: 00403c64 (CONDITIONAL_JUMP)  ; LAB_00403c64
    CMP dword ptr [0x0061b4a0],0x20     ; 00403c17 | DAT_0061b4a0
    JNZ 0x00403c58                      ; 00403c1e
        ;   XREF to: 00403c58 (CONDITIONAL_JUMP)  ; LAB_00403c58
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 00403c20 | DAT_01c4f02c
    MOV EBP,0x204                       ; 00403c2a
        ;   Label: LAB_00403c2a
    PUSH ESI                            ; 00403c2f
    MOV EDX,dword ptr [EBX + 0x4]       ; 00403c30
    XOR EAX,EAX                         ; 00403c33
    PUSH EDX                            ; 00403c35
    MOV dword ptr [0x01c51d14],EBP      ; 00403c36 | DAT_01c51d14
    MOV [0x01c51d18],EAX                ; 00403c3c | DAT_01c51d18
    CALL engine_clipper.c_clipPolygonToViewport_FUN_0043de60 ; 00403c41
        ;   XREF to: 0043de60 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipPolygonToViewport_FUN_0043de60(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00403c46
    MOV ESI,dword ptr [EBX + 0x4]       ; 00403c49
    LEA EAX,[EBX + 0x18]                ; 00403c4c
    SHL ESI,0x2                         ; 00403c4f
    ADD EAX,ESI                         ; 00403c52
    POP EBP                             ; 00403c54
    POP ESI                             ; 00403c55
    POP EBX                             ; 00403c56
    RET                                 ; 00403c57
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00403c58 | DAT_01c4f02c
        ;   Label: LAB_00403c58
    JMP 0x00403c2a                      ; 00403c62
        ;   XREF to: 00403c2a (UNCONDITIONAL_JUMP)  ; LAB_00403c2a
    CMP dword ptr [0x0061b4a0],0x20     ; 00403c64 | DAT_0061b4a0
        ;   Label: LAB_00403c64
    JNZ 0x00403c79                      ; 00403c6b
        ;   XREF to: 00403c79 (CONDITIONAL_JUMP)  ; LAB_00403c79
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00403c6d | DAT_01c4f02c
    JMP 0x00403c2a                      ; 00403c77
        ;   XREF to: 00403c2a (UNCONDITIONAL_JUMP)  ; LAB_00403c2a
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00403c79 | DAT_01c4f02c
        ;   Label: LAB_00403c79
    JMP 0x00403c2a                      ; 00403c83
        ;   XREF to: 00403c2a (UNCONDITIONAL_JUMP)  ; LAB_00403c2a

