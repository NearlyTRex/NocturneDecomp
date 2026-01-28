; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_clipper_c_clipPolygonHorizontalPlanes_FUN_00437980(void)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   void* switchdataD_00437970 = 004379e2
;   void* PTR_caseD_3_0043797c = 00437a0c
;   int g_TempVertexCount
;   int g_IntermediateVertexCount
;   SRenderVertex[16] g_ClipperWorkingBuffer
;   undefined4 g_ClipperWorkingBuffer[0].projected_vertex.transformed_y
;   undefined4 DAT_00826908
;   undefined4 g_ClipperWorkingBuffer[1].projected_vertex.transformed_x
;   undefined4 DAT_00826934
;   undefined4 DAT_00826938
;   SRenderVertex[16] g_ClipperIntermediateBuffer
;   undefined4 DAT_00826f04
;
; Called Functions:
;   engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00437490
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00437980
        ;   Label: engine_clipper.c_clipPolygonHorizontalPlanes_FUN_00437980
    PUSH ESI                            ; 00437981
    PUSH EDI                            ; 00437982
    PUSH EBP                            ; 00437983
    SUB ESP,0x4                         ; 00437984
    XOR EDX,EDX                         ; 00437987
    MOV ECX,dword ptr [0x00825cf8]      ; 00437989 | g_TempVertexCount
    MOV dword ptr [ESP],EDX             ; 0043798f
    TEST ECX,ECX                        ; 00437992
    JLE 0x00437a24                      ; 00437994
        ;   XREF to: 00437a24 (CONDITIONAL_JUMP)  ; LAB_00437a24
    MOV EBX,0x826900                    ; 0043799a | g_ClipperWorkingBuffer
    MOV EAX,dword ptr [ESP]             ; 0043799f
        ;   Label: LAB_0043799f
    MOV EBP,dword ptr [0x00825cf8]      ; 004379a2 | g_TempVertexCount
    INC EAX                             ; 004379a8
    CMP EAX,EBP                         ; 004379a9
    JNZ 0x004379af                      ; 004379ab
        ;   XREF to: 004379af (CONDITIONAL_JUMP)  ; LAB_004379af
    XOR EAX,EBP                         ; 004379ad
    IMUL EAX,EAX,0x30                   ; 004379af
        ;   Label: LAB_004379af
    MOV EBP,0x826900                    ; 004379b2 | g_ClipperWorkingBuffer
    MOV EDX,EBX                         ; 004379b7
    MOV EDI,dword ptr [EBX + 0x4]       ; 004379b9 | g_ClipperWorkingBuffer[0].projected_vertex.transformed_y | DAT_00826934
    MOV ECX,dword ptr [EBX + 0x8]       ; 004379bc | DAT_00826908 | DAT_00826938
    ADD EBP,EAX                         ; 004379bf
    XOR EAX,EAX                         ; 004379c1
    CMP EDI,ECX                         ; 004379c3
    JL 0x004379cc                       ; 004379c5
        ;   XREF to: 004379cc (CONDITIONAL_JUMP)  ; LAB_004379cc
    MOV EAX,0x1                         ; 004379c7
    MOV ESI,dword ptr [EBP + 0x8]       ; 004379cc | DAT_00826908
        ;   Label: LAB_004379cc
    CMP ESI,dword ptr [EBP + 0x4]       ; 004379cf | g_ClipperWorkingBuffer[0].projected_vertex.transformed_y
    JG 0x004379d6                       ; 004379d2
        ;   XREF to: 004379d6 (CONDITIONAL_JUMP)  ; LAB_004379d6
    OR AL,0x2                           ; 004379d4
    CMP EAX,0x3                         ; 004379d6
        ;   Label: LAB_004379d6
    JA 0x00437a0c                       ; 004379d9
        ;   XREF to: 00437a0c (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x437970]  ; 004379db | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x00825cfc],0x30 ; 004379e2 | g_IntermediateVertexCount
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 004379e9
    MOV ESI,EDX                         ; 004379ee
    ADD EDI,0x826f00                    ; 004379f0 | g_ClipperIntermediateBuffer
    PUSH EDI                            ; 004379f6
    MOV EAX,ECX                         ; 004379f7
    SHR ECX,0x2                         ; 004379f9
    MOVSD.REP ES:EDI,ESI                ; 004379fc | g_ClipperWorkingBuffer[1].projected_vertex.transformed_x | g_ClipperIntermediateBuffer | DAT_00826934
    MOV CL,AL                           ; 004379fe
    AND CL,0x3                          ; 00437a00
    MOVSB.REP ES:EDI,ESI                ; 00437a03 | DAT_00826934 | DAT_00826f04
    POP EDI                             ; 00437a05
    INC dword ptr [0x00825cfc]          ; 00437a06 | g_IntermediateVertexCount
    MOV ESI,dword ptr [ESP]             ; 00437a0c
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x00825cf8]      ; 00437a0f | g_TempVertexCount
    INC ESI                             ; 00437a15
    ADD EBX,0x30                        ; 00437a16
    MOV dword ptr [ESP],ESI             ; 00437a19
    CMP ESI,EDI                         ; 00437a1c
    JL 0x0043799f                       ; 00437a1e
        ;   XREF to: 0043799f (CONDITIONAL_JUMP)  ; LAB_0043799f
    ADD ESP,0x4                         ; 00437a24
        ;   Label: LAB_00437a24
    POP EBP                             ; 00437a27
    POP EDI                             ; 00437a28
    POP ESI                             ; 00437a29
    POP EBX                             ; 00437a2a
    RET                                 ; 00437a2b
    IMUL EAX,dword ptr [0x00825cfc],0x30 ; 00437a2c | g_IntermediateVertexCount
        ;   Label: caseD_1
    ADD EAX,0x826f00                    ; 00437a33 | g_ClipperIntermediateBuffer
    PUSH EAX                            ; 00437a38
    PUSH EDX                            ; 00437a39 | g_ClipperWorkingBuffer[1].projected_vertex.transformed_x
    PUSH EBP                            ; 00437a3a
    CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00437490 ; 00437a3b
        ;   XREF to: 00437490 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00437490(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x00825cfc]      ; 00437a40 | g_IntermediateVertexCount
    INC ESI                             ; 00437a46
    ADD ESP,0xc                         ; 00437a47
    MOV dword ptr [0x00825cfc],ESI      ; 00437a4a | g_IntermediateVertexCount
    JMP 0x00437a0c                      ; 00437a50
        ;   XREF to: 00437a0c (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x00825cfc],0x30 ; 00437a52 | g_IntermediateVertexCount
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 00437a59
    MOV ESI,EDX                         ; 00437a5e
    ADD EDI,0x826f00                    ; 00437a60 | g_ClipperIntermediateBuffer
    PUSH EDI                            ; 00437a66
    MOV EAX,ECX                         ; 00437a67
    SHR ECX,0x2                         ; 00437a69
    MOVSD.REP ES:EDI,ESI                ; 00437a6c | g_ClipperWorkingBuffer[1].projected_vertex.transformed_x | g_ClipperIntermediateBuffer | DAT_00826934
    MOV CL,AL                           ; 00437a6e
    AND CL,0x3                          ; 00437a70
    MOVSB.REP ES:EDI,ESI                ; 00437a73 | DAT_00826934 | DAT_00826f04
    POP EDI                             ; 00437a75
    MOV ECX,dword ptr [0x00825cfc]      ; 00437a76 | g_IntermediateVertexCount
    INC ECX                             ; 00437a7c
    MOV dword ptr [0x00825cfc],ECX      ; 00437a7d | g_IntermediateVertexCount
    IMUL EAX,ECX,0x30                   ; 00437a83
    ADD EAX,0x826f00                    ; 00437a86 | g_ClipperIntermediateBuffer
    PUSH EAX                            ; 00437a8b
    PUSH EBP                            ; 00437a8c
    PUSH EDX                            ; 00437a8d | g_ClipperWorkingBuffer[1].projected_vertex.transformed_x
    CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00437490 ; 00437a8e
        ;   XREF to: 00437490 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00437490(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x00825cfc]      ; 00437a93 | g_IntermediateVertexCount
    INC EDI                             ; 00437a99
    ADD ESP,0xc                         ; 00437a9a
    MOV dword ptr [0x00825cfc],EDI      ; 00437a9d | g_IntermediateVertexCount
    JMP 0x00437a0c                      ; 00437aa3
        ;   XREF to: 00437a0c (UNCONDITIONAL_JUMP)  ; caseD_3

