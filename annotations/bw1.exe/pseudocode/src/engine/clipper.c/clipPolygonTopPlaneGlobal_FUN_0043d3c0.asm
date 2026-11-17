; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_clipPolygonTopPlaneGlobal_FUN_0043d3c0(void)
;
;
; Referenced Globals:
;   undefined1* switchdataD_0043d3b0 = 0043d422
;   undefined1* PTR_caseD_3_0043d3bc = 0043d44c
;   int g_INT_007c8428
;   int g_INT_007c842c
;   SRenderVertex[16] g_SRenderVertex_ARRAY_007c9030
;   undefined4 g_SRenderVertex_ARRAY_007c9030[0].projected_vertex.transformed_y
;   undefined4 g_SRenderVertex_ARRAY_007c9030[0].projected_vertex.transformed_z
;   SRenderVertex[16] g_SRenderVertex_ARRAY_007c9630
;   undefined4 g_SRenderVertex_ARRAY_007c9630[0].projected_vertex.transformed_y
;
; Called Functions:
;   engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_0043ced0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043d3c0
        ;   Label: engine_clipper.c_clipPolygonTopPlaneGlobal_FUN_0043d3c0
    PUSH ESI                            ; 0043d3c1
    PUSH EDI                            ; 0043d3c2
    PUSH EBP                            ; 0043d3c3
    SUB ESP,0x4                         ; 0043d3c4
    XOR EDX,EDX                         ; 0043d3c7
    MOV ECX,dword ptr [0x007c8428]      ; 0043d3c9 | g_INT_007c8428
    MOV dword ptr [ESP],EDX             ; 0043d3cf
    TEST ECX,ECX                        ; 0043d3d2
    JLE 0x0043d464                      ; 0043d3d4
        ;   XREF to: 0043d464 (CONDITIONAL_JUMP)  ; LAB_0043d464
    MOV EBX,0x7c9030                    ; 0043d3da
    MOV EAX,dword ptr [ESP]             ; 0043d3df
        ;   Label: LAB_0043d3df
    MOV EBP,dword ptr [0x007c8428]      ; 0043d3e2 | g_INT_007c8428
    INC EAX                             ; 0043d3e8
    CMP EAX,EBP                         ; 0043d3e9
    JNZ 0x0043d3ef                      ; 0043d3eb
        ;   XREF to: 0043d3ef (CONDITIONAL_JUMP)  ; LAB_0043d3ef
    XOR EAX,EBP                         ; 0043d3ed
    IMUL EAX,EAX,0x30                   ; 0043d3ef
        ;   Label: LAB_0043d3ef
    MOV EBP,0x7c9030                    ; 0043d3f2 | g_SRenderVertex_ARRAY_007c9030
    MOV EDX,EBX                         ; 0043d3f7
    MOV EDI,dword ptr [EBX + 0x4]       ; 0043d3f9
    MOV ECX,dword ptr [EBX + 0x8]       ; 0043d3fc
    ADD EBP,EAX                         ; 0043d3ff
    XOR EAX,EAX                         ; 0043d401
    CMP EDI,ECX                         ; 0043d403
    JL 0x0043d40c                       ; 0043d405
        ;   XREF to: 0043d40c (CONDITIONAL_JUMP)  ; LAB_0043d40c
    MOV EAX,0x1                         ; 0043d407
    MOV ESI,dword ptr [EBP + 0x8]       ; 0043d40c | g_SRenderVertex_ARRAY_007c9030[0].projected_vertex.transformed_z
        ;   Label: LAB_0043d40c
    CMP ESI,dword ptr [EBP + 0x4]       ; 0043d40f | g_SRenderVertex_ARRAY_007c9030[0].projected_vertex.transformed_y
    JG 0x0043d416                       ; 0043d412
        ;   XREF to: 0043d416 (CONDITIONAL_JUMP)  ; LAB_0043d416
    OR AL,0x2                           ; 0043d414
    CMP EAX,0x3                         ; 0043d416
        ;   Label: LAB_0043d416
    JA 0x0043d44c                       ; 0043d419
        ;   XREF to: 0043d44c (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43d3b0]  ; 0043d41b | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007c842c],0x30 ; 0043d422 | g_INT_007c842c
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0043d429
    MOV ESI,EDX                         ; 0043d42e
    ADD EDI,0x7c9630                    ; 0043d430 | g_SRenderVertex_ARRAY_007c9630
    PUSH EDI                            ; 0043d436
    MOV EAX,ECX                         ; 0043d437
    SHR ECX,0x2                         ; 0043d439
    MOVSD.REP ES:EDI,ESI                ; 0043d43c | g_SRenderVertex_ARRAY_007c9630 | g_SRenderVertex_ARRAY_007c9630[0].projected_vertex.transformed_y
    MOV CL,AL                           ; 0043d43e
    AND CL,0x3                          ; 0043d440
    MOVSB.REP ES:EDI,ESI                ; 0043d443 | g_SRenderVertex_ARRAY_007c9630[0].projected_vertex.transformed_y
    POP EDI                             ; 0043d445
    INC dword ptr [0x007c842c]          ; 0043d446 | g_INT_007c842c
    MOV ESI,dword ptr [ESP]             ; 0043d44c
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x007c8428]      ; 0043d44f | g_INT_007c8428
    INC ESI                             ; 0043d455
    ADD EBX,0x30                        ; 0043d456
    MOV dword ptr [ESP],ESI             ; 0043d459
    CMP ESI,EDI                         ; 0043d45c
    JL 0x0043d3df                       ; 0043d45e
        ;   XREF to: 0043d3df (CONDITIONAL_JUMP)  ; LAB_0043d3df
    ADD ESP,0x4                         ; 0043d464
        ;   Label: LAB_0043d464
    POP EBP                             ; 0043d467
    POP EDI                             ; 0043d468
    POP ESI                             ; 0043d469
    POP EBX                             ; 0043d46a
    RET                                 ; 0043d46b
    IMUL EAX,dword ptr [0x007c842c],0x30 ; 0043d46c | g_INT_007c842c
        ;   Label: caseD_1
    ADD EAX,0x7c9630                    ; 0043d473 | g_SRenderVertex_ARRAY_007c9630
    PUSH EAX                            ; 0043d478
    PUSH EDX                            ; 0043d479
    PUSH EBP                            ; 0043d47a
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_0043ced0 ; 0043d47b
        ;   XREF to: 0043ced0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_0043ced0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x007c842c]      ; 0043d480 | g_INT_007c842c
    INC ESI                             ; 0043d486
    ADD ESP,0xc                         ; 0043d487
    MOV dword ptr [0x007c842c],ESI      ; 0043d48a | g_INT_007c842c
    JMP 0x0043d44c                      ; 0043d490
        ;   XREF to: 0043d44c (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007c842c],0x30 ; 0043d492 | g_INT_007c842c
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0043d499
    MOV ESI,EDX                         ; 0043d49e
    ADD EDI,0x7c9630                    ; 0043d4a0 | g_SRenderVertex_ARRAY_007c9630
    PUSH EDI                            ; 0043d4a6
    MOV EAX,ECX                         ; 0043d4a7
    SHR ECX,0x2                         ; 0043d4a9
    MOVSD.REP ES:EDI,ESI                ; 0043d4ac | g_SRenderVertex_ARRAY_007c9630 | g_SRenderVertex_ARRAY_007c9630[0].projected_vertex.transformed_y
    MOV CL,AL                           ; 0043d4ae
    AND CL,0x3                          ; 0043d4b0
    MOVSB.REP ES:EDI,ESI                ; 0043d4b3 | g_SRenderVertex_ARRAY_007c9630[0].projected_vertex.transformed_y
    POP EDI                             ; 0043d4b5
    MOV ECX,dword ptr [0x007c842c]      ; 0043d4b6 | g_INT_007c842c
    INC ECX                             ; 0043d4bc
    MOV dword ptr [0x007c842c],ECX      ; 0043d4bd | g_INT_007c842c
    IMUL EAX,ECX,0x30                   ; 0043d4c3
    ADD EAX,0x7c9630                    ; 0043d4c6 | g_SRenderVertex_ARRAY_007c9630
    PUSH EAX                            ; 0043d4cb
    PUSH EBP                            ; 0043d4cc
    PUSH EDX                            ; 0043d4cd
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_0043ced0 ; 0043d4ce
        ;   XREF to: 0043ced0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_0043ced0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x007c842c]      ; 0043d4d3 | g_INT_007c842c
    INC EDI                             ; 0043d4d9
    ADD ESP,0xc                         ; 0043d4da
    MOV dword ptr [0x007c842c],EDI      ; 0043d4dd | g_INT_007c842c
    JMP 0x0043d44c                      ; 0043d4e3
        ;   XREF to: 0043d44c (UNCONDITIONAL_JUMP)  ; caseD_3

