; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_00407100(int param_1)
;
;
; XREF[1]:
;   engine_3d.c_dispatchMRGLToRenderer_FUN_00407860 at 00407a07
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_005fba38
;   undefined4 DAT_0060b014
;   undefined4 DAT_0060b018
;   undefined4 DAT_0060b02c
;   undefined4 DAT_0060b030
;   undefined4 DAT_007303e0
;   undefined4 DAT_00730418
;   undefined4 DAT_0073041c
;   undefined4 DAT_00730478
;   undefined4 DAT_0073047c
;   undefined4 DAT_00730480
;   undefined4 DAT_00730484
;   undefined4 DAT_00730488
;   undefined4 DAT_0073048c
;   ... and 11 more
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_clipper.c_clipAndRasterize_FUN_0043a840
;   engine_texture.cpp_getCurrentTexture_FUN_0056acf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00407100
        ;   Label: engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_00407100
    PUSH ESI                            ; 00407101
    PUSH EDI                            ; 00407102
    PUSH EBP                            ; 00407103
    SUB ESP,0x8                         ; 00407104
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00407107
    LEA ESI,[EBP + 0x18]                ; 0040710b
    LEA EAX,[EBP + 0x8]                 ; 0040710e
    PUSH EAX                            ; 00407111
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00407112
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 00407117
    TEST EAX,EAX                        ; 0040711a
    JZ 0x004072d1                       ; 0040711c
        ;   XREF to: 004072d1 (CONDITIONAL_JUMP)  ; LAB_004072d1
    CMP dword ptr [0x01c6e2a0],0x0      ; 00407122 | DAT_01c6e2a0
    JNZ 0x004071d4                      ; 00407129
        ;   XREF to: 004071d4 (CONDITIONAL_JUMP)  ; LAB_004071d4
    CMP dword ptr [0x005fba20],0x20     ; 0040712f | DAT_005fba20
    JNZ 0x004071c5                      ; 00407136
        ;   XREF to: 004071c5 (CONDITIONAL_JUMP)  ; LAB_004071c5
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 0040713c | DAT_01c6b5cc
    MOV EBX,0x1e7                       ; 00407146
        ;   Label: LAB_00407146
    MOV EDI,0x1                         ; 0040714b
    MOV ECX,0x730418                    ; 00407150 | DAT_00730418
    MOV EDX,ESI                         ; 00407155
    MOV dword ptr [0x01c6e2b4],EBX      ; 00407157 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EDI      ; 0040715d | DAT_01c6e2b8
    XOR EBX,EBX                         ; 00407163
    MOV EAX,dword ptr [EBP + 0x4]       ; 00407165
        ;   Label: LAB_00407165
    LEA EAX,[EAX + EAX*0x2]             ; 00407168
    CMP EBX,EAX                         ; 0040716b
    JGE 0x004071fb                      ; 0040716d
        ;   XREF to: 004071fb (CONDITIONAL_JUMP)  ; LAB_004071fb
    MOV ESI,dword ptr [0x007303e0]      ; 00407173 | DAT_007303e0
    MOV EAX,dword ptr [EDX]             ; 00407179
    ADD EAX,ESI                         ; 0040717b
    MOV dword ptr [ECX],EAX             ; 0040717d | DAT_00730418 | DAT_0073041c
    MOV EDI,dword ptr [0x007303e0]      ; 0040717f | DAT_007303e0
    MOV ESI,dword ptr [EDX]             ; 00407185
    ADD ESI,EDI                         ; 00407187
    LEA EAX,[ESI*0x4 + 0x0]             ; 00407189
    SUB EAX,ESI                         ; 00407190
    MOV ESI,EAX                         ; 00407192
    SHL ESI,0x4                         ; 00407194
    MOV EAX,dword ptr [EDX + 0x4]       ; 00407197
    MOV dword ptr [ESI + 0x60b02c],EAX  ; 0040719a | DAT_0060b02c
    MOV EAX,dword ptr [EDX]             ; 004071a0
    LEA ESI,[EDI + EAX*0x1]             ; 004071a2
    LEA EAX,[ESI*0x4 + 0x0]             ; 004071a5
    ADD ECX,0x4                         ; 004071ac
    SUB EAX,ESI                         ; 004071af
    ADD EDX,0xc                         ; 004071b1
    SHL EAX,0x4                         ; 004071b4
    MOV ESI,dword ptr [EDX + -0x4]      ; 004071b7
    ADD EBX,0x3                         ; 004071ba
    MOV dword ptr [EAX + 0x60b030],ESI  ; 004071bd | DAT_0060b030
    JMP 0x00407165                      ; 004071c3
        ;   XREF to: 00407165 (UNCONDITIONAL_JUMP)  ; LAB_00407165
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 004071c5 | DAT_01c6b5cc
        ;   Label: LAB_004071c5
    JMP 0x00407146                      ; 004071cf
        ;   XREF to: 00407146 (UNCONDITIONAL_JUMP)  ; LAB_00407146
    CMP dword ptr [0x005fba20],0x20     ; 004071d4 | DAT_005fba20
        ;   Label: LAB_004071d4
    JNZ 0x004071ec                      ; 004071db
        ;   XREF to: 004071ec (CONDITIONAL_JUMP)  ; LAB_004071ec
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 004071dd | DAT_01c6b5cc
    JMP 0x00407146                      ; 004071e7
        ;   XREF to: 00407146 (UNCONDITIONAL_JUMP)  ; LAB_00407146
    MOV dword ptr [0x01c6b5cc],0x561713 ; 004071ec | DAT_01c6b5cc
        ;   Label: LAB_004071ec
    JMP 0x00407146                      ; 004071f6
        ;   XREF to: 00407146 (UNCONDITIONAL_JUMP)  ; LAB_00407146
    CMP dword ptr [0x00730478],0x0      ; 004071fb | DAT_00730478
        ;   Label: LAB_004071fb
    JZ 0x004072ed                       ; 00407202
        ;   XREF to: 004072ed (CONDITIONAL_JUMP)  ; LAB_004072ed
    MOV EDX,dword ptr [0x0073047c]      ; 00407208 | DAT_0073047c
    CMP EDX,0x9c4                       ; 0040720e
    JGE 0x004072ed                      ; 00407214
        ;   XREF to: 004072ed (CONDITIONAL_JUMP)  ; LAB_004072ed
    MOV ECX,dword ptr [EBP + 0x4]       ; 0040721a
    CMP ECX,0x4                         ; 0040721d
    JG 0x004072ed                       ; 00407220
        ;   XREF to: 004072ed (CONDITIONAL_JUMP)  ; LAB_004072ed
    MOV ESI,0x7fffffff                  ; 00407226
    LEA EAX,[EDX*0x8 + 0x0]             ; 0040722b
    MOV EDI,dword ptr [0x0073047c]      ; 00407232 | DAT_0073047c
    ADD EAX,EDX                         ; 00407238
    XOR EBX,EBX                         ; 0040723a
    SHL EAX,0x2                         ; 0040723c
    MOV dword ptr [ESP + 0x4],ESI       ; 0040723f
    SUB EAX,EDX                         ; 00407243
    MOV EDX,0x730480                    ; 00407245 | DAT_00730480
    SHL EAX,0x3                         ; 0040724a
    INC EDI                             ; 0040724d
    ADD EDX,EAX                         ; 0040724e
    MOV dword ptr [0x0073047c],EDI      ; 00407250 | DAT_0073047c
    MOV dword ptr [ESP],EDX             ; 00407256
    MOV dword ptr [EDX],ECX             ; 00407259 | DAT_00730480
    TEST ECX,ECX                        ; 0040725b
    JLE 0x00407297                      ; 0040725d
        ;   XREF to: 00407297 (CONDITIONAL_JUMP)  ; LAB_00407297
    MOV EAX,EDX                         ; 0040725f
    XOR EDX,EDX                         ; 00407261
    IMUL ESI,dword ptr [EDX + 0x730418],0x30 ; 00407263 | DAT_00730418 | DAT_0073041c
        ;   Label: LAB_00407263
    LEA EDI,[EAX + 0x4]                 ; 0040726a
    MOV ECX,0xc                         ; 0040726d
    LEA ESI,[ESI + 0x60b014]            ; 00407272 | DAT_0060b014
    MOVSD.REP ES:EDI,ESI                ; 00407278 | DAT_0060b014 | DAT_00730484 | DAT_0060b018
    MOV ESI,dword ptr [ESP + 0x4]       ; 0040727a
    MOV ECX,dword ptr [EAX + 0xc]       ; 0040727e | DAT_0073048c
    CMP ECX,ESI                         ; 00407281
    JGE 0x00407289                      ; 00407283
        ;   XREF to: 00407289 (CONDITIONAL_JUMP)  ; LAB_00407289
    MOV dword ptr [ESP + 0x4],ECX       ; 00407285
    ADD EAX,0x30                        ; 00407289
        ;   Label: LAB_00407289
    INC EBX                             ; 0040728c
    MOV EDI,dword ptr [EBP + 0x4]       ; 0040728d
    ADD EDX,0x4                         ; 00407290
    CMP EBX,EDI                         ; 00407293
    JL 0x00407263                       ; 00407295
        ;   XREF to: 00407263 (CONDITIONAL_JUMP)  ; LAB_00407263
    CALL engine_texture.cpp_getCurrentTexture_FUN_0056acf0 ; 00407297
        ;   XREF to: 0056acf0 (UNCONDITIONAL_CALL)  ; SMRGLTextureBasic * engine_texture.cpp_getCurrentTexture_FUN_0056acf0()
        ;   Label: LAB_00407297
    MOV EDI,dword ptr [ESP]             ; 0040729c
    MOV ECX,0x12                        ; 0040729f
    MOV ESI,EAX                         ; 004072a4
    LEA EDI,[EDI + 0xc4]                ; 004072a6
    MOV EDX,dword ptr [ESP]             ; 004072ac
    MOV EAX,[0x005fba38]                ; 004072af | DAT_005fba38
    MOVSD.REP ES:EDI,ESI                ; 004072b4 | DAT_00730544 | DAT_00730548
    MOV dword ptr [EDX + 0x10c],EAX     ; 004072b6 | DAT_0073058c
    MOV EAX,[0x01c6e2ac]                ; 004072bc | DAT_01c6e2ac
    MOV dword ptr [EDX + 0x110],EAX     ; 004072c1 | DAT_00730590
    MOV EAX,dword ptr [ESP + 0x4]       ; 004072c7
    MOV dword ptr [EDX + 0x114],EAX     ; 004072cb | DAT_00730594
    MOV EDX,dword ptr [EBP + 0x4]       ; 004072d1
        ;   Label: LAB_004072d1
    LEA EAX,[EDX*0x4 + 0x0]             ; 004072d4
    SUB EAX,EDX                         ; 004072db
    ADD EBP,0x18                        ; 004072dd
    SHL EAX,0x2                         ; 004072e0
    ADD EAX,EBP                         ; 004072e3
    ADD ESP,0x8                         ; 004072e5
    POP EBP                             ; 004072e8
    POP EDI                             ; 004072e9
    POP ESI                             ; 004072ea
    POP EBX                             ; 004072eb
    RET                                 ; 004072ec
    PUSH 0x730418                       ; 004072ed | DAT_00730418
        ;   Label: LAB_004072ed
    MOV EBX,dword ptr [EBP + 0x4]       ; 004072f2
    PUSH EBX                            ; 004072f5
    CALL engine_clipper.c_clipAndRasterize_FUN_0043a840 ; 004072f6
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043a840(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004072fb
    JMP 0x004072d1                      ; 004072fe
        ;   XREF to: 004072d1 (UNCONDITIONAL_JUMP)  ; LAB_004072d1

