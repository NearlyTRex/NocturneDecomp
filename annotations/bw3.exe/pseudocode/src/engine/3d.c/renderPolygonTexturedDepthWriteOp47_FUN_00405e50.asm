; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedDepthWriteOp47_FUN_00405e50(SMRGLHeaderPrimitive *prim)
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

    PUSH EBX                            ; 00405e50
        ;   Label: engine_3d.c_renderPolygonTexturedDepthWriteOp47_FUN_00405e50
    PUSH ESI                            ; 00405e51
    PUSH EBP                            ; 00405e52
    MOV EBX,dword ptr [ESP + 0x10]      ; 00405e53
    LEA ESI,[EBX + 0x18]                ; 00405e57
    LEA EAX,[EBX + 0x8]                 ; 00405e5a
    PUSH EAX                            ; 00405e5d
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00405e5e
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 00405e63
    TEST EAX,EAX                        ; 00405e66
    JZ 0x00405eab                       ; 00405e68
        ;   XREF to: 00405eab (CONDITIONAL_JUMP)  ; LAB_00405eab
    CMP dword ptr [0x01c6e2a0],0x0      ; 00405e6a | DAT_01c6e2a0
    JNZ 0x00405ec6                      ; 00405e71
        ;   XREF to: 00405ec6 (CONDITIONAL_JUMP)  ; LAB_00405ec6
    CMP dword ptr [0x005fba20],0x20     ; 00405e73 | DAT_005fba20
    JNZ 0x00405eba                      ; 00405e7a
        ;   XREF to: 00405eba (CONDITIONAL_JUMP)  ; LAB_00405eba
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 00405e7c | DAT_01c6b5cc
    PUSH EDI                            ; 00405e86
        ;   Label: LAB_00405e86
    MOV EDI,0x81                        ; 00405e87
    PUSH ESI                            ; 00405e8c
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405e8d
    MOV EBP,0x1                         ; 00405e90
    PUSH EAX                            ; 00405e95
    MOV dword ptr [0x01c6e2b4],EDI      ; 00405e96 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EBP      ; 00405e9c | DAT_01c6e2b8
    CALL engine_clipper.c_clipAndRasterize_FUN_0043a840 ; 00405ea2
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043a840(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405ea7
    POP EDI                             ; 00405eaa
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405eab
        ;   Label: LAB_00405eab
    ADD EBX,0x18                        ; 00405eae
    SHL EAX,0x2                         ; 00405eb1
    ADD EAX,EBX                         ; 00405eb4
    POP EBP                             ; 00405eb6
    POP ESI                             ; 00405eb7
    POP EBX                             ; 00405eb8
    RET                                 ; 00405eb9
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00405eba | DAT_01c6b5cc
        ;   Label: LAB_00405eba
    JMP 0x00405e86                      ; 00405ec4
        ;   XREF to: 00405e86 (UNCONDITIONAL_JUMP)  ; LAB_00405e86
    CMP dword ptr [0x005fba20],0x20     ; 00405ec6 | DAT_005fba20
        ;   Label: LAB_00405ec6
    JNZ 0x00405edb                      ; 00405ecd
        ;   XREF to: 00405edb (CONDITIONAL_JUMP)  ; LAB_00405edb
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00405ecf | DAT_01c6b5cc
    JMP 0x00405e86                      ; 00405ed9
        ;   XREF to: 00405e86 (UNCONDITIONAL_JUMP)  ; LAB_00405e86
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00405edb | DAT_01c6b5cc
        ;   Label: LAB_00405edb
    JMP 0x00405e86                      ; 00405ee5
        ;   XREF to: 00405e86 (UNCONDITIONAL_JUMP)  ; LAB_00405e86

