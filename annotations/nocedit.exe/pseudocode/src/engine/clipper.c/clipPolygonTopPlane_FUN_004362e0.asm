; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_clipper_c_clipPolygonTopPlane_FUN_004362e0(SRenderVertex **input_vertices,SRenderVertex **output_vertices,int vertex_count)
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
;   void* switchdataD_004362c8 = 00436337
;   void* PTR_caseD_1_004362cc = 00436362
;   void* PTR_caseD_3_004362d4 = 0043633c
;   TerminatedCString s_engine_clipper_c_00618103
;   TerminatedCString s_Ran_out_of_clipped_verts_00618117
;   SRenderVertex[12] g_ClipperTempBuffer
;   int g_ClipperTempCount
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_clipper.c_interpolateVertexTopClip_FUN_00435d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004362e0
        ;   Label: engine_clipper.c_clipPolygonTopPlane_FUN_004362e0
    PUSH ESI                            ; 004362e1
    PUSH EDI                            ; 004362e2
    PUSH EBP                            ; 004362e3
    SUB ESP,0x8                         ; 004362e4
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004362e7
    MOV EBP,dword ptr [ESP + 0x20]      ; 004362eb
    XOR EBX,EBX                         ; 004362ef
    MOV EAX,dword ptr [ESP + 0x24]      ; 004362f1
    MOV dword ptr [ESP],EBX             ; 004362f5
    MOV ESI,dword ptr [EDX + EAX*0x4 + -0x4] ; 004362f8
    TEST EAX,EAX                        ; 004362fc
    JLE 0x00436358                      ; 004362fe
        ;   XREF to: 00436358 (CONDITIONAL_JUMP)  ; LAB_00436358
    MOV dword ptr [ESP + 0x4],EDX       ; 00436300
    MOV EDI,dword ptr [ESP + 0x4]       ; 00436304
        ;   Label: LAB_00436304
    MOV EDX,dword ptr [ESI + 0x8]       ; 00436308
    MOV ECX,dword ptr [ESI + 0x4]       ; 0043630b
    XOR EAX,EAX                         ; 0043630e
    NEG EDX                             ; 00436310
    MOV EDI,dword ptr [EDI]             ; 00436312
    CMP EDX,ECX                         ; 00436314
    JL 0x0043631d                       ; 00436316
        ;   XREF to: 0043631d (CONDITIONAL_JUMP)  ; LAB_0043631d
    MOV EAX,0x1                         ; 00436318
    MOV EDX,dword ptr [EDI + 0x8]       ; 0043631d
        ;   Label: LAB_0043631d
    MOV ECX,dword ptr [EDI + 0x4]       ; 00436320
    NEG EDX                             ; 00436323
    CMP EDX,ECX                         ; 00436325
    JL 0x0043632b                       ; 00436327
        ;   XREF to: 0043632b (CONDITIONAL_JUMP)  ; LAB_0043632b
    OR AL,0x2                           ; 00436329
    CMP EAX,0x3                         ; 0043632b
        ;   Label: LAB_0043632b
    JA 0x0043633c                       ; 0043632e
        ;   XREF to: 0043633c (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x4362c8]  ; 00436330 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    INC EBX                             ; 00436337
        ;   Label: caseD_0
    MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI ; 00436338
    MOV EAX,dword ptr [ESP + 0x4]       ; 0043633c
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP]             ; 00436340
    MOV ECX,dword ptr [ESP + 0x24]      ; 00436343
    MOV ESI,EDI                         ; 00436347
    ADD EAX,0x4                         ; 00436349
    INC EDX                             ; 0043634c
    MOV dword ptr [ESP + 0x4],EAX       ; 0043634d
    MOV dword ptr [ESP],EDX             ; 00436351
    CMP EDX,ECX                         ; 00436354
    JL 0x00436304                       ; 00436356
        ;   XREF to: 00436304 (CONDITIONAL_JUMP)  ; LAB_00436304
    MOV EAX,EBX                         ; 00436358
        ;   Label: LAB_00436358
    ADD ESP,0x8                         ; 0043635a
    POP EBP                             ; 0043635d
    POP EDI                             ; 0043635e
    POP ESI                             ; 0043635f
    POP EBX                             ; 00436360
    RET                                 ; 00436361
    CMP dword ptr [0x00825cec],0xc      ; 00436362 | g_ClipperTempCount
        ;   Label: caseD_1
    JL 0x0043638d                       ; 00436369
        ;   XREF to: 0043638d (CONDITIONAL_JUMP)  ; LAB_0043638d
    MOV ECX,0x618103                    ; 0043636b | = "..\\engine\\clipper.c"
    MOV EAX,0x5e                        ; 00436370
    PUSH 0x618117                       ; 00436375 | = "Ran out of clipped verts!"
    MOV dword ptr [0x02f0ca48],ECX      ; 0043637a | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00436380 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00436385
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0043638a
    MOV EAX,[0x00825cec]                ; 0043638d | g_ClipperTempCount
        ;   Label: LAB_0043638d
    IMUL EDX,EAX,0x30                   ; 00436392
    ADD EDX,0x825aac                    ; 00436395 | g_ClipperTempBuffer
    PUSH EDX                            ; 0043639b
    PUSH ESI                            ; 0043639c
    INC EBX                             ; 0043639d
    INC EAX                             ; 0043639e
    PUSH EDI                            ; 0043639f
    MOV [0x00825cec],EAX                ; 004363a0 | g_ClipperTempCount
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 004363a5
    CALL engine_clipper.c_interpolateVertexTopClip_FUN_00435d00 ; 004363a9
        ;   XREF to: 00435d00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClip_FUN_00435d00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 004363ae
    JMP 0x0043633c                      ; 004363b1
        ;   XREF to: 0043633c (UNCONDITIONAL_JUMP)  ; caseD_3
    INC EBX                             ; 004363b3
        ;   Label: caseD_2
    MOV EAX,[0x00825cec]                ; 004363b4 | g_ClipperTempCount
    MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI ; 004363b9
    CMP EAX,0xc                         ; 004363bd
    JL 0x004363e5                       ; 004363c0
        ;   XREF to: 004363e5 (CONDITIONAL_JUMP)  ; LAB_004363e5
    MOV EDX,0x618103                    ; 004363c2 | = "..\\engine\\clipper.c"
    MOV ECX,0x5e                        ; 004363c7
    PUSH 0x618117                       ; 004363cc | = "Ran out of clipped verts!"
    MOV dword ptr [0x02f0ca48],EDX      ; 004363d1 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004363d7 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004363dd
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004363e2
    MOV EAX,[0x00825cec]                ; 004363e5 | g_ClipperTempCount
        ;   Label: LAB_004363e5
    IMUL EDX,EAX,0x30                   ; 004363ea
    ADD EDX,0x825aac                    ; 004363ed | g_ClipperTempBuffer
    PUSH EDX                            ; 004363f3
    PUSH EDI                            ; 004363f4
    INC EBX                             ; 004363f5
    INC EAX                             ; 004363f6
    PUSH ESI                            ; 004363f7
    MOV [0x00825cec],EAX                ; 004363f8 | g_ClipperTempCount
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 004363fd
    CALL engine_clipper.c_interpolateVertexTopClip_FUN_00435d00 ; 00436401
        ;   XREF to: 00435d00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClip_FUN_00435d00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 00436406
    JMP 0x0043633c                      ; 00436409
        ;   XREF to: 0043633c (UNCONDITIONAL_JUMP)  ; caseD_3

