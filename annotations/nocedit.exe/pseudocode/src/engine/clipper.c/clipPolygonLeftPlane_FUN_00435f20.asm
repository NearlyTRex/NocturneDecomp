; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_clipper.c_clipPolygonLeftPlane_FUN_00435f20(SRenderVertex * * input_vertices, SRenderVertex * * output_vertices, int vertex_count)
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
;   void* switchdataD_00435f04 = 00435f6f
;   void* PTR_caseD_1_00435f08 = 00435f9a
;   void* PTR_caseD_3_00435f10 = 00435f74
;   TerminatedCString s_engine_clipper_c_00618103
;   TerminatedCString s_Ran_out_of_clipped_verts_00618117
;   SRenderVertex[12] g_ClipperTempBuffer
;   int g_ClipperTempCount
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00435f20
        ;   Label: engine_clipper.c_clipPolygonLeftPlane_FUN_00435f20
    PUSH ESI                            ; 00435f21
    PUSH EDI                            ; 00435f22
    PUSH EBP                            ; 00435f23
    SUB ESP,0x8                         ; 00435f24
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00435f27
    MOV EBP,dword ptr [ESP + 0x20]      ; 00435f2b
    XOR EBX,EBX                         ; 00435f2f
    MOV EAX,dword ptr [ESP + 0x24]      ; 00435f31
    MOV dword ptr [ESP],EBX             ; 00435f35
    MOV ESI,dword ptr [EDX + EAX*0x4 + -0x4] ; 00435f38
    TEST EAX,EAX                        ; 00435f3c
    JLE 0x00435f90                      ; 00435f3e | LAB_00435f90
        ;   XREF to: 00435f90 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x4],EDX       ; 00435f40
    MOV EDI,dword ptr [ESP + 0x4]       ; 00435f44
        ;   Label: LAB_00435f44
    MOV EDX,dword ptr [ESI]             ; 00435f48
    MOV ECX,dword ptr [ESI + 0x8]       ; 00435f4a
    XOR EAX,EAX                         ; 00435f4d
    MOV EDI,dword ptr [EDI]             ; 00435f4f
    CMP EDX,ECX                         ; 00435f51
    JL 0x00435f5a                       ; 00435f53 | LAB_00435f5a
        ;   XREF to: 00435f5a (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 00435f55
    MOV ECX,dword ptr [EDI + 0x8]       ; 00435f5a
        ;   Label: LAB_00435f5a
    CMP ECX,dword ptr [EDI]             ; 00435f5d
    JG 0x00435f63                       ; 00435f5f | LAB_00435f63
        ;   XREF to: 00435f63 (CONDITIONAL_JUMP)
    OR AL,0x2                           ; 00435f61
    CMP EAX,0x3                         ; 00435f63
        ;   Label: LAB_00435f63
    JA 0x00435f74                       ; 00435f66 | caseD_3
        ;   XREF to: 00435f74 (CONDITIONAL_JUMP)
    JMP dword ptr [EAX*0x4 + 0x435f04]  ; 00435f68 | void * PTR_caseD_3_00435f10 | PTR_caseD_1_00435f08 = 00435f9a | switchdataD_00435f04 = 00435f6f
        ;   Label: switchD
    INC EBX                             ; 00435f6f
        ;   Label: caseD_0
    MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI ; 00435f70
    MOV EAX,dword ptr [ESP + 0x4]       ; 00435f74
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP]             ; 00435f78
    MOV ECX,dword ptr [ESP + 0x24]      ; 00435f7b
    MOV ESI,EDI                         ; 00435f7f
    ADD EAX,0x4                         ; 00435f81
    INC EDX                             ; 00435f84
    MOV dword ptr [ESP + 0x4],EAX       ; 00435f85
    MOV dword ptr [ESP],EDX             ; 00435f89
    CMP EDX,ECX                         ; 00435f8c
    JL 0x00435f44                       ; 00435f8e | LAB_00435f44
        ;   XREF to: 00435f44 (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 00435f90
        ;   Label: LAB_00435f90
    ADD ESP,0x8                         ; 00435f92
    POP EBP                             ; 00435f95
    POP EDI                             ; 00435f96
    POP ESI                             ; 00435f97
    POP EBX                             ; 00435f98
    RET                                 ; 00435f99
    CMP dword ptr [0x00825cec],0xc      ; 00435f9a | int g_ClipperTempCount
        ;   Label: caseD_1
    JL 0x00435fc5                       ; 00435fa1 | LAB_00435fc5
        ;   XREF to: 00435fc5 (CONDITIONAL_JUMP)
    MOV ECX,0x618103                    ; 00435fa3 | = "..\\engine\\clipper.c" | s_engine_clipper_c_00618103 = ..\engine\clipper.c
    MOV EAX,0x5e                        ; 00435fa8
    PUSH 0x618117                       ; 00435fad | = "Ran out of clipped verts!" | s_Ran_out_of_clipped_verts_00618117 = Ran out of clipped verts!
    MOV dword ptr [0x02f0ca48],ECX      ; 00435fb2 | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00435fb8 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00435fbd | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00435fc2
    MOV EAX,[0x00825cec]                ; 00435fc5 | int g_ClipperTempCount
        ;   Label: LAB_00435fc5
    IMUL EDX,EAX,0x30                   ; 00435fca
    ADD EDX,0x825aac                    ; 00435fcd | SRenderVertex[12] g_ClipperTempBuffer
    PUSH EDX                            ; 00435fd3
    PUSH ESI                            ; 00435fd4
    INC EBX                             ; 00435fd5
    INC EAX                             ; 00435fd6
    PUSH EDI                            ; 00435fd7
    MOV [0x00825cec],EAX                ; 00435fd8 | int g_ClipperTempCount
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 00435fdd
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00 ; 00435fe1 | void engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
        ;   XREF to: 00435a00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00435fe6
    JMP 0x00435f74                      ; 00435fe9 | caseD_3
        ;   XREF to: 00435f74 (UNCONDITIONAL_JUMP)
    INC EBX                             ; 00435feb
        ;   Label: caseD_2
    MOV EAX,[0x00825cec]                ; 00435fec | int g_ClipperTempCount
    MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI ; 00435ff1
    CMP EAX,0xc                         ; 00435ff5
    JL 0x0043601d                       ; 00435ff8 | LAB_0043601d
        ;   XREF to: 0043601d (CONDITIONAL_JUMP)
    MOV EDX,0x618103                    ; 00435ffa | = "..\\engine\\clipper.c" | s_engine_clipper_c_00618103 = ..\engine\clipper.c
    MOV ECX,0x5e                        ; 00435fff
    PUSH 0x618117                       ; 00436004 | = "Ran out of clipped verts!" | s_Ran_out_of_clipped_verts_00618117 = Ran out of clipped verts!
    MOV dword ptr [0x02f0ca48],EDX      ; 00436009 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0043600f | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00436015 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0043601a
    MOV EAX,[0x00825cec]                ; 0043601d | int g_ClipperTempCount
        ;   Label: LAB_0043601d
    IMUL EDX,EAX,0x30                   ; 00436022
    ADD EDX,0x825aac                    ; 00436025 | SRenderVertex[12] g_ClipperTempBuffer
    PUSH EDX                            ; 0043602b
    PUSH EDI                            ; 0043602c
    INC EBX                             ; 0043602d
    INC EAX                             ; 0043602e
    PUSH ESI                            ; 0043602f
    MOV [0x00825cec],EAX                ; 00436030 | int g_ClipperTempCount
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 00436035
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00 ; 00436039 | void engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
        ;   XREF to: 00435a00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0043603e
    JMP 0x00435f74                      ; 00436041 | caseD_3
        ;   XREF to: 00435f74 (UNCONDITIONAL_JUMP)

