; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_clipper_c_clipPolygonToViewFrustumAdvanced_FUN_00432880(int vertex_count,int *vertex_indices)
;
; Parameters:
; int              Stack[0x4]:4   vertex_count
; int *            Stack[0x8]:4   vertex_indices
;
; Referenced Globals:
;   undefined1* switchdataD_0043283c = 00432aec
;   undefined1* PTR_caseD_3_00432848 = 00432b16
;   undefined1* PTR_caseD_1_00432850 = 00432dfd
;   undefined1* PTR_caseD_3_00432858 = 00432bc5
;   undefined1* switchdataD_0043285c = 00432c45
;   undefined1* PTR_caseD_3_00432868 = 00432c6f
;   undefined1* PTR_caseD_1_00432870 = 00432efb
;   undefined1* PTR_caseD_3_00432878 = 00432d1f
;   int g_INT_0070ca7c
;   int g_INT_007bee30
;   SRenderVertex[16] g_SRenderVertex_ARRAY_007bee34
;   undefined4 g_SRenderVertex_ARRAY_007bee34[0].projected_vertex.transformed_y
;   undefined4 g_SRenderVertex_ARRAY_007bee34[0].projected_vertex.transformed_z
;   undefined4 g_SRenderVertex_ARRAY_007bee34[1].projected_vertex.transformed_x
;   undefined4 g_SRenderVertex_ARRAY_007bee34[1].projected_vertex.transformed_y
;   ... and 29 more
;
; Called Functions:
;   engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_004321a0
;   engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00431f40
;   engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00431e10
;   engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00432070
;   engine_prim.c_calculateTriangleWindingOrder_FUN_0051c760
;   engine_special.cpp_drawPolygon2_FUN_0055f920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432880
        ;   Label: engine_clipper.c_clipPolygonToViewFrustumAdvanced_FUN_00432880
    PUSH ESI                            ; 00432881
    PUSH EDI                            ; 00432882
    PUSH EBP                            ; 00432883
    SUB ESP,0x1c                        ; 00432884
    MOV EBP,dword ptr [ESP + 0x30]      ; 00432887
    MOV ECX,0xffffffff                  ; 0043288b
    XOR EDX,EDX                         ; 00432890
    XOR ESI,ESI                         ; 00432892
    TEST EBP,EBP                        ; 00432894
    JLE 0x004328b8                      ; 00432896
        ;   XREF to: 004328b8 (CONDITIONAL_JUMP)  ; LAB_004328b8
    MOV EAX,dword ptr [ESP + 0x34]      ; 00432898
    IMUL EBX,dword ptr [EAX],0x30       ; 0043289c
        ;   Label: LAB_0043289c
    MOV EBX,dword ptr [EBX + 0x622024]  ; 0043289f
    TEST EBX,0x80000000                 ; 004328a5
    JZ 0x004328ae                       ; 004328ab
        ;   XREF to: 004328ae (CONDITIONAL_JUMP)  ; LAB_004328ae
    INC ESI                             ; 004328ad
    ADD EAX,0x4                         ; 004328ae
        ;   Label: LAB_004328ae
    INC EDX                             ; 004328b1
    AND ECX,EBX                         ; 004328b2
    CMP EDX,EBP                         ; 004328b4
    JL 0x0043289c                       ; 004328b6
        ;   XREF to: 0043289c (CONDITIONAL_JUMP)  ; LAB_0043289c
    CMP ESI,EBP                         ; 004328b8
        ;   Label: LAB_004328b8
    JNZ 0x004328c5                      ; 004328ba
        ;   XREF to: 004328c5 (CONDITIONAL_JUMP)  ; LAB_004328c5
    TEST CL,0xff                        ; 004328bc
    JNZ 0x00432961                      ; 004328bf
        ;   XREF to: 00432961 (CONDITIONAL_JUMP)  ; LAB_00432961
    TEST ESI,ESI                        ; 004328c5
        ;   Label: LAB_004328c5
    JNZ 0x00432a2a                      ; 004328c7
        ;   XREF to: 00432a2a (CONDITIONAL_JUMP)  ; LAB_00432a2a
    CMP dword ptr [0x01c37788],0x0      ; 004328cd | g_INT_01c37788
    JZ 0x004329d3                       ; 004328d4
        ;   XREF to: 004329d3 (CONDITIONAL_JUMP)  ; LAB_004329d3
    XOR EAX,EAX                         ; 004328da
    TEST EBP,EBP                        ; 004328dc
    JLE 0x00432900                      ; 004328de
        ;   XREF to: 00432900 (CONDITIONAL_JUMP)  ; LAB_00432900
    MOV EBX,dword ptr [ESP + 0x34]      ; 004328e0
    IMUL EDX,dword ptr [EBX],0x30       ; 004328e4
        ;   Label: LAB_004328e4
    INC EAX                             ; 004328e7
    ADD EDX,0x622014                    ; 004328e8
    ADD EBX,0x4                         ; 004328ee
    MOV dword ptr [EAX*0x4 + 0x7bf430],EDX ; 004328f1
    CMP EAX,EBP                         ; 004328f8
    JL 0x004328e4                       ; 004328fa
        ;   XREF to: 004328e4 (CONDITIONAL_JUMP)  ; LAB_004328e4
    LEA EAX,[EAX]                       ; 004328fc
    CMP dword ptr [0x0070ca7c],0x0      ; 00432900 | g_INT_0070ca7c
        ;   Label: LAB_00432900
    JZ 0x004329a0                       ; 00432907
        ;   XREF to: 004329a0 (CONDITIONAL_JUMP)  ; LAB_004329a0
    CMP EBP,0x3                         ; 0043290d
    JLE 0x00432973                      ; 00432910
        ;   XREF to: 00432973 (CONDITIONAL_JUMP)  ; LAB_00432973
    LEA EAX,[EBP + -0x2]                ; 00432912
    XOR EBX,EBX                         ; 00432915
    MOV dword ptr [ESP],EAX             ; 00432917
    LEA EDI,[EAX*0x4 + 0x0]             ; 0043291a
    XOR ESI,ESI                         ; 00432921
    TEST EDI,EDI                        ; 00432923
    JLE 0x0043294f                      ; 00432925
        ;   XREF to: 0043294f (CONDITIONAL_JUMP)  ; LAB_0043294f
    MOV EAX,dword ptr [EBX + 0x7bf43c]  ; 00432927
        ;   Label: LAB_00432927
    PUSH EAX                            ; 0043292d
    MOV EDX,dword ptr [EBX + 0x7bf438]  ; 0043292e
    PUSH EDX                            ; 00432934
    MOV ECX,dword ptr [0x007bf434]      ; 00432935 | g_SRenderVertex_PTR_ARRAY_007bf434
    PUSH ECX                            ; 0043293b
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_0051c760 ; 0043293c
        ;   XREF to: 0051c760 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_0051c760(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 00432941
    TEST EAX,EAX                        ; 00432944
    JZ 0x00432970                       ; 00432946
        ;   XREF to: 00432970 (CONDITIONAL_JUMP)  ; LAB_00432970
    ADD EBX,0x4                         ; 00432948
        ;   Label: LAB_00432948
    CMP EBX,EDI                         ; 0043294b
    JL 0x00432927                       ; 0043294d
        ;   XREF to: 00432927 (CONDITIONAL_JUMP)  ; LAB_00432927
    CMP ESI,dword ptr [ESP]             ; 0043294f
        ;   Label: LAB_0043294f
    JNZ 0x004329a0                      ; 00432952
        ;   XREF to: 004329a0 (CONDITIONAL_JUMP)  ; LAB_004329a0
    MOV EAX,0x1                         ; 00432954
    ADD ESP,0x1c                        ; 00432959
        ;   Label: LAB_00432959
    POP EBP                             ; 0043295c
    POP EDI                             ; 0043295d
    POP ESI                             ; 0043295e
    POP EBX                             ; 0043295f
    RET                                 ; 00432960
    XOR ECX,ECX                         ; 00432961
        ;   Label: LAB_00432961
    MOV EAX,0x1                         ; 00432963
    MOV dword ptr [0x007bee30],ECX      ; 00432968 | g_INT_007bee30
    JMP 0x00432959                      ; 0043296e
        ;   XREF to: 00432959 (UNCONDITIONAL_JUMP)  ; LAB_00432959
    INC ESI                             ; 00432970
        ;   Label: LAB_00432970
    JMP 0x00432948                      ; 00432971
        ;   XREF to: 00432948 (UNCONDITIONAL_JUMP)  ; LAB_00432948
    MOV EAX,[0x007bf43c]                ; 00432973 | g_SRenderVertex_PTR_ARRAY_007bf434[2]
        ;   Label: LAB_00432973
    PUSH EAX                            ; 00432978
    MOV EDX,dword ptr [0x007bf438]      ; 00432979 | g_SRenderVertex_PTR_ARRAY_007bf434[1]
    PUSH EDX                            ; 0043297f
    MOV ECX,dword ptr [0x007bf434]      ; 00432980 | g_SRenderVertex_PTR_ARRAY_007bf434
    PUSH ECX                            ; 00432986
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_0051c760 ; 00432987
        ;   XREF to: 0051c760 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_0051c760(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 0043298c
    TEST EAX,EAX                        ; 0043298f
    JNZ 0x004329a0                      ; 00432991
        ;   XREF to: 004329a0 (CONDITIONAL_JUMP)  ; LAB_004329a0
    MOV EAX,0x1                         ; 00432993
    ADD ESP,0x1c                        ; 00432998
    POP EBP                             ; 0043299b
    POP EDI                             ; 0043299c
    POP ESI                             ; 0043299d
    POP EBX                             ; 0043299e
    RET                                 ; 0043299f
    MOV ESI,dword ptr [0x01c38b54]      ; 004329a0 | g_BIT_INTEGER32_01c38b54
        ;   Label: LAB_004329a0
    PUSH ESI                            ; 004329a6
    LEA EAX,[EBP + -0x2]                ; 004329a7
    MOV EBX,dword ptr [0x01e61b58]      ; 004329aa | g_INT_01e61b58
    PUSH EBP                            ; 004329b0
    ADD EBX,EAX                         ; 004329b1
    PUSH 0x7bf434                       ; 004329b3
    MOV dword ptr [0x01e61b58],EBX      ; 004329b8 | g_INT_01e61b58
    CALL engine_special.cpp_drawPolygon2_FUN_0055f920 ; 004329be
        ;   XREF to: 0055f920 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolygon2_FUN_0055f920(SRenderVertex * * vertex_array, int vertex_count, int render_flags)
    MOV EAX,0x1                         ; 004329c3
    ADD ESP,0xc                         ; 004329c8
    ADD ESP,0x1c                        ; 004329cb
    POP EBP                             ; 004329ce
    POP EDI                             ; 004329cf
    POP ESI                             ; 004329d0
    POP EBX                             ; 004329d1
    RET                                 ; 004329d2
    MOV dword ptr [ESP + 0x8],ESI       ; 004329d3
        ;   Label: LAB_004329d3
    MOV dword ptr [0x007bee30],EBP      ; 004329d7 | g_INT_007bee30
    TEST EBP,EBP                        ; 004329dd
    JLE 0x00432a20                      ; 004329df
        ;   XREF to: 00432a20 (CONDITIONAL_JUMP)  ; LAB_00432a20
    MOV EBX,dword ptr [ESP + 0x34]      ; 004329e1
    MOV EDX,0x7bee34                    ; 004329e5
    IMUL ESI,dword ptr [EBX],0x30       ; 004329ea
        ;   Label: LAB_004329ea
    MOV ECX,0x30                        ; 004329ed
    ADD ESI,0x622014                    ; 004329f2
    MOV EDI,EDX                         ; 004329f8
    PUSH EDI                            ; 004329fa
    MOV EAX,ECX                         ; 004329fb
    SHR ECX,0x2                         ; 004329fd
    MOVSD.REP ES:EDI,ESI                ; 00432a00
    MOV CL,AL                           ; 00432a02
    AND CL,0x3                          ; 00432a04
    MOVSB.REP ES:EDI,ESI                ; 00432a07
    POP EDI                             ; 00432a09
    MOV EAX,dword ptr [ESP + 0x8]       ; 00432a0a
    ADD EBX,0x4                         ; 00432a0e
    INC EAX                             ; 00432a11
    ADD EDX,0x30                        ; 00432a12
    MOV dword ptr [ESP + 0x8],EAX       ; 00432a15
    CMP EBP,EAX                         ; 00432a19
    JG 0x004329ea                       ; 00432a1b
        ;   XREF to: 004329ea (CONDITIONAL_JUMP)  ; LAB_004329ea
    LEA EAX,[EAX]                       ; 00432a1d
    XOR EAX,EAX                         ; 00432a20
        ;   Label: LAB_00432a20
    ADD ESP,0x1c                        ; 00432a22
    POP EBP                             ; 00432a25
    POP EDI                             ; 00432a26
    POP ESI                             ; 00432a27
    POP EBX                             ; 00432a28
    RET                                 ; 00432a29
    XOR EDX,EDX                         ; 00432a2a
        ;   Label: LAB_00432a2a
    MOV dword ptr [0x007bfcfc],EBP      ; 00432a2c | g_INT_007bfcfc
    MOV dword ptr [0x007bfd00],EDX      ; 00432a32 | g_INT_007bfd00
    MOV dword ptr [0x007bfd04],EDX      ; 00432a38 | g_INT_007bfd04
    MOV dword ptr [0x007bfd08],EDX      ; 00432a3e | g_INT_007bfd08
    MOV dword ptr [0x007bee30],EDX      ; 00432a44 | g_INT_007bee30
    MOV dword ptr [ESP + 0x4],EDX       ; 00432a4a
    TEST EBP,EBP                        ; 00432a4e
    JLE 0x00432a90                      ; 00432a50
        ;   XREF to: 00432a90 (CONDITIONAL_JUMP)  ; LAB_00432a90
    MOV EBX,dword ptr [ESP + 0x34]      ; 00432a52
    MOV EDX,0x7c030c                    ; 00432a56
    IMUL ESI,dword ptr [EBX],0x30       ; 00432a5b
        ;   Label: LAB_00432a5b
    MOV ECX,0x30                        ; 00432a5e
    MOV EDI,EDX                         ; 00432a63
    ADD ESI,0x622014                    ; 00432a65
    PUSH EDI                            ; 00432a6b
    MOV EAX,ECX                         ; 00432a6c
    SHR ECX,0x2                         ; 00432a6e
    MOVSD.REP ES:EDI,ESI                ; 00432a71
    MOV CL,AL                           ; 00432a73
    AND CL,0x3                          ; 00432a75
    MOVSB.REP ES:EDI,ESI                ; 00432a78
    POP EDI                             ; 00432a7a
    MOV ECX,dword ptr [ESP + 0x4]       ; 00432a7b
    ADD EBX,0x4                         ; 00432a7f
    INC ECX                             ; 00432a82
    ADD EDX,0x30                        ; 00432a83
    MOV dword ptr [ESP + 0x4],ECX       ; 00432a86
    CMP EBP,ECX                         ; 00432a8a
    JG 0x00432a5b                       ; 00432a8c
        ;   XREF to: 00432a5b (CONDITIONAL_JUMP)  ; LAB_00432a5b
    MOV EAX,EAX                         ; 00432a8e
    XOR EDI,EDI                         ; 00432a90
        ;   Label: LAB_00432a90
    MOV EBP,dword ptr [0x007bfcfc]      ; 00432a92 | g_INT_007bfcfc
    MOV dword ptr [ESP + 0xc],EDI       ; 00432a98
    TEST EBP,EBP                        ; 00432a9c
    JLE 0x00432b30                      ; 00432a9e
        ;   XREF to: 00432b30 (CONDITIONAL_JUMP)  ; LAB_00432b30
    MOV EBX,0x7c030c                    ; 00432aa4
    MOV EAX,dword ptr [ESP + 0xc]       ; 00432aa9
        ;   Label: LAB_00432aa9
    MOV EDI,dword ptr [0x007bfcfc]      ; 00432aad | g_INT_007bfcfc
    INC EAX                             ; 00432ab3
    CMP EAX,EDI                         ; 00432ab4
    JNZ 0x00432aba                      ; 00432ab6
        ;   XREF to: 00432aba (CONDITIONAL_JUMP)  ; LAB_00432aba
    XOR EAX,EDI                         ; 00432ab8
    IMUL EAX,EAX,0x30                   ; 00432aba
        ;   Label: LAB_00432aba
    MOV EBP,0x7c030c                    ; 00432abd | g_SRenderVertex_ARRAY_007c030c
    MOV EDX,EBX                         ; 00432ac2
    MOV ECX,dword ptr [EBX]             ; 00432ac4
    MOV ESI,dword ptr [EBX + 0x8]       ; 00432ac6
    ADD EBP,EAX                         ; 00432ac9
    XOR EAX,EAX                         ; 00432acb
    CMP ECX,ESI                         ; 00432acd
    JL 0x00432ad6                       ; 00432acf
        ;   XREF to: 00432ad6 (CONDITIONAL_JUMP)  ; LAB_00432ad6
    MOV EAX,0x1                         ; 00432ad1
    MOV EDI,dword ptr [EBP + 0x8]       ; 00432ad6 | g_SRenderVertex_ARRAY_007c030c[0].projected_vertex.transformed_z
        ;   Label: LAB_00432ad6
    CMP EDI,dword ptr [EBP]             ; 00432ad9 | g_SRenderVertex_ARRAY_007c030c
    JG 0x00432ae0                       ; 00432adc
        ;   XREF to: 00432ae0 (CONDITIONAL_JUMP)  ; LAB_00432ae0
    OR AL,0x2                           ; 00432ade
    CMP EAX,0x3                         ; 00432ae0
        ;   Label: LAB_00432ae0
    JA 0x00432b16                       ; 00432ae3
        ;   XREF to: 00432b16 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43283c]  ; 00432ae5 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007bfd00],0x30 ; 00432aec | g_INT_007bfd00
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 00432af3
    MOV ESI,EDX                         ; 00432af8
    ADD EDI,0x7bfd0c                    ; 00432afa | g_SRenderVertex_ARRAY_007bfd0c
    PUSH EDI                            ; 00432b00
    MOV EAX,ECX                         ; 00432b01
    SHR ECX,0x2                         ; 00432b03
    MOVSD.REP ES:EDI,ESI                ; 00432b06 | g_SRenderVertex_ARRAY_007bfd0c | g_SRenderVertex_ARRAY_007bfd0c[0].projected_vertex.transformed_y
    MOV CL,AL                           ; 00432b08
    AND CL,0x3                          ; 00432b0a
    MOVSB.REP ES:EDI,ESI                ; 00432b0d | g_SRenderVertex_ARRAY_007bfd0c[0].projected_vertex.transformed_y
    POP EDI                             ; 00432b0f
    INC dword ptr [0x007bfd00]          ; 00432b10 | g_INT_007bfd00
    MOV EAX,dword ptr [ESP + 0xc]       ; 00432b16
        ;   Label: caseD_3
    MOV EDX,dword ptr [0x007bfcfc]      ; 00432b1a | g_INT_007bfcfc
    INC EAX                             ; 00432b20
    ADD EBX,0x30                        ; 00432b21
    MOV dword ptr [ESP + 0xc],EAX       ; 00432b24
    CMP EAX,EDX                         ; 00432b28
    JL 0x00432aa9                       ; 00432b2a
        ;   XREF to: 00432aa9 (CONDITIONAL_JUMP)  ; LAB_00432aa9
    MOV ECX,dword ptr [0x007bfd00]      ; 00432b30 | g_INT_007bfd00
        ;   Label: LAB_00432b30
    CMP ECX,0x3                         ; 00432b36
    JL 0x00432d74                       ; 00432b39
        ;   XREF to: 00432d74 (CONDITIONAL_JUMP)  ; LAB_00432d74
    XOR EBX,EBX                         ; 00432b3f
    MOV dword ptr [ESP + 0x10],EBX      ; 00432b41
    TEST ECX,ECX                        ; 00432b45
    JLE 0x00432bdf                      ; 00432b47
        ;   XREF to: 00432bdf (CONDITIONAL_JUMP)  ; LAB_00432bdf
    MOV EBX,0x7bfd0c                    ; 00432b4d | g_SRenderVertex_ARRAY_007bfd0c
    MOV EAX,dword ptr [ESP + 0x10]      ; 00432b52
        ;   Label: LAB_00432b52
    MOV EBP,dword ptr [0x007bfd00]      ; 00432b56 | g_INT_007bfd00
    INC EAX                             ; 00432b5c
    CMP EAX,EBP                         ; 00432b5d
    JNZ 0x00432b63                      ; 00432b5f
        ;   XREF to: 00432b63 (CONDITIONAL_JUMP)  ; LAB_00432b63
    XOR EAX,EBP                         ; 00432b61
    IMUL EAX,EAX,0x30                   ; 00432b63
        ;   Label: LAB_00432b63
    MOV EBP,0x7bfd0c                    ; 00432b66 | g_SRenderVertex_ARRAY_007bfd0c
    MOV EDX,EBX                         ; 00432b6b
    MOV ECX,dword ptr [EBX + 0x8]       ; 00432b6d | g_SRenderVertex_ARRAY_007bfd0c[0].projected_vertex.transformed_z | g_SRenderVertex_ARRAY_007bfd0c[1].projected_vertex.transformed_z
    MOV ESI,dword ptr [EBX]             ; 00432b70 | g_SRenderVertex_ARRAY_007bfd0c | g_SRenderVertex_ARRAY_007bfd0c[1].projected_vertex.transformed_x
    NEG ECX                             ; 00432b72
    ADD EBP,EAX                         ; 00432b74
    XOR EAX,EAX                         ; 00432b76
    CMP ECX,ESI                         ; 00432b78
    JL 0x00432b81                       ; 00432b7a
        ;   XREF to: 00432b81 (CONDITIONAL_JUMP)  ; LAB_00432b81
    MOV EAX,0x1                         ; 00432b7c
    MOV ECX,dword ptr [EBP + 0x8]       ; 00432b81 | g_SRenderVertex_ARRAY_007bfd0c[0].projected_vertex.transformed_z
        ;   Label: LAB_00432b81
    MOV EDI,dword ptr [EBP]             ; 00432b84 | g_SRenderVertex_ARRAY_007bfd0c
    NEG ECX                             ; 00432b87
    CMP ECX,EDI                         ; 00432b89
    JL 0x00432b8f                       ; 00432b8b
        ;   XREF to: 00432b8f (CONDITIONAL_JUMP)  ; LAB_00432b8f
    OR AL,0x2                           ; 00432b8d
    CMP EAX,0x3                         ; 00432b8f
        ;   Label: LAB_00432b8f
    JA 0x00432bc5                       ; 00432b92
        ;   XREF to: 00432bc5 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43284c]  ; 00432b94 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007bfd04],0x30 ; 00432b9b | g_INT_007bfd04
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 00432ba2
    MOV ESI,EDX                         ; 00432ba7
    ADD EDI,0x7c090c                    ; 00432ba9 | g_SRenderVertex_ARRAY_007c090c
    PUSH EDI                            ; 00432baf
    MOV EAX,ECX                         ; 00432bb0
    SHR ECX,0x2                         ; 00432bb2
    MOVSD.REP ES:EDI,ESI                ; 00432bb5 | g_SRenderVertex_ARRAY_007bfd0c | g_SRenderVertex_ARRAY_007c090c | g_SRenderVertex_ARRAY_007bfd0c[0].projected_vertex.transformed_y
    MOV CL,AL                           ; 00432bb7
    AND CL,0x3                          ; 00432bb9
    MOVSB.REP ES:EDI,ESI                ; 00432bbc | g_SRenderVertex_ARRAY_007bfd0c[0].projected_vertex.transformed_y | g_SRenderVertex_ARRAY_007c090c[0].projected_vertex.transformed_y
    POP EDI                             ; 00432bbe
    INC dword ptr [0x007bfd04]          ; 00432bbf | g_INT_007bfd04
    MOV EDX,dword ptr [ESP + 0x10]      ; 00432bc5
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x007bfd00]      ; 00432bc9 | g_INT_007bfd00
    INC EDX                             ; 00432bcf
    ADD EBX,0x30                        ; 00432bd0
    MOV dword ptr [ESP + 0x10],EDX      ; 00432bd3
    CMP EDX,ECX                         ; 00432bd7
    JL 0x00432b52                       ; 00432bd9
        ;   XREF to: 00432b52 (CONDITIONAL_JUMP)  ; LAB_00432b52
    MOV EBX,dword ptr [0x007bfd04]      ; 00432bdf | g_INT_007bfd04
        ;   Label: LAB_00432bdf
    CMP EBX,0x3                         ; 00432be5
    JL 0x00432d74                       ; 00432be8
        ;   XREF to: 00432d74 (CONDITIONAL_JUMP)  ; LAB_00432d74
    XOR ESI,ESI                         ; 00432bee
    MOV dword ptr [ESP + 0x18],ESI      ; 00432bf0
    TEST EBX,EBX                        ; 00432bf4
    JLE 0x00432c89                      ; 00432bf6
        ;   XREF to: 00432c89 (CONDITIONAL_JUMP)  ; LAB_00432c89
    MOV EBX,0x7c090c                    ; 00432bfc | g_SRenderVertex_ARRAY_007c090c
    MOV EAX,dword ptr [ESP + 0x18]      ; 00432c01
        ;   Label: LAB_00432c01
    MOV EBP,dword ptr [0x007bfd04]      ; 00432c05 | g_INT_007bfd04
    INC EAX                             ; 00432c0b
    CMP EAX,EBP                         ; 00432c0c
    JNZ 0x00432c12                      ; 00432c0e
        ;   XREF to: 00432c12 (CONDITIONAL_JUMP)  ; LAB_00432c12
    XOR EAX,EBP                         ; 00432c10
    IMUL EAX,EAX,0x30                   ; 00432c12
        ;   Label: LAB_00432c12
    MOV EBP,0x7c090c                    ; 00432c15 | g_SRenderVertex_ARRAY_007c090c
    MOV EDX,EBX                         ; 00432c1a
    MOV ECX,dword ptr [EBX + 0x4]       ; 00432c1c | g_SRenderVertex_ARRAY_007c090c[0].projected_vertex.transformed_y | g_SRenderVertex_ARRAY_007c090c[1].projected_vertex.transformed_y
    MOV ESI,dword ptr [EBX + 0x8]       ; 00432c1f | g_SRenderVertex_ARRAY_007c090c[0].projected_vertex.transformed_z | g_SRenderVertex_ARRAY_007c090c[1].projected_vertex.transformed_z
    ADD EBP,EAX                         ; 00432c22
    XOR EAX,EAX                         ; 00432c24
    CMP ECX,ESI                         ; 00432c26
    JL 0x00432c2f                       ; 00432c28
        ;   XREF to: 00432c2f (CONDITIONAL_JUMP)  ; LAB_00432c2f
    MOV EAX,0x1                         ; 00432c2a
    MOV EDI,dword ptr [EBP + 0x8]       ; 00432c2f | g_SRenderVertex_ARRAY_007c090c[0].projected_vertex.transformed_z
        ;   Label: LAB_00432c2f
    CMP EDI,dword ptr [EBP + 0x4]       ; 00432c32 | g_SRenderVertex_ARRAY_007c090c[0].projected_vertex.transformed_y
    JG 0x00432c39                       ; 00432c35
        ;   XREF to: 00432c39 (CONDITIONAL_JUMP)  ; LAB_00432c39
    OR AL,0x2                           ; 00432c37
    CMP EAX,0x3                         ; 00432c39
        ;   Label: LAB_00432c39
    JA 0x00432c6f                       ; 00432c3c
        ;   XREF to: 00432c6f (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43285c]  ; 00432c3e | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007bfd08],0x30 ; 00432c45 | g_INT_007bfd08
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 00432c4c
    MOV ESI,EDX                         ; 00432c51
    ADD EDI,0x7c0f0c                    ; 00432c53 | g_SRenderVertex_ARRAY_007c0f0c
    PUSH EDI                            ; 00432c59
    MOV EAX,ECX                         ; 00432c5a
    SHR ECX,0x2                         ; 00432c5c
    MOVSD.REP ES:EDI,ESI                ; 00432c5f | g_SRenderVertex_ARRAY_007c090c[1].projected_vertex.transformed_x | g_SRenderVertex_ARRAY_007c0f0c | g_SRenderVertex_ARRAY_007c090c[1].projected_vertex.transformed_y
    MOV CL,AL                           ; 00432c61
    AND CL,0x3                          ; 00432c63
    MOVSB.REP ES:EDI,ESI                ; 00432c66 | g_SRenderVertex_ARRAY_007c090c[1].projected_vertex.transformed_y | g_SRenderVertex_ARRAY_007c0f0c[0].projected_vertex.transformed_y
    POP EDI                             ; 00432c68
    INC dword ptr [0x007bfd08]          ; 00432c69 | g_INT_007bfd08
    MOV EDX,dword ptr [ESP + 0x18]      ; 00432c6f
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x007bfd04]      ; 00432c73 | g_INT_007bfd04
    INC EDX                             ; 00432c79
    ADD EBX,0x30                        ; 00432c7a
    MOV dword ptr [ESP + 0x18],EDX      ; 00432c7d
    CMP EDX,ECX                         ; 00432c81
    JL 0x00432c01                       ; 00432c83
        ;   XREF to: 00432c01 (CONDITIONAL_JUMP)  ; LAB_00432c01
    MOV EBX,dword ptr [0x007bfd08]      ; 00432c89 | g_INT_007bfd08
        ;   Label: LAB_00432c89
    CMP EBX,0x3                         ; 00432c8f
    JL 0x00432d74                       ; 00432c92
        ;   XREF to: 00432d74 (CONDITIONAL_JUMP)  ; LAB_00432d74
    XOR ESI,ESI                         ; 00432c98
    MOV dword ptr [ESP + 0x14],ESI      ; 00432c9a
    TEST EBX,EBX                        ; 00432c9e
    JLE 0x00432d39                      ; 00432ca0
        ;   XREF to: 00432d39 (CONDITIONAL_JUMP)  ; LAB_00432d39
    MOV EBX,0x7c0f0c                    ; 00432ca6 | g_SRenderVertex_ARRAY_007c0f0c
    MOV EAX,dword ptr [ESP + 0x14]      ; 00432cab
        ;   Label: LAB_00432cab
    MOV EDI,dword ptr [0x007bfd08]      ; 00432caf | g_INT_007bfd08
    INC EAX                             ; 00432cb5
    CMP EAX,EDI                         ; 00432cb6
    JNZ 0x00432cbc                      ; 00432cb8
        ;   XREF to: 00432cbc (CONDITIONAL_JUMP)  ; LAB_00432cbc
    XOR EAX,EDI                         ; 00432cba
    IMUL EAX,EAX,0x30                   ; 00432cbc
        ;   Label: LAB_00432cbc
    MOV EBP,0x7c0f0c                    ; 00432cbf | g_SRenderVertex_ARRAY_007c0f0c
    MOV EDX,EBX                         ; 00432cc4
    MOV ECX,dword ptr [EBX + 0x8]       ; 00432cc6 | g_SRenderVertex_ARRAY_007c0f0c[0].projected_vertex.transformed_z | g_SRenderVertex_ARRAY_007c0f0c[1].projected_vertex.transformed_z
    MOV ESI,dword ptr [EBX + 0x4]       ; 00432cc9 | g_SRenderVertex_ARRAY_007c0f0c[0].projected_vertex.transformed_y | g_SRenderVertex_ARRAY_007c0f0c[1].projected_vertex.transformed_y
    NEG ECX                             ; 00432ccc
    ADD EBP,EAX                         ; 00432cce
    XOR EAX,EAX                         ; 00432cd0
    CMP ECX,ESI                         ; 00432cd2
    JL 0x00432cdb                       ; 00432cd4
        ;   XREF to: 00432cdb (CONDITIONAL_JUMP)  ; LAB_00432cdb
    MOV EAX,0x1                         ; 00432cd6
    MOV ECX,dword ptr [EBP + 0x8]       ; 00432cdb | g_SRenderVertex_ARRAY_007c0f0c[0].projected_vertex.transformed_z
        ;   Label: LAB_00432cdb
    MOV EDI,dword ptr [EBP + 0x4]       ; 00432cde | g_SRenderVertex_ARRAY_007c0f0c[0].projected_vertex.transformed_y
    NEG ECX                             ; 00432ce1
    CMP ECX,EDI                         ; 00432ce3
    JL 0x00432ce9                       ; 00432ce5
        ;   XREF to: 00432ce9 (CONDITIONAL_JUMP)  ; LAB_00432ce9
    OR AL,0x2                           ; 00432ce7
    CMP EAX,0x3                         ; 00432ce9
        ;   Label: LAB_00432ce9
    JA 0x00432d1f                       ; 00432cec
        ;   XREF to: 00432d1f (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43286c]  ; 00432cee | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007bee30],0x30 ; 00432cf5 | g_INT_007bee30
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 00432cfc
    MOV ESI,EDX                         ; 00432d01
    ADD EDI,0x7bee34                    ; 00432d03 | g_SRenderVertex_ARRAY_007bee34
    PUSH EDI                            ; 00432d09
    MOV EAX,ECX                         ; 00432d0a
    SHR ECX,0x2                         ; 00432d0c
    MOVSD.REP ES:EDI,ESI                ; 00432d0f | g_SRenderVertex_ARRAY_007c0f0c | g_SRenderVertex_ARRAY_007bee34 | g_SRenderVertex_ARRAY_007c0f0c[0].projected_vertex.transformed_y
    MOV CL,AL                           ; 00432d11
    AND CL,0x3                          ; 00432d13
    MOVSB.REP ES:EDI,ESI                ; 00432d16 | g_SRenderVertex_ARRAY_007c0f0c[0].projected_vertex.transformed_y | g_SRenderVertex_ARRAY_007bee34[0].projected_vertex.transformed_y
    POP EDI                             ; 00432d18
    INC dword ptr [0x007bee30]          ; 00432d19 | g_INT_007bee30
    MOV EDX,dword ptr [ESP + 0x14]      ; 00432d1f
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x007bfd08]      ; 00432d23 | g_INT_007bfd08
    INC EDX                             ; 00432d29
    ADD EBX,0x30                        ; 00432d2a
    MOV dword ptr [ESP + 0x14],EDX      ; 00432d2d
    CMP EDX,ECX                         ; 00432d31
    JL 0x00432cab                       ; 00432d33
        ;   XREF to: 00432cab (CONDITIONAL_JUMP)  ; LAB_00432cab
    MOV EBX,dword ptr [0x007bee30]      ; 00432d39 | g_INT_007bee30
        ;   Label: LAB_00432d39
    CMP EBX,0x3                         ; 00432d3f
    JL 0x00432d74                       ; 00432d42
        ;   XREF to: 00432d74 (CONDITIONAL_JUMP)  ; LAB_00432d74
    MOV EAX,0x7bee34                    ; 00432d44 | g_SRenderVertex_ARRAY_007bee34
    XOR EBP,EBP                         ; 00432d49
    TEST EBX,EBX                        ; 00432d4b
    JLE 0x00432d74                      ; 00432d4d
        ;   XREF to: 00432d74 (CONDITIONAL_JUMP)  ; LAB_00432d74
    MOV ECX,dword ptr [EAX + 0x8]       ; 00432d4f | g_SRenderVertex_ARRAY_007bee34[0].projected_vertex.transformed_z | g_SRenderVertex_ARRAY_007bee34[1].projected_vertex.transformed_z
        ;   Label: LAB_00432d4f
    TEST ECX,ECX                        ; 00432d52
    JNZ 0x00432f7a                      ; 00432d54
        ;   XREF to: 00432f7a (CONDITIONAL_JUMP)  ; LAB_00432f7a
    MOV dword ptr [EAX + 0x8],0x1       ; 00432d5a | g_SRenderVertex_ARRAY_007bee34[0].projected_vertex.transformed_z | g_SRenderVertex_ARRAY_007bee34[1].projected_vertex.transformed_z
    MOV dword ptr [EAX],ECX             ; 00432d61 | g_SRenderVertex_ARRAY_007bee34 | g_SRenderVertex_ARRAY_007bee34[1].projected_vertex.transformed_x
    MOV dword ptr [EAX + 0x4],ECX       ; 00432d63 | g_SRenderVertex_ARRAY_007bee34[0].projected_vertex.transformed_y | g_SRenderVertex_ARRAY_007bee34[1].projected_vertex.transformed_y
    MOV EDX,dword ptr [0x007bee30]      ; 00432d66 | g_INT_007bee30
        ;   Label: LAB_00432d66
    INC EBP                             ; 00432d6c
    ADD EAX,0x30                        ; 00432d6d
    CMP EBP,EDX                         ; 00432d70
    JL 0x00432d4f                       ; 00432d72
        ;   XREF to: 00432d4f (CONDITIONAL_JUMP)  ; LAB_00432d4f
    XOR EAX,EAX                         ; 00432d74
        ;   Label: LAB_00432d74
    ADD ESP,0x1c                        ; 00432d76
    POP EBP                             ; 00432d79
    POP EDI                             ; 00432d7a
    POP ESI                             ; 00432d7b
    POP EBX                             ; 00432d7c
    RET                                 ; 00432d7d
    IMUL EAX,dword ptr [0x007bfd00],0x30 ; 00432d7e | g_INT_007bfd00
        ;   Label: caseD_1
    ADD EAX,0x7bfd0c                    ; 00432d85 | g_SRenderVertex_ARRAY_007bfd0c
    PUSH EAX                            ; 00432d8a
    PUSH EDX                            ; 00432d8b
    PUSH EBP                            ; 00432d8c
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00431e10 ; 00432d8d
        ;   XREF to: 00431e10 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00431e10(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x007bfd00]      ; 00432d92 | g_INT_007bfd00
    INC ESI                             ; 00432d98
    ADD ESP,0xc                         ; 00432d99
    MOV dword ptr [0x007bfd00],ESI      ; 00432d9c | g_INT_007bfd00
    JMP 0x00432b16                      ; 00432da2
        ;   XREF to: 00432b16 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007bfd00],0x30 ; 00432da7 | g_INT_007bfd00
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 00432dae
    MOV ESI,EDX                         ; 00432db3
    ADD EDI,0x7bfd0c                    ; 00432db5 | g_SRenderVertex_ARRAY_007bfd0c
    PUSH EDI                            ; 00432dbb
    MOV EAX,ECX                         ; 00432dbc
    SHR ECX,0x2                         ; 00432dbe
    MOVSD.REP ES:EDI,ESI                ; 00432dc1 | g_SRenderVertex_ARRAY_007bfd0c | g_SRenderVertex_ARRAY_007bfd0c[0].projected_vertex.transformed_y
    MOV CL,AL                           ; 00432dc3
    AND CL,0x3                          ; 00432dc5
    MOVSB.REP ES:EDI,ESI                ; 00432dc8 | g_SRenderVertex_ARRAY_007bfd0c[0].projected_vertex.transformed_y
    POP EDI                             ; 00432dca
    MOV ECX,dword ptr [0x007bfd00]      ; 00432dcb | g_INT_007bfd00
    INC ECX                             ; 00432dd1
    MOV dword ptr [0x007bfd00],ECX      ; 00432dd2 | g_INT_007bfd00
    IMUL EAX,ECX,0x30                   ; 00432dd8
    ADD EAX,0x7bfd0c                    ; 00432ddb | g_SRenderVertex_ARRAY_007bfd0c
    PUSH EAX                            ; 00432de0
    PUSH EBP                            ; 00432de1
    PUSH EDX                            ; 00432de2
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00431e10 ; 00432de3
        ;   XREF to: 00431e10 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00431e10(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x007bfd00]      ; 00432de8 | g_INT_007bfd00
    INC EDI                             ; 00432dee
    ADD ESP,0xc                         ; 00432def
    MOV dword ptr [0x007bfd00],EDI      ; 00432df2 | g_INT_007bfd00
    JMP 0x00432b16                      ; 00432df8
        ;   XREF to: 00432b16 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x007bfd04],0x30 ; 00432dfd | g_INT_007bfd04
        ;   Label: caseD_1
    ADD EAX,0x7c090c                    ; 00432e04 | g_SRenderVertex_ARRAY_007c090c
    PUSH EAX                            ; 00432e09
    PUSH EDX                            ; 00432e0a | g_SRenderVertex_ARRAY_007bfd0c
    PUSH EBP                            ; 00432e0b
    CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00431f40 ; 00432e0c
        ;   XREF to: 00431f40 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00431f40(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x007bfd04]      ; 00432e11 | g_INT_007bfd04
    INC ESI                             ; 00432e17
    ADD ESP,0xc                         ; 00432e18
    MOV dword ptr [0x007bfd04],ESI      ; 00432e1b | g_INT_007bfd04
    JMP 0x00432bc5                      ; 00432e21
        ;   XREF to: 00432bc5 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007bfd04],0x30 ; 00432e26 | g_INT_007bfd04
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 00432e2d
    MOV ESI,EDX                         ; 00432e32
    ADD EDI,0x7c090c                    ; 00432e34 | g_SRenderVertex_ARRAY_007c090c
    PUSH EDI                            ; 00432e3a
    MOV EAX,ECX                         ; 00432e3b
    SHR ECX,0x2                         ; 00432e3d
    MOVSD.REP ES:EDI,ESI                ; 00432e40 | g_SRenderVertex_ARRAY_007bfd0c | g_SRenderVertex_ARRAY_007c090c | g_SRenderVertex_ARRAY_007bfd0c[0].projected_vertex.transformed_y
    MOV CL,AL                           ; 00432e42
    AND CL,0x3                          ; 00432e44
    MOVSB.REP ES:EDI,ESI                ; 00432e47 | g_SRenderVertex_ARRAY_007bfd0c[0].projected_vertex.transformed_y | g_SRenderVertex_ARRAY_007c090c[0].projected_vertex.transformed_y
    POP EDI                             ; 00432e49
    MOV ECX,dword ptr [0x007bfd04]      ; 00432e4a | g_INT_007bfd04
    INC ECX                             ; 00432e50
    MOV dword ptr [0x007bfd04],ECX      ; 00432e51 | g_INT_007bfd04
    IMUL EAX,ECX,0x30                   ; 00432e57
    ADD EAX,0x7c090c                    ; 00432e5a | g_SRenderVertex_ARRAY_007c090c
    PUSH EAX                            ; 00432e5f
    PUSH EBP                            ; 00432e60
    PUSH EDX                            ; 00432e61 | g_SRenderVertex_ARRAY_007bfd0c
    CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00431f40 ; 00432e62
        ;   XREF to: 00431f40 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00431f40(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x007bfd04]      ; 00432e67 | g_INT_007bfd04
    INC EDI                             ; 00432e6d
    ADD ESP,0xc                         ; 00432e6e
    MOV dword ptr [0x007bfd04],EDI      ; 00432e71 | g_INT_007bfd04
    JMP 0x00432bc5                      ; 00432e77
        ;   XREF to: 00432bc5 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x007bfd08],0x30 ; 00432e7c | g_INT_007bfd08
        ;   Label: caseD_1
    ADD EAX,0x7c0f0c                    ; 00432e83 | g_SRenderVertex_ARRAY_007c0f0c
    PUSH EAX                            ; 00432e88
    PUSH EDX                            ; 00432e89 | g_SRenderVertex_ARRAY_007c090c[1].projected_vertex.transformed_x
    PUSH EBP                            ; 00432e8a
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00432070 ; 00432e8b
        ;   XREF to: 00432070 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00432070(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x007bfd08]      ; 00432e90 | g_INT_007bfd08
    INC ESI                             ; 00432e96
    ADD ESP,0xc                         ; 00432e97
    MOV dword ptr [0x007bfd08],ESI      ; 00432e9a | g_INT_007bfd08
    JMP 0x00432c6f                      ; 00432ea0
        ;   XREF to: 00432c6f (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007bfd08],0x30 ; 00432ea5 | g_INT_007bfd08
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 00432eac
    MOV ESI,EDX                         ; 00432eb1
    ADD EDI,0x7c0f0c                    ; 00432eb3 | g_SRenderVertex_ARRAY_007c0f0c
    PUSH EDI                            ; 00432eb9
    MOV EAX,ECX                         ; 00432eba
    SHR ECX,0x2                         ; 00432ebc
    MOVSD.REP ES:EDI,ESI                ; 00432ebf | g_SRenderVertex_ARRAY_007c090c[1].projected_vertex.transformed_x | g_SRenderVertex_ARRAY_007c0f0c | g_SRenderVertex_ARRAY_007c090c[1].projected_vertex.transformed_y
    MOV CL,AL                           ; 00432ec1
    AND CL,0x3                          ; 00432ec3
    MOVSB.REP ES:EDI,ESI                ; 00432ec6 | g_SRenderVertex_ARRAY_007c090c[1].projected_vertex.transformed_y | g_SRenderVertex_ARRAY_007c0f0c[0].projected_vertex.transformed_y
    POP EDI                             ; 00432ec8
    MOV ECX,dword ptr [0x007bfd08]      ; 00432ec9 | g_INT_007bfd08
    INC ECX                             ; 00432ecf
    MOV dword ptr [0x007bfd08],ECX      ; 00432ed0 | g_INT_007bfd08
    IMUL EAX,ECX,0x30                   ; 00432ed6
    ADD EAX,0x7c0f0c                    ; 00432ed9 | g_SRenderVertex_ARRAY_007c0f0c
    PUSH EAX                            ; 00432ede
    PUSH EBP                            ; 00432edf
    PUSH EDX                            ; 00432ee0 | g_SRenderVertex_ARRAY_007c090c[1].projected_vertex.transformed_x
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00432070 ; 00432ee1
        ;   XREF to: 00432070 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00432070(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x007bfd08]      ; 00432ee6 | g_INT_007bfd08
    INC EDI                             ; 00432eec
    ADD ESP,0xc                         ; 00432eed
    MOV dword ptr [0x007bfd08],EDI      ; 00432ef0 | g_INT_007bfd08
    JMP 0x00432c6f                      ; 00432ef6
        ;   XREF to: 00432c6f (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x007bee30],0x30 ; 00432efb | g_INT_007bee30
        ;   Label: caseD_1
    ADD EAX,0x7bee34                    ; 00432f02 | g_SRenderVertex_ARRAY_007bee34
    PUSH EAX                            ; 00432f07
    PUSH EDX                            ; 00432f08 | g_SRenderVertex_ARRAY_007c0f0c
    PUSH EBP                            ; 00432f09
    CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_004321a0 ; 00432f0a
        ;   XREF to: 004321a0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_004321a0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x007bee30]      ; 00432f0f | g_INT_007bee30
    INC ESI                             ; 00432f15
    ADD ESP,0xc                         ; 00432f16
    MOV dword ptr [0x007bee30],ESI      ; 00432f19 | g_INT_007bee30
    JMP 0x00432d1f                      ; 00432f1f
        ;   XREF to: 00432d1f (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007bee30],0x30 ; 00432f24 | g_INT_007bee30
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 00432f2b
    MOV ESI,EDX                         ; 00432f30
    ADD EDI,0x7bee34                    ; 00432f32 | g_SRenderVertex_ARRAY_007bee34
    PUSH EDI                            ; 00432f38
    MOV EAX,ECX                         ; 00432f39
    SHR ECX,0x2                         ; 00432f3b
    MOVSD.REP ES:EDI,ESI                ; 00432f3e | g_SRenderVertex_ARRAY_007c0f0c | g_SRenderVertex_ARRAY_007bee34 | g_SRenderVertex_ARRAY_007c0f0c[0].projected_vertex.transformed_y
    MOV CL,AL                           ; 00432f40
    AND CL,0x3                          ; 00432f42
    MOVSB.REP ES:EDI,ESI                ; 00432f45 | g_SRenderVertex_ARRAY_007c0f0c[0].projected_vertex.transformed_y | g_SRenderVertex_ARRAY_007bee34[0].projected_vertex.transformed_y
    POP EDI                             ; 00432f47
    MOV ECX,dword ptr [0x007bee30]      ; 00432f48 | g_INT_007bee30
    INC ECX                             ; 00432f4e
    MOV dword ptr [0x007bee30],ECX      ; 00432f4f | g_INT_007bee30
    IMUL EAX,ECX,0x30                   ; 00432f55
    ADD EAX,0x7bee34                    ; 00432f58 | g_SRenderVertex_ARRAY_007bee34
    PUSH EAX                            ; 00432f5d
    PUSH EBP                            ; 00432f5e
    PUSH EDX                            ; 00432f5f | g_SRenderVertex_ARRAY_007c0f0c
    CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_004321a0 ; 00432f60
        ;   XREF to: 004321a0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_004321a0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x007bee30]      ; 00432f65 | g_INT_007bee30
    INC EDI                             ; 00432f6b
    ADD ESP,0xc                         ; 00432f6c
    MOV dword ptr [0x007bee30],EDI      ; 00432f6f | g_INT_007bee30
    JMP 0x00432d1f                      ; 00432f75
        ;   XREF to: 00432d1f (UNCONDITIONAL_JUMP)  ; caseD_3
    CMP ECX,dword ptr [EAX]             ; 00432f7a | g_SRenderVertex_ARRAY_007bee34[1].projected_vertex.transformed_x
        ;   Label: LAB_00432f7a
    JGE 0x00432f85                      ; 00432f7c
        ;   XREF to: 00432f85 (CONDITIONAL_JUMP)  ; LAB_00432f85
    MOV dword ptr [EAX],ECX             ; 00432f7e | g_SRenderVertex_ARRAY_007bee34[1].projected_vertex.transformed_x
    JMP 0x00432d66                      ; 00432f80
        ;   XREF to: 00432d66 (UNCONDITIONAL_JUMP)  ; LAB_00432d66
    MOV EDX,ECX                         ; 00432f85
        ;   Label: LAB_00432f85
    MOV ESI,dword ptr [EAX]             ; 00432f87 | g_SRenderVertex_ARRAY_007bee34[1].projected_vertex.transformed_x
    NEG EDX                             ; 00432f89
    CMP EDX,ESI                         ; 00432f8b
    JLE 0x00432f96                      ; 00432f8d
        ;   XREF to: 00432f96 (CONDITIONAL_JUMP)  ; LAB_00432f96
    MOV dword ptr [EAX],EDX             ; 00432f8f | g_SRenderVertex_ARRAY_007bee34[1].projected_vertex.transformed_x
    JMP 0x00432d66                      ; 00432f91
        ;   XREF to: 00432d66 (UNCONDITIONAL_JUMP)  ; LAB_00432d66
    MOV EDI,dword ptr [EAX + 0x8]       ; 00432f96 | g_SRenderVertex_ARRAY_007bee34[1].projected_vertex.transformed_z
        ;   Label: LAB_00432f96
    MOV ECX,dword ptr [EAX + 0x4]       ; 00432f99 | g_SRenderVertex_ARRAY_007bee34[1].projected_vertex.transformed_y
    CMP ECX,EDI                         ; 00432f9c
    JLE 0x00432fa8                      ; 00432f9e
        ;   XREF to: 00432fa8 (CONDITIONAL_JUMP)  ; LAB_00432fa8
    MOV dword ptr [EAX + 0x4],EDI       ; 00432fa0 | g_SRenderVertex_ARRAY_007bee34[1].projected_vertex.transformed_y
    JMP 0x00432d66                      ; 00432fa3
        ;   XREF to: 00432d66 (UNCONDITIONAL_JUMP)  ; LAB_00432d66
    CMP EDX,ECX                         ; 00432fa8
        ;   Label: LAB_00432fa8
    JLE 0x00432d66                      ; 00432faa
        ;   XREF to: 00432d66 (CONDITIONAL_JUMP)  ; LAB_00432d66
    MOV dword ptr [EAX + 0x4],EDX       ; 00432fb0 | g_SRenderVertex_ARRAY_007bee34[1].projected_vertex.transformed_y
    JMP 0x00432d66                      ; 00432fb3
        ;   XREF to: 00432d66 (UNCONDITIONAL_JUMP)  ; LAB_00432d66

