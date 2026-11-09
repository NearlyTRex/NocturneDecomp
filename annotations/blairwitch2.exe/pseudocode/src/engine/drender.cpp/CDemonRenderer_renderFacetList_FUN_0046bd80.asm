; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderFacetList_FUN_0046bd80(CDemonRenderer *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int primitive_stride,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitiveQuad * Stack[0x8]:4   primitive_array
; int              Stack[0xc]:4   primitive_count
; int              Stack[0x10]:4   primitive_stride
; int              Stack[0x14]:4   render_flags
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_renderQuadBatch_FUN_0046bd10 at 0046bd6b
;   engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_0046bca0 at 0046bcfb
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_005d15fb
;   TerminatedCString s_CDemonRenderer_demonGZFa_005d1611
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
;   engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00469d00
;   engine_prim.c_FUN_0051c820
;   engine_special.cpp_drawPolyList_FUN_0055f950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046bd80
        ;   Label: engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_0046bd80
    PUSH ESI                            ; 0046bd81
    PUSH EDI                            ; 0046bd82
    PUSH EBP                            ; 0046bd83
    SUB ESP,0x18                        ; 0046bd84
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0046bd87
    MOV EBX,dword ptr [ESP + 0x30]      ; 0046bd8b
    MOV EDI,dword ptr [ESP + 0x34]      ; 0046bd8f
    MOV EDX,dword ptr [ESI + 0x10]      ; 0046bd93
    TEST EDX,EDX                        ; 0046bd96
    JZ 0x0046bdc8                       ; 0046bd98
        ;   XREF to: 0046bdc8 (CONDITIONAL_JUMP)  ; LAB_0046bdc8
    XOR EBP,EBP                         ; 0046bd9a
        ;   Label: LAB_0046bd9a
    TEST EDI,EDI                        ; 0046bd9c
    JLE 0x0046bdc0                      ; 0046bd9e
        ;   XREF to: 0046bdc0 (CONDITIONAL_JUMP)  ; LAB_0046bdc0
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0046bda0
        ;   Label: LAB_0046bda0
    PUSH EAX                            ; 0046bda4
    PUSH EBX                            ; 0046bda5
    PUSH ESI                            ; 0046bda6
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00469d00 ; 0046bda7
        ;   XREF to: 00469d00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00469d00(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly, int render_flags)
    ADD ESP,0xc                         ; 0046bdac
    MOV EDX,dword ptr [ESP + 0x38]      ; 0046bdaf
    INC EBP                             ; 0046bdb3
    ADD EBX,EDX                         ; 0046bdb4
    CMP EBP,EDI                         ; 0046bdb6
    JL 0x0046bda0                       ; 0046bdb8
        ;   XREF to: 0046bda0 (CONDITIONAL_JUMP)  ; LAB_0046bda0
    LEA EAX,[EAX]                       ; 0046bdba
    ADD ESP,0x18                        ; 0046bdc0
        ;   Label: LAB_0046bdc0
    POP EBP                             ; 0046bdc3
    POP EDI                             ; 0046bdc4
    POP ESI                             ; 0046bdc5
    POP EBX                             ; 0046bdc6
    RET                                 ; 0046bdc7
    CMP dword ptr [ESI + 0xc],0x0       ; 0046bdc8
        ;   Label: LAB_0046bdc8
    JNZ 0x0046bd9a                      ; 0046bdcc
        ;   XREF to: 0046bd9a (CONDITIONAL_JUMP)  ; LAB_0046bd9a
    CMP dword ptr [0x0070ca7c],0x0      ; 0046bdce | DAT_0070ca7c
    JZ 0x0046bd9a                       ; 0046bdd5
        ;   XREF to: 0046bd9a (CONDITIONAL_JUMP)  ; LAB_0046bd9a
    CMP dword ptr [ESI + 0x4],0x0       ; 0046bdd7
    JZ 0x0046be3b                       ; 0046bddb
        ;   XREF to: 0046be3b (CONDITIONAL_JUMP)  ; LAB_0046be3b
    MOV ESI,0x46e936                    ; 0046bddd
    MOV dword ptr [0x01c38b54],EDX      ; 0046bde2 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EDX      ; 0046bde8 | DAT_01c38b58
    MOV dword ptr [0x01c35e6c],ESI      ; 0046bdee | DAT_01c35e6c
    TEST EDI,EDI                        ; 0046bdf4
    JLE 0x0046bdc0                      ; 0046bdf6
        ;   XREF to: 0046bdc0 (CONDITIONAL_JUMP)  ; LAB_0046bdc0
    MOV ESI,dword ptr [ESP + 0x38]      ; 0046bdf8
    MOV EAX,dword ptr [EBX + 0x18]      ; 0046bdfc
        ;   Label: LAB_0046bdfc
    MOV dword ptr [ESP],EAX             ; 0046bdff
    MOV EAX,dword ptr [EBX + 0x24]      ; 0046be02
    MOV dword ptr [ESP + 0x4],EAX       ; 0046be05
    MOV EAX,dword ptr [EBX + 0x30]      ; 0046be09
    MOV dword ptr [ESP + 0x8],EAX       ; 0046be0c
    MOV EBP,dword ptr [EBX + 0x4]       ; 0046be10
    MOV EDX,EBX                         ; 0046be13
    CMP EBP,0x4                         ; 0046be15
    JNZ 0x0046be21                      ; 0046be18
        ;   XREF to: 0046be21 (CONDITIONAL_JUMP)  ; LAB_0046be21
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0046be1a
    MOV dword ptr [ESP + 0xc],EAX       ; 0046be1d
    MOV ECX,dword ptr [EDX + 0x4]       ; 0046be21
        ;   Label: LAB_0046be21
    PUSH ECX                            ; 0046be24
    LEA EAX,[ESP + 0x4]                 ; 0046be25
    PUSH EAX                            ; 0046be29
    DEC EDI                             ; 0046be2a
    ADD EBX,ESI                         ; 0046be2b
    CALL core_dpart.cpp_FUN_004625f0    ; 0046be2d
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dpart.cpp_FUN_004625f0(CVector3i * vertex_indices, int vertex_count)
    ADD ESP,0x8                         ; 0046be32
    TEST EDI,EDI                        ; 0046be35
    JLE 0x0046bdc0                      ; 0046be37
        ;   XREF to: 0046bdc0 (CONDITIONAL_JUMP)  ; LAB_0046bdc0
    JMP 0x0046bdfc                      ; 0046be39
        ;   XREF to: 0046bdfc (UNCONDITIONAL_JUMP)  ; LAB_0046bdfc
    CMP dword ptr [0x006141c0],0x20     ; 0046be3b | DAT_006141c0
        ;   Label: LAB_0046be3b
    JNZ 0x0046bf40                      ; 0046be42
        ;   XREF to: 0046bf40 (CONDITIONAL_JUMP)  ; LAB_0046bf40
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 0046be48 | DAT_01c35e6c
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0046be52
        ;   Label: LAB_0046be52
    MOV [0x01c38b54],EAX                ; 0046be56 | DAT_01c38b54
    MOV EAX,0x6                         ; 0046be5b
    MOV EDX,dword ptr [0x01c37788]      ; 0046be60 | DAT_01c37788
    MOV [0x01c38b58],EAX                ; 0046be66 | DAT_01c38b58
    TEST EDX,EDX                        ; 0046be6b
    JNZ 0x0046bf4f                      ; 0046be6d
        ;   XREF to: 0046bf4f (CONDITIONAL_JUMP)  ; LAB_0046bf4f
    TEST EDI,EDI                        ; 0046be73
        ;   Label: LAB_0046be73
    JLE 0x0046bdc0                      ; 0046be75
        ;   XREF to: 0046bdc0 (CONDITIONAL_JUMP)  ; LAB_0046bdc0
    MOV EAX,dword ptr [EBX + 0x18]      ; 0046be7b
    MOV dword ptr [ESP],EAX             ; 0046be7e
    MOV EAX,dword ptr [EBX + 0x24]      ; 0046be81
    MOV dword ptr [ESP + 0x4],EAX       ; 0046be84
    MOV EAX,dword ptr [EBX + 0x30]      ; 0046be88
    MOV dword ptr [ESP + 0x8],EAX       ; 0046be8b
    MOV ECX,dword ptr [EBX + 0x4]       ; 0046be8f
    MOV EDX,EBX                         ; 0046be92
    CMP ECX,0x4                         ; 0046be94
    JZ 0x0046bfe2                       ; 0046be97
        ;   XREF to: 0046bfe2 (CONDITIONAL_JUMP)  ; LAB_0046bfe2
    CMP dword ptr [ESI + 0x20],0x0      ; 0046be9d
        ;   Label: LAB_0046be9d
    JNZ 0x0046bf23                      ; 0046bea1
        ;   XREF to: 0046bf23 (CONDITIONAL_JUMP)  ; LAB_0046bf23
    IMUL EAX,dword ptr [ESP],0x30       ; 0046bea7
    MOV EBP,dword ptr [ESI]             ; 0046beab
    ADD EAX,EBP                         ; 0046bead
    MOV EBP,dword ptr [EDX + 0x1c]      ; 0046beaf
    MOV dword ptr [EAX + 0x18],EBP      ; 0046beb2
    IMUL EAX,dword ptr [ESP],0x30       ; 0046beb5
    MOV EBP,dword ptr [ESI]             ; 0046beb9
    ADD EBP,EAX                         ; 0046bebb
    MOV EAX,dword ptr [EDX + 0x20]      ; 0046bebd
    MOV dword ptr [EBP + 0x1c],EAX      ; 0046bec0
    IMUL EAX,dword ptr [ESP + 0x4],0x30 ; 0046bec3
    MOV EBP,dword ptr [ESI]             ; 0046bec8
    ADD EBP,EAX                         ; 0046beca
    MOV EAX,dword ptr [EDX + 0x28]      ; 0046becc
    MOV dword ptr [EBP + 0x18],EAX      ; 0046becf
    IMUL EBP,dword ptr [ESP + 0x4],0x30 ; 0046bed2
    MOV EAX,dword ptr [ESI]             ; 0046bed7
    ADD EBP,EAX                         ; 0046bed9
    MOV EAX,dword ptr [EDX + 0x2c]      ; 0046bedb
    MOV dword ptr [EBP + 0x1c],EAX      ; 0046bede
    IMUL EAX,dword ptr [ESP + 0x8],0x30 ; 0046bee1
    MOV EBP,dword ptr [ESI]             ; 0046bee6
    ADD EBP,EAX                         ; 0046bee8
    MOV EAX,dword ptr [EDX + 0x34]      ; 0046beea
    MOV dword ptr [EBP + 0x18],EAX      ; 0046beed
    IMUL EBP,dword ptr [ESP + 0x8],0x30 ; 0046bef0
    MOV EAX,dword ptr [ESI]             ; 0046bef5
    ADD EBP,EAX                         ; 0046bef7
    MOV EAX,dword ptr [EDX + 0x38]      ; 0046bef9
    MOV dword ptr [EBP + 0x1c],EAX      ; 0046befc
    CMP dword ptr [EDX + 0x4],0x4       ; 0046beff
    JNZ 0x0046bf23                      ; 0046bf03
        ;   XREF to: 0046bf23 (CONDITIONAL_JUMP)  ; LAB_0046bf23
    IMUL EAX,dword ptr [ESP + 0xc],0x30 ; 0046bf05
    MOV EBP,dword ptr [ESI]             ; 0046bf0a
    ADD EBP,EAX                         ; 0046bf0c
    MOV EAX,dword ptr [EDX + 0x40]      ; 0046bf0e
    MOV dword ptr [EBP + 0x18],EAX      ; 0046bf11
    IMUL EBP,dword ptr [ESP + 0xc],0x30 ; 0046bf14
    MOV EAX,dword ptr [ESI]             ; 0046bf19
    ADD EBP,EAX                         ; 0046bf1b
    MOV EAX,dword ptr [EDX + 0x44]      ; 0046bf1d
    MOV dword ptr [EBP + 0x1c],EAX      ; 0046bf20
    MOV ECX,dword ptr [EDX + 0x4]       ; 0046bf23
        ;   Label: LAB_0046bf23
    PUSH ECX                            ; 0046bf26
    LEA EAX,[ESP + 0x4]                 ; 0046bf27
    PUSH EAX                            ; 0046bf2b
    CALL core_dpart.cpp_FUN_00461f70    ; 0046bf2c
        ;   XREF to: 00461f70 (UNCONDITIONAL_CALL)  ; void core_dpart.cpp_FUN_00461f70(int * vertex_indices, int vertex_count)
    ADD ESP,0x8                         ; 0046bf31
    MOV EBP,dword ptr [ESP + 0x38]      ; 0046bf34
    DEC EDI                             ; 0046bf38
    ADD EBX,EBP                         ; 0046bf39
    JMP 0x0046be73                      ; 0046bf3b
        ;   XREF to: 0046be73 (UNCONDITIONAL_JUMP)  ; LAB_0046be73
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 0046bf40 | DAT_01c35e6c
        ;   Label: LAB_0046bf40
    JMP 0x0046be52                      ; 0046bf4a
        ;   XREF to: 0046be52 (UNCONDITIONAL_JUMP)  ; LAB_0046be52
    XOR EBP,EBP                         ; 0046bf4f
        ;   Label: LAB_0046bf4f
    MOV dword ptr [ESP + 0x14],EBP      ; 0046bf51
    TEST EDI,EDI                        ; 0046bf55
    JLE 0x0046bfba                      ; 0046bf57
        ;   XREF to: 0046bfba (CONDITIONAL_JUMP)  ; LAB_0046bfba
    MOV dword ptr [ESP + 0x10],EBP      ; 0046bf59
    PUSH EBX                            ; 0046bf5d
        ;   Label: LAB_0046bf5d
    CALL engine_prim.c_FUN_0051c820     ; 0046bf5e
        ;   XREF to: 0051c820 (UNCONDITIONAL_CALL)  ; int engine_prim.c_FUN_0051c820(SMRGLPrimitiveTriangle * triangle)
    ADD ESP,0x4                         ; 0046bf63
    TEST EAX,EAX                        ; 0046bf66
    JZ 0x0046bfa7                       ; 0046bf68
        ;   XREF to: 0046bfa7 (CONDITIONAL_JUMP)  ; LAB_0046bfa7
    MOV EAX,dword ptr [ESP + 0x10]      ; 0046bf6a
    INC EBP                             ; 0046bf6e
    LEA EDX,[EAX + 0x4]                 ; 0046bf6f
    MOV dword ptr [EAX + 0x60b288],EBX  ; 0046bf72 | DAT_0060b288
    MOV dword ptr [ESP + 0x10],EDX      ; 0046bf78
    CMP EBP,0x7d0                       ; 0046bf7c
    JL 0x0046bfa7                       ; 0046bf82
        ;   XREF to: 0046bfa7 (CONDITIONAL_JUMP)  ; LAB_0046bfa7
    PUSH EBP                            ; 0046bf84
    MOV ECX,0x5d15fb                    ; 0046bf85 | = "..\\engine\\drender.cpp"
    MOV EAX,0x9b6                       ; 0046bf8a
    PUSH 0x5d1611                       ; 0046bf8f | = "CDemonRenderer::demonGZFacetList - To..."
    MOV dword ptr [0x01d046a0],ECX      ; 0046bf94 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0046bf9a | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0046bf9f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0046bfa4
    MOV EDX,dword ptr [ESP + 0x14]      ; 0046bfa7
        ;   Label: LAB_0046bfa7
    MOV EAX,dword ptr [ESP + 0x38]      ; 0046bfab
    INC EDX                             ; 0046bfaf
    ADD EBX,EAX                         ; 0046bfb0
    MOV dword ptr [ESP + 0x14],EDX      ; 0046bfb2
    CMP EDI,EDX                         ; 0046bfb6
    JG 0x0046bf5d                       ; 0046bfb8
        ;   XREF to: 0046bf5d (CONDITIONAL_JUMP)  ; LAB_0046bf5d
    TEST EBP,EBP                        ; 0046bfba
        ;   Label: LAB_0046bfba
    JLE 0x0046bdc0                      ; 0046bfbc
        ;   XREF to: 0046bdc0 (CONDITIONAL_JUMP)  ; LAB_0046bdc0
    MOV EBX,dword ptr [0x01c38b54]      ; 0046bfc2 | DAT_01c38b54
    PUSH EBX                            ; 0046bfc8
    PUSH EBP                            ; 0046bfc9
    PUSH 0x60b288                       ; 0046bfca | DAT_0060b288
    MOV EDI,dword ptr [ESI]             ; 0046bfcf
    PUSH EDI                            ; 0046bfd1
    CALL engine_special.cpp_drawPolyList_FUN_0055f950 ; 0046bfd2
        ;   XREF to: 0055f950 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_drawPolyList_FUN_0055f950()
    ADD ESP,0x10                        ; 0046bfd7
    ADD ESP,0x18                        ; 0046bfda
    POP EBP                             ; 0046bfdd
    POP EDI                             ; 0046bfde
    POP ESI                             ; 0046bfdf
    POP EBX                             ; 0046bfe0
    RET                                 ; 0046bfe1
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0046bfe2
        ;   Label: LAB_0046bfe2
    MOV dword ptr [ESP + 0xc],EAX       ; 0046bfe5
    JMP 0x0046be9d                      ; 0046bfe9
        ;   XREF to: 0046be9d (UNCONDITIONAL_JUMP)  ; LAB_0046be9d

