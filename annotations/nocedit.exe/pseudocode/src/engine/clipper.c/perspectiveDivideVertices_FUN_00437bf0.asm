; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_clipper.c_perspectiveDivideVertices_FUN_00437bf0(void)
;
;
; Referenced Globals:
;   int g_ClippedVertexCount
;   SRenderVertex[16] g_ClippedVertexBuffer
;   undefined4 g_ClippedVertexBuffer[0].projected_vertex.transformed_z
;   undefined4 DAT_00824e58
;   undefined4 DAT_00824e5c
;   undefined4 DAT_00824e60
;   undefined4 DAT_00824e88
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00437bf0
        ;   Label: engine_clipper.c_perspectiveDivideVertices_FUN_00437bf0
    PUSH ESI                            ; 00437bf1
    PUSH EDI                            ; 00437bf2
    PUSH EBP                            ; 00437bf3
    MOV ESI,dword ptr [0x00824e24]      ; 00437bf4 | g_ClippedVertexCount
    MOV EAX,0x824e28                    ; 00437bfa | g_ClippedVertexBuffer
    XOR ECX,ECX                         ; 00437bff
    TEST ESI,ESI                        ; 00437c01
    JLE 0x00437c1d                      ; 00437c03
        ;   XREF to: 00437c1d (CONDITIONAL_JUMP)  ; LAB_00437c1d
    MOV EDX,dword ptr [EAX + 0x8]       ; 00437c05 | g_ClippedVertexBuffer[0].projected_vertex.transformed_z | DAT_00824e60
        ;   Label: LAB_00437c05
    TEST EDX,EDX                        ; 00437c08
    JZ 0x00437c28                       ; 00437c0a
        ;   XREF to: 00437c28 (CONDITIONAL_JUMP)  ; LAB_00437c28
    MOV EBX,dword ptr [EAX + 0x8]       ; 00437c0c | g_ClippedVertexBuffer[0].projected_vertex.transformed_z | DAT_00824e60
    CMP EBX,dword ptr [EAX]             ; 00437c0f | g_ClippedVertexBuffer | DAT_00824e58
    JGE 0x00437c36                      ; 00437c11
        ;   XREF to: 00437c36 (CONDITIONAL_JUMP)  ; LAB_00437c36
    MOV dword ptr [EAX],EBX             ; 00437c13 | g_ClippedVertexBuffer | DAT_00824e58
    INC ECX                             ; 00437c15
        ;   Label: LAB_00437c15
    ADD EAX,0x30                        ; 00437c16 | DAT_00824e58 | DAT_00824e88
    CMP ECX,ESI                         ; 00437c19
    JL 0x00437c05                       ; 00437c1b
        ;   XREF to: 00437c05 (CONDITIONAL_JUMP)  ; LAB_00437c05
    MOV dword ptr [0x00824e24],ESI      ; 00437c1d | g_ClippedVertexCount
        ;   Label: LAB_00437c1d
    POP EBP                             ; 00437c23
    POP EDI                             ; 00437c24
    POP ESI                             ; 00437c25
    POP EBX                             ; 00437c26
    RET                                 ; 00437c27
    MOV dword ptr [EAX + 0x8],0x1       ; 00437c28 | DAT_00824e60
        ;   Label: LAB_00437c28
    MOV dword ptr [EAX],EDX             ; 00437c2f | DAT_00824e58
    MOV dword ptr [EAX + 0x4],EDX       ; 00437c31 | DAT_00824e5c
    JMP 0x00437c15                      ; 00437c34
        ;   XREF to: 00437c15 (UNCONDITIONAL_JUMP)  ; LAB_00437c15
    MOV EDX,EBX                         ; 00437c36
        ;   Label: LAB_00437c36
    MOV EDI,dword ptr [EAX]             ; 00437c38 | DAT_00824e58
    NEG EDX                             ; 00437c3a
    CMP EDX,EDI                         ; 00437c3c
    JLE 0x00437c44                      ; 00437c3e
        ;   XREF to: 00437c44 (CONDITIONAL_JUMP)  ; LAB_00437c44
    MOV dword ptr [EAX],EDX             ; 00437c40 | DAT_00824e58
    JMP 0x00437c15                      ; 00437c42
        ;   XREF to: 00437c15 (UNCONDITIONAL_JUMP)  ; LAB_00437c15
    MOV EBP,dword ptr [EAX + 0x8]       ; 00437c44 | DAT_00824e60
        ;   Label: LAB_00437c44
    MOV EBX,dword ptr [EAX + 0x4]       ; 00437c47 | DAT_00824e5c
    CMP EBX,EBP                         ; 00437c4a
    JLE 0x00437c53                      ; 00437c4c
        ;   XREF to: 00437c53 (CONDITIONAL_JUMP)  ; LAB_00437c53
    MOV dword ptr [EAX + 0x4],EBP       ; 00437c4e | DAT_00824e5c
    JMP 0x00437c15                      ; 00437c51
        ;   XREF to: 00437c15 (UNCONDITIONAL_JUMP)  ; LAB_00437c15
    CMP EDX,EBX                         ; 00437c53
        ;   Label: LAB_00437c53
    JLE 0x00437c15                      ; 00437c55
        ;   XREF to: 00437c15 (CONDITIONAL_JUMP)  ; LAB_00437c15
    MOV dword ptr [EAX + 0x4],EDX       ; 00437c57 | DAT_00824e5c
    JMP 0x00437c15                      ; 00437c5a
        ;   XREF to: 00437c15 (UNCONDITIONAL_JUMP)  ; LAB_00437c15

