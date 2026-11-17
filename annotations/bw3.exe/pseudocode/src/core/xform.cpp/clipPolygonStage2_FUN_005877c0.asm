; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_clipPolygonStage2_FUN_005877c0(void)
;
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_005877b4 = 0058788c
;   undefined1* PTR_caseD_3_005877bc = 0058786c
;   int g_INT_02d22ffc
;   int g_INT_02d23000
;   SRenderVertex[32] g_SRenderVertex_ARRAY_02d23008
;   undefined4 g_SRenderVertex_ARRAY_02d23008[0].projected_vertex.transformed_z
;   undefined4 g_SRenderVertex_ARRAY_02d23c08[0].projected_vertex.transformed_y
;
; Called Functions:
;   core_xform.cpp_clipInterpolateLeftPlane_FUN_00587400
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005877c0
        ;   Label: core_xform.cpp_clipPolygonStage2_FUN_005877c0
    PUSH ESI                            ; 005877c1
    PUSH EDI                            ; 005877c2
    PUSH EBP                            ; 005877c3
    SUB ESP,0x4                         ; 005877c4
    XOR EDX,EDX                         ; 005877c7
    MOV ECX,dword ptr [0x02d22ffc]      ; 005877c9 | g_INT_02d22ffc
    MOV dword ptr [ESP],EDX             ; 005877cf
    TEST ECX,ECX                        ; 005877d2
    JLE 0x00587884                      ; 005877d4
        ;   XREF to: 00587884 (CONDITIONAL_JUMP)  ; LAB_00587884
    MOV EBX,0x2d23008                   ; 005877da
    MOV EAX,dword ptr [ESP]             ; 005877df
        ;   Label: LAB_005877df
    MOV EBP,dword ptr [0x02d22ffc]      ; 005877e2 | g_INT_02d22ffc
    INC EAX                             ; 005877e8
    CMP EAX,EBP                         ; 005877e9
    JNZ 0x005877ef                      ; 005877eb
        ;   XREF to: 005877ef (CONDITIONAL_JUMP)  ; LAB_005877ef
    XOR EAX,EBP                         ; 005877ed
    IMUL EAX,EAX,0x30                   ; 005877ef
        ;   Label: LAB_005877ef
    MOV EBP,0x2d23008                   ; 005877f2
    MOV EDX,EBX                         ; 005877f7
    MOV EDI,dword ptr [EBX + 0x8]       ; 005877f9
    MOV ECX,dword ptr [EBX]             ; 005877fc
    NEG EDI                             ; 005877fe
    ADD EBP,EAX                         ; 00587800
    XOR EAX,EAX                         ; 00587802
    CMP EDI,ECX                         ; 00587804
    JL 0x0058780d                       ; 00587806
        ;   XREF to: 0058780d (CONDITIONAL_JUMP)  ; LAB_0058780d
    MOV EAX,0x1                         ; 00587808
    MOV EDI,dword ptr [EBP + 0x8]       ; 0058780d | g_SRenderVertex_ARRAY_02d23008[0].projected_vertex.transformed_z
        ;   Label: LAB_0058780d
    MOV ESI,dword ptr [EBP]             ; 00587810 | g_SRenderVertex_ARRAY_02d23008
    NEG EDI                             ; 00587813
    CMP EDI,ESI                         ; 00587815
    JL 0x0058781b                       ; 00587817
        ;   XREF to: 0058781b (CONDITIONAL_JUMP)  ; LAB_0058781b
    OR AL,0x2                           ; 00587819
    CMP EAX,0x3                         ; 0058781b
        ;   Label: LAB_0058781b
    JA 0x0058786c                       ; 0058781e
        ;   XREF to: 0058786c (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x5877b0]  ; 00587820 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x02d23000],0x30 ; 00587827 | g_INT_02d23000
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0058782e
    MOV ESI,EDX                         ; 00587833
    ADD EDI,0x2d23c08                   ; 00587835
    TEST EDI,0x7                        ; 0058783b
    JZ 0x00587849                       ; 00587841
        ;   XREF to: 00587849 (CONDITIONAL_JUMP)  ; LAB_00587849
    MOVSD ES:EDI,ESI                    ; 00587843
    SUB ECX,0x4                         ; 00587844
    JLE 0x00587866                      ; 00587847
        ;   XREF to: 00587866 (CONDITIONAL_JUMP)  ; LAB_00587866
    SUB ECX,0x8                         ; 00587849
        ;   Label: LAB_00587849
    JL 0x0058785a                       ; 0058784c
        ;   XREF to: 0058785a (CONDITIONAL_JUMP)  ; LAB_0058785a
    FILD qword ptr [ESI]                ; 0058784e
    ADD ESI,0x8                         ; 00587850
    FISTP qword ptr [EDI]               ; 00587853 | g_SRenderVertex_ARRAY_02d23c08[0].projected_vertex.transformed_y
    ADD EDI,0x8                         ; 00587855
    JMP 0x00587849                      ; 00587858
        ;   XREF to: 00587849 (UNCONDITIONAL_JUMP)  ; LAB_00587849
    ADD ECX,0x8                         ; 0058785a
        ;   Label: LAB_0058785a
    JLE 0x00587866                      ; 0058785d
        ;   XREF to: 00587866 (CONDITIONAL_JUMP)  ; LAB_00587866
    MOVSD ES:EDI,ESI                    ; 0058785f
    SUB ECX,0x4                         ; 00587860
    JLE 0x00587866                      ; 00587863
        ;   XREF to: 00587866 (CONDITIONAL_JUMP)  ; LAB_00587866
    MOVSD ES:EDI,ESI                    ; 00587865
    INC dword ptr [0x02d23000]          ; 00587866 | g_INT_02d23000
        ;   Label: LAB_00587866
    MOV ESI,dword ptr [ESP]             ; 0058786c
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x02d22ffc]      ; 0058786f | g_INT_02d22ffc
    INC ESI                             ; 00587875
    ADD EBX,0x30                        ; 00587876
    MOV dword ptr [ESP],ESI             ; 00587879
    CMP ESI,EDI                         ; 0058787c
    JL 0x005877df                       ; 0058787e
        ;   XREF to: 005877df (CONDITIONAL_JUMP)  ; LAB_005877df
    ADD ESP,0x4                         ; 00587884
        ;   Label: LAB_00587884
    POP EBP                             ; 00587887
    POP EDI                             ; 00587888
    POP ESI                             ; 00587889
    POP EBX                             ; 0058788a
    RET                                 ; 0058788b
    IMUL EAX,dword ptr [0x02d23000],0x30 ; 0058788c | g_INT_02d23000
        ;   Label: caseD_1
    ADD EAX,0x2d23c08                   ; 00587893
    PUSH EAX                            ; 00587898
    PUSH EDX                            ; 00587899
    PUSH EBP                            ; 0058789a
    CALL core_xform.cpp_clipInterpolateLeftPlane_FUN_00587400 ; 0058789b
        ;   XREF to: 00587400 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateLeftPlane_FUN_00587400(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV ESI,dword ptr [0x02d23000]      ; 005878a0 | g_INT_02d23000
    INC ESI                             ; 005878a6
    ADD ESP,0xc                         ; 005878a7
    MOV dword ptr [0x02d23000],ESI      ; 005878aa | g_INT_02d23000
    JMP 0x0058786c                      ; 005878b0
        ;   XREF to: 0058786c (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x02d23000],0x30 ; 005878b2 | g_INT_02d23000
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 005878b9
    MOV ESI,EDX                         ; 005878be
    ADD EDI,0x2d23c08                   ; 005878c0
    TEST EDI,0x7                        ; 005878c6
    JZ 0x005878d4                       ; 005878cc
        ;   XREF to: 005878d4 (CONDITIONAL_JUMP)  ; LAB_005878d4
    MOVSD ES:EDI,ESI                    ; 005878ce
    SUB ECX,0x4                         ; 005878cf
    JLE 0x005878f1                      ; 005878d2
        ;   XREF to: 005878f1 (CONDITIONAL_JUMP)  ; LAB_005878f1
    SUB ECX,0x8                         ; 005878d4
        ;   Label: LAB_005878d4
    JL 0x005878e5                       ; 005878d7
        ;   XREF to: 005878e5 (CONDITIONAL_JUMP)  ; LAB_005878e5
    FILD qword ptr [ESI]                ; 005878d9
    ADD ESI,0x8                         ; 005878db
    FISTP qword ptr [EDI]               ; 005878de | g_SRenderVertex_ARRAY_02d23c08[0].projected_vertex.transformed_y
    ADD EDI,0x8                         ; 005878e0
    JMP 0x005878d4                      ; 005878e3
        ;   XREF to: 005878d4 (UNCONDITIONAL_JUMP)  ; LAB_005878d4
    ADD ECX,0x8                         ; 005878e5
        ;   Label: LAB_005878e5
    JLE 0x005878f1                      ; 005878e8
        ;   XREF to: 005878f1 (CONDITIONAL_JUMP)  ; LAB_005878f1
    MOVSD ES:EDI,ESI                    ; 005878ea
    SUB ECX,0x4                         ; 005878eb
    JLE 0x005878f1                      ; 005878ee
        ;   XREF to: 005878f1 (CONDITIONAL_JUMP)  ; LAB_005878f1
    MOVSD ES:EDI,ESI                    ; 005878f0
    MOV ECX,dword ptr [0x02d23000]      ; 005878f1 | g_INT_02d23000
        ;   Label: LAB_005878f1
    INC ECX                             ; 005878f7
    MOV dword ptr [0x02d23000],ECX      ; 005878f8 | g_INT_02d23000
    IMUL EAX,ECX,0x30                   ; 005878fe
    ADD EAX,0x2d23c08                   ; 00587901
    PUSH EAX                            ; 00587906
    PUSH EBP                            ; 00587907
    PUSH EDX                            ; 00587908
    CALL core_xform.cpp_clipInterpolateLeftPlane_FUN_00587400 ; 00587909
        ;   XREF to: 00587400 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateLeftPlane_FUN_00587400(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV EDI,dword ptr [0x02d23000]      ; 0058790e | g_INT_02d23000
    INC EDI                             ; 00587914
    ADD ESP,0xc                         ; 00587915
    MOV dword ptr [0x02d23000],EDI      ; 00587918 | g_INT_02d23000
    JMP 0x0058786c                      ; 0058791e
        ;   XREF to: 0058786c (UNCONDITIONAL_JUMP)  ; caseD_3

