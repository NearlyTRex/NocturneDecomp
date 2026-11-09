; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonLitAlphaPlaneMaskedOp26_FUN_00404b00(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e24c
;   undefined4 DAT_01c6e2a0
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_004039d0
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_clipper.c_clipAndRasterize_FUN_0043a840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404b00
        ;   Label: engine_3d.c_renderPolygonLitAlphaPlaneMaskedOp26_FUN_00404b00
    PUSH ESI                            ; 00404b01
    MOV EBX,dword ptr [ESP + 0xc]       ; 00404b02
    LEA ESI,[EBX + 0x18]                ; 00404b06
    LEA EAX,[EBX + 0x8]                 ; 00404b09
    PUSH EAX                            ; 00404b0c
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00404b0d
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 00404b12
    TEST EAX,EAX                        ; 00404b15
    JZ 0x00404b6e                       ; 00404b17
        ;   XREF to: 00404b6e (CONDITIONAL_JUMP)  ; LAB_00404b6e
    CMP dword ptr [0x01c6e24c],0x0      ; 00404b19 | DAT_01c6e24c
    JZ 0x00404ba9                       ; 00404b20
        ;   XREF to: 00404ba9 (CONDITIONAL_JUMP)  ; LAB_00404ba9
    CMP dword ptr [0x01c6e2a0],0x0      ; 00404b26 | DAT_01c6e2a0
    JNZ 0x00404b88                      ; 00404b2d
        ;   XREF to: 00404b88 (CONDITIONAL_JUMP)  ; LAB_00404b88
    CMP dword ptr [0x005fba20],0x20     ; 00404b2f | DAT_005fba20
    JNZ 0x00404b7c                      ; 00404b36
        ;   XREF to: 00404b7c (CONDITIONAL_JUMP)  ; LAB_00404b7c
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 00404b38 | DAT_01c6b5cc
        ;   Label: LAB_00404b38
    MOV EDX,0xd9                        ; 00404b42
        ;   Label: LAB_00404b42
    MOV ECX,0x1                         ; 00404b47
    PUSH EBX                            ; 00404b4c
    MOV dword ptr [0x01c6e2b4],EDX      ; 00404b4d | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],ECX      ; 00404b53 | DAT_01c6e2b8
    CALL engine_3d.c_calculatePolygonLighting_FUN_004039d0 ; 00404b59
        ;   XREF to: 004039d0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_calculatePolygonLighting_FUN_004039d0()
    ADD ESP,0x4                         ; 00404b5e
    PUSH ESI                            ; 00404b61
    MOV ESI,dword ptr [EBX + 0x4]       ; 00404b62
    PUSH ESI                            ; 00404b65
    CALL engine_clipper.c_clipAndRasterize_FUN_0043a840 ; 00404b66
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043a840(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00404b6b
    MOV ESI,dword ptr [EBX + 0x4]       ; 00404b6e
        ;   Label: LAB_00404b6e
    LEA EAX,[EBX + 0x18]                ; 00404b71
    SHL ESI,0x2                         ; 00404b74
    ADD EAX,ESI                         ; 00404b77
    POP ESI                             ; 00404b79
    POP EBX                             ; 00404b7a
    RET                                 ; 00404b7b
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00404b7c | DAT_01c6b5cc
        ;   Label: LAB_00404b7c
    JMP 0x00404b42                      ; 00404b86
        ;   XREF to: 00404b42 (UNCONDITIONAL_JUMP)  ; LAB_00404b42
    CMP dword ptr [0x005fba20],0x20     ; 00404b88 | DAT_005fba20
        ;   Label: LAB_00404b88
    JNZ 0x00404b9d                      ; 00404b8f
        ;   XREF to: 00404b9d (CONDITIONAL_JUMP)  ; LAB_00404b9d
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00404b91 | DAT_01c6b5cc
    JMP 0x00404b42                      ; 00404b9b
        ;   XREF to: 00404b42 (UNCONDITIONAL_JUMP)  ; LAB_00404b42
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00404b9d | DAT_01c6b5cc
        ;   Label: LAB_00404b9d
    JMP 0x00404b42                      ; 00404ba7
        ;   XREF to: 00404b42 (UNCONDITIONAL_JUMP)  ; LAB_00404b42
    CMP dword ptr [0x01c6e2a0],0x0      ; 00404ba9 | DAT_01c6e2a0
        ;   Label: LAB_00404ba9
    JNZ 0x00404bce                      ; 00404bb0
        ;   XREF to: 00404bce (CONDITIONAL_JUMP)  ; LAB_00404bce
    CMP dword ptr [0x005fba20],0x20     ; 00404bb2 | DAT_005fba20
    JZ 0x00404b38                       ; 00404bb9
        ;   XREF to: 00404b38 (CONDITIONAL_JUMP)  ; LAB_00404b38
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00404bbf | DAT_01c6b5cc
    JMP 0x00404b42                      ; 00404bc9
        ;   XREF to: 00404b42 (UNCONDITIONAL_JUMP)  ; LAB_00404b42
    CMP dword ptr [0x005fba20],0x20     ; 00404bce | DAT_005fba20
        ;   Label: LAB_00404bce
    JNZ 0x00404b9d                      ; 00404bd5
        ;   XREF to: 00404b9d (CONDITIONAL_JUMP)  ; LAB_00404b9d
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00404bd7 | DAT_01c6b5cc
    JMP 0x00404b42                      ; 00404be1
        ;   XREF to: 00404b42 (UNCONDITIONAL_JUMP)  ; LAB_00404b42

