; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFogTexturedPerspOp39_FUN_00405720(SMRGLHeaderPrimitive *prim)
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
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_clipper.c_clipAndRasterize_FUN_0043cbf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00405720
        ;   Label: engine_3d.c_renderPolygonFogTexturedPerspOp39_FUN_00405720
    PUSH ESI                            ; 00405721
    MOV EBX,dword ptr [ESP + 0xc]       ; 00405722
    LEA ESI,[EBX + 0x18]                ; 00405726
    LEA EAX,[EBX + 0x8]                 ; 00405729
    PUSH EAX                            ; 0040572c
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0040572d
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 00405732
    TEST EAX,EAX                        ; 00405735
    JZ 0x00405775                       ; 00405737
        ;   XREF to: 00405775 (CONDITIONAL_JUMP)  ; LAB_00405775
    CMP dword ptr [0x01c51d00],0x0      ; 00405739 | DAT_01c51d00
    JNZ 0x0040578f                      ; 00405740
        ;   XREF to: 0040578f (CONDITIONAL_JUMP)  ; LAB_0040578f
    CMP dword ptr [0x0061b4a0],0x20     ; 00405742 | DAT_0061b4a0
    JNZ 0x00405783                      ; 00405749
        ;   XREF to: 00405783 (CONDITIONAL_JUMP)  ; LAB_00405783
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 0040574b | DAT_01c4f02c
    PUSH EDI                            ; 00405755
        ;   Label: LAB_00405755
    PUSH ESI                            ; 00405756
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405757
    MOV EDI,0x5                         ; 0040575a
    PUSH EAX                            ; 0040575f
    MOV dword ptr [0x01c51d14],EDI      ; 00405760 | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EDI      ; 00405766 | DAT_01c51d18
    CALL engine_clipper.c_clipAndRasterize_FUN_0043cbf0 ; 0040576c
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043cbf0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405771
    POP EDI                             ; 00405774
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405775
        ;   Label: LAB_00405775
    ADD EBX,0x18                        ; 00405778
    SHL EAX,0x2                         ; 0040577b
    ADD EAX,EBX                         ; 0040577e
    POP ESI                             ; 00405780
    POP EBX                             ; 00405781
    RET                                 ; 00405782
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00405783 | DAT_01c4f02c
        ;   Label: LAB_00405783
    JMP 0x00405755                      ; 0040578d
        ;   XREF to: 00405755 (UNCONDITIONAL_JUMP)  ; LAB_00405755
    CMP dword ptr [0x0061b4a0],0x20     ; 0040578f | DAT_0061b4a0
        ;   Label: LAB_0040578f
    JNZ 0x004057a4                      ; 00405796
        ;   XREF to: 004057a4 (CONDITIONAL_JUMP)  ; LAB_004057a4
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00405798 | DAT_01c4f02c
    JMP 0x00405755                      ; 004057a2
        ;   XREF to: 00405755 (UNCONDITIONAL_JUMP)  ; LAB_00405755
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 004057a4 | DAT_01c4f02c
        ;   Label: LAB_004057a4
    JMP 0x00405755                      ; 004057ae
        ;   XREF to: 00405755 (UNCONDITIONAL_JUMP)  ; LAB_00405755

