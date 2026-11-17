; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_clipPolygonStage3_FUN_0055dcb0(void)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined1* switchdataD_0055dc94 = 0055dd12
;   undefined1* PTR_caseD_3_0055dca0 = 0055dd57
;   int g_ClipVertexCountStage3
;   int g_ClipVertexCountStage4
;   undefined4 g_ClipVertexBufferStage3[0].projected_vertex.transformed_y
;   undefined4 g_ClipVertexBufferStage3[0].projected_vertex.transformed_z
;   undefined4 g_ClipVertexBufferStage3[1].projected_vertex.transformed_x
;   undefined4 g_ClipVertexBufferStage3[1].projected_vertex.transformed_y
;   undefined4 g_ClipVertexBufferStage3[1].projected_vertex.transformed_z
;   undefined4 g_ClipVertexBufferStage3[1].projected_vertex.inv_z
;   undefined4 g_ClipVertexBufferStage3[1].projected_vertex.screen_x
;   SRenderVertex[32] g_ClipVertexBufferStage4
;   undefined4 g_ClipVertexBufferStage4[0].projected_vertex.transformed_y
;   undefined4 g_ClipVertexBufferStage4[0].projected_vertex.inv_z
;   undefined4 g_ClipVertexBufferStage4[0].projected_vertex.screen_x
;
; Called Functions:
;   core_xform.cpp_clipInterpolateTopPlane_FUN_0055d830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055dcb0
        ;   Label: core_xform.cpp_clipPolygonStage3_FUN_0055dcb0
    PUSH ESI                            ; 0055dcb1
    PUSH EDI                            ; 0055dcb2
    PUSH EBP                            ; 0055dcb3
    SUB ESP,0x4                         ; 0055dcb4
    XOR EDX,EDX                         ; 0055dcb7
    MOV ECX,dword ptr [0x02de3138]      ; 0055dcb9 | g_ClipVertexCountStage3
    MOV dword ptr [ESP],EDX             ; 0055dcbf
    TEST ECX,ECX                        ; 0055dcc2
    JLE 0x0055dd6f                      ; 0055dcc4
        ;   XREF to: 0055dd6f (CONDITIONAL_JUMP)  ; LAB_0055dd6f
    MOV EBX,0x2de3d40                   ; 0055dcca
    MOV EAX,dword ptr [ESP]             ; 0055dccf
        ;   Label: LAB_0055dccf
    MOV EBP,dword ptr [0x02de3138]      ; 0055dcd2 | g_ClipVertexCountStage3
    INC EAX                             ; 0055dcd8
    CMP EAX,EBP                         ; 0055dcd9
    JNZ 0x0055dcdf                      ; 0055dcdb
        ;   XREF to: 0055dcdf (CONDITIONAL_JUMP)  ; LAB_0055dcdf
    XOR EAX,EBP                         ; 0055dcdd
    IMUL EAX,EAX,0x30                   ; 0055dcdf
        ;   Label: LAB_0055dcdf
    MOV EBP,0x2de3d40                   ; 0055dce2
    MOV EDX,EBX                         ; 0055dce7
    MOV EDI,dword ptr [EBX + 0x4]       ; 0055dce9 | g_ClipVertexBufferStage3[0].projected_vertex.transformed_y | g_ClipVertexBufferStage3[1].projected_vertex.transformed_y
    MOV ECX,dword ptr [EBX + 0x8]       ; 0055dcec | g_ClipVertexBufferStage3[0].projected_vertex.transformed_z | g_ClipVertexBufferStage3[1].projected_vertex.transformed_z
    ADD EBP,EAX                         ; 0055dcef
    XOR EAX,EAX                         ; 0055dcf1
    CMP EDI,ECX                         ; 0055dcf3
    JL 0x0055dcfc                       ; 0055dcf5
        ;   XREF to: 0055dcfc (CONDITIONAL_JUMP)  ; LAB_0055dcfc
    MOV EAX,0x1                         ; 0055dcf7
    MOV ESI,dword ptr [EBP + 0x8]       ; 0055dcfc | g_ClipVertexBufferStage3[0].projected_vertex.transformed_z
        ;   Label: LAB_0055dcfc
    CMP ESI,dword ptr [EBP + 0x4]       ; 0055dcff | g_ClipVertexBufferStage3[0].projected_vertex.transformed_y
    JG 0x0055dd06                       ; 0055dd02
        ;   XREF to: 0055dd06 (CONDITIONAL_JUMP)  ; LAB_0055dd06
    OR AL,0x2                           ; 0055dd04
    CMP EAX,0x3                         ; 0055dd06
        ;   Label: LAB_0055dd06
    JA 0x0055dd57                       ; 0055dd09
        ;   XREF to: 0055dd57 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x55dc94]  ; 0055dd0b | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x02de313c],0x30 ; 0055dd12 | g_ClipVertexCountStage4
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0055dd19
    MOV ESI,EDX                         ; 0055dd1e
    ADD EDI,0x2de4340                   ; 0055dd20
    TEST EDI,0x7                        ; 0055dd26
    JZ 0x0055dd34                       ; 0055dd2c
        ;   XREF to: 0055dd34 (CONDITIONAL_JUMP)  ; LAB_0055dd34
    MOVSD ES:EDI,ESI                    ; 0055dd2e | g_ClipVertexBufferStage4 | g_ClipVertexBufferStage3[1].projected_vertex.transformed_x
    SUB ECX,0x4                         ; 0055dd2f
    JLE 0x0055dd51                      ; 0055dd32
        ;   XREF to: 0055dd51 (CONDITIONAL_JUMP)  ; LAB_0055dd51
    SUB ECX,0x8                         ; 0055dd34
        ;   Label: LAB_0055dd34
    JL 0x0055dd45                       ; 0055dd37
        ;   XREF to: 0055dd45 (CONDITIONAL_JUMP)  ; LAB_0055dd45
    FILD qword ptr [ESI]                ; 0055dd39 | g_ClipVertexBufferStage3[1].projected_vertex.transformed_y | g_ClipVertexBufferStage3[1].projected_vertex.inv_z | g_ClipVertexBufferStage3[1].projected_vertex.transformed_x
    ADD ESI,0x8                         ; 0055dd3b
    FISTP qword ptr [EDI]               ; 0055dd3e | g_ClipVertexBufferStage4[0].projected_vertex.transformed_y | g_ClipVertexBufferStage4[0].projected_vertex.inv_z
    ADD EDI,0x8                         ; 0055dd40
    JMP 0x0055dd34                      ; 0055dd43
        ;   XREF to: 0055dd34 (UNCONDITIONAL_JUMP)  ; LAB_0055dd34
    ADD ECX,0x8                         ; 0055dd45
        ;   Label: LAB_0055dd45
    JLE 0x0055dd51                      ; 0055dd48
        ;   XREF to: 0055dd51 (CONDITIONAL_JUMP)  ; LAB_0055dd51
    MOVSD ES:EDI,ESI                    ; 0055dd4a | g_ClipVertexBufferStage4[0].projected_vertex.inv_z | g_ClipVertexBufferStage3[1].projected_vertex.inv_z
    SUB ECX,0x4                         ; 0055dd4b
    JLE 0x0055dd51                      ; 0055dd4e
        ;   XREF to: 0055dd51 (CONDITIONAL_JUMP)  ; LAB_0055dd51
    MOVSD ES:EDI,ESI                    ; 0055dd50 | g_ClipVertexBufferStage4[0].projected_vertex.screen_x | g_ClipVertexBufferStage3[1].projected_vertex.screen_x
    INC dword ptr [0x02de313c]          ; 0055dd51 | g_ClipVertexCountStage4
        ;   Label: LAB_0055dd51
    MOV ESI,dword ptr [ESP]             ; 0055dd57
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x02de3138]      ; 0055dd5a | g_ClipVertexCountStage3
    INC ESI                             ; 0055dd60
    ADD EBX,0x30                        ; 0055dd61
    MOV dword ptr [ESP],ESI             ; 0055dd64
    CMP ESI,EDI                         ; 0055dd67
    JL 0x0055dccf                       ; 0055dd69
        ;   XREF to: 0055dccf (CONDITIONAL_JUMP)  ; LAB_0055dccf
    ADD ESP,0x4                         ; 0055dd6f
        ;   Label: LAB_0055dd6f
    POP EBP                             ; 0055dd72
    POP EDI                             ; 0055dd73
    POP ESI                             ; 0055dd74
    POP EBX                             ; 0055dd75
    RET                                 ; 0055dd76
    IMUL EAX,dword ptr [0x02de313c],0x30 ; 0055dd77 | g_ClipVertexCountStage4
        ;   Label: caseD_1
    ADD EAX,0x2de4340                   ; 0055dd7e
    PUSH EAX                            ; 0055dd83
    PUSH EDX                            ; 0055dd84 | g_ClipVertexBufferStage3[1].projected_vertex.transformed_x
    PUSH EBP                            ; 0055dd85
    CALL core_xform.cpp_clipInterpolateTopPlane_FUN_0055d830 ; 0055dd86
        ;   XREF to: 0055d830 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateTopPlane_FUN_0055d830(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV ESI,dword ptr [0x02de313c]      ; 0055dd8b | g_ClipVertexCountStage4
    INC ESI                             ; 0055dd91
    ADD ESP,0xc                         ; 0055dd92
    MOV dword ptr [0x02de313c],ESI      ; 0055dd95 | g_ClipVertexCountStage4
    JMP 0x0055dd57                      ; 0055dd9b
        ;   XREF to: 0055dd57 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x02de313c],0x30 ; 0055dd9d | g_ClipVertexCountStage4
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0055dda4
    MOV ESI,EDX                         ; 0055dda9
    ADD EDI,0x2de4340                   ; 0055ddab
    TEST EDI,0x7                        ; 0055ddb1
    JZ 0x0055ddbf                       ; 0055ddb7
        ;   XREF to: 0055ddbf (CONDITIONAL_JUMP)  ; LAB_0055ddbf
    MOVSD ES:EDI,ESI                    ; 0055ddb9 | g_ClipVertexBufferStage4 | g_ClipVertexBufferStage3[1].projected_vertex.transformed_x
    SUB ECX,0x4                         ; 0055ddba
    JLE 0x0055dddc                      ; 0055ddbd
        ;   XREF to: 0055dddc (CONDITIONAL_JUMP)  ; LAB_0055dddc
    SUB ECX,0x8                         ; 0055ddbf
        ;   Label: LAB_0055ddbf
    JL 0x0055ddd0                       ; 0055ddc2
        ;   XREF to: 0055ddd0 (CONDITIONAL_JUMP)  ; LAB_0055ddd0
    FILD qword ptr [ESI]                ; 0055ddc4 | g_ClipVertexBufferStage3[1].projected_vertex.transformed_y | g_ClipVertexBufferStage3[1].projected_vertex.inv_z | g_ClipVertexBufferStage3[1].projected_vertex.transformed_x
    ADD ESI,0x8                         ; 0055ddc6
    FISTP qword ptr [EDI]               ; 0055ddc9 | g_ClipVertexBufferStage4[0].projected_vertex.transformed_y | g_ClipVertexBufferStage4[0].projected_vertex.inv_z
    ADD EDI,0x8                         ; 0055ddcb
    JMP 0x0055ddbf                      ; 0055ddce
        ;   XREF to: 0055ddbf (UNCONDITIONAL_JUMP)  ; LAB_0055ddbf
    ADD ECX,0x8                         ; 0055ddd0
        ;   Label: LAB_0055ddd0
    JLE 0x0055dddc                      ; 0055ddd3
        ;   XREF to: 0055dddc (CONDITIONAL_JUMP)  ; LAB_0055dddc
    MOVSD ES:EDI,ESI                    ; 0055ddd5 | g_ClipVertexBufferStage4[0].projected_vertex.inv_z | g_ClipVertexBufferStage3[1].projected_vertex.inv_z
    SUB ECX,0x4                         ; 0055ddd6
    JLE 0x0055dddc                      ; 0055ddd9
        ;   XREF to: 0055dddc (CONDITIONAL_JUMP)  ; LAB_0055dddc
    MOVSD ES:EDI,ESI                    ; 0055dddb | g_ClipVertexBufferStage4[0].projected_vertex.screen_x | g_ClipVertexBufferStage3[1].projected_vertex.screen_x
    MOV ECX,dword ptr [0x02de313c]      ; 0055dddc | g_ClipVertexCountStage4
        ;   Label: LAB_0055dddc
    INC ECX                             ; 0055dde2
    MOV dword ptr [0x02de313c],ECX      ; 0055dde3 | g_ClipVertexCountStage4
    IMUL EAX,ECX,0x30                   ; 0055dde9
    ADD EAX,0x2de4340                   ; 0055ddec
    PUSH EAX                            ; 0055ddf1
    PUSH EBP                            ; 0055ddf2
    PUSH EDX                            ; 0055ddf3 | g_ClipVertexBufferStage3[1].projected_vertex.transformed_x
    CALL core_xform.cpp_clipInterpolateTopPlane_FUN_0055d830 ; 0055ddf4
        ;   XREF to: 0055d830 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateTopPlane_FUN_0055d830(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV EDI,dword ptr [0x02de313c]      ; 0055ddf9 | g_ClipVertexCountStage4
    INC EDI                             ; 0055ddff
    ADD ESP,0xc                         ; 0055de00
    MOV dword ptr [0x02de313c],EDI      ; 0055de03 | g_ClipVertexCountStage4
    JMP 0x0055dd57                      ; 0055de09
        ;   XREF to: 0055dd57 (UNCONDITIONAL_JUMP)  ; caseD_3

