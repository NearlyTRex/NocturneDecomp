; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_clipPolygonVerticalPlanes_FUN_00437ac0(void)
;
; Local Variables:
; int              Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   void* PTR_caseD_1_00437aac = 00437b72
;   void* PTR_caseD_3_00437ab4 = 00437b52
;   int g_ClippedVertexCount
;   SRenderVertex[16] g_ClippedVertexBuffer
;   undefined4 DAT_00824e2c
;   int g_IntermediateVertexCount
;   SRenderVertex[16] g_ClipperIntermediateBuffer
;   undefined4 DAT_00826f04
;   undefined4 g_ClipperIntermediateBuffer[0].projected_vertex.transformed_z
;   undefined4 DAT_00826f34
;   undefined4 DAT_00826f38
;
; Called Functions:
;   engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_004375c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00437ac0
        ;   Label: engine_clipper.c_clipPolygonVerticalPlanes_FUN_00437ac0
    PUSH ESI                            ; 00437ac1
    PUSH EDI                            ; 00437ac2
    PUSH EBP                            ; 00437ac3
    SUB ESP,0x4                         ; 00437ac4
    XOR EDX,EDX                         ; 00437ac7
    MOV ECX,dword ptr [0x00825cfc]      ; 00437ac9 | g_IntermediateVertexCount
    MOV dword ptr [ESP],EDX             ; 00437acf
    TEST ECX,ECX                        ; 00437ad2
    JLE 0x00437b6a                      ; 00437ad4
        ;   XREF to: 00437b6a (CONDITIONAL_JUMP)  ; LAB_00437b6a
    MOV EBX,0x826f00                    ; 00437ada | g_ClipperIntermediateBuffer
    MOV EAX,dword ptr [ESP]             ; 00437adf
        ;   Label: LAB_00437adf
    MOV EBP,dword ptr [0x00825cfc]      ; 00437ae2 | g_IntermediateVertexCount
    INC EAX                             ; 00437ae8
    CMP EAX,EBP                         ; 00437ae9
    JNZ 0x00437aef                      ; 00437aeb
        ;   XREF to: 00437aef (CONDITIONAL_JUMP)  ; LAB_00437aef
    XOR EAX,EBP                         ; 00437aed
    IMUL EAX,EAX,0x30                   ; 00437aef
        ;   Label: LAB_00437aef
    MOV EBP,0x826f00                    ; 00437af2 | g_ClipperIntermediateBuffer
    MOV EDX,EBX                         ; 00437af7
    MOV EDI,dword ptr [EBX + 0x8]       ; 00437af9 | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_z | DAT_00826f38
    MOV ECX,dword ptr [EBX + 0x4]       ; 00437afc | DAT_00826f04 | DAT_00826f34
    NEG EDI                             ; 00437aff
    ADD EBP,EAX                         ; 00437b01
    XOR EAX,EAX                         ; 00437b03
    CMP EDI,ECX                         ; 00437b05
    JL 0x00437b0e                       ; 00437b07
        ;   XREF to: 00437b0e (CONDITIONAL_JUMP)  ; LAB_00437b0e
    MOV EAX,0x1                         ; 00437b09
    MOV EDI,dword ptr [EBP + 0x8]       ; 00437b0e | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_z
        ;   Label: LAB_00437b0e
    MOV ESI,dword ptr [EBP + 0x4]       ; 00437b11 | DAT_00826f04
    NEG EDI                             ; 00437b14
    CMP EDI,ESI                         ; 00437b16
    JL 0x00437b1c                       ; 00437b18
        ;   XREF to: 00437b1c (CONDITIONAL_JUMP)  ; LAB_00437b1c
    OR AL,0x2                           ; 00437b1a
    CMP EAX,0x3                         ; 00437b1c
        ;   Label: LAB_00437b1c
    JA 0x00437b52                       ; 00437b1f
        ;   XREF to: 00437b52 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x437aa8]  ; 00437b21 | caseD_0 | caseD_3 | caseD_1
        ;   Label: switchD
    IMUL EDI,dword ptr [0x00824e24],0x30 ; 00437b28 | g_ClippedVertexCount
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 00437b2f
    MOV ESI,EDX                         ; 00437b34
    ADD EDI,0x824e28                    ; 00437b36 | g_ClippedVertexBuffer
    PUSH EDI                            ; 00437b3c
    MOV EAX,ECX                         ; 00437b3d
    SHR ECX,0x2                         ; 00437b3f
    MOVSD.REP ES:EDI,ESI                ; 00437b42 | g_ClippedVertexBuffer | DAT_00824e2c | g_ClipperIntermediateBuffer
    MOV CL,AL                           ; 00437b44
    AND CL,0x3                          ; 00437b46
    MOVSB.REP ES:EDI,ESI                ; 00437b49 | g_ClippedVertexBuffer | DAT_00824e2c | DAT_00826f04
    POP EDI                             ; 00437b4b
    INC dword ptr [0x00824e24]          ; 00437b4c | g_ClippedVertexCount
    MOV ESI,dword ptr [ESP]             ; 00437b52
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x00825cfc]      ; 00437b55 | g_IntermediateVertexCount
    INC ESI                             ; 00437b5b
    ADD EBX,0x30                        ; 00437b5c
    MOV dword ptr [ESP],ESI             ; 00437b5f
    CMP ESI,EDI                         ; 00437b62
    JL 0x00437adf                       ; 00437b64
        ;   XREF to: 00437adf (CONDITIONAL_JUMP)  ; LAB_00437adf
    ADD ESP,0x4                         ; 00437b6a
        ;   Label: LAB_00437b6a
    POP EBP                             ; 00437b6d
    POP EDI                             ; 00437b6e
    POP ESI                             ; 00437b6f
    POP EBX                             ; 00437b70
    RET                                 ; 00437b71
    IMUL EAX,dword ptr [0x00824e24],0x30 ; 00437b72 | g_ClippedVertexCount
        ;   Label: caseD_1
    ADD EAX,0x824e28                    ; 00437b79 | g_ClippedVertexBuffer
    PUSH EAX                            ; 00437b7e
    PUSH EDX                            ; 00437b7f | g_ClipperIntermediateBuffer
    PUSH EBP                            ; 00437b80
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_004375c0 ; 00437b81
        ;   XREF to: 004375c0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_004375c0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x00824e24]      ; 00437b86 | g_ClippedVertexCount
    INC ESI                             ; 00437b8c
    ADD ESP,0xc                         ; 00437b8d
    MOV dword ptr [0x00824e24],ESI      ; 00437b90 | g_ClippedVertexCount
    JMP 0x00437b52                      ; 00437b96
        ;   XREF to: 00437b52 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x00824e24],0x30 ; 00437b98 | g_ClippedVertexCount
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 00437b9f
    MOV ESI,EDX                         ; 00437ba4
    ADD EDI,0x824e28                    ; 00437ba6 | g_ClippedVertexBuffer
    PUSH EDI                            ; 00437bac
    MOV EAX,ECX                         ; 00437bad
    SHR ECX,0x2                         ; 00437baf
    MOVSD.REP ES:EDI,ESI                ; 00437bb2 | g_ClippedVertexBuffer | DAT_00824e2c | g_ClipperIntermediateBuffer
    MOV CL,AL                           ; 00437bb4
    AND CL,0x3                          ; 00437bb6
    MOVSB.REP ES:EDI,ESI                ; 00437bb9 | g_ClippedVertexBuffer | DAT_00824e2c | DAT_00826f04
    POP EDI                             ; 00437bbb
    MOV ECX,dword ptr [0x00824e24]      ; 00437bbc | g_ClippedVertexCount
    INC ECX                             ; 00437bc2
    MOV dword ptr [0x00824e24],ECX      ; 00437bc3 | g_ClippedVertexCount
    IMUL EAX,ECX,0x30                   ; 00437bc9
    ADD EAX,0x824e28                    ; 00437bcc | g_ClippedVertexBuffer
    PUSH EAX                            ; 00437bd1
    PUSH EBP                            ; 00437bd2
    PUSH EDX                            ; 00437bd3 | g_ClipperIntermediateBuffer
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_004375c0 ; 00437bd4
        ;   XREF to: 004375c0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_004375c0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x00824e24]      ; 00437bd9 | g_ClippedVertexCount
    INC EDI                             ; 00437bdf
    ADD ESP,0xc                         ; 00437be0
    MOV dword ptr [0x00824e24],EDI      ; 00437be3 | g_ClippedVertexCount
    JMP 0x00437b52                      ; 00437be9
        ;   XREF to: 00437b52 (UNCONDITIONAL_JUMP)  ; caseD_3

