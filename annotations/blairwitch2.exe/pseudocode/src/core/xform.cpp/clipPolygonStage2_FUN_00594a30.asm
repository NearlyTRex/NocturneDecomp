; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_clipPolygonStage2_FUN_00594a30(void)
;
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_00594a24 = 00594afc
;   undefined1* PTR_caseD_3_00594a2c = 00594adc
;   int g_INT_02665a60
;   int g_INT_02665a64
;   SRenderVertex[32] g_SRenderVertex_ARRAY_02665a6c
;   undefined4 g_SRenderVertex_ARRAY_02665a6c[0].projected_vertex.transformed_z
;   undefined4 g_SRenderVertex_ARRAY_0266666c[0].projected_vertex.transformed_y
;
; Called Functions:
;   core_xform.cpp_clipInterpolateLeftPlane_FUN_00594670
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00594a30
        ;   Label: core_xform.cpp_clipPolygonStage2_FUN_00594a30
    PUSH ESI                            ; 00594a31
    PUSH EDI                            ; 00594a32
    PUSH EBP                            ; 00594a33
    SUB ESP,0x4                         ; 00594a34
    XOR EDX,EDX                         ; 00594a37
    MOV ECX,dword ptr [0x02665a60]      ; 00594a39 | g_INT_02665a60
    MOV dword ptr [ESP],EDX             ; 00594a3f
    TEST ECX,ECX                        ; 00594a42
    JLE 0x00594af4                      ; 00594a44
        ;   XREF to: 00594af4 (CONDITIONAL_JUMP)  ; LAB_00594af4
    MOV EBX,0x2665a6c                   ; 00594a4a
    MOV EAX,dword ptr [ESP]             ; 00594a4f
        ;   Label: LAB_00594a4f
    MOV EBP,dword ptr [0x02665a60]      ; 00594a52 | g_INT_02665a60
    INC EAX                             ; 00594a58
    CMP EAX,EBP                         ; 00594a59
    JNZ 0x00594a5f                      ; 00594a5b
        ;   XREF to: 00594a5f (CONDITIONAL_JUMP)  ; LAB_00594a5f
    XOR EAX,EBP                         ; 00594a5d
    IMUL EAX,EAX,0x30                   ; 00594a5f
        ;   Label: LAB_00594a5f
    MOV EBP,0x2665a6c                   ; 00594a62
    MOV EDX,EBX                         ; 00594a67
    MOV EDI,dword ptr [EBX + 0x8]       ; 00594a69
    MOV ECX,dword ptr [EBX]             ; 00594a6c
    NEG EDI                             ; 00594a6e
    ADD EBP,EAX                         ; 00594a70
    XOR EAX,EAX                         ; 00594a72
    CMP EDI,ECX                         ; 00594a74
    JL 0x00594a7d                       ; 00594a76
        ;   XREF to: 00594a7d (CONDITIONAL_JUMP)  ; LAB_00594a7d
    MOV EAX,0x1                         ; 00594a78
    MOV EDI,dword ptr [EBP + 0x8]       ; 00594a7d | g_SRenderVertex_ARRAY_02665a6c[0].projected_vertex.transformed_z
        ;   Label: LAB_00594a7d
    MOV ESI,dword ptr [EBP]             ; 00594a80 | g_SRenderVertex_ARRAY_02665a6c
    NEG EDI                             ; 00594a83
    CMP EDI,ESI                         ; 00594a85
    JL 0x00594a8b                       ; 00594a87
        ;   XREF to: 00594a8b (CONDITIONAL_JUMP)  ; LAB_00594a8b
    OR AL,0x2                           ; 00594a89
    CMP EAX,0x3                         ; 00594a8b
        ;   Label: LAB_00594a8b
    JA 0x00594adc                       ; 00594a8e
        ;   XREF to: 00594adc (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x594a20]  ; 00594a90 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x02665a64],0x30 ; 00594a97 | g_INT_02665a64
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 00594a9e
    MOV ESI,EDX                         ; 00594aa3
    ADD EDI,0x266666c                   ; 00594aa5
    TEST EDI,0x7                        ; 00594aab
    JZ 0x00594ab9                       ; 00594ab1
        ;   XREF to: 00594ab9 (CONDITIONAL_JUMP)  ; LAB_00594ab9
    MOVSD ES:EDI,ESI                    ; 00594ab3
    SUB ECX,0x4                         ; 00594ab4
    JLE 0x00594ad6                      ; 00594ab7
        ;   XREF to: 00594ad6 (CONDITIONAL_JUMP)  ; LAB_00594ad6
    SUB ECX,0x8                         ; 00594ab9
        ;   Label: LAB_00594ab9
    JL 0x00594aca                       ; 00594abc
        ;   XREF to: 00594aca (CONDITIONAL_JUMP)  ; LAB_00594aca
    FILD qword ptr [ESI]                ; 00594abe
    ADD ESI,0x8                         ; 00594ac0
    FISTP qword ptr [EDI]               ; 00594ac3 | g_SRenderVertex_ARRAY_0266666c[0].projected_vertex.transformed_y
    ADD EDI,0x8                         ; 00594ac5
    JMP 0x00594ab9                      ; 00594ac8
        ;   XREF to: 00594ab9 (UNCONDITIONAL_JUMP)  ; LAB_00594ab9
    ADD ECX,0x8                         ; 00594aca
        ;   Label: LAB_00594aca
    JLE 0x00594ad6                      ; 00594acd
        ;   XREF to: 00594ad6 (CONDITIONAL_JUMP)  ; LAB_00594ad6
    MOVSD ES:EDI,ESI                    ; 00594acf
    SUB ECX,0x4                         ; 00594ad0
    JLE 0x00594ad6                      ; 00594ad3
        ;   XREF to: 00594ad6 (CONDITIONAL_JUMP)  ; LAB_00594ad6
    MOVSD ES:EDI,ESI                    ; 00594ad5
    INC dword ptr [0x02665a64]          ; 00594ad6 | g_INT_02665a64
        ;   Label: LAB_00594ad6
    MOV ESI,dword ptr [ESP]             ; 00594adc
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x02665a60]      ; 00594adf | g_INT_02665a60
    INC ESI                             ; 00594ae5
    ADD EBX,0x30                        ; 00594ae6
    MOV dword ptr [ESP],ESI             ; 00594ae9
    CMP ESI,EDI                         ; 00594aec
    JL 0x00594a4f                       ; 00594aee
        ;   XREF to: 00594a4f (CONDITIONAL_JUMP)  ; LAB_00594a4f
    ADD ESP,0x4                         ; 00594af4
        ;   Label: LAB_00594af4
    POP EBP                             ; 00594af7
    POP EDI                             ; 00594af8
    POP ESI                             ; 00594af9
    POP EBX                             ; 00594afa
    RET                                 ; 00594afb
    IMUL EAX,dword ptr [0x02665a64],0x30 ; 00594afc | g_INT_02665a64
        ;   Label: caseD_1
    ADD EAX,0x266666c                   ; 00594b03
    PUSH EAX                            ; 00594b08
    PUSH EDX                            ; 00594b09
    PUSH EBP                            ; 00594b0a
    CALL core_xform.cpp_clipInterpolateLeftPlane_FUN_00594670 ; 00594b0b
        ;   XREF to: 00594670 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateLeftPlane_FUN_00594670(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV ESI,dword ptr [0x02665a64]      ; 00594b10 | g_INT_02665a64
    INC ESI                             ; 00594b16
    ADD ESP,0xc                         ; 00594b17
    MOV dword ptr [0x02665a64],ESI      ; 00594b1a | g_INT_02665a64
    JMP 0x00594adc                      ; 00594b20
        ;   XREF to: 00594adc (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x02665a64],0x30 ; 00594b22 | g_INT_02665a64
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 00594b29
    MOV ESI,EDX                         ; 00594b2e
    ADD EDI,0x266666c                   ; 00594b30
    TEST EDI,0x7                        ; 00594b36
    JZ 0x00594b44                       ; 00594b3c
        ;   XREF to: 00594b44 (CONDITIONAL_JUMP)  ; LAB_00594b44
    MOVSD ES:EDI,ESI                    ; 00594b3e
    SUB ECX,0x4                         ; 00594b3f
    JLE 0x00594b61                      ; 00594b42
        ;   XREF to: 00594b61 (CONDITIONAL_JUMP)  ; LAB_00594b61
    SUB ECX,0x8                         ; 00594b44
        ;   Label: LAB_00594b44
    JL 0x00594b55                       ; 00594b47
        ;   XREF to: 00594b55 (CONDITIONAL_JUMP)  ; LAB_00594b55
    FILD qword ptr [ESI]                ; 00594b49
    ADD ESI,0x8                         ; 00594b4b
    FISTP qword ptr [EDI]               ; 00594b4e | g_SRenderVertex_ARRAY_0266666c[0].projected_vertex.transformed_y
    ADD EDI,0x8                         ; 00594b50
    JMP 0x00594b44                      ; 00594b53
        ;   XREF to: 00594b44 (UNCONDITIONAL_JUMP)  ; LAB_00594b44
    ADD ECX,0x8                         ; 00594b55
        ;   Label: LAB_00594b55
    JLE 0x00594b61                      ; 00594b58
        ;   XREF to: 00594b61 (CONDITIONAL_JUMP)  ; LAB_00594b61
    MOVSD ES:EDI,ESI                    ; 00594b5a
    SUB ECX,0x4                         ; 00594b5b
    JLE 0x00594b61                      ; 00594b5e
        ;   XREF to: 00594b61 (CONDITIONAL_JUMP)  ; LAB_00594b61
    MOVSD ES:EDI,ESI                    ; 00594b60
    MOV ECX,dword ptr [0x02665a64]      ; 00594b61 | g_INT_02665a64
        ;   Label: LAB_00594b61
    INC ECX                             ; 00594b67
    MOV dword ptr [0x02665a64],ECX      ; 00594b68 | g_INT_02665a64
    IMUL EAX,ECX,0x30                   ; 00594b6e
    ADD EAX,0x266666c                   ; 00594b71
    PUSH EAX                            ; 00594b76
    PUSH EBP                            ; 00594b77
    PUSH EDX                            ; 00594b78
    CALL core_xform.cpp_clipInterpolateLeftPlane_FUN_00594670 ; 00594b79
        ;   XREF to: 00594670 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateLeftPlane_FUN_00594670(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV EDI,dword ptr [0x02665a64]      ; 00594b7e | g_INT_02665a64
    INC EDI                             ; 00594b84
    ADD ESP,0xc                         ; 00594b85
    MOV dword ptr [0x02665a64],EDI      ; 00594b88 | g_INT_02665a64
    JMP 0x00594adc                      ; 00594b8e
        ;   XREF to: 00594adc (UNCONDITIONAL_JUMP)  ; caseD_3

