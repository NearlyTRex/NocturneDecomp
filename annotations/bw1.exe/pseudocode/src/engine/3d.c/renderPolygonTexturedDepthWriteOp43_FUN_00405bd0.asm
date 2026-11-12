; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedDepthWriteOp43_FUN_00405bd0(SMRGLHeaderPrimitive *prim)
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

    PUSH EBX                            ; 00405bd0
        ;   Label: engine_3d.c_renderPolygonTexturedDepthWriteOp43_FUN_00405bd0
    PUSH ESI                            ; 00405bd1
    PUSH EBP                            ; 00405bd2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00405bd3
    LEA ESI,[EBX + 0x18]                ; 00405bd7
    LEA EAX,[EBX + 0x8]                 ; 00405bda
    PUSH EAX                            ; 00405bdd
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00405bde
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 00405be3
    TEST EAX,EAX                        ; 00405be6
    JZ 0x00405c2b                       ; 00405be8
        ;   XREF to: 00405c2b (CONDITIONAL_JUMP)  ; LAB_00405c2b
    CMP dword ptr [0x01c51d00],0x0      ; 00405bea | DAT_01c51d00
    JNZ 0x00405c46                      ; 00405bf1
        ;   XREF to: 00405c46 (CONDITIONAL_JUMP)  ; LAB_00405c46
    CMP dword ptr [0x0061b4a0],0x20     ; 00405bf3 | DAT_0061b4a0
    JNZ 0x00405c3a                      ; 00405bfa
        ;   XREF to: 00405c3a (CONDITIONAL_JUMP)  ; LAB_00405c3a
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 00405bfc | DAT_01c4f02c
    PUSH EDI                            ; 00405c06
        ;   Label: LAB_00405c06
    MOV EDI,0x81                        ; 00405c07
    PUSH ESI                            ; 00405c0c
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405c0d
    MOV EBP,0x1                         ; 00405c10
    PUSH EAX                            ; 00405c15
    MOV dword ptr [0x01c51d14],EDI      ; 00405c16 | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EBP      ; 00405c1c | DAT_01c51d18
    CALL engine_clipper.c_clipAndRasterize_FUN_0043cbf0 ; 00405c22
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043cbf0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405c27
    POP EDI                             ; 00405c2a
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405c2b
        ;   Label: LAB_00405c2b
    ADD EBX,0x18                        ; 00405c2e
    SHL EAX,0x2                         ; 00405c31
    ADD EAX,EBX                         ; 00405c34
    POP EBP                             ; 00405c36
    POP ESI                             ; 00405c37
    POP EBX                             ; 00405c38
    RET                                 ; 00405c39
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00405c3a | DAT_01c4f02c
        ;   Label: LAB_00405c3a
    JMP 0x00405c06                      ; 00405c44
        ;   XREF to: 00405c06 (UNCONDITIONAL_JUMP)  ; LAB_00405c06
    CMP dword ptr [0x0061b4a0],0x20     ; 00405c46 | DAT_0061b4a0
        ;   Label: LAB_00405c46
    JNZ 0x00405c5b                      ; 00405c4d
        ;   XREF to: 00405c5b (CONDITIONAL_JUMP)  ; LAB_00405c5b
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00405c4f | DAT_01c4f02c
    JMP 0x00405c06                      ; 00405c59
        ;   XREF to: 00405c06 (UNCONDITIONAL_JUMP)  ; LAB_00405c06
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00405c5b | DAT_01c4f02c
        ;   Label: LAB_00405c5b
    JMP 0x00405c06                      ; 00405c65
        ;   XREF to: 00405c06 (UNCONDITIONAL_JUMP)  ; LAB_00405c06

