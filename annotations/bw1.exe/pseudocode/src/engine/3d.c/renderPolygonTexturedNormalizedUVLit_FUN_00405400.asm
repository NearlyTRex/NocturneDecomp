; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedNormalizedUVLit_FUN_00405400(SMRGLHeaderPrimitive *prim)
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
;   engine_3d.c_calculatePolygonLighting_FUN_004039d0
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_clipper.c_clipAndRasterize_FUN_0043cbf0
;   engine_matrix.c_normalizeVector3DFixed_FUN_00508700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00405400
        ;   Label: engine_3d.c_renderPolygonTexturedNormalizedUVLit_FUN_00405400
    PUSH ESI                            ; 00405401
    PUSH EDI                            ; 00405402
    PUSH EBP                            ; 00405403
    SUB ESP,0x18                        ; 00405404
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00405407
    MOV EAX,dword ptr [EBX + 0x8]       ; 0040540b
    MOV dword ptr [ESP],EAX             ; 0040540e
    MOV EAX,dword ptr [EBX + 0xc]       ; 00405411
    MOV dword ptr [ESP + 0x4],EAX       ; 00405414
    MOV EAX,dword ptr [EBX + 0x10]      ; 00405418
    MOV dword ptr [ESP + 0x8],EAX       ; 0040541b
    MOV EAX,ESP                         ; 0040541f
    PUSH EAX                            ; 00405421
    LEA ESI,[ESP + 0x10]                ; 00405422
    LEA EDI,[ESP + 0x4]                 ; 00405426
    CALL engine_matrix.c_normalizeVector3DFixed_FUN_00508700 ; 0040542a
        ;   XREF to: 00508700 (UNCONDITIONAL_CALL)  ; CVector3i * engine_matrix.c_normalizeVector3DFixed_FUN_00508700(CVector3i * input_vector, CVector3i * output_vector)
    LEA ESI,[ESP + 0x10]                ; 0040542f
    ADD ESP,0x4                         ; 00405433
    MOVSD ES:EDI,ESI                    ; 00405436
    MOVSD ES:EDI,ESI                    ; 00405437
    MOVSD ES:EDI,ESI                    ; 00405438
    LEA ESI,[EBX + 0x18]                ; 00405439
    LEA EAX,[EBX + 0x8]                 ; 0040543c
    PUSH EAX                            ; 0040543f
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00405440
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 00405445
    TEST EAX,EAX                        ; 00405448
    JZ 0x00405494                       ; 0040544a
        ;   XREF to: 00405494 (CONDITIONAL_JUMP)  ; LAB_00405494
    CMP dword ptr [0x01c51d00],0x0      ; 0040544c | DAT_01c51d00
    JNZ 0x004054b3                      ; 00405453
        ;   XREF to: 004054b3 (CONDITIONAL_JUMP)  ; LAB_004054b3
    CMP dword ptr [0x0061b4a0],0x20     ; 00405455 | DAT_0061b4a0
    JNZ 0x004054a7                      ; 0040545c
        ;   XREF to: 004054a7 (CONDITIONAL_JUMP)  ; LAB_004054a7
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 0040545e | DAT_01c4f02c
    MOV EDI,0x1                         ; 00405468
        ;   Label: LAB_00405468
    MOV EBP,0x2                         ; 0040546d
    PUSH EBX                            ; 00405472
    MOV dword ptr [0x01c51d14],EDI      ; 00405473 | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EBP      ; 00405479 | DAT_01c51d18
    CALL engine_3d.c_calculatePolygonLighting_FUN_004039d0 ; 0040547f
        ;   XREF to: 004039d0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_004039d0(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 00405484
    PUSH ESI                            ; 00405487
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405488
    PUSH EAX                            ; 0040548b
    CALL engine_clipper.c_clipAndRasterize_FUN_0043cbf0 ; 0040548c
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043cbf0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405491
    MOV ESI,dword ptr [EBX + 0x4]       ; 00405494
        ;   Label: LAB_00405494
    LEA EAX,[EBX + 0x18]                ; 00405497
    SHL ESI,0x2                         ; 0040549a
    ADD EAX,ESI                         ; 0040549d
    ADD ESP,0x18                        ; 0040549f
    POP EBP                             ; 004054a2
    POP EDI                             ; 004054a3
    POP ESI                             ; 004054a4
    POP EBX                             ; 004054a5
    RET                                 ; 004054a6
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 004054a7 | DAT_01c4f02c
        ;   Label: LAB_004054a7
    JMP 0x00405468                      ; 004054b1
        ;   XREF to: 00405468 (UNCONDITIONAL_JUMP)  ; LAB_00405468
    CMP dword ptr [0x0061b4a0],0x20     ; 004054b3 | DAT_0061b4a0
        ;   Label: LAB_004054b3
    JNZ 0x004054c8                      ; 004054ba
        ;   XREF to: 004054c8 (CONDITIONAL_JUMP)  ; LAB_004054c8
    MOV dword ptr [0x01c4f02c],0x57de01 ; 004054bc | DAT_01c4f02c
    JMP 0x00405468                      ; 004054c6
        ;   XREF to: 00405468 (UNCONDITIONAL_JUMP)  ; LAB_00405468
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 004054c8 | DAT_01c4f02c
        ;   Label: LAB_004054c8
    JMP 0x00405468                      ; 004054d2
        ;   XREF to: 00405468 (UNCONDITIONAL_JUMP)  ; LAB_00405468

