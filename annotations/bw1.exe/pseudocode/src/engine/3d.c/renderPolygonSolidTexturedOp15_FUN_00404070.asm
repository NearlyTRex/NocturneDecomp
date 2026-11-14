; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidTexturedOp15_FUN_00404070(SMRGLHeaderPrimitive *prim)
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
;   engine_3d.c_setRenderAlpha_FUN_00406bd0
;   engine_clipper.c_clipAndRasterize_FUN_0043cbf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404070
        ;   Label: engine_3d.c_renderPolygonSolidTexturedOp15_FUN_00404070
    PUSH ESI                            ; 00404071
    PUSH EBP                            ; 00404072
    MOV EBX,dword ptr [ESP + 0x10]      ; 00404073
    LEA ESI,[EBX + 0x18]                ; 00404077
    LEA EAX,[EBX + 0x8]                 ; 0040407a
    PUSH EAX                            ; 0040407d
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0040407e
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 00404083
    TEST EAX,EAX                        ; 00404086
    JZ 0x004040d5                       ; 00404088
        ;   XREF to: 004040d5 (CONDITIONAL_JUMP)  ; LAB_004040d5
    CMP dword ptr [0x01c51d00],0x0      ; 0040408a | DAT_01c51d00
    JNZ 0x004040f0                      ; 00404091
        ;   XREF to: 004040f0 (CONDITIONAL_JUMP)  ; LAB_004040f0
    CMP dword ptr [0x0061b4a0],0x20     ; 00404093 | DAT_0061b4a0
    JNZ 0x004040e4                      ; 0040409a
        ;   XREF to: 004040e4 (CONDITIONAL_JUMP)  ; LAB_004040e4
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 0040409c | DAT_01c4f02c
    PUSH EDI                            ; 004040a6
        ;   Label: LAB_004040a6
    MOV EDI,0x3                         ; 004040a7
    PUSH 0xffff                         ; 004040ac
    MOV dword ptr [0x01c51d14],EDI      ; 004040b1 | DAT_01c51d14
    CALL engine_3d.c_setRenderAlpha_FUN_00406bd0 ; 004040b7
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)
    ADD ESP,0x4                         ; 004040bc
    PUSH ESI                            ; 004040bf
    MOV EAX,dword ptr [EBX + 0x4]       ; 004040c0
    XOR EBP,EBP                         ; 004040c3
    PUSH EAX                            ; 004040c5
    MOV dword ptr [0x01c51d18],EBP      ; 004040c6 | DAT_01c51d18
    CALL engine_clipper.c_clipAndRasterize_FUN_0043cbf0 ; 004040cc
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043cbf0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004040d1
    POP EDI                             ; 004040d4
    MOV EAX,dword ptr [EBX + 0x4]       ; 004040d5
        ;   Label: LAB_004040d5
    ADD EBX,0x18                        ; 004040d8
    SHL EAX,0x2                         ; 004040db
    ADD EAX,EBX                         ; 004040de
    POP EBP                             ; 004040e0
    POP ESI                             ; 004040e1
    POP EBX                             ; 004040e2
    RET                                 ; 004040e3
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 004040e4 | DAT_01c4f02c
        ;   Label: LAB_004040e4
    JMP 0x004040a6                      ; 004040ee
        ;   XREF to: 004040a6 (UNCONDITIONAL_JUMP)  ; LAB_004040a6
    CMP dword ptr [0x0061b4a0],0x20     ; 004040f0 | DAT_0061b4a0
        ;   Label: LAB_004040f0
    JNZ 0x00404105                      ; 004040f7
        ;   XREF to: 00404105 (CONDITIONAL_JUMP)  ; LAB_00404105
    MOV dword ptr [0x01c4f02c],0x57de01 ; 004040f9 | DAT_01c4f02c
    JMP 0x004040a6                      ; 00404103
        ;   XREF to: 004040a6 (UNCONDITIONAL_JUMP)  ; LAB_004040a6
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00404105 | DAT_01c4f02c
        ;   Label: LAB_00404105
    JMP 0x004040a6                      ; 0040410f
        ;   XREF to: 004040a6 (UNCONDITIONAL_JUMP)  ; LAB_004040a6

