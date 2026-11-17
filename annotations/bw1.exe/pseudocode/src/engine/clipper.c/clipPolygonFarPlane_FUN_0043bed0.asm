; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_clipPolygonFarPlane_FUN_0043bed0(void)
;
;
; Referenced Globals:
;   undefined1* switchdataD_0043bec0 = 0043bfd0
;   undefined1* PTR_caseD_1_0043bec4 = 0043c02c
;   undefined1* PTR_caseD_3_0043becc = 0043c015
;   string caseD_0
;   string caseD_2
;   int g_INT_00610d44 = 0x7fffffff
;   int g_INT_007c7554
;   SRenderVertex[16] g_SRenderVertex_ARRAY_007c7558
;   int g_INT_007c7bd8
;   SRenderVertex[16] g_SRenderVertex_ARRAY_007c7bdc
;   undefined4 g_SRenderVertex_ARRAY_007c7bdc[0].projected_vertex.transformed_z
;
; Called Functions:
;   engine_clipper.c_interpolateVertexFarClip_FUN_0043b8b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043bed0
        ;   Label: engine_clipper.c_clipPolygonFarPlane_FUN_0043bed0
    PUSH ESI                            ; 0043bed1
    PUSH EDI                            ; 0043bed2
    PUSH EBP                            ; 0043bed3
    SUB ESP,0x4                         ; 0043bed4
    MOV EDX,dword ptr [0x00610d44]      ; 0043bed7 | g_INT_00610d44
    XOR EBX,EBX                         ; 0043bedd
    TEST EDX,EDX                        ; 0043bedf
    JZ 0x0043bf16                       ; 0043bee1
        ;   XREF to: 0043bf16 (CONDITIONAL_JUMP)  ; LAB_0043bf16
    MOV ECX,dword ptr [0x007c7554]      ; 0043bee3 | g_INT_007c7554
    TEST ECX,ECX                        ; 0043bee9
    JLE 0x0043bf0e                      ; 0043beeb
        ;   XREF to: 0043bf0e (CONDITIONAL_JUMP)  ; LAB_0043bf0e
    LEA EDI,[ECX*0x4 + 0x0]             ; 0043beed
    SUB EDI,ECX                         ; 0043bef4
    XOR EAX,EAX                         ; 0043bef6
    SHL EDI,0x4                         ; 0043bef8
    MOV EDX,dword ptr [EAX + 0x7c7560]  ; 0043befb
        ;   Label: LAB_0043befb
    CMP EBX,EDX                         ; 0043bf01
    JGE 0x0043bf07                      ; 0043bf03
        ;   XREF to: 0043bf07 (CONDITIONAL_JUMP)  ; LAB_0043bf07
    MOV EBX,EDX                         ; 0043bf05
    ADD EAX,0x30                        ; 0043bf07
        ;   Label: LAB_0043bf07
    CMP EAX,EDI                         ; 0043bf0a
    JL 0x0043befb                       ; 0043bf0c
        ;   XREF to: 0043befb (CONDITIONAL_JUMP)  ; LAB_0043befb
    CMP EBX,dword ptr [0x00610d44]      ; 0043bf0e | g_INT_00610d44
        ;   Label: LAB_0043bf0e
    JGE 0x0043bf1e                      ; 0043bf14
        ;   XREF to: 0043bf1e (CONDITIONAL_JUMP)  ; LAB_0043bf1e
    ADD ESP,0x4                         ; 0043bf16
        ;   Label: LAB_0043bf16
    POP EBP                             ; 0043bf19
    POP EDI                             ; 0043bf1a
    POP ESI                             ; 0043bf1b
    POP EBX                             ; 0043bf1c
    RET                                 ; 0043bf1d
    MOV EAX,[0x007c7554]                ; 0043bf1e | g_INT_007c7554
        ;   Label: LAB_0043bf1e
    MOV [0x007c7bd8],EAX                ; 0043bf23 | g_INT_007c7bd8
    LEA ECX,[EAX*0x4 + 0x0]             ; 0043bf28
    MOV ESI,0x7c7558                    ; 0043bf2f
    SUB ECX,EAX                         ; 0043bf34
    MOV EDI,0x7c7bdc                    ; 0043bf36
    SHL ECX,0x4                         ; 0043bf3b
    XOR EBX,EBX                         ; 0043bf3e
    TEST EDI,0x7                        ; 0043bf40
    JZ 0x0043bf4e                       ; 0043bf46
        ;   XREF to: 0043bf4e (CONDITIONAL_JUMP)  ; LAB_0043bf4e
    MOVSD ES:EDI,ESI                    ; 0043bf48
    SUB ECX,0x4                         ; 0043bf49
    JLE 0x0043bf6b                      ; 0043bf4c
        ;   XREF to: 0043bf6b (CONDITIONAL_JUMP)  ; LAB_0043bf6b
    SUB ECX,0x8                         ; 0043bf4e
        ;   Label: LAB_0043bf4e
    JL 0x0043bf5f                       ; 0043bf51
        ;   XREF to: 0043bf5f (CONDITIONAL_JUMP)  ; LAB_0043bf5f
    FILD qword ptr [ESI]                ; 0043bf53
    ADD ESI,0x8                         ; 0043bf55
    FISTP qword ptr [EDI]               ; 0043bf58
    ADD EDI,0x8                         ; 0043bf5a
    JMP 0x0043bf4e                      ; 0043bf5d
        ;   XREF to: 0043bf4e (UNCONDITIONAL_JUMP)  ; LAB_0043bf4e
    ADD ECX,0x8                         ; 0043bf5f
        ;   Label: LAB_0043bf5f
    JLE 0x0043bf6b                      ; 0043bf62
        ;   XREF to: 0043bf6b (CONDITIONAL_JUMP)  ; LAB_0043bf6b
    MOVSD ES:EDI,ESI                    ; 0043bf64
    SUB ECX,0x4                         ; 0043bf65
    JLE 0x0043bf6b                      ; 0043bf68
        ;   XREF to: 0043bf6b (CONDITIONAL_JUMP)  ; LAB_0043bf6b
    MOVSD ES:EDI,ESI                    ; 0043bf6a
    XOR EDI,EDI                         ; 0043bf6b
        ;   Label: LAB_0043bf6b
    MOV EBP,dword ptr [0x007c7bd8]      ; 0043bf6d | g_INT_007c7bd8
    MOV dword ptr [0x007c7554],EDI      ; 0043bf73 | g_INT_007c7554
    TEST EBP,EBP                        ; 0043bf79
    JLE 0x0043bf16                      ; 0043bf7b
        ;   XREF to: 0043bf16 (CONDITIONAL_JUMP)  ; LAB_0043bf16
    MOV EBP,0x7c7bdc                    ; 0043bf7d
    MOV ESI,dword ptr [0x007c7bd8]      ; 0043bf82 | g_INT_007c7bd8
        ;   Label: LAB_0043bf82
    LEA EAX,[EBX + 0x1]                 ; 0043bf88
    CMP EAX,ESI                         ; 0043bf8b
    JNZ 0x0043bf91                      ; 0043bf8d
        ;   XREF to: 0043bf91 (CONDITIONAL_JUMP)  ; LAB_0043bf91
    XOR EAX,ESI                         ; 0043bf8f
    IMUL EAX,EAX,0x30                   ; 0043bf91
        ;   Label: LAB_0043bf91
    MOV EDI,0x7c7bdc                    ; 0043bf94 | g_SRenderVertex_ARRAY_007c7bdc
    MOV ECX,dword ptr [0x00610d44]      ; 0043bf99 | g_INT_00610d44
    ADD EDI,EAX                         ; 0043bf9f
    MOV EDX,EBP                         ; 0043bfa1
    MOV dword ptr [ESP],EDI             ; 0043bfa3
    MOV EDI,dword ptr [EBP + 0x8]       ; 0043bfa6
    XOR EAX,EAX                         ; 0043bfa9
    CMP EDI,ECX                         ; 0043bfab
    JL 0x0043bfb4                       ; 0043bfad
        ;   XREF to: 0043bfb4 (CONDITIONAL_JUMP)  ; LAB_0043bfb4
    MOV EAX,0x1                         ; 0043bfaf
    MOV EDI,dword ptr [ESP]             ; 0043bfb4
        ;   Label: LAB_0043bfb4
    MOV ESI,dword ptr [0x00610d44]      ; 0043bfb7 | g_INT_00610d44
    CMP ESI,dword ptr [EDI + 0x8]       ; 0043bfbd | g_SRenderVertex_ARRAY_007c7bdc[0].projected_vertex.transformed_z
    JG 0x0043bfc4                       ; 0043bfc0
        ;   XREF to: 0043bfc4 (CONDITIONAL_JUMP)  ; LAB_0043bfc4
    OR AL,0x2                           ; 0043bfc2
    CMP EAX,0x3                         ; 0043bfc4
        ;   Label: LAB_0043bfc4
    JA 0x0043c015                       ; 0043bfc7
        ;   XREF to: 0043c015 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43bec0]  ; 0043bfc9 | = "k=Tu|" | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ECX,dword ptr [0x007c7bd8]      ; 0043c015 | g_INT_007c7bd8
        ;   Label: caseD_3
    INC EBX                             ; 0043c01b
    ADD EBP,0x30                        ; 0043c01c
    CMP EBX,ECX                         ; 0043c01f
    JGE 0x0043bf16                      ; 0043c021
        ;   XREF to: 0043bf16 (CONDITIONAL_JUMP)  ; LAB_0043bf16
    JMP 0x0043bf82                      ; 0043c027
        ;   XREF to: 0043bf82 (UNCONDITIONAL_JUMP)  ; LAB_0043bf82
    IMUL EAX,dword ptr [0x007c7554],0x30 ; 0043c02c | g_INT_007c7554
        ;   Label: caseD_1
    ADD EAX,0x7c7558                    ; 0043c033 | g_SRenderVertex_ARRAY_007c7558
    PUSH EAX                            ; 0043c038
    PUSH EDX                            ; 0043c039
    MOV ESI,dword ptr [ESP + 0x8]       ; 0043c03a
    PUSH ESI                            ; 0043c03e
    CALL engine_clipper.c_interpolateVertexFarClip_FUN_0043b8b0 ; 0043c03f
        ;   XREF to: 0043b8b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexFarClip_FUN_0043b8b0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x007c7554]      ; 0043c044 | g_INT_007c7554
    INC EDI                             ; 0043c04a
    ADD ESP,0xc                         ; 0043c04b
    MOV dword ptr [0x007c7554],EDI      ; 0043c04e | g_INT_007c7554
    JMP 0x0043c015                      ; 0043c054
        ;   XREF to: 0043c015 (UNCONDITIONAL_JUMP)  ; caseD_3

