; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_004070e0(int param_1)
;
;
; XREF[1]:
;   engine_3d.c_FUN_00407820 at 004079c7
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_0061b4b8
;   undefined4 DAT_00629014
;   undefined4 DAT_00629018
;   undefined4 DAT_0062902c
;   undefined4 DAT_00629030
;   undefined4 DAT_00713a60
;   undefined4 DAT_00713a98
;   undefined4 DAT_00713a9c
;   undefined4 DAT_00713af8
;   undefined4 DAT_00713afc
;   undefined4 DAT_00713b00
;   undefined4 DAT_00713b04
;   undefined4 DAT_00713b08
;   undefined4 DAT_00713b0c
;   ... and 11 more
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_clipper.c_clipAndRasterize_FUN_0043cbf0
;   engine_texture.cpp_FUN_00597d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004070e0
        ;   Label: engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_004070e0
    PUSH ESI                            ; 004070e1
    PUSH EDI                            ; 004070e2
    PUSH EBP                            ; 004070e3
    SUB ESP,0x8                         ; 004070e4
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004070e7
    LEA ESI,[EBP + 0x18]                ; 004070eb
    LEA EAX,[EBP + 0x8]                 ; 004070ee
    PUSH EAX                            ; 004070f1
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 004070f2
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 004070f7
    TEST EAX,EAX                        ; 004070fa
    JZ 0x0040728f                       ; 004070fc
        ;   XREF to: 0040728f (CONDITIONAL_JUMP)  ; LAB_0040728f
    CMP dword ptr [0x01c51d00],0x0      ; 00407102 | DAT_01c51d00
    JNZ 0x00407192                      ; 00407109
        ;   XREF to: 00407192 (CONDITIONAL_JUMP)  ; LAB_00407192
    CMP dword ptr [0x0061b4a0],0x20     ; 0040710f | DAT_0061b4a0
    JNZ 0x00407186                      ; 00407116
        ;   XREF to: 00407186 (CONDITIONAL_JUMP)  ; LAB_00407186
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 00407118 | DAT_01c4f02c
    MOV EBX,0x1e7                       ; 00407122
        ;   Label: LAB_00407122
    MOV EDI,0x1                         ; 00407127
    MOV ECX,0x713a98                    ; 0040712c | DAT_00713a98
    MOV EAX,ESI                         ; 00407131
    MOV dword ptr [0x01c51d14],EBX      ; 00407133 | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EDI      ; 00407139 | DAT_01c51d18
    XOR EBX,EBX                         ; 0040713f
    MOV EDX,dword ptr [EBP + 0x4]       ; 00407141
        ;   Label: LAB_00407141
    LEA EDX,[EDX + EDX*0x2]             ; 00407144
    CMP EBX,EDX                         ; 00407147
    JGE 0x004071b9                      ; 00407149
        ;   XREF to: 004071b9 (CONDITIONAL_JUMP)  ; LAB_004071b9
    MOV ESI,dword ptr [0x00713a60]      ; 0040714b | DAT_00713a60
    MOV EDX,dword ptr [EAX]             ; 00407151
    ADD EDX,ESI                         ; 00407153
    MOV dword ptr [ECX],EDX             ; 00407155 | DAT_00713a98 | DAT_00713a9c
    MOV EDX,dword ptr [EAX]             ; 00407157
    ADD EDX,ESI                         ; 00407159
    MOV EDI,ESI                         ; 0040715b
    IMUL ESI,EDX,0x30                   ; 0040715d
    MOV EDX,dword ptr [EAX + 0x4]       ; 00407160
    MOV dword ptr [ESI + 0x62902c],EDX  ; 00407163 | DAT_0062902c
    MOV ESI,EDI                         ; 00407169
    MOV EDX,dword ptr [EAX]             ; 0040716b
    ADD EDX,ESI                         ; 0040716d
    IMUL ESI,EDX,0x30                   ; 0040716f
    ADD EAX,0xc                         ; 00407172
    ADD ECX,0x4                         ; 00407175
    MOV EDX,dword ptr [EAX + -0x4]      ; 00407178
    ADD EBX,0x3                         ; 0040717b
    MOV dword ptr [ESI + 0x629030],EDX  ; 0040717e | DAT_00629030
    JMP 0x00407141                      ; 00407184
        ;   XREF to: 00407141 (UNCONDITIONAL_JUMP)  ; LAB_00407141
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00407186 | DAT_01c4f02c
        ;   Label: LAB_00407186
    JMP 0x00407122                      ; 00407190
        ;   XREF to: 00407122 (UNCONDITIONAL_JUMP)  ; LAB_00407122
    CMP dword ptr [0x0061b4a0],0x20     ; 00407192 | DAT_0061b4a0
        ;   Label: LAB_00407192
    JNZ 0x004071aa                      ; 00407199
        ;   XREF to: 004071aa (CONDITIONAL_JUMP)  ; LAB_004071aa
    MOV dword ptr [0x01c4f02c],0x57de01 ; 0040719b | DAT_01c4f02c
    JMP 0x00407122                      ; 004071a5
        ;   XREF to: 00407122 (UNCONDITIONAL_JUMP)  ; LAB_00407122
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 004071aa | DAT_01c4f02c
        ;   Label: LAB_004071aa
    JMP 0x00407122                      ; 004071b4
        ;   XREF to: 00407122 (UNCONDITIONAL_JUMP)  ; LAB_00407122
    CMP dword ptr [0x00713af8],0x0      ; 004071b9 | DAT_00713af8
        ;   Label: LAB_004071b9
    JZ 0x004072ab                       ; 004071c0
        ;   XREF to: 004072ab (CONDITIONAL_JUMP)  ; LAB_004072ab
    MOV EDX,dword ptr [0x00713afc]      ; 004071c6 | DAT_00713afc
    CMP EDX,0x9c4                       ; 004071cc
    JGE 0x004072ab                      ; 004071d2
        ;   XREF to: 004072ab (CONDITIONAL_JUMP)  ; LAB_004072ab
    MOV ECX,dword ptr [EBP + 0x4]       ; 004071d8
    CMP ECX,0x4                         ; 004071db
    JG 0x004072ab                       ; 004071de
        ;   XREF to: 004072ab (CONDITIONAL_JUMP)  ; LAB_004072ab
    MOV ESI,0x7fffffff                  ; 004071e4
    LEA EAX,[EDX*0x8 + 0x0]             ; 004071e9
    MOV EDI,dword ptr [0x00713afc]      ; 004071f0 | DAT_00713afc
    ADD EAX,EDX                         ; 004071f6
    XOR EBX,EBX                         ; 004071f8
    SHL EAX,0x2                         ; 004071fa
    MOV dword ptr [ESP + 0x4],ESI       ; 004071fd
    SUB EAX,EDX                         ; 00407201
    MOV EDX,0x713b00                    ; 00407203 | DAT_00713b00
    SHL EAX,0x3                         ; 00407208
    INC EDI                             ; 0040720b
    ADD EDX,EAX                         ; 0040720c
    MOV dword ptr [0x00713afc],EDI      ; 0040720e | DAT_00713afc
    MOV dword ptr [ESP],EDX             ; 00407214
    MOV dword ptr [EDX],ECX             ; 00407217 | DAT_00713b00
    TEST ECX,ECX                        ; 00407219
    JLE 0x00407255                      ; 0040721b
        ;   XREF to: 00407255 (CONDITIONAL_JUMP)  ; LAB_00407255
    MOV EAX,EDX                         ; 0040721d
    XOR EDX,EDX                         ; 0040721f
    IMUL ESI,dword ptr [EDX + 0x713a98],0x30 ; 00407221 | DAT_00713a98 | DAT_00713a9c
        ;   Label: LAB_00407221
    LEA EDI,[EAX + 0x4]                 ; 00407228
    MOV ECX,0xc                         ; 0040722b
    LEA ESI,[ESI + 0x629014]            ; 00407230 | DAT_00629014
    MOVSD.REP ES:EDI,ESI                ; 00407236 | DAT_00629014 | DAT_00713b04 | DAT_00629018
    MOV ESI,dword ptr [ESP + 0x4]       ; 00407238
    MOV ECX,dword ptr [EAX + 0xc]       ; 0040723c | DAT_00713b0c
    CMP ECX,ESI                         ; 0040723f
    JGE 0x00407247                      ; 00407241
        ;   XREF to: 00407247 (CONDITIONAL_JUMP)  ; LAB_00407247
    MOV dword ptr [ESP + 0x4],ECX       ; 00407243
    ADD EAX,0x30                        ; 00407247
        ;   Label: LAB_00407247
    INC EBX                             ; 0040724a
    MOV EDI,dword ptr [EBP + 0x4]       ; 0040724b
    ADD EDX,0x4                         ; 0040724e
    CMP EBX,EDI                         ; 00407251
    JL 0x00407221                       ; 00407253
        ;   XREF to: 00407221 (CONDITIONAL_JUMP)  ; LAB_00407221
    CALL engine_texture.cpp_FUN_00597d00 ; 00407255
        ;   XREF to: 00597d00 (UNCONDITIONAL_CALL)  ; SMRGLTextureBasic * engine_texture.cpp_FUN_00597d00()
        ;   Label: LAB_00407255
    MOV EDI,dword ptr [ESP]             ; 0040725a
    MOV ECX,0x12                        ; 0040725d
    MOV ESI,EAX                         ; 00407262
    LEA EDI,[EDI + 0xc4]                ; 00407264
    MOV EDX,dword ptr [ESP]             ; 0040726a
    MOV EAX,[0x0061b4b8]                ; 0040726d | DAT_0061b4b8
    MOVSD.REP ES:EDI,ESI                ; 00407272 | DAT_00713bc4 | DAT_00713bc8
    MOV dword ptr [EDX + 0x10c],EAX     ; 00407274 | DAT_00713c0c
    MOV EAX,[0x01c51d0c]                ; 0040727a | DAT_01c51d0c
    MOV dword ptr [EDX + 0x110],EAX     ; 0040727f | DAT_00713c10
    MOV EAX,dword ptr [ESP + 0x4]       ; 00407285
    MOV dword ptr [EDX + 0x114],EAX     ; 00407289 | DAT_00713c14
    MOV EDX,dword ptr [EBP + 0x4]       ; 0040728f
        ;   Label: LAB_0040728f
    LEA EAX,[EDX*0x4 + 0x0]             ; 00407292
    SUB EAX,EDX                         ; 00407299
    ADD EBP,0x18                        ; 0040729b
    SHL EAX,0x2                         ; 0040729e
    ADD EAX,EBP                         ; 004072a1
    ADD ESP,0x8                         ; 004072a3
    POP EBP                             ; 004072a6
    POP EDI                             ; 004072a7
    POP ESI                             ; 004072a8
    POP EBX                             ; 004072a9
    RET                                 ; 004072aa
    PUSH 0x713a98                       ; 004072ab | DAT_00713a98
        ;   Label: LAB_004072ab
    MOV EBX,dword ptr [EBP + 0x4]       ; 004072b0
    PUSH EBX                            ; 004072b3
    CALL engine_clipper.c_clipAndRasterize_FUN_0043cbf0 ; 004072b4
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043cbf0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004072b9
    JMP 0x0040728f                      ; 004072bc
        ;   XREF to: 0040728f (UNCONDITIONAL_JUMP)  ; LAB_0040728f

