; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderFaceList_FUN_0046bff0(CDemonRenderer *this_ptr,SInputFace *face_array,int face_count,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SInputFace *     Stack[0x8]:4   face_array
; int              Stack[0xc]:4   face_count
; int              Stack[0x10]:4   render_flags
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderFaceListOrEnvMap_FUN_00534040 at 00534082
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_005d1658
;   TerminatedCString s_CDemonRenderer_demonGZFa_005d166e
;   undefined4 DAT_0060b288
;   undefined4 DAT_006141c0
;   undefined4 DAT_0070ca7c
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c37788
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_dpart.cpp_FUN_00461f70
;   core_dpart.cpp_FUN_004625f0
;   core_main.c_FUN_004e4500
;   engine_drender.cpp_CDemonRenderer_captureFace_FUN_0046c720
;   engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_00469e80
;   engine_prim.c_getTriangleWindingFromPackedIndices_FUN_0051ca00
;   engine_special.cpp_drawPolyList2_FUN_0055fa90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046bff0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0046bff0
    PUSH ESI                            ; 0046bff1
    PUSH EDI                            ; 0046bff2
    PUSH EBP                            ; 0046bff3
    SUB ESP,0x14                        ; 0046bff4
    MOV ESI,dword ptr [ESP + 0x28]      ; 0046bff7
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0046bffb
    MOV EDI,dword ptr [ESP + 0x30]      ; 0046bfff
    CMP dword ptr [ESP + 0x34],-0x1     ; 0046c003
    JZ 0x0046c038                       ; 0046c008
        ;   XREF to: 0046c038 (CONDITIONAL_JUMP)  ; LAB_0046c038
    CMP dword ptr [ESI + 0x1c],0x0      ; 0046c00a
        ;   Label: LAB_0046c00a
    JZ 0x0046c042                       ; 0046c00e
        ;   XREF to: 0046c042 (CONDITIONAL_JUMP)  ; LAB_0046c042
    XOR EBP,EBP                         ; 0046c010
    TEST EDI,EDI                        ; 0046c012
    JLE 0x0046c030                      ; 0046c014
        ;   XREF to: 0046c030 (CONDITIONAL_JUMP)  ; LAB_0046c030
    MOV ECX,dword ptr [ESP + 0x34]      ; 0046c016
        ;   Label: LAB_0046c016
    PUSH ECX                            ; 0046c01a
    PUSH EBX                            ; 0046c01b
    PUSH ESI                            ; 0046c01c
    INC EBP                             ; 0046c01d
    CALL engine_drender.cpp_CDemonRenderer_captureFace_FUN_0046c720 ; 0046c01e
        ;   XREF to: 0046c720 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureFace_FUN_0046c720(CDemonRenderer * this_ptr, STrianglePackedIndices * triangle_indices, int render_flags)
    ADD EBX,0x12                        ; 0046c023
    ADD ESP,0xc                         ; 0046c026
    CMP EBP,EDI                         ; 0046c029
    JL 0x0046c016                       ; 0046c02b
        ;   XREF to: 0046c016 (CONDITIONAL_JUMP)  ; LAB_0046c016
    LEA EAX,[EAX]                       ; 0046c02d
    ADD ESP,0x14                        ; 0046c030
        ;   Label: LAB_0046c030
    POP EBP                             ; 0046c033
    POP EDI                             ; 0046c034
    POP ESI                             ; 0046c035
    POP EBX                             ; 0046c036
    RET                                 ; 0046c037
    MOV dword ptr [ESP + 0x34],0x2cd    ; 0046c038
        ;   Label: LAB_0046c038
    JMP 0x0046c00a                      ; 0046c040
        ;   XREF to: 0046c00a (UNCONDITIONAL_JUMP)  ; LAB_0046c00a
    MOV EAX,dword ptr [ESI + 0x10]      ; 0046c042
        ;   Label: LAB_0046c042
    TEST EAX,EAX                        ; 0046c045
    JZ 0x0046c06e                       ; 0046c047
        ;   XREF to: 0046c06e (CONDITIONAL_JUMP)  ; LAB_0046c06e
    XOR EBP,EBP                         ; 0046c049
        ;   Label: LAB_0046c049
    TEST EDI,EDI                        ; 0046c04b
    JLE 0x0046c030                      ; 0046c04d
        ;   XREF to: 0046c030 (CONDITIONAL_JUMP)  ; LAB_0046c030
    MOV EDX,dword ptr [ESP + 0x34]      ; 0046c04f
        ;   Label: LAB_0046c04f
    PUSH EDX                            ; 0046c053
    PUSH EBX                            ; 0046c054
    PUSH ESI                            ; 0046c055
    INC EBP                             ; 0046c056
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_00469e80 ; 0046c057
        ;   XREF to: 00469e80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_00469e80(CDemonRenderer * this_ptr, SInputFace * face, int render_flags)
    ADD EBX,0x12                        ; 0046c05c
    ADD ESP,0xc                         ; 0046c05f
    CMP EBP,EDI                         ; 0046c062
    JL 0x0046c04f                       ; 0046c064
        ;   XREF to: 0046c04f (CONDITIONAL_JUMP)  ; LAB_0046c04f
    ADD ESP,0x14                        ; 0046c066
    POP EBP                             ; 0046c069
    POP EDI                             ; 0046c06a
    POP ESI                             ; 0046c06b
    POP EBX                             ; 0046c06c
    RET                                 ; 0046c06d
    CMP dword ptr [ESI + 0xc],0x0       ; 0046c06e
        ;   Label: LAB_0046c06e
    JNZ 0x0046c049                      ; 0046c072
        ;   XREF to: 0046c049 (CONDITIONAL_JUMP)  ; LAB_0046c049
    CMP dword ptr [0x0070ca7c],0x0      ; 0046c074 | DAT_0070ca7c
    JZ 0x0046c049                       ; 0046c07b
        ;   XREF to: 0046c049 (CONDITIONAL_JUMP)  ; LAB_0046c049
    CMP dword ptr [ESI + 0x4],0x0       ; 0046c07d
    JNZ 0x0046c18e                      ; 0046c081
        ;   XREF to: 0046c18e (CONDITIONAL_JUMP)  ; LAB_0046c18e
    CMP dword ptr [0x006141c0],0x20     ; 0046c087 | DAT_006141c0
    JNZ 0x0046c1e6                      ; 0046c08e
        ;   XREF to: 0046c1e6 (CONDITIONAL_JUMP)  ; LAB_0046c1e6
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 0046c094 | DAT_01c35e6c
    MOV EAX,dword ptr [ESP + 0x34]      ; 0046c09e
        ;   Label: LAB_0046c09e
    MOV EBP,0x6                         ; 0046c0a2
    MOV [0x01c38b54],EAX                ; 0046c0a7 | DAT_01c38b54
    MOV EAX,[0x01c37788]                ; 0046c0ac | DAT_01c37788
    MOV dword ptr [0x01c38b58],EBP      ; 0046c0b1 | DAT_01c38b58
    TEST EAX,EAX                        ; 0046c0b7
    JNZ 0x0046c1f5                      ; 0046c0b9
        ;   XREF to: 0046c1f5 (CONDITIONAL_JUMP)  ; LAB_0046c1f5
    TEST EDI,EDI                        ; 0046c0bf
        ;   Label: LAB_0046c0bf
    JLE 0x0046c030                      ; 0046c0c1
        ;   XREF to: 0046c030 (CONDITIONAL_JUMP)  ; LAB_0046c030
    XOR EAX,EAX                         ; 0046c0c7
    MOV AX,word ptr [EBX]               ; 0046c0c9
    MOV dword ptr [ESP],EAX             ; 0046c0cc
    XOR EAX,EAX                         ; 0046c0cf
    MOV AX,word ptr [EBX + 0x2]         ; 0046c0d1
    MOV dword ptr [ESP + 0x4],EAX       ; 0046c0d5
    XOR EAX,EAX                         ; 0046c0d9
    MOV AX,word ptr [EBX + 0x4]         ; 0046c0db
    MOV dword ptr [ESP + 0x8],EAX       ; 0046c0df
    MOV EAX,dword ptr [ESI + 0x20]      ; 0046c0e3
    TEST EAX,EAX                        ; 0046c0e6
    JNZ 0x0046c176                      ; 0046c0e8
        ;   XREF to: 0046c176 (CONDITIONAL_JUMP)  ; LAB_0046c176
    MOV AX,word ptr [EBX + 0x6]         ; 0046c0ee
    MOV ECX,dword ptr [ESP]             ; 0046c0f2
    MOV EDX,EAX                         ; 0046c0f5
    IMUL EAX,ECX,0x30                   ; 0046c0f7
    MOV EBP,dword ptr [ESI]             ; 0046c0fa
    SHL EDX,0x8                         ; 0046c0fc
    MOV dword ptr [EAX + EBP*0x1 + 0x18],EDX ; 0046c0ff
    XOR EAX,EAX                         ; 0046c103
    MOV AX,word ptr [EBX + 0xc]         ; 0046c105
    MOV EDX,dword ptr [ESP]             ; 0046c109
    MOV EBP,EAX                         ; 0046c10c
    IMUL EAX,EDX,0x30                   ; 0046c10e
    MOV EDX,dword ptr [ESI]             ; 0046c111
    SHL EBP,0x8                         ; 0046c113
    MOV dword ptr [EDX + EAX*0x1 + 0x1c],EBP ; 0046c116
    IMUL EDX,dword ptr [ESP + 0x4],0x30 ; 0046c11a
    XOR EAX,EAX                         ; 0046c11f
    MOV AX,word ptr [EBX + 0x8]         ; 0046c121
    MOV EBP,dword ptr [ESI]             ; 0046c125
    SHL EAX,0x8                         ; 0046c127
    MOV dword ptr [EDX + EBP*0x1 + 0x18],EAX ; 0046c12a
    XOR EAX,EAX                         ; 0046c12e
    MOV AX,word ptr [EBX + 0xe]         ; 0046c130
    MOV EDX,dword ptr [ESP + 0x4]       ; 0046c134
    MOV EBP,EAX                         ; 0046c138
    IMUL EAX,EDX,0x30                   ; 0046c13a
    MOV EDX,dword ptr [ESI]             ; 0046c13d
    SHL EBP,0x8                         ; 0046c13f
    MOV dword ptr [EDX + EAX*0x1 + 0x1c],EBP ; 0046c142
    XOR EAX,EAX                         ; 0046c146
    MOV AX,word ptr [EBX + 0xa]         ; 0046c148
    MOV ECX,dword ptr [ESP + 0x8]       ; 0046c14c
    MOV EDX,EAX                         ; 0046c150
    IMUL EAX,ECX,0x30                   ; 0046c152
    MOV EBP,dword ptr [ESI]             ; 0046c155
    SHL EDX,0x8                         ; 0046c157
    MOV dword ptr [EAX + EBP*0x1 + 0x18],EDX ; 0046c15a
    XOR EAX,EAX                         ; 0046c15e
    MOV AX,word ptr [EBX + 0x10]        ; 0046c160
    MOV EDX,dword ptr [ESP + 0x8]       ; 0046c164
    MOV EBP,EAX                         ; 0046c168
    IMUL EAX,EDX,0x30                   ; 0046c16a
    MOV EDX,dword ptr [ESI]             ; 0046c16d
    SHL EBP,0x8                         ; 0046c16f
    MOV dword ptr [EDX + EAX*0x1 + 0x1c],EBP ; 0046c172
    PUSH 0x3                            ; 0046c176
        ;   Label: LAB_0046c176
    LEA EAX,[ESP + 0x4]                 ; 0046c178
    PUSH EAX                            ; 0046c17c
    DEC EDI                             ; 0046c17d
    ADD EBX,0x12                        ; 0046c17e
    CALL core_dpart.cpp_FUN_00461f70    ; 0046c181
        ;   XREF to: 00461f70 (UNCONDITIONAL_CALL)  ; void core_dpart.cpp_FUN_00461f70(int * vertex_indices, int vertex_count)
    ADD ESP,0x8                         ; 0046c186
    JMP 0x0046c0bf                      ; 0046c189
        ;   XREF to: 0046c0bf (UNCONDITIONAL_JUMP)  ; LAB_0046c0bf
    MOV ECX,0x46e936                    ; 0046c18e
        ;   Label: LAB_0046c18e
    MOV [0x01c38b54],EAX                ; 0046c193 | DAT_01c38b54
    MOV [0x01c38b58],EAX                ; 0046c198 | DAT_01c38b58
    MOV dword ptr [0x01c35e6c],ECX      ; 0046c19d | DAT_01c35e6c
    TEST EDI,EDI                        ; 0046c1a3
    JLE 0x0046c030                      ; 0046c1a5
        ;   XREF to: 0046c030 (CONDITIONAL_JUMP)  ; LAB_0046c030
    XOR EAX,EAX                         ; 0046c1ab
        ;   Label: LAB_0046c1ab
    MOV AX,word ptr [EBX]               ; 0046c1ad
    MOV dword ptr [ESP],EAX             ; 0046c1b0
    XOR EAX,EAX                         ; 0046c1b3
    MOV AX,word ptr [EBX + 0x2]         ; 0046c1b5
    MOV dword ptr [ESP + 0x4],EAX       ; 0046c1b9
    XOR EAX,EAX                         ; 0046c1bd
    MOV AX,word ptr [EBX + 0x4]         ; 0046c1bf
    PUSH 0x3                            ; 0046c1c3
    MOV dword ptr [ESP + 0xc],EAX       ; 0046c1c5
    LEA EAX,[ESP + 0x4]                 ; 0046c1c9
    PUSH EAX                            ; 0046c1cd
    DEC EDI                             ; 0046c1ce
    ADD EBX,0x12                        ; 0046c1cf
    CALL core_dpart.cpp_FUN_004625f0    ; 0046c1d2
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dpart.cpp_FUN_004625f0(CVector3i * vertex_indices, int vertex_count)
    ADD ESP,0x8                         ; 0046c1d7
    TEST EDI,EDI                        ; 0046c1da
    JG 0x0046c1ab                       ; 0046c1dc
        ;   XREF to: 0046c1ab (CONDITIONAL_JUMP)  ; LAB_0046c1ab
    ADD ESP,0x14                        ; 0046c1de
    POP EBP                             ; 0046c1e1
    POP EDI                             ; 0046c1e2
    POP ESI                             ; 0046c1e3
    POP EBX                             ; 0046c1e4
    RET                                 ; 0046c1e5
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 0046c1e6 | DAT_01c35e6c
        ;   Label: LAB_0046c1e6
    JMP 0x0046c09e                      ; 0046c1f0
        ;   XREF to: 0046c09e (UNCONDITIONAL_JUMP)  ; LAB_0046c09e
    XOR EBP,EBP                         ; 0046c1f5
        ;   Label: LAB_0046c1f5
    MOV dword ptr [ESP + 0x10],EBP      ; 0046c1f7
    TEST EDI,EDI                        ; 0046c1fb
    JLE 0x0046c25d                      ; 0046c1fd
        ;   XREF to: 0046c25d (CONDITIONAL_JUMP)  ; LAB_0046c25d
    MOV dword ptr [ESP + 0xc],EBP       ; 0046c1ff
    PUSH EBX                            ; 0046c203
        ;   Label: LAB_0046c203
    CALL engine_prim.c_getTriangleWindingFromPackedIndices_FUN_0051ca00 ; 0046c204
        ;   XREF to: 0051ca00 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_getTriangleWindingFromPackedIndices_FUN_0051ca00()
    ADD ESP,0x4                         ; 0046c209
    TEST EAX,EAX                        ; 0046c20c
    JZ 0x0046c24d                       ; 0046c20e
        ;   XREF to: 0046c24d (CONDITIONAL_JUMP)  ; LAB_0046c24d
    MOV EAX,dword ptr [ESP + 0xc]       ; 0046c210
    INC EBP                             ; 0046c214
    LEA EDX,[EAX + 0x4]                 ; 0046c215
    MOV dword ptr [EAX + 0x60b288],EBX  ; 0046c218 | DAT_0060b288
    MOV dword ptr [ESP + 0xc],EDX       ; 0046c21e
    CMP EBP,0x7d0                       ; 0046c222
    JL 0x0046c24d                       ; 0046c228
        ;   XREF to: 0046c24d (CONDITIONAL_JUMP)  ; LAB_0046c24d
    PUSH EBP                            ; 0046c22a
    MOV ECX,0x5d1658                    ; 0046c22b | = "..\\engine\\drender.cpp"
    MOV EAX,0xa30                       ; 0046c230
    PUSH 0x5d166e                       ; 0046c235 | = "CDemonRenderer::demonGZFacetList - To..."
    MOV dword ptr [0x01d046a0],ECX      ; 0046c23a | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0046c240 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0046c245
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0046c24a
    MOV ECX,dword ptr [ESP + 0x10]      ; 0046c24d
        ;   Label: LAB_0046c24d
    INC ECX                             ; 0046c251
    ADD EBX,0x12                        ; 0046c252
    MOV dword ptr [ESP + 0x10],ECX      ; 0046c255
    CMP EDI,ECX                         ; 0046c259
    JG 0x0046c203                       ; 0046c25b
        ;   XREF to: 0046c203 (CONDITIONAL_JUMP)  ; LAB_0046c203
    TEST EBP,EBP                        ; 0046c25d
        ;   Label: LAB_0046c25d
    JLE 0x0046c030                      ; 0046c25f
        ;   XREF to: 0046c030 (CONDITIONAL_JUMP)  ; LAB_0046c030
    MOV EDX,dword ptr [0x01c38b54]      ; 0046c265 | DAT_01c38b54
    PUSH EDX                            ; 0046c26b
    PUSH EBP                            ; 0046c26c
    PUSH 0x60b288                       ; 0046c26d | DAT_0060b288
    MOV ECX,dword ptr [ESI]             ; 0046c272
    PUSH ECX                            ; 0046c274
    CALL engine_special.cpp_drawPolyList2_FUN_0055fa90 ; 0046c275
        ;   XREF to: 0055fa90 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_drawPolyList2_FUN_0055fa90()
    ADD ESP,0x10                        ; 0046c27a
    ADD ESP,0x14                        ; 0046c27d
    POP EBP                             ; 0046c280
    POP EDI                             ; 0046c281
    POP ESI                             ; 0046c282
    POP EBX                             ; 0046c283
    RET                                 ; 0046c284

