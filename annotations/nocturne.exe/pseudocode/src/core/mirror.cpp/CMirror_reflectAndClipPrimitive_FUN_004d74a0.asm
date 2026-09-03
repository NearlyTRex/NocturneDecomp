; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_004d74a0(CMirror *this_ptr,SMRGLHeaderPrimitive *primitive)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   primitive
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_mirror.cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_004d76e0 at 004d76ea
;   core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_004d7760 at 004d77be
;   core_mirror.cpp_CMirror_renderReflectedPrimitive_FUN_004d7720 at 004d772a
;
; Referenced Globals:
;   float FLOAT_005a0880 = 256
;   float FLOAT_005a0888 = 0.00390625
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01cc9120
;   CVector3f[32] g_CVector3f_ARRAY_01cc9124
;   undefined4 g_CVector3f_ARRAY_01cc9124[0].y
;   undefined4 g_CVector3f_ARRAY_01cc9124[0].z
;   undefined4 g_CVector3f_ARRAY_01cc9124[1].x
;   undefined4 g_CVector3f_ARRAY_01cc9124[1].y
;   undefined4 g_CVector3f_ARRAY_01cc9124[1].z
;   undefined4 DAT_01cc92a4
;   CVector3f[32] g_CVector3f_ARRAY_01cc92a8
;   undefined4 g_CVector3f_ARRAY_01cc92a8[0].y
;   undefined4 g_CVector3f_ARRAY_01cc92a8[0].z
;   ... and 3 more
;
; Called Functions:
;   core_mirror.cpp_clipPolygonAgainstPlane_FUN_004d6420
;   engine_matrix.c_projectCachedPoint_FUN_004cd240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d74a0
        ;   Label: core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_004d74a0
    PUSH ESI                            ; 004d74a1
    PUSH EDI                            ; 004d74a2
    PUSH EBP                            ; 004d74a3
    SUB ESP,0x4                         ; 004d74a4
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004d74a7
    MOV EAX,dword ptr [EDI + 0x4]       ; 004d74ab
    XOR EBP,EBP                         ; 004d74ae
    MOV [0x01cc9120],EAX                ; 004d74b0 | DAT_01cc9120
    TEST EAX,EAX                        ; 004d74b5
    JLE 0x004d7510                      ; 004d74b7
        ;   XREF to: 004d7510 (CONDITIONAL_JUMP)  ; LAB_004d7510
    MOV EDX,0x1cc9124                   ; 004d74b9
    MOV ESI,EDI                         ; 004d74be
    MOV EBX,dword ptr [ESI + 0x18]      ; 004d74c0
        ;   Label: LAB_004d74c0
    IMUL EBX,EBX,0x30                   ; 004d74c3
    MOV EAX,[0x005ae704]                ; 004d74c6 | g_CDemonRenderer_PTR_005ae704
    MOV EAX,dword ptr [EAX]             ; 004d74cb | DAT_01b4d738
    ADD ESI,0x4                         ; 004d74cd
    ADD EAX,EBX                         ; 004d74d0
    MOV EBX,EDX                         ; 004d74d2
    INC EBP                             ; 004d74d4
    FILD dword ptr [EAX]                ; 004d74d5
    FMUL float ptr [0x005a0888]         ; 004d74d7 | FLOAT_005a0888
    FSTP float ptr [EBX]                ; 004d74dd | g_CVector3f_ARRAY_01cc9124 | g_CVector3f_ARRAY_01cc9124[1].x
    FILD dword ptr [EAX + 0x4]          ; 004d74df
    FMUL float ptr [0x005a0888]         ; 004d74e2 | FLOAT_005a0888
    FSTP float ptr [EBX + 0x4]          ; 004d74e8 | g_CVector3f_ARRAY_01cc9124[0].y | g_CVector3f_ARRAY_01cc9124[1].y
    FILD dword ptr [EAX + 0x8]          ; 004d74eb
    FMUL float ptr [0x005a0888]         ; 004d74ee | FLOAT_005a0888
    FSTP float ptr [EBX + 0x8]          ; 004d74f4 | g_CVector3f_ARRAY_01cc9124[0].z | g_CVector3f_ARRAY_01cc9124[1].z
    MOV ECX,dword ptr [EDI + 0x4]       ; 004d74f7
    ADD EDX,0xc                         ; 004d74fa
    CMP EBP,ECX                         ; 004d74fd
    JL 0x004d74c0                       ; 004d74ff
        ;   XREF to: 004d74c0 (CONDITIONAL_JUMP)  ; LAB_004d74c0
    LEA EAX,[EAX]                       ; 004d7501
    LEA EDX,[EDX]                       ; 004d7507
    LEA EAX,[EAX]                       ; 004d750d
    PUSH 0x1cc92a4                      ; 004d7510 | DAT_01cc92a4
        ;   Label: LAB_004d7510
    PUSH 0x1cc92a8                      ; 004d7515 | g_CVector3f_ARRAY_01cc92a8
    MOV EBX,dword ptr [0x01cc9120]      ; 004d751a | DAT_01cc9120
    PUSH EBX                            ; 004d7520
    MOV EAX,dword ptr [ESP + 0x24]      ; 004d7521
    PUSH 0x1cc9124                      ; 004d7525 | g_CVector3f_ARRAY_01cc9124
    ADD EAX,0x98                        ; 004d752a
    PUSH EAX                            ; 004d752f
    CALL core_mirror.cpp_clipPolygonAgainstPlane_FUN_004d6420 ; 004d7530
        ;   XREF to: 004d6420 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_clipPolygonAgainstPlane_FUN_004d6420(SClipPlane * clip_plane, CVector3f * input_vertices, int input_count, CVector3f * output_vertices, ...)
    MOV ESI,dword ptr [0x01cc92a4]      ; 004d7535 | DAT_01cc92a4
    ADD ESP,0x14                        ; 004d753b
    CMP ESI,0x3                         ; 004d753e
    JGE 0x004d754d                      ; 004d7541
        ;   XREF to: 004d754d (CONDITIONAL_JUMP)  ; LAB_004d754d
    XOR EAX,EAX                         ; 004d7543
        ;   Label: LAB_004d7543
    ADD ESP,0x4                         ; 004d7545
    POP EBP                             ; 004d7548
    POP EDI                             ; 004d7549
    POP ESI                             ; 004d754a
    POP EBX                             ; 004d754b
    RET                                 ; 004d754c
    PUSH 0x1cc9120                      ; 004d754d | DAT_01cc9120
        ;   Label: LAB_004d754d
    PUSH 0x1cc9124                      ; 004d7552 | g_CVector3f_ARRAY_01cc9124
    PUSH ESI                            ; 004d7557
    MOV EAX,dword ptr [ESP + 0x24]      ; 004d7558
    PUSH 0x1cc92a8                      ; 004d755c
    ADD EAX,0xa8                        ; 004d7561
    PUSH EAX                            ; 004d7566
    CALL core_mirror.cpp_clipPolygonAgainstPlane_FUN_004d6420 ; 004d7567
        ;   XREF to: 004d6420 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_clipPolygonAgainstPlane_FUN_004d6420(SClipPlane * clip_plane, CVector3f * input_vertices, int input_count, CVector3f * output_vertices, ...)
    MOV EAX,[0x01cc9120]                ; 004d756c | DAT_01cc9120
    ADD ESP,0x14                        ; 004d7571
    CMP EAX,0x3                         ; 004d7574
    JL 0x004d7543                       ; 004d7577
        ;   XREF to: 004d7543 (CONDITIONAL_JUMP)  ; LAB_004d7543
    PUSH 0x1cc92a4                      ; 004d7579 | DAT_01cc92a4
    PUSH 0x1cc92a8                      ; 004d757e
    PUSH EAX                            ; 004d7583
    MOV EAX,dword ptr [ESP + 0x24]      ; 004d7584
    PUSH 0x1cc9124                      ; 004d7588 | g_CVector3f_ARRAY_01cc9124
    ADD EAX,0xb8                        ; 004d758d
    PUSH EAX                            ; 004d7592
    CALL core_mirror.cpp_clipPolygonAgainstPlane_FUN_004d6420 ; 004d7593
        ;   XREF to: 004d6420 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_clipPolygonAgainstPlane_FUN_004d6420(SClipPlane * clip_plane, CVector3f * input_vertices, int input_count, CVector3f * output_vertices, ...)
    MOV ECX,dword ptr [0x01cc92a4]      ; 004d7598 | DAT_01cc92a4
    ADD ESP,0x14                        ; 004d759e
    CMP ECX,0x3                         ; 004d75a1
    JL 0x004d7543                       ; 004d75a4
        ;   XREF to: 004d7543 (CONDITIONAL_JUMP)  ; LAB_004d7543
    PUSH 0x1cc9120                      ; 004d75a6 | DAT_01cc9120
    PUSH 0x1cc9124                      ; 004d75ab | g_CVector3f_ARRAY_01cc9124
    PUSH ECX                            ; 004d75b0
    MOV EAX,dword ptr [ESP + 0x24]      ; 004d75b1
    PUSH 0x1cc92a8                      ; 004d75b5
    ADD EAX,0xc8                        ; 004d75ba
    PUSH EAX                            ; 004d75bf
    CALL core_mirror.cpp_clipPolygonAgainstPlane_FUN_004d6420 ; 004d75c0
        ;   XREF to: 004d6420 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_clipPolygonAgainstPlane_FUN_004d6420(SClipPlane * clip_plane, CVector3f * input_vertices, int input_count, CVector3f * output_vertices, ...)
    MOV ESI,dword ptr [0x01cc9120]      ; 004d75c5 | DAT_01cc9120
    ADD ESP,0x14                        ; 004d75cb
    CMP ESI,0x3                         ; 004d75ce
    JL 0x004d7543                       ; 004d75d1
        ;   XREF to: 004d7543 (CONDITIONAL_JUMP)  ; LAB_004d7543
    PUSH 0x1cc92a4                      ; 004d75d7 | DAT_01cc92a4
    PUSH 0x1cc92a8                      ; 004d75dc
    PUSH ESI                            ; 004d75e1
    MOV EAX,dword ptr [ESP + 0x24]      ; 004d75e2
    PUSH 0x1cc9124                      ; 004d75e6 | g_CVector3f_ARRAY_01cc9124
    ADD EAX,0xd8                        ; 004d75eb
    PUSH EAX                            ; 004d75f0
    CALL core_mirror.cpp_clipPolygonAgainstPlane_FUN_004d6420 ; 004d75f1
        ;   XREF to: 004d6420 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_clipPolygonAgainstPlane_FUN_004d6420(SClipPlane * clip_plane, CVector3f * input_vertices, int input_count, CVector3f * output_vertices, ...)
    MOV EAX,[0x01cc92a4]                ; 004d75f6 | DAT_01cc92a4
    ADD ESP,0x14                        ; 004d75fb
    CMP EAX,0x3                         ; 004d75fe
    JL 0x004d7543                       ; 004d7601
        ;   XREF to: 004d7543 (CONDITIONAL_JUMP)  ; LAB_004d7543
    MOV EDX,dword ptr [ESP + 0x18]      ; 004d7607
    MOV dword ptr [EDX + 0xec],EAX      ; 004d760b
    MOV EAX,dword ptr [EDI + 0x8]       ; 004d7611
    MOV dword ptr [EDX + 0xf0],EAX      ; 004d7614
    MOV EAX,dword ptr [EDI + 0xc]       ; 004d761a
    MOV dword ptr [EDX + 0xf4],EAX      ; 004d761d
    MOV EAX,dword ptr [EDI + 0x10]      ; 004d7623
    MOV dword ptr [EDX + 0xf8],EAX      ; 004d7626
    MOV EAX,dword ptr [EDI + 0x14]      ; 004d762c
    MOV dword ptr [EDX + 0xfc],EAX      ; 004d762f
    MOV EDX,dword ptr [0x01cc92a4]      ; 004d7635 | DAT_01cc92a4
    XOR EBP,EBP                         ; 004d763b
    TEST EDX,EDX                        ; 004d763d
    JLE 0x004d76d0                      ; 004d763f
        ;   XREF to: 004d76d0 (CONDITIONAL_JUMP)  ; LAB_004d76d0
    MOV EDI,0x1cc92a8                   ; 004d7645
    MOV ESI,dword ptr [ESP + 0x18]      ; 004d764a
    MOV dword ptr [ESP],EDI             ; 004d764e
    MOV EDI,0xea000                     ; 004d7651
    MOV EAX,[0x005ae704]                ; 004d7656 | g_CDemonRenderer_PTR_005ae704
        ;   Label: LAB_004d7656
    MOV EBX,dword ptr [EAX]             ; 004d765b | DAT_01b4d738
    MOV EAX,dword ptr [ESP]             ; 004d765d
    ADD EBX,EDI                         ; 004d7660
    FLD float ptr [EAX]                 ; 004d7662 | g_CVector3f_ARRAY_01cc92a8 | g_CVector3f_ARRAY_01cc92a8[1].x
    FMUL float ptr [0x005a0880]         ; 004d7664 | FLOAT_005a0880
    FISTP dword ptr [EBX]               ; 004d766a
    FLD float ptr [EAX + 0x4]           ; 004d766c | g_CVector3f_ARRAY_01cc92a8[0].y | g_CVector3f_ARRAY_01cc92a8[1].y
    FMUL float ptr [0x005a0880]         ; 004d766f | FLOAT_005a0880
    FISTP dword ptr [EBX + 0x4]         ; 004d7675
    FLD float ptr [EAX + 0x8]           ; 004d7678 | g_CVector3f_ARRAY_01cc92a8[0].z | g_CVector3f_ARRAY_01cc92a8[1].z
    FMUL float ptr [0x005a0880]         ; 004d767b | FLOAT_005a0880
    FISTP dword ptr [EBX + 0x8]         ; 004d7681
    MOV EAX,[0x005ae704]                ; 004d7684 | g_CDemonRenderer_PTR_005ae704
    MOV EAX,dword ptr [EAX]             ; 004d7689 | DAT_01b4d738
    LEA EDX,[EBP + 0x4e00]              ; 004d768b
    ADD ESI,0x4                         ; 004d7691
    MOV dword ptr [EDI + EAX*0x1 + 0x10],0xffffffff ; 004d7694
    PUSH EDX                            ; 004d769c
    MOV dword ptr [ESI + 0xfc],EDX      ; 004d769d
    CALL engine_matrix.c_projectCachedPoint_FUN_004cd240 ; 004d76a3
        ;   XREF to: 004cd240 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectCachedPoint_FUN_004cd240(int cacheIndex)
    ADD ESP,0x4                         ; 004d76a8
    INC EBP                             ; 004d76ab
    MOV ECX,dword ptr [ESP]             ; 004d76ac
    ADD EDI,0x30                        ; 004d76af
    ADD ECX,0xc                         ; 004d76b2
    MOV EBX,dword ptr [0x01cc92a4]      ; 004d76b5 | DAT_01cc92a4
    MOV dword ptr [ESP],ECX             ; 004d76bb
    CMP EBP,EBX                         ; 004d76be
    JL 0x004d7656                       ; 004d76c0
        ;   XREF to: 004d7656 (CONDITIONAL_JUMP)  ; LAB_004d7656
    LEA EAX,[EAX]                       ; 004d76c2
    LEA EDX,[EDX]                       ; 004d76c8
    MOV EAX,EAX                         ; 004d76ce
    MOV EAX,0x1                         ; 004d76d0
        ;   Label: LAB_004d76d0
    ADD ESP,0x4                         ; 004d76d5
    POP EBP                             ; 004d76d8
    POP EDI                             ; 004d76d9
    POP ESI                             ; 004d76da
    POP EBX                             ; 004d76db
    RET                                 ; 004d76dc

