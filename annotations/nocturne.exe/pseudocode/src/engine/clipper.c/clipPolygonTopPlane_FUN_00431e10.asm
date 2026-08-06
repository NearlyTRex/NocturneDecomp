; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_clipper_c_clipPolygonTopPlane_FUN_00431e10(SRenderVertex **input_vertices,SRenderVertex **output_vertices,int vertex_count)
;
; Parameters:
; SRenderVertex * * Stack[0x4]:4   input_vertices
; SRenderVertex * * Stack[0x8]:4   output_vertices
; int              Stack[0xc]:4   vertex_count
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined1* switchdataD_00431df8 = 00431e67
;   undefined1* PTR_caseD_1_00431dfc = 00431e92
;   undefined1* PTR_caseD_3_00431e04 = 00431e6c
;   TerminatedCString s_engine_clipper_c_0057ac47
;   TerminatedCString s_Ran_out_of_clipped_verts_0057ac5b
;   undefined4 DAT_007678f8
;   undefined4 DAT_00767b38
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   engine_clipper.c_interpolateVertexTopClip_FUN_00431830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431e10
        ;   Label: engine_clipper.c_clipPolygonTopPlane_FUN_00431e10
    PUSH ESI                            ; 00431e11
    PUSH EDI                            ; 00431e12
    PUSH EBP                            ; 00431e13
    SUB ESP,0x8                         ; 00431e14
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00431e17
    MOV EBP,dword ptr [ESP + 0x20]      ; 00431e1b
    XOR EBX,EBX                         ; 00431e1f
    MOV EAX,dword ptr [ESP + 0x24]      ; 00431e21
    MOV dword ptr [ESP],EBX             ; 00431e25
    MOV ESI,dword ptr [EDX + EAX*0x4 + -0x4] ; 00431e28
    TEST EAX,EAX                        ; 00431e2c
    JLE 0x00431e88                      ; 00431e2e
        ;   XREF to: 00431e88 (CONDITIONAL_JUMP)  ; LAB_00431e88
    MOV dword ptr [ESP + 0x4],EDX       ; 00431e30
    MOV EDI,dword ptr [ESP + 0x4]       ; 00431e34
        ;   Label: LAB_00431e34
    MOV EDX,dword ptr [ESI + 0x8]       ; 00431e38
    MOV ECX,dword ptr [ESI + 0x4]       ; 00431e3b
    XOR EAX,EAX                         ; 00431e3e
    NEG EDX                             ; 00431e40
    MOV EDI,dword ptr [EDI]             ; 00431e42
    CMP EDX,ECX                         ; 00431e44
    JL 0x00431e4d                       ; 00431e46
        ;   XREF to: 00431e4d (CONDITIONAL_JUMP)  ; LAB_00431e4d
    MOV EAX,0x1                         ; 00431e48
    MOV EDX,dword ptr [EDI + 0x8]       ; 00431e4d
        ;   Label: LAB_00431e4d
    MOV ECX,dword ptr [EDI + 0x4]       ; 00431e50
    NEG EDX                             ; 00431e53
    CMP EDX,ECX                         ; 00431e55
    JL 0x00431e5b                       ; 00431e57
        ;   XREF to: 00431e5b (CONDITIONAL_JUMP)  ; LAB_00431e5b
    OR AL,0x2                           ; 00431e59
    CMP EAX,0x3                         ; 00431e5b
        ;   Label: LAB_00431e5b
    JA 0x00431e6c                       ; 00431e5e
        ;   XREF to: 00431e6c (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x431df8]  ; 00431e60 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    INC EBX                             ; 00431e67
        ;   Label: caseD_0
    MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI ; 00431e68
    MOV EAX,dword ptr [ESP + 0x4]       ; 00431e6c
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP]             ; 00431e70
    MOV ECX,dword ptr [ESP + 0x24]      ; 00431e73
    MOV ESI,EDI                         ; 00431e77
    ADD EAX,0x4                         ; 00431e79
    INC EDX                             ; 00431e7c
    MOV dword ptr [ESP + 0x4],EAX       ; 00431e7d
    MOV dword ptr [ESP],EDX             ; 00431e81
    CMP EDX,ECX                         ; 00431e84
    JL 0x00431e34                       ; 00431e86
        ;   XREF to: 00431e34 (CONDITIONAL_JUMP)  ; LAB_00431e34
    MOV EAX,EBX                         ; 00431e88
        ;   Label: LAB_00431e88
    ADD ESP,0x8                         ; 00431e8a
    POP EBP                             ; 00431e8d
    POP EDI                             ; 00431e8e
    POP ESI                             ; 00431e8f
    POP EBX                             ; 00431e90
    RET                                 ; 00431e91
    CMP dword ptr [0x00767b38],0xc      ; 00431e92 | DAT_00767b38
        ;   Label: caseD_1
    JL 0x00431ebd                       ; 00431e99
        ;   XREF to: 00431ebd (CONDITIONAL_JUMP)  ; LAB_00431ebd
    MOV ECX,0x57ac47                    ; 00431e9b | = "..\\engine\\clipper.c"
    MOV EAX,0x5e                        ; 00431ea0
    PUSH 0x57ac5b                       ; 00431ea5 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01cc4800],ECX      ; 00431eaa | g_CurrentFilename
    MOV [0x01cc4804],EAX                ; 00431eb0 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00431eb5
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00431eba
    MOV EAX,[0x00767b38]                ; 00431ebd | DAT_00767b38
        ;   Label: LAB_00431ebd
    IMUL EDX,EAX,0x30                   ; 00431ec2
    ADD EDX,0x7678f8                    ; 00431ec5 | DAT_007678f8
    PUSH EDX                            ; 00431ecb
    PUSH ESI                            ; 00431ecc
    INC EBX                             ; 00431ecd
    INC EAX                             ; 00431ece
    PUSH EDI                            ; 00431ecf
    MOV [0x00767b38],EAX                ; 00431ed0 | DAT_00767b38
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 00431ed5
    CALL engine_clipper.c_interpolateVertexTopClip_FUN_00431830 ; 00431ed9
        ;   XREF to: 00431830 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClip_FUN_00431830(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 00431ede
    JMP 0x00431e6c                      ; 00431ee1
        ;   XREF to: 00431e6c (UNCONDITIONAL_JUMP)  ; caseD_3
    INC EBX                             ; 00431ee3
        ;   Label: caseD_2
    MOV EAX,[0x00767b38]                ; 00431ee4 | DAT_00767b38
    MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI ; 00431ee9
    CMP EAX,0xc                         ; 00431eed
    JL 0x00431f15                       ; 00431ef0
        ;   XREF to: 00431f15 (CONDITIONAL_JUMP)  ; LAB_00431f15
    MOV EDX,0x57ac47                    ; 00431ef2 | = "..\\engine\\clipper.c"
    MOV ECX,0x5e                        ; 00431ef7
    PUSH 0x57ac5b                       ; 00431efc | = "Ran out of clipped verts!"
    MOV dword ptr [0x01cc4800],EDX      ; 00431f01 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 00431f07 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00431f0d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00431f12
    MOV EAX,[0x00767b38]                ; 00431f15 | DAT_00767b38
        ;   Label: LAB_00431f15
    IMUL EDX,EAX,0x30                   ; 00431f1a
    ADD EDX,0x7678f8                    ; 00431f1d | DAT_007678f8
    PUSH EDX                            ; 00431f23
    PUSH EDI                            ; 00431f24
    INC EBX                             ; 00431f25
    INC EAX                             ; 00431f26
    PUSH ESI                            ; 00431f27
    MOV [0x00767b38],EAX                ; 00431f28 | DAT_00767b38
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 00431f2d
    CALL engine_clipper.c_interpolateVertexTopClip_FUN_00431830 ; 00431f31
        ;   XREF to: 00431830 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClip_FUN_00431830(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 00431f36
    JMP 0x00431e6c                      ; 00431f39
        ;   XREF to: 00431e6c (UNCONDITIONAL_JUMP)  ; caseD_3

