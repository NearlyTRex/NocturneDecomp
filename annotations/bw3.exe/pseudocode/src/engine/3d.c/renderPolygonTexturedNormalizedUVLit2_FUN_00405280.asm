; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedNormalizedUVLit2_FUN_00405280(SMRGLHeaderPrimitive *prim)
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
;   engine_matrix.c_normalizeVector3DFixed_FUN_004e6140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00405280
        ;   Label: engine_3d.c_renderPolygonTexturedNormalizedUVLit2_FUN_00405280
    PUSH ESI                            ; 00405281
    PUSH EDI                            ; 00405282
    PUSH EBP                            ; 00405283
    SUB ESP,0x18                        ; 00405284
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00405287
    MOV EAX,dword ptr [EBX + 0x8]       ; 0040528b
    MOV dword ptr [ESP],EAX             ; 0040528e
    MOV EAX,dword ptr [EBX + 0xc]       ; 00405291
    MOV dword ptr [ESP + 0x4],EAX       ; 00405294
    MOV EAX,dword ptr [EBX + 0x10]      ; 00405298
    MOV dword ptr [ESP + 0x8],EAX       ; 0040529b
    MOV EAX,ESP                         ; 0040529f
    PUSH EAX                            ; 004052a1
    LEA ESI,[ESP + 0x10]                ; 004052a2
    LEA EDI,[ESP + 0x4]                 ; 004052a6
    CALL engine_matrix.c_normalizeVector3DFixed_FUN_004e6140 ; 004052aa
        ;   XREF to: 004e6140 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_normalizeVector3DFixed_FUN_004e6140()
    LEA ESI,[ESP + 0x10]                ; 004052af
    ADD ESP,0x4                         ; 004052b3
    MOVSD ES:EDI,ESI                    ; 004052b6
    MOVSD ES:EDI,ESI                    ; 004052b7
    MOVSD ES:EDI,ESI                    ; 004052b8
    LEA ESI,[EBX + 0x18]                ; 004052b9
    LEA EAX,[EBX + 0x8]                 ; 004052bc
    PUSH EAX                            ; 004052bf
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 004052c0
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 004052c5
    TEST EAX,EAX                        ; 004052c8
    JZ 0x00405314                       ; 004052ca
        ;   XREF to: 00405314 (CONDITIONAL_JUMP)  ; LAB_00405314
    CMP dword ptr [0x01c6e2a0],0x0      ; 004052cc | DAT_01c6e2a0
    JNZ 0x00405333                      ; 004052d3
        ;   XREF to: 00405333 (CONDITIONAL_JUMP)  ; LAB_00405333
    CMP dword ptr [0x005fba20],0x20     ; 004052d5 | DAT_005fba20
    JNZ 0x00405327                      ; 004052dc
        ;   XREF to: 00405327 (CONDITIONAL_JUMP)  ; LAB_00405327
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 004052de | DAT_01c6b5cc
    MOV EDI,0x1                         ; 004052e8
        ;   Label: LAB_004052e8
    MOV EBP,0x2                         ; 004052ed
    PUSH EBX                            ; 004052f2
    MOV dword ptr [0x01c6e2b4],EDI      ; 004052f3 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EBP      ; 004052f9 | DAT_01c6e2b8
    CALL engine_3d.c_calculatePolygonLighting_FUN_004039d0 ; 004052ff
        ;   XREF to: 004039d0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_calculatePolygonLighting_FUN_004039d0()
    ADD ESP,0x4                         ; 00405304
    PUSH ESI                            ; 00405307
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405308
    PUSH EAX                            ; 0040530b
    CALL engine_clipper.c_clipAndRasterize_FUN_0043a840 ; 0040530c
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043a840(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405311
    MOV ESI,dword ptr [EBX + 0x4]       ; 00405314
        ;   Label: LAB_00405314
    LEA EAX,[EBX + 0x18]                ; 00405317
    SHL ESI,0x2                         ; 0040531a
    ADD EAX,ESI                         ; 0040531d
    ADD ESP,0x18                        ; 0040531f
    POP EBP                             ; 00405322
    POP EDI                             ; 00405323
    POP ESI                             ; 00405324
    POP EBX                             ; 00405325
    RET                                 ; 00405326
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00405327 | DAT_01c6b5cc
        ;   Label: LAB_00405327
    JMP 0x004052e8                      ; 00405331
        ;   XREF to: 004052e8 (UNCONDITIONAL_JUMP)  ; LAB_004052e8
    CMP dword ptr [0x005fba20],0x20     ; 00405333 | DAT_005fba20
        ;   Label: LAB_00405333
    JNZ 0x00405348                      ; 0040533a
        ;   XREF to: 00405348 (CONDITIONAL_JUMP)  ; LAB_00405348
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 0040533c | DAT_01c6b5cc
    JMP 0x004052e8                      ; 00405346
        ;   XREF to: 004052e8 (UNCONDITIONAL_JUMP)  ; LAB_004052e8
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00405348 | DAT_01c6b5cc
        ;   Label: LAB_00405348
    JMP 0x004052e8                      ; 00405352
        ;   XREF to: 004052e8 (UNCONDITIONAL_JUMP)  ; LAB_004052e8

