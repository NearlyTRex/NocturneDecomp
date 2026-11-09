; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonFogTexturedWrappedOp8_FUN_00403d30(int param_1)
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

    PUSH EBX                            ; 00403d30
        ;   Label: engine_3d.c_renderPolygonFogTexturedWrappedOp8_FUN_00403d30
    PUSH ESI                            ; 00403d31
    PUSH EBP                            ; 00403d32
    MOV EBX,dword ptr [ESP + 0x10]      ; 00403d33
    LEA ESI,[EBX + 0x18]                ; 00403d37
    LEA EAX,[EBX + 0x8]                 ; 00403d3a
    PUSH EAX                            ; 00403d3d
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00403d3e
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 00403d43
    TEST EAX,EAX                        ; 00403d46
    JZ 0x00403d8b                       ; 00403d48
        ;   XREF to: 00403d8b (CONDITIONAL_JUMP)  ; LAB_00403d8b
    CMP dword ptr [0x01c6e2a0],0x0      ; 00403d4a | DAT_01c6e2a0
    JNZ 0x00403da6                      ; 00403d51
        ;   XREF to: 00403da6 (CONDITIONAL_JUMP)  ; LAB_00403da6
    CMP dword ptr [0x005fba20],0x20     ; 00403d53 | DAT_005fba20
    JNZ 0x00403d9a                      ; 00403d5a
        ;   XREF to: 00403d9a (CONDITIONAL_JUMP)  ; LAB_00403d9a
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 00403d5c | DAT_01c6b5cc
    PUSH EDI                            ; 00403d66
        ;   Label: LAB_00403d66
    MOV EDI,0x5                         ; 00403d67
    PUSH ESI                            ; 00403d6c
    MOV EAX,dword ptr [EBX + 0x4]       ; 00403d6d
    MOV EBP,0x4                         ; 00403d70
    PUSH EAX                            ; 00403d75
    MOV dword ptr [0x01c6e2b4],EDI      ; 00403d76 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EBP      ; 00403d7c | DAT_01c6e2b8
    CALL engine_clipper.c_clipAndRasterize_FUN_0043a840 ; 00403d82
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043a840(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00403d87
    POP EDI                             ; 00403d8a
    MOV EAX,dword ptr [EBX + 0x4]       ; 00403d8b
        ;   Label: LAB_00403d8b
    ADD EBX,0x18                        ; 00403d8e
    SHL EAX,0x2                         ; 00403d91
    ADD EAX,EBX                         ; 00403d94
    POP EBP                             ; 00403d96
    POP ESI                             ; 00403d97
    POP EBX                             ; 00403d98
    RET                                 ; 00403d99
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00403d9a | DAT_01c6b5cc
        ;   Label: LAB_00403d9a
    JMP 0x00403d66                      ; 00403da4
        ;   XREF to: 00403d66 (UNCONDITIONAL_JUMP)  ; LAB_00403d66
    CMP dword ptr [0x005fba20],0x20     ; 00403da6 | DAT_005fba20
        ;   Label: LAB_00403da6
    JNZ 0x00403dbb                      ; 00403dad
        ;   XREF to: 00403dbb (CONDITIONAL_JUMP)  ; LAB_00403dbb
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00403daf | DAT_01c6b5cc
    JMP 0x00403d66                      ; 00403db9
        ;   XREF to: 00403d66 (UNCONDITIONAL_JUMP)  ; LAB_00403d66
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00403dbb | DAT_01c6b5cc
        ;   Label: LAB_00403dbb
    JMP 0x00403d66                      ; 00403dc5
        ;   XREF to: 00403d66 (UNCONDITIONAL_JUMP)  ; LAB_00403d66

