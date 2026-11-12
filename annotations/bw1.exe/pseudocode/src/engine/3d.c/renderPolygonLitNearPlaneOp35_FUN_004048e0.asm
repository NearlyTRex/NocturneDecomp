; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLitNearPlaneOp35_FUN_004048e0(SMRGLHeaderPrimitive *prim)
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

    PUSH EBX                            ; 004048e0
        ;   Label: engine_3d.c_renderPolygonLitNearPlaneOp35_FUN_004048e0
    PUSH ESI                            ; 004048e1
    PUSH EBP                            ; 004048e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004048e3
    LEA ESI,[EBX + 0x18]                ; 004048e7
    LEA EAX,[EBX + 0x8]                 ; 004048ea
    PUSH EAX                            ; 004048ed
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 004048ee
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 004048f3
    TEST EAX,EAX                        ; 004048f6
    JZ 0x00404944                       ; 004048f8
        ;   XREF to: 00404944 (CONDITIONAL_JUMP)  ; LAB_00404944
    CMP dword ptr [0x01c51d00],0x0      ; 004048fa | DAT_01c51d00
    JNZ 0x0040495f                      ; 00404901
        ;   XREF to: 0040495f (CONDITIONAL_JUMP)  ; LAB_0040495f
    CMP dword ptr [0x0061b4a0],0x20     ; 00404903 | DAT_0061b4a0
    JNZ 0x00404953                      ; 0040490a
        ;   XREF to: 00404953 (CONDITIONAL_JUMP)  ; LAB_00404953
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 0040490c | DAT_01c4f02c
    PUSH EDI                            ; 00404916
        ;   Label: LAB_00404916
    MOV EDI,0xd1                        ; 00404917
    MOV EBP,0x3                         ; 0040491c
    PUSH EBX                            ; 00404921
    MOV dword ptr [0x01c51d14],EDI      ; 00404922 | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EBP      ; 00404928 | DAT_01c51d18
    CALL engine_3d.c_calculatePolygonLighting_FUN_004039d0 ; 0040492e
        ;   XREF to: 004039d0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_004039d0(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 00404933
    PUSH ESI                            ; 00404936
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404937
    PUSH EAX                            ; 0040493a
    CALL engine_clipper.c_clipAndRasterize_FUN_0043cbf0 ; 0040493b
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043cbf0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00404940
    POP EDI                             ; 00404943
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404944
        ;   Label: LAB_00404944
    ADD EBX,0x18                        ; 00404947
    SHL EAX,0x2                         ; 0040494a
    ADD EAX,EBX                         ; 0040494d
    POP EBP                             ; 0040494f
    POP ESI                             ; 00404950
    POP EBX                             ; 00404951
    RET                                 ; 00404952
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00404953 | DAT_01c4f02c
        ;   Label: LAB_00404953
    JMP 0x00404916                      ; 0040495d
        ;   XREF to: 00404916 (UNCONDITIONAL_JUMP)  ; LAB_00404916
    CMP dword ptr [0x0061b4a0],0x20     ; 0040495f | DAT_0061b4a0
        ;   Label: LAB_0040495f
    JNZ 0x00404974                      ; 00404966
        ;   XREF to: 00404974 (CONDITIONAL_JUMP)  ; LAB_00404974
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00404968 | DAT_01c4f02c
    JMP 0x00404916                      ; 00404972
        ;   XREF to: 00404916 (UNCONDITIONAL_JUMP)  ; LAB_00404916
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00404974 | DAT_01c4f02c
        ;   Label: LAB_00404974
    JMP 0x00404916                      ; 0040497e
        ;   XREF to: 00404916 (UNCONDITIONAL_JUMP)  ; LAB_00404916

