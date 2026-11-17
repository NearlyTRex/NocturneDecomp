; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_clipPolygonStage4_FUN_00594d20(void)
;
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_00594d14 = 00594ded
;   undefined1* PTR_caseD_3_00594d1c = 00594dcd
;   int g_INT_007bee30
;   SRenderVertex[16] g_SRenderVertex_ARRAY_007bee34
;   undefined4 g_SRenderVertex_ARRAY_007bee34[0].projected_vertex.transformed_y
;   undefined4 g_SRenderVertex_ARRAY_007bee34[0].projected_vertex.inv_z
;   undefined4 g_SRenderVertex_ARRAY_007bee34[0].projected_vertex.screen_x
;   int g_INT_02665a68
;   undefined4 g_SRenderVertex_ARRAY_02666c6c[0].projected_vertex.transformed_y
;   undefined4 g_SRenderVertex_ARRAY_02666c6c[0].projected_vertex.transformed_z
;
; Called Functions:
;   core_xform.cpp_clipInterpolateBottomPlane_FUN_005947f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00594d20
        ;   Label: core_xform.cpp_clipPolygonStage4_FUN_00594d20
    PUSH ESI                            ; 00594d21
    PUSH EDI                            ; 00594d22
    PUSH EBP                            ; 00594d23
    SUB ESP,0x4                         ; 00594d24
    XOR EDX,EDX                         ; 00594d27
    MOV ECX,dword ptr [0x02665a68]      ; 00594d29 | g_INT_02665a68
    MOV dword ptr [ESP],EDX             ; 00594d2f
    TEST ECX,ECX                        ; 00594d32
    JLE 0x00594de5                      ; 00594d34
        ;   XREF to: 00594de5 (CONDITIONAL_JUMP)  ; LAB_00594de5
    MOV EBX,0x2666c6c                   ; 00594d3a
    MOV EAX,dword ptr [ESP]             ; 00594d3f
        ;   Label: LAB_00594d3f
    MOV EBP,dword ptr [0x02665a68]      ; 00594d42 | g_INT_02665a68
    INC EAX                             ; 00594d48
    CMP EAX,EBP                         ; 00594d49
    JNZ 0x00594d4f                      ; 00594d4b
        ;   XREF to: 00594d4f (CONDITIONAL_JUMP)  ; LAB_00594d4f
    XOR EAX,EBP                         ; 00594d4d
    IMUL EAX,EAX,0x30                   ; 00594d4f
        ;   Label: LAB_00594d4f
    MOV EBP,0x2666c6c                   ; 00594d52
    MOV EDX,EBX                         ; 00594d57
    MOV EDI,dword ptr [EBX + 0x8]       ; 00594d59
    MOV ECX,dword ptr [EBX + 0x4]       ; 00594d5c
    NEG EDI                             ; 00594d5f
    ADD EBP,EAX                         ; 00594d61
    XOR EAX,EAX                         ; 00594d63
    CMP EDI,ECX                         ; 00594d65
    JL 0x00594d6e                       ; 00594d67
        ;   XREF to: 00594d6e (CONDITIONAL_JUMP)  ; LAB_00594d6e
    MOV EAX,0x1                         ; 00594d69
    MOV EDI,dword ptr [EBP + 0x8]       ; 00594d6e | g_SRenderVertex_ARRAY_02666c6c[0].projected_vertex.transformed_z
        ;   Label: LAB_00594d6e
    MOV ESI,dword ptr [EBP + 0x4]       ; 00594d71 | g_SRenderVertex_ARRAY_02666c6c[0].projected_vertex.transformed_y
    NEG EDI                             ; 00594d74
    CMP EDI,ESI                         ; 00594d76
    JL 0x00594d7c                       ; 00594d78
        ;   XREF to: 00594d7c (CONDITIONAL_JUMP)  ; LAB_00594d7c
    OR AL,0x2                           ; 00594d7a
    CMP EAX,0x3                         ; 00594d7c
        ;   Label: LAB_00594d7c
    JA 0x00594dcd                       ; 00594d7f
        ;   XREF to: 00594dcd (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x594d10]  ; 00594d81 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007bee30],0x30 ; 00594d88 | g_INT_007bee30
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 00594d8f
    MOV ESI,EDX                         ; 00594d94
    ADD EDI,0x7bee34                    ; 00594d96 | g_SRenderVertex_ARRAY_007bee34
    TEST EDI,0x7                        ; 00594d9c
    JZ 0x00594daa                       ; 00594da2
        ;   XREF to: 00594daa (CONDITIONAL_JUMP)  ; LAB_00594daa
    MOVSD ES:EDI,ESI                    ; 00594da4 | g_SRenderVertex_ARRAY_007bee34
    SUB ECX,0x4                         ; 00594da5
    JLE 0x00594dc7                      ; 00594da8
        ;   XREF to: 00594dc7 (CONDITIONAL_JUMP)  ; LAB_00594dc7
    SUB ECX,0x8                         ; 00594daa
        ;   Label: LAB_00594daa
    JL 0x00594dbb                       ; 00594dad
        ;   XREF to: 00594dbb (CONDITIONAL_JUMP)  ; LAB_00594dbb
    FILD qword ptr [ESI]                ; 00594daf
    ADD ESI,0x8                         ; 00594db1
    FISTP qword ptr [EDI]               ; 00594db4 | g_SRenderVertex_ARRAY_007bee34[0].projected_vertex.transformed_y | g_SRenderVertex_ARRAY_007bee34[0].projected_vertex.inv_z
    ADD EDI,0x8                         ; 00594db6
    JMP 0x00594daa                      ; 00594db9
        ;   XREF to: 00594daa (UNCONDITIONAL_JUMP)  ; LAB_00594daa
    ADD ECX,0x8                         ; 00594dbb
        ;   Label: LAB_00594dbb
    JLE 0x00594dc7                      ; 00594dbe
        ;   XREF to: 00594dc7 (CONDITIONAL_JUMP)  ; LAB_00594dc7
    MOVSD ES:EDI,ESI                    ; 00594dc0 | g_SRenderVertex_ARRAY_007bee34[0].projected_vertex.inv_z
    SUB ECX,0x4                         ; 00594dc1
    JLE 0x00594dc7                      ; 00594dc4
        ;   XREF to: 00594dc7 (CONDITIONAL_JUMP)  ; LAB_00594dc7
    MOVSD ES:EDI,ESI                    ; 00594dc6 | g_SRenderVertex_ARRAY_007bee34[0].projected_vertex.screen_x
    INC dword ptr [0x007bee30]          ; 00594dc7 | g_INT_007bee30
        ;   Label: LAB_00594dc7
    MOV ESI,dword ptr [ESP]             ; 00594dcd
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x02665a68]      ; 00594dd0 | g_INT_02665a68
    INC ESI                             ; 00594dd6
    ADD EBX,0x30                        ; 00594dd7
    MOV dword ptr [ESP],ESI             ; 00594dda
    CMP ESI,EDI                         ; 00594ddd
    JL 0x00594d3f                       ; 00594ddf
        ;   XREF to: 00594d3f (CONDITIONAL_JUMP)  ; LAB_00594d3f
    ADD ESP,0x4                         ; 00594de5
        ;   Label: LAB_00594de5
    POP EBP                             ; 00594de8
    POP EDI                             ; 00594de9
    POP ESI                             ; 00594dea
    POP EBX                             ; 00594deb
    RET                                 ; 00594dec
    IMUL EAX,dword ptr [0x007bee30],0x30 ; 00594ded | g_INT_007bee30
        ;   Label: caseD_1
    ADD EAX,0x7bee34                    ; 00594df4 | g_SRenderVertex_ARRAY_007bee34
    PUSH EAX                            ; 00594df9
    PUSH EDX                            ; 00594dfa
    PUSH EBP                            ; 00594dfb
    CALL core_xform.cpp_clipInterpolateBottomPlane_FUN_005947f0 ; 00594dfc
        ;   XREF to: 005947f0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateBottomPlane_FUN_005947f0(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV ESI,dword ptr [0x007bee30]      ; 00594e01 | g_INT_007bee30
    INC ESI                             ; 00594e07
    ADD ESP,0xc                         ; 00594e08
    MOV dword ptr [0x007bee30],ESI      ; 00594e0b | g_INT_007bee30
    JMP 0x00594dcd                      ; 00594e11
        ;   XREF to: 00594dcd (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007bee30],0x30 ; 00594e13 | g_INT_007bee30
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 00594e1a
    MOV ESI,EDX                         ; 00594e1f
    ADD EDI,0x7bee34                    ; 00594e21 | g_SRenderVertex_ARRAY_007bee34
    TEST EDI,0x7                        ; 00594e27
    JZ 0x00594e35                       ; 00594e2d
        ;   XREF to: 00594e35 (CONDITIONAL_JUMP)  ; LAB_00594e35
    MOVSD ES:EDI,ESI                    ; 00594e2f | g_SRenderVertex_ARRAY_007bee34
    SUB ECX,0x4                         ; 00594e30
    JLE 0x00594e52                      ; 00594e33
        ;   XREF to: 00594e52 (CONDITIONAL_JUMP)  ; LAB_00594e52
    SUB ECX,0x8                         ; 00594e35
        ;   Label: LAB_00594e35
    JL 0x00594e46                       ; 00594e38
        ;   XREF to: 00594e46 (CONDITIONAL_JUMP)  ; LAB_00594e46
    FILD qword ptr [ESI]                ; 00594e3a
    ADD ESI,0x8                         ; 00594e3c
    FISTP qword ptr [EDI]               ; 00594e3f | g_SRenderVertex_ARRAY_007bee34[0].projected_vertex.transformed_y | g_SRenderVertex_ARRAY_007bee34[0].projected_vertex.inv_z
    ADD EDI,0x8                         ; 00594e41
    JMP 0x00594e35                      ; 00594e44
        ;   XREF to: 00594e35 (UNCONDITIONAL_JUMP)  ; LAB_00594e35
    ADD ECX,0x8                         ; 00594e46
        ;   Label: LAB_00594e46
    JLE 0x00594e52                      ; 00594e49
        ;   XREF to: 00594e52 (CONDITIONAL_JUMP)  ; LAB_00594e52
    MOVSD ES:EDI,ESI                    ; 00594e4b | g_SRenderVertex_ARRAY_007bee34[0].projected_vertex.inv_z
    SUB ECX,0x4                         ; 00594e4c
    JLE 0x00594e52                      ; 00594e4f
        ;   XREF to: 00594e52 (CONDITIONAL_JUMP)  ; LAB_00594e52
    MOVSD ES:EDI,ESI                    ; 00594e51 | g_SRenderVertex_ARRAY_007bee34[0].projected_vertex.screen_x
    MOV ECX,dword ptr [0x007bee30]      ; 00594e52 | g_INT_007bee30
        ;   Label: LAB_00594e52
    INC ECX                             ; 00594e58
    MOV dword ptr [0x007bee30],ECX      ; 00594e59 | g_INT_007bee30
    IMUL EAX,ECX,0x30                   ; 00594e5f
    ADD EAX,0x7bee34                    ; 00594e62 | g_SRenderVertex_ARRAY_007bee34
    PUSH EAX                            ; 00594e67
    PUSH EBP                            ; 00594e68
    PUSH EDX                            ; 00594e69
    CALL core_xform.cpp_clipInterpolateBottomPlane_FUN_005947f0 ; 00594e6a
        ;   XREF to: 005947f0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateBottomPlane_FUN_005947f0(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV EDI,dword ptr [0x007bee30]      ; 00594e6f | g_INT_007bee30
    INC EDI                             ; 00594e75
    ADD ESP,0xc                         ; 00594e76
    MOV dword ptr [0x007bee30],EDI      ; 00594e79 | g_INT_007bee30
    JMP 0x00594dcd                      ; 00594e7f
        ;   XREF to: 00594dcd (UNCONDITIONAL_JUMP)  ; caseD_3

