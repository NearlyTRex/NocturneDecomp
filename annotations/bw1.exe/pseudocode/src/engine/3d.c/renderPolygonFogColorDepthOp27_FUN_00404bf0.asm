; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFogColorDepthOp27_FUN_00404bf0(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d00
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_clipper.c_clipAndRasterize_FUN_0043cbf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404bf0
        ;   Label: engine_3d.c_renderPolygonFogColorDepthOp27_FUN_00404bf0
    PUSH ESI                            ; 00404bf1
    PUSH EBP                            ; 00404bf2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00404bf3
    LEA ESI,[EBX + 0x18]                ; 00404bf7
    LEA EAX,[EBX + 0x8]                 ; 00404bfa
    PUSH EAX                            ; 00404bfd
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00404bfe
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 00404c03
    TEST EAX,EAX                        ; 00404c06
    JZ 0x00404c4b                       ; 00404c08
        ;   XREF to: 00404c4b (CONDITIONAL_JUMP)  ; LAB_00404c4b
    CMP dword ptr [0x01c51d00],0x0      ; 00404c0a | DAT_01c51d00
    JNZ 0x00404c66                      ; 00404c11
        ;   XREF to: 00404c66 (CONDITIONAL_JUMP)  ; LAB_00404c66
    CMP dword ptr [0x0061b4a0],0x20     ; 00404c13 | DAT_0061b4a0
    JNZ 0x00404c5a                      ; 00404c1a
        ;   XREF to: 00404c5a (CONDITIONAL_JUMP)  ; LAB_00404c5a
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 00404c1c | DAT_01c4f02c
    PUSH EDI                            ; 00404c26
        ;   Label: LAB_00404c26
    MOV EDI,0xc4                        ; 00404c27
    PUSH ESI                            ; 00404c2c
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404c2d
    MOV EBP,0x1                         ; 00404c30
    PUSH EAX                            ; 00404c35
    MOV dword ptr [0x01c51d14],EDI      ; 00404c36 | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EBP      ; 00404c3c | DAT_01c51d18
    CALL engine_clipper.c_clipAndRasterize_FUN_0043cbf0 ; 00404c42
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043cbf0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00404c47
    POP EDI                             ; 00404c4a
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404c4b
        ;   Label: LAB_00404c4b
    ADD EBX,0x18                        ; 00404c4e
    SHL EAX,0x2                         ; 00404c51
    ADD EAX,EBX                         ; 00404c54
    POP EBP                             ; 00404c56
    POP ESI                             ; 00404c57
    POP EBX                             ; 00404c58
    RET                                 ; 00404c59
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00404c5a | DAT_01c4f02c
        ;   Label: LAB_00404c5a
    JMP 0x00404c26                      ; 00404c64
        ;   XREF to: 00404c26 (UNCONDITIONAL_JUMP)  ; LAB_00404c26
    CMP dword ptr [0x0061b4a0],0x20     ; 00404c66 | DAT_0061b4a0
        ;   Label: LAB_00404c66
    JNZ 0x00404c7b                      ; 00404c6d
        ;   XREF to: 00404c7b (CONDITIONAL_JUMP)  ; LAB_00404c7b
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00404c6f | DAT_01c4f02c
    JMP 0x00404c26                      ; 00404c79
        ;   XREF to: 00404c26 (UNCONDITIONAL_JUMP)  ; LAB_00404c26
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00404c7b | DAT_01c4f02c
        ;   Label: LAB_00404c7b
    JMP 0x00404c26                      ; 00404c85
        ;   XREF to: 00404c26 (UNCONDITIONAL_JUMP)  ; LAB_00404c26

