; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_004840f0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
;
;
; XREF[1]:
;   shape_edittool.cpp_FUN_00484440 at 0048461f
;
; Referenced Globals:
;   undefined4 DAT_01c25f84
;   undefined4 DAT_01c263fc
;   undefined4 DAT_01c35838
;   undefined4 DAT_01c35839
;   undefined4 DAT_01c3583a
;   undefined4 DAT_01c35e60
;
; Called Functions:
;   engine_2d.c_drawHLine_FUN_00402f30
;   engine_2d.c_drawVLine_FUN_00403040
;   engine_mini3d.cpp_FUN_004f8e20
;   engine_mini3d.cpp_FUN_004f9390
;   engine_mini3d.cpp_FUN_004f93b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004840f0
        ;   Label: shape_edittool.cpp_FUN_004840f0
    PUSH ESI                            ; 004840f1
    PUSH EDI                            ; 004840f2
    PUSH EBP                            ; 004840f3
    MOV ESI,dword ptr [ESP + 0x24]      ; 004840f4
    MOV EDI,dword ptr [ESP + 0x28]      ; 004840f8
    MOV EDX,dword ptr [0x01c25f84]      ; 004840fc | DAT_01c25f84
    MOV EBX,dword ptr [0x01c263fc]      ; 00484102 | DAT_01c263fc
    TEST EDX,EDX                        ; 00484108
    JNZ 0x00484180                      ; 0048410a
        ;   XREF to: 00484180 (CONDITIONAL_JUMP)  ; LAB_00484180
    MOV dword ptr [0x01c35e60],EBX      ; 0048410c | DAT_01c35e60
    TEST EDI,EDI                        ; 00484112
        ;   Label: LAB_00484112
    JNZ 0x004841bf                      ; 00484114
        ;   XREF to: 004841bf (CONDITIONAL_JUMP)  ; LAB_004841bf
    MOV EDX,dword ptr [ESP + 0x14]      ; 0048411a
        ;   Label: LAB_0048411a
    ADD EDX,dword ptr [ESP + 0x1c]      ; 0048411e
    DEC EDX                             ; 00484122
    MOV EAX,EDX                         ; 00484123
    SAR EDX,0x1f                        ; 00484125
    SUB EAX,EDX                         ; 00484128
    SAR EAX,0x1                         ; 0048412a
    MOV ECX,dword ptr [ESP + 0x18]      ; 0048412c
    MOV EDX,dword ptr [ESP + 0x20]      ; 00484130
    LEA EBX,[EAX + ESI*0x1]             ; 00484134
    SUB EDX,ECX                         ; 00484137
    MOV EBP,0x3                         ; 00484139
    MOV EAX,EDX                         ; 0048413e
    SAR EDX,0x1f                        ; 00484140
    IDIV EBP                            ; 00484143
    LEA EBP,[EBX + EAX*0x1]             ; 00484145
    TEST EDI,EDI                        ; 00484148
    JNZ 0x00484254                      ; 0048414a
        ;   XREF to: 00484254 (CONDITIONAL_JUMP)  ; LAB_00484254
    LEA EDX,[ECX + EAX*0x1 + 0x1]       ; 00484150
    ADD ESI,EDX                         ; 00484154
    TEST EAX,EAX                        ; 00484156
    JLE 0x0048417b                      ; 00484158
        ;   XREF to: 0048417b (CONDITIONAL_JUMP)  ; LAB_0048417b
    MOV EDI,EBX                         ; 0048415a
    CMP dword ptr [0x01c25f84],0x0      ; 0048415c | DAT_01c25f84
        ;   Label: LAB_0048415c
    JNZ 0x00484239                      ; 00484163
        ;   XREF to: 00484239 (CONDITIONAL_JUMP)  ; LAB_00484239
    PUSH EBX                            ; 00484169
    PUSH ESI                            ; 0048416a
    PUSH EDI                            ; 0048416b
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 0048416c
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    ADD ESP,0xc                         ; 00484171
    DEC EDI                             ; 00484174
    INC EBX                             ; 00484175
    INC ESI                             ; 00484176
    CMP EBX,EBP                         ; 00484177
    JL 0x0048415c                       ; 00484179
        ;   XREF to: 0048415c (CONDITIONAL_JUMP)  ; LAB_0048415c
    POP EBP                             ; 0048417b
        ;   Label: LAB_0048417b
    POP EDI                             ; 0048417c
    POP ESI                             ; 0048417d
    POP EBX                             ; 0048417e
    RET                                 ; 0048417f
    AND EBX,0xff                        ; 00484180
        ;   Label: LAB_00484180
    MOV EAX,EBX                         ; 00484186
    SHL EBX,0x2                         ; 00484188
    SUB EBX,EAX                         ; 0048418b
    XOR EAX,EAX                         ; 0048418d
    MOV AL,byte ptr [EBX + 0x1c35839]   ; 0048418f | DAT_01c35839
    MOV EDX,EAX                         ; 00484195
    XOR EAX,EAX                         ; 00484197
    MOV AL,byte ptr [EBX + 0x1c35838]   ; 00484199 | DAT_01c35838
    SHL EDX,0x8                         ; 0048419f
    SHL EAX,0x10                        ; 004841a2
    OR EDX,EAX                          ; 004841a5
    XOR EAX,EAX                         ; 004841a7
    MOV AL,byte ptr [EBX + 0x1c3583a]   ; 004841a9 | DAT_01c3583a
    OR EAX,EDX                          ; 004841af
    PUSH EAX                            ; 004841b1
    CALL engine_mini3d.cpp_FUN_004f8e20 ; 004841b2
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8e20()
    ADD ESP,0x4                         ; 004841b7
    JMP 0x00484112                      ; 004841ba
        ;   XREF to: 00484112 (UNCONDITIONAL_JUMP)  ; LAB_00484112
    CMP EDI,0x1                         ; 004841bf
        ;   Label: LAB_004841bf
    JZ 0x0048411a                       ; 004841c2
        ;   XREF to: 0048411a (CONDITIONAL_JUMP)  ; LAB_0048411a
    MOV EDX,dword ptr [ESP + 0x18]      ; 004841c8
    ADD EDX,dword ptr [ESP + 0x20]      ; 004841cc
    DEC EDX                             ; 004841d0
    MOV EAX,EDX                         ; 004841d1
    SAR EDX,0x1f                        ; 004841d3
    SUB EAX,EDX                         ; 004841d6
    SAR EAX,0x1                         ; 004841d8
    MOV EBP,dword ptr [ESP + 0x14]      ; 004841da
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004841de
    LEA EBX,[EAX + ESI*0x1]             ; 004841e2
    SUB EDX,EBP                         ; 004841e5
    MOV EBP,0x3                         ; 004841e7
    MOV EAX,EDX                         ; 004841ec
    SAR EDX,0x1f                        ; 004841ee
    IDIV EBP                            ; 004841f1
    LEA EDX,[EBX + EAX*0x1]             ; 004841f3
    CMP EDI,0x2                         ; 004841f6
    JNZ 0x004842be                      ; 004841f9
        ;   XREF to: 004842be (CONDITIONAL_JUMP)  ; LAB_004842be
    MOV EDI,dword ptr [ESP + 0x14]      ; 004841ff
    ADD EDI,EAX                         ; 00484203
    INC EDI                             ; 00484205
    ADD EDI,ESI                         ; 00484206
    TEST EAX,EAX                        ; 00484208
    JLE 0x0048417b                      ; 0048420a
        ;   XREF to: 0048417b (CONDITIONAL_JUMP)  ; LAB_0048417b
    MOV ESI,EBX                         ; 00484210
    MOV EBP,EDX                         ; 00484212
    CMP dword ptr [0x01c25f84],0x0      ; 00484214 | DAT_01c25f84
        ;   Label: LAB_00484214
    JNZ 0x004842a3                      ; 0048421b
        ;   XREF to: 004842a3 (CONDITIONAL_JUMP)  ; LAB_004842a3
    PUSH EBX                            ; 00484221
    PUSH ESI                            ; 00484222
    PUSH EDI                            ; 00484223
    CALL engine_2d.c_drawVLine_FUN_00403040 ; 00484224
        ;   XREF to: 00403040 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawVLine_FUN_00403040(int x, int y1, int y2)
    ADD ESP,0xc                         ; 00484229
    INC EDI                             ; 0048422c
    INC EBX                             ; 0048422d
    DEC ESI                             ; 0048422e
    CMP EBX,EBP                         ; 0048422f
    JGE 0x0048417b                      ; 00484231
        ;   XREF to: 0048417b (CONDITIONAL_JUMP)  ; LAB_0048417b
    JMP 0x00484214                      ; 00484237
        ;   XREF to: 00484214 (UNCONDITIONAL_JUMP)  ; LAB_00484214
    PUSH EBX                            ; 00484239
        ;   Label: LAB_00484239
    PUSH ESI                            ; 0048423a
    PUSH EDI                            ; 0048423b
    CALL engine_mini3d.cpp_FUN_004f9390 ; 0048423c
        ;   XREF to: 004f9390 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f9390()
    ADD ESP,0xc                         ; 00484241
    DEC EDI                             ; 00484244
    INC EBX                             ; 00484245
    INC ESI                             ; 00484246
    CMP EBX,EBP                         ; 00484247
    JL 0x0048415c                       ; 00484249
        ;   XREF to: 0048415c (CONDITIONAL_JUMP)  ; LAB_0048415c
    POP EBP                             ; 0048424f
    POP EDI                             ; 00484250
    POP ESI                             ; 00484251
    POP EBX                             ; 00484252
    RET                                 ; 00484253
    MOV EDX,dword ptr [ESP + 0x20]      ; 00484254
        ;   Label: LAB_00484254
    SUB EDX,EAX                         ; 00484258
    SUB EDX,0x2                         ; 0048425a
    LEA EDI,[EDX + ESI*0x1]             ; 0048425d
    TEST EAX,EAX                        ; 00484260
    JLE 0x0048417b                      ; 00484262
        ;   XREF to: 0048417b (CONDITIONAL_JUMP)  ; LAB_0048417b
    MOV ESI,EBX                         ; 00484268
    CMP dword ptr [0x01c25f84],0x0      ; 0048426a | DAT_01c25f84
        ;   Label: LAB_0048426a
    JNZ 0x0048428b                      ; 00484271
        ;   XREF to: 0048428b (CONDITIONAL_JUMP)  ; LAB_0048428b
    PUSH EBX                            ; 00484273
    PUSH EDI                            ; 00484274
    PUSH ESI                            ; 00484275
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 00484276
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    ADD ESP,0xc                         ; 0048427b
    DEC ESI                             ; 0048427e
    INC EBX                             ; 0048427f
    DEC EDI                             ; 00484280
    CMP EBX,EBP                         ; 00484281
    JGE 0x0048417b                      ; 00484283
        ;   XREF to: 0048417b (CONDITIONAL_JUMP)  ; LAB_0048417b
    JMP 0x0048426a                      ; 00484289
        ;   XREF to: 0048426a (UNCONDITIONAL_JUMP)  ; LAB_0048426a
    PUSH EBX                            ; 0048428b
        ;   Label: LAB_0048428b
    PUSH EDI                            ; 0048428c
    PUSH ESI                            ; 0048428d
    CALL engine_mini3d.cpp_FUN_004f9390 ; 0048428e
        ;   XREF to: 004f9390 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f9390()
    ADD ESP,0xc                         ; 00484293
    DEC ESI                             ; 00484296
    INC EBX                             ; 00484297
    DEC EDI                             ; 00484298
    CMP EBX,EBP                         ; 00484299
    JGE 0x0048417b                      ; 0048429b
        ;   XREF to: 0048417b (CONDITIONAL_JUMP)  ; LAB_0048417b
    JMP 0x0048426a                      ; 004842a1
        ;   XREF to: 0048426a (UNCONDITIONAL_JUMP)  ; LAB_0048426a
    PUSH EBX                            ; 004842a3
        ;   Label: LAB_004842a3
    PUSH ESI                            ; 004842a4
    PUSH EDI                            ; 004842a5
    CALL engine_mini3d.cpp_FUN_004f93b0 ; 004842a6
        ;   XREF to: 004f93b0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f93b0()
    ADD ESP,0xc                         ; 004842ab
    INC EDI                             ; 004842ae
    INC EBX                             ; 004842af
    DEC ESI                             ; 004842b0
    CMP EBX,EBP                         ; 004842b1
    JGE 0x0048417b                      ; 004842b3
        ;   XREF to: 0048417b (CONDITIONAL_JUMP)  ; LAB_0048417b
    JMP 0x00484214                      ; 004842b9
        ;   XREF to: 00484214 (UNCONDITIONAL_JUMP)  ; LAB_00484214
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004842be
        ;   Label: LAB_004842be
    SUB EDI,EAX                         ; 004842c2
    SUB EDI,0x2                         ; 004842c4
    ADD EDI,ESI                         ; 004842c7
    TEST EAX,EAX                        ; 004842c9
    JLE 0x0048417b                      ; 004842cb
        ;   XREF to: 0048417b (CONDITIONAL_JUMP)  ; LAB_0048417b
    MOV ESI,EBX                         ; 004842d1
    MOV EBP,EDX                         ; 004842d3
    CMP dword ptr [0x01c25f84],0x0      ; 004842d5 | DAT_01c25f84
        ;   Label: LAB_004842d5
    JNZ 0x004842f6                      ; 004842dc
        ;   XREF to: 004842f6 (CONDITIONAL_JUMP)  ; LAB_004842f6
    PUSH EBX                            ; 004842de
    PUSH ESI                            ; 004842df
    PUSH EDI                            ; 004842e0
    CALL engine_2d.c_drawVLine_FUN_00403040 ; 004842e1
        ;   XREF to: 00403040 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawVLine_FUN_00403040(int x, int y1, int y2)
    ADD ESP,0xc                         ; 004842e6
    DEC EDI                             ; 004842e9
    INC EBX                             ; 004842ea
    DEC ESI                             ; 004842eb
    CMP EBX,EBP                         ; 004842ec
    JGE 0x0048417b                      ; 004842ee
        ;   XREF to: 0048417b (CONDITIONAL_JUMP)  ; LAB_0048417b
    JMP 0x004842d5                      ; 004842f4
        ;   XREF to: 004842d5 (UNCONDITIONAL_JUMP)  ; LAB_004842d5
    PUSH EBX                            ; 004842f6
        ;   Label: LAB_004842f6
    PUSH ESI                            ; 004842f7
    PUSH EDI                            ; 004842f8
    CALL engine_mini3d.cpp_FUN_004f93b0 ; 004842f9
        ;   XREF to: 004f93b0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f93b0()
    ADD ESP,0xc                         ; 004842fe
    DEC EDI                             ; 00484301
    INC EBX                             ; 00484302
    DEC ESI                             ; 00484303
    CMP EBX,EBP                         ; 00484304
    JGE 0x0048417b                      ; 00484306
        ;   XREF to: 0048417b (CONDITIONAL_JUMP)  ; LAB_0048417b
    JMP 0x004842d5                      ; 0048430c
        ;   XREF to: 004842d5 (UNCONDITIONAL_JUMP)  ; LAB_004842d5

