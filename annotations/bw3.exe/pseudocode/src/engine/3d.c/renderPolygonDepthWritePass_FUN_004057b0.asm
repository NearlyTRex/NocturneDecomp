; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonDepthWritePass_FUN_004057b0(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; XREF[2]:
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406d90 at 00406eb6
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_00406c50 at 00406d73
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

    PUSH EBX                            ; 004057b0
        ;   Label: engine_3d.c_renderPolygonDepthWritePass_FUN_004057b0
    PUSH ESI                            ; 004057b1
    PUSH EBP                            ; 004057b2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004057b3
    LEA ESI,[EBX + 0x18]                ; 004057b7
    LEA EAX,[EBX + 0x8]                 ; 004057ba
    PUSH EAX                            ; 004057bd
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 004057be
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 004057c3
    TEST EAX,EAX                        ; 004057c6
    JZ 0x0040580b                       ; 004057c8
        ;   XREF to: 0040580b (CONDITIONAL_JUMP)  ; LAB_0040580b
    CMP dword ptr [0x01c6e2a0],0x0      ; 004057ca | DAT_01c6e2a0
    JNZ 0x00405826                      ; 004057d1
        ;   XREF to: 00405826 (CONDITIONAL_JUMP)  ; LAB_00405826
    CMP dword ptr [0x005fba20],0x20     ; 004057d3 | DAT_005fba20
    JNZ 0x0040581a                      ; 004057da
        ;   XREF to: 0040581a (CONDITIONAL_JUMP)  ; LAB_0040581a
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 004057dc | DAT_01c6b5cc
    PUSH EDI                            ; 004057e6
        ;   Label: LAB_004057e6
    MOV EDI,0x80                        ; 004057e7
    PUSH ESI                            ; 004057ec
    MOV EAX,dword ptr [EBX + 0x4]       ; 004057ed
    MOV EBP,0x1                         ; 004057f0
    PUSH EAX                            ; 004057f5
    MOV dword ptr [0x01c6e2b4],EDI      ; 004057f6 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EBP      ; 004057fc | DAT_01c6e2b8
    CALL engine_clipper.c_clipAndRasterize_FUN_0043a840 ; 00405802
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043a840(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405807
    POP EDI                             ; 0040580a
    MOV EAX,dword ptr [EBX + 0x4]       ; 0040580b
        ;   Label: LAB_0040580b
    ADD EBX,0x18                        ; 0040580e
    SHL EAX,0x2                         ; 00405811
    ADD EAX,EBX                         ; 00405814
    POP EBP                             ; 00405816
    POP ESI                             ; 00405817
    POP EBX                             ; 00405818
    RET                                 ; 00405819
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 0040581a | DAT_01c6b5cc
        ;   Label: LAB_0040581a
    JMP 0x004057e6                      ; 00405824
        ;   XREF to: 004057e6 (UNCONDITIONAL_JUMP)  ; LAB_004057e6
    CMP dword ptr [0x005fba20],0x20     ; 00405826 | DAT_005fba20
        ;   Label: LAB_00405826
    JNZ 0x0040583b                      ; 0040582d
        ;   XREF to: 0040583b (CONDITIONAL_JUMP)  ; LAB_0040583b
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 0040582f | DAT_01c6b5cc
    JMP 0x004057e6                      ; 00405839
        ;   XREF to: 004057e6 (UNCONDITIONAL_JUMP)  ; LAB_004057e6
    MOV dword ptr [0x01c6b5cc],0x561713 ; 0040583b | DAT_01c6b5cc
        ;   Label: LAB_0040583b
    JMP 0x004057e6                      ; 00405845
        ;   XREF to: 004057e6 (UNCONDITIONAL_JUMP)  ; LAB_004057e6

