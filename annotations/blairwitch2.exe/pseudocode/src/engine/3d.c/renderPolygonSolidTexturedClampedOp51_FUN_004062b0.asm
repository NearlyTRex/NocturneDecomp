; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonSolidTexturedClampedOp51_FUN_004062b0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_006141c8
;   undefined4 DAT_0062202c
;   undefined4 DAT_00622030
;   undefined4 DAT_0070ca98
;   undefined4 DAT_0070ca9c
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

    PUSH EBP                            ; 004062b0
        ;   Label: engine_3d.c_renderPolygonSolidTexturedClampedOp51_FUN_004062b0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004062b1
    ADD EAX,0x8                         ; 004062b5
    MOV EBP,dword ptr [ESP + 0x8]       ; 004062b8
    PUSH EAX                            ; 004062bc
    ADD EBP,0x18                        ; 004062bd
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 004062c0
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 004062c5
    TEST EAX,EAX                        ; 004062c8
    JZ 0x00406425                       ; 004062ca
        ;   XREF to: 00406425 (CONDITIONAL_JUMP)  ; LAB_00406425
    CMP dword ptr [0x01c38b40],0x0      ; 004062d0 | DAT_01c38b40
    JNZ 0x004063ab                      ; 004062d7
        ;   XREF to: 004063ab (CONDITIONAL_JUMP)  ; LAB_004063ab
    CMP dword ptr [0x006141c0],0x20     ; 004062dd | DAT_006141c0
    JNZ 0x0040639c                      ; 004062e4
        ;   XREF to: 0040639c (CONDITIONAL_JUMP)  ; LAB_0040639c
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 004062ea | DAT_01c35e6c
    PUSH EDI                            ; 004062f4
        ;   Label: LAB_004062f4
    PUSH ESI                            ; 004062f5
    PUSH EBX                            ; 004062f6
    MOV ECX,0xc3                        ; 004062f7
    PUSH 0xffff                         ; 004062fc
    MOV EBX,0x1                         ; 00406301
    XOR EDI,EDI                         ; 00406306
    XOR ESI,ESI                         ; 00406308
    MOV dword ptr [0x01c38b54],ECX      ; 0040630a | DAT_01c38b54
    CALL engine_3d.c_setRenderAlpha_FUN_00406da0 ; 00406310
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406da0(int alpha_color_value)
    ADD ESP,0x4                         ; 00406315
    MOV dword ptr [0x01c38b58],EBX      ; 00406318 | DAT_01c38b58
    MOV ECX,EBP                         ; 0040631e
    XOR EBX,EBX                         ; 00406320
    MOV EAX,dword ptr [ESP + 0x14]      ; 00406322
        ;   Label: LAB_00406322
    MOV EAX,dword ptr [EAX + 0x4]       ; 00406326
    LEA EAX,[EAX + EAX*0x2]             ; 00406329
    CMP ESI,EAX                         ; 0040632c
    JGE 0x00406414                      ; 0040632e
        ;   XREF to: 00406414 (CONDITIONAL_JUMP)  ; LAB_00406414
    MOV EAX,dword ptr [ECX]             ; 00406334
    MOV dword ptr [EBX + 0x70ca98],EAX  ; 00406336 | DAT_0070ca98 | DAT_0070ca9c
    MOV EBP,dword ptr [0x006141c8]      ; 0040633c | DAT_006141c8
    MOV EAX,dword ptr [ECX + 0x4]       ; 00406342
    MOV EDX,dword ptr [ECX + 0x8]       ; 00406345
    CMP EBP,0x40                        ; 00406348
    JG 0x004063d9                       ; 0040634b
        ;   XREF to: 004063d9 (CONDITIONAL_JUMP)  ; LAB_004063d9
    CMP EAX,0x40000                     ; 00406351
    JGE 0x0040635d                      ; 00406356
        ;   XREF to: 0040635d (CONDITIONAL_JUMP)  ; LAB_0040635d
    MOV EAX,0x40000                     ; 00406358
    CMP EDX,0x40000                     ; 0040635d
        ;   Label: LAB_0040635d
    JGE 0x0040636a                      ; 00406363
        ;   XREF to: 0040636a (CONDITIONAL_JUMP)  ; LAB_0040636a
    MOV EDX,0x40000                     ; 00406365
    CMP EAX,0xfbffff                    ; 0040636a
        ;   Label: LAB_0040636a
    JLE 0x00406376                      ; 0040636f
        ;   XREF to: 00406376 (CONDITIONAL_JUMP)  ; LAB_00406376
    MOV EAX,0xfbffff                    ; 00406371
    CMP EDX,0xfbffff                    ; 00406376
        ;   Label: LAB_00406376
    JG 0x004063d2                       ; 0040637c
        ;   XREF to: 004063d2 (CONDITIONAL_JUMP)  ; LAB_004063d2
    IMUL EBP,dword ptr [ECX],0x30       ; 0040637e
        ;   Label: LAB_0040637e
    MOV dword ptr [EBP + 0x62202c],EAX  ; 00406381 | DAT_0062202c
    IMUL EAX,dword ptr [ECX],0x30       ; 00406387
    ADD EBX,0x4                         ; 0040638a
    INC EDI                             ; 0040638d
    ADD ESI,0x3                         ; 0040638e
    ADD ECX,0xc                         ; 00406391
    MOV dword ptr [EAX + 0x622030],EDX  ; 00406394 | DAT_00622030
    JMP 0x00406322                      ; 0040639a
        ;   XREF to: 00406322 (UNCONDITIONAL_JUMP)  ; LAB_00406322
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 0040639c | DAT_01c35e6c
        ;   Label: LAB_0040639c
    JMP 0x004062f4                      ; 004063a6
        ;   XREF to: 004062f4 (UNCONDITIONAL_JUMP)  ; LAB_004062f4
    CMP dword ptr [0x006141c0],0x20     ; 004063ab | DAT_006141c0
        ;   Label: LAB_004063ab
    JNZ 0x004063c3                      ; 004063b2
        ;   XREF to: 004063c3 (CONDITIONAL_JUMP)  ; LAB_004063c3
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 004063b4 | DAT_01c35e6c
    JMP 0x004062f4                      ; 004063be
        ;   XREF to: 004062f4 (UNCONDITIONAL_JUMP)  ; LAB_004062f4
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 004063c3 | DAT_01c35e6c
        ;   Label: LAB_004063c3
    JMP 0x004062f4                      ; 004063cd
        ;   XREF to: 004062f4 (UNCONDITIONAL_JUMP)  ; LAB_004062f4
    MOV EDX,0xfbffff                    ; 004063d2
        ;   Label: LAB_004063d2
    JMP 0x0040637e                      ; 004063d7
        ;   XREF to: 0040637e (UNCONDITIONAL_JUMP)  ; LAB_0040637e
    CMP EAX,0x10000                     ; 004063d9
        ;   Label: LAB_004063d9
    JGE 0x004063e5                      ; 004063de
        ;   XREF to: 004063e5 (CONDITIONAL_JUMP)  ; LAB_004063e5
    MOV EAX,0x10000                     ; 004063e0
    CMP EDX,0x10000                     ; 004063e5
        ;   Label: LAB_004063e5
    JGE 0x004063f2                      ; 004063eb
        ;   XREF to: 004063f2 (CONDITIONAL_JUMP)  ; LAB_004063f2
    MOV EDX,0x10000                     ; 004063ed
    CMP EAX,0xfeffff                    ; 004063f2
        ;   Label: LAB_004063f2
    JLE 0x004063fe                      ; 004063f7
        ;   XREF to: 004063fe (CONDITIONAL_JUMP)  ; LAB_004063fe
    MOV EAX,0xfeffff                    ; 004063f9
    CMP EDX,0xfeffff                    ; 004063fe
        ;   Label: LAB_004063fe
    JLE 0x0040637e                      ; 00406404
        ;   XREF to: 0040637e (CONDITIONAL_JUMP)  ; LAB_0040637e
    MOV EDX,0xfeffff                    ; 0040640a
    JMP 0x0040637e                      ; 0040640f
        ;   XREF to: 0040637e (UNCONDITIONAL_JUMP)  ; LAB_0040637e
    PUSH 0x70ca98                       ; 00406414 | DAT_0070ca98
        ;   Label: LAB_00406414
    PUSH EDI                            ; 00406419
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 0040641a
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 0040641f
    POP EBX                             ; 00406422
    POP ESI                             ; 00406423
    POP EDI                             ; 00406424
    MOV EDX,dword ptr [ESP + 0x8]       ; 00406425
        ;   Label: LAB_00406425
    MOV EDX,dword ptr [EDX + 0x4]       ; 00406429
    LEA EAX,[EDX*0x4 + 0x0]             ; 0040642c
    SUB EAX,EDX                         ; 00406433
    MOV EDX,dword ptr [ESP + 0x8]       ; 00406435
    SHL EAX,0x2                         ; 00406439
    ADD EDX,0x18                        ; 0040643c
    ADD EAX,EDX                         ; 0040643f
    POP EBP                             ; 00406441
    RET                                 ; 00406442

