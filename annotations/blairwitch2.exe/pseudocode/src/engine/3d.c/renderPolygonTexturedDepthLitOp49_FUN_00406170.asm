; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonTexturedDepthLitOp49_FUN_00406170(int param_1)
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
;   engine_3d.c_calculatePolygonLighting_FUN_00403a20
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_clipper.c_clipAndRasterize_FUN_00431d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406170
        ;   Label: engine_3d.c_renderPolygonTexturedDepthLitOp49_FUN_00406170
    PUSH ESI                            ; 00406171
    PUSH EBP                            ; 00406172
    MOV EBX,dword ptr [ESP + 0x10]      ; 00406173
    LEA ESI,[EBX + 0x18]                ; 00406177
    LEA EAX,[EBX + 0x8]                 ; 0040617a
    PUSH EAX                            ; 0040617d
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 0040617e
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 00406183
    TEST EAX,EAX                        ; 00406186
    JZ 0x004061d4                       ; 00406188
        ;   XREF to: 004061d4 (CONDITIONAL_JUMP)  ; LAB_004061d4
    CMP dword ptr [0x01c38b40],0x0      ; 0040618a | DAT_01c38b40
    JNZ 0x004061ef                      ; 00406191
        ;   XREF to: 004061ef (CONDITIONAL_JUMP)  ; LAB_004061ef
    CMP dword ptr [0x006141c0],0x20     ; 00406193 | DAT_006141c0
    JNZ 0x004061e3                      ; 0040619a
        ;   XREF to: 004061e3 (CONDITIONAL_JUMP)  ; LAB_004061e3
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 0040619c | DAT_01c35e6c
    PUSH EDI                            ; 004061a6
        ;   Label: LAB_004061a6
    MOV EDI,0xc1                        ; 004061a7
    MOV EBP,0x1                         ; 004061ac
    PUSH EBX                            ; 004061b1
    MOV dword ptr [0x01c38b54],EDI      ; 004061b2 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EBP      ; 004061b8 | DAT_01c38b58
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a20 ; 004061be
        ;   XREF to: 00403a20 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_calculatePolygonLighting_FUN_00403a20()
    ADD ESP,0x4                         ; 004061c3
    PUSH ESI                            ; 004061c6
    MOV EAX,dword ptr [EBX + 0x4]       ; 004061c7
    PUSH EAX                            ; 004061ca
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 004061cb
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004061d0
    POP EDI                             ; 004061d3
    MOV EAX,dword ptr [EBX + 0x4]       ; 004061d4
        ;   Label: LAB_004061d4
    ADD EBX,0x18                        ; 004061d7
    SHL EAX,0x2                         ; 004061da
    ADD EAX,EBX                         ; 004061dd
    POP EBP                             ; 004061df
    POP ESI                             ; 004061e0
    POP EBX                             ; 004061e1
    RET                                 ; 004061e2
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 004061e3 | DAT_01c35e6c
        ;   Label: LAB_004061e3
    JMP 0x004061a6                      ; 004061ed
        ;   XREF to: 004061a6 (UNCONDITIONAL_JUMP)  ; LAB_004061a6
    CMP dword ptr [0x006141c0],0x20     ; 004061ef | DAT_006141c0
        ;   Label: LAB_004061ef
    JNZ 0x00406204                      ; 004061f6
        ;   XREF to: 00406204 (CONDITIONAL_JUMP)  ; LAB_00406204
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 004061f8 | DAT_01c35e6c
    JMP 0x004061a6                      ; 00406202
        ;   XREF to: 004061a6 (UNCONDITIONAL_JUMP)  ; LAB_004061a6
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00406204 | DAT_01c35e6c
        ;   Label: LAB_00406204
    JMP 0x004061a6                      ; 0040620e
        ;   XREF to: 004061a6 (UNCONDITIONAL_JUMP)  ; LAB_004061a6

