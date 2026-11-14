; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonVertexAlphaLitOp60_FUN_00406a50(SMRGLHeaderPrimitive *prim)
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
;   engine_clipper.c_clipAndRasterize_FUN_0043a840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406a50
        ;   Label: engine_3d.c_renderPolygonVertexAlphaLitOp60_FUN_00406a50
    PUSH ESI                            ; 00406a51
    PUSH EBP                            ; 00406a52
    MOV EBX,dword ptr [ESP + 0x10]      ; 00406a53
    LEA ESI,[EBX + 0x18]                ; 00406a57
    LEA EAX,[EBX + 0x8]                 ; 00406a5a
    PUSH EAX                            ; 00406a5d
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00406a5e
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 00406a63
    TEST EAX,EAX                        ; 00406a66
    JZ 0x00406ab4                       ; 00406a68
        ;   XREF to: 00406ab4 (CONDITIONAL_JUMP)  ; LAB_00406ab4
    CMP dword ptr [0x01c6e2a0],0x0      ; 00406a6a | DAT_01c6e2a0
    JNZ 0x00406acf                      ; 00406a71
        ;   XREF to: 00406acf (CONDITIONAL_JUMP)  ; LAB_00406acf
    CMP dword ptr [0x005fba20],0x20     ; 00406a73 | DAT_005fba20
    JNZ 0x00406ac3                      ; 00406a7a
        ;   XREF to: 00406ac3 (CONDITIONAL_JUMP)  ; LAB_00406ac3
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 00406a7c | DAT_01c6b5cc
    PUSH EDI                            ; 00406a86
        ;   Label: LAB_00406a86
    MOV EDI,0x163                       ; 00406a87
    MOV EBP,0x1                         ; 00406a8c
    PUSH EBX                            ; 00406a91
    MOV dword ptr [0x01c6e2b4],EDI      ; 00406a92 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EBP      ; 00406a98 | DAT_01c6e2b8
    CALL engine_3d.c_calculatePolygonLighting_FUN_004039d0 ; 00406a9e
        ;   XREF to: 004039d0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_004039d0(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 00406aa3
    PUSH ESI                            ; 00406aa6
    MOV EAX,dword ptr [EBX + 0x4]       ; 00406aa7
    PUSH EAX                            ; 00406aaa
    CALL engine_clipper.c_clipAndRasterize_FUN_0043a840 ; 00406aab
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043a840(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00406ab0
    POP EDI                             ; 00406ab3
    MOV EAX,dword ptr [EBX + 0x4]       ; 00406ab4
        ;   Label: LAB_00406ab4
    ADD EBX,0x18                        ; 00406ab7
    SHL EAX,0x2                         ; 00406aba
    ADD EAX,EBX                         ; 00406abd
    POP EBP                             ; 00406abf
    POP ESI                             ; 00406ac0
    POP EBX                             ; 00406ac1
    RET                                 ; 00406ac2
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00406ac3 | DAT_01c6b5cc
        ;   Label: LAB_00406ac3
    JMP 0x00406a86                      ; 00406acd
        ;   XREF to: 00406a86 (UNCONDITIONAL_JUMP)  ; LAB_00406a86
    CMP dword ptr [0x005fba20],0x20     ; 00406acf | DAT_005fba20
        ;   Label: LAB_00406acf
    JNZ 0x00406ae4                      ; 00406ad6
        ;   XREF to: 00406ae4 (CONDITIONAL_JUMP)  ; LAB_00406ae4
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00406ad8 | DAT_01c6b5cc
    JMP 0x00406a86                      ; 00406ae2
        ;   XREF to: 00406a86 (UNCONDITIONAL_JUMP)  ; LAB_00406a86
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00406ae4 | DAT_01c6b5cc
        ;   Label: LAB_00406ae4
    JMP 0x00406a86                      ; 00406aee
        ;   XREF to: 00406a86 (UNCONDITIONAL_JUMP)  ; LAB_00406a86

