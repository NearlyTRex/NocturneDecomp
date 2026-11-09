; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedNearPlane_FUN_00404d30(SMRGLHeaderPrimitive *prim)
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

    PUSH EBX                            ; 00404d30
        ;   Label: engine_3d.c_renderPolygonTexturedNearPlane_FUN_00404d30
    PUSH ESI                            ; 00404d31
    PUSH EBP                            ; 00404d32
    MOV EBX,dword ptr [ESP + 0x10]      ; 00404d33
    LEA ESI,[EBX + 0x18]                ; 00404d37
    LEA EAX,[EBX + 0x8]                 ; 00404d3a
    PUSH EAX                            ; 00404d3d
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00404d3e
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 00404d43
    TEST EAX,EAX                        ; 00404d46
    JZ 0x00404d8b                       ; 00404d48
        ;   XREF to: 00404d8b (CONDITIONAL_JUMP)  ; LAB_00404d8b
    CMP dword ptr [0x01c6e2a0],0x0      ; 00404d4a | DAT_01c6e2a0
    JNZ 0x00404da6                      ; 00404d51
        ;   XREF to: 00404da6 (CONDITIONAL_JUMP)  ; LAB_00404da6
    CMP dword ptr [0x005fba20],0x20     ; 00404d53 | DAT_005fba20
    JNZ 0x00404d9a                      ; 00404d5a
        ;   XREF to: 00404d9a (CONDITIONAL_JUMP)  ; LAB_00404d9a
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 00404d5c | DAT_01c6b5cc
    PUSH EDI                            ; 00404d66
        ;   Label: LAB_00404d66
    MOV EDI,0x1                         ; 00404d67
    PUSH ESI                            ; 00404d6c
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404d6d
    MOV EBP,0x3                         ; 00404d70
    PUSH EAX                            ; 00404d75
    MOV dword ptr [0x01c6e2b4],EDI      ; 00404d76 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EBP      ; 00404d7c | DAT_01c6e2b8
    CALL engine_clipper.c_clipAndRasterize_FUN_0043a840 ; 00404d82
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043a840(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00404d87
    POP EDI                             ; 00404d8a
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404d8b
        ;   Label: LAB_00404d8b
    ADD EBX,0x18                        ; 00404d8e
    SHL EAX,0x2                         ; 00404d91
    ADD EAX,EBX                         ; 00404d94
    POP EBP                             ; 00404d96
    POP ESI                             ; 00404d97
    POP EBX                             ; 00404d98
    RET                                 ; 00404d99
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00404d9a | DAT_01c6b5cc
        ;   Label: LAB_00404d9a
    JMP 0x00404d66                      ; 00404da4
        ;   XREF to: 00404d66 (UNCONDITIONAL_JUMP)  ; LAB_00404d66
    CMP dword ptr [0x005fba20],0x20     ; 00404da6 | DAT_005fba20
        ;   Label: LAB_00404da6
    JNZ 0x00404dbb                      ; 00404dad
        ;   XREF to: 00404dbb (CONDITIONAL_JUMP)  ; LAB_00404dbb
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00404daf | DAT_01c6b5cc
    JMP 0x00404d66                      ; 00404db9
        ;   XREF to: 00404d66 (UNCONDITIONAL_JUMP)  ; LAB_00404d66
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00404dbb | DAT_01c6b5cc
        ;   Label: LAB_00404dbb
    JMP 0x00404d66                      ; 00404dc5
        ;   XREF to: 00404d66 (UNCONDITIONAL_JUMP)  ; LAB_00404d66

