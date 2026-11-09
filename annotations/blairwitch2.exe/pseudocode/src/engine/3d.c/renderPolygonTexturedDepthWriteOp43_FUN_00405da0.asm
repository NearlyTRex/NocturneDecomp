; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonTexturedDepthWriteOp43_FUN_00405da0(int param_1)
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

    PUSH EBX                            ; 00405da0
        ;   Label: engine_3d.c_renderPolygonTexturedDepthWriteOp43_FUN_00405da0
    PUSH ESI                            ; 00405da1
    PUSH EBP                            ; 00405da2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00405da3
    LEA ESI,[EBX + 0x18]                ; 00405da7
    LEA EAX,[EBX + 0x8]                 ; 00405daa
    PUSH EAX                            ; 00405dad
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 00405dae
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 00405db3
    TEST EAX,EAX                        ; 00405db6
    JZ 0x00405dfb                       ; 00405db8
        ;   XREF to: 00405dfb (CONDITIONAL_JUMP)  ; LAB_00405dfb
    CMP dword ptr [0x01c38b40],0x0      ; 00405dba | DAT_01c38b40
    JNZ 0x00405e16                      ; 00405dc1
        ;   XREF to: 00405e16 (CONDITIONAL_JUMP)  ; LAB_00405e16
    CMP dword ptr [0x006141c0],0x20     ; 00405dc3 | DAT_006141c0
    JNZ 0x00405e0a                      ; 00405dca
        ;   XREF to: 00405e0a (CONDITIONAL_JUMP)  ; LAB_00405e0a
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00405dcc | DAT_01c35e6c
    PUSH EDI                            ; 00405dd6
        ;   Label: LAB_00405dd6
    MOV EDI,0x81                        ; 00405dd7
    PUSH ESI                            ; 00405ddc
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405ddd
    MOV EBP,0x1                         ; 00405de0
    PUSH EAX                            ; 00405de5
    MOV dword ptr [0x01c38b54],EDI      ; 00405de6 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EBP      ; 00405dec | DAT_01c38b58
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 00405df2
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405df7
    POP EDI                             ; 00405dfa
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405dfb
        ;   Label: LAB_00405dfb
    ADD EBX,0x18                        ; 00405dfe
    SHL EAX,0x2                         ; 00405e01
    ADD EAX,EBX                         ; 00405e04
    POP EBP                             ; 00405e06
    POP ESI                             ; 00405e07
    POP EBX                             ; 00405e08
    RET                                 ; 00405e09
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00405e0a | DAT_01c35e6c
        ;   Label: LAB_00405e0a
    JMP 0x00405dd6                      ; 00405e14
        ;   XREF to: 00405dd6 (UNCONDITIONAL_JUMP)  ; LAB_00405dd6
    CMP dword ptr [0x006141c0],0x20     ; 00405e16 | DAT_006141c0
        ;   Label: LAB_00405e16
    JNZ 0x00405e2b                      ; 00405e1d
        ;   XREF to: 00405e2b (CONDITIONAL_JUMP)  ; LAB_00405e2b
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00405e1f | DAT_01c35e6c
    JMP 0x00405dd6                      ; 00405e29
        ;   XREF to: 00405dd6 (UNCONDITIONAL_JUMP)  ; LAB_00405dd6
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00405e2b | DAT_01c35e6c
        ;   Label: LAB_00405e2b
    JMP 0x00405dd6                      ; 00405e35
        ;   XREF to: 00405dd6 (UNCONDITIONAL_JUMP)  ; LAB_00405dd6

