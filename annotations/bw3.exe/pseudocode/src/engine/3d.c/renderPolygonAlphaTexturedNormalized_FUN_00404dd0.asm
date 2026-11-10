; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl engine_3d_c_renderPolygonAlphaTexturedNormalized_FUN_00404dd0(SMRGLHeaderPrimitive *prim)
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

    PUSH EBX                            ; 00404dd0
        ;   Label: engine_3d.c_renderPolygonAlphaTexturedNormalized_FUN_00404dd0
    PUSH ESI                            ; 00404dd1
    PUSH EBP                            ; 00404dd2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00404dd3
    LEA ESI,[EBX + 0x18]                ; 00404dd7
    LEA EAX,[EBX + 0x8]                 ; 00404dda
    PUSH EAX                            ; 00404ddd
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00404dde
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 00404de3
    TEST EAX,EAX                        ; 00404de6
    JZ 0x00404e2b                       ; 00404de8
        ;   XREF to: 00404e2b (CONDITIONAL_JUMP)  ; LAB_00404e2b
    CMP dword ptr [0x01c6e2a0],0x0      ; 00404dea | DAT_01c6e2a0
    JNZ 0x00404e46                      ; 00404df1
        ;   XREF to: 00404e46 (CONDITIONAL_JUMP)  ; LAB_00404e46
    CMP dword ptr [0x005fba20],0x20     ; 00404df3 | DAT_005fba20
    JNZ 0x00404e3a                      ; 00404dfa
        ;   XREF to: 00404e3a (CONDITIONAL_JUMP)  ; LAB_00404e3a
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 00404dfc | DAT_01c6b5cc
    PUSH EDI                            ; 00404e06
        ;   Label: LAB_00404e06
    MOV EDI,0x9                         ; 00404e07
    PUSH ESI                            ; 00404e0c
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404e0d
    MOV EBP,0x2                         ; 00404e10
    PUSH EAX                            ; 00404e15
    MOV dword ptr [0x01c6e2b4],EDI      ; 00404e16 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EBP      ; 00404e1c | DAT_01c6e2b8
    CALL engine_clipper.c_clipAndRasterize_FUN_0043a840 ; 00404e22
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043a840(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00404e27
    POP EDI                             ; 00404e2a
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404e2b
        ;   Label: LAB_00404e2b
    ADD EBX,0x18                        ; 00404e2e
    SHL EAX,0x2                         ; 00404e31
    ADD EAX,EBX                         ; 00404e34
    POP EBP                             ; 00404e36
    POP ESI                             ; 00404e37
    POP EBX                             ; 00404e38
    RET                                 ; 00404e39
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00404e3a | DAT_01c6b5cc
        ;   Label: LAB_00404e3a
    JMP 0x00404e06                      ; 00404e44
        ;   XREF to: 00404e06 (UNCONDITIONAL_JUMP)  ; LAB_00404e06
    CMP dword ptr [0x005fba20],0x20     ; 00404e46 | DAT_005fba20
        ;   Label: LAB_00404e46
    JNZ 0x00404e5b                      ; 00404e4d
        ;   XREF to: 00404e5b (CONDITIONAL_JUMP)  ; LAB_00404e5b
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00404e4f | DAT_01c6b5cc
    JMP 0x00404e06                      ; 00404e59
        ;   XREF to: 00404e06 (UNCONDITIONAL_JUMP)  ; LAB_00404e06
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00404e5b | DAT_01c6b5cc
        ;   Label: LAB_00404e5b
    JMP 0x00404e06                      ; 00404e65
        ;   XREF to: 00404e06 (UNCONDITIONAL_JUMP)  ; LAB_00404e06

