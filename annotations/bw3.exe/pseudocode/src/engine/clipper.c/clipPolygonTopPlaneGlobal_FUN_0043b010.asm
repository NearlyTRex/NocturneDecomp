; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_clipPolygonTopPlaneGlobal_FUN_0043b010(void)
;
;
; Referenced Globals:
;   undefined1* switchdataD_0043b000 = 0043b072
;   undefined1* PTR_caseD_1_0043b004 = 0043b0bc
;   undefined1* PTR_caseD_3_0043b00c = 0043b09c
;   string caseD_0
;   string caseD_2
;   int g_TempVertexCount
;   int g_IntermediateVertexCount
;   SRenderVertex[16] g_ClipperWorkingBuffer
;   undefined4 g_ClipperWorkingBuffer[0].projected_vertex.transformed_y
;   undefined4 g_ClipperWorkingBuffer[0].projected_vertex.transformed_z
;   SRenderVertex[16] g_ClipperIntermediateBuffer
;
; Called Functions:
;   engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_0043ab20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b010
        ;   Label: engine_clipper.c_clipPolygonTopPlaneGlobal_FUN_0043b010
    PUSH ESI                            ; 0043b011
    PUSH EDI                            ; 0043b012
    PUSH EBP                            ; 0043b013
    SUB ESP,0x4                         ; 0043b014
    XOR EDX,EDX                         ; 0043b017
    MOV ECX,dword ptr [0x007e4d5c]      ; 0043b019 | g_TempVertexCount
    MOV dword ptr [ESP],EDX             ; 0043b01f
    TEST ECX,ECX                        ; 0043b022
    JLE 0x0043b0b4                      ; 0043b024
        ;   XREF to: 0043b0b4 (CONDITIONAL_JUMP)  ; LAB_0043b0b4
    MOV EBX,0x7e5964                    ; 0043b02a
    MOV EAX,dword ptr [ESP]             ; 0043b02f
        ;   Label: LAB_0043b02f
    MOV EBP,dword ptr [0x007e4d5c]      ; 0043b032 | g_TempVertexCount
    INC EAX                             ; 0043b038
    CMP EAX,EBP                         ; 0043b039
    JNZ 0x0043b03f                      ; 0043b03b
        ;   XREF to: 0043b03f (CONDITIONAL_JUMP)  ; LAB_0043b03f
    XOR EAX,EBP                         ; 0043b03d
    IMUL EAX,EAX,0x30                   ; 0043b03f
        ;   Label: LAB_0043b03f
    MOV EBP,0x7e5964                    ; 0043b042 | g_ClipperWorkingBuffer
    MOV EDX,EBX                         ; 0043b047
    MOV EDI,dword ptr [EBX + 0x4]       ; 0043b049
    MOV ECX,dword ptr [EBX + 0x8]       ; 0043b04c
    ADD EBP,EAX                         ; 0043b04f
    XOR EAX,EAX                         ; 0043b051
    CMP EDI,ECX                         ; 0043b053
    JL 0x0043b05c                       ; 0043b055
        ;   XREF to: 0043b05c (CONDITIONAL_JUMP)  ; LAB_0043b05c
    MOV EAX,0x1                         ; 0043b057
    MOV ESI,dword ptr [EBP + 0x8]       ; 0043b05c | g_ClipperWorkingBuffer[0].projected_vertex.transformed_z
        ;   Label: LAB_0043b05c
    CMP ESI,dword ptr [EBP + 0x4]       ; 0043b05f | g_ClipperWorkingBuffer[0].projected_vertex.transformed_y
    JG 0x0043b066                       ; 0043b062
        ;   XREF to: 0043b066 (CONDITIONAL_JUMP)  ; LAB_0043b066
    OR AL,0x2                           ; 0043b064
    CMP EAX,0x3                         ; 0043b066
        ;   Label: LAB_0043b066
    JA 0x0043b09c                       ; 0043b069
        ;   XREF to: 0043b09c (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43b000]  ; 0043b06b | = "k=`M~" | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ESI,dword ptr [ESP]             ; 0043b09c
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x007e4d5c]      ; 0043b09f | g_TempVertexCount
    INC ESI                             ; 0043b0a5
    ADD EBX,0x30                        ; 0043b0a6
    MOV dword ptr [ESP],ESI             ; 0043b0a9
    CMP ESI,EDI                         ; 0043b0ac
    JL 0x0043b02f                       ; 0043b0ae
        ;   XREF to: 0043b02f (CONDITIONAL_JUMP)  ; LAB_0043b02f
    ADD ESP,0x4                         ; 0043b0b4
        ;   Label: LAB_0043b0b4
    POP EBP                             ; 0043b0b7
    POP EDI                             ; 0043b0b8
    POP ESI                             ; 0043b0b9
    POP EBX                             ; 0043b0ba
    RET                                 ; 0043b0bb
    IMUL EAX,dword ptr [0x007e4d60],0x30 ; 0043b0bc | g_IntermediateVertexCount
        ;   Label: caseD_1
    ADD EAX,0x7e5f64                    ; 0043b0c3 | g_ClipperIntermediateBuffer
    PUSH EAX                            ; 0043b0c8
    PUSH EDX                            ; 0043b0c9
    PUSH EBP                            ; 0043b0ca
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_0043ab20 ; 0043b0cb
        ;   XREF to: 0043ab20 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_0043ab20(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x007e4d60]      ; 0043b0d0 | g_IntermediateVertexCount
    INC ESI                             ; 0043b0d6
    ADD ESP,0xc                         ; 0043b0d7
    MOV dword ptr [0x007e4d60],ESI      ; 0043b0da | g_IntermediateVertexCount
    JMP 0x0043b09c                      ; 0043b0e0
        ;   XREF to: 0043b09c (UNCONDITIONAL_JUMP)  ; caseD_3

