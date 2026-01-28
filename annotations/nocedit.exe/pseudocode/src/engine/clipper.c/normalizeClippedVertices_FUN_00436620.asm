; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_clipper_c_normalizeClippedVertices_FUN_00436620(void)
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

    PUSH EBX                            ; 00436620
        ;   Label: engine_clipper.c_normalizeClippedVertices_FUN_00436620
    PUSH ESI                            ; 00436621
    PUSH EDI                            ; 00436622
    PUSH EBP                            ; 00436623
    MOV ESI,dword ptr [0x00824e24]      ; 00436624 | g_ClippedVertexCount
    XOR ECX,ECX                         ; 0043662a
    TEST ESI,ESI                        ; 0043662c
    JLE 0x0043664d                      ; 0043662e
        ;   XREF to: 0043664d (CONDITIONAL_JUMP)  ; LAB_0043664d
    MOV EAX,0x824e28                    ; 00436630 | g_ClippedVertexBuffer
    MOV EDX,dword ptr [EAX + 0x8]       ; 00436635 | g_ClippedVertexBuffer[0].projected_vertex.transformed_z | DAT_00824e60
        ;   Label: LAB_00436635
    TEST EDX,EDX                        ; 00436638
    JZ 0x00436658                       ; 0043663a
        ;   XREF to: 00436658 (CONDITIONAL_JUMP)  ; LAB_00436658
    MOV EBX,dword ptr [EAX + 0x8]       ; 0043663c | g_ClippedVertexBuffer[0].projected_vertex.transformed_z | DAT_00824e60
    CMP EBX,dword ptr [EAX]             ; 0043663f | g_ClippedVertexBuffer | DAT_00824e58
    JGE 0x00436666                      ; 00436641
        ;   XREF to: 00436666 (CONDITIONAL_JUMP)  ; LAB_00436666
    MOV dword ptr [EAX],EBX             ; 00436643 | g_ClippedVertexBuffer | DAT_00824e58
    INC ECX                             ; 00436645
        ;   Label: LAB_00436645
    ADD EAX,0x30                        ; 00436646 | DAT_00824e58 | DAT_00824e88
    CMP ECX,ESI                         ; 00436649
    JL 0x00436635                       ; 0043664b
        ;   XREF to: 00436635 (CONDITIONAL_JUMP)  ; LAB_00436635
    MOV dword ptr [0x00824e24],ESI      ; 0043664d | g_ClippedVertexCount
        ;   Label: LAB_0043664d
    POP EBP                             ; 00436653
    POP EDI                             ; 00436654
    POP ESI                             ; 00436655
    POP EBX                             ; 00436656
    RET                                 ; 00436657
    MOV dword ptr [EAX + 0x8],0x1       ; 00436658 | DAT_00824e60
        ;   Label: LAB_00436658
    MOV dword ptr [EAX],EDX             ; 0043665f | DAT_00824e58
    MOV dword ptr [EAX + 0x4],EDX       ; 00436661 | DAT_00824e5c
    JMP 0x00436645                      ; 00436664
        ;   XREF to: 00436645 (UNCONDITIONAL_JUMP)  ; LAB_00436645
    MOV EDX,EBX                         ; 00436666
        ;   Label: LAB_00436666
    MOV EDI,dword ptr [EAX]             ; 00436668 | DAT_00824e58
    NEG EDX                             ; 0043666a
    CMP EDX,EDI                         ; 0043666c
    JLE 0x00436674                      ; 0043666e
        ;   XREF to: 00436674 (CONDITIONAL_JUMP)  ; LAB_00436674
    MOV dword ptr [EAX],EDX             ; 00436670 | DAT_00824e58
    JMP 0x00436645                      ; 00436672
        ;   XREF to: 00436645 (UNCONDITIONAL_JUMP)  ; LAB_00436645
    MOV EBP,dword ptr [EAX + 0x8]       ; 00436674 | DAT_00824e60
        ;   Label: LAB_00436674
    MOV EBX,dword ptr [EAX + 0x4]       ; 00436677 | DAT_00824e5c
    CMP EBX,EBP                         ; 0043667a
    JLE 0x00436683                      ; 0043667c
        ;   XREF to: 00436683 (CONDITIONAL_JUMP)  ; LAB_00436683
    MOV dword ptr [EAX + 0x4],EBP       ; 0043667e | DAT_00824e5c
    JMP 0x00436645                      ; 00436681
        ;   XREF to: 00436645 (UNCONDITIONAL_JUMP)  ; LAB_00436645
    CMP EDX,EBX                         ; 00436683
        ;   Label: LAB_00436683
    JLE 0x00436645                      ; 00436685
        ;   XREF to: 00436645 (CONDITIONAL_JUMP)  ; LAB_00436645
    MOV dword ptr [EAX + 0x4],EDX       ; 00436687 | DAT_00824e5c
    JMP 0x00436645                      ; 0043668a
        ;   XREF to: 00436645 (UNCONDITIONAL_JUMP)  ; LAB_00436645

