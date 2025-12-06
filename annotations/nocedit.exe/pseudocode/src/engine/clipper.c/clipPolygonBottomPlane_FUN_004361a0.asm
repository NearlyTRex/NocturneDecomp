; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_clipper.c_clipPolygonBottomPlane_FUN_004361a0(SRenderVertex * * input_vertices, SRenderVertex * * output_vertices, int vertex_count)
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
;   void* switchdataD_0043618c = 004361f1
;   void* PTR_caseD_1_00436190 = 0043621c
;   void* PTR_caseD_3_00436198 = 004361f6
;   TerminatedCString s_engine_clipper_c_00618103
;   TerminatedCString s_Ran_out_of_clipped_verts_00618117
;   SRenderVertex[12] g_ClipperTempBuffer
;   int g_ClipperTempCount
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004361a0
        ;   Label: engine_clipper.c_clipPolygonBottomPlane_FUN_004361a0
    PUSH ESI                            ; 004361a1
    PUSH EDI                            ; 004361a2
    PUSH EBP                            ; 004361a3
    SUB ESP,0x8                         ; 004361a4
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004361a7
    MOV EBP,dword ptr [ESP + 0x20]      ; 004361ab
    XOR EBX,EBX                         ; 004361af
    MOV EAX,dword ptr [ESP + 0x24]      ; 004361b1
    MOV dword ptr [ESP],EBX             ; 004361b5
    MOV ESI,dword ptr [EDX + EAX*0x4 + -0x4] ; 004361b8
    TEST EAX,EAX                        ; 004361bc
    JLE 0x00436212                      ; 004361be | LAB_00436212
        ;   XREF to: 00436212 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x4],EDX       ; 004361c0
    MOV EDI,dword ptr [ESP + 0x4]       ; 004361c4
        ;   Label: LAB_004361c4
    MOV EDX,dword ptr [ESI + 0x4]       ; 004361c8
    MOV ECX,dword ptr [ESI + 0x8]       ; 004361cb
    XOR EAX,EAX                         ; 004361ce
    MOV EDI,dword ptr [EDI]             ; 004361d0
    CMP EDX,ECX                         ; 004361d2
    JL 0x004361db                       ; 004361d4 | LAB_004361db
        ;   XREF to: 004361db (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 004361d6
    MOV ECX,dword ptr [EDI + 0x8]       ; 004361db
        ;   Label: LAB_004361db
    CMP ECX,dword ptr [EDI + 0x4]       ; 004361de
    JG 0x004361e5                       ; 004361e1 | LAB_004361e5
        ;   XREF to: 004361e5 (CONDITIONAL_JUMP)
    OR AL,0x2                           ; 004361e3
    CMP EAX,0x3                         ; 004361e5
        ;   Label: LAB_004361e5
    JA 0x004361f6                       ; 004361e8 | caseD_3
        ;   XREF to: 004361f6 (CONDITIONAL_JUMP)
    JMP dword ptr [EAX*0x4 + 0x43618c]  ; 004361ea | void * PTR_caseD_3_00436198 | PTR_caseD_1_00436190 = 0043621c | switchdataD_0043618c = 004361f1
        ;   Label: switchD
    INC EBX                             ; 004361f1
        ;   Label: caseD_0
    MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI ; 004361f2
    MOV EAX,dword ptr [ESP + 0x4]       ; 004361f6
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP]             ; 004361fa
    MOV ECX,dword ptr [ESP + 0x24]      ; 004361fd
    MOV ESI,EDI                         ; 00436201
    ADD EAX,0x4                         ; 00436203
    INC EDX                             ; 00436206
    MOV dword ptr [ESP + 0x4],EAX       ; 00436207
    MOV dword ptr [ESP],EDX             ; 0043620b
    CMP EDX,ECX                         ; 0043620e
    JL 0x004361c4                       ; 00436210 | LAB_004361c4
        ;   XREF to: 004361c4 (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 00436212
        ;   Label: LAB_00436212
    ADD ESP,0x8                         ; 00436214
    POP EBP                             ; 00436217
    POP EDI                             ; 00436218
    POP ESI                             ; 00436219
    POP EBX                             ; 0043621a
    RET                                 ; 0043621b
    CMP dword ptr [0x00825cec],0xc      ; 0043621c | int g_ClipperTempCount
        ;   Label: caseD_1
    JL 0x00436247                       ; 00436223 | LAB_00436247
        ;   XREF to: 00436247 (CONDITIONAL_JUMP)
    MOV ECX,0x618103                    ; 00436225 | = "..\\engine\\clipper.c" | s_engine_clipper_c_00618103 = ..\engine\clipper.c
    MOV EAX,0x5e                        ; 0043622a
    PUSH 0x618117                       ; 0043622f | = "Ran out of clipped verts!" | s_Ran_out_of_clipped_verts_00618117 = Ran out of clipped verts!
    MOV dword ptr [0x02f0ca48],ECX      ; 00436234 | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0043623a | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0043623f | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00436244
    MOV EAX,[0x00825cec]                ; 00436247 | int g_ClipperTempCount
        ;   Label: LAB_00436247
    IMUL EDX,EAX,0x30                   ; 0043624c
    ADD EDX,0x825aac                    ; 0043624f | SRenderVertex[12] g_ClipperTempBuffer
    PUSH EDX                            ; 00436255
    PUSH ESI                            ; 00436256
    INC EBX                             ; 00436257
    INC EAX                             ; 00436258
    PUSH EDI                            ; 00436259
    MOV [0x00825cec],EAX                ; 0043625a | int g_ClipperTempCount
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 0043625f
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00 ; 00436263 | void engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
        ;   XREF to: 00435c00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00436268
    JMP 0x004361f6                      ; 0043626b | caseD_3
        ;   XREF to: 004361f6 (UNCONDITIONAL_JUMP)
    INC EBX                             ; 0043626d
        ;   Label: caseD_2
    MOV EAX,[0x00825cec]                ; 0043626e | int g_ClipperTempCount
    MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI ; 00436273
    CMP EAX,0xc                         ; 00436277
    JL 0x0043629f                       ; 0043627a | LAB_0043629f
        ;   XREF to: 0043629f (CONDITIONAL_JUMP)
    MOV EDX,0x618103                    ; 0043627c | = "..\\engine\\clipper.c" | s_engine_clipper_c_00618103 = ..\engine\clipper.c
    MOV ECX,0x5e                        ; 00436281
    PUSH 0x618117                       ; 00436286 | = "Ran out of clipped verts!" | s_Ran_out_of_clipped_verts_00618117 = Ran out of clipped verts!
    MOV dword ptr [0x02f0ca48],EDX      ; 0043628b | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00436291 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00436297 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0043629c
    MOV EAX,[0x00825cec]                ; 0043629f | int g_ClipperTempCount
        ;   Label: LAB_0043629f
    IMUL EDX,EAX,0x30                   ; 004362a4
    ADD EDX,0x825aac                    ; 004362a7 | SRenderVertex[12] g_ClipperTempBuffer
    PUSH EDX                            ; 004362ad
    PUSH EDI                            ; 004362ae
    INC EBX                             ; 004362af
    INC EAX                             ; 004362b0
    PUSH ESI                            ; 004362b1
    MOV [0x00825cec],EAX                ; 004362b2 | int g_ClipperTempCount
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 004362b7
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00 ; 004362bb | void engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
        ;   XREF to: 00435c00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004362c0
    JMP 0x004361f6                      ; 004362c3 | caseD_3
        ;   XREF to: 004361f6 (UNCONDITIONAL_JUMP)

