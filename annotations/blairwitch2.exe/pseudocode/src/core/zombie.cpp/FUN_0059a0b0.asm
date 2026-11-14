; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_zombie_cpp_FUN_0059a0b0(SRenderVertex *vertex_buffer,int vertex_count)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertex_buffer
; int              Stack[0x8]:4   vertex_count
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590 at 0046964c
;   engine_drender.cpp_FUN_0046c290 at 0046c36c
;
; Referenced Globals:
;   undefined4 DAT_006141e0
;   undefined4 DAT_0070ca74
;   undefined4 DAT_0070ca7c
;   undefined4 DAT_01ba5714
;   undefined4 DAT_01ba5c80
;   undefined4 DAT_01c35e38
;   undefined4 DAT_01c35e3c
;   undefined4 DAT_01c35e40
;   undefined4 DAT_01c35e44
;   undefined4 DAT_01c37788
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;   undefined4 DAT_01e61b58
;   undefined4 DAT_026672a8
;   undefined4 DAT_026672ac
;   ... and 3 more
;
; Called Functions:
;   engine_prim.c_calculateTriangleWindingOrder_FUN_0051c760
;   engine_prim.c_prepareDepthBuffer_FUN_0051c5c0
;   engine_prim.c_replaceWWithDepth_FUN_0051c720
;   engine_special.cpp_drawPolygon_FUN_0055f8f0
;   engine_special.cpp_FUN_0055d6d7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059a0b0
        ;   Label: core_zombie.cpp_FUN_0059a0b0
    PUSH ESI                            ; 0059a0b1
    PUSH EDI                            ; 0059a0b2
    PUSH EBP                            ; 0059a0b3
    SUB ESP,0x20                        ; 0059a0b4
    MOV EBP,dword ptr [0x026672a8]      ; 0059a0b7 | DAT_026672a8
    CMP dword ptr [0x006141e0],0x0      ; 0059a0bd | DAT_006141e0
    JZ 0x0059a173                       ; 0059a0c4
        ;   XREF to: 0059a173 (CONDITIONAL_JUMP)  ; LAB_0059a173
    MOV EBX,dword ptr [ESP + 0x38]      ; 0059a0ca
    MOV ECX,dword ptr [ESP + 0x34]      ; 0059a0ce
    XOR ESI,ESI                         ; 0059a0d2
    TEST EBX,EBX                        ; 0059a0d4
    JLE 0x0059a173                      ; 0059a0d6
        ;   XREF to: 0059a173 (CONDITIONAL_JUMP)  ; LAB_0059a173
    MOV EDI,dword ptr [ESP + 0x38]      ; 0059a0dc
    MOV AH,byte ptr [ECX + 0x13]        ; 0059a0e0
        ;   Label: LAB_0059a0e0
    MOV dword ptr [0x026672a8],EBP      ; 0059a0e3 | DAT_026672a8
    TEST AH,0x80                        ; 0059a0e9
    JZ 0x0059a161                       ; 0059a0ec
        ;   XREF to: 0059a161 (CONDITIONAL_JUMP)  ; LAB_0059a161
    TEST byte ptr [0x01c38b58],0x6      ; 0059a0ee | DAT_01c38b58
    JZ 0x0059a109                       ; 0059a0f5
        ;   XREF to: 0059a109 (CONDITIONAL_JUMP)  ; LAB_0059a109
    MOV EAX,0x7fffffff                  ; 0059a0f7
    MOV EDX,EAX                         ; 0059a0fc
    MOV EBX,dword ptr [ECX + 0x8]       ; 0059a0fe
    SAR EDX,0x1f                        ; 0059a101
    IDIV EBX                            ; 0059a104
    MOV dword ptr [ECX + 0xc],EAX       ; 0059a106
    MOV DH,byte ptr [0x01c38b58]        ; 0059a109 | DAT_01c38b58
        ;   Label: LAB_0059a109
    MOV dword ptr [0x026672a8],EBP      ; 0059a10f | DAT_026672a8
    TEST DH,0x1                         ; 0059a115
    JZ 0x0059a12c                       ; 0059a118
        ;   XREF to: 0059a12c (CONDITIONAL_JUMP)  ; LAB_0059a12c
    MOV EAX,0x7fffffff                  ; 0059a11a
    MOV EDX,EAX                         ; 0059a11f
    MOV EBX,dword ptr [ECX + 0x8]       ; 0059a121
    SAR EDX,0x1f                        ; 0059a124
    IDIV EBX                            ; 0059a127
    MOV dword ptr [ECX + 0xc],EAX       ; 0059a129
    MOV EDX,dword ptr [0x01c35e38]      ; 0059a12c | DAT_01c35e38
        ;   Label: LAB_0059a12c
    MOV EBX,dword ptr [ECX + 0x8]       ; 0059a132
    MOV EAX,dword ptr [ECX]             ; 0059a135
    IMUL EDX                            ; 0059a137
    IDIV EBX                            ; 0059a139
    MOV EDX,dword ptr [0x01c35e40]      ; 0059a13b | DAT_01c35e40
    ADD EAX,EDX                         ; 0059a141
    MOV EBX,dword ptr [ECX + 0x8]       ; 0059a143
    MOV dword ptr [ECX + 0x10],EAX      ; 0059a146
    MOV EDX,dword ptr [0x01c35e3c]      ; 0059a149 | DAT_01c35e3c
    MOV EAX,dword ptr [ECX + 0x4]       ; 0059a14f
    IMUL EDX                            ; 0059a152
    IDIV EBX                            ; 0059a154
    MOV EDX,dword ptr [0x01c35e44]      ; 0059a156 | DAT_01c35e44
    ADD EAX,EDX                         ; 0059a15c
    MOV dword ptr [ECX + 0x14],EAX      ; 0059a15e
    MOV EBP,dword ptr [0x026672a8]      ; 0059a161 | DAT_026672a8
        ;   Label: LAB_0059a161
    INC ESI                             ; 0059a167
    ADD ECX,0x30                        ; 0059a168
    CMP ESI,EDI                         ; 0059a16b
    JL 0x0059a0e0                       ; 0059a16d
        ;   XREF to: 0059a0e0 (CONDITIONAL_JUMP)  ; LAB_0059a0e0
    MOV EAX,[0x0070ca7c]                ; 0059a173 | DAT_0070ca7c
        ;   Label: LAB_0059a173
    MOV dword ptr [0x026672a8],EBP      ; 0059a178 | DAT_026672a8
    TEST EAX,EAX                        ; 0059a17e
    JNZ 0x0059a35c                      ; 0059a180
        ;   XREF to: 0059a35c (CONDITIONAL_JUMP)  ; LAB_0059a35c
    MOV ECX,dword ptr [0x01e61b58]      ; 0059a186 | DAT_01e61b58
        ;   Label: LAB_0059a186
    INC ECX                             ; 0059a18c
    MOV EBX,dword ptr [0x01c37788]      ; 0059a18d | DAT_01c37788
    MOV dword ptr [0x01e61b58],ECX      ; 0059a193 | DAT_01e61b58
    TEST EBX,EBX                        ; 0059a199
    JZ 0x0059a1aa                       ; 0059a19b
        ;   XREF to: 0059a1aa (CONDITIONAL_JUMP)  ; LAB_0059a1aa
    CMP dword ptr [0x0070ca74],0x0      ; 0059a19d | DAT_0070ca74
    JZ 0x0059a38f                       ; 0059a1a4
        ;   XREF to: 0059a38f (CONDITIONAL_JUMP)  ; LAB_0059a38f
    MOV EAX,[0x01c38b58]                ; 0059a1aa | DAT_01c38b58
        ;   Label: LAB_0059a1aa
    MOV EBP,dword ptr [0x026672a8]      ; 0059a1af | DAT_026672a8
    CMP EAX,0x1                         ; 0059a1b5
    JNC 0x0059a3e4                      ; 0059a1b8
        ;   XREF to: 0059a3e4 (CONDITIONAL_JUMP)  ; LAB_0059a3e4
    MOV ECX,0x4b0                       ; 0059a1be
        ;   Label: LAB_0059a1be
    MOV ESI,dword ptr [ESP + 0x38]      ; 0059a1c3
    XOR EBX,EBX                         ; 0059a1c7
    XOR EBP,EBP                         ; 0059a1c9
    XOR EDI,EDI                         ; 0059a1cb
    MOV dword ptr [0x026677b0],EBX      ; 0059a1cd | DAT_026677b0
    MOV dword ptr [0x026677ac],ECX      ; 0059a1d3 | DAT_026677ac
    TEST ESI,ESI                        ; 0059a1d9
    JLE 0x0059a22b                      ; 0059a1db
        ;   XREF to: 0059a22b (CONDITIONAL_JUMP)  ; LAB_0059a22b
    MOV ESI,dword ptr [ESP + 0x38]      ; 0059a1dd
        ;   Label: LAB_0059a1dd
    LEA EAX,[EDI + 0x1]                 ; 0059a1e1
    CMP EAX,ESI                         ; 0059a1e4
    JL 0x0059a1ea                       ; 0059a1e6
        ;   XREF to: 0059a1ea (CONDITIONAL_JUMP)  ; LAB_0059a1ea
    XOR EAX,EAX                         ; 0059a1e8
    IMUL EAX,EAX,0x30                   ; 0059a1ea
        ;   Label: LAB_0059a1ea
    MOV EDX,dword ptr [ESP + 0x34]      ; 0059a1ed
    ADD EDX,EAX                         ; 0059a1f1
    IMUL EAX,EDI,0x30                   ; 0059a1f3
    MOV dword ptr [ESP + 0xc],EDX       ; 0059a1f6
    MOV EDX,dword ptr [ESP + 0x34]      ; 0059a1fa
    ADD EDX,EAX                         ; 0059a1fe
    MOV EAX,dword ptr [ESP + 0xc]       ; 0059a200
    MOV dword ptr [ESP + 0x8],EDX       ; 0059a204
    MOV ESI,EDX                         ; 0059a208
    MOV dword ptr [ESP + 0x10],EAX      ; 0059a20a
    MOV EDX,dword ptr [EDX + 0x14]      ; 0059a20e
    MOV EAX,dword ptr [EAX + 0x14]      ; 0059a211
    SAR EDX,0x10                        ; 0059a214
    SAR EAX,0x10                        ; 0059a217
    CMP EDX,EAX                         ; 0059a21a
    JNZ 0x0059a3f0                      ; 0059a21c
        ;   XREF to: 0059a3f0 (CONDITIONAL_JUMP)  ; LAB_0059a3f0
    MOV ECX,dword ptr [ESP + 0x38]      ; 0059a222
        ;   Label: LAB_0059a222
    INC EDI                             ; 0059a226
    CMP EDI,ECX                         ; 0059a227
    JL 0x0059a1dd                       ; 0059a229
        ;   XREF to: 0059a1dd (CONDITIONAL_JUMP)  ; LAB_0059a1dd
    MOV ESI,0x26672ac                   ; 0059a22b
        ;   Label: LAB_0059a22b
    MOV EDI,dword ptr [0x026677ac]      ; 0059a230 | DAT_026677ac
    XOR EBX,EBX                         ; 0059a236
    XOR EAX,EAX                         ; 0059a238
    MOV dword ptr [0x01ba5c80],EBX      ; 0059a23a | DAT_01ba5c80
    TEST EBP,EBP                        ; 0059a240
    JLE 0x0059a4fe                      ; 0059a242
        ;   XREF to: 0059a4fe (CONDITIONAL_JUMP)  ; LAB_0059a4fe
    CMP EDI,dword ptr [ESI]             ; 0059a248 | DAT_026672ac | DAT_026672fc
        ;   Label: LAB_0059a248
    JNZ 0x0059a4f2                      ; 0059a24a
        ;   XREF to: 0059a4f2 (CONDITIONAL_JUMP)  ; LAB_0059a4f2
    TEST ESI,ESI                        ; 0059a250
    JZ 0x0059a4f2                       ; 0059a252
        ;   XREF to: 0059a4f2 (CONDITIONAL_JUMP)  ; LAB_0059a4f2
    MOV dword ptr [ESP + 0x1c],ESI      ; 0059a258 | DAT_026672ac | DAT_026672fc
        ;   Label: LAB_0059a258
    MOV dword ptr [0x026672a8],EBP      ; 0059a25c | DAT_026672a8
    TEST ESI,ESI                        ; 0059a262
    JZ 0x0059a34e                       ; 0059a264
        ;   XREF to: 0059a34e (CONDITIONAL_JUMP)  ; LAB_0059a34e
    MOV EAX,0x26672ac                   ; 0059a26a
    MOV EBX,dword ptr [0x026677ac]      ; 0059a26f | DAT_026677ac
    MOV ECX,ESI                         ; 0059a275
    XOR EDX,EDX                         ; 0059a277
    TEST EBP,EBP                        ; 0059a279
    JLE 0x0059a511                      ; 0059a27b
        ;   XREF to: 0059a511 (CONDITIONAL_JUMP)  ; LAB_0059a511
    CMP EBX,dword ptr [EAX]             ; 0059a281 | DAT_026672ac | DAT_026672fc
        ;   Label: LAB_0059a281
    JNZ 0x0059a505                      ; 0059a283
        ;   XREF to: 0059a505 (CONDITIONAL_JUMP)  ; LAB_0059a505
    CMP EAX,ECX                         ; 0059a289
    JZ 0x0059a505                       ; 0059a28b
        ;   XREF to: 0059a505 (CONDITIONAL_JUMP)  ; LAB_0059a505
    MOV dword ptr [ESP + 0x18],EAX      ; 0059a291 | DAT_026672ac | DAT_026672fc
        ;   Label: LAB_0059a291
    MOV dword ptr [0x026672a8],EBP      ; 0059a295 | DAT_026672a8
    TEST EAX,EAX                        ; 0059a29b
    JZ 0x0059a34e                       ; 0059a29d
        ;   XREF to: 0059a34e (CONDITIONAL_JUMP)  ; LAB_0059a34e
    MOV EAX,[0x026677ac]                ; 0059a2a3 | DAT_026677ac
    MOV dword ptr [ESP + 0x14],EAX      ; 0059a2a8
        ;   Label: LAB_0059a2a8
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0059a2ac
    MOV EAX,dword ptr [ESP + 0x14]      ; 0059a2b0
    MOV EDI,dword ptr [EDX + 0x4]       ; 0059a2b4
    MOV dword ptr [0x026672a8],EBP      ; 0059a2b7 | DAT_026672a8
    CMP EAX,EDI                         ; 0059a2bd
    JL 0x0059a2fa                       ; 0059a2bf
        ;   XREF to: 0059a2fa (CONDITIONAL_JUMP)  ; LAB_0059a2fa
    MOV ECX,dword ptr [ESP + 0x18]      ; 0059a2c1
    MOV EBX,EAX                         ; 0059a2c5
    MOV dword ptr [EDX],0xffffffff      ; 0059a2c7
    MOV EAX,0x26672ac                   ; 0059a2cd
    XOR EDX,EDX                         ; 0059a2d2
    TEST EBP,EBP                        ; 0059a2d4
    JLE 0x0059a524                      ; 0059a2d6
        ;   XREF to: 0059a524 (CONDITIONAL_JUMP)  ; LAB_0059a524
    CMP EBX,dword ptr [EAX]             ; 0059a2dc | DAT_026672ac | DAT_026672fc
        ;   Label: LAB_0059a2dc
    JNZ 0x0059a518                      ; 0059a2de
        ;   XREF to: 0059a518 (CONDITIONAL_JUMP)  ; LAB_0059a518
    CMP EAX,ECX                         ; 0059a2e4
    JZ 0x0059a518                       ; 0059a2e6
        ;   XREF to: 0059a518 (CONDITIONAL_JUMP)  ; LAB_0059a518
    MOV dword ptr [ESP + 0x1c],EAX      ; 0059a2ec | DAT_026672ac | DAT_026672fc
        ;   Label: LAB_0059a2ec
    MOV dword ptr [0x026672a8],EBP      ; 0059a2f0 | DAT_026672a8
    TEST EAX,EAX                        ; 0059a2f6
    JZ 0x0059a34e                       ; 0059a2f8
        ;   XREF to: 0059a34e (CONDITIONAL_JUMP)  ; LAB_0059a34e
    MOV EDX,dword ptr [ESP + 0x18]      ; 0059a2fa
        ;   Label: LAB_0059a2fa
    MOV EAX,dword ptr [ESP + 0x14]      ; 0059a2fe
    CMP EAX,dword ptr [EDX + 0x4]       ; 0059a302
    JL 0x0059a53e                       ; 0059a305
        ;   XREF to: 0059a53e (CONDITIONAL_JUMP)  ; LAB_0059a53e
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0059a30b
    MOV EBP,dword ptr [0x026672a8]      ; 0059a30f | DAT_026672a8
    MOV EBX,EAX                         ; 0059a315
    MOV dword ptr [EDX],0xffffffff      ; 0059a317
    MOV EAX,0x26672ac                   ; 0059a31d
    XOR EDX,EDX                         ; 0059a322
    TEST EBP,EBP                        ; 0059a324
    JLE 0x0059a537                      ; 0059a326
        ;   XREF to: 0059a537 (CONDITIONAL_JUMP)  ; LAB_0059a537
    CMP EBX,dword ptr [EAX]             ; 0059a32c | DAT_026672ac | DAT_026672fc
        ;   Label: LAB_0059a32c
    JNZ 0x0059a52b                      ; 0059a32e
        ;   XREF to: 0059a52b (CONDITIONAL_JUMP)  ; LAB_0059a52b
    CMP EAX,ECX                         ; 0059a334
    JZ 0x0059a52b                       ; 0059a336
        ;   XREF to: 0059a52b (CONDITIONAL_JUMP)  ; LAB_0059a52b
    MOV dword ptr [ESP + 0x18],EAX      ; 0059a33c | DAT_026672fc | DAT_026672ac
        ;   Label: LAB_0059a33c
    MOV dword ptr [0x026672a8],EBP      ; 0059a340 | DAT_026672a8
    TEST EAX,EAX                        ; 0059a346
    JNZ 0x0059a53e                      ; 0059a348
        ;   XREF to: 0059a53e (CONDITIONAL_JUMP)  ; LAB_0059a53e
    MOV EBP,dword ptr [0x026672a8]      ; 0059a34e | DAT_026672a8
        ;   Label: LAB_0059a34e
    ADD ESP,0x20                        ; 0059a354
    POP EBP                             ; 0059a357
    POP EDI                             ; 0059a358
    POP ESI                             ; 0059a359
    POP EBX                             ; 0059a35a
    RET                                 ; 0059a35b
    MOV EAX,dword ptr [ESP + 0x34]      ; 0059a35c
        ;   Label: LAB_0059a35c
    ADD EAX,0x60                        ; 0059a360
    PUSH EAX                            ; 0059a363
    MOV EAX,dword ptr [ESP + 0x38]      ; 0059a364
    ADD EAX,0x30                        ; 0059a368
    PUSH EAX                            ; 0059a36b
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0059a36c
    PUSH EDX                            ; 0059a370
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_0051c760 ; 0059a371
        ;   XREF to: 0051c760 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_0051c760(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 0059a376
    TEST EAX,EAX                        ; 0059a379
    JNZ 0x0059a186                      ; 0059a37b
        ;   XREF to: 0059a186 (CONDITIONAL_JUMP)  ; LAB_0059a186
    MOV EBP,dword ptr [0x026672a8]      ; 0059a381 | DAT_026672a8
    ADD ESP,0x20                        ; 0059a387
    POP EBP                             ; 0059a38a
    POP EDI                             ; 0059a38b
    POP ESI                             ; 0059a38c
    POP EBX                             ; 0059a38d
    RET                                 ; 0059a38e
    MOV EDI,dword ptr [0x01c38b54]      ; 0059a38f | DAT_01c38b54
        ;   Label: LAB_0059a38f
    PUSH EDI                            ; 0059a395
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0059a396
    PUSH EAX                            ; 0059a39a
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0059a39b
    PUSH EDX                            ; 0059a39f
    CALL engine_special.cpp_drawPolygon_FUN_0055f8f0 ; 0059a3a0
        ;   XREF to: 0055f8f0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolygon_FUN_0055f8f0(SRenderVertex * vertices, int vertex_count, int render_flags)
    ADD ESP,0xc                         ; 0059a3a5
    MOV EBP,dword ptr [0x026672a8]      ; 0059a3a8 | DAT_026672a8
    ADD ESP,0x20                        ; 0059a3ae
    POP EBP                             ; 0059a3b1
    POP EDI                             ; 0059a3b2
    POP ESI                             ; 0059a3b3
    POP EBX                             ; 0059a3b4
    RET                                 ; 0059a3b5
    MOV EAX,dword ptr [ESP + 0x38]      ; 0059a3b6
        ;   Label: LAB_0059a3b6
    PUSH EAX                            ; 0059a3ba
    MOV EDX,dword ptr [ESP + 0x38]      ; 0059a3bb
    PUSH EDX                            ; 0059a3bf
    CALL engine_prim.c_prepareDepthBuffer_FUN_0051c5c0 ; 0059a3c0
        ;   XREF to: 0051c5c0 (UNCONDITIONAL_CALL)  ; void engine_prim.c_prepareDepthBuffer_FUN_0051c5c0(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 0059a3c5
    JMP 0x0059a1be                      ; 0059a3c8
        ;   XREF to: 0059a1be (UNCONDITIONAL_JUMP)  ; LAB_0059a1be
    MOV EDI,dword ptr [ESP + 0x38]      ; 0059a3cd
        ;   Label: LAB_0059a3cd
    PUSH EDI                            ; 0059a3d1
    MOV EBP,dword ptr [ESP + 0x38]      ; 0059a3d2
    PUSH EBP                            ; 0059a3d6
    CALL engine_prim.c_replaceWWithDepth_FUN_0051c720 ; 0059a3d7
        ;   XREF to: 0051c720 (UNCONDITIONAL_CALL)  ; void engine_prim.c_replaceWWithDepth_FUN_0051c720(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 0059a3dc
    JMP 0x0059a1be                      ; 0059a3df
        ;   XREF to: 0059a1be (UNCONDITIONAL_JUMP)  ; LAB_0059a1be
    JBE 0x0059a3b6                      ; 0059a3e4
        ;   XREF to: 0059a3b6 (CONDITIONAL_JUMP)  ; LAB_0059a3b6
        ;   Label: LAB_0059a3e4
    CMP EAX,0x6                         ; 0059a3e6
    JZ 0x0059a3cd                       ; 0059a3e9
        ;   XREF to: 0059a3cd (CONDITIONAL_JUMP)  ; LAB_0059a3cd
    JMP 0x0059a1be                      ; 0059a3eb
        ;   XREF to: 0059a1be (UNCONDITIONAL_JUMP)  ; LAB_0059a1be
    MOV ECX,ESI                         ; 0059a3f0
        ;   Label: LAB_0059a3f0
    MOV ECX,dword ptr [ECX + 0x14]      ; 0059a3f2
    MOV EBX,dword ptr [ESP + 0xc]       ; 0059a3f5
    CMP ECX,dword ptr [EBX + 0x14]      ; 0059a3f9
    JLE 0x0059a40e                      ; 0059a3fc
        ;   XREF to: 0059a40e (CONDITIONAL_JUMP)  ; LAB_0059a40e
    MOV ECX,dword ptr [ESP + 0x8]       ; 0059a3fe
    MOV ESI,EBX                         ; 0059a402
    MOV dword ptr [ESP + 0x10],ECX      ; 0059a404
    MOV ECX,EDX                         ; 0059a408
    MOV EDX,EAX                         ; 0059a40a
    MOV EAX,ECX                         ; 0059a40c
    IMUL EBX,EBP,0x50                   ; 0059a40e
        ;   Label: LAB_0059a40e
    ADD EBX,0x26672ac                   ; 0059a411
    MOV dword ptr [EBX],EDX             ; 0059a417 | DAT_026672ac
    MOV ECX,dword ptr [0x026677ac]      ; 0059a419 | DAT_026677ac
    MOV dword ptr [EBX + 0x4],EAX       ; 0059a41f
    CMP EDX,ECX                         ; 0059a422
    JGE 0x0059a42c                      ; 0059a424
        ;   XREF to: 0059a42c (CONDITIONAL_JUMP)  ; LAB_0059a42c
    MOV dword ptr [0x026677ac],EDX      ; 0059a426 | DAT_026677ac
    CMP EAX,dword ptr [0x026677b0]      ; 0059a42c | DAT_026677b0
        ;   Label: LAB_0059a42c
    JLE 0x0059a439                      ; 0059a432
        ;   XREF to: 0059a439 (CONDITIONAL_JUMP)  ; LAB_0059a439
    MOV [0x026677b0],EAX                ; 0059a434 | DAT_026677b0
    MOV ECX,dword ptr [ESP + 0x10]      ; 0059a439
        ;   Label: LAB_0059a439
    MOV EAX,dword ptr [ESI + 0x14]      ; 0059a43d
    MOV ECX,dword ptr [ECX + 0x14]      ; 0059a440
    SUB ECX,EAX                         ; 0059a443
    CMP ECX,0x10000                     ; 0059a445
    JNC 0x0059a4e2                      ; 0059a44b
        ;   XREF to: 0059a4e2 (CONDITIONAL_JUMP)  ; LAB_0059a4e2
    XOR ECX,ECX                         ; 0059a451
    MOV EAX,dword ptr [ESI + 0x14]      ; 0059a453
        ;   Label: LAB_0059a453
    AND EAX,0xffff                      ; 0059a456
    XOR AX,0xffff                       ; 0059a45b
    MOV dword ptr [ESP],EAX             ; 0059a45f
    MOV EAX,dword ptr [ESP + 0x10]      ; 0059a462
    MOV EDX,dword ptr [ESI + 0x10]      ; 0059a466
    MOV EAX,dword ptr [EAX + 0x10]      ; 0059a469
    SUB EAX,EDX                         ; 0059a46c
    MOV EDX,EAX                         ; 0059a46e
    MOV EAX,ECX                         ; 0059a470
    MOV dword ptr [0x026672a8],EBP      ; 0059a472 | DAT_026672a8
    IMUL EDX                            ; 0059a478
    SHRD EAX,EDX,0x10                   ; 0059a47a
    MOV EDX,EAX                         ; 0059a47e
    MOV dword ptr [EBX + 0xc],EAX       ; 0059a480
    MOV EAX,dword ptr [ESP]             ; 0059a483
    IMUL EDX                            ; 0059a486
    SHRD EAX,EDX,0x10                   ; 0059a488
    MOV dword ptr [ESP + 0x4],EAX       ; 0059a48c
    MOV EDX,dword ptr [ESP + 0x4]       ; 0059a490
    MOV EAX,dword ptr [ESI + 0x10]      ; 0059a494
    ADD EAX,EDX                         ; 0059a497
    MOV dword ptr [EBX + 0x8],EAX       ; 0059a499
    MOV EAX,dword ptr [ESP + 0x10]      ; 0059a49c
    MOV EDX,dword ptr [ESI + 0x8]       ; 0059a4a0
    MOV EAX,dword ptr [EAX + 0x8]       ; 0059a4a3
    SUB EAX,EDX                         ; 0059a4a6
    MOV EDX,EAX                         ; 0059a4a8
    SHL EDX,0x8                         ; 0059a4aa
    MOV EAX,ECX                         ; 0059a4ad
    IMUL EDX                            ; 0059a4af
    SHRD EAX,EDX,0x10                   ; 0059a4b1
    MOV EDX,EAX                         ; 0059a4b5
    MOV dword ptr [EBX + 0x2c],EAX      ; 0059a4b7
    MOV EAX,dword ptr [ESP]             ; 0059a4ba
    MOV ECX,dword ptr [ESI + 0x8]       ; 0059a4bd
    MOV ESI,dword ptr [0x01ba5714]      ; 0059a4c0 | DAT_01ba5714
    SHL ECX,0x8                         ; 0059a4c6
    IMUL EDX                            ; 0059a4c9
    SHRD EAX,EDX,0x10                   ; 0059a4cb
    SUB ECX,ESI                         ; 0059a4cf
    MOV EBP,dword ptr [0x026672a8]      ; 0059a4d1 | DAT_026672a8
    ADD ECX,EAX                         ; 0059a4d7
    INC EBP                             ; 0059a4d9
    MOV dword ptr [EBX + 0x28],ECX      ; 0059a4da
    JMP 0x0059a222                      ; 0059a4dd
        ;   XREF to: 0059a222 (UNCONDITIONAL_JUMP)  ; LAB_0059a222
    MOV EAX,0xffffffff                  ; 0059a4e2
        ;   Label: LAB_0059a4e2
    XOR EDX,EDX                         ; 0059a4e7
    DIV ECX                             ; 0059a4e9
    MOV ECX,EAX                         ; 0059a4eb
    JMP 0x0059a453                      ; 0059a4ed
        ;   XREF to: 0059a453 (UNCONDITIONAL_JUMP)  ; LAB_0059a453
    INC EAX                             ; 0059a4f2
        ;   Label: LAB_0059a4f2
    ADD ESI,0x50                        ; 0059a4f3
    CMP EAX,EBP                         ; 0059a4f6
    JL 0x0059a248                       ; 0059a4f8
        ;   XREF to: 0059a248 (CONDITIONAL_JUMP)  ; LAB_0059a248
    XOR ESI,ESI                         ; 0059a4fe
        ;   Label: LAB_0059a4fe
    JMP 0x0059a258                      ; 0059a500
        ;   XREF to: 0059a258 (UNCONDITIONAL_JUMP)  ; LAB_0059a258
    INC EDX                             ; 0059a505
        ;   Label: LAB_0059a505
    ADD EAX,0x50                        ; 0059a506
    CMP EDX,EBP                         ; 0059a509
    JL 0x0059a281                       ; 0059a50b
        ;   XREF to: 0059a281 (CONDITIONAL_JUMP)  ; LAB_0059a281
    XOR EAX,EAX                         ; 0059a511
        ;   Label: LAB_0059a511
    JMP 0x0059a291                      ; 0059a513
        ;   XREF to: 0059a291 (UNCONDITIONAL_JUMP)  ; LAB_0059a291
    INC EDX                             ; 0059a518
        ;   Label: LAB_0059a518
    ADD EAX,0x50                        ; 0059a519
    CMP EDX,EBP                         ; 0059a51c
    JL 0x0059a2dc                       ; 0059a51e
        ;   XREF to: 0059a2dc (CONDITIONAL_JUMP)  ; LAB_0059a2dc
    XOR EAX,EAX                         ; 0059a524
        ;   Label: LAB_0059a524
    JMP 0x0059a2ec                      ; 0059a526
        ;   XREF to: 0059a2ec (UNCONDITIONAL_JUMP)  ; LAB_0059a2ec
    INC EDX                             ; 0059a52b
        ;   Label: LAB_0059a52b
    ADD EAX,0x50                        ; 0059a52c | DAT_026672fc
    CMP EDX,EBP                         ; 0059a52f
    JL 0x0059a32c                       ; 0059a531
        ;   XREF to: 0059a32c (CONDITIONAL_JUMP)  ; LAB_0059a32c
    XOR EAX,EAX                         ; 0059a537
        ;   Label: LAB_0059a537
    JMP 0x0059a33c                      ; 0059a539
        ;   XREF to: 0059a33c (UNCONDITIONAL_JUMP)  ; LAB_0059a33c
    MOV EDI,dword ptr [ESP + 0x18]      ; 0059a53e
        ;   Label: LAB_0059a53e
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0059a542
    MOV EBX,dword ptr [ESP + 0x14]      ; 0059a546
    CALL engine_special.cpp_FUN_0055d6d7 ; 0059a54a
        ;   XREF to: 0055d6d7 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_0055d6d7()
    CMP dword ptr [0x01ba5c80],0x0      ; 0059a54f | DAT_01ba5c80
    JNZ 0x0059a34e                      ; 0059a556
        ;   XREF to: 0059a34e (CONDITIONAL_JUMP)  ; LAB_0059a34e
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0059a55c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0059a560
    MOV ECX,dword ptr [EDX + 0x8]       ; 0059a564
    MOV EAX,dword ptr [EAX + 0xc]       ; 0059a567
    MOV EBX,dword ptr [EDX + 0x28]      ; 0059a56a
    ADD ECX,EAX                         ; 0059a56d
    MOV EAX,dword ptr [EDX + 0x2c]      ; 0059a56f
    MOV dword ptr [EDX + 0x8],ECX       ; 0059a572
    ADD EBX,EAX                         ; 0059a575
    MOV EAX,dword ptr [ESP + 0x18]      ; 0059a577
    MOV dword ptr [EDX + 0x28],EBX      ; 0059a57b
    MOV EDX,dword ptr [ESP + 0x18]      ; 0059a57e
    MOV EAX,dword ptr [EAX + 0xc]       ; 0059a582
    MOV ESI,dword ptr [EDX + 0x8]       ; 0059a585
    MOV EDI,dword ptr [EDX + 0x28]      ; 0059a588
    ADD ESI,EAX                         ; 0059a58b
    MOV EAX,dword ptr [EDX + 0x2c]      ; 0059a58d
    MOV EBP,dword ptr [0x026672a8]      ; 0059a590 | DAT_026672a8
    ADD EDI,EAX                         ; 0059a596
    MOV EAX,dword ptr [ESP + 0x14]      ; 0059a598
    MOV dword ptr [EDX + 0x8],ESI       ; 0059a59c
    INC EAX                             ; 0059a59f
    MOV dword ptr [EDX + 0x28],EDI      ; 0059a5a0
    JMP 0x0059a2a8                      ; 0059a5a3
        ;   XREF to: 0059a2a8 (UNCONDITIONAL_JUMP)  ; LAB_0059a2a8

