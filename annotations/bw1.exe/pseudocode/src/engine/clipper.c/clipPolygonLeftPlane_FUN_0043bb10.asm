; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_clipper_c_clipPolygonLeftPlane_FUN_0043bb10(SRenderVertex **input_vertices,SRenderVertex **output_vertices,int vertex_count)
;
; Parameters:
; SRenderVertex * * Stack[0x4]:4   input_vertices
; SRenderVertex * * Stack[0x8]:4   output_vertices
; int              Stack[0xc]:4   vertex_count
;
; Referenced Globals:
;   int g_INT_007c841c
;   char* g_CHAR_PTR_01d1d400
;   int g_INT_01d1d404
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_005030e0
;   engine_clipper.c_interpolateVertexLeftClip_FUN_0043b5b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043bb10
        ;   Label: engine_clipper.c_clipPolygonLeftPlane_FUN_0043bb10
    PUSH ESI                            ; 0043bb11
    PUSH EDI                            ; 0043bb12
    PUSH EBP                            ; 0043bb13
    SUB ESP,0x8                         ; 0043bb14
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0043bb17
    MOV EBP,dword ptr [ESP + 0x20]      ; 0043bb1b
    XOR EBX,EBX                         ; 0043bb1f
    MOV EAX,dword ptr [ESP + 0x24]      ; 0043bb21
    MOV dword ptr [ESP],EBX             ; 0043bb25
    MOV ESI,dword ptr [EDX + EAX*0x4 + -0x4] ; 0043bb28
    TEST EAX,EAX                        ; 0043bb2c
    JLE 0x0043bb86                      ; 0043bb2e
        ;   XREF to: 0043bb86 (CONDITIONAL_JUMP)  ; LAB_0043bb86
    MOV dword ptr [ESP + 0x4],EDX       ; 0043bb30
    MOV EDI,dword ptr [ESP + 0x4]       ; 0043bb34
        ;   Label: LAB_0043bb34
    MOV EDX,dword ptr [ESI + 0x8]       ; 0043bb38
    MOV ECX,dword ptr [ESI]             ; 0043bb3b
    XOR EAX,EAX                         ; 0043bb3d
    NEG EDX                             ; 0043bb3f
    MOV EDI,dword ptr [EDI]             ; 0043bb41
    CMP EDX,ECX                         ; 0043bb43
    JL 0x0043bb4c                       ; 0043bb45
        ;   XREF to: 0043bb4c (CONDITIONAL_JUMP)  ; LAB_0043bb4c
    MOV EAX,0x1                         ; 0043bb47
    MOV EDX,dword ptr [EDI + 0x8]       ; 0043bb4c
        ;   Label: LAB_0043bb4c
    MOV ECX,dword ptr [EDI]             ; 0043bb4f
    NEG EDX                             ; 0043bb51
    CMP EDX,ECX                         ; 0043bb53
    JL 0x0043bb59                       ; 0043bb55
        ;   XREF to: 0043bb59 (CONDITIONAL_JUMP)  ; LAB_0043bb59
    OR AL,0x2                           ; 0043bb57
    CMP EAX,0x3                         ; 0043bb59
        ;   Label: LAB_0043bb59
    JA 0x0043bb6a                       ; 0043bb5c
        ;   XREF to: 0043bb6a (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43baf8]  ; 0043bb5e | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    INC EBX                             ; 0043bb65
        ;   Label: caseD_0
    MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI ; 0043bb66
    MOV EAX,dword ptr [ESP + 0x4]       ; 0043bb6a
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP]             ; 0043bb6e
    MOV ECX,dword ptr [ESP + 0x24]      ; 0043bb71
    MOV ESI,EDI                         ; 0043bb75
    ADD EAX,0x4                         ; 0043bb77
    INC EDX                             ; 0043bb7a
    MOV dword ptr [ESP + 0x4],EAX       ; 0043bb7b
    MOV dword ptr [ESP],EDX             ; 0043bb7f
    CMP EDX,ECX                         ; 0043bb82
    JL 0x0043bb34                       ; 0043bb84
        ;   XREF to: 0043bb34 (CONDITIONAL_JUMP)  ; LAB_0043bb34
    MOV EAX,EBX                         ; 0043bb86
        ;   Label: LAB_0043bb86
    ADD ESP,0x8                         ; 0043bb88
    POP EBP                             ; 0043bb8b
    POP EDI                             ; 0043bb8c
    POP ESI                             ; 0043bb8d
    POP EBX                             ; 0043bb8e
    RET                                 ; 0043bb8f
    CMP dword ptr [0x007c841c],0xc      ; 0043bb90 | g_INT_007c841c
        ;   Label: caseD_1
    JL 0x0043bbbb                       ; 0043bb97
        ;   XREF to: 0043bbbb (CONDITIONAL_JUMP)  ; LAB_0043bbbb
    MOV ECX,0x5d66da                    ; 0043bb99
    MOV EAX,0x5e                        ; 0043bb9e
    PUSH 0x5d66ee                       ; 0043bba3
    MOV dword ptr [0x01d1d400],ECX      ; 0043bba8 | g_CHAR_PTR_01d1d400
    MOV [0x01d1d404],EAX                ; 0043bbae | g_INT_01d1d404
    CALL core_main.c_displayErrorAndQuit_FUN_005030e0 ; 0043bbb3
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_005030e0(char * format)
    ADD ESP,0x4                         ; 0043bbb8
    MOV EAX,[0x007c841c]                ; 0043bbbb | g_INT_007c841c
        ;   Label: LAB_0043bbbb
    IMUL EDX,EAX,0x30                   ; 0043bbc0
    ADD EDX,0x7c81dc                    ; 0043bbc3
    PUSH EDX                            ; 0043bbc9
    PUSH ESI                            ; 0043bbca
    INC EBX                             ; 0043bbcb
    INC EAX                             ; 0043bbcc
    PUSH EDI                            ; 0043bbcd
    MOV [0x007c841c],EAX                ; 0043bbce | g_INT_007c841c
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 0043bbd3
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_0043b5b0 ; 0043bbd7
        ;   XREF to: 0043b5b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClip_FUN_0043b5b0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 0043bbdc
    JMP 0x0043bb6a                      ; 0043bbdf
        ;   XREF to: 0043bb6a (UNCONDITIONAL_JUMP)  ; caseD_3
    INC EBX                             ; 0043bbe1
        ;   Label: caseD_2
    MOV EAX,[0x007c841c]                ; 0043bbe2 | g_INT_007c841c
    MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI ; 0043bbe7
    CMP EAX,0xc                         ; 0043bbeb
    JL 0x0043bc13                       ; 0043bbee
        ;   XREF to: 0043bc13 (CONDITIONAL_JUMP)  ; LAB_0043bc13
    MOV EDX,0x5d66da                    ; 0043bbf0
    MOV ECX,0x5e                        ; 0043bbf5
    PUSH 0x5d66ee                       ; 0043bbfa
    MOV dword ptr [0x01d1d400],EDX      ; 0043bbff | g_CHAR_PTR_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0043bc05 | g_INT_01d1d404
    CALL core_main.c_displayErrorAndQuit_FUN_005030e0 ; 0043bc0b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_005030e0(char * format)
    ADD ESP,0x4                         ; 0043bc10
    MOV EAX,[0x007c841c]                ; 0043bc13 | g_INT_007c841c
        ;   Label: LAB_0043bc13
    IMUL EDX,EAX,0x30                   ; 0043bc18
    ADD EDX,0x7c81dc                    ; 0043bc1b
    PUSH EDX                            ; 0043bc21
    PUSH EDI                            ; 0043bc22
    INC EBX                             ; 0043bc23
    INC EAX                             ; 0043bc24
    PUSH ESI                            ; 0043bc25
    MOV [0x007c841c],EAX                ; 0043bc26 | g_INT_007c841c
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 0043bc2b
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_0043b5b0 ; 0043bc2f
        ;   XREF to: 0043b5b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClip_FUN_0043b5b0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 0043bc34
    JMP 0x0043bb6a                      ; 0043bc37
        ;   XREF to: 0043bb6a (UNCONDITIONAL_JUMP)  ; caseD_3

