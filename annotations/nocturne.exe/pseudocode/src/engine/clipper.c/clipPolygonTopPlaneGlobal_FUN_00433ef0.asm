; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_clipPolygonTopPlaneGlobal_FUN_00433ef0(void)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   void* switchdataD_00433ee0 = 00433f52
;   void* PTR_caseD_3_00433eec = 00433f7c
;   int g_INT_00767b44
;   int g_INT_00767b48
;   SRenderVertex[16] g_SRenderVertex_ARRAY_0076874c
;   undefined4 g_SRenderVertex_ARRAY_0076874c[0].projected_vertex.transformed_y
;   undefined4 g_SRenderVertex_ARRAY_0076874c[0].projected_vertex.transformed_z
;   undefined4 g_SRenderVertex_ARRAY_0076874c[1].projected_vertex.transformed_x
;   undefined4 g_SRenderVertex_ARRAY_0076874c[1].projected_vertex.transformed_y
;   undefined4 g_SRenderVertex_ARRAY_0076874c[1].projected_vertex.transformed_z
;   SRenderVertex[16] g_SRenderVertex_ARRAY_00768d4c
;   undefined4 g_SRenderVertex_ARRAY_00768d4c[0].projected_vertex.transformed_y
;
; Called Functions:
;   engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433a00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433ef0
        ;   Label: engine_clipper.c_clipPolygonTopPlaneGlobal_FUN_00433ef0
    PUSH ESI                            ; 00433ef1
    PUSH EDI                            ; 00433ef2
    PUSH EBP                            ; 00433ef3
    SUB ESP,0x4                         ; 00433ef4
    XOR EDX,EDX                         ; 00433ef7
    MOV ECX,dword ptr [0x00767b44]      ; 00433ef9 | g_INT_00767b44
    MOV dword ptr [ESP],EDX             ; 00433eff
    TEST ECX,ECX                        ; 00433f02
    JLE 0x00433f94                      ; 00433f04
        ;   XREF to: 00433f94 (CONDITIONAL_JUMP)  ; LAB_00433f94
    MOV EBX,0x76874c                    ; 00433f0a | g_SRenderVertex_ARRAY_0076874c
    MOV EAX,dword ptr [ESP]             ; 00433f0f
        ;   Label: LAB_00433f0f
    MOV EBP,dword ptr [0x00767b44]      ; 00433f12 | g_INT_00767b44
    INC EAX                             ; 00433f18
    CMP EAX,EBP                         ; 00433f19
    JNZ 0x00433f1f                      ; 00433f1b
        ;   XREF to: 00433f1f (CONDITIONAL_JUMP)  ; LAB_00433f1f
    XOR EAX,EBP                         ; 00433f1d
    IMUL EAX,EAX,0x30                   ; 00433f1f
        ;   Label: LAB_00433f1f
    MOV EBP,0x76874c                    ; 00433f22 | g_SRenderVertex_ARRAY_0076874c
    MOV EDX,EBX                         ; 00433f27
    MOV EDI,dword ptr [EBX + 0x4]       ; 00433f29 | g_SRenderVertex_ARRAY_0076874c[0].projected_vertex.transformed_y | g_SRenderVertex_ARRAY_0076874c[1].projected_vertex.transformed_y
    MOV ECX,dword ptr [EBX + 0x8]       ; 00433f2c | g_SRenderVertex_ARRAY_0076874c[0].projected_vertex.transformed_z | g_SRenderVertex_ARRAY_0076874c[1].projected_vertex.transformed_z
    ADD EBP,EAX                         ; 00433f2f
    XOR EAX,EAX                         ; 00433f31
    CMP EDI,ECX                         ; 00433f33
    JL 0x00433f3c                       ; 00433f35
        ;   XREF to: 00433f3c (CONDITIONAL_JUMP)  ; LAB_00433f3c
    MOV EAX,0x1                         ; 00433f37
    MOV ESI,dword ptr [EBP + 0x8]       ; 00433f3c | g_SRenderVertex_ARRAY_0076874c[0].projected_vertex.transformed_z
        ;   Label: LAB_00433f3c
    CMP ESI,dword ptr [EBP + 0x4]       ; 00433f3f | g_SRenderVertex_ARRAY_0076874c[0].projected_vertex.transformed_y
    JG 0x00433f46                       ; 00433f42
        ;   XREF to: 00433f46 (CONDITIONAL_JUMP)  ; LAB_00433f46
    OR AL,0x2                           ; 00433f44
    CMP EAX,0x3                         ; 00433f46
        ;   Label: LAB_00433f46
    JA 0x00433f7c                       ; 00433f49
        ;   XREF to: 00433f7c (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x433ee0]  ; 00433f4b | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x00767b48],0x30 ; 00433f52 | g_INT_00767b48
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 00433f59
    MOV ESI,EDX                         ; 00433f5e
    ADD EDI,0x768d4c                    ; 00433f60 | g_SRenderVertex_ARRAY_00768d4c
    PUSH EDI                            ; 00433f66
    MOV EAX,ECX                         ; 00433f67
    SHR ECX,0x2                         ; 00433f69
    MOVSD.REP ES:EDI,ESI                ; 00433f6c | g_SRenderVertex_ARRAY_0076874c[1].projected_vertex.transformed_x | g_SRenderVertex_ARRAY_00768d4c | g_SRenderVertex_ARRAY_0076874c[1].projected_vertex.transformed_y
    MOV CL,AL                           ; 00433f6e
    AND CL,0x3                          ; 00433f70
    MOVSB.REP ES:EDI,ESI                ; 00433f73 | g_SRenderVertex_ARRAY_0076874c[1].projected_vertex.transformed_y | g_SRenderVertex_ARRAY_00768d4c[0].projected_vertex.transformed_y
    POP EDI                             ; 00433f75
    INC dword ptr [0x00767b48]          ; 00433f76 | g_INT_00767b48
    MOV ESI,dword ptr [ESP]             ; 00433f7c
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x00767b44]      ; 00433f7f | g_INT_00767b44
    INC ESI                             ; 00433f85
    ADD EBX,0x30                        ; 00433f86
    MOV dword ptr [ESP],ESI             ; 00433f89
    CMP ESI,EDI                         ; 00433f8c
    JL 0x00433f0f                       ; 00433f8e
        ;   XREF to: 00433f0f (CONDITIONAL_JUMP)  ; LAB_00433f0f
    ADD ESP,0x4                         ; 00433f94
        ;   Label: LAB_00433f94
    POP EBP                             ; 00433f97
    POP EDI                             ; 00433f98
    POP ESI                             ; 00433f99
    POP EBX                             ; 00433f9a
    RET                                 ; 00433f9b
    IMUL EAX,dword ptr [0x00767b48],0x30 ; 00433f9c | g_INT_00767b48
        ;   Label: caseD_1
    ADD EAX,0x768d4c                    ; 00433fa3 | g_SRenderVertex_ARRAY_00768d4c
    PUSH EAX                            ; 00433fa8
    PUSH EDX                            ; 00433fa9 | g_SRenderVertex_ARRAY_0076874c[1].projected_vertex.transformed_x
    PUSH EBP                            ; 00433faa
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433a00 ; 00433fab
        ;   XREF to: 00433a00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433a00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x00767b48]      ; 00433fb0 | g_INT_00767b48
    INC ESI                             ; 00433fb6
    ADD ESP,0xc                         ; 00433fb7
    MOV dword ptr [0x00767b48],ESI      ; 00433fba | g_INT_00767b48
    JMP 0x00433f7c                      ; 00433fc0
        ;   XREF to: 00433f7c (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x00767b48],0x30 ; 00433fc2 | g_INT_00767b48
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 00433fc9
    MOV ESI,EDX                         ; 00433fce
    ADD EDI,0x768d4c                    ; 00433fd0 | g_SRenderVertex_ARRAY_00768d4c
    PUSH EDI                            ; 00433fd6
    MOV EAX,ECX                         ; 00433fd7
    SHR ECX,0x2                         ; 00433fd9
    MOVSD.REP ES:EDI,ESI                ; 00433fdc | g_SRenderVertex_ARRAY_0076874c[1].projected_vertex.transformed_x | g_SRenderVertex_ARRAY_00768d4c | g_SRenderVertex_ARRAY_0076874c[1].projected_vertex.transformed_y
    MOV CL,AL                           ; 00433fde
    AND CL,0x3                          ; 00433fe0
    MOVSB.REP ES:EDI,ESI                ; 00433fe3 | g_SRenderVertex_ARRAY_0076874c[1].projected_vertex.transformed_y | g_SRenderVertex_ARRAY_00768d4c[0].projected_vertex.transformed_y
    POP EDI                             ; 00433fe5
    MOV ECX,dword ptr [0x00767b48]      ; 00433fe6 | g_INT_00767b48
    INC ECX                             ; 00433fec
    MOV dword ptr [0x00767b48],ECX      ; 00433fed | g_INT_00767b48
    IMUL EAX,ECX,0x30                   ; 00433ff3
    ADD EAX,0x768d4c                    ; 00433ff6 | g_SRenderVertex_ARRAY_00768d4c
    PUSH EAX                            ; 00433ffb
    PUSH EBP                            ; 00433ffc
    PUSH EDX                            ; 00433ffd | g_SRenderVertex_ARRAY_0076874c[1].projected_vertex.transformed_x
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433a00 ; 00433ffe
        ;   XREF to: 00433a00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433a00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x00767b48]      ; 00434003 | g_INT_00767b48
    INC EDI                             ; 00434009
    ADD ESP,0xc                         ; 0043400a
    MOV dword ptr [0x00767b48],EDI      ; 0043400d | g_INT_00767b48
    JMP 0x00433f7c                      ; 00434013
        ;   XREF to: 00433f7c (UNCONDITIONAL_JUMP)  ; caseD_3

