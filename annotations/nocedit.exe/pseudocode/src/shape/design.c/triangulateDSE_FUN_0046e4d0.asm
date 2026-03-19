; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_triangulateDSE_FUN_0046e4d0(int max_vertices)
;
; Parameters:
; int              Stack[0x4]:4   max_vertices
; Local Variables:
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_shape_design_c_0061de76
;   TerminatedCString s_triangulateDSE_too_many__0061de88
;   int g_PolygonCount
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   undefined4 g_ModelPolygonData[0].texture_name[0]
;   undefined4 g_ModelPolygonData[0].vertex_indices_count
;   undefined4 g_ModelPolygonData[0].vertex_indices[1]
;   undefined4 g_ModelPolygonData[0].vertex_indices[2]
;   undefined4 g_ModelPolygonData[0].vertex_indices[3]
;   undefined4 g_ModelPolygonData[0].uv_u[1]
;   undefined4 g_ModelPolygonData[0].uv_u[2]
;   undefined4 g_ModelPolygonData[0].uv_v[1]
;   undefined4 g_ModelPolygonData[0].uv_v[2]
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046e4d0
        ;   Label: shape_design.c_triangulateDSE_FUN_0046e4d0
    PUSH ESI                            ; 0046e4d1
    PUSH EDI                            ; 0046e4d2
    PUSH EBP                            ; 0046e4d3
    MOV EBP,ESP                         ; 0046e4d4
    SUB ESP,0x18                        ; 0046e4d6
    MOV EAX,[0x016e990c]                ; 0046e4dc | g_PolygonCount
    MOV dword ptr [EBP + -0x8],EAX      ; 0046e4e1
    MOV dword ptr [EBP + -0x4],0x0      ; 0046e4e4
    JMP 0x0046e4f0                      ; 0046e4eb
        ;   XREF to: 0046e4f0 (UNCONDITIONAL_JUMP)  ; LAB_0046e4f0
    INC dword ptr [EBP + -0x4]          ; 0046e4ed
        ;   Label: LAB_0046e4ed
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046e4f0
        ;   Label: LAB_0046e4f0
    CMP EAX,dword ptr [EBP + -0x8]      ; 0046e4f3
    JGE 0x0046e69e                      ; 0046e4f6
        ;   XREF to: 0046e69e (CONDITIONAL_JUMP)  ; LAB_0046e69e
    IMUL EAX,dword ptr [EBP + -0x4],0x184 ; 0046e4fc
    MOV EDX,0x16e9910                   ; 0046e503 | g_ModelPolygonData
    ADD EDX,EAX                         ; 0046e508
    MOV dword ptr [EBP + -0x10],EDX     ; 0046e50a
    MOV EAX,dword ptr [EBP + -0x10]     ; 0046e50d
    MOV EAX,dword ptr [EAX + 0xa4]      ; 0046e510 | g_ModelPolygonData[0].vertex_indices_count
    CMP EAX,dword ptr [EBP + 0x14]      ; 0046e516
    JG 0x0046e520                       ; 0046e519
        ;   XREF to: 0046e520 (CONDITIONAL_JUMP)  ; LAB_0046e520
    JMP 0x0046e699                      ; 0046e51b
        ;   XREF to: 0046e699 (UNCONDITIONAL_JUMP)  ; LAB_0046e699
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046e520
        ;   Label: LAB_0046e520
    DEC EAX                             ; 0046e523
    MOV dword ptr [EBP + -0xc],EAX      ; 0046e524
    MOV EAX,dword ptr [EBP + -0x10]     ; 0046e527
        ;   Label: LAB_0046e527
    MOV EAX,dword ptr [EAX + 0xa4]      ; 0046e52a | g_ModelPolygonData[0].vertex_indices_count
    DEC EAX                             ; 0046e530
    CMP EAX,dword ptr [EBP + -0xc]      ; 0046e531
    JLE 0x0046e68d                      ; 0046e534
        ;   XREF to: 0046e68d (CONDITIONAL_JUMP)  ; LAB_0046e68d
    CMP dword ptr [0x016e990c],0x4e20   ; 0046e53a | g_PolygonCount
    JL 0x0046e568                       ; 0046e544
        ;   XREF to: 0046e568 (CONDITIONAL_JUMP)  ; LAB_0046e568
    MOV dword ptr [0x02f0ca48],0x61de76 ; 0046e546 | g_CurrentFilename | = "..\\shape\\design.c"
    MOV dword ptr [0x02f0ca4c],0x2c8f   ; 0046e550 | g_CurrentLineNumber
    MOV EAX,0x61de88                    ; 0046e55a | = "triangulateDSE - too many faces!"
    PUSH EAX                            ; 0046e55f | = "triangulateDSE - too many faces!"
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0046e560
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0046e565
    IMUL EAX,dword ptr [0x016e990c],0x184 ; 0046e568 | g_PolygonCount
        ;   Label: LAB_0046e568
    MOV EDX,0x16e9910                   ; 0046e572 | g_ModelPolygonData
    ADD EDX,EAX                         ; 0046e577
    MOV dword ptr [EBP + -0x18],EDX     ; 0046e579
    INC dword ptr [0x016e990c]          ; 0046e57c | g_PolygonCount
    MOV ECX,0x61                        ; 0046e582
    MOV EDI,dword ptr [EBP + -0x18]     ; 0046e587
    MOV ESI,dword ptr [EBP + -0x10]     ; 0046e58a
    MOVSD.REP ES:EDI,ESI                ; 0046e58d | g_ModelPolygonData | g_ModelPolygonData[0].texture_name[0]
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046e58f
    SHL EAX,0x2                         ; 0046e592
    ADD EAX,dword ptr [EBP + -0x10]     ; 0046e595
    MOV EDX,dword ptr [EAX + 0xb8]      ; 0046e598
    MOV EAX,dword ptr [EBP + -0x18]     ; 0046e59e
    MOV dword ptr [EAX + 0xbc],EDX      ; 0046e5a1 | g_ModelPolygonData[0].vertex_indices[1]
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046e5a7
    SHL EAX,0x2                         ; 0046e5aa
    ADD EAX,dword ptr [EBP + -0x10]     ; 0046e5ad
    FLD float ptr [EAX + 0xf8]          ; 0046e5b0
    MOV EAX,dword ptr [EBP + -0x18]     ; 0046e5b6
    FSTP float ptr [EAX + 0xfc]         ; 0046e5b9 | g_ModelPolygonData[0].uv_u[1]
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046e5bf
    SHL EAX,0x2                         ; 0046e5c2
    ADD EAX,dword ptr [EBP + -0x10]     ; 0046e5c5
    FLD float ptr [EAX + 0x138]         ; 0046e5c8
    MOV EAX,dword ptr [EBP + -0x18]     ; 0046e5ce
    FSTP float ptr [EAX + 0x13c]        ; 0046e5d1 | g_ModelPolygonData[0].uv_v[1]
    MOV EAX,dword ptr [EBP + -0x10]     ; 0046e5d7
    MOV EDX,dword ptr [EAX + 0xa4]      ; 0046e5da | g_ModelPolygonData[0].vertex_indices_count
    SUB EDX,dword ptr [EBP + -0xc]      ; 0046e5e0
    MOV EAX,dword ptr [EBP + -0x18]     ; 0046e5e3
    INC EDX                             ; 0046e5e6
    MOV dword ptr [EAX + 0xa4],EDX      ; 0046e5e7 | g_ModelPolygonData[0].vertex_indices_count
    MOV EAX,dword ptr [EBP + -0x18]     ; 0046e5ed
    MOV EAX,dword ptr [EAX + 0xa4]      ; 0046e5f0 | g_ModelPolygonData[0].vertex_indices_count
    CMP EAX,dword ptr [EBP + 0x14]      ; 0046e5f6
    JLE 0x0046e607                      ; 0046e5f9
        ;   XREF to: 0046e607 (CONDITIONAL_JUMP)  ; LAB_0046e607
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046e5fb
    MOV EDX,dword ptr [EBP + -0x18]     ; 0046e5fe
    MOV dword ptr [EDX + 0xa4],EAX      ; 0046e601 | g_ModelPolygonData[0].vertex_indices_count
    MOV dword ptr [EBP + -0x14],0x2     ; 0046e607
        ;   Label: LAB_0046e607
    JMP 0x0046e613                      ; 0046e60e
        ;   XREF to: 0046e613 (UNCONDITIONAL_JUMP)  ; LAB_0046e613
    INC dword ptr [EBP + -0x14]         ; 0046e610
        ;   Label: LAB_0046e610
    MOV EAX,dword ptr [EBP + -0x14]     ; 0046e613
        ;   Label: LAB_0046e613
    MOV EDX,dword ptr [EBP + -0x18]     ; 0046e616
    CMP EAX,dword ptr [EDX + 0xa4]      ; 0046e619 | g_ModelPolygonData[0].vertex_indices_count
    JGE 0x0046e688                      ; 0046e61f
        ;   XREF to: 0046e688 (CONDITIONAL_JUMP)  ; LAB_0046e688
    INC dword ptr [EBP + -0xc]          ; 0046e621
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046e624
    SHL EAX,0x2                         ; 0046e627
    MOV EDX,dword ptr [EBP + -0x10]     ; 0046e62a
    ADD EDX,EAX                         ; 0046e62d
    MOV EAX,dword ptr [EBP + -0x14]     ; 0046e62f
    SHL EAX,0x2                         ; 0046e632
    MOV ECX,dword ptr [EBP + -0x18]     ; 0046e635
    ADD ECX,EAX                         ; 0046e638
    MOV EAX,dword ptr [EDX + 0xb8]      ; 0046e63a
    MOV dword ptr [ECX + 0xb8],EAX      ; 0046e640 | g_ModelPolygonData[0].vertex_indices[2] | g_ModelPolygonData[0].vertex_indices[3]
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046e646
    SHL EAX,0x2                         ; 0046e649
    MOV EDX,dword ptr [EBP + -0x10]     ; 0046e64c
    ADD EDX,EAX                         ; 0046e64f
    MOV EAX,dword ptr [EBP + -0x14]     ; 0046e651
    SHL EAX,0x2                         ; 0046e654
    ADD EAX,dword ptr [EBP + -0x18]     ; 0046e657
    FLD float ptr [EDX + 0xf8]          ; 0046e65a
    FSTP float ptr [EAX + 0xf8]         ; 0046e660 | g_ModelPolygonData[0].uv_u[2]
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046e666
    SHL EAX,0x2                         ; 0046e669
    MOV EDX,dword ptr [EBP + -0x10]     ; 0046e66c
    ADD EDX,EAX                         ; 0046e66f
    MOV EAX,dword ptr [EBP + -0x14]     ; 0046e671
    SHL EAX,0x2                         ; 0046e674
    ADD EAX,dword ptr [EBP + -0x18]     ; 0046e677
    FLD float ptr [EDX + 0x138]         ; 0046e67a
    FSTP float ptr [EAX + 0x138]        ; 0046e680 | g_ModelPolygonData[0].uv_v[2]
    JMP 0x0046e610                      ; 0046e686
        ;   XREF to: 0046e610 (UNCONDITIONAL_JUMP)  ; LAB_0046e610
    JMP 0x0046e527                      ; 0046e688
        ;   XREF to: 0046e527 (UNCONDITIONAL_JUMP)  ; LAB_0046e527
        ;   Label: LAB_0046e688
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046e68d
        ;   Label: LAB_0046e68d
    MOV EDX,dword ptr [EBP + -0x10]     ; 0046e690
    MOV dword ptr [EDX + 0xa4],EAX      ; 0046e693 | g_ModelPolygonData[0].vertex_indices_count
    JMP 0x0046e4ed                      ; 0046e699
        ;   XREF to: 0046e4ed (UNCONDITIONAL_JUMP)  ; LAB_0046e4ed
        ;   Label: LAB_0046e699
    MOV ESP,EBP                         ; 0046e69e
        ;   Label: LAB_0046e69e
    POP EBP                             ; 0046e6a0
    POP EDI                             ; 0046e6a1
    POP ESI                             ; 0046e6a2
    POP EBX                             ; 0046e6a3
    RET                                 ; 0046e6a4

