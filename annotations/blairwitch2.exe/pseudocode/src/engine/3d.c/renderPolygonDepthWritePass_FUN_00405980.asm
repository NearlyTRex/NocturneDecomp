; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonDepthWritePass_FUN_00405980(int param_1)
;
;
; XREF[2]:
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406f40 at 00407066
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_00406e00 at 00406f23
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

    PUSH EBX                            ; 00405980
        ;   Label: engine_3d.c_renderPolygonDepthWritePass_FUN_00405980
    PUSH ESI                            ; 00405981
    PUSH EBP                            ; 00405982
    MOV EBX,dword ptr [ESP + 0x10]      ; 00405983
    LEA ESI,[EBX + 0x18]                ; 00405987
    LEA EAX,[EBX + 0x8]                 ; 0040598a
    PUSH EAX                            ; 0040598d
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 0040598e
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 00405993
    TEST EAX,EAX                        ; 00405996
    JZ 0x004059db                       ; 00405998
        ;   XREF to: 004059db (CONDITIONAL_JUMP)  ; LAB_004059db
    CMP dword ptr [0x01c38b40],0x0      ; 0040599a | DAT_01c38b40
    JNZ 0x004059f6                      ; 004059a1
        ;   XREF to: 004059f6 (CONDITIONAL_JUMP)  ; LAB_004059f6
    CMP dword ptr [0x006141c0],0x20     ; 004059a3 | DAT_006141c0
    JNZ 0x004059ea                      ; 004059aa
        ;   XREF to: 004059ea (CONDITIONAL_JUMP)  ; LAB_004059ea
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 004059ac | DAT_01c35e6c
    PUSH EDI                            ; 004059b6
        ;   Label: LAB_004059b6
    MOV EDI,0x80                        ; 004059b7
    PUSH ESI                            ; 004059bc
    MOV EAX,dword ptr [EBX + 0x4]       ; 004059bd
    MOV EBP,0x1                         ; 004059c0
    PUSH EAX                            ; 004059c5
    MOV dword ptr [0x01c38b54],EDI      ; 004059c6 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EBP      ; 004059cc | DAT_01c38b58
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 004059d2
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004059d7
    POP EDI                             ; 004059da
    MOV EAX,dword ptr [EBX + 0x4]       ; 004059db
        ;   Label: LAB_004059db
    ADD EBX,0x18                        ; 004059de
    SHL EAX,0x2                         ; 004059e1
    ADD EAX,EBX                         ; 004059e4
    POP EBP                             ; 004059e6
    POP ESI                             ; 004059e7
    POP EBX                             ; 004059e8
    RET                                 ; 004059e9
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 004059ea | DAT_01c35e6c
        ;   Label: LAB_004059ea
    JMP 0x004059b6                      ; 004059f4
        ;   XREF to: 004059b6 (UNCONDITIONAL_JUMP)  ; LAB_004059b6
    CMP dword ptr [0x006141c0],0x20     ; 004059f6 | DAT_006141c0
        ;   Label: LAB_004059f6
    JNZ 0x00405a0b                      ; 004059fd
        ;   XREF to: 00405a0b (CONDITIONAL_JUMP)  ; LAB_00405a0b
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 004059ff | DAT_01c35e6c
    JMP 0x004059b6                      ; 00405a09
        ;   XREF to: 004059b6 (UNCONDITIONAL_JUMP)  ; LAB_004059b6
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00405a0b | DAT_01c35e6c
        ;   Label: LAB_00405a0b
    JMP 0x004059b6                      ; 00405a15
        ;   XREF to: 004059b6 (UNCONDITIONAL_JUMP)  ; LAB_004059b6

