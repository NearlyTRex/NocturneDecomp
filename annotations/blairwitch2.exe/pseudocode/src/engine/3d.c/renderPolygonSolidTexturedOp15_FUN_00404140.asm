; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidTexturedOp15_FUN_00404140(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
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
;   engine_3d.c_setRenderAlpha_FUN_00406da0
;   engine_clipper.c_clipAndRasterize_FUN_00431d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404140
        ;   Label: engine_3d.c_renderPolygonSolidTexturedOp15_FUN_00404140
    PUSH ESI                            ; 00404141
    PUSH EBP                            ; 00404142
    MOV EBX,dword ptr [ESP + 0x10]      ; 00404143
    LEA ESI,[EBX + 0x18]                ; 00404147
    LEA EAX,[EBX + 0x8]                 ; 0040414a
    PUSH EAX                            ; 0040414d
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 0040414e
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403970(SClipPlane * plane)
    ADD ESP,0x4                         ; 00404153
    TEST EAX,EAX                        ; 00404156
    JZ 0x004041a5                       ; 00404158
        ;   XREF to: 004041a5 (CONDITIONAL_JUMP)  ; LAB_004041a5
    CMP dword ptr [0x01c38b40],0x0      ; 0040415a | DAT_01c38b40
    JNZ 0x004041c0                      ; 00404161
        ;   XREF to: 004041c0 (CONDITIONAL_JUMP)  ; LAB_004041c0
    CMP dword ptr [0x006141c0],0x20     ; 00404163 | DAT_006141c0
    JNZ 0x004041b4                      ; 0040416a
        ;   XREF to: 004041b4 (CONDITIONAL_JUMP)  ; LAB_004041b4
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 0040416c | DAT_01c35e6c
    PUSH EDI                            ; 00404176
        ;   Label: LAB_00404176
    MOV EDI,0x3                         ; 00404177
    PUSH 0xffff                         ; 0040417c
    MOV dword ptr [0x01c38b54],EDI      ; 00404181 | DAT_01c38b54
    CALL engine_3d.c_setRenderAlpha_FUN_00406da0 ; 00404187
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406da0(int alpha_color_value)
    ADD ESP,0x4                         ; 0040418c
    PUSH ESI                            ; 0040418f
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404190
    XOR EBP,EBP                         ; 00404193
    PUSH EAX                            ; 00404195
    MOV dword ptr [0x01c38b58],EBP      ; 00404196 | DAT_01c38b58
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 0040419c
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004041a1
    POP EDI                             ; 004041a4
    MOV EAX,dword ptr [EBX + 0x4]       ; 004041a5
        ;   Label: LAB_004041a5
    ADD EBX,0x18                        ; 004041a8
    SHL EAX,0x2                         ; 004041ab
    ADD EAX,EBX                         ; 004041ae
    POP EBP                             ; 004041b0
    POP ESI                             ; 004041b1
    POP EBX                             ; 004041b2
    RET                                 ; 004041b3
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 004041b4 | DAT_01c35e6c
        ;   Label: LAB_004041b4
    JMP 0x00404176                      ; 004041be
        ;   XREF to: 00404176 (UNCONDITIONAL_JUMP)  ; LAB_00404176
    CMP dword ptr [0x006141c0],0x20     ; 004041c0 | DAT_006141c0
        ;   Label: LAB_004041c0
    JNZ 0x004041d5                      ; 004041c7
        ;   XREF to: 004041d5 (CONDITIONAL_JUMP)  ; LAB_004041d5
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 004041c9 | DAT_01c35e6c
    JMP 0x00404176                      ; 004041d3
        ;   XREF to: 00404176 (UNCONDITIONAL_JUMP)  ; LAB_00404176
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 004041d5 | DAT_01c35e6c
        ;   Label: LAB_004041d5
    JMP 0x00404176                      ; 004041df
        ;   XREF to: 00404176 (UNCONDITIONAL_JUMP)  ; LAB_00404176

