; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAlphaTexturedNormalizedLit_FUN_00405360(SMRGLHeaderPrimitive *prim)
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

    PUSH EBX                            ; 00405360
        ;   Label: engine_3d.c_renderPolygonAlphaTexturedNormalizedLit_FUN_00405360
    PUSH ESI                            ; 00405361
    PUSH EBP                            ; 00405362
    MOV EBX,dword ptr [ESP + 0x10]      ; 00405363
    LEA ESI,[EBX + 0x18]                ; 00405367
    LEA EAX,[EBX + 0x8]                 ; 0040536a
    PUSH EAX                            ; 0040536d
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0040536e
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 00405373
    TEST EAX,EAX                        ; 00405376
    JZ 0x004053c4                       ; 00405378
        ;   XREF to: 004053c4 (CONDITIONAL_JUMP)  ; LAB_004053c4
    CMP dword ptr [0x01c6e2a0],0x0      ; 0040537a | DAT_01c6e2a0
    JNZ 0x004053df                      ; 00405381
        ;   XREF to: 004053df (CONDITIONAL_JUMP)  ; LAB_004053df
    CMP dword ptr [0x005fba20],0x20     ; 00405383 | DAT_005fba20
    JNZ 0x004053d3                      ; 0040538a
        ;   XREF to: 004053d3 (CONDITIONAL_JUMP)  ; LAB_004053d3
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 0040538c | DAT_01c6b5cc
    PUSH EDI                            ; 00405396
        ;   Label: LAB_00405396
    MOV EDI,0x9                         ; 00405397
    MOV EBP,0x2                         ; 0040539c
    PUSH EBX                            ; 004053a1
    MOV dword ptr [0x01c6e2b4],EDI      ; 004053a2 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EBP      ; 004053a8 | DAT_01c6e2b8
    CALL engine_3d.c_calculatePolygonLighting_FUN_004039d0 ; 004053ae
        ;   XREF to: 004039d0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_calculatePolygonLighting_FUN_004039d0()
    ADD ESP,0x4                         ; 004053b3
    PUSH ESI                            ; 004053b6
    MOV EAX,dword ptr [EBX + 0x4]       ; 004053b7
    PUSH EAX                            ; 004053ba
    CALL engine_clipper.c_clipAndRasterize_FUN_0043a840 ; 004053bb
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043a840(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004053c0
    POP EDI                             ; 004053c3
    MOV EAX,dword ptr [EBX + 0x4]       ; 004053c4
        ;   Label: LAB_004053c4
    ADD EBX,0x18                        ; 004053c7
    SHL EAX,0x2                         ; 004053ca
    ADD EAX,EBX                         ; 004053cd
    POP EBP                             ; 004053cf
    POP ESI                             ; 004053d0
    POP EBX                             ; 004053d1
    RET                                 ; 004053d2
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 004053d3 | DAT_01c6b5cc
        ;   Label: LAB_004053d3
    JMP 0x00405396                      ; 004053dd
        ;   XREF to: 00405396 (UNCONDITIONAL_JUMP)  ; LAB_00405396
    CMP dword ptr [0x005fba20],0x20     ; 004053df | DAT_005fba20
        ;   Label: LAB_004053df
    JNZ 0x004053f4                      ; 004053e6
        ;   XREF to: 004053f4 (CONDITIONAL_JUMP)  ; LAB_004053f4
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 004053e8 | DAT_01c6b5cc
    JMP 0x00405396                      ; 004053f2
        ;   XREF to: 00405396 (UNCONDITIONAL_JUMP)  ; LAB_00405396
    MOV dword ptr [0x01c6b5cc],0x561713 ; 004053f4 | DAT_01c6b5cc
        ;   Label: LAB_004053f4
    JMP 0x00405396                      ; 004053fe
        ;   XREF to: 00405396 (UNCONDITIONAL_JUMP)  ; LAB_00405396

