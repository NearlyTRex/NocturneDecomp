; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderFacetList_FUN_0046d960(CDemonRenderer *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int primitive_stride,int render_flags)
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
;   engine_drender.cpp_CDemonRenderer_renderQuadBatch_FUN_0046d8f0 at 0046d94b
;   engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_0046d880 at 0046d8db
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_005bc58b
;   TerminatedCString s_CDemonRenderer_demonGZFa_005bc5a1
;   undefined4 DAT_005f2b04
;   undefined4 DAT_005fba20
;   undefined4 DAT_007303fc
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0
;   engine_prim.c_FUN_00515b80
;   engine_special.cpp_drawPolyList_FUN_00565c70
;   unkafter_dpart.cpp_FUN_00466d50
;   unkafter_dpart.cpp_FUN_004673d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046d960
        ;   Label: engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_0046d960
    PUSH ESI                            ; 0046d961
    PUSH EDI                            ; 0046d962
    PUSH EBP                            ; 0046d963
    SUB ESP,0x18                        ; 0046d964
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0046d967
    MOV EBX,dword ptr [ESP + 0x30]      ; 0046d96b
    MOV EDI,dword ptr [ESP + 0x34]      ; 0046d96f
    MOV EDX,dword ptr [ESI + 0x10]      ; 0046d973
    TEST EDX,EDX                        ; 0046d976
    JZ 0x0046d9a8                       ; 0046d978
        ;   XREF to: 0046d9a8 (CONDITIONAL_JUMP)  ; LAB_0046d9a8
    XOR EBP,EBP                         ; 0046d97a
        ;   Label: LAB_0046d97a
    TEST EDI,EDI                        ; 0046d97c
    JLE 0x0046d9a0                      ; 0046d97e
        ;   XREF to: 0046d9a0 (CONDITIONAL_JUMP)  ; LAB_0046d9a0
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0046d980
        ;   Label: LAB_0046d980
    PUSH EAX                            ; 0046d984
    PUSH EBX                            ; 0046d985
    PUSH ESI                            ; 0046d986
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0 ; 0046d987
        ;   XREF to: 0046b8f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly, int render_flags)
    ADD ESP,0xc                         ; 0046d98c
    MOV EDX,dword ptr [ESP + 0x38]      ; 0046d98f
    INC EBP                             ; 0046d993
    ADD EBX,EDX                         ; 0046d994
    CMP EBP,EDI                         ; 0046d996
    JL 0x0046d980                       ; 0046d998
        ;   XREF to: 0046d980 (CONDITIONAL_JUMP)  ; LAB_0046d980
    LEA EAX,[EAX]                       ; 0046d99a
    ADD ESP,0x18                        ; 0046d9a0
        ;   Label: LAB_0046d9a0
    POP EBP                             ; 0046d9a3
    POP EDI                             ; 0046d9a4
    POP ESI                             ; 0046d9a5
    POP EBX                             ; 0046d9a6
    RET                                 ; 0046d9a7
    CMP dword ptr [ESI + 0xc],0x0       ; 0046d9a8
        ;   Label: LAB_0046d9a8
    JNZ 0x0046d97a                      ; 0046d9ac
        ;   XREF to: 0046d97a (CONDITIONAL_JUMP)  ; LAB_0046d97a
    CMP dword ptr [0x007303fc],0x0      ; 0046d9ae | DAT_007303fc
    JZ 0x0046d97a                       ; 0046d9b5
        ;   XREF to: 0046d97a (CONDITIONAL_JUMP)  ; LAB_0046d97a
    CMP dword ptr [ESI + 0x4],0x0       ; 0046d9b7
    JZ 0x0046da1b                       ; 0046d9bb
        ;   XREF to: 0046da1b (CONDITIONAL_JUMP)  ; LAB_0046da1b
    MOV ESI,0x46f9a6                    ; 0046d9bd
    MOV dword ptr [0x01c6e2b4],EDX      ; 0046d9c2 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EDX      ; 0046d9c8 | DAT_01c6e2b8
    MOV dword ptr [0x01c6b5cc],ESI      ; 0046d9ce | DAT_01c6b5cc
    TEST EDI,EDI                        ; 0046d9d4
    JLE 0x0046d9a0                      ; 0046d9d6
        ;   XREF to: 0046d9a0 (CONDITIONAL_JUMP)  ; LAB_0046d9a0
    MOV ESI,dword ptr [ESP + 0x38]      ; 0046d9d8
    MOV EAX,dword ptr [EBX + 0x18]      ; 0046d9dc
        ;   Label: LAB_0046d9dc
    MOV dword ptr [ESP],EAX             ; 0046d9df
    MOV EAX,dword ptr [EBX + 0x24]      ; 0046d9e2
    MOV dword ptr [ESP + 0x4],EAX       ; 0046d9e5
    MOV EAX,dword ptr [EBX + 0x30]      ; 0046d9e9
    MOV dword ptr [ESP + 0x8],EAX       ; 0046d9ec
    MOV EBP,dword ptr [EBX + 0x4]       ; 0046d9f0
    MOV EDX,EBX                         ; 0046d9f3
    CMP EBP,0x4                         ; 0046d9f5
    JNZ 0x0046da01                      ; 0046d9f8
        ;   XREF to: 0046da01 (CONDITIONAL_JUMP)  ; LAB_0046da01
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0046d9fa
    MOV dword ptr [ESP + 0xc],EAX       ; 0046d9fd
    MOV ECX,dword ptr [EDX + 0x4]       ; 0046da01
        ;   Label: LAB_0046da01
    PUSH ECX                            ; 0046da04
    LEA EAX,[ESP + 0x4]                 ; 0046da05
    PUSH EAX                            ; 0046da09
    DEC EDI                             ; 0046da0a
    ADD EBX,ESI                         ; 0046da0b
    CALL unkafter_dpart.cpp_FUN_004673d0 ; 0046da0d
        ;   XREF to: 004673d0 (UNCONDITIONAL_CALL)  ; void unkafter_dpart.cpp_FUN_004673d0(CVector3i * vertex_indices, int vertex_count)
    ADD ESP,0x8                         ; 0046da12
    TEST EDI,EDI                        ; 0046da15
    JLE 0x0046d9a0                      ; 0046da17
        ;   XREF to: 0046d9a0 (CONDITIONAL_JUMP)  ; LAB_0046d9a0
    JMP 0x0046d9dc                      ; 0046da19
        ;   XREF to: 0046d9dc (UNCONDITIONAL_JUMP)  ; LAB_0046d9dc
    CMP dword ptr [0x005fba20],0x20     ; 0046da1b | DAT_005fba20
        ;   Label: LAB_0046da1b
    JNZ 0x0046db20                      ; 0046da22
        ;   XREF to: 0046db20 (CONDITIONAL_JUMP)  ; LAB_0046db20
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 0046da28 | DAT_01c6b5cc
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0046da32
        ;   Label: LAB_0046da32
    MOV [0x01c6e2b4],EAX                ; 0046da36 | DAT_01c6e2b4
    MOV EAX,0x6                         ; 0046da3b
    MOV EDX,dword ptr [0x01c6cee8]      ; 0046da40 | DAT_01c6cee8
    MOV [0x01c6e2b8],EAX                ; 0046da46 | DAT_01c6e2b8
    TEST EDX,EDX                        ; 0046da4b
    JNZ 0x0046db2f                      ; 0046da4d
        ;   XREF to: 0046db2f (CONDITIONAL_JUMP)  ; LAB_0046db2f
    TEST EDI,EDI                        ; 0046da53
        ;   Label: LAB_0046da53
    JLE 0x0046d9a0                      ; 0046da55
        ;   XREF to: 0046d9a0 (CONDITIONAL_JUMP)  ; LAB_0046d9a0
    MOV EAX,dword ptr [EBX + 0x18]      ; 0046da5b
    MOV dword ptr [ESP],EAX             ; 0046da5e
    MOV EAX,dword ptr [EBX + 0x24]      ; 0046da61
    MOV dword ptr [ESP + 0x4],EAX       ; 0046da64
    MOV EAX,dword ptr [EBX + 0x30]      ; 0046da68
    MOV dword ptr [ESP + 0x8],EAX       ; 0046da6b
    MOV ECX,dword ptr [EBX + 0x4]       ; 0046da6f
    MOV EDX,EBX                         ; 0046da72
    CMP ECX,0x4                         ; 0046da74
    JZ 0x0046dbc2                       ; 0046da77
        ;   XREF to: 0046dbc2 (CONDITIONAL_JUMP)  ; LAB_0046dbc2
    CMP dword ptr [ESI + 0x20],0x0      ; 0046da7d
        ;   Label: LAB_0046da7d
    JNZ 0x0046db03                      ; 0046da81
        ;   XREF to: 0046db03 (CONDITIONAL_JUMP)  ; LAB_0046db03
    IMUL EAX,dword ptr [ESP],0x30       ; 0046da87
    MOV EBP,dword ptr [ESI]             ; 0046da8b
    ADD EAX,EBP                         ; 0046da8d
    MOV EBP,dword ptr [EDX + 0x1c]      ; 0046da8f
    MOV dword ptr [EAX + 0x18],EBP      ; 0046da92
    IMUL EAX,dword ptr [ESP],0x30       ; 0046da95
    MOV EBP,dword ptr [ESI]             ; 0046da99
    ADD EBP,EAX                         ; 0046da9b
    MOV EAX,dword ptr [EDX + 0x20]      ; 0046da9d
    MOV dword ptr [EBP + 0x1c],EAX      ; 0046daa0
    IMUL EAX,dword ptr [ESP + 0x4],0x30 ; 0046daa3
    MOV EBP,dword ptr [ESI]             ; 0046daa8
    ADD EBP,EAX                         ; 0046daaa
    MOV EAX,dword ptr [EDX + 0x28]      ; 0046daac
    MOV dword ptr [EBP + 0x18],EAX      ; 0046daaf
    IMUL EBP,dword ptr [ESP + 0x4],0x30 ; 0046dab2
    MOV EAX,dword ptr [ESI]             ; 0046dab7
    ADD EBP,EAX                         ; 0046dab9
    MOV EAX,dword ptr [EDX + 0x2c]      ; 0046dabb
    MOV dword ptr [EBP + 0x1c],EAX      ; 0046dabe
    IMUL EAX,dword ptr [ESP + 0x8],0x30 ; 0046dac1
    MOV EBP,dword ptr [ESI]             ; 0046dac6
    ADD EBP,EAX                         ; 0046dac8
    MOV EAX,dword ptr [EDX + 0x34]      ; 0046daca
    MOV dword ptr [EBP + 0x18],EAX      ; 0046dacd
    IMUL EBP,dword ptr [ESP + 0x8],0x30 ; 0046dad0
    MOV EAX,dword ptr [ESI]             ; 0046dad5
    ADD EBP,EAX                         ; 0046dad7
    MOV EAX,dword ptr [EDX + 0x38]      ; 0046dad9
    MOV dword ptr [EBP + 0x1c],EAX      ; 0046dadc
    CMP dword ptr [EDX + 0x4],0x4       ; 0046dadf
    JNZ 0x0046db03                      ; 0046dae3
        ;   XREF to: 0046db03 (CONDITIONAL_JUMP)  ; LAB_0046db03
    IMUL EAX,dword ptr [ESP + 0xc],0x30 ; 0046dae5
    MOV EBP,dword ptr [ESI]             ; 0046daea
    ADD EBP,EAX                         ; 0046daec
    MOV EAX,dword ptr [EDX + 0x40]      ; 0046daee
    MOV dword ptr [EBP + 0x18],EAX      ; 0046daf1
    IMUL EBP,dword ptr [ESP + 0xc],0x30 ; 0046daf4
    MOV EAX,dword ptr [ESI]             ; 0046daf9
    ADD EBP,EAX                         ; 0046dafb
    MOV EAX,dword ptr [EDX + 0x44]      ; 0046dafd
    MOV dword ptr [EBP + 0x1c],EAX      ; 0046db00
    MOV ECX,dword ptr [EDX + 0x4]       ; 0046db03
        ;   Label: LAB_0046db03
    PUSH ECX                            ; 0046db06
    LEA EAX,[ESP + 0x4]                 ; 0046db07
    PUSH EAX                            ; 0046db0b
    CALL unkafter_dpart.cpp_FUN_00466d50 ; 0046db0c
        ;   XREF to: 00466d50 (UNCONDITIONAL_CALL)  ; void unkafter_dpart.cpp_FUN_00466d50(int * vertex_indices, int vertex_count)
    ADD ESP,0x8                         ; 0046db11
    MOV EBP,dword ptr [ESP + 0x38]      ; 0046db14
    DEC EDI                             ; 0046db18
    ADD EBX,EBP                         ; 0046db19
    JMP 0x0046da53                      ; 0046db1b
        ;   XREF to: 0046da53 (UNCONDITIONAL_JUMP)  ; LAB_0046da53
    MOV dword ptr [0x01c6b5cc],0x561713 ; 0046db20 | DAT_01c6b5cc
        ;   Label: LAB_0046db20
    JMP 0x0046da32                      ; 0046db2a
        ;   XREF to: 0046da32 (UNCONDITIONAL_JUMP)  ; LAB_0046da32
    XOR EBP,EBP                         ; 0046db2f
        ;   Label: LAB_0046db2f
    MOV dword ptr [ESP + 0x14],EBP      ; 0046db31
    TEST EDI,EDI                        ; 0046db35
    JLE 0x0046db9a                      ; 0046db37
        ;   XREF to: 0046db9a (CONDITIONAL_JUMP)  ; LAB_0046db9a
    MOV dword ptr [ESP + 0x10],EBP      ; 0046db39
    PUSH EBX                            ; 0046db3d
        ;   Label: LAB_0046db3d
    CALL engine_prim.c_FUN_00515b80     ; 0046db3e
        ;   XREF to: 00515b80 (UNCONDITIONAL_CALL)  ; int engine_prim.c_FUN_00515b80(SMRGLPrimitiveTriangle * triangle)
    ADD ESP,0x4                         ; 0046db43
    TEST EAX,EAX                        ; 0046db46
    JZ 0x0046db87                       ; 0046db48
        ;   XREF to: 0046db87 (CONDITIONAL_JUMP)  ; LAB_0046db87
    MOV EAX,dword ptr [ESP + 0x10]      ; 0046db4a
    INC EBP                             ; 0046db4e
    LEA EDX,[EAX + 0x4]                 ; 0046db4f
    MOV dword ptr [EAX + 0x5f2b04],EBX  ; 0046db52 | DAT_005f2b04
    MOV dword ptr [ESP + 0x10],EDX      ; 0046db58
    CMP EBP,0x7d0                       ; 0046db5c
    JL 0x0046db87                       ; 0046db62
        ;   XREF to: 0046db87 (CONDITIONAL_JUMP)  ; LAB_0046db87
    PUSH EBP                            ; 0046db64
    MOV ECX,0x5bc58b                    ; 0046db65 | = "..\\engine\\drender.cpp"
    MOV EAX,0x9b6                       ; 0046db6a
    PUSH 0x5bc5a1                       ; 0046db6f | = "CDemonRenderer::demonGZFacetList - To..."
    MOV dword ptr [0x01d71de0],ECX      ; 0046db74 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0046db7a | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0046db7f
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0046db84
    MOV EDX,dword ptr [ESP + 0x14]      ; 0046db87
        ;   Label: LAB_0046db87
    MOV EAX,dword ptr [ESP + 0x38]      ; 0046db8b
    INC EDX                             ; 0046db8f
    ADD EBX,EAX                         ; 0046db90
    MOV dword ptr [ESP + 0x14],EDX      ; 0046db92
    CMP EDI,EDX                         ; 0046db96
    JG 0x0046db3d                       ; 0046db98
        ;   XREF to: 0046db3d (CONDITIONAL_JUMP)  ; LAB_0046db3d
    TEST EBP,EBP                        ; 0046db9a
        ;   Label: LAB_0046db9a
    JLE 0x0046d9a0                      ; 0046db9c
        ;   XREF to: 0046d9a0 (CONDITIONAL_JUMP)  ; LAB_0046d9a0
    MOV EBX,dword ptr [0x01c6e2b4]      ; 0046dba2 | DAT_01c6e2b4
    PUSH EBX                            ; 0046dba8
    PUSH EBP                            ; 0046dba9
    PUSH 0x5f2b04                       ; 0046dbaa | DAT_005f2b04
    MOV EDI,dword ptr [ESI]             ; 0046dbaf
    PUSH EDI                            ; 0046dbb1
    CALL engine_special.cpp_drawPolyList_FUN_00565c70 ; 0046dbb2
        ;   XREF to: 00565c70 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_drawPolyList_FUN_00565c70()
    ADD ESP,0x10                        ; 0046dbb7
    ADD ESP,0x18                        ; 0046dbba
    POP EBP                             ; 0046dbbd
    POP EDI                             ; 0046dbbe
    POP ESI                             ; 0046dbbf
    POP EBX                             ; 0046dbc0
    RET                                 ; 0046dbc1
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0046dbc2
        ;   Label: LAB_0046dbc2
    MOV dword ptr [ESP + 0xc],EAX       ; 0046dbc5
    JMP 0x0046da7d                      ; 0046dbc9
        ;   XREF to: 0046da7d (UNCONDITIONAL_JUMP)  ; LAB_0046da7d

