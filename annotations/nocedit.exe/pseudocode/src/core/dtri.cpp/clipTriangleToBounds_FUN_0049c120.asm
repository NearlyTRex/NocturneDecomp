; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dtri_cpp_clipTriangleToBounds_FUN_0049c120(CVector3f *triangle_vertices,CVector3f *bounds_min,CVector3f *bounds_max)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   triangle_vertices
; CVector3f *      Stack[0x8]:4   bounds_min
; CVector3f *      Stack[0xc]:4   bounds_max
;
; Referenced Globals:
;   void* switchdataD_0049c0b4 = 0049c387
;   void* PTR_caseD_1_0049c0b8 = 0049c708
;   void* PTR_caseD_3_0049c0c0 = 0049c3ae
;   void* switchdataD_0049c0c4 = 0049c42c
;   void* PTR_caseD_1_0049c0c8 = 0049c7bc
;   void* PTR_caseD_3_0049c0d0 = 0049c453
;   void* switchdataD_0049c0d4 = 0049c4cf
;   void* PTR_caseD_1_0049c0d8 = 0049c86c
;   void* PTR_caseD_3_0049c0e0 = 0049c4f6
;   void* switchdataD_0049c0e4 = 0049c56f
;   void* PTR_caseD_1_0049c0e8 = 0049c920
;   void* PTR_caseD_3_0049c0f0 = 0049c596
;   void* switchdataD_0049c0f4 = 0049c615
;   void* PTR_caseD_1_0049c0f8 = 0049c9ce
;   void* PTR_caseD_3_0049c100 = 0049c63c
;   ... and 81 more
;
; Called Functions:
;   core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049c120
        ;   Label: core_dtri.cpp_clipTriangleToBounds_FUN_0049c120
    PUSH ESI                            ; 0049c121
    PUSH EDI                            ; 0049c122
    PUSH EBP                            ; 0049c123
    MOV EBP,ESP                         ; 0049c124
    SUB ESP,0x1c                        ; 0049c126
    AND ESP,0xfffffff8                  ; 0049c129
    MOV EDX,0x3                         ; 0049c12c
    MOV ECX,dword ptr [EBP + 0x14]      ; 0049c131
    MOV dword ptr [0x02cee5cc],EDX      ; 0049c134 | g_ClipInputVertexCount
    CMP ECX,0x2cee5d0                   ; 0049c13a | g_ClipInputVertices
    JNZ 0x0049c2ce                      ; 0049c140
        ;   XREF to: 0049c2ce (CONDITIONAL_JUMP)  ; LAB_0049c2ce
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049c146
        ;   Label: LAB_0049c146
    ADD EDX,0xc                         ; 0049c149
    CMP EDX,0x2cee5dc                   ; 0049c14c | g_ClipInputVertices[1].x
    JZ 0x0049c16d                       ; 0049c152
        ;   XREF to: 0049c16d (CONDITIONAL_JUMP)  ; LAB_0049c16d
    FLD float ptr [EDX]                 ; 0049c154
    FLD float ptr [EDX + 0x8]           ; 0049c156
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049c159
    MOV [0x02cee5e0],EAX                ; 0049c15c | g_ClipInputVertices[1].y
    FSTP float ptr [0x02cee5e4]         ; 0049c161 | g_ClipInputVertices[1].z
    FSTP float ptr [0x02cee5dc]         ; 0049c167 | g_ClipInputVertices[1].x
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049c16d
        ;   Label: LAB_0049c16d
    ADD EDX,0x18                        ; 0049c170
    CMP EDX,0x2cee5e8                   ; 0049c173 | g_ClipInputVertices[2].x
    JZ 0x0049c194                       ; 0049c179
        ;   XREF to: 0049c194 (CONDITIONAL_JUMP)  ; LAB_0049c194
    FLD float ptr [EDX]                 ; 0049c17b
    FLD float ptr [EDX + 0x8]           ; 0049c17d
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049c180
    MOV [0x02cee5ec],EAX                ; 0049c183 | g_ClipInputVertices[2].y
    FSTP float ptr [0x02cee5f0]         ; 0049c188 | g_ClipInputVertices[2].z
    FSTP float ptr [0x02cee5e8]         ; 0049c18e | g_ClipInputVertices[2].x
    MOV EBX,0xffffffff                  ; 0049c194
        ;   Label: LAB_0049c194
    MOV EAX,[0x02cee5cc]                ; 0049c199 | g_ClipInputVertexCount
    XOR EDI,EDI                         ; 0049c19e
    XOR ESI,ESI                         ; 0049c1a0
    MOV dword ptr [ESP + 0x10],EBX      ; 0049c1a2
    TEST EAX,EAX                        ; 0049c1a6
    JLE 0x0049c238                      ; 0049c1a8
        ;   XREF to: 0049c238 (CONDITIONAL_JUMP)  ; LAB_0049c238
    MOV EBX,0x2cee5d0                   ; 0049c1ae | g_ClipInputVertices
    FLD float ptr [EBX]                 ; 0049c1b3 | g_ClipInputVertices | g_ClipInputVertices[1].x
        ;   Label: LAB_0049c1b3
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0049c1b5
    MOV ECX,EBX                         ; 0049c1b8
    XOR EDX,EDX                         ; 0049c1ba
    FCOMP float ptr [EAX]               ; 0049c1bc
    FNSTSW AX                           ; 0049c1be
    SAHF                                ; 0049c1c0
    JBE 0x0049c1c8                      ; 0049c1c1
        ;   XREF to: 0049c1c8 (CONDITIONAL_JUMP)  ; LAB_0049c1c8
    MOV EDX,0x1                         ; 0049c1c3
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0049c1c8
        ;   Label: LAB_0049c1c8
    FLD float ptr [ECX + 0x4]           ; 0049c1cb | g_ClipInputVertices[0].y | g_ClipInputVertices[1].y
    FCOMP float ptr [EAX + 0x4]         ; 0049c1ce
    FNSTSW AX                           ; 0049c1d1
    SAHF                                ; 0049c1d3
    JBE 0x0049c1d9                      ; 0049c1d4
        ;   XREF to: 0049c1d9 (CONDITIONAL_JUMP)  ; LAB_0049c1d9
    OR DL,0x2                           ; 0049c1d6
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0049c1d9
        ;   Label: LAB_0049c1d9
    FLD float ptr [ECX + 0x8]           ; 0049c1dc | g_ClipInputVertices[0].z | g_ClipInputVertices[1].z
    FCOMP float ptr [EAX + 0x8]         ; 0049c1df
    FNSTSW AX                           ; 0049c1e2
    SAHF                                ; 0049c1e4
    JBE 0x0049c1ea                      ; 0049c1e5
        ;   XREF to: 0049c1ea (CONDITIONAL_JUMP)  ; LAB_0049c1ea
    OR DL,0x4                           ; 0049c1e7
    MOV EAX,dword ptr [EBP + 0x18]      ; 0049c1ea
        ;   Label: LAB_0049c1ea
    FLD float ptr [ECX]                 ; 0049c1ed | g_ClipInputVertices
    FCOMP float ptr [EAX]               ; 0049c1ef
    FNSTSW AX                           ; 0049c1f1
    SAHF                                ; 0049c1f3
    JNC 0x0049c1f9                      ; 0049c1f4
        ;   XREF to: 0049c1f9 (CONDITIONAL_JUMP)  ; LAB_0049c1f9
    OR DL,0x8                           ; 0049c1f6
    MOV EAX,dword ptr [EBP + 0x18]      ; 0049c1f9
        ;   Label: LAB_0049c1f9
    FLD float ptr [ECX + 0x4]           ; 0049c1fc | g_ClipInputVertices[0].y
    FCOMP float ptr [EAX + 0x4]         ; 0049c1ff
    FNSTSW AX                           ; 0049c202
    SAHF                                ; 0049c204
    JNC 0x0049c20a                      ; 0049c205
        ;   XREF to: 0049c20a (CONDITIONAL_JUMP)  ; LAB_0049c20a
    OR DL,0x10                          ; 0049c207
    MOV EAX,dword ptr [EBP + 0x18]      ; 0049c20a
        ;   Label: LAB_0049c20a
    FLD float ptr [ECX + 0x8]           ; 0049c20d | g_ClipInputVertices[0].z
    FCOMP float ptr [EAX + 0x8]         ; 0049c210
    FNSTSW AX                           ; 0049c213
    SAHF                                ; 0049c215
    JNC 0x0049c21b                      ; 0049c216
        ;   XREF to: 0049c21b (CONDITIONAL_JUMP)  ; LAB_0049c21b
    OR DL,0x20                          ; 0049c218
    MOV ECX,dword ptr [ESP + 0x10]      ; 0049c21b
        ;   Label: LAB_0049c21b
    MOV EAX,[0x02cee5cc]                ; 0049c21f | g_ClipInputVertexCount
    ADD EBX,0xc                         ; 0049c224
    INC ESI                             ; 0049c227
    AND ECX,EDX                         ; 0049c228
    OR EDI,EDX                          ; 0049c22a
    MOV dword ptr [ESP + 0x10],ECX      ; 0049c22c
    CMP ESI,EAX                         ; 0049c230
    JL 0x0049c1b3                       ; 0049c232
        ;   XREF to: 0049c1b3 (CONDITIONAL_JUMP)  ; LAB_0049c1b3
    TEST EDI,EDI                        ; 0049c238
        ;   Label: LAB_0049c238
    JNZ 0x0049c2ef                      ; 0049c23a
        ;   XREF to: 0049c2ef (CONDITIONAL_JUMP)  ; LAB_0049c2ef
    MOV EBX,0x3                         ; 0049c240
    MOV ESI,dword ptr [EBP + 0x14]      ; 0049c245
    MOV dword ptr [0x02ceea64],EBX      ; 0049c248 | g_ClipOutputVertexCount
    CMP ESI,0x2ceea68                   ; 0049c24e | g_ClipOutputVertices
    JZ 0x0049c272                       ; 0049c254
        ;   XREF to: 0049c272 (CONDITIONAL_JUMP)  ; LAB_0049c272
    MOV EAX,ESI                         ; 0049c256
    FLD float ptr [EAX]                 ; 0049c258
    FLD float ptr [EAX + 0x8]           ; 0049c25a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0049c25d
    MOV dword ptr [0x02ceea6c],EDX      ; 0049c260 | g_ClipOutputVertices[0].y
    FSTP float ptr [0x02ceea70]         ; 0049c266 | g_ClipOutputVertices[0].z
    FSTP float ptr [0x02ceea68]         ; 0049c26c | g_ClipOutputVertices
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049c272
        ;   Label: LAB_0049c272
    ADD EDX,0xc                         ; 0049c275
    CMP EDX,0x2ceea74                   ; 0049c278 | g_ClipOutputVertices[1].x
    JZ 0x0049c299                       ; 0049c27e
        ;   XREF to: 0049c299 (CONDITIONAL_JUMP)  ; LAB_0049c299
    FLD float ptr [EDX]                 ; 0049c280
    FLD float ptr [EDX + 0x8]           ; 0049c282
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049c285
    MOV [0x02ceea78],EAX                ; 0049c288 | g_ClipOutputVertices[1].y
    FSTP float ptr [0x02ceea7c]         ; 0049c28d | g_ClipOutputVertices[1].z
    FSTP float ptr [0x02ceea74]         ; 0049c293 | g_ClipOutputVertices[1].x
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049c299
        ;   Label: LAB_0049c299
    ADD EDX,0x18                        ; 0049c29c
    CMP EDX,0x2ceea80                   ; 0049c29f | g_ClipOutputVertices[2].x
    JZ 0x0049c2c0                       ; 0049c2a5
        ;   XREF to: 0049c2c0 (CONDITIONAL_JUMP)  ; LAB_0049c2c0
    FLD float ptr [EDX]                 ; 0049c2a7
    FLD float ptr [EDX + 0x8]           ; 0049c2a9
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049c2ac
    MOV [0x02ceea84],EAX                ; 0049c2af | g_ClipOutputVertices[2].y
    FSTP float ptr [0x02ceea88]         ; 0049c2b4 | g_ClipOutputVertices[2].z
    FSTP float ptr [0x02ceea80]         ; 0049c2ba | g_ClipOutputVertices[2].x
    MOV ECX,0x1                         ; 0049c2c0
        ;   Label: LAB_0049c2c0
    MOV EAX,ECX                         ; 0049c2c5
    MOV ESP,EBP                         ; 0049c2c7
    POP EBP                             ; 0049c2c9
    POP EDI                             ; 0049c2ca
    POP ESI                             ; 0049c2cb
    POP EBX                             ; 0049c2cc
    RET                                 ; 0049c2cd
    MOV EAX,ECX                         ; 0049c2ce
        ;   Label: LAB_0049c2ce
    FLD float ptr [EAX]                 ; 0049c2d0
    FLD float ptr [EAX + 0x8]           ; 0049c2d2
    MOV EDX,dword ptr [EAX + 0x4]       ; 0049c2d5
    MOV dword ptr [0x02cee5d4],EDX      ; 0049c2d8 | g_ClipInputVertices[0].y
    FSTP float ptr [0x02cee5d8]         ; 0049c2de | g_ClipInputVertices[0].z
    FSTP float ptr [0x02cee5d0]         ; 0049c2e4 | g_ClipInputVertices
    JMP 0x0049c146                      ; 0049c2ea
        ;   XREF to: 0049c146 (UNCONDITIONAL_JUMP)  ; LAB_0049c146
    MOV EDX,dword ptr [ESP + 0x10]      ; 0049c2ef
        ;   Label: LAB_0049c2ef
    TEST EDX,EDX                        ; 0049c2f3
    JNZ 0x0049c6fd                      ; 0049c2f5
        ;   XREF to: 0049c6fd (CONDITIONAL_JUMP)  ; LAB_0049c6fd
    MOV dword ptr [0x02cee754],EDX      ; 0049c2fb | g_ClipBuffer2VertexCount
    MOV dword ptr [0x02cee818],EDX      ; 0049c301 | g_ClipBuffer3VertexCount
    MOV dword ptr [0x02cee8dc],EDX      ; 0049c307 | g_ClipBuffer4VertexCount
    MOV dword ptr [0x02cee9a0],EDX      ; 0049c30d | g_ClipBuffer5VertexCount
    MOV dword ptr [0x02ceea64],EDX      ; 0049c313 | g_ClipOutputVertexCount
    MOV dword ptr [0x02cee690],EDX      ; 0049c319 | g_ClipBuffer1VertexCount
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0049c31f
    MOV ECX,dword ptr [0x02cee5cc]      ; 0049c322 | g_ClipInputVertexCount
    MOV EDX,dword ptr [EDX + 0x4]       ; 0049c328
    XOR EBX,EBX                         ; 0049c32b
    MOV dword ptr [ESP + 0x18],EDX      ; 0049c32d
    TEST ECX,ECX                        ; 0049c331
    JLE 0x0049c3bc                      ; 0049c333
        ;   XREF to: 0049c3bc (CONDITIONAL_JUMP)  ; LAB_0049c3bc
    MOV ESI,0x2cee5d0                   ; 0049c339 | g_ClipInputVertices
    MOV EDI,dword ptr [0x02cee5cc]      ; 0049c33e | g_ClipInputVertexCount
        ;   Label: LAB_0049c33e
    LEA ECX,[EBX + 0x1]                 ; 0049c344
    CMP ECX,EDI                         ; 0049c347
    JNZ 0x0049c34d                      ; 0049c349
        ;   XREF to: 0049c34d (CONDITIONAL_JUMP)  ; LAB_0049c34d
    XOR ECX,EDI                         ; 0049c34b
    IMUL ECX,ECX,0xc                    ; 0049c34d
        ;   Label: LAB_0049c34d
    FLD float ptr [ESI + 0x4]           ; 0049c350 | g_ClipInputVertices[0].y | g_ClipInputVertices[1].y
    MOV EDI,0x2cee5d0                   ; 0049c353 | g_ClipInputVertices
    MOV EDX,ESI                         ; 0049c358 | g_ClipInputVertices[1].x
    ADD EDI,ECX                         ; 0049c35a
    XOR ECX,ECX                         ; 0049c35c
    FCOMP float ptr [ESP + 0x18]        ; 0049c35e
    FNSTSW AX                           ; 0049c362
    SAHF                                ; 0049c364
    JBE 0x0049c36c                      ; 0049c365
        ;   XREF to: 0049c36c (CONDITIONAL_JUMP)  ; LAB_0049c36c
    MOV ECX,0x1                         ; 0049c367
    FLD float ptr [EDI + 0x4]           ; 0049c36c | g_ClipInputVertices[1].y
        ;   Label: LAB_0049c36c
    FCOMP float ptr [ESP + 0x18]        ; 0049c36f
    FNSTSW AX                           ; 0049c373
    SAHF                                ; 0049c375
    JBE 0x0049c37b                      ; 0049c376
        ;   XREF to: 0049c37b (CONDITIONAL_JUMP)  ; LAB_0049c37b
    OR CL,0x2                           ; 0049c378
    CMP ECX,0x3                         ; 0049c37b
        ;   Label: LAB_0049c37b
    JA 0x0049c3ae                       ; 0049c37e
        ;   XREF to: 0049c3ae (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x49c0b4]  ; 0049c380 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x02cee690],0xc ; 0049c387 | g_ClipBuffer1VertexCount
        ;   Label: caseD_0
    ADD ECX,0x2cee694                   ; 0049c38e | g_ClipBuffer1Vertices
    CMP ECX,EDX                         ; 0049c394
    JZ 0x0049c3a8                       ; 0049c396
        ;   XREF to: 0049c3a8 (CONDITIONAL_JUMP)  ; LAB_0049c3a8
    MOV EAX,dword ptr [EDX]             ; 0049c398 | g_ClipInputVertices[1].x
    MOV dword ptr [ECX],EAX             ; 0049c39a | g_ClipBuffer4Vertices[14].x
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049c39c | g_ClipInputVertices[1].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0049c39f | g_ClipBuffer4Vertices[14].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 0049c3a2 | g_ClipInputVertices[1].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0049c3a5 | g_ClipBuffer4Vertices[14].z
    INC dword ptr [0x02cee690]          ; 0049c3a8 | g_ClipBuffer1VertexCount
        ;   Label: LAB_0049c3a8
    MOV EDI,dword ptr [0x02cee5cc]      ; 0049c3ae | g_ClipInputVertexCount
        ;   Label: caseD_3
    INC EBX                             ; 0049c3b4
    ADD ESI,0xc                         ; 0049c3b5
    CMP EBX,EDI                         ; 0049c3b8
    JL 0x0049c33e                       ; 0049c3ba
        ;   XREF to: 0049c33e (CONDITIONAL_JUMP)  ; LAB_0049c33e
    MOV EAX,[0x02cee690]                ; 0049c3bc | g_ClipBuffer1VertexCount
        ;   Label: LAB_0049c3bc
    CMP EAX,0x3                         ; 0049c3c1
    JL 0x0049c6fd                       ; 0049c3c4
        ;   XREF to: 0049c6fd (CONDITIONAL_JUMP)  ; LAB_0049c6fd
    MOV EDX,dword ptr [EBP + 0x18]      ; 0049c3ca
    MOV EDX,dword ptr [EDX + 0x4]       ; 0049c3cd
    XOR EBX,EBX                         ; 0049c3d0
    MOV dword ptr [ESP + 0x8],EDX       ; 0049c3d2
    TEST EAX,EAX                        ; 0049c3d6
    JLE 0x0049c461                      ; 0049c3d8
        ;   XREF to: 0049c461 (CONDITIONAL_JUMP)  ; LAB_0049c461
    MOV ESI,0x2cee694                   ; 0049c3de | g_ClipBuffer1Vertices
    MOV EDI,dword ptr [0x02cee690]      ; 0049c3e3 | g_ClipBuffer1VertexCount
        ;   Label: LAB_0049c3e3
    LEA ECX,[EBX + 0x1]                 ; 0049c3e9
    CMP ECX,EDI                         ; 0049c3ec
    JNZ 0x0049c3f2                      ; 0049c3ee
        ;   XREF to: 0049c3f2 (CONDITIONAL_JUMP)  ; LAB_0049c3f2
    XOR ECX,EDI                         ; 0049c3f0
    IMUL ECX,ECX,0xc                    ; 0049c3f2
        ;   Label: LAB_0049c3f2
    FLD float ptr [ESI + 0x4]           ; 0049c3f5 | g_ClipBuffer1Vertices[0].y | g_ClipBuffer1Vertices[1].y
    MOV EDI,0x2cee694                   ; 0049c3f8 | g_ClipBuffer1Vertices
    MOV EDX,ESI                         ; 0049c3fd | g_ClipBuffer1Vertices[1].x
    ADD EDI,ECX                         ; 0049c3ff
    XOR ECX,ECX                         ; 0049c401
    FCOMP float ptr [ESP + 0x8]         ; 0049c403
    FNSTSW AX                           ; 0049c407
    SAHF                                ; 0049c409
    JNC 0x0049c411                      ; 0049c40a
        ;   XREF to: 0049c411 (CONDITIONAL_JUMP)  ; LAB_0049c411
    MOV ECX,0x1                         ; 0049c40c
    FLD float ptr [EDI + 0x4]           ; 0049c411 | g_ClipBuffer1Vertices[1].y | g_ClipBuffer5Vertices[2].x
        ;   Label: LAB_0049c411
    FCOMP float ptr [ESP + 0x8]         ; 0049c414
    FNSTSW AX                           ; 0049c418
    SAHF                                ; 0049c41a
    JNC 0x0049c420                      ; 0049c41b
        ;   XREF to: 0049c420 (CONDITIONAL_JUMP)  ; LAB_0049c420
    OR CL,0x2                           ; 0049c41d
    CMP ECX,0x3                         ; 0049c420
        ;   Label: LAB_0049c420
    JA 0x0049c453                       ; 0049c423
        ;   XREF to: 0049c453 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x49c0c4]  ; 0049c425 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x02cee754],0xc ; 0049c42c | g_ClipBuffer2VertexCount
        ;   Label: caseD_0
    ADD ECX,0x2cee758                   ; 0049c433 | g_ClipBuffer2Vertices
    CMP ECX,EDX                         ; 0049c439
    JZ 0x0049c44d                       ; 0049c43b
        ;   XREF to: 0049c44d (CONDITIONAL_JUMP)  ; LAB_0049c44d
    MOV EAX,dword ptr [EDX]             ; 0049c43d | g_ClipBuffer1Vertices[1].x
    MOV dword ptr [ECX],EAX             ; 0049c43f | g_ClipBuffer5Vertices[14].x
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049c441 | g_ClipBuffer1Vertices[1].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0049c444 | g_ClipBuffer5Vertices[14].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 0049c447 | g_ClipBuffer1Vertices[1].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0049c44a | g_ClipBuffer5Vertices[14].z
    INC dword ptr [0x02cee754]          ; 0049c44d | g_ClipBuffer2VertexCount
        ;   Label: LAB_0049c44d
    MOV EDX,dword ptr [0x02cee690]      ; 0049c453 | g_ClipBuffer1VertexCount
        ;   Label: caseD_3
    INC EBX                             ; 0049c459
    ADD ESI,0xc                         ; 0049c45a
    CMP EBX,EDX                         ; 0049c45d
    JL 0x0049c3e3                       ; 0049c45f
        ;   XREF to: 0049c3e3 (CONDITIONAL_JUMP)  ; LAB_0049c3e3
    MOV ECX,dword ptr [0x02cee754]      ; 0049c461 | g_ClipBuffer2VertexCount
        ;   Label: LAB_0049c461
    CMP ECX,0x3                         ; 0049c467
    JL 0x0049c6fd                       ; 0049c46a
        ;   XREF to: 0049c6fd (CONDITIONAL_JUMP)  ; LAB_0049c6fd
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0049c470
    MOV EDX,dword ptr [EDX]             ; 0049c473
    XOR ESI,ESI                         ; 0049c475
    MOV dword ptr [ESP + 0x14],EDX      ; 0049c477
    TEST ECX,ECX                        ; 0049c47b
    JLE 0x0049c504                      ; 0049c47d
        ;   XREF to: 0049c504 (CONDITIONAL_JUMP)  ; LAB_0049c504
    MOV EBX,0x2cee758                   ; 0049c483 | g_ClipBuffer2Vertices
    MOV EDI,dword ptr [0x02cee754]      ; 0049c488 | g_ClipBuffer2VertexCount
        ;   Label: LAB_0049c488
    LEA ECX,[ESI + 0x1]                 ; 0049c48e
    CMP ECX,EDI                         ; 0049c491
    JNZ 0x0049c497                      ; 0049c493
        ;   XREF to: 0049c497 (CONDITIONAL_JUMP)  ; LAB_0049c497
    XOR ECX,EDI                         ; 0049c495
    IMUL ECX,ECX,0xc                    ; 0049c497
        ;   Label: LAB_0049c497
    FLD float ptr [EBX]                 ; 0049c49a | g_ClipBuffer2Vertices | g_ClipBuffer2Vertices[1].x
    MOV EDI,0x2cee758                   ; 0049c49c | g_ClipBuffer2Vertices
    MOV EDX,EBX                         ; 0049c4a1 | g_ClipBuffer2Vertices[1].x
    ADD EDI,ECX                         ; 0049c4a3
    XOR ECX,ECX                         ; 0049c4a5
    FCOMP float ptr [ESP + 0x14]        ; 0049c4a7
    FNSTSW AX                           ; 0049c4ab
    SAHF                                ; 0049c4ad
    JBE 0x0049c4b5                      ; 0049c4ae
        ;   XREF to: 0049c4b5 (CONDITIONAL_JUMP)  ; LAB_0049c4b5
    MOV ECX,0x1                         ; 0049c4b0
    FLD float ptr [EDI]                 ; 0049c4b5 | g_ClipBuffer2Vertices[1].x | g_ClipOutputVertices[1].z
        ;   Label: LAB_0049c4b5
    FCOMP float ptr [ESP + 0x14]        ; 0049c4b7
    FNSTSW AX                           ; 0049c4bb
    SAHF                                ; 0049c4bd
    JBE 0x0049c4c3                      ; 0049c4be
        ;   XREF to: 0049c4c3 (CONDITIONAL_JUMP)  ; LAB_0049c4c3
    OR CL,0x2                           ; 0049c4c0
    CMP ECX,0x3                         ; 0049c4c3
        ;   Label: LAB_0049c4c3
    JA 0x0049c4f6                       ; 0049c4c6
        ;   XREF to: 0049c4f6 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x49c0d4]  ; 0049c4c8 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x02cee818],0xc ; 0049c4cf | g_ClipBuffer3VertexCount
        ;   Label: caseD_0
    ADD ECX,0x2cee81c                   ; 0049c4d6 | g_ClipBuffer3Vertices
    CMP ECX,EDX                         ; 0049c4dc
    JZ 0x0049c4f0                       ; 0049c4de
        ;   XREF to: 0049c4f0 (CONDITIONAL_JUMP)  ; LAB_0049c4f0
    MOV EAX,dword ptr [EDX]             ; 0049c4e0 | g_ClipBuffer2Vertices[1].x
    MOV dword ptr [ECX],EAX             ; 0049c4e2 | g_ClipOutputVertices[14].x
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049c4e4 | g_ClipBuffer2Vertices[1].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0049c4e7 | g_ClipOutputVertices[14].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 0049c4ea | g_ClipBuffer2Vertices[1].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0049c4ed | g_ClipOutputVertices[14].z
    INC dword ptr [0x02cee818]          ; 0049c4f0 | g_ClipBuffer3VertexCount
        ;   Label: LAB_0049c4f0
    MOV EDX,dword ptr [0x02cee754]      ; 0049c4f6 | g_ClipBuffer2VertexCount
        ;   Label: caseD_3
    INC ESI                             ; 0049c4fc
    ADD EBX,0xc                         ; 0049c4fd | g_ClipBuffer2Vertices[1].x
    CMP ESI,EDX                         ; 0049c500
    JL 0x0049c488                       ; 0049c502
        ;   XREF to: 0049c488 (CONDITIONAL_JUMP)  ; LAB_0049c488
    MOV ECX,dword ptr [0x02cee818]      ; 0049c504 | g_ClipBuffer3VertexCount
        ;   Label: LAB_0049c504
    CMP ECX,0x3                         ; 0049c50a
    JL 0x0049c6fd                       ; 0049c50d
        ;   XREF to: 0049c6fd (CONDITIONAL_JUMP)  ; LAB_0049c6fd
    MOV EDX,dword ptr [EBP + 0x18]      ; 0049c513
    MOV EDX,dword ptr [EDX]             ; 0049c516
    XOR ESI,ESI                         ; 0049c518
    MOV dword ptr [ESP],EDX             ; 0049c51a
    TEST ECX,ECX                        ; 0049c51d
    JLE 0x0049c5a4                      ; 0049c51f
        ;   XREF to: 0049c5a4 (CONDITIONAL_JUMP)  ; LAB_0049c5a4
    MOV EBX,0x2cee81c                   ; 0049c525 | g_ClipBuffer3Vertices
    MOV EDI,dword ptr [0x02cee818]      ; 0049c52a | g_ClipBuffer3VertexCount
        ;   Label: LAB_0049c52a
    LEA ECX,[ESI + 0x1]                 ; 0049c530
    CMP ECX,EDI                         ; 0049c533
    JNZ 0x0049c539                      ; 0049c535
        ;   XREF to: 0049c539 (CONDITIONAL_JUMP)  ; LAB_0049c539
    XOR ECX,EDI                         ; 0049c537
    IMUL ECX,ECX,0xc                    ; 0049c539
        ;   Label: LAB_0049c539
    FLD float ptr [EBX]                 ; 0049c53c | g_ClipBuffer3Vertices | g_ClipBuffer3Vertices[1].x
    MOV EDI,0x2cee81c                   ; 0049c53e | g_ClipBuffer3Vertices
    MOV EDX,EBX                         ; 0049c543 | g_ClipBuffer3Vertices[1].x
    ADD EDI,ECX                         ; 0049c545
    XOR ECX,ECX                         ; 0049c547
    FCOMP float ptr [ESP]               ; 0049c549
    FNSTSW AX                           ; 0049c54c
    SAHF                                ; 0049c54e
    JNC 0x0049c556                      ; 0049c54f
        ;   XREF to: 0049c556 (CONDITIONAL_JUMP)  ; LAB_0049c556
    MOV ECX,0x1                         ; 0049c551
    FLD float ptr [EDI]                 ; 0049c556 | g_ClipBuffer3Vertices[1].x | g_ClippedTriangleBuffer[0].vertex3.x
        ;   Label: LAB_0049c556
    FCOMP float ptr [ESP]               ; 0049c558
    FNSTSW AX                           ; 0049c55b
    SAHF                                ; 0049c55d
    JNC 0x0049c563                      ; 0049c55e
        ;   XREF to: 0049c563 (CONDITIONAL_JUMP)  ; LAB_0049c563
    OR CL,0x2                           ; 0049c560
    CMP ECX,0x3                         ; 0049c563
        ;   Label: LAB_0049c563
    JA 0x0049c596                       ; 0049c566
        ;   XREF to: 0049c596 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x49c0e4]  ; 0049c568 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x02cee8dc],0xc ; 0049c56f | g_ClipBuffer4VertexCount
        ;   Label: caseD_0
    ADD ECX,0x2cee8e0                   ; 0049c576 | g_ClipBuffer4Vertices
    CMP ECX,EDX                         ; 0049c57c
    JZ 0x0049c590                       ; 0049c57e
        ;   XREF to: 0049c590 (CONDITIONAL_JUMP)  ; LAB_0049c590
    MOV EAX,dword ptr [EDX]             ; 0049c580 | g_ClipBuffer3Vertices[1].x
    MOV dword ptr [ECX],EAX             ; 0049c582 | g_ClippedTriangleBuffer[3].vertex1.y
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049c584 | g_ClipBuffer3Vertices[1].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0049c587 | g_ClippedTriangleBuffer[3].vertex1.z
    MOV EAX,dword ptr [EDX + 0x8]       ; 0049c58a | g_ClipBuffer3Vertices[1].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0049c58d | g_ClippedTriangleBuffer[3].vertex2.x
    INC dword ptr [0x02cee8dc]          ; 0049c590 | g_ClipBuffer4VertexCount
        ;   Label: LAB_0049c590
    MOV EDX,dword ptr [0x02cee818]      ; 0049c596 | g_ClipBuffer3VertexCount
        ;   Label: caseD_3
    INC ESI                             ; 0049c59c
    ADD EBX,0xc                         ; 0049c59d | g_ClipBuffer3Vertices[1].x
    CMP ESI,EDX                         ; 0049c5a0
    JL 0x0049c52a                       ; 0049c5a2
        ;   XREF to: 0049c52a (CONDITIONAL_JUMP)  ; LAB_0049c52a
    MOV ECX,dword ptr [0x02cee8dc]      ; 0049c5a4 | g_ClipBuffer4VertexCount
        ;   Label: LAB_0049c5a4
    CMP ECX,0x3                         ; 0049c5aa
    JL 0x0049c6fd                       ; 0049c5ad
        ;   XREF to: 0049c6fd (CONDITIONAL_JUMP)  ; LAB_0049c6fd
    MOV EDX,dword ptr [EBP + 0x18]      ; 0049c5b3
    MOV EDX,dword ptr [EDX + 0x8]       ; 0049c5b6
    XOR EBX,EBX                         ; 0049c5b9
    MOV dword ptr [ESP + 0xc],EDX       ; 0049c5bb
    TEST ECX,ECX                        ; 0049c5bf
    JLE 0x0049c64a                      ; 0049c5c1
        ;   XREF to: 0049c64a (CONDITIONAL_JUMP)  ; LAB_0049c64a
    MOV ESI,0x2cee8e0                   ; 0049c5c7 | g_ClipBuffer4Vertices
    MOV EDI,dword ptr [0x02cee8dc]      ; 0049c5cc | g_ClipBuffer4VertexCount
        ;   Label: LAB_0049c5cc
    LEA ECX,[EBX + 0x1]                 ; 0049c5d2
    CMP ECX,EDI                         ; 0049c5d5
    JNZ 0x0049c5db                      ; 0049c5d7
        ;   XREF to: 0049c5db (CONDITIONAL_JUMP)  ; LAB_0049c5db
    XOR ECX,EDI                         ; 0049c5d9
    IMUL ECX,ECX,0xc                    ; 0049c5db
        ;   Label: LAB_0049c5db
    FLD float ptr [ESI + 0x8]           ; 0049c5de | g_ClipBuffer4Vertices[0].z | g_ClipBuffer4Vertices[1].z
    MOV EDI,0x2cee8e0                   ; 0049c5e1 | g_ClipBuffer4Vertices
    MOV EDX,ESI                         ; 0049c5e6 | g_ClipBuffer4Vertices[1].x
    ADD EDI,ECX                         ; 0049c5e8
    XOR ECX,ECX                         ; 0049c5ea
    FCOMP float ptr [ESP + 0xc]         ; 0049c5ec
    FNSTSW AX                           ; 0049c5f0
    SAHF                                ; 0049c5f2
    JNC 0x0049c5fa                      ; 0049c5f3
        ;   XREF to: 0049c5fa (CONDITIONAL_JUMP)  ; LAB_0049c5fa
    MOV ECX,0x1                         ; 0049c5f5
    FLD float ptr [EDI + 0x8]           ; 0049c5fa | g_ClipBuffer4Vertices[1].z | g_ClippedTriangleBuffer[4].vertex1.y
        ;   Label: LAB_0049c5fa
    FCOMP float ptr [ESP + 0xc]         ; 0049c5fd
    FNSTSW AX                           ; 0049c601
    SAHF                                ; 0049c603
    JNC 0x0049c609                      ; 0049c604
        ;   XREF to: 0049c609 (CONDITIONAL_JUMP)  ; LAB_0049c609
    OR CL,0x2                           ; 0049c606
    CMP ECX,0x3                         ; 0049c609
        ;   Label: LAB_0049c609
    JA 0x0049c63c                       ; 0049c60c
        ;   XREF to: 0049c63c (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x49c0f4]  ; 0049c60e | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x02cee9a0],0xc ; 0049c615 | g_ClipBuffer5VertexCount
        ;   Label: caseD_0
    ADD ECX,0x2cee9a4                   ; 0049c61c | g_ClipBuffer5Vertices
    CMP ECX,EDX                         ; 0049c622
    JZ 0x0049c636                       ; 0049c624
        ;   XREF to: 0049c636 (CONDITIONAL_JUMP)  ; LAB_0049c636
    MOV EAX,dword ptr [EDX]             ; 0049c626 | g_ClipBuffer4Vertices[1].x
    MOV dword ptr [ECX],EAX             ; 0049c628 | g_ClippedTriangleBuffer[6].vertex3.z
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049c62a | g_ClipBuffer4Vertices[1].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0049c62d | g_ClippedTriangleBuffer[6].normal.x
    MOV EAX,dword ptr [EDX + 0x8]       ; 0049c630 | g_ClipBuffer4Vertices[1].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0049c633 | g_ClippedTriangleBuffer[6].normal.y
    INC dword ptr [0x02cee9a0]          ; 0049c636 | g_ClipBuffer5VertexCount
        ;   Label: LAB_0049c636
    MOV EDX,dword ptr [0x02cee8dc]      ; 0049c63c | g_ClipBuffer4VertexCount
        ;   Label: caseD_3
    INC EBX                             ; 0049c642
    ADD ESI,0xc                         ; 0049c643
    CMP EBX,EDX                         ; 0049c646
    JL 0x0049c5cc                       ; 0049c648
        ;   XREF to: 0049c5cc (CONDITIONAL_JUMP)  ; LAB_0049c5cc
    MOV ECX,dword ptr [0x02cee9a0]      ; 0049c64a | g_ClipBuffer5VertexCount
        ;   Label: LAB_0049c64a
    CMP ECX,0x3                         ; 0049c650
    JL 0x0049c6fd                       ; 0049c653
        ;   XREF to: 0049c6fd (CONDITIONAL_JUMP)  ; LAB_0049c6fd
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0049c659
    MOV EDX,dword ptr [EDX + 0x8]       ; 0049c65c
    XOR ESI,ESI                         ; 0049c65f
    MOV dword ptr [ESP + 0x4],EDX       ; 0049c661
    TEST ECX,ECX                        ; 0049c665
    JLE 0x0049c6f0                      ; 0049c667
        ;   XREF to: 0049c6f0 (CONDITIONAL_JUMP)  ; LAB_0049c6f0
    MOV EBX,0x2cee9a4                   ; 0049c66d | g_ClipBuffer5Vertices
    MOV EDI,dword ptr [0x02cee9a0]      ; 0049c672 | g_ClipBuffer5VertexCount
        ;   Label: LAB_0049c672
    LEA ECX,[ESI + 0x1]                 ; 0049c678
    CMP ECX,EDI                         ; 0049c67b
    JNZ 0x0049c681                      ; 0049c67d
        ;   XREF to: 0049c681 (CONDITIONAL_JUMP)  ; LAB_0049c681
    XOR ECX,EDI                         ; 0049c67f
    IMUL ECX,ECX,0xc                    ; 0049c681
        ;   Label: LAB_0049c681
    FLD float ptr [EBX + 0x8]           ; 0049c684 | g_ClipBuffer5Vertices[0].z | g_ClipBuffer5Vertices[1].z
    MOV EDI,0x2cee9a4                   ; 0049c687 | g_ClipBuffer5Vertices
    MOV EDX,EBX                         ; 0049c68c | g_ClipBuffer5Vertices[1].x
    ADD EDI,ECX                         ; 0049c68e
    XOR ECX,ECX                         ; 0049c690
    FCOMP float ptr [ESP + 0x4]         ; 0049c692
    FNSTSW AX                           ; 0049c696
    SAHF                                ; 0049c698
    JBE 0x0049c6a0                      ; 0049c699
        ;   XREF to: 0049c6a0 (CONDITIONAL_JUMP)  ; LAB_0049c6a0
    MOV ECX,0x1                         ; 0049c69b
    FLD float ptr [EDI + 0x8]           ; 0049c6a0 | g_ClipBuffer5Vertices[1].z | g_ClippedTriangleBuffer[7].vertex3.z
        ;   Label: LAB_0049c6a0
    FCOMP float ptr [ESP + 0x4]         ; 0049c6a3
    FNSTSW AX                           ; 0049c6a7
    SAHF                                ; 0049c6a9
    JBE 0x0049c6af                      ; 0049c6aa
        ;   XREF to: 0049c6af (CONDITIONAL_JUMP)  ; LAB_0049c6af
    OR CL,0x2                           ; 0049c6ac
    CMP ECX,0x3                         ; 0049c6af
        ;   Label: LAB_0049c6af
    JA 0x0049c6e2                       ; 0049c6b2
        ;   XREF to: 0049c6e2 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x49c104]  ; 0049c6b4 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x02ceea64],0xc ; 0049c6bb | g_ClipOutputVertexCount
        ;   Label: caseD_0
    ADD ECX,0x2ceea68                   ; 0049c6c2 | g_ClipOutputVertices
    CMP ECX,EDX                         ; 0049c6c8
    JZ 0x0049c6dc                       ; 0049c6ca
        ;   XREF to: 0049c6dc (CONDITIONAL_JUMP)  ; LAB_0049c6dc
    MOV EAX,dword ptr [EDX]             ; 0049c6cc | g_ClipBuffer5Vertices[1].x
    MOV dword ptr [ECX],EAX             ; 0049c6ce | g_MessageFormatBuffer+0x2c
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049c6d0 | g_ClipBuffer5Vertices[1].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0049c6d3 | g_MessageFormatBuffer+0x30
    MOV EAX,dword ptr [EDX + 0x8]       ; 0049c6d6 | g_ClipBuffer5Vertices[1].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0049c6d9 | g_MessageFormatBuffer+0x34
    INC dword ptr [0x02ceea64]          ; 0049c6dc | g_ClipOutputVertexCount
        ;   Label: LAB_0049c6dc
    MOV EDX,dword ptr [0x02cee9a0]      ; 0049c6e2 | g_ClipBuffer5VertexCount
        ;   Label: caseD_3
    INC ESI                             ; 0049c6e8
    ADD EBX,0xc                         ; 0049c6e9 | g_ClipBuffer5Vertices[1].x
    CMP ESI,EDX                         ; 0049c6ec
    JL 0x0049c672                       ; 0049c6ee
        ;   XREF to: 0049c672 (CONDITIONAL_JUMP)  ; LAB_0049c672
    CMP dword ptr [0x02ceea64],0x3      ; 0049c6f0 | g_ClipOutputVertexCount
        ;   Label: LAB_0049c6f0
    JGE 0x0049c2c0                      ; 0049c6f7
        ;   XREF to: 0049c2c0 (CONDITIONAL_JUMP)  ; LAB_0049c2c0
    XOR ECX,ECX                         ; 0049c6fd
        ;   Label: LAB_0049c6fd
    MOV EAX,ECX                         ; 0049c6ff
    MOV ESP,EBP                         ; 0049c701
    POP EBP                             ; 0049c703
    POP EDI                             ; 0049c704
    POP ESI                             ; 0049c705
    POP EBX                             ; 0049c706
    RET                                 ; 0049c707
    IMUL ECX,dword ptr [0x02cee690],0xc ; 0049c708 | g_ClipBuffer1VertexCount
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x18]          ; 0049c70f
    SUB ESP,0x8                         ; 0049c713
    FCHS                                ; 0049c716
    FSTP double ptr [ESP]               ; 0049c718
    PUSH 0x0                            ; 0049c71b
    PUSH 0x0                            ; 0049c71d
    PUSH 0x3ff00000                     ; 0049c71f
    PUSH 0x0                            ; 0049c724
    PUSH 0x0                            ; 0049c726
    PUSH 0x0                            ; 0049c728
    ADD ECX,0x2cee694                   ; 0049c72a | g_ClipBuffer4Vertices[14].x | g_ClipBuffer1Vertices
    PUSH ECX                            ; 0049c730 | g_ClipBuffer4Vertices[14].x
    PUSH EDX                            ; 0049c731 | g_ClipInputVertices[1].x
    PUSH EDI                            ; 0049c732 | g_ClipInputVertices[1].x
    CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0 ; 0049c733
        ;   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0049b6c0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x02cee690]      ; 0049c738 | g_ClipBuffer1VertexCount
    INC EDX                             ; 0049c73e
    ADD ESP,0x2c                        ; 0049c73f
    MOV dword ptr [0x02cee690],EDX      ; 0049c742 | g_ClipBuffer1VertexCount
    JMP 0x0049c3ae                      ; 0049c748
        ;   XREF to: 0049c3ae (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x02cee690],0xc ; 0049c74d | g_ClipBuffer1VertexCount
        ;   Label: caseD_2
    ADD ECX,0x2cee694                   ; 0049c754 | g_ClipBuffer1Vertices
    CMP ECX,EDX                         ; 0049c75a
    JZ 0x0049c76e                       ; 0049c75c
        ;   XREF to: 0049c76e (CONDITIONAL_JUMP)  ; LAB_0049c76e
    MOV EAX,dword ptr [EDX]             ; 0049c75e | g_ClipInputVertices[1].x
    MOV dword ptr [ECX],EAX             ; 0049c760 | g_ClipBuffer4Vertices[14].x
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049c762 | g_ClipInputVertices[1].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0049c765 | g_ClipBuffer4Vertices[14].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 0049c768 | g_ClipInputVertices[1].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0049c76b | g_ClipBuffer4Vertices[14].z
    MOV ECX,dword ptr [0x02cee690]      ; 0049c76e | g_ClipBuffer1VertexCount
        ;   Label: LAB_0049c76e
    INC ECX                             ; 0049c774
    MOV dword ptr [0x02cee690],ECX      ; 0049c775 | g_ClipBuffer1VertexCount
    IMUL ECX,ECX,0xc                    ; 0049c77b
    FLD float ptr [ESP + 0x18]          ; 0049c77e
    SUB ESP,0x8                         ; 0049c782
    FCHS                                ; 0049c785
    FSTP double ptr [ESP]               ; 0049c787
    PUSH 0x0                            ; 0049c78a
    PUSH 0x0                            ; 0049c78c
    PUSH 0x3ff00000                     ; 0049c78e
    PUSH 0x0                            ; 0049c793
    PUSH 0x0                            ; 0049c795
    PUSH 0x0                            ; 0049c797
    ADD ECX,0x2cee694                   ; 0049c799 | g_ClipBuffer4Vertices[15].x | g_ClipBuffer1Vertices
    PUSH ECX                            ; 0049c79f | g_ClipBuffer4Vertices[15].x
    PUSH EDI                            ; 0049c7a0 | g_ClipInputVertices[1].x
    PUSH EDX                            ; 0049c7a1 | g_ClipInputVertices[1].x
    CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0 ; 0049c7a2
        ;   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0049b6c0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x02cee690]      ; 0049c7a7 | g_ClipBuffer1VertexCount
    INC EDX                             ; 0049c7ad
    ADD ESP,0x2c                        ; 0049c7ae
    MOV dword ptr [0x02cee690],EDX      ; 0049c7b1 | g_ClipBuffer1VertexCount
    JMP 0x0049c3ae                      ; 0049c7b7
        ;   XREF to: 0049c3ae (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x02cee754],0xc ; 0049c7bc | g_ClipBuffer2VertexCount
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x8]           ; 0049c7c3
    SUB ESP,0x8                         ; 0049c7c7
    FSTP double ptr [ESP]               ; 0049c7ca
    PUSH 0x0                            ; 0049c7cd
    PUSH 0x0                            ; 0049c7cf
    PUSH 0xbff00000                     ; 0049c7d1
    PUSH 0x0                            ; 0049c7d6
    PUSH 0x0                            ; 0049c7d8
    PUSH 0x0                            ; 0049c7da
    ADD ECX,0x2cee758                   ; 0049c7dc | g_ClipBuffer5Vertices[14].x | g_ClipBuffer2Vertices
    PUSH ECX                            ; 0049c7e2 | g_ClipBuffer5Vertices[14].x
    PUSH EDX                            ; 0049c7e3 | g_ClipBuffer1Vertices[1].x
    PUSH EDI                            ; 0049c7e4 | g_ClipBuffer5Vertices[1].z
    CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0 ; 0049c7e5
        ;   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0049b6c0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x02cee754]      ; 0049c7ea | g_ClipBuffer2VertexCount
    INC EDX                             ; 0049c7f0
    ADD ESP,0x2c                        ; 0049c7f1
    MOV dword ptr [0x02cee754],EDX      ; 0049c7f4 | g_ClipBuffer2VertexCount
    JMP 0x0049c453                      ; 0049c7fa
        ;   XREF to: 0049c453 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x02cee754],0xc ; 0049c7ff | g_ClipBuffer2VertexCount
        ;   Label: caseD_2
    ADD ECX,0x2cee758                   ; 0049c806 | g_ClipBuffer2Vertices
    CMP ECX,EDX                         ; 0049c80c
    JZ 0x0049c820                       ; 0049c80e
        ;   XREF to: 0049c820 (CONDITIONAL_JUMP)  ; LAB_0049c820
    MOV EAX,dword ptr [EDX]             ; 0049c810 | g_ClipBuffer1Vertices[1].x
    MOV dword ptr [ECX],EAX             ; 0049c812 | g_ClipBuffer5Vertices[14].x
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049c814 | g_ClipBuffer1Vertices[1].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0049c817 | g_ClipBuffer5Vertices[14].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 0049c81a | g_ClipBuffer1Vertices[1].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0049c81d | g_ClipBuffer5Vertices[14].z
    MOV ECX,dword ptr [0x02cee754]      ; 0049c820 | g_ClipBuffer2VertexCount
        ;   Label: LAB_0049c820
    INC ECX                             ; 0049c826
    MOV dword ptr [0x02cee754],ECX      ; 0049c827 | g_ClipBuffer2VertexCount
    IMUL ECX,ECX,0xc                    ; 0049c82d
    FLD float ptr [ESP + 0x8]           ; 0049c830
    SUB ESP,0x8                         ; 0049c834
    FSTP double ptr [ESP]               ; 0049c837
    PUSH 0x0                            ; 0049c83a
    PUSH 0x0                            ; 0049c83c
    PUSH 0xbff00000                     ; 0049c83e
    PUSH 0x0                            ; 0049c843
    PUSH 0x0                            ; 0049c845
    PUSH 0x0                            ; 0049c847
    ADD ECX,0x2cee758                   ; 0049c849 | g_ClipBuffer5Vertices[15].x | g_ClipBuffer2Vertices
    PUSH ECX                            ; 0049c84f | g_ClipBuffer5Vertices[15].x
    PUSH EDI                            ; 0049c850 | g_ClipBuffer5Vertices[1].z
    PUSH EDX                            ; 0049c851 | g_ClipBuffer1Vertices[1].x
    CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0 ; 0049c852
        ;   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0049b6c0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x02cee754]      ; 0049c857 | g_ClipBuffer2VertexCount
    INC EDX                             ; 0049c85d
    ADD ESP,0x2c                        ; 0049c85e
    MOV dword ptr [0x02cee754],EDX      ; 0049c861 | g_ClipBuffer2VertexCount
    JMP 0x0049c453                      ; 0049c867
        ;   XREF to: 0049c453 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x02cee818],0xc ; 0049c86c | g_ClipBuffer3VertexCount
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x14]          ; 0049c873
    SUB ESP,0x8                         ; 0049c877
    FCHS                                ; 0049c87a
    FSTP double ptr [ESP]               ; 0049c87c
    PUSH 0x0                            ; 0049c87f
    PUSH 0x0                            ; 0049c881
    PUSH 0x0                            ; 0049c883
    PUSH 0x0                            ; 0049c885
    PUSH 0x3ff00000                     ; 0049c887
    PUSH 0x0                            ; 0049c88c
    ADD ECX,0x2cee81c                   ; 0049c88e | g_ClipOutputVertices[14].x | g_ClipBuffer3Vertices
    PUSH ECX                            ; 0049c894 | g_ClipOutputVertices[14].x
    PUSH EDX                            ; 0049c895 | g_ClipBuffer2Vertices[1].x
    PUSH EDI                            ; 0049c896 | g_ClipOutputVertices[1].z
    CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0 ; 0049c897
        ;   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0049b6c0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x02cee818]      ; 0049c89c | g_ClipBuffer3VertexCount
    INC EDX                             ; 0049c8a2
    ADD ESP,0x2c                        ; 0049c8a3
    MOV dword ptr [0x02cee818],EDX      ; 0049c8a6 | g_ClipBuffer3VertexCount
    JMP 0x0049c4f6                      ; 0049c8ac
        ;   XREF to: 0049c4f6 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x02cee818],0xc ; 0049c8b1 | g_ClipBuffer3VertexCount
        ;   Label: caseD_2
    ADD ECX,0x2cee81c                   ; 0049c8b8 | g_ClipBuffer3Vertices
    CMP ECX,EDX                         ; 0049c8be
    JZ 0x0049c8d2                       ; 0049c8c0
        ;   XREF to: 0049c8d2 (CONDITIONAL_JUMP)  ; LAB_0049c8d2
    MOV EAX,dword ptr [EDX]             ; 0049c8c2 | g_ClipBuffer2Vertices[1].x
    MOV dword ptr [ECX],EAX             ; 0049c8c4 | g_ClipOutputVertices[14].x
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049c8c6 | g_ClipBuffer2Vertices[1].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0049c8c9 | g_ClipOutputVertices[14].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 0049c8cc | g_ClipBuffer2Vertices[1].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0049c8cf | g_ClipOutputVertices[14].z
    MOV ECX,dword ptr [0x02cee818]      ; 0049c8d2 | g_ClipBuffer3VertexCount
        ;   Label: LAB_0049c8d2
    INC ECX                             ; 0049c8d8
    MOV dword ptr [0x02cee818],ECX      ; 0049c8d9 | g_ClipBuffer3VertexCount
    IMUL ECX,ECX,0xc                    ; 0049c8df
    FLD float ptr [ESP + 0x14]          ; 0049c8e2
    SUB ESP,0x8                         ; 0049c8e6
    FCHS                                ; 0049c8e9
    FSTP double ptr [ESP]               ; 0049c8eb
    PUSH 0x0                            ; 0049c8ee
    PUSH 0x0                            ; 0049c8f0
    PUSH 0x0                            ; 0049c8f2
    PUSH 0x0                            ; 0049c8f4
    PUSH 0x3ff00000                     ; 0049c8f6
    PUSH 0x0                            ; 0049c8fb
    ADD ECX,0x2cee81c                   ; 0049c8fd | g_ClipOutputVertices[15].x | g_ClipBuffer3Vertices
    PUSH ECX                            ; 0049c903 | g_ClipOutputVertices[15].x
    PUSH EDI                            ; 0049c904 | g_ClipOutputVertices[1].z
    PUSH EDX                            ; 0049c905 | g_ClipBuffer2Vertices[1].x
    CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0 ; 0049c906
        ;   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0049b6c0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x02cee818]      ; 0049c90b | g_ClipBuffer3VertexCount
    INC EDX                             ; 0049c911
    ADD ESP,0x2c                        ; 0049c912
    MOV dword ptr [0x02cee818],EDX      ; 0049c915 | g_ClipBuffer3VertexCount
    JMP 0x0049c4f6                      ; 0049c91b
        ;   XREF to: 0049c4f6 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x02cee8dc],0xc ; 0049c920 | g_ClipBuffer4VertexCount
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 0049c927
    SUB ESP,0x8                         ; 0049c92a
    FSTP double ptr [ESP]               ; 0049c92d
    PUSH 0x0                            ; 0049c930
    PUSH 0x0                            ; 0049c932
    PUSH 0x0                            ; 0049c934
    PUSH 0x0                            ; 0049c936
    PUSH 0xbff00000                     ; 0049c938
    PUSH 0x0                            ; 0049c93d
    ADD ECX,0x2cee8e0                   ; 0049c93f | g_ClippedTriangleBuffer[3].vertex1.y | g_ClipBuffer4Vertices
    PUSH ECX                            ; 0049c945 | g_ClippedTriangleBuffer[3].vertex1.y
    PUSH EDX                            ; 0049c946 | g_ClipBuffer3Vertices[1].x
    PUSH EDI                            ; 0049c947 | g_ClippedTriangleBuffer[0].vertex3.x
    CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0 ; 0049c948
        ;   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0049b6c0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x02cee8dc]      ; 0049c94d | g_ClipBuffer4VertexCount
    INC EDX                             ; 0049c953
    ADD ESP,0x2c                        ; 0049c954
    MOV dword ptr [0x02cee8dc],EDX      ; 0049c957 | g_ClipBuffer4VertexCount
    JMP 0x0049c596                      ; 0049c95d
        ;   XREF to: 0049c596 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x02cee8dc],0xc ; 0049c962 | g_ClipBuffer4VertexCount
        ;   Label: caseD_2
    ADD ECX,0x2cee8e0                   ; 0049c969 | g_ClipBuffer4Vertices
    CMP ECX,EDX                         ; 0049c96f
    JZ 0x0049c983                       ; 0049c971
        ;   XREF to: 0049c983 (CONDITIONAL_JUMP)  ; LAB_0049c983
    MOV EAX,dword ptr [EDX]             ; 0049c973 | g_ClipBuffer3Vertices[1].x
    MOV dword ptr [ECX],EAX             ; 0049c975 | g_ClippedTriangleBuffer[3].vertex1.y
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049c977 | g_ClipBuffer3Vertices[1].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0049c97a | g_ClippedTriangleBuffer[3].vertex1.z
    MOV EAX,dword ptr [EDX + 0x8]       ; 0049c97d | g_ClipBuffer3Vertices[1].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0049c980 | g_ClippedTriangleBuffer[3].vertex2.x
    MOV ECX,dword ptr [0x02cee8dc]      ; 0049c983 | g_ClipBuffer4VertexCount
        ;   Label: LAB_0049c983
    INC ECX                             ; 0049c989
    MOV dword ptr [0x02cee8dc],ECX      ; 0049c98a | g_ClipBuffer4VertexCount
    IMUL ECX,ECX,0xc                    ; 0049c990
    FLD float ptr [ESP]                 ; 0049c993
    SUB ESP,0x8                         ; 0049c996
    FSTP double ptr [ESP]               ; 0049c999
    PUSH 0x0                            ; 0049c99c
    PUSH 0x0                            ; 0049c99e
    PUSH 0x0                            ; 0049c9a0
    PUSH 0x0                            ; 0049c9a2
    PUSH 0xbff00000                     ; 0049c9a4
    PUSH 0x0                            ; 0049c9a9
    ADD ECX,0x2cee8e0                   ; 0049c9ab | g_ClippedTriangleBuffer[3].vertex2.y | g_ClipBuffer4Vertices
    PUSH ECX                            ; 0049c9b1 | g_ClippedTriangleBuffer[3].vertex2.y
    PUSH EDI                            ; 0049c9b2 | g_ClippedTriangleBuffer[0].vertex3.x
    PUSH EDX                            ; 0049c9b3 | g_ClipBuffer3Vertices[1].x
    CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0 ; 0049c9b4
        ;   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0049b6c0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x02cee8dc]      ; 0049c9b9 | g_ClipBuffer4VertexCount
    INC EDX                             ; 0049c9bf
    ADD ESP,0x2c                        ; 0049c9c0
    MOV dword ptr [0x02cee8dc],EDX      ; 0049c9c3 | g_ClipBuffer4VertexCount
    JMP 0x0049c596                      ; 0049c9c9
        ;   XREF to: 0049c596 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x02cee9a0],0xc ; 0049c9ce | g_ClipBuffer5VertexCount
        ;   Label: caseD_1
    FLD float ptr [ESP + 0xc]           ; 0049c9d5
    SUB ESP,0x8                         ; 0049c9d9
    FSTP double ptr [ESP]               ; 0049c9dc
    PUSH 0xbff00000                     ; 0049c9df
    PUSH 0x0                            ; 0049c9e4
    PUSH 0x0                            ; 0049c9e6
    PUSH 0x0                            ; 0049c9e8
    PUSH 0x0                            ; 0049c9ea
    PUSH 0x0                            ; 0049c9ec
    ADD ECX,0x2cee9a4                   ; 0049c9ee | g_ClippedTriangleBuffer[6].vertex3.z | g_ClipBuffer5Vertices
    PUSH ECX                            ; 0049c9f4 | g_ClippedTriangleBuffer[6].vertex3.z
    PUSH EDX                            ; 0049c9f5 | g_ClipBuffer4Vertices[1].x
    PUSH EDI                            ; 0049c9f6 | g_ClippedTriangleBuffer[3].area
    CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0 ; 0049c9f7
        ;   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0049b6c0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x02cee9a0]      ; 0049c9fc | g_ClipBuffer5VertexCount
    INC EDX                             ; 0049ca02
    ADD ESP,0x2c                        ; 0049ca03
    MOV dword ptr [0x02cee9a0],EDX      ; 0049ca06 | g_ClipBuffer5VertexCount
    JMP 0x0049c63c                      ; 0049ca0c
        ;   XREF to: 0049c63c (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x02cee9a0],0xc ; 0049ca11 | g_ClipBuffer5VertexCount
        ;   Label: caseD_2
    ADD ECX,0x2cee9a4                   ; 0049ca18 | g_ClipBuffer5Vertices
    CMP ECX,EDX                         ; 0049ca1e
    JZ 0x0049ca32                       ; 0049ca20
        ;   XREF to: 0049ca32 (CONDITIONAL_JUMP)  ; LAB_0049ca32
    MOV EAX,dword ptr [EDX]             ; 0049ca22 | g_ClipBuffer4Vertices[1].x
    MOV dword ptr [ECX],EAX             ; 0049ca24 | g_ClippedTriangleBuffer[6].vertex3.z
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049ca26 | g_ClipBuffer4Vertices[1].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0049ca29 | g_ClippedTriangleBuffer[6].normal.x
    MOV EAX,dword ptr [EDX + 0x8]       ; 0049ca2c | g_ClipBuffer4Vertices[1].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0049ca2f | g_ClippedTriangleBuffer[6].normal.y
    MOV ECX,dword ptr [0x02cee9a0]      ; 0049ca32 | g_ClipBuffer5VertexCount
        ;   Label: LAB_0049ca32
    INC ECX                             ; 0049ca38
    MOV dword ptr [0x02cee9a0],ECX      ; 0049ca39 | g_ClipBuffer5VertexCount
    IMUL ECX,ECX,0xc                    ; 0049ca3f
    FLD float ptr [ESP + 0xc]           ; 0049ca42
    SUB ESP,0x8                         ; 0049ca46
    FSTP double ptr [ESP]               ; 0049ca49
    PUSH 0xbff00000                     ; 0049ca4c
    PUSH 0x0                            ; 0049ca51
    PUSH 0x0                            ; 0049ca53
    PUSH 0x0                            ; 0049ca55
    PUSH 0x0                            ; 0049ca57
    PUSH 0x0                            ; 0049ca59
    ADD ECX,0x2cee9a4                   ; 0049ca5b | g_ClippedTriangleBuffer[6].normal.z | g_ClipBuffer5Vertices
    PUSH ECX                            ; 0049ca61 | g_ClippedTriangleBuffer[6].normal.z
    PUSH EDI                            ; 0049ca62 | g_ClippedTriangleBuffer[3].area
    PUSH EDX                            ; 0049ca63 | g_ClipBuffer4Vertices[1].x
    CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0 ; 0049ca64
        ;   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0049b6c0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x02cee9a0]      ; 0049ca69 | g_ClipBuffer5VertexCount
    INC EDX                             ; 0049ca6f
    ADD ESP,0x2c                        ; 0049ca70
    MOV dword ptr [0x02cee9a0],EDX      ; 0049ca73 | g_ClipBuffer5VertexCount
    JMP 0x0049c63c                      ; 0049ca79
        ;   XREF to: 0049c63c (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x02ceea64],0xc ; 0049ca7e | g_ClipOutputVertexCount
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x4]           ; 0049ca85
    SUB ESP,0x8                         ; 0049ca89
    FSTP double ptr [ESP]               ; 0049ca8c
    PUSH 0xbff00000                     ; 0049ca8f
    PUSH 0x0                            ; 0049ca94
    PUSH 0x0                            ; 0049ca96
    PUSH 0x0                            ; 0049ca98
    PUSH 0x0                            ; 0049ca9a
    PUSH 0x0                            ; 0049ca9c
    ADD ECX,0x2ceea68                   ; 0049ca9e | g_MessageFormatBuffer+0x2c | g_ClipOutputVertices
    PUSH ECX                            ; 0049caa4 | g_MessageFormatBuffer+0x2c
    PUSH EDX                            ; 0049caa5 | g_ClipBuffer5Vertices[1].x
    PUSH EDI                            ; 0049caa6 | g_ClippedTriangleBuffer[7].vertex3.x
    CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0 ; 0049caa7
        ;   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0049b6c0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x02ceea64]      ; 0049caac | g_ClipOutputVertexCount
    INC EDX                             ; 0049cab2
    ADD ESP,0x2c                        ; 0049cab3
    MOV dword ptr [0x02ceea64],EDX      ; 0049cab6 | g_ClipOutputVertexCount
    JMP 0x0049c6e2                      ; 0049cabc
        ;   XREF to: 0049c6e2 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x02ceea64],0xc ; 0049cac1 | g_ClipOutputVertexCount
        ;   Label: caseD_2
    ADD ECX,0x2ceea68                   ; 0049cac8 | g_ClipOutputVertices
    CMP ECX,EDX                         ; 0049cace
    JZ 0x0049cae2                       ; 0049cad0
        ;   XREF to: 0049cae2 (CONDITIONAL_JUMP)  ; LAB_0049cae2
    MOV EAX,dword ptr [EDX]             ; 0049cad2 | g_ClipBuffer5Vertices[1].x
    MOV dword ptr [ECX],EAX             ; 0049cad4 | g_MessageFormatBuffer+0x2c
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049cad6 | g_ClipBuffer5Vertices[1].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0049cad9 | g_MessageFormatBuffer+0x30
    MOV EAX,dword ptr [EDX + 0x8]       ; 0049cadc | g_ClipBuffer5Vertices[1].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0049cadf | g_MessageFormatBuffer+0x34
    MOV ECX,dword ptr [0x02ceea64]      ; 0049cae2 | g_ClipOutputVertexCount
        ;   Label: LAB_0049cae2
    INC ECX                             ; 0049cae8
    MOV dword ptr [0x02ceea64],ECX      ; 0049cae9 | g_ClipOutputVertexCount
    IMUL ECX,ECX,0xc                    ; 0049caef
    FLD float ptr [ESP + 0x4]           ; 0049caf2
    SUB ESP,0x8                         ; 0049caf6
    FSTP double ptr [ESP]               ; 0049caf9
    PUSH 0xbff00000                     ; 0049cafc
    PUSH 0x0                            ; 0049cb01
    PUSH 0x0                            ; 0049cb03
    PUSH 0x0                            ; 0049cb05
    PUSH 0x0                            ; 0049cb07
    PUSH 0x0                            ; 0049cb09
    ADD ECX,0x2ceea68                   ; 0049cb0b | g_MessageFormatBuffer+0x38 | g_ClipOutputVertices
    PUSH ECX                            ; 0049cb11 | g_MessageFormatBuffer+0x38
    PUSH EDI                            ; 0049cb12 | g_ClippedTriangleBuffer[7].vertex3.x
    PUSH EDX                            ; 0049cb13 | g_ClipBuffer5Vertices[1].x
    CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0 ; 0049cb14
        ;   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0049b6c0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x02ceea64]      ; 0049cb19 | g_ClipOutputVertexCount
    INC EDX                             ; 0049cb1f
    ADD ESP,0x2c                        ; 0049cb20
    MOV dword ptr [0x02ceea64],EDX      ; 0049cb23 | g_ClipOutputVertexCount
    JMP 0x0049c6e2                      ; 0049cb29
        ;   XREF to: 0049c6e2 (UNCONDITIONAL_JUMP)  ; caseD_3

