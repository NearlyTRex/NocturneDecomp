; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_clipper_c_clipPolygonRightPlane_FUN_00430b70(SRenderVertex **input_vertices,SRenderVertex **output_vertices,int vertex_count)
;
; Parameters:
; SRenderVertex * * Stack[0x4]:4   input_vertices
; SRenderVertex * * Stack[0x8]:4   output_vertices
; int              Stack[0xc]:4   vertex_count
;
; Referenced Globals:
;   undefined1* switchdataD_00430b54 = 00430bbf
;   undefined1* PTR_caseD_1_00430b58 = 00430bea
;   undefined1* PTR_caseD_3_00430b60 = 00430bc4
;   TerminatedCString s_engine_clipper_c_005cd962
;   TerminatedCString s_Ran_out_of_clipped_verts_005cd976
;   undefined4 DAT_007bfab8
;   undefined4 DAT_007bfcf8
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_clipper.c_interpolateVertexRightClip_FUN_00430650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00430b70
        ;   Label: engine_clipper.c_clipPolygonRightPlane_FUN_00430b70
    PUSH ESI                            ; 00430b71
    PUSH EDI                            ; 00430b72
    PUSH EBP                            ; 00430b73
    SUB ESP,0x8                         ; 00430b74
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00430b77
    MOV EBP,dword ptr [ESP + 0x20]      ; 00430b7b
    XOR EBX,EBX                         ; 00430b7f
    MOV EAX,dword ptr [ESP + 0x24]      ; 00430b81
    MOV dword ptr [ESP],EBX             ; 00430b85
    MOV ESI,dword ptr [EDX + EAX*0x4 + -0x4] ; 00430b88
    TEST EAX,EAX                        ; 00430b8c
    JLE 0x00430be0                      ; 00430b8e
        ;   XREF to: 00430be0 (CONDITIONAL_JUMP)  ; LAB_00430be0
    MOV dword ptr [ESP + 0x4],EDX       ; 00430b90
    MOV EDI,dword ptr [ESP + 0x4]       ; 00430b94
        ;   Label: LAB_00430b94
    MOV EDX,dword ptr [ESI]             ; 00430b98
    MOV ECX,dword ptr [ESI + 0x8]       ; 00430b9a
    XOR EAX,EAX                         ; 00430b9d
    MOV EDI,dword ptr [EDI]             ; 00430b9f
    CMP EDX,ECX                         ; 00430ba1
    JL 0x00430baa                       ; 00430ba3
        ;   XREF to: 00430baa (CONDITIONAL_JUMP)  ; LAB_00430baa
    MOV EAX,0x1                         ; 00430ba5
    MOV ECX,dword ptr [EDI + 0x8]       ; 00430baa
        ;   Label: LAB_00430baa
    CMP ECX,dword ptr [EDI]             ; 00430bad
    JG 0x00430bb3                       ; 00430baf
        ;   XREF to: 00430bb3 (CONDITIONAL_JUMP)  ; LAB_00430bb3
    OR AL,0x2                           ; 00430bb1
    CMP EAX,0x3                         ; 00430bb3
        ;   Label: LAB_00430bb3
    JA 0x00430bc4                       ; 00430bb6
        ;   XREF to: 00430bc4 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x430b54]  ; 00430bb8 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    INC EBX                             ; 00430bbf
        ;   Label: caseD_0
    MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI ; 00430bc0
    MOV EAX,dword ptr [ESP + 0x4]       ; 00430bc4
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP]             ; 00430bc8
    MOV ECX,dword ptr [ESP + 0x24]      ; 00430bcb
    MOV ESI,EDI                         ; 00430bcf
    ADD EAX,0x4                         ; 00430bd1
    INC EDX                             ; 00430bd4
    MOV dword ptr [ESP + 0x4],EAX       ; 00430bd5
    MOV dword ptr [ESP],EDX             ; 00430bd9
    CMP EDX,ECX                         ; 00430bdc
    JL 0x00430b94                       ; 00430bde
        ;   XREF to: 00430b94 (CONDITIONAL_JUMP)  ; LAB_00430b94
    MOV EAX,EBX                         ; 00430be0
        ;   Label: LAB_00430be0
    ADD ESP,0x8                         ; 00430be2
    POP EBP                             ; 00430be5
    POP EDI                             ; 00430be6
    POP ESI                             ; 00430be7
    POP EBX                             ; 00430be8
    RET                                 ; 00430be9
    CMP dword ptr [0x007bfcf8],0xc      ; 00430bea | DAT_007bfcf8
        ;   Label: caseD_1
    JL 0x00430c15                       ; 00430bf1
        ;   XREF to: 00430c15 (CONDITIONAL_JUMP)  ; LAB_00430c15
    MOV ECX,0x5cd962                    ; 00430bf3 | = "..\\engine\\clipper.c"
    MOV EAX,0x5e                        ; 00430bf8
    PUSH 0x5cd976                       ; 00430bfd | = "Ran out of clipped verts!"
    MOV dword ptr [0x01d046a0],ECX      ; 00430c02 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00430c08 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00430c0d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00430c12
    MOV EAX,[0x007bfcf8]                ; 00430c15 | DAT_007bfcf8
        ;   Label: LAB_00430c15
    IMUL EDX,EAX,0x30                   ; 00430c1a
    ADD EDX,0x7bfab8                    ; 00430c1d | DAT_007bfab8
    PUSH EDX                            ; 00430c23
    PUSH ESI                            ; 00430c24
    INC EBX                             ; 00430c25
    INC EAX                             ; 00430c26
    PUSH EDI                            ; 00430c27
    MOV [0x007bfcf8],EAX                ; 00430c28 | DAT_007bfcf8
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 00430c2d
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_00430650 ; 00430c31
        ;   XREF to: 00430650 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClip_FUN_00430650(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 00430c36
    JMP 0x00430bc4                      ; 00430c39
        ;   XREF to: 00430bc4 (UNCONDITIONAL_JUMP)  ; caseD_3
    INC EBX                             ; 00430c3b
        ;   Label: caseD_2
    MOV EAX,[0x007bfcf8]                ; 00430c3c | DAT_007bfcf8
    MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI ; 00430c41
    CMP EAX,0xc                         ; 00430c45
    JL 0x00430c6d                       ; 00430c48
        ;   XREF to: 00430c6d (CONDITIONAL_JUMP)  ; LAB_00430c6d
    MOV EDX,0x5cd962                    ; 00430c4a | = "..\\engine\\clipper.c"
    MOV ECX,0x5e                        ; 00430c4f
    PUSH 0x5cd976                       ; 00430c54 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01d046a0],EDX      ; 00430c59 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00430c5f | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00430c65
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00430c6a
    MOV EAX,[0x007bfcf8]                ; 00430c6d | DAT_007bfcf8
        ;   Label: LAB_00430c6d
    IMUL EDX,EAX,0x30                   ; 00430c72
    ADD EDX,0x7bfab8                    ; 00430c75 | DAT_007bfab8
    PUSH EDX                            ; 00430c7b
    PUSH EDI                            ; 00430c7c
    INC EBX                             ; 00430c7d
    INC EAX                             ; 00430c7e
    PUSH ESI                            ; 00430c7f
    MOV [0x007bfcf8],EAX                ; 00430c80 | DAT_007bfcf8
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 00430c85
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_00430650 ; 00430c89
        ;   XREF to: 00430650 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClip_FUN_00430650(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 00430c8e
    JMP 0x00430bc4                      ; 00430c91
        ;   XREF to: 00430bc4 (UNCONDITIONAL_JUMP)  ; caseD_3

