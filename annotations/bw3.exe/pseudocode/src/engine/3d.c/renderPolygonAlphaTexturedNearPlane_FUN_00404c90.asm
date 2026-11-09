; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl engine_3d_c_renderPolygonAlphaTexturedNearPlane_FUN_00404c90(SMRGLHeaderPrimitive *prim)
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
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_clipper.c_clipAndRasterize_FUN_0043a840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404c90
        ;   Label: engine_3d.c_renderPolygonAlphaTexturedNearPlane_FUN_00404c90
    PUSH ESI                            ; 00404c91
    PUSH EBP                            ; 00404c92
    MOV EBX,dword ptr [ESP + 0x10]      ; 00404c93
    LEA ESI,[EBX + 0x18]                ; 00404c97
    LEA EAX,[EBX + 0x8]                 ; 00404c9a
    PUSH EAX                            ; 00404c9d
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00404c9e
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 00404ca3
    TEST EAX,EAX                        ; 00404ca6
    JZ 0x00404ceb                       ; 00404ca8
        ;   XREF to: 00404ceb (CONDITIONAL_JUMP)  ; LAB_00404ceb
    CMP dword ptr [0x01c6e2a0],0x0      ; 00404caa | DAT_01c6e2a0
    JNZ 0x00404d06                      ; 00404cb1
        ;   XREF to: 00404d06 (CONDITIONAL_JUMP)  ; LAB_00404d06
    CMP dword ptr [0x005fba20],0x20     ; 00404cb3 | DAT_005fba20
    JNZ 0x00404cfa                      ; 00404cba
        ;   XREF to: 00404cfa (CONDITIONAL_JUMP)  ; LAB_00404cfa
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 00404cbc | DAT_01c6b5cc
    PUSH EDI                            ; 00404cc6
        ;   Label: LAB_00404cc6
    MOV EDI,0x9                         ; 00404cc7
    PUSH ESI                            ; 00404ccc
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404ccd
    MOV EBP,0x3                         ; 00404cd0
    PUSH EAX                            ; 00404cd5
    MOV dword ptr [0x01c6e2b4],EDI      ; 00404cd6 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EBP      ; 00404cdc | DAT_01c6e2b8
    CALL engine_clipper.c_clipAndRasterize_FUN_0043a840 ; 00404ce2
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043a840(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00404ce7
    POP EDI                             ; 00404cea
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404ceb
        ;   Label: LAB_00404ceb
    ADD EBX,0x18                        ; 00404cee
    SHL EAX,0x2                         ; 00404cf1
    ADD EAX,EBX                         ; 00404cf4
    POP EBP                             ; 00404cf6
    POP ESI                             ; 00404cf7
    POP EBX                             ; 00404cf8
    RET                                 ; 00404cf9
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00404cfa | DAT_01c6b5cc
        ;   Label: LAB_00404cfa
    JMP 0x00404cc6                      ; 00404d04
        ;   XREF to: 00404cc6 (UNCONDITIONAL_JUMP)  ; LAB_00404cc6
    CMP dword ptr [0x005fba20],0x20     ; 00404d06 | DAT_005fba20
        ;   Label: LAB_00404d06
    JNZ 0x00404d1b                      ; 00404d0d
        ;   XREF to: 00404d1b (CONDITIONAL_JUMP)  ; LAB_00404d1b
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00404d0f | DAT_01c6b5cc
    JMP 0x00404cc6                      ; 00404d19
        ;   XREF to: 00404cc6 (UNCONDITIONAL_JUMP)  ; LAB_00404cc6
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00404d1b | DAT_01c6b5cc
        ;   Label: LAB_00404d1b
    JMP 0x00404cc6                      ; 00404d25
        ;   XREF to: 00404cc6 (UNCONDITIONAL_JUMP)  ; LAB_00404cc6

