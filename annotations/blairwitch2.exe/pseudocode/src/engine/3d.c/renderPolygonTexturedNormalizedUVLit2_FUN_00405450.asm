; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedNormalizedUVLit2_FUN_00405450(SMRGLHeaderPrimitive *prim)
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

    PUSH EBX                            ; 00405450
        ;   Label: engine_3d.c_renderPolygonTexturedNormalizedUVLit2_FUN_00405450
    PUSH ESI                            ; 00405451
    PUSH EDI                            ; 00405452
    PUSH EBP                            ; 00405453
    SUB ESP,0x18                        ; 00405454
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00405457
    MOV EAX,dword ptr [EBX + 0x8]       ; 0040545b
    MOV dword ptr [ESP],EAX             ; 0040545e
    MOV EAX,dword ptr [EBX + 0xc]       ; 00405461
    MOV dword ptr [ESP + 0x4],EAX       ; 00405464
    MOV EAX,dword ptr [EBX + 0x10]      ; 00405468
    MOV dword ptr [ESP + 0x8],EAX       ; 0040546b
    MOV EAX,ESP                         ; 0040546f
    PUSH EAX                            ; 00405471
    LEA ESI,[ESP + 0x10]                ; 00405472
    LEA EDI,[ESP + 0x4]                 ; 00405476
    CALL engine_matrix.c_normalizeVector3DFixed_FUN_004e9a60 ; 0040547a
        ;   XREF to: 004e9a60 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_normalizeVector3DFixed_FUN_004e9a60()
    LEA ESI,[ESP + 0x10]                ; 0040547f
    ADD ESP,0x4                         ; 00405483
    MOVSD ES:EDI,ESI                    ; 00405486
    MOVSD ES:EDI,ESI                    ; 00405487
    MOVSD ES:EDI,ESI                    ; 00405488
    LEA ESI,[EBX + 0x18]                ; 00405489
    LEA EAX,[EBX + 0x8]                 ; 0040548c
    PUSH EAX                            ; 0040548f
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 00405490
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403970(SClipPlane * plane)
    ADD ESP,0x4                         ; 00405495
    TEST EAX,EAX                        ; 00405498
    JZ 0x004054e4                       ; 0040549a
        ;   XREF to: 004054e4 (CONDITIONAL_JUMP)  ; LAB_004054e4
    CMP dword ptr [0x01c38b40],0x0      ; 0040549c | DAT_01c38b40
    JNZ 0x00405503                      ; 004054a3
        ;   XREF to: 00405503 (CONDITIONAL_JUMP)  ; LAB_00405503
    CMP dword ptr [0x006141c0],0x20     ; 004054a5 | DAT_006141c0
    JNZ 0x004054f7                      ; 004054ac
        ;   XREF to: 004054f7 (CONDITIONAL_JUMP)  ; LAB_004054f7
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 004054ae | DAT_01c35e6c
    MOV EDI,0x1                         ; 004054b8
        ;   Label: LAB_004054b8
    MOV EBP,0x2                         ; 004054bd
    PUSH EBX                            ; 004054c2
    MOV dword ptr [0x01c38b54],EDI      ; 004054c3 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EBP      ; 004054c9 | DAT_01c38b58
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a20 ; 004054cf
        ;   XREF to: 00403a20 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00403a20(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 004054d4
    PUSH ESI                            ; 004054d7
    MOV EAX,dword ptr [EBX + 0x4]       ; 004054d8
    PUSH EAX                            ; 004054db
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 004054dc
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004054e1
    MOV ESI,dword ptr [EBX + 0x4]       ; 004054e4
        ;   Label: LAB_004054e4
    LEA EAX,[EBX + 0x18]                ; 004054e7
    SHL ESI,0x2                         ; 004054ea
    ADD EAX,ESI                         ; 004054ed
    ADD ESP,0x18                        ; 004054ef
    POP EBP                             ; 004054f2
    POP EDI                             ; 004054f3
    POP ESI                             ; 004054f4
    POP EBX                             ; 004054f5
    RET                                 ; 004054f6
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 004054f7 | DAT_01c35e6c
        ;   Label: LAB_004054f7
    JMP 0x004054b8                      ; 00405501
        ;   XREF to: 004054b8 (UNCONDITIONAL_JUMP)  ; LAB_004054b8
    CMP dword ptr [0x006141c0],0x20     ; 00405503 | DAT_006141c0
        ;   Label: LAB_00405503
    JNZ 0x00405518                      ; 0040550a
        ;   XREF to: 00405518 (CONDITIONAL_JUMP)  ; LAB_00405518
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 0040550c | DAT_01c35e6c
    JMP 0x004054b8                      ; 00405516
        ;   XREF to: 004054b8 (UNCONDITIONAL_JUMP)  ; LAB_004054b8
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00405518 | DAT_01c35e6c
        ;   Label: LAB_00405518
    JMP 0x004054b8                      ; 00405522
        ;   XREF to: 004054b8 (UNCONDITIONAL_JUMP)  ; LAB_004054b8

