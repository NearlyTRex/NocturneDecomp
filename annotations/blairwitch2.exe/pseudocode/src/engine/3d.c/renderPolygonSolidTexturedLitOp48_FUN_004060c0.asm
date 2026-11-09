; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonSolidTexturedLitOp48_FUN_004060c0(int param_1)
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
;   engine_3d.c_setRenderAlpha_FUN_00406da0
;   engine_clipper.c_clipAndRasterize_FUN_00431d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004060c0
        ;   Label: engine_3d.c_renderPolygonSolidTexturedLitOp48_FUN_004060c0
    PUSH ESI                            ; 004060c1
    PUSH EBP                            ; 004060c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004060c3
    LEA ESI,[EBX + 0x18]                ; 004060c7
    LEA EAX,[EBX + 0x8]                 ; 004060ca
    PUSH EAX                            ; 004060cd
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 004060ce
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 004060d3
    TEST EAX,EAX                        ; 004060d6
    JZ 0x00406131                       ; 004060d8
        ;   XREF to: 00406131 (CONDITIONAL_JUMP)  ; LAB_00406131
    CMP dword ptr [0x01c38b40],0x0      ; 004060da | DAT_01c38b40
    JNZ 0x0040614c                      ; 004060e1
        ;   XREF to: 0040614c (CONDITIONAL_JUMP)  ; LAB_0040614c
    CMP dword ptr [0x006141c0],0x20     ; 004060e3 | DAT_006141c0
    JNZ 0x00406140                      ; 004060ea
        ;   XREF to: 00406140 (CONDITIONAL_JUMP)  ; LAB_00406140
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 004060ec | DAT_01c35e6c
    PUSH EDI                            ; 004060f6
        ;   Label: LAB_004060f6
    MOV EDI,0xc3                        ; 004060f7
    PUSH 0xffff                         ; 004060fc
    MOV dword ptr [0x01c38b54],EDI      ; 00406101 | DAT_01c38b54
    CALL engine_3d.c_setRenderAlpha_FUN_00406da0 ; 00406107
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406da0(int alpha_color_value)
    ADD ESP,0x4                         ; 0040610c
    MOV EBP,0x1                         ; 0040610f
    PUSH EBX                            ; 00406114
    MOV dword ptr [0x01c38b58],EBP      ; 00406115 | DAT_01c38b58
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a20 ; 0040611b
        ;   XREF to: 00403a20 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_calculatePolygonLighting_FUN_00403a20()
    ADD ESP,0x4                         ; 00406120
    PUSH ESI                            ; 00406123
    MOV EAX,dword ptr [EBX + 0x4]       ; 00406124
    PUSH EAX                            ; 00406127
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 00406128
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 0040612d
    POP EDI                             ; 00406130
    MOV EAX,dword ptr [EBX + 0x4]       ; 00406131
        ;   Label: LAB_00406131
    ADD EBX,0x18                        ; 00406134
    SHL EAX,0x2                         ; 00406137
    ADD EAX,EBX                         ; 0040613a
    POP EBP                             ; 0040613c
    POP ESI                             ; 0040613d
    POP EBX                             ; 0040613e
    RET                                 ; 0040613f
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00406140 | DAT_01c35e6c
        ;   Label: LAB_00406140
    JMP 0x004060f6                      ; 0040614a
        ;   XREF to: 004060f6 (UNCONDITIONAL_JUMP)  ; LAB_004060f6
    CMP dword ptr [0x006141c0],0x20     ; 0040614c | DAT_006141c0
        ;   Label: LAB_0040614c
    JNZ 0x00406161                      ; 00406153
        ;   XREF to: 00406161 (CONDITIONAL_JUMP)  ; LAB_00406161
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00406155 | DAT_01c35e6c
    JMP 0x004060f6                      ; 0040615f
        ;   XREF to: 004060f6 (UNCONDITIONAL_JUMP)  ; LAB_004060f6
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00406161 | DAT_01c35e6c
        ;   Label: LAB_00406161
    JMP 0x004060f6                      ; 0040616b
        ;   XREF to: 004060f6 (UNCONDITIONAL_JUMP)  ; LAB_004060f6

