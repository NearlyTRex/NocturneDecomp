; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonDestReadBlendOp33_FUN_00405100(int param_1)
;
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

    PUSH EBX                            ; 00405100
        ;   Label: engine_3d.c_renderPolygonDestReadBlendOp33_FUN_00405100
    PUSH ESI                            ; 00405101
    PUSH EBP                            ; 00405102
    MOV EBX,dword ptr [ESP + 0x10]      ; 00405103
    LEA ESI,[EBX + 0x18]                ; 00405107
    LEA EAX,[EBX + 0x8]                 ; 0040510a
    PUSH EAX                            ; 0040510d
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0040510e
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 00405113
    TEST EAX,EAX                        ; 00405116
    JZ 0x00405158                       ; 00405118
        ;   XREF to: 00405158 (CONDITIONAL_JUMP)  ; LAB_00405158
    CMP dword ptr [0x01c6e2a0],0x0      ; 0040511a | DAT_01c6e2a0
    JNZ 0x00405173                      ; 00405121
        ;   XREF to: 00405173 (CONDITIONAL_JUMP)  ; LAB_00405173
    CMP dword ptr [0x005fba20],0x20     ; 00405123 | DAT_005fba20
    JNZ 0x00405167                      ; 0040512a
        ;   XREF to: 00405167 (CONDITIONAL_JUMP)  ; LAB_00405167
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 0040512c | DAT_01c6b5cc
    PUSH EDI                            ; 00405136
        ;   Label: LAB_00405136
    MOV EDI,0x23                        ; 00405137
    PUSH ESI                            ; 0040513c
    MOV EAX,dword ptr [EBX + 0x4]       ; 0040513d
    XOR EBP,EBP                         ; 00405140
    PUSH EAX                            ; 00405142
    MOV dword ptr [0x01c6e2b4],EDI      ; 00405143 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EBP      ; 00405149 | DAT_01c6e2b8
    CALL engine_clipper.c_clipAndRasterize_FUN_0043a840 ; 0040514f
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043a840(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405154
    POP EDI                             ; 00405157
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405158
        ;   Label: LAB_00405158
    ADD EBX,0x18                        ; 0040515b
    SHL EAX,0x2                         ; 0040515e
    ADD EAX,EBX                         ; 00405161
    POP EBP                             ; 00405163
    POP ESI                             ; 00405164
    POP EBX                             ; 00405165
    RET                                 ; 00405166
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00405167 | DAT_01c6b5cc
        ;   Label: LAB_00405167
    JMP 0x00405136                      ; 00405171
        ;   XREF to: 00405136 (UNCONDITIONAL_JUMP)  ; LAB_00405136
    CMP dword ptr [0x005fba20],0x20     ; 00405173 | DAT_005fba20
        ;   Label: LAB_00405173
    JNZ 0x00405188                      ; 0040517a
        ;   XREF to: 00405188 (CONDITIONAL_JUMP)  ; LAB_00405188
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 0040517c | DAT_01c6b5cc
    JMP 0x00405136                      ; 00405186
        ;   XREF to: 00405136 (UNCONDITIONAL_JUMP)  ; LAB_00405136
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00405188 | DAT_01c6b5cc
        ;   Label: LAB_00405188
    JMP 0x00405136                      ; 00405192
        ;   XREF to: 00405136 (UNCONDITIONAL_JUMP)  ; LAB_00405136

