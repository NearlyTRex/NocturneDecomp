; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_clipPolygonFarPlane_FUN_00431070(void)
;
;
; Referenced Globals:
;   undefined1* PTR_caseD_3_0043106c = 004311b5
;   int g_INT_00609b34 = 0x7fffffff
;   int g_INT_007bee30
;   SRenderVertex[16] g_SRenderVertex_ARRAY_007bee34
;   undefined4 g_SRenderVertex_ARRAY_007bee34[0].projected_vertex.transformed_y
;   undefined4 g_SRenderVertex_ARRAY_007bee34[0].projected_vertex.inv_z
;   undefined4 g_SRenderVertex_ARRAY_007bee34[0].projected_vertex.screen_x
;   int g_INT_007bf4b4
;   SRenderVertex[16] g_SRenderVertex_ARRAY_007bf4b8
;   undefined4 g_SRenderVertex_ARRAY_007bf4b8[0].projected_vertex.transformed_z
;
; Called Functions:
;   engine_clipper.c_interpolateVertexFarClip_FUN_00430a50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431070
        ;   Label: engine_clipper.c_clipPolygonFarPlane_FUN_00431070
    PUSH ESI                            ; 00431071
    PUSH EDI                            ; 00431072
    PUSH EBP                            ; 00431073
    SUB ESP,0x4                         ; 00431074
    MOV EDX,dword ptr [0x00609b34]      ; 00431077 | g_INT_00609b34
    XOR EBX,EBX                         ; 0043107d
    TEST EDX,EDX                        ; 0043107f
    JZ 0x004310b6                       ; 00431081
        ;   XREF to: 004310b6 (CONDITIONAL_JUMP)  ; LAB_004310b6
    MOV ECX,dword ptr [0x007bee30]      ; 00431083 | g_INT_007bee30
    TEST ECX,ECX                        ; 00431089
    JLE 0x004310ae                      ; 0043108b
        ;   XREF to: 004310ae (CONDITIONAL_JUMP)  ; LAB_004310ae
    LEA EDI,[ECX*0x4 + 0x0]             ; 0043108d
    SUB EDI,ECX                         ; 00431094
    XOR EAX,EAX                         ; 00431096
    SHL EDI,0x4                         ; 00431098
    MOV EDX,dword ptr [EAX + 0x7bee3c]  ; 0043109b
        ;   Label: LAB_0043109b
    CMP EBX,EDX                         ; 004310a1
    JGE 0x004310a7                      ; 004310a3
        ;   XREF to: 004310a7 (CONDITIONAL_JUMP)  ; LAB_004310a7
    MOV EBX,EDX                         ; 004310a5
    ADD EAX,0x30                        ; 004310a7
        ;   Label: LAB_004310a7
    CMP EAX,EDI                         ; 004310aa
    JL 0x0043109b                       ; 004310ac
        ;   XREF to: 0043109b (CONDITIONAL_JUMP)  ; LAB_0043109b
    CMP EBX,dword ptr [0x00609b34]      ; 004310ae | g_INT_00609b34
        ;   Label: LAB_004310ae
    JGE 0x004310be                      ; 004310b4
        ;   XREF to: 004310be (CONDITIONAL_JUMP)  ; LAB_004310be
    ADD ESP,0x4                         ; 004310b6
        ;   Label: LAB_004310b6
    POP EBP                             ; 004310b9
    POP EDI                             ; 004310ba
    POP ESI                             ; 004310bb
    POP EBX                             ; 004310bc
    RET                                 ; 004310bd
    MOV EAX,[0x007bee30]                ; 004310be | g_INT_007bee30
        ;   Label: LAB_004310be
    MOV [0x007bf4b4],EAX                ; 004310c3 | g_INT_007bf4b4
    LEA ECX,[EAX*0x4 + 0x0]             ; 004310c8
    MOV ESI,0x7bee34                    ; 004310cf
    SUB ECX,EAX                         ; 004310d4
    MOV EDI,0x7bf4b8                    ; 004310d6
    SHL ECX,0x4                         ; 004310db
    XOR EBX,EBX                         ; 004310de
    TEST EDI,0x7                        ; 004310e0
    JZ 0x004310ee                       ; 004310e6
        ;   XREF to: 004310ee (CONDITIONAL_JUMP)  ; LAB_004310ee
    MOVSD ES:EDI,ESI                    ; 004310e8
    SUB ECX,0x4                         ; 004310e9
    JLE 0x0043110b                      ; 004310ec
        ;   XREF to: 0043110b (CONDITIONAL_JUMP)  ; LAB_0043110b
    SUB ECX,0x8                         ; 004310ee
        ;   Label: LAB_004310ee
    JL 0x004310ff                       ; 004310f1
        ;   XREF to: 004310ff (CONDITIONAL_JUMP)  ; LAB_004310ff
    FILD qword ptr [ESI]                ; 004310f3
    ADD ESI,0x8                         ; 004310f5
    FISTP qword ptr [EDI]               ; 004310f8
    ADD EDI,0x8                         ; 004310fa
    JMP 0x004310ee                      ; 004310fd
        ;   XREF to: 004310ee (UNCONDITIONAL_JUMP)  ; LAB_004310ee
    ADD ECX,0x8                         ; 004310ff
        ;   Label: LAB_004310ff
    JLE 0x0043110b                      ; 00431102
        ;   XREF to: 0043110b (CONDITIONAL_JUMP)  ; LAB_0043110b
    MOVSD ES:EDI,ESI                    ; 00431104
    SUB ECX,0x4                         ; 00431105
    JLE 0x0043110b                      ; 00431108
        ;   XREF to: 0043110b (CONDITIONAL_JUMP)  ; LAB_0043110b
    MOVSD ES:EDI,ESI                    ; 0043110a
    XOR EDI,EDI                         ; 0043110b
        ;   Label: LAB_0043110b
    MOV EBP,dword ptr [0x007bf4b4]      ; 0043110d | g_INT_007bf4b4
    MOV dword ptr [0x007bee30],EDI      ; 00431113 | g_INT_007bee30
    TEST EBP,EBP                        ; 00431119
    JLE 0x004310b6                      ; 0043111b
        ;   XREF to: 004310b6 (CONDITIONAL_JUMP)  ; LAB_004310b6
    MOV EBP,0x7bf4b8                    ; 0043111d
    MOV ESI,dword ptr [0x007bf4b4]      ; 00431122 | g_INT_007bf4b4
        ;   Label: LAB_00431122
    LEA EAX,[EBX + 0x1]                 ; 00431128
    CMP EAX,ESI                         ; 0043112b
    JNZ 0x00431131                      ; 0043112d
        ;   XREF to: 00431131 (CONDITIONAL_JUMP)  ; LAB_00431131
    XOR EAX,ESI                         ; 0043112f
    IMUL EAX,EAX,0x30                   ; 00431131
        ;   Label: LAB_00431131
    MOV EDI,0x7bf4b8                    ; 00431134 | g_SRenderVertex_ARRAY_007bf4b8
    MOV ECX,dword ptr [0x00609b34]      ; 00431139 | g_INT_00609b34
    ADD EDI,EAX                         ; 0043113f
    MOV EDX,EBP                         ; 00431141
    MOV dword ptr [ESP],EDI             ; 00431143
    MOV EDI,dword ptr [EBP + 0x8]       ; 00431146
    XOR EAX,EAX                         ; 00431149
    CMP EDI,ECX                         ; 0043114b
    JL 0x00431154                       ; 0043114d
        ;   XREF to: 00431154 (CONDITIONAL_JUMP)  ; LAB_00431154
    MOV EAX,0x1                         ; 0043114f
    MOV EDI,dword ptr [ESP]             ; 00431154
        ;   Label: LAB_00431154
    MOV ESI,dword ptr [0x00609b34]      ; 00431157 | g_INT_00609b34
    CMP ESI,dword ptr [EDI + 0x8]       ; 0043115d | g_SRenderVertex_ARRAY_007bf4b8[0].projected_vertex.transformed_z
    JG 0x00431164                       ; 00431160
        ;   XREF to: 00431164 (CONDITIONAL_JUMP)  ; LAB_00431164
    OR AL,0x2                           ; 00431162
    CMP EAX,0x3                         ; 00431164
        ;   Label: LAB_00431164
    JA 0x004311b5                       ; 00431167
        ;   XREF to: 004311b5 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x431060]  ; 00431169 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007bee30],0x30 ; 00431170 | g_INT_007bee30
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 00431177
    MOV ESI,EDX                         ; 0043117c
    ADD EDI,0x7bee34                    ; 0043117e | g_SRenderVertex_ARRAY_007bee34
    TEST EDI,0x7                        ; 00431184
    JZ 0x00431192                       ; 0043118a
        ;   XREF to: 00431192 (CONDITIONAL_JUMP)  ; LAB_00431192
    MOVSD ES:EDI,ESI                    ; 0043118c | g_SRenderVertex_ARRAY_007bee34
    SUB ECX,0x4                         ; 0043118d
    JLE 0x004311af                      ; 00431190
        ;   XREF to: 004311af (CONDITIONAL_JUMP)  ; LAB_004311af
    SUB ECX,0x8                         ; 00431192
        ;   Label: LAB_00431192
    JL 0x004311a3                       ; 00431195
        ;   XREF to: 004311a3 (CONDITIONAL_JUMP)  ; LAB_004311a3
    FILD qword ptr [ESI]                ; 00431197
    ADD ESI,0x8                         ; 00431199
    FISTP qword ptr [EDI]               ; 0043119c | g_SRenderVertex_ARRAY_007bee34[0].projected_vertex.transformed_y | g_SRenderVertex_ARRAY_007bee34[0].projected_vertex.inv_z
    ADD EDI,0x8                         ; 0043119e
    JMP 0x00431192                      ; 004311a1
        ;   XREF to: 00431192 (UNCONDITIONAL_JUMP)  ; LAB_00431192
    ADD ECX,0x8                         ; 004311a3
        ;   Label: LAB_004311a3
    JLE 0x004311af                      ; 004311a6
        ;   XREF to: 004311af (CONDITIONAL_JUMP)  ; LAB_004311af
    MOVSD ES:EDI,ESI                    ; 004311a8 | g_SRenderVertex_ARRAY_007bee34[0].projected_vertex.inv_z
    SUB ECX,0x4                         ; 004311a9
    JLE 0x004311af                      ; 004311ac
        ;   XREF to: 004311af (CONDITIONAL_JUMP)  ; LAB_004311af
    MOVSD ES:EDI,ESI                    ; 004311ae | g_SRenderVertex_ARRAY_007bee34[0].projected_vertex.screen_x
    INC dword ptr [0x007bee30]          ; 004311af | g_INT_007bee30
        ;   Label: LAB_004311af
    MOV ECX,dword ptr [0x007bf4b4]      ; 004311b5 | g_INT_007bf4b4
        ;   Label: caseD_3
    INC EBX                             ; 004311bb
    ADD EBP,0x30                        ; 004311bc
    CMP EBX,ECX                         ; 004311bf
    JGE 0x004310b6                      ; 004311c1
        ;   XREF to: 004310b6 (CONDITIONAL_JUMP)  ; LAB_004310b6
    JMP 0x00431122                      ; 004311c7
        ;   XREF to: 00431122 (UNCONDITIONAL_JUMP)  ; LAB_00431122
    IMUL EAX,dword ptr [0x007bee30],0x30 ; 004311cc | g_INT_007bee30
        ;   Label: caseD_1
    ADD EAX,0x7bee34                    ; 004311d3 | g_SRenderVertex_ARRAY_007bee34
    PUSH EAX                            ; 004311d8
    PUSH EDX                            ; 004311d9
    MOV ESI,dword ptr [ESP + 0x8]       ; 004311da
    PUSH ESI                            ; 004311de
    CALL engine_clipper.c_interpolateVertexFarClip_FUN_00430a50 ; 004311df
        ;   XREF to: 00430a50 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexFarClip_FUN_00430a50(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x007bee30]      ; 004311e4 | g_INT_007bee30
    INC EDI                             ; 004311ea
    ADD ESP,0xc                         ; 004311eb
    MOV dword ptr [0x007bee30],EDI      ; 004311ee | g_INT_007bee30
    JMP 0x004311b5                      ; 004311f4
        ;   XREF to: 004311b5 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007bee30],0x30 ; 004311f6 | g_INT_007bee30
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 004311fd
    MOV ESI,EDX                         ; 00431202
    ADD EDI,0x7bee34                    ; 00431204 | g_SRenderVertex_ARRAY_007bee34
    TEST EDI,0x7                        ; 0043120a
    JZ 0x00431218                       ; 00431210
        ;   XREF to: 00431218 (CONDITIONAL_JUMP)  ; LAB_00431218
    MOVSD ES:EDI,ESI                    ; 00431212 | g_SRenderVertex_ARRAY_007bee34
    SUB ECX,0x4                         ; 00431213
    JLE 0x00431235                      ; 00431216
        ;   XREF to: 00431235 (CONDITIONAL_JUMP)  ; LAB_00431235
    SUB ECX,0x8                         ; 00431218
        ;   Label: LAB_00431218
    JL 0x00431229                       ; 0043121b
        ;   XREF to: 00431229 (CONDITIONAL_JUMP)  ; LAB_00431229
    FILD qword ptr [ESI]                ; 0043121d
    ADD ESI,0x8                         ; 0043121f
    FISTP qword ptr [EDI]               ; 00431222 | g_SRenderVertex_ARRAY_007bee34[0].projected_vertex.transformed_y | g_SRenderVertex_ARRAY_007bee34[0].projected_vertex.inv_z
    ADD EDI,0x8                         ; 00431224
    JMP 0x00431218                      ; 00431227
        ;   XREF to: 00431218 (UNCONDITIONAL_JUMP)  ; LAB_00431218
    ADD ECX,0x8                         ; 00431229
        ;   Label: LAB_00431229
    JLE 0x00431235                      ; 0043122c
        ;   XREF to: 00431235 (CONDITIONAL_JUMP)  ; LAB_00431235
    MOVSD ES:EDI,ESI                    ; 0043122e | g_SRenderVertex_ARRAY_007bee34[0].projected_vertex.inv_z
    SUB ECX,0x4                         ; 0043122f
    JLE 0x00431235                      ; 00431232
        ;   XREF to: 00431235 (CONDITIONAL_JUMP)  ; LAB_00431235
    MOVSD ES:EDI,ESI                    ; 00431234 | g_SRenderVertex_ARRAY_007bee34[0].projected_vertex.screen_x
    MOV ECX,dword ptr [0x007bee30]      ; 00431235 | g_INT_007bee30
        ;   Label: LAB_00431235
    INC ECX                             ; 0043123b
    MOV dword ptr [0x007bee30],ECX      ; 0043123c | g_INT_007bee30
    IMUL EAX,ECX,0x30                   ; 00431242
    ADD EAX,0x7bee34                    ; 00431245 | g_SRenderVertex_ARRAY_007bee34
    PUSH EAX                            ; 0043124a
    MOV EDI,dword ptr [ESP + 0x4]       ; 0043124b
    PUSH EDI                            ; 0043124f
    PUSH EDX                            ; 00431250
    CALL engine_clipper.c_interpolateVertexFarClip_FUN_00430a50 ; 00431251
        ;   XREF to: 00430a50 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexFarClip_FUN_00430a50(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EAX,[0x007bee30]                ; 00431256 | g_INT_007bee30
    INC EAX                             ; 0043125b
    ADD ESP,0xc                         ; 0043125c
    MOV [0x007bee30],EAX                ; 0043125f | g_INT_007bee30
    JMP 0x004311b5                      ; 00431264
        ;   XREF to: 004311b5 (UNCONDITIONAL_JUMP)  ; caseD_3

