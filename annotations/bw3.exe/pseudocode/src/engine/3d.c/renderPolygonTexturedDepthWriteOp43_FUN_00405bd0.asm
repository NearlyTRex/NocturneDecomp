; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedDepthWriteOp43_FUN_00405bd0(SMRGLHeaderPrimitive *prim)
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
    CMP dword ptr [0x01c6e2a0],0x0      ; 00405bea | DAT_01c6e2a0
    JNZ 0x00405c46                      ; 00405bf1
        ;   XREF to: 00405c46 (CONDITIONAL_JUMP)  ; LAB_00405c46
    CMP dword ptr [0x005fba20],0x20     ; 00405bf3 | DAT_005fba20
    JNZ 0x00405c3a                      ; 00405bfa
        ;   XREF to: 00405c3a (CONDITIONAL_JUMP)  ; LAB_00405c3a
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 00405bfc | DAT_01c6b5cc
    PUSH EDI                            ; 00405c06
        ;   Label: LAB_00405c06
    MOV EDI,0x81                        ; 00405c07
    PUSH ESI                            ; 00405c0c
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405c0d
    MOV EBP,0x1                         ; 00405c10
    PUSH EAX                            ; 00405c15
    MOV dword ptr [0x01c6e2b4],EDI      ; 00405c16 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EBP      ; 00405c1c | DAT_01c6e2b8
    CALL engine_clipper.c_clipAndRasterize_FUN_0043a840 ; 00405c22
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043a840(int vertex_count, int * vertex_indices)
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
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00405c3a | DAT_01c6b5cc
        ;   Label: LAB_00405c3a
    JMP 0x00405c06                      ; 00405c44
        ;   XREF to: 00405c06 (UNCONDITIONAL_JUMP)  ; LAB_00405c06
    CMP dword ptr [0x005fba20],0x20     ; 00405c46 | DAT_005fba20
        ;   Label: LAB_00405c46
    JNZ 0x00405c5b                      ; 00405c4d
        ;   XREF to: 00405c5b (CONDITIONAL_JUMP)  ; LAB_00405c5b
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00405c4f | DAT_01c6b5cc
    JMP 0x00405c06                      ; 00405c59
        ;   XREF to: 00405c06 (UNCONDITIONAL_JUMP)  ; LAB_00405c06
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00405c5b | DAT_01c6b5cc
        ;   Label: LAB_00405c5b
    JMP 0x00405c06                      ; 00405c65
        ;   XREF to: 00405c06 (UNCONDITIONAL_JUMP)  ; LAB_00405c06

