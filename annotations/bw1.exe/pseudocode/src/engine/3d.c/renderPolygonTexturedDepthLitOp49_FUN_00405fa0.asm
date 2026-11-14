; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedDepthLitOp49_FUN_00405fa0(SMRGLHeaderPrimitive *prim)
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

    PUSH EBX                            ; 00405fa0
        ;   Label: engine_3d.c_renderPolygonTexturedDepthLitOp49_FUN_00405fa0
    PUSH ESI                            ; 00405fa1
    PUSH EBP                            ; 00405fa2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00405fa3
    LEA ESI,[EBX + 0x18]                ; 00405fa7
    LEA EAX,[EBX + 0x8]                 ; 00405faa
    PUSH EAX                            ; 00405fad
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00405fae
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 00405fb3
    TEST EAX,EAX                        ; 00405fb6
    JZ 0x00406004                       ; 00405fb8
        ;   XREF to: 00406004 (CONDITIONAL_JUMP)  ; LAB_00406004
    CMP dword ptr [0x01c51d00],0x0      ; 00405fba | DAT_01c51d00
    JNZ 0x0040601f                      ; 00405fc1
        ;   XREF to: 0040601f (CONDITIONAL_JUMP)  ; LAB_0040601f
    CMP dword ptr [0x0061b4a0],0x20     ; 00405fc3 | DAT_0061b4a0
    JNZ 0x00406013                      ; 00405fca
        ;   XREF to: 00406013 (CONDITIONAL_JUMP)  ; LAB_00406013
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 00405fcc | DAT_01c4f02c
    PUSH EDI                            ; 00405fd6
        ;   Label: LAB_00405fd6
    MOV EDI,0xc1                        ; 00405fd7
    MOV EBP,0x1                         ; 00405fdc
    PUSH EBX                            ; 00405fe1
    MOV dword ptr [0x01c51d14],EDI      ; 00405fe2 | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EBP      ; 00405fe8 | DAT_01c51d18
    CALL engine_3d.c_calculatePolygonLighting_FUN_004039d0 ; 00405fee
        ;   XREF to: 004039d0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_004039d0(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 00405ff3
    PUSH ESI                            ; 00405ff6
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405ff7
    PUSH EAX                            ; 00405ffa
    CALL engine_clipper.c_clipAndRasterize_FUN_0043cbf0 ; 00405ffb
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043cbf0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00406000
    POP EDI                             ; 00406003
    MOV EAX,dword ptr [EBX + 0x4]       ; 00406004
        ;   Label: LAB_00406004
    ADD EBX,0x18                        ; 00406007
    SHL EAX,0x2                         ; 0040600a
    ADD EAX,EBX                         ; 0040600d
    POP EBP                             ; 0040600f
    POP ESI                             ; 00406010
    POP EBX                             ; 00406011
    RET                                 ; 00406012
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00406013 | DAT_01c4f02c
        ;   Label: LAB_00406013
    JMP 0x00405fd6                      ; 0040601d
        ;   XREF to: 00405fd6 (UNCONDITIONAL_JUMP)  ; LAB_00405fd6
    CMP dword ptr [0x0061b4a0],0x20     ; 0040601f | DAT_0061b4a0
        ;   Label: LAB_0040601f
    JNZ 0x00406034                      ; 00406026
        ;   XREF to: 00406034 (CONDITIONAL_JUMP)  ; LAB_00406034
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00406028 | DAT_01c4f02c
    JMP 0x00405fd6                      ; 00406032
        ;   XREF to: 00405fd6 (UNCONDITIONAL_JUMP)  ; LAB_00405fd6
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00406034 | DAT_01c4f02c
        ;   Label: LAB_00406034
    JMP 0x00405fd6                      ; 0040603e
        ;   XREF to: 00405fd6 (UNCONDITIONAL_JUMP)  ; LAB_00405fd6

