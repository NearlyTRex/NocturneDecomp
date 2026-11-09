; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonFogTexturedDepthOp42_FUN_00405b30(int param_1)
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
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_clipper.c_clipAndRasterize_FUN_0043cbf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00405b30
        ;   Label: engine_3d.c_renderPolygonFogTexturedDepthOp42_FUN_00405b30
    PUSH ESI                            ; 00405b31
    PUSH EBP                            ; 00405b32
    MOV EBX,dword ptr [ESP + 0x10]      ; 00405b33
    LEA ESI,[EBX + 0x18]                ; 00405b37
    LEA EAX,[EBX + 0x8]                 ; 00405b3a
    PUSH EAX                            ; 00405b3d
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00405b3e
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 00405b43
    TEST EAX,EAX                        ; 00405b46
    JZ 0x00405b8b                       ; 00405b48
        ;   XREF to: 00405b8b (CONDITIONAL_JUMP)  ; LAB_00405b8b
    CMP dword ptr [0x01c51d00],0x0      ; 00405b4a | DAT_01c51d00
    JNZ 0x00405ba6                      ; 00405b51
        ;   XREF to: 00405ba6 (CONDITIONAL_JUMP)  ; LAB_00405ba6
    CMP dword ptr [0x0061b4a0],0x20     ; 00405b53 | DAT_0061b4a0
    JNZ 0x00405b9a                      ; 00405b5a
        ;   XREF to: 00405b9a (CONDITIONAL_JUMP)  ; LAB_00405b9a
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 00405b5c | DAT_01c4f02c
    PUSH EDI                            ; 00405b66
        ;   Label: LAB_00405b66
    MOV EDI,0xc5                        ; 00405b67
    PUSH ESI                            ; 00405b6c
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405b6d
    MOV EBP,0x1                         ; 00405b70
    PUSH EAX                            ; 00405b75
    MOV dword ptr [0x01c51d14],EDI      ; 00405b76 | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EBP      ; 00405b7c | DAT_01c51d18
    CALL engine_clipper.c_clipAndRasterize_FUN_0043cbf0 ; 00405b82
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043cbf0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405b87
    POP EDI                             ; 00405b8a
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405b8b
        ;   Label: LAB_00405b8b
    ADD EBX,0x18                        ; 00405b8e
    SHL EAX,0x2                         ; 00405b91
    ADD EAX,EBX                         ; 00405b94
    POP EBP                             ; 00405b96
    POP ESI                             ; 00405b97
    POP EBX                             ; 00405b98
    RET                                 ; 00405b99
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00405b9a | DAT_01c4f02c
        ;   Label: LAB_00405b9a
    JMP 0x00405b66                      ; 00405ba4
        ;   XREF to: 00405b66 (UNCONDITIONAL_JUMP)  ; LAB_00405b66
    CMP dword ptr [0x0061b4a0],0x20     ; 00405ba6 | DAT_0061b4a0
        ;   Label: LAB_00405ba6
    JNZ 0x00405bbb                      ; 00405bad
        ;   XREF to: 00405bbb (CONDITIONAL_JUMP)  ; LAB_00405bbb
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00405baf | DAT_01c4f02c
    JMP 0x00405b66                      ; 00405bb9
        ;   XREF to: 00405b66 (UNCONDITIONAL_JUMP)  ; LAB_00405b66
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00405bbb | DAT_01c4f02c
        ;   Label: LAB_00405bbb
    JMP 0x00405b66                      ; 00405bc5
        ;   XREF to: 00405b66 (UNCONDITIONAL_JUMP)  ; LAB_00405b66

