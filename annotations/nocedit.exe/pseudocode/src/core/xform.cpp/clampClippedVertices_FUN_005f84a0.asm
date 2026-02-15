; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_clampClippedVertices_FUN_005f84a0(void)
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

    PUSH EBX                            ; 005f84a0
        ;   Label: core_xform.cpp_clampClippedVertices_FUN_005f84a0
    PUSH ESI                            ; 005f84a1
    PUSH EDI                            ; 005f84a2
    PUSH EBP                            ; 005f84a3
    MOV ESI,dword ptr [0x00824e24]      ; 005f84a4 | g_ClippedVertexCount
    MOV EAX,0x824e28                    ; 005f84aa | g_ClippedVertexBuffer
    XOR ECX,ECX                         ; 005f84af
    TEST ESI,ESI                        ; 005f84b1
    JLE 0x005f84cd                      ; 005f84b3
        ;   XREF to: 005f84cd (CONDITIONAL_JUMP)  ; LAB_005f84cd
    MOV EDX,dword ptr [EAX + 0x8]       ; 005f84b5 | g_ClippedVertexBuffer[0].projected_vertex.transformed_z | DAT_00824e60
        ;   Label: LAB_005f84b5
    TEST EDX,EDX                        ; 005f84b8
    JZ 0x005f84d8                       ; 005f84ba
        ;   XREF to: 005f84d8 (CONDITIONAL_JUMP)  ; LAB_005f84d8
    MOV EBX,dword ptr [EAX + 0x8]       ; 005f84bc | g_ClippedVertexBuffer[0].projected_vertex.transformed_z | DAT_00824e60
    CMP EBX,dword ptr [EAX]             ; 005f84bf | g_ClippedVertexBuffer | DAT_00824e58
    JGE 0x005f84e6                      ; 005f84c1
        ;   XREF to: 005f84e6 (CONDITIONAL_JUMP)  ; LAB_005f84e6
    MOV dword ptr [EAX],EBX             ; 005f84c3 | g_ClippedVertexBuffer | DAT_00824e58
    INC ECX                             ; 005f84c5
        ;   Label: LAB_005f84c5
    ADD EAX,0x30                        ; 005f84c6 | DAT_00824e58 | DAT_00824e88
    CMP ECX,ESI                         ; 005f84c9
    JL 0x005f84b5                       ; 005f84cb
        ;   XREF to: 005f84b5 (CONDITIONAL_JUMP)  ; LAB_005f84b5
    MOV dword ptr [0x00824e24],ESI      ; 005f84cd | g_ClippedVertexCount
        ;   Label: LAB_005f84cd
    POP EBP                             ; 005f84d3
    POP EDI                             ; 005f84d4
    POP ESI                             ; 005f84d5
    POP EBX                             ; 005f84d6
    RET                                 ; 005f84d7
    MOV dword ptr [EAX + 0x8],0x1       ; 005f84d8 | DAT_00824e60
        ;   Label: LAB_005f84d8
    MOV dword ptr [EAX],EDX             ; 005f84df | DAT_00824e58
    MOV dword ptr [EAX + 0x4],EDX       ; 005f84e1 | DAT_00824e5c
    JMP 0x005f84c5                      ; 005f84e4
        ;   XREF to: 005f84c5 (UNCONDITIONAL_JUMP)  ; LAB_005f84c5
    MOV EDX,EBX                         ; 005f84e6
        ;   Label: LAB_005f84e6
    MOV EDI,dword ptr [EAX]             ; 005f84e8 | DAT_00824e58
    NEG EDX                             ; 005f84ea
    CMP EDX,EDI                         ; 005f84ec
    JLE 0x005f84f4                      ; 005f84ee
        ;   XREF to: 005f84f4 (CONDITIONAL_JUMP)  ; LAB_005f84f4
    MOV dword ptr [EAX],EDX             ; 005f84f0 | DAT_00824e58
    JMP 0x005f84c5                      ; 005f84f2
        ;   XREF to: 005f84c5 (UNCONDITIONAL_JUMP)  ; LAB_005f84c5
    MOV EBP,dword ptr [EAX + 0x8]       ; 005f84f4 | DAT_00824e60
        ;   Label: LAB_005f84f4
    MOV EBX,dword ptr [EAX + 0x4]       ; 005f84f7 | DAT_00824e5c
    CMP EBX,EBP                         ; 005f84fa
    JLE 0x005f8503                      ; 005f84fc
        ;   XREF to: 005f8503 (CONDITIONAL_JUMP)  ; LAB_005f8503
    MOV dword ptr [EAX + 0x4],EBP       ; 005f84fe | DAT_00824e5c
    JMP 0x005f84c5                      ; 005f8501
        ;   XREF to: 005f84c5 (UNCONDITIONAL_JUMP)  ; LAB_005f84c5
    CMP EDX,EBX                         ; 005f8503
        ;   Label: LAB_005f8503
    JLE 0x005f84c5                      ; 005f8505
        ;   XREF to: 005f84c5 (CONDITIONAL_JUMP)  ; LAB_005f84c5
    MOV dword ptr [EAX + 0x4],EDX       ; 005f8507 | DAT_00824e5c
    JMP 0x005f84c5                      ; 005f850a
        ;   XREF to: 005f84c5 (UNCONDITIONAL_JUMP)  ; LAB_005f84c5

