; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonVertexAlphaLitOp60_FUN_00406a30(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d00
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_004039d0
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_clipper.c_clipAndRasterize_FUN_0043cbf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406a30
        ;   Label: engine_3d.c_renderPolygonVertexAlphaLitOp60_FUN_00406a30
    PUSH ESI                            ; 00406a31
    PUSH EBP                            ; 00406a32
    MOV EBX,dword ptr [ESP + 0x10]      ; 00406a33
    LEA ESI,[EBX + 0x18]                ; 00406a37
    LEA EAX,[EBX + 0x8]                 ; 00406a3a
    PUSH EAX                            ; 00406a3d
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00406a3e
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 00406a43
    TEST EAX,EAX                        ; 00406a46
    JZ 0x00406a94                       ; 00406a48
        ;   XREF to: 00406a94 (CONDITIONAL_JUMP)  ; LAB_00406a94
    CMP dword ptr [0x01c51d00],0x0      ; 00406a4a | DAT_01c51d00
    JNZ 0x00406aaf                      ; 00406a51
        ;   XREF to: 00406aaf (CONDITIONAL_JUMP)  ; LAB_00406aaf
    CMP dword ptr [0x0061b4a0],0x20     ; 00406a53 | DAT_0061b4a0
    JNZ 0x00406aa3                      ; 00406a5a
        ;   XREF to: 00406aa3 (CONDITIONAL_JUMP)  ; LAB_00406aa3
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 00406a5c | DAT_01c4f02c
    PUSH EDI                            ; 00406a66
        ;   Label: LAB_00406a66
    MOV EDI,0x163                       ; 00406a67
    MOV EBP,0x1                         ; 00406a6c
    PUSH EBX                            ; 00406a71
    MOV dword ptr [0x01c51d14],EDI      ; 00406a72 | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EBP      ; 00406a78 | DAT_01c51d18
    CALL engine_3d.c_calculatePolygonLighting_FUN_004039d0 ; 00406a7e
        ;   XREF to: 004039d0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_calculatePolygonLighting_FUN_004039d0()
    ADD ESP,0x4                         ; 00406a83
    PUSH ESI                            ; 00406a86
    MOV EAX,dword ptr [EBX + 0x4]       ; 00406a87
    PUSH EAX                            ; 00406a8a
    CALL engine_clipper.c_clipAndRasterize_FUN_0043cbf0 ; 00406a8b
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043cbf0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00406a90
    POP EDI                             ; 00406a93
    MOV EAX,dword ptr [EBX + 0x4]       ; 00406a94
        ;   Label: LAB_00406a94
    ADD EBX,0x18                        ; 00406a97
    SHL EAX,0x2                         ; 00406a9a
    ADD EAX,EBX                         ; 00406a9d
    POP EBP                             ; 00406a9f
    POP ESI                             ; 00406aa0
    POP EBX                             ; 00406aa1
    RET                                 ; 00406aa2
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00406aa3 | DAT_01c4f02c
        ;   Label: LAB_00406aa3
    JMP 0x00406a66                      ; 00406aad
        ;   XREF to: 00406a66 (UNCONDITIONAL_JUMP)  ; LAB_00406a66
    CMP dword ptr [0x0061b4a0],0x20     ; 00406aaf | DAT_0061b4a0
        ;   Label: LAB_00406aaf
    JNZ 0x00406ac4                      ; 00406ab6
        ;   XREF to: 00406ac4 (CONDITIONAL_JUMP)  ; LAB_00406ac4
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00406ab8 | DAT_01c4f02c
    JMP 0x00406a66                      ; 00406ac2
        ;   XREF to: 00406a66 (UNCONDITIONAL_JUMP)  ; LAB_00406a66
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00406ac4 | DAT_01c4f02c
        ;   Label: LAB_00406ac4
    JMP 0x00406a66                      ; 00406ace
        ;   XREF to: 00406a66 (UNCONDITIONAL_JUMP)  ; LAB_00406a66

