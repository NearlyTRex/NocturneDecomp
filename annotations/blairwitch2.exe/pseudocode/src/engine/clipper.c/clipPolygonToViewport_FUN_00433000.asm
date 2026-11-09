; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_clipPolygonToViewport_FUN_00433000(int vertex_count,int *vertex_indices)
;
; Parameters:
; int              Stack[0x4]:4   vertex_count
; int *            Stack[0x8]:4   vertex_indices
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
; XREF[10]:
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406f40 at 00407022
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_00406e00 at 00406edf
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_004056b0 at 00405784
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_004057d0 at 004058a7
;   engine_3d.c_renderPolygonBlendedLitOp63_FUN_00406ca0 at 00406d65
;   engine_3d.c_renderPolygonFogColorOp6_FUN_00403bc0 at 00403c91
;   engine_3d.c_renderPolygonWithRenderFlagsUV_FUN_00407740 at 0040787d
;   engine_3d.c_renderPolygonWithRenderFlags_FUN_00407640 at 00407726
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590 at 00469624
;   engine_drender.cpp_FUN_0046c28e at 0046c44e
;
; Referenced Globals:
;   void* switchdataD_00432fb8 = 0043328c
;   void* PTR_caseD_3_00432fc4 = 004332b6
;   void* PTR_caseD_1_00432fcc = 0043359f
;   void* PTR_caseD_3_00432fd4 = 00433365
;   void* switchdataD_00432fd8 = 004333e5
;   void* PTR_caseD_3_00432fe4 = 0043340f
;   void* PTR_caseD_1_00432fec = 0043369d
;   void* PTR_caseD_3_00432ff4 = 004334bf
;   undefined4 DAT_006141e0
;   undefined4 DAT_00622014
;   undefined4 DAT_00622018
;   undefined4 DAT_00622024
;   undefined4 DAT_0070ca7c
;   undefined4 DAT_007bee30
;   undefined4 DAT_007bee34
;   ... and 39 more
;
; Called Functions:
;   engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_004321a0
;   engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00431f40
;   engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00431e10
;   engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00432070
;   engine_prim.c_calculateTriangleWindingOrder_FUN_0051c760
;   engine_prim.c_FUN_0051da80
;   engine_prim.c_FUN_0051e130
;   engine_special.cpp_drawPolygon2_FUN_0055f920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433000
        ;   Label: engine_clipper.c_clipPolygonToViewport_FUN_00433000
    PUSH ESI                            ; 00433001
    PUSH EDI                            ; 00433002
    PUSH EBP                            ; 00433003
    SUB ESP,0x20                        ; 00433004
    MOV EBX,dword ptr [ESP + 0x34]      ; 00433007
    MOV EDX,dword ptr [ESP + 0x38]      ; 0043300b
    CMP dword ptr [0x006141e0],0x0      ; 0043300f | DAT_006141e0
    JZ 0x004330ec                       ; 00433016
        ;   XREF to: 004330ec (CONDITIONAL_JUMP)  ; LAB_004330ec
    MOV ECX,0xffffffff                  ; 0043301c
    MOV dword ptr [ESP + 0x4],EDX       ; 00433021
    MOV EBP,EBX                         ; 00433025
    XOR ESI,ESI                         ; 00433027
    XOR EAX,EAX                         ; 00433029
    TEST EBX,EBX                        ; 0043302b
    JLE 0x0043304b                      ; 0043302d
        ;   XREF to: 0043304b (CONDITIONAL_JUMP)  ; LAB_0043304b
    IMUL EBX,dword ptr [EDX],0x30       ; 0043302f
        ;   Label: LAB_0043302f
    MOV EBX,dword ptr [EBX + 0x622024]  ; 00433032 | DAT_00622024
    TEST EBX,0x80000000                 ; 00433038
    JZ 0x00433041                       ; 0043303e
        ;   XREF to: 00433041 (CONDITIONAL_JUMP)  ; LAB_00433041
    INC ESI                             ; 00433040
    ADD EDX,0x4                         ; 00433041
        ;   Label: LAB_00433041
    INC EAX                             ; 00433044
    AND ECX,EBX                         ; 00433045
    CMP EAX,EBP                         ; 00433047
    JL 0x0043302f                       ; 00433049
        ;   XREF to: 0043302f (CONDITIONAL_JUMP)  ; LAB_0043302f
    CMP ESI,EBP                         ; 0043304b
        ;   Label: LAB_0043304b
    JNZ 0x00433058                      ; 0043304d
        ;   XREF to: 00433058 (CONDITIONAL_JUMP)  ; LAB_00433058
    TEST CL,0xff                        ; 0043304f
    JNZ 0x004330f8                      ; 00433052
        ;   XREF to: 004330f8 (CONDITIONAL_JUMP)  ; LAB_004330f8
    TEST ESI,ESI                        ; 00433058
        ;   Label: LAB_00433058
    JNZ 0x004331c5                      ; 0043305a
        ;   XREF to: 004331c5 (CONDITIONAL_JUMP)  ; LAB_004331c5
    CMP dword ptr [0x01c37788],0x0      ; 00433060 | DAT_01c37788
    JZ 0x00433154                       ; 00433067
        ;   XREF to: 00433154 (CONDITIONAL_JUMP)  ; LAB_00433154
    XOR EAX,EAX                         ; 0043306d
    TEST EBP,EBP                        ; 0043306f
    JLE 0x00433090                      ; 00433071
        ;   XREF to: 00433090 (CONDITIONAL_JUMP)  ; LAB_00433090
    MOV EBX,dword ptr [ESP + 0x4]       ; 00433073
    IMUL ECX,dword ptr [EBX],0x30       ; 00433077
        ;   Label: LAB_00433077
    INC EAX                             ; 0043307a
    ADD ECX,0x622014                    ; 0043307b | DAT_00622014
    ADD EBX,0x4                         ; 00433081
    MOV dword ptr [EAX*0x4 + 0x7bf430],ECX ; 00433084 | DAT_007bf434 | DAT_007bf438
    CMP EAX,EBP                         ; 0043308b
    JL 0x00433077                       ; 0043308d
        ;   XREF to: 00433077 (CONDITIONAL_JUMP)  ; LAB_00433077
    NOP                                 ; 0043308f
    CMP dword ptr [0x0070ca7c],0x0      ; 00433090 | DAT_0070ca7c
        ;   Label: LAB_00433090
    JZ 0x00433126                       ; 00433097
        ;   XREF to: 00433126 (CONDITIONAL_JUMP)  ; LAB_00433126
    CMP EBP,0x3                         ; 0043309d
    JLE 0x00433105                      ; 004330a0
        ;   XREF to: 00433105 (CONDITIONAL_JUMP)  ; LAB_00433105
    LEA EAX,[EBP + -0x2]                ; 004330a2
    XOR EBX,EBX                         ; 004330a5
    MOV dword ptr [ESP],EAX             ; 004330a7
    LEA EDI,[EAX*0x4 + 0x0]             ; 004330aa
    XOR ESI,ESI                         ; 004330b1
    TEST EDI,EDI                        ; 004330b3
    JLE 0x004330df                      ; 004330b5
        ;   XREF to: 004330df (CONDITIONAL_JUMP)  ; LAB_004330df
    MOV EAX,dword ptr [EBX + 0x7bf43c]  ; 004330b7 | DAT_007bf43c | DAT_007bf440
        ;   Label: LAB_004330b7
    PUSH EAX                            ; 004330bd
    MOV EDX,dword ptr [EBX + 0x7bf438]  ; 004330be | DAT_007bf438 | DAT_007bf43c
    PUSH EDX                            ; 004330c4
    MOV ECX,dword ptr [0x007bf434]      ; 004330c5 | DAT_007bf434
    PUSH ECX                            ; 004330cb
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_0051c760 ; 004330cc
        ;   XREF to: 0051c760 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_calculateTriangleWindingOrder_FUN_0051c760()
    ADD ESP,0xc                         ; 004330d1
    TEST EAX,EAX                        ; 004330d4
    JZ 0x00433102                       ; 004330d6
        ;   XREF to: 00433102 (CONDITIONAL_JUMP)  ; LAB_00433102
    ADD EBX,0x4                         ; 004330d8
        ;   Label: LAB_004330d8
    CMP EBX,EDI                         ; 004330db
    JL 0x004330b7                       ; 004330dd
        ;   XREF to: 004330b7 (CONDITIONAL_JUMP)  ; LAB_004330b7
    CMP ESI,dword ptr [ESP]             ; 004330df
        ;   Label: LAB_004330df
    JNZ 0x00433126                      ; 004330e2
        ;   XREF to: 00433126 (CONDITIONAL_JUMP)  ; LAB_00433126
    ADD ESP,0x20                        ; 004330e4
        ;   Label: LAB_004330e4
    POP EBP                             ; 004330e7
    POP EDI                             ; 004330e8
    POP ESI                             ; 004330e9
    POP EBX                             ; 004330ea
    RET                                 ; 004330eb
    PUSH EBX                            ; 004330ec
        ;   Label: LAB_004330ec
    PUSH EDX                            ; 004330ed
    CALL engine_prim.c_FUN_0051e130     ; 004330ee
        ;   XREF to: 0051e130 (UNCONDITIONAL_CALL)  ; void engine_prim.c_FUN_0051e130(int * vertex_indices, int vertex_count)
    ADD ESP,0x8                         ; 004330f3
    JMP 0x004330e4                      ; 004330f6
        ;   XREF to: 004330e4 (UNCONDITIONAL_JUMP)  ; LAB_004330e4
    XOR ESI,EBP                         ; 004330f8
        ;   Label: LAB_004330f8
    MOV dword ptr [0x007bee30],ESI      ; 004330fa | DAT_007bee30
    JMP 0x004330e4                      ; 00433100
        ;   XREF to: 004330e4 (UNCONDITIONAL_JUMP)  ; LAB_004330e4
    INC ESI                             ; 00433102
        ;   Label: LAB_00433102
    JMP 0x004330d8                      ; 00433103
        ;   XREF to: 004330d8 (UNCONDITIONAL_JUMP)  ; LAB_004330d8
    MOV EDX,dword ptr [0x007bf43c]      ; 00433105 | DAT_007bf43c
        ;   Label: LAB_00433105
    PUSH EDX                            ; 0043310b
    MOV ECX,dword ptr [0x007bf438]      ; 0043310c | DAT_007bf438
    PUSH ECX                            ; 00433112
    MOV EBX,dword ptr [0x007bf434]      ; 00433113 | DAT_007bf434
    PUSH EBX                            ; 00433119
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_0051c760 ; 0043311a
        ;   XREF to: 0051c760 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_calculateTriangleWindingOrder_FUN_0051c760()
    ADD ESP,0xc                         ; 0043311f
    TEST EAX,EAX                        ; 00433122
    JZ 0x004330e4                       ; 00433124
        ;   XREF to: 004330e4 (CONDITIONAL_JUMP)  ; LAB_004330e4
    MOV ESI,dword ptr [0x01c38b54]      ; 00433126 | DAT_01c38b54
        ;   Label: LAB_00433126
    PUSH ESI                            ; 0043312c
    LEA EAX,[EBP + -0x2]                ; 0043312d
    MOV EBX,dword ptr [0x01e61b58]      ; 00433130 | DAT_01e61b58
    PUSH EBP                            ; 00433136
    ADD EBX,EAX                         ; 00433137
    PUSH 0x7bf434                       ; 00433139 | DAT_007bf434
    MOV dword ptr [0x01e61b58],EBX      ; 0043313e | DAT_01e61b58
    CALL engine_special.cpp_drawPolygon2_FUN_0055f920 ; 00433144
        ;   XREF to: 0055f920 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_drawPolygon2_FUN_0055f920()
    ADD ESP,0xc                         ; 00433149
    ADD ESP,0x20                        ; 0043314c
    POP EBP                             ; 0043314f
    POP EDI                             ; 00433150
    POP ESI                             ; 00433151
    POP EBX                             ; 00433152
    RET                                 ; 00433153
    MOV dword ptr [ESP + 0x8],ESI       ; 00433154
        ;   Label: LAB_00433154
    MOV dword ptr [0x007bee30],EBP      ; 00433158 | DAT_007bee30
    TEST EBP,EBP                        ; 0043315e
    JLE 0x004331a0                      ; 00433160
        ;   XREF to: 004331a0 (CONDITIONAL_JUMP)  ; LAB_004331a0
    MOV EBX,dword ptr [ESP + 0x4]       ; 00433162
    MOV EDX,0x7bee34                    ; 00433166 | DAT_007bee34
    IMUL ESI,dword ptr [EBX],0x30       ; 0043316b
        ;   Label: LAB_0043316b
    MOV ECX,0x30                        ; 0043316e
    ADD ESI,0x622014                    ; 00433173 | DAT_00622014
    MOV EDI,EDX                         ; 00433179
    PUSH EDI                            ; 0043317b | DAT_007bee34 | DAT_007bee64
    MOV EAX,ECX                         ; 0043317c
    SHR ECX,0x2                         ; 0043317e
    MOVSD.REP ES:EDI,ESI                ; 00433181 | DAT_00622014 | DAT_007bee34 | DAT_00622018
    MOV CL,AL                           ; 00433183
    AND CL,0x3                          ; 00433185
    MOVSB.REP ES:EDI,ESI                ; 00433188 | DAT_00622018 | DAT_007bee38
    POP EDI                             ; 0043318a
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043318b
    ADD EBX,0x4                         ; 0043318f
    INC EAX                             ; 00433192
    ADD EDX,0x30                        ; 00433193
    MOV dword ptr [ESP + 0x8],EAX       ; 00433196
    CMP EBP,EAX                         ; 0043319a
    JG 0x0043316b                       ; 0043319c
        ;   XREF to: 0043316b (CONDITIONAL_JUMP)  ; LAB_0043316b
    MOV EAX,EAX                         ; 0043319e
    MOV EBX,dword ptr [0x007bee30]      ; 004331a0 | DAT_007bee30
        ;   Label: LAB_004331a0
    CMP EBX,0x2                         ; 004331a6
    JLE 0x004330e4                      ; 004331a9
        ;   XREF to: 004330e4 (CONDITIONAL_JUMP)  ; LAB_004330e4
    PUSH EBX                            ; 004331af
    PUSH 0x7bee34                       ; 004331b0 | DAT_007bee34
    CALL engine_prim.c_FUN_0051da80     ; 004331b5
        ;   XREF to: 0051da80 (UNCONDITIONAL_CALL)  ; void engine_prim.c_FUN_0051da80(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 004331ba
    ADD ESP,0x20                        ; 004331bd
    POP EBP                             ; 004331c0
    POP EDI                             ; 004331c1
    POP ESI                             ; 004331c2
    POP EBX                             ; 004331c3
    RET                                 ; 004331c4
    XOR EBX,EBX                         ; 004331c5
        ;   Label: LAB_004331c5
    MOV dword ptr [0x007bfcfc],EBP      ; 004331c7 | DAT_007bfcfc
    MOV dword ptr [0x007bfd00],EBX      ; 004331cd | DAT_007bfd00
    MOV dword ptr [0x007bfd04],EBX      ; 004331d3 | DAT_007bfd04
    MOV dword ptr [0x007bfd08],EBX      ; 004331d9 | DAT_007bfd08
    MOV dword ptr [0x007bee30],EBX      ; 004331df | DAT_007bee30
    MOV dword ptr [ESP + 0xc],EBX       ; 004331e5
    TEST EBP,EBP                        ; 004331e9
    JLE 0x00433230                      ; 004331eb
        ;   XREF to: 00433230 (CONDITIONAL_JUMP)  ; LAB_00433230
    MOV EBX,dword ptr [ESP + 0x4]       ; 004331ed
    MOV EDX,0x7c030c                    ; 004331f1 | DAT_007c030c
    IMUL ESI,dword ptr [EBX],0x30       ; 004331f6
        ;   Label: LAB_004331f6
    MOV ECX,0x30                        ; 004331f9
    MOV EDI,EDX                         ; 004331fe
    ADD ESI,0x622014                    ; 00433200 | DAT_00622014
    PUSH EDI                            ; 00433206 | DAT_007c030c | DAT_007c033c
    MOV EAX,ECX                         ; 00433207
    SHR ECX,0x2                         ; 00433209
    MOVSD.REP ES:EDI,ESI                ; 0043320c | DAT_00622014 | DAT_007c030c | DAT_00622018
    MOV CL,AL                           ; 0043320e
    AND CL,0x3                          ; 00433210
    MOVSB.REP ES:EDI,ESI                ; 00433213 | DAT_00622018 | DAT_007c0310
    POP EDI                             ; 00433215
    MOV ECX,dword ptr [ESP + 0xc]       ; 00433216
    ADD EBX,0x4                         ; 0043321a
    INC ECX                             ; 0043321d
    ADD EDX,0x30                        ; 0043321e
    MOV dword ptr [ESP + 0xc],ECX       ; 00433221
    CMP EBP,ECX                         ; 00433225
    JG 0x004331f6                       ; 00433227
        ;   XREF to: 004331f6 (CONDITIONAL_JUMP)  ; LAB_004331f6
    LEA EAX,[EAX]                       ; 00433229
    NOP                                 ; 0043322f
    XOR EDI,EDI                         ; 00433230
        ;   Label: LAB_00433230
    MOV EBP,dword ptr [0x007bfcfc]      ; 00433232 | DAT_007bfcfc
    MOV dword ptr [ESP + 0x10],EDI      ; 00433238
    TEST EBP,EBP                        ; 0043323c
    JLE 0x004332d0                      ; 0043323e
        ;   XREF to: 004332d0 (CONDITIONAL_JUMP)  ; LAB_004332d0
    MOV EBX,0x7c030c                    ; 00433244 | DAT_007c030c
    MOV EAX,dword ptr [ESP + 0x10]      ; 00433249
        ;   Label: LAB_00433249
    MOV EDI,dword ptr [0x007bfcfc]      ; 0043324d | DAT_007bfcfc
    INC EAX                             ; 00433253
    CMP EAX,EDI                         ; 00433254
    JNZ 0x0043325a                      ; 00433256
        ;   XREF to: 0043325a (CONDITIONAL_JUMP)  ; LAB_0043325a
    XOR EAX,EDI                         ; 00433258
    IMUL EAX,EAX,0x30                   ; 0043325a
        ;   Label: LAB_0043325a
    MOV EBP,0x7c030c                    ; 0043325d | DAT_007c030c
    MOV EDX,EBX                         ; 00433262
    MOV ECX,dword ptr [EBX]             ; 00433264 | DAT_007c030c | DAT_007c033c
    MOV ESI,dword ptr [EBX + 0x8]       ; 00433266 | DAT_007c0314 | DAT_007c0344
    ADD EBP,EAX                         ; 00433269
    XOR EAX,EAX                         ; 0043326b
    CMP ECX,ESI                         ; 0043326d
    JL 0x00433276                       ; 0043326f
        ;   XREF to: 00433276 (CONDITIONAL_JUMP)  ; LAB_00433276
    MOV EAX,0x1                         ; 00433271
    MOV EDI,dword ptr [EBP + 0x8]       ; 00433276 | DAT_007c0314
        ;   Label: LAB_00433276
    CMP EDI,dword ptr [EBP]             ; 00433279 | DAT_007c030c
    JG 0x00433280                       ; 0043327c
        ;   XREF to: 00433280 (CONDITIONAL_JUMP)  ; LAB_00433280
    OR AL,0x2                           ; 0043327e
    CMP EAX,0x3                         ; 00433280
        ;   Label: LAB_00433280
    JA 0x004332b6                       ; 00433283
        ;   XREF to: 004332b6 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x432fb8]  ; 00433285 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007bfd00],0x30 ; 0043328c | DAT_007bfd00
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 00433293
    MOV ESI,EDX                         ; 00433298
    ADD EDI,0x7bfd0c                    ; 0043329a | DAT_007bfd0c
    PUSH EDI                            ; 004332a0 | DAT_007bfd0c
    MOV EAX,ECX                         ; 004332a1
    SHR ECX,0x2                         ; 004332a3
    MOVSD.REP ES:EDI,ESI                ; 004332a6 | DAT_007c033c | DAT_007bfd0c | DAT_007c0340
    MOV CL,AL                           ; 004332a8
    AND CL,0x3                          ; 004332aa
    MOVSB.REP ES:EDI,ESI                ; 004332ad | DAT_007c0340 | DAT_007bfd10
    POP EDI                             ; 004332af
    INC dword ptr [0x007bfd00]          ; 004332b0 | DAT_007bfd00
    MOV EAX,dword ptr [ESP + 0x10]      ; 004332b6
        ;   Label: caseD_3
    MOV EDX,dword ptr [0x007bfcfc]      ; 004332ba | DAT_007bfcfc
    INC EAX                             ; 004332c0
    ADD EBX,0x30                        ; 004332c1
    MOV dword ptr [ESP + 0x10],EAX      ; 004332c4
    CMP EAX,EDX                         ; 004332c8
    JL 0x00433249                       ; 004332ca
        ;   XREF to: 00433249 (CONDITIONAL_JUMP)  ; LAB_00433249
    MOV ECX,dword ptr [0x007bfd00]      ; 004332d0 | DAT_007bfd00
        ;   Label: LAB_004332d0
    CMP ECX,0x3                         ; 004332d6
    JL 0x004331a0                       ; 004332d9
        ;   XREF to: 004331a0 (CONDITIONAL_JUMP)  ; LAB_004331a0
    XOR EBX,EBX                         ; 004332df
    MOV dword ptr [ESP + 0x18],EBX      ; 004332e1
    TEST ECX,ECX                        ; 004332e5
    JLE 0x0043337f                      ; 004332e7
        ;   XREF to: 0043337f (CONDITIONAL_JUMP)  ; LAB_0043337f
    MOV EBX,0x7bfd0c                    ; 004332ed | DAT_007bfd0c
    MOV EAX,dword ptr [ESP + 0x18]      ; 004332f2
        ;   Label: LAB_004332f2
    MOV EBP,dword ptr [0x007bfd00]      ; 004332f6 | DAT_007bfd00
    INC EAX                             ; 004332fc
    CMP EAX,EBP                         ; 004332fd
    JNZ 0x00433303                      ; 004332ff
        ;   XREF to: 00433303 (CONDITIONAL_JUMP)  ; LAB_00433303
    XOR EAX,EBP                         ; 00433301
    IMUL EAX,EAX,0x30                   ; 00433303
        ;   Label: LAB_00433303
    MOV EBP,0x7bfd0c                    ; 00433306 | DAT_007bfd0c
    MOV EDX,EBX                         ; 0043330b
    MOV ECX,dword ptr [EBX + 0x8]       ; 0043330d | DAT_007bfd14 | DAT_007bfd44
    MOV ESI,dword ptr [EBX]             ; 00433310 | DAT_007bfd0c | DAT_007bfd3c
    NEG ECX                             ; 00433312
    ADD EBP,EAX                         ; 00433314
    XOR EAX,EAX                         ; 00433316
    CMP ECX,ESI                         ; 00433318
    JL 0x00433321                       ; 0043331a
        ;   XREF to: 00433321 (CONDITIONAL_JUMP)  ; LAB_00433321
    MOV EAX,0x1                         ; 0043331c
    MOV ECX,dword ptr [EBP + 0x8]       ; 00433321 | DAT_007bfd14
        ;   Label: LAB_00433321
    MOV EDI,dword ptr [EBP]             ; 00433324 | DAT_007bfd0c
    NEG ECX                             ; 00433327
    CMP ECX,EDI                         ; 00433329
    JL 0x0043332f                       ; 0043332b
        ;   XREF to: 0043332f (CONDITIONAL_JUMP)  ; LAB_0043332f
    OR AL,0x2                           ; 0043332d
    CMP EAX,0x3                         ; 0043332f
        ;   Label: LAB_0043332f
    JA 0x00433365                       ; 00433332
        ;   XREF to: 00433365 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x432fc8]  ; 00433334 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007bfd04],0x30 ; 0043333b | DAT_007bfd04
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 00433342
    MOV ESI,EDX                         ; 00433347
    ADD EDI,0x7c090c                    ; 00433349 | DAT_007c090c
    PUSH EDI                            ; 0043334f | DAT_007c090c
    MOV EAX,ECX                         ; 00433350
    SHR ECX,0x2                         ; 00433352
    MOVSD.REP ES:EDI,ESI                ; 00433355 | DAT_007bfd0c | DAT_007c090c | DAT_007bfd10
    MOV CL,AL                           ; 00433357
    AND CL,0x3                          ; 00433359
    MOVSB.REP ES:EDI,ESI                ; 0043335c | DAT_007bfd10 | DAT_007c0910
    POP EDI                             ; 0043335e
    INC dword ptr [0x007bfd04]          ; 0043335f | DAT_007bfd04
    MOV EDX,dword ptr [ESP + 0x18]      ; 00433365
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x007bfd00]      ; 00433369 | DAT_007bfd00
    INC EDX                             ; 0043336f
    ADD EBX,0x30                        ; 00433370
    MOV dword ptr [ESP + 0x18],EDX      ; 00433373
    CMP EDX,ECX                         ; 00433377
    JL 0x004332f2                       ; 00433379
        ;   XREF to: 004332f2 (CONDITIONAL_JUMP)  ; LAB_004332f2
    MOV EBX,dword ptr [0x007bfd04]      ; 0043337f | DAT_007bfd04
        ;   Label: LAB_0043337f
    CMP EBX,0x3                         ; 00433385
    JL 0x004331a0                       ; 00433388
        ;   XREF to: 004331a0 (CONDITIONAL_JUMP)  ; LAB_004331a0
    XOR ESI,ESI                         ; 0043338e
    MOV dword ptr [ESP + 0x1c],ESI      ; 00433390
    TEST EBX,EBX                        ; 00433394
    JLE 0x00433429                      ; 00433396
        ;   XREF to: 00433429 (CONDITIONAL_JUMP)  ; LAB_00433429
    MOV EBX,0x7c090c                    ; 0043339c | DAT_007c090c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004333a1
        ;   Label: LAB_004333a1
    MOV EBP,dword ptr [0x007bfd04]      ; 004333a5 | DAT_007bfd04
    INC EAX                             ; 004333ab
    CMP EAX,EBP                         ; 004333ac
    JNZ 0x004333b2                      ; 004333ae
        ;   XREF to: 004333b2 (CONDITIONAL_JUMP)  ; LAB_004333b2
    XOR EAX,EBP                         ; 004333b0
    IMUL EAX,EAX,0x30                   ; 004333b2
        ;   Label: LAB_004333b2
    MOV EBP,0x7c090c                    ; 004333b5 | DAT_007c090c
    MOV EDX,EBX                         ; 004333ba
    MOV ECX,dword ptr [EBX + 0x4]       ; 004333bc | DAT_007c0910 | DAT_007c0940
    MOV ESI,dword ptr [EBX + 0x8]       ; 004333bf | DAT_007c0914 | DAT_007c0944
    ADD EBP,EAX                         ; 004333c2
    XOR EAX,EAX                         ; 004333c4
    CMP ECX,ESI                         ; 004333c6
    JL 0x004333cf                       ; 004333c8
        ;   XREF to: 004333cf (CONDITIONAL_JUMP)  ; LAB_004333cf
    MOV EAX,0x1                         ; 004333ca
    MOV EDI,dword ptr [EBP + 0x8]       ; 004333cf | DAT_007c0914
        ;   Label: LAB_004333cf
    CMP EDI,dword ptr [EBP + 0x4]       ; 004333d2 | DAT_007c0910
    JG 0x004333d9                       ; 004333d5
        ;   XREF to: 004333d9 (CONDITIONAL_JUMP)  ; LAB_004333d9
    OR AL,0x2                           ; 004333d7
    CMP EAX,0x3                         ; 004333d9
        ;   Label: LAB_004333d9
    JA 0x0043340f                       ; 004333dc
        ;   XREF to: 0043340f (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x432fd8]  ; 004333de | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007bfd08],0x30 ; 004333e5 | DAT_007bfd08
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 004333ec
    MOV ESI,EDX                         ; 004333f1
    ADD EDI,0x7c0f0c                    ; 004333f3 | DAT_007c0f0c
    PUSH EDI                            ; 004333f9 | DAT_007c0f0c
    MOV EAX,ECX                         ; 004333fa
    SHR ECX,0x2                         ; 004333fc
    MOVSD.REP ES:EDI,ESI                ; 004333ff | DAT_007c093c | DAT_007c0f0c | DAT_007c0940
    MOV CL,AL                           ; 00433401
    AND CL,0x3                          ; 00433403
    MOVSB.REP ES:EDI,ESI                ; 00433406 | DAT_007c0940 | DAT_007c0f10
    POP EDI                             ; 00433408
    INC dword ptr [0x007bfd08]          ; 00433409 | DAT_007bfd08
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0043340f
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x007bfd04]      ; 00433413 | DAT_007bfd04
    INC EDX                             ; 00433419
    ADD EBX,0x30                        ; 0043341a
    MOV dword ptr [ESP + 0x1c],EDX      ; 0043341d
    CMP EDX,ECX                         ; 00433421
    JL 0x004333a1                       ; 00433423
        ;   XREF to: 004333a1 (CONDITIONAL_JUMP)  ; LAB_004333a1
    MOV EBX,dword ptr [0x007bfd08]      ; 00433429 | DAT_007bfd08
        ;   Label: LAB_00433429
    CMP EBX,0x3                         ; 0043342f
    JL 0x004331a0                       ; 00433432
        ;   XREF to: 004331a0 (CONDITIONAL_JUMP)  ; LAB_004331a0
    XOR ESI,ESI                         ; 00433438
    MOV dword ptr [ESP + 0x14],ESI      ; 0043343a
    TEST EBX,EBX                        ; 0043343e
    JLE 0x004334d9                      ; 00433440
        ;   XREF to: 004334d9 (CONDITIONAL_JUMP)  ; LAB_004334d9
    MOV EBX,0x7c0f0c                    ; 00433446 | DAT_007c0f0c
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043344b
        ;   Label: LAB_0043344b
    MOV EDI,dword ptr [0x007bfd08]      ; 0043344f | DAT_007bfd08
    INC EAX                             ; 00433455
    CMP EAX,EDI                         ; 00433456
    JNZ 0x0043345c                      ; 00433458
        ;   XREF to: 0043345c (CONDITIONAL_JUMP)  ; LAB_0043345c
    XOR EAX,EDI                         ; 0043345a
    IMUL EAX,EAX,0x30                   ; 0043345c
        ;   Label: LAB_0043345c
    MOV EBP,0x7c0f0c                    ; 0043345f | DAT_007c0f0c
    MOV EDX,EBX                         ; 00433464
    MOV ECX,dword ptr [EBX + 0x8]       ; 00433466 | DAT_007c0f14 | DAT_007c0f44
    MOV ESI,dword ptr [EBX + 0x4]       ; 00433469 | DAT_007c0f10 | DAT_007c0f40
    NEG ECX                             ; 0043346c
    ADD EBP,EAX                         ; 0043346e
    XOR EAX,EAX                         ; 00433470
    CMP ECX,ESI                         ; 00433472
    JL 0x0043347b                       ; 00433474
        ;   XREF to: 0043347b (CONDITIONAL_JUMP)  ; LAB_0043347b
    MOV EAX,0x1                         ; 00433476
    MOV ECX,dword ptr [EBP + 0x8]       ; 0043347b | DAT_007c0f14
        ;   Label: LAB_0043347b
    MOV EDI,dword ptr [EBP + 0x4]       ; 0043347e | DAT_007c0f10
    NEG ECX                             ; 00433481
    CMP ECX,EDI                         ; 00433483
    JL 0x00433489                       ; 00433485
        ;   XREF to: 00433489 (CONDITIONAL_JUMP)  ; LAB_00433489
    OR AL,0x2                           ; 00433487
    CMP EAX,0x3                         ; 00433489
        ;   Label: LAB_00433489
    JA 0x004334bf                       ; 0043348c
        ;   XREF to: 004334bf (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x432fe8]  ; 0043348e | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007bee30],0x30 ; 00433495 | DAT_007bee30
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0043349c
    MOV ESI,EDX                         ; 004334a1
    ADD EDI,0x7bee34                    ; 004334a3 | DAT_007bee34
    PUSH EDI                            ; 004334a9 | DAT_007bee34
    MOV EAX,ECX                         ; 004334aa
    SHR ECX,0x2                         ; 004334ac
    MOVSD.REP ES:EDI,ESI                ; 004334af | DAT_007c0f0c | DAT_007bee34 | DAT_007c0f10
    MOV CL,AL                           ; 004334b1
    AND CL,0x3                          ; 004334b3
    MOVSB.REP ES:EDI,ESI                ; 004334b6 | DAT_007c0f10 | DAT_007bee38
    POP EDI                             ; 004334b8
    INC dword ptr [0x007bee30]          ; 004334b9 | DAT_007bee30
    MOV EDX,dword ptr [ESP + 0x14]      ; 004334bf
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x007bfd08]      ; 004334c3 | DAT_007bfd08
    INC EDX                             ; 004334c9
    ADD EBX,0x30                        ; 004334ca
    MOV dword ptr [ESP + 0x14],EDX      ; 004334cd
    CMP EDX,ECX                         ; 004334d1
    JL 0x0043344b                       ; 004334d3
        ;   XREF to: 0043344b (CONDITIONAL_JUMP)  ; LAB_0043344b
    MOV EBX,dword ptr [0x007bee30]      ; 004334d9 | DAT_007bee30
        ;   Label: LAB_004334d9
    CMP EBX,0x3                         ; 004334df
    JL 0x004331a0                       ; 004334e2
        ;   XREF to: 004331a0 (CONDITIONAL_JUMP)  ; LAB_004331a0
    MOV EAX,0x7bee34                    ; 004334e8 | DAT_007bee34
    XOR EBP,EBP                         ; 004334ed
    TEST EBX,EBX                        ; 004334ef
    JLE 0x004331a0                      ; 004334f1
        ;   XREF to: 004331a0 (CONDITIONAL_JUMP)  ; LAB_004331a0
    MOV ECX,dword ptr [EAX + 0x8]       ; 004334f7 | DAT_007bee3c | DAT_007bee6c
        ;   Label: LAB_004334f7
    TEST ECX,ECX                        ; 004334fa
    JZ 0x0043371c                       ; 004334fc
        ;   XREF to: 0043371c (CONDITIONAL_JUMP)  ; LAB_0043371c
    CMP ECX,dword ptr [EAX]             ; 00433502 | DAT_007bee34 | DAT_007bee64
    JGE 0x0043372d                      ; 00433504
        ;   XREF to: 0043372d (CONDITIONAL_JUMP)  ; LAB_0043372d
    MOV dword ptr [EAX],ECX             ; 0043350a | DAT_007bee34 | DAT_007bee64
    MOV EDX,dword ptr [0x007bee30]      ; 0043350c | DAT_007bee30
        ;   Label: LAB_0043350c
    INC EBP                             ; 00433512
    ADD EAX,0x30                        ; 00433513
    CMP EBP,EDX                         ; 00433516
    JGE 0x004331a0                      ; 00433518
        ;   XREF to: 004331a0 (CONDITIONAL_JUMP)  ; LAB_004331a0
    JMP 0x004334f7                      ; 0043351e
        ;   XREF to: 004334f7 (UNCONDITIONAL_JUMP)  ; LAB_004334f7
    IMUL EAX,dword ptr [0x007bfd00],0x30 ; 00433520 | DAT_007bfd00
        ;   Label: caseD_1
    ADD EAX,0x7bfd0c                    ; 00433527 | DAT_007bfd0c
    PUSH EAX                            ; 0043352c | DAT_007bfd0c
    PUSH EDX                            ; 0043352d | DAT_007c033c
    PUSH EBP                            ; 0043352e
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00431e10 ; 0043352f
        ;   XREF to: 00431e10 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00431e10()
    MOV ESI,dword ptr [0x007bfd00]      ; 00433534 | DAT_007bfd00
    INC ESI                             ; 0043353a
    ADD ESP,0xc                         ; 0043353b
    MOV dword ptr [0x007bfd00],ESI      ; 0043353e | DAT_007bfd00
    JMP 0x004332b6                      ; 00433544
        ;   XREF to: 004332b6 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007bfd00],0x30 ; 00433549 | DAT_007bfd00
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 00433550
    MOV ESI,EDX                         ; 00433555
    ADD EDI,0x7bfd0c                    ; 00433557 | DAT_007bfd0c
    PUSH EDI                            ; 0043355d | DAT_007bfd0c
    MOV EAX,ECX                         ; 0043355e
    SHR ECX,0x2                         ; 00433560
    MOVSD.REP ES:EDI,ESI                ; 00433563 | DAT_007c033c | DAT_007bfd0c | DAT_007c0340
    MOV CL,AL                           ; 00433565
    AND CL,0x3                          ; 00433567
    MOVSB.REP ES:EDI,ESI                ; 0043356a | DAT_007c0340 | DAT_007bfd10
    POP EDI                             ; 0043356c
    MOV ECX,dword ptr [0x007bfd00]      ; 0043356d | DAT_007bfd00
    INC ECX                             ; 00433573
    MOV dword ptr [0x007bfd00],ECX      ; 00433574 | DAT_007bfd00
    IMUL EAX,ECX,0x30                   ; 0043357a
    ADD EAX,0x7bfd0c                    ; 0043357d | DAT_007bfd0c
    PUSH EAX                            ; 00433582 | DAT_007bfd3c
    PUSH EBP                            ; 00433583
    PUSH EDX                            ; 00433584 | DAT_007c033c
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00431e10 ; 00433585
        ;   XREF to: 00431e10 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00431e10()
    MOV EDI,dword ptr [0x007bfd00]      ; 0043358a | DAT_007bfd00
    INC EDI                             ; 00433590
    ADD ESP,0xc                         ; 00433591
    MOV dword ptr [0x007bfd00],EDI      ; 00433594 | DAT_007bfd00
    JMP 0x004332b6                      ; 0043359a
        ;   XREF to: 004332b6 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x007bfd04],0x30 ; 0043359f | DAT_007bfd04
        ;   Label: caseD_1
    ADD EAX,0x7c090c                    ; 004335a6 | DAT_007c090c
    PUSH EAX                            ; 004335ab | DAT_007c090c
    PUSH EDX                            ; 004335ac | DAT_007bfd0c
    PUSH EBP                            ; 004335ad
    CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00431f40 ; 004335ae
        ;   XREF to: 00431f40 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00431f40()
    MOV ESI,dword ptr [0x007bfd04]      ; 004335b3 | DAT_007bfd04
    INC ESI                             ; 004335b9
    ADD ESP,0xc                         ; 004335ba
    MOV dword ptr [0x007bfd04],ESI      ; 004335bd | DAT_007bfd04
    JMP 0x00433365                      ; 004335c3
        ;   XREF to: 00433365 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007bfd04],0x30 ; 004335c8 | DAT_007bfd04
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 004335cf
    MOV ESI,EDX                         ; 004335d4
    ADD EDI,0x7c090c                    ; 004335d6 | DAT_007c090c
    PUSH EDI                            ; 004335dc | DAT_007c090c
    MOV EAX,ECX                         ; 004335dd
    SHR ECX,0x2                         ; 004335df
    MOVSD.REP ES:EDI,ESI                ; 004335e2 | DAT_007bfd0c | DAT_007c090c | DAT_007bfd10
    MOV CL,AL                           ; 004335e4
    AND CL,0x3                          ; 004335e6
    MOVSB.REP ES:EDI,ESI                ; 004335e9 | DAT_007bfd10 | DAT_007c0910
    POP EDI                             ; 004335eb
    MOV ECX,dword ptr [0x007bfd04]      ; 004335ec | DAT_007bfd04
    INC ECX                             ; 004335f2
    MOV dword ptr [0x007bfd04],ECX      ; 004335f3 | DAT_007bfd04
    IMUL EAX,ECX,0x30                   ; 004335f9
    ADD EAX,0x7c090c                    ; 004335fc | DAT_007c090c
    PUSH EAX                            ; 00433601 | DAT_007c093c
    PUSH EBP                            ; 00433602
    PUSH EDX                            ; 00433603 | DAT_007bfd0c
    CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00431f40 ; 00433604
        ;   XREF to: 00431f40 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00431f40()
    MOV EDI,dword ptr [0x007bfd04]      ; 00433609 | DAT_007bfd04
    INC EDI                             ; 0043360f
    ADD ESP,0xc                         ; 00433610
    MOV dword ptr [0x007bfd04],EDI      ; 00433613 | DAT_007bfd04
    JMP 0x00433365                      ; 00433619
        ;   XREF to: 00433365 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x007bfd08],0x30 ; 0043361e | DAT_007bfd08
        ;   Label: caseD_1
    ADD EAX,0x7c0f0c                    ; 00433625 | DAT_007c0f0c
    PUSH EAX                            ; 0043362a | DAT_007c0f0c
    PUSH EDX                            ; 0043362b | DAT_007c093c
    PUSH EBP                            ; 0043362c
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00432070 ; 0043362d
        ;   XREF to: 00432070 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00432070()
    MOV ESI,dword ptr [0x007bfd08]      ; 00433632 | DAT_007bfd08
    INC ESI                             ; 00433638
    ADD ESP,0xc                         ; 00433639
    MOV dword ptr [0x007bfd08],ESI      ; 0043363c | DAT_007bfd08
    JMP 0x0043340f                      ; 00433642
        ;   XREF to: 0043340f (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007bfd08],0x30 ; 00433647 | DAT_007bfd08
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0043364e
    MOV ESI,EDX                         ; 00433653
    ADD EDI,0x7c0f0c                    ; 00433655 | DAT_007c0f0c
    PUSH EDI                            ; 0043365b | DAT_007c0f0c
    MOV EAX,ECX                         ; 0043365c
    SHR ECX,0x2                         ; 0043365e
    MOVSD.REP ES:EDI,ESI                ; 00433661 | DAT_007c093c | DAT_007c0f0c | DAT_007c0940
    MOV CL,AL                           ; 00433663
    AND CL,0x3                          ; 00433665
    MOVSB.REP ES:EDI,ESI                ; 00433668 | DAT_007c0940 | DAT_007c0f10
    POP EDI                             ; 0043366a
    MOV ECX,dword ptr [0x007bfd08]      ; 0043366b | DAT_007bfd08
    INC ECX                             ; 00433671
    MOV dword ptr [0x007bfd08],ECX      ; 00433672 | DAT_007bfd08
    IMUL EAX,ECX,0x30                   ; 00433678
    ADD EAX,0x7c0f0c                    ; 0043367b | DAT_007c0f0c
    PUSH EAX                            ; 00433680 | DAT_007c0f3c
    PUSH EBP                            ; 00433681
    PUSH EDX                            ; 00433682 | DAT_007c093c
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00432070 ; 00433683
        ;   XREF to: 00432070 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00432070()
    MOV EDI,dword ptr [0x007bfd08]      ; 00433688 | DAT_007bfd08
    INC EDI                             ; 0043368e
    ADD ESP,0xc                         ; 0043368f
    MOV dword ptr [0x007bfd08],EDI      ; 00433692 | DAT_007bfd08
    JMP 0x0043340f                      ; 00433698
        ;   XREF to: 0043340f (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x007bee30],0x30 ; 0043369d | DAT_007bee30
        ;   Label: caseD_1
    ADD EAX,0x7bee34                    ; 004336a4 | DAT_007bee34
    PUSH EAX                            ; 004336a9 | DAT_007bee34
    PUSH EDX                            ; 004336aa | DAT_007c0f0c
    PUSH EBP                            ; 004336ab
    CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_004321a0 ; 004336ac
        ;   XREF to: 004321a0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_004321a0()
    MOV ESI,dword ptr [0x007bee30]      ; 004336b1 | DAT_007bee30
    INC ESI                             ; 004336b7
    ADD ESP,0xc                         ; 004336b8
    MOV dword ptr [0x007bee30],ESI      ; 004336bb | DAT_007bee30
    JMP 0x004334bf                      ; 004336c1
        ;   XREF to: 004334bf (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007bee30],0x30 ; 004336c6 | DAT_007bee30
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 004336cd
    MOV ESI,EDX                         ; 004336d2
    ADD EDI,0x7bee34                    ; 004336d4 | DAT_007bee34
    PUSH EDI                            ; 004336da | DAT_007bee34
    MOV EAX,ECX                         ; 004336db
    SHR ECX,0x2                         ; 004336dd
    MOVSD.REP ES:EDI,ESI                ; 004336e0 | DAT_007c0f0c | DAT_007bee34 | DAT_007c0f10
    MOV CL,AL                           ; 004336e2
    AND CL,0x3                          ; 004336e4
    MOVSB.REP ES:EDI,ESI                ; 004336e7 | DAT_007c0f10 | DAT_007bee38
    POP EDI                             ; 004336e9
    MOV ECX,dword ptr [0x007bee30]      ; 004336ea | DAT_007bee30
    INC ECX                             ; 004336f0
    MOV dword ptr [0x007bee30],ECX      ; 004336f1 | DAT_007bee30
    IMUL EAX,ECX,0x30                   ; 004336f7
    ADD EAX,0x7bee34                    ; 004336fa | DAT_007bee34
    PUSH EAX                            ; 004336ff | DAT_007bee64
    PUSH EBP                            ; 00433700
    PUSH EDX                            ; 00433701 | DAT_007c0f0c
    CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_004321a0 ; 00433702
        ;   XREF to: 004321a0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_004321a0()
    MOV EDI,dword ptr [0x007bee30]      ; 00433707 | DAT_007bee30
    INC EDI                             ; 0043370d
    ADD ESP,0xc                         ; 0043370e
    MOV dword ptr [0x007bee30],EDI      ; 00433711 | DAT_007bee30
    JMP 0x004334bf                      ; 00433717
        ;   XREF to: 004334bf (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV dword ptr [EAX + 0x8],0x1       ; 0043371c | DAT_007bee6c
        ;   Label: LAB_0043371c
    MOV dword ptr [EAX],ECX             ; 00433723 | DAT_007bee64
    MOV dword ptr [EAX + 0x4],ECX       ; 00433725 | DAT_007bee68
    JMP 0x0043350c                      ; 00433728
        ;   XREF to: 0043350c (UNCONDITIONAL_JUMP)  ; LAB_0043350c
    MOV EDX,ECX                         ; 0043372d
        ;   Label: LAB_0043372d
    MOV ESI,dword ptr [EAX]             ; 0043372f | DAT_007bee64
    NEG EDX                             ; 00433731
    CMP EDX,ESI                         ; 00433733
    JLE 0x0043373e                      ; 00433735
        ;   XREF to: 0043373e (CONDITIONAL_JUMP)  ; LAB_0043373e
    MOV dword ptr [EAX],EDX             ; 00433737 | DAT_007bee64
    JMP 0x0043350c                      ; 00433739
        ;   XREF to: 0043350c (UNCONDITIONAL_JUMP)  ; LAB_0043350c
    MOV EDI,dword ptr [EAX + 0x8]       ; 0043373e | DAT_007bee6c
        ;   Label: LAB_0043373e
    MOV ECX,dword ptr [EAX + 0x4]       ; 00433741 | DAT_007bee68
    CMP ECX,EDI                         ; 00433744
    JLE 0x00433750                      ; 00433746
        ;   XREF to: 00433750 (CONDITIONAL_JUMP)  ; LAB_00433750
    MOV dword ptr [EAX + 0x4],EDI       ; 00433748 | DAT_007bee68
    JMP 0x0043350c                      ; 0043374b
        ;   XREF to: 0043350c (UNCONDITIONAL_JUMP)  ; LAB_0043350c
    CMP EDX,ECX                         ; 00433750
        ;   Label: LAB_00433750
    JLE 0x0043350c                      ; 00433752
        ;   XREF to: 0043350c (CONDITIONAL_JUMP)  ; LAB_0043350c
    MOV dword ptr [EAX + 0x4],EDX       ; 00433758 | DAT_007bee68
    JMP 0x0043350c                      ; 0043375b
        ;   XREF to: 0043350c (UNCONDITIONAL_JUMP)  ; LAB_0043350c

