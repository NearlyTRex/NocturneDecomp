; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedOp46_FUN_00405db0(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2a0
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_clipper.c_clipAndRasterize_FUN_0043a840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00405db0
        ;   Label: engine_3d.c_renderPolygonTexturedOp46_FUN_00405db0
    PUSH ESI                            ; 00405db1
    PUSH EBP                            ; 00405db2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00405db3
    LEA ESI,[EBX + 0x18]                ; 00405db7
    LEA EAX,[EBX + 0x8]                 ; 00405dba
    PUSH EAX                            ; 00405dbd
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00405dbe
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 00405dc3
    TEST EAX,EAX                        ; 00405dc6
    JZ 0x00405e08                       ; 00405dc8
        ;   XREF to: 00405e08 (CONDITIONAL_JUMP)  ; LAB_00405e08
    CMP dword ptr [0x01c6e2a0],0x0      ; 00405dca | DAT_01c6e2a0
    JNZ 0x00405e23                      ; 00405dd1
        ;   XREF to: 00405e23 (CONDITIONAL_JUMP)  ; LAB_00405e23
    CMP dword ptr [0x005fba20],0x20     ; 00405dd3 | DAT_005fba20
    JNZ 0x00405e17                      ; 00405dda
        ;   XREF to: 00405e17 (CONDITIONAL_JUMP)  ; LAB_00405e17
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 00405ddc | DAT_01c6b5cc
    PUSH EDI                            ; 00405de6
        ;   Label: LAB_00405de6
    MOV EDI,0x1                         ; 00405de7
    PUSH ESI                            ; 00405dec
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405ded
    XOR EBP,EBP                         ; 00405df0
    PUSH EAX                            ; 00405df2
    MOV dword ptr [0x01c6e2b4],EDI      ; 00405df3 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EBP      ; 00405df9 | DAT_01c6e2b8
    CALL engine_clipper.c_clipAndRasterize_FUN_0043a840 ; 00405dff
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043a840(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405e04
    POP EDI                             ; 00405e07
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405e08
        ;   Label: LAB_00405e08
    ADD EBX,0x18                        ; 00405e0b
    SHL EAX,0x2                         ; 00405e0e
    ADD EAX,EBX                         ; 00405e11
    POP EBP                             ; 00405e13
    POP ESI                             ; 00405e14
    POP EBX                             ; 00405e15
    RET                                 ; 00405e16
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00405e17 | DAT_01c6b5cc
        ;   Label: LAB_00405e17
    JMP 0x00405de6                      ; 00405e21
        ;   XREF to: 00405de6 (UNCONDITIONAL_JUMP)  ; LAB_00405de6
    CMP dword ptr [0x005fba20],0x20     ; 00405e23 | DAT_005fba20
        ;   Label: LAB_00405e23
    JNZ 0x00405e38                      ; 00405e2a
        ;   XREF to: 00405e38 (CONDITIONAL_JUMP)  ; LAB_00405e38
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00405e2c | DAT_01c6b5cc
    JMP 0x00405de6                      ; 00405e36
        ;   XREF to: 00405de6 (UNCONDITIONAL_JUMP)  ; LAB_00405de6
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00405e38 | DAT_01c6b5cc
        ;   Label: LAB_00405e38
    JMP 0x00405de6                      ; 00405e42
        ;   XREF to: 00405de6 (UNCONDITIONAL_JUMP)  ; LAB_00405de6

