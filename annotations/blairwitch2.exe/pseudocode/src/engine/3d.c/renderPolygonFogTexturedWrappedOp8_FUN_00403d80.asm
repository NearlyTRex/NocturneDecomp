; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonFogTexturedWrappedOp8_FUN_00403d80(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_clipper.c_clipAndRasterize_FUN_00431d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403d80
        ;   Label: engine_3d.c_renderPolygonFogTexturedWrappedOp8_FUN_00403d80
    PUSH ESI                            ; 00403d81
    PUSH EBP                            ; 00403d82
    MOV EBX,dword ptr [ESP + 0x10]      ; 00403d83
    LEA ESI,[EBX + 0x18]                ; 00403d87
    LEA EAX,[EBX + 0x8]                 ; 00403d8a
    PUSH EAX                            ; 00403d8d
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 00403d8e
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 00403d93
    TEST EAX,EAX                        ; 00403d96
    JZ 0x00403ddb                       ; 00403d98
        ;   XREF to: 00403ddb (CONDITIONAL_JUMP)  ; LAB_00403ddb
    CMP dword ptr [0x01c38b40],0x0      ; 00403d9a | DAT_01c38b40
    JNZ 0x00403df6                      ; 00403da1
        ;   XREF to: 00403df6 (CONDITIONAL_JUMP)  ; LAB_00403df6
    CMP dword ptr [0x006141c0],0x20     ; 00403da3 | DAT_006141c0
    JNZ 0x00403dea                      ; 00403daa
        ;   XREF to: 00403dea (CONDITIONAL_JUMP)  ; LAB_00403dea
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00403dac | DAT_01c35e6c
    PUSH EDI                            ; 00403db6
        ;   Label: LAB_00403db6
    MOV EDI,0x5                         ; 00403db7
    PUSH ESI                            ; 00403dbc
    MOV EAX,dword ptr [EBX + 0x4]       ; 00403dbd
    MOV EBP,0x4                         ; 00403dc0
    PUSH EAX                            ; 00403dc5
    MOV dword ptr [0x01c38b54],EDI      ; 00403dc6 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EBP      ; 00403dcc | DAT_01c38b58
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 00403dd2
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00403dd7
    POP EDI                             ; 00403dda
    MOV EAX,dword ptr [EBX + 0x4]       ; 00403ddb
        ;   Label: LAB_00403ddb
    ADD EBX,0x18                        ; 00403dde
    SHL EAX,0x2                         ; 00403de1
    ADD EAX,EBX                         ; 00403de4
    POP EBP                             ; 00403de6
    POP ESI                             ; 00403de7
    POP EBX                             ; 00403de8
    RET                                 ; 00403de9
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00403dea | DAT_01c35e6c
        ;   Label: LAB_00403dea
    JMP 0x00403db6                      ; 00403df4
        ;   XREF to: 00403db6 (UNCONDITIONAL_JUMP)  ; LAB_00403db6
    CMP dword ptr [0x006141c0],0x20     ; 00403df6 | DAT_006141c0
        ;   Label: LAB_00403df6
    JNZ 0x00403e0b                      ; 00403dfd
        ;   XREF to: 00403e0b (CONDITIONAL_JUMP)  ; LAB_00403e0b
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00403dff | DAT_01c35e6c
    JMP 0x00403db6                      ; 00403e09
        ;   XREF to: 00403db6 (UNCONDITIONAL_JUMP)  ; LAB_00403db6
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00403e0b | DAT_01c35e6c
        ;   Label: LAB_00403e0b
    JMP 0x00403db6                      ; 00403e15
        ;   XREF to: 00403db6 (UNCONDITIONAL_JUMP)  ; LAB_00403db6

