; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedUVLit_FUN_00405370(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00403a20
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_clipper.c_clipAndRasterize_FUN_00431d90
;   engine_matrix.c_normalizeVector3DFixed_FUN_004e9a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00405370
        ;   Label: engine_3d.c_renderPolygonTexturedUVLit_FUN_00405370
    PUSH ESI                            ; 00405371
    PUSH EDI                            ; 00405372
    PUSH EBP                            ; 00405373
    SUB ESP,0x18                        ; 00405374
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00405377
    MOV EAX,dword ptr [EBX + 0x8]       ; 0040537b
    MOV dword ptr [ESP],EAX             ; 0040537e
    MOV EAX,dword ptr [EBX + 0xc]       ; 00405381
    MOV dword ptr [ESP + 0x4],EAX       ; 00405384
    MOV EAX,dword ptr [EBX + 0x10]      ; 00405388
    MOV dword ptr [ESP + 0x8],EAX       ; 0040538b
    MOV EAX,ESP                         ; 0040538f
    PUSH EAX                            ; 00405391
    LEA ESI,[ESP + 0x10]                ; 00405392
    LEA EDI,[ESP + 0x4]                 ; 00405396
    CALL engine_matrix.c_normalizeVector3DFixed_FUN_004e9a60 ; 0040539a
        ;   XREF to: 004e9a60 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_normalizeVector3DFixed_FUN_004e9a60()
    LEA ESI,[ESP + 0x10]                ; 0040539f
    ADD ESP,0x4                         ; 004053a3
    MOVSD ES:EDI,ESI                    ; 004053a6
    MOVSD ES:EDI,ESI                    ; 004053a7
    MOVSD ES:EDI,ESI                    ; 004053a8
    LEA ESI,[EBX + 0x18]                ; 004053a9
    LEA EAX,[EBX + 0x8]                 ; 004053ac
    PUSH EAX                            ; 004053af
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 004053b0
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 004053b5
    TEST EAX,EAX                        ; 004053b8
    JZ 0x00405401                       ; 004053ba
        ;   XREF to: 00405401 (CONDITIONAL_JUMP)  ; LAB_00405401
    CMP dword ptr [0x01c38b40],0x0      ; 004053bc | DAT_01c38b40
    JNZ 0x00405420                      ; 004053c3
        ;   XREF to: 00405420 (CONDITIONAL_JUMP)  ; LAB_00405420
    CMP dword ptr [0x006141c0],0x20     ; 004053c5 | DAT_006141c0
    JNZ 0x00405414                      ; 004053cc
        ;   XREF to: 00405414 (CONDITIONAL_JUMP)  ; LAB_00405414
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 004053ce | DAT_01c35e6c
    MOV EDI,0x1                         ; 004053d8
        ;   Label: LAB_004053d8
    PUSH EBX                            ; 004053dd
    XOR EBP,EBP                         ; 004053de
    MOV dword ptr [0x01c38b54],EDI      ; 004053e0 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EBP      ; 004053e6 | DAT_01c38b58
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a20 ; 004053ec
        ;   XREF to: 00403a20 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_calculatePolygonLighting_FUN_00403a20()
    ADD ESP,0x4                         ; 004053f1
    PUSH ESI                            ; 004053f4
    MOV EAX,dword ptr [EBX + 0x4]       ; 004053f5
    PUSH EAX                            ; 004053f8
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 004053f9
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004053fe
    MOV ESI,dword ptr [EBX + 0x4]       ; 00405401
        ;   Label: LAB_00405401
    LEA EAX,[EBX + 0x18]                ; 00405404
    SHL ESI,0x2                         ; 00405407
    ADD EAX,ESI                         ; 0040540a
    ADD ESP,0x18                        ; 0040540c
    POP EBP                             ; 0040540f
    POP EDI                             ; 00405410
    POP ESI                             ; 00405411
    POP EBX                             ; 00405412
    RET                                 ; 00405413
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00405414 | DAT_01c35e6c
        ;   Label: LAB_00405414
    JMP 0x004053d8                      ; 0040541e
        ;   XREF to: 004053d8 (UNCONDITIONAL_JUMP)  ; LAB_004053d8
    CMP dword ptr [0x006141c0],0x20     ; 00405420 | DAT_006141c0
        ;   Label: LAB_00405420
    JNZ 0x00405435                      ; 00405427
        ;   XREF to: 00405435 (CONDITIONAL_JUMP)  ; LAB_00405435
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00405429 | DAT_01c35e6c
    JMP 0x004053d8                      ; 00405433
        ;   XREF to: 004053d8 (UNCONDITIONAL_JUMP)  ; LAB_004053d8
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00405435 | DAT_01c35e6c
        ;   Label: LAB_00405435
    JMP 0x004053d8                      ; 0040543f
        ;   XREF to: 004053d8 (UNCONDITIONAL_JUMP)  ; LAB_004053d8

