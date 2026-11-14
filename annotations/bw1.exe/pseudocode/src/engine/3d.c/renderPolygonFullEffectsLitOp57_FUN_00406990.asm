; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsLitOp57_FUN_00406990(SMRGLHeaderPrimitive *prim)
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
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406990
        ;   Label: engine_3d.c_renderPolygonFullEffectsLitOp57_FUN_00406990
    PUSH ESI                            ; 00406991
    PUSH EBP                            ; 00406992
    MOV EBX,dword ptr [ESP + 0x10]      ; 00406993
    LEA ESI,[EBX + 0x18]                ; 00406997
    LEA EAX,[EBX + 0x8]                 ; 0040699a
    PUSH EAX                            ; 0040699d
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0040699e
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 004069a3
    TEST EAX,EAX                        ; 004069a6
    JZ 0x004069f4                       ; 004069a8
        ;   XREF to: 004069f4 (CONDITIONAL_JUMP)  ; LAB_004069f4
    CMP dword ptr [0x01c51d00],0x0      ; 004069aa | DAT_01c51d00
    JNZ 0x00406a0f                      ; 004069b1
        ;   XREF to: 00406a0f (CONDITIONAL_JUMP)  ; LAB_00406a0f
    CMP dword ptr [0x0061b4a0],0x20     ; 004069b3 | DAT_0061b4a0
    JNZ 0x00406a03                      ; 004069ba
        ;   XREF to: 00406a03 (CONDITIONAL_JUMP)  ; LAB_00406a03
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 004069bc | DAT_01c4f02c
    PUSH EDI                            ; 004069c6
        ;   Label: LAB_004069c6
    MOV EDI,0x1f3                       ; 004069c7
    MOV EBP,0x1                         ; 004069cc
    PUSH EBX                            ; 004069d1
    MOV dword ptr [0x01c51d14],EDI      ; 004069d2 | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EBP      ; 004069d8 | DAT_01c51d18
    CALL engine_3d.c_calculatePolygonLighting_FUN_004039d0 ; 004069de
        ;   XREF to: 004039d0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_004039d0(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 004069e3
    PUSH ESI                            ; 004069e6
    MOV EAX,dword ptr [EBX + 0x4]       ; 004069e7
    PUSH EAX                            ; 004069ea
    CALL engine_clipper.c_clipAndRasterize_FUN_0043cbf0 ; 004069eb
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043cbf0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004069f0
    POP EDI                             ; 004069f3
    MOV EAX,dword ptr [EBX + 0x4]       ; 004069f4
        ;   Label: LAB_004069f4
    ADD EBX,0x18                        ; 004069f7
    SHL EAX,0x2                         ; 004069fa
    ADD EAX,EBX                         ; 004069fd
    POP EBP                             ; 004069ff
    POP ESI                             ; 00406a00
    POP EBX                             ; 00406a01
    RET                                 ; 00406a02
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00406a03 | DAT_01c4f02c
        ;   Label: LAB_00406a03
    JMP 0x004069c6                      ; 00406a0d
        ;   XREF to: 004069c6 (UNCONDITIONAL_JUMP)  ; LAB_004069c6
    CMP dword ptr [0x0061b4a0],0x20     ; 00406a0f | DAT_0061b4a0
        ;   Label: LAB_00406a0f
    JNZ 0x00406a24                      ; 00406a16
        ;   XREF to: 00406a24 (CONDITIONAL_JUMP)  ; LAB_00406a24
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00406a18 | DAT_01c4f02c
    JMP 0x004069c6                      ; 00406a22
        ;   XREF to: 004069c6 (UNCONDITIONAL_JUMP)  ; LAB_004069c6
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00406a24 | DAT_01c4f02c
        ;   Label: LAB_00406a24
    JMP 0x004069c6                      ; 00406a2e
        ;   XREF to: 004069c6 (UNCONDITIONAL_JUMP)  ; LAB_004069c6

