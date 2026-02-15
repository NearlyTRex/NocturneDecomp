; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_clipper_c_clipPolygonRightPlane_FUN_00436060(SRenderVertex **input_vertices,SRenderVertex **output_vertices,int vertex_count)
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
;   void* switchdataD_00436048 = 004360b5
;   void* PTR_caseD_1_0043604c = 004360e0
;   void* PTR_caseD_3_00436054 = 004360ba
;   TerminatedCString s_engine_clipper_c_00618103
;   TerminatedCString s_Ran_out_of_clipped_verts_00618117
;   SRenderVertex[12] g_ClipperTempBuffer
;   int g_ClipperTempCount
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_clipper.c_interpolateVertexRightClip_FUN_00435b00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00436060
        ;   Label: engine_clipper.c_clipPolygonRightPlane_FUN_00436060
    PUSH ESI                            ; 00436061
    PUSH EDI                            ; 00436062
    PUSH EBP                            ; 00436063
    SUB ESP,0x8                         ; 00436064
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00436067
    MOV EBP,dword ptr [ESP + 0x20]      ; 0043606b
    XOR EBX,EBX                         ; 0043606f
    MOV EAX,dword ptr [ESP + 0x24]      ; 00436071
    MOV dword ptr [ESP],EBX             ; 00436075
    MOV ESI,dword ptr [EDX + EAX*0x4 + -0x4] ; 00436078
    TEST EAX,EAX                        ; 0043607c
    JLE 0x004360d6                      ; 0043607e
        ;   XREF to: 004360d6 (CONDITIONAL_JUMP)  ; LAB_004360d6
    MOV dword ptr [ESP + 0x4],EDX       ; 00436080
    MOV EDI,dword ptr [ESP + 0x4]       ; 00436084
        ;   Label: LAB_00436084
    MOV EDX,dword ptr [ESI + 0x8]       ; 00436088
    MOV ECX,dword ptr [ESI]             ; 0043608b
    XOR EAX,EAX                         ; 0043608d
    NEG EDX                             ; 0043608f
    MOV EDI,dword ptr [EDI]             ; 00436091
    CMP EDX,ECX                         ; 00436093
    JL 0x0043609c                       ; 00436095
        ;   XREF to: 0043609c (CONDITIONAL_JUMP)  ; LAB_0043609c
    MOV EAX,0x1                         ; 00436097
    MOV EDX,dword ptr [EDI + 0x8]       ; 0043609c
        ;   Label: LAB_0043609c
    MOV ECX,dword ptr [EDI]             ; 0043609f
    NEG EDX                             ; 004360a1
    CMP EDX,ECX                         ; 004360a3
    JL 0x004360a9                       ; 004360a5
        ;   XREF to: 004360a9 (CONDITIONAL_JUMP)  ; LAB_004360a9
    OR AL,0x2                           ; 004360a7
    CMP EAX,0x3                         ; 004360a9
        ;   Label: LAB_004360a9
    JA 0x004360ba                       ; 004360ac
        ;   XREF to: 004360ba (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x436048]  ; 004360ae | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    INC EBX                             ; 004360b5
        ;   Label: caseD_0
    MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI ; 004360b6
    MOV EAX,dword ptr [ESP + 0x4]       ; 004360ba
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP]             ; 004360be
    MOV ECX,dword ptr [ESP + 0x24]      ; 004360c1
    MOV ESI,EDI                         ; 004360c5
    ADD EAX,0x4                         ; 004360c7
    INC EDX                             ; 004360ca
    MOV dword ptr [ESP + 0x4],EAX       ; 004360cb
    MOV dword ptr [ESP],EDX             ; 004360cf
    CMP EDX,ECX                         ; 004360d2
    JL 0x00436084                       ; 004360d4
        ;   XREF to: 00436084 (CONDITIONAL_JUMP)  ; LAB_00436084
    MOV EAX,EBX                         ; 004360d6
        ;   Label: LAB_004360d6
    ADD ESP,0x8                         ; 004360d8
    POP EBP                             ; 004360db
    POP EDI                             ; 004360dc
    POP ESI                             ; 004360dd
    POP EBX                             ; 004360de
    RET                                 ; 004360df
    CMP dword ptr [0x00825cec],0xc      ; 004360e0 | g_ClipperTempCount
        ;   Label: caseD_1
    JL 0x0043610b                       ; 004360e7
        ;   XREF to: 0043610b (CONDITIONAL_JUMP)  ; LAB_0043610b
    MOV ECX,0x618103                    ; 004360e9 | = "..\\engine\\clipper.c"
    MOV EAX,0x5e                        ; 004360ee
    PUSH 0x618117                       ; 004360f3 | = "Ran out of clipped verts!"
    MOV dword ptr [0x02f0ca48],ECX      ; 004360f8 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 004360fe | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00436103
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00436108
    MOV EAX,[0x00825cec]                ; 0043610b | g_ClipperTempCount
        ;   Label: LAB_0043610b
    IMUL EDX,EAX,0x30                   ; 00436110
    ADD EDX,0x825aac                    ; 00436113 | g_ClipperTempBuffer
    PUSH EDX                            ; 00436119
    PUSH ESI                            ; 0043611a
    INC EBX                             ; 0043611b
    INC EAX                             ; 0043611c
    PUSH EDI                            ; 0043611d
    MOV [0x00825cec],EAX                ; 0043611e | g_ClipperTempCount
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 00436123
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_00435b00 ; 00436127
        ;   XREF to: 00435b00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClip_FUN_00435b00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 0043612c
    JMP 0x004360ba                      ; 0043612f
        ;   XREF to: 004360ba (UNCONDITIONAL_JUMP)  ; caseD_3
    INC EBX                             ; 00436131
        ;   Label: caseD_2
    MOV EAX,[0x00825cec]                ; 00436132 | g_ClipperTempCount
    MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI ; 00436137
    CMP EAX,0xc                         ; 0043613b
    JL 0x00436163                       ; 0043613e
        ;   XREF to: 00436163 (CONDITIONAL_JUMP)  ; LAB_00436163
    MOV EDX,0x618103                    ; 00436140 | = "..\\engine\\clipper.c"
    MOV ECX,0x5e                        ; 00436145
    PUSH 0x618117                       ; 0043614a | = "Ran out of clipped verts!"
    MOV dword ptr [0x02f0ca48],EDX      ; 0043614f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00436155 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0043615b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00436160
    MOV EAX,[0x00825cec]                ; 00436163 | g_ClipperTempCount
        ;   Label: LAB_00436163
    IMUL EDX,EAX,0x30                   ; 00436168
    ADD EDX,0x825aac                    ; 0043616b | g_ClipperTempBuffer
    PUSH EDX                            ; 00436171
    PUSH EDI                            ; 00436172
    INC EBX                             ; 00436173
    INC EAX                             ; 00436174
    PUSH ESI                            ; 00436175
    MOV [0x00825cec],EAX                ; 00436176 | g_ClipperTempCount
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 0043617b
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_00435b00 ; 0043617f
        ;   XREF to: 00435b00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClip_FUN_00435b00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 00436184
    JMP 0x004360ba                      ; 00436187
        ;   XREF to: 004360ba (UNCONDITIONAL_JUMP)  ; caseD_3

