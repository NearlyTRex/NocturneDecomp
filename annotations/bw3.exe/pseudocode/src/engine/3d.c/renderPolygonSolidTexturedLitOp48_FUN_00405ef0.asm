; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidTexturedLitOp48_FUN_00405ef0(SMRGLHeaderPrimitive *prim)
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
;   engine_3d.c_calculatePolygonLighting_FUN_004039d0
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_3d.c_setRenderAlpha_FUN_00406bf0
;   engine_clipper.c_clipAndRasterize_FUN_0043a840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00405ef0
        ;   Label: engine_3d.c_renderPolygonSolidTexturedLitOp48_FUN_00405ef0
    PUSH ESI                            ; 00405ef1
    PUSH EBP                            ; 00405ef2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00405ef3
    LEA ESI,[EBX + 0x18]                ; 00405ef7
    LEA EAX,[EBX + 0x8]                 ; 00405efa
    PUSH EAX                            ; 00405efd
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00405efe
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 00405f03
    TEST EAX,EAX                        ; 00405f06
    JZ 0x00405f61                       ; 00405f08
        ;   XREF to: 00405f61 (CONDITIONAL_JUMP)  ; LAB_00405f61
    CMP dword ptr [0x01c6e2a0],0x0      ; 00405f0a | DAT_01c6e2a0
    JNZ 0x00405f7c                      ; 00405f11
        ;   XREF to: 00405f7c (CONDITIONAL_JUMP)  ; LAB_00405f7c
    CMP dword ptr [0x005fba20],0x20     ; 00405f13 | DAT_005fba20
    JNZ 0x00405f70                      ; 00405f1a
        ;   XREF to: 00405f70 (CONDITIONAL_JUMP)  ; LAB_00405f70
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 00405f1c | DAT_01c6b5cc
    PUSH EDI                            ; 00405f26
        ;   Label: LAB_00405f26
    MOV EDI,0xc3                        ; 00405f27
    PUSH 0xffff                         ; 00405f2c
    MOV dword ptr [0x01c6e2b4],EDI      ; 00405f31 | DAT_01c6e2b4
    CALL engine_3d.c_setRenderAlpha_FUN_00406bf0 ; 00405f37
        ;   XREF to: 00406bf0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bf0(int alpha_color_value)
    ADD ESP,0x4                         ; 00405f3c
    MOV EBP,0x1                         ; 00405f3f
    PUSH EBX                            ; 00405f44
    MOV dword ptr [0x01c6e2b8],EBP      ; 00405f45 | DAT_01c6e2b8
    CALL engine_3d.c_calculatePolygonLighting_FUN_004039d0 ; 00405f4b
        ;   XREF to: 004039d0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_004039d0(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 00405f50
    PUSH ESI                            ; 00405f53
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405f54
    PUSH EAX                            ; 00405f57
    CALL engine_clipper.c_clipAndRasterize_FUN_0043a840 ; 00405f58
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043a840(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405f5d
    POP EDI                             ; 00405f60
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405f61
        ;   Label: LAB_00405f61
    ADD EBX,0x18                        ; 00405f64
    SHL EAX,0x2                         ; 00405f67
    ADD EAX,EBX                         ; 00405f6a
    POP EBP                             ; 00405f6c
    POP ESI                             ; 00405f6d
    POP EBX                             ; 00405f6e
    RET                                 ; 00405f6f
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00405f70 | DAT_01c6b5cc
        ;   Label: LAB_00405f70
    JMP 0x00405f26                      ; 00405f7a
        ;   XREF to: 00405f26 (UNCONDITIONAL_JUMP)  ; LAB_00405f26
    CMP dword ptr [0x005fba20],0x20     ; 00405f7c | DAT_005fba20
        ;   Label: LAB_00405f7c
    JNZ 0x00405f91                      ; 00405f83
        ;   XREF to: 00405f91 (CONDITIONAL_JUMP)  ; LAB_00405f91
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00405f85 | DAT_01c6b5cc
    JMP 0x00405f26                      ; 00405f8f
        ;   XREF to: 00405f26 (UNCONDITIONAL_JUMP)  ; LAB_00405f26
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00405f91 | DAT_01c6b5cc
        ;   Label: LAB_00405f91
    JMP 0x00405f26                      ; 00405f9b
        ;   XREF to: 00405f26 (UNCONDITIONAL_JUMP)  ; LAB_00405f26

