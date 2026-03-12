; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *quad_primitive,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   quad_primitive
; int              Stack[0xc]:4   render_flags
; Local Variables:
; STrianglePackedIndices Stack[-0x24]:6  local_24
; undefined2       Stack[-0x1e]:2  local_1e
; undefined2       Stack[-0x1c]:2  local_1c
; undefined2       Stack[-0x1a]:2  local_1a
; undefined2       Stack[-0x18]:2  local_18
; undefined2       Stack[-0x16]:2  local_16
; undefined2       Stack[-0x14]:2  local_14
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_renderPrimitiveBatch_FUN_0048ce90 at 0048cec2
;   engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0 at 0048af67
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_drender.cpp_CDemonRenderer_captureFace_FUN_0048d8a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048d7a0
        ;   Label: engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0
    PUSH ESI                            ; 0048d7a1
    PUSH EDI                            ; 0048d7a2
    PUSH EBP                            ; 0048d7a3
    SUB ESP,0x14                        ; 0048d7a4
    MOV ESI,dword ptr [ESP + 0x28]      ; 0048d7a7
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0048d7ab
    CMP dword ptr [ESI + 0xc],0x0       ; 0048d7af
    JZ 0x0048d7cd                       ; 0048d7b3
        ;   XREF to: 0048d7cd (CONDITIONAL_JUMP)  ; LAB_0048d7cd
    LEA EAX,[EBX + 0x8]                 ; 0048d7b5
    PUSH EAX                            ; 0048d7b8
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0048d7b9
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 0048d7be
    TEST EAX,EAX                        ; 0048d7c1
    JNZ 0x0048d7cd                      ; 0048d7c3
        ;   XREF to: 0048d7cd (CONDITIONAL_JUMP)  ; LAB_0048d7cd
    ADD ESP,0x14                        ; 0048d7c5
        ;   Label: LAB_0048d7c5
    POP EBP                             ; 0048d7c8
    POP EDI                             ; 0048d7c9
    POP ESI                             ; 0048d7ca
    POP EBX                             ; 0048d7cb
    RET                                 ; 0048d7cc
    MOV AX,word ptr [EBX + 0x18]        ; 0048d7cd
        ;   Label: LAB_0048d7cd
    MOV word ptr [ESP],AX               ; 0048d7d1
    MOV AX,word ptr [EBX + 0x24]        ; 0048d7d5
    MOV word ptr [ESP + 0x2],AX         ; 0048d7d9
    MOV AX,word ptr [EBX + 0x30]        ; 0048d7de
    MOV word ptr [ESP + 0x4],AX         ; 0048d7e2
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0048d7e7
    SAR EAX,0x8                         ; 0048d7ea
    MOV word ptr [ESP + 0x6],AX         ; 0048d7ed
    MOV EAX,dword ptr [EBX + 0x28]      ; 0048d7f2
    SAR EAX,0x8                         ; 0048d7f5
    MOV word ptr [ESP + 0x8],AX         ; 0048d7f8
    MOV EAX,dword ptr [EBX + 0x34]      ; 0048d7fd
    SAR EAX,0x8                         ; 0048d800
    MOV word ptr [ESP + 0xa],AX         ; 0048d803
    MOV EAX,dword ptr [EBX + 0x20]      ; 0048d808
    SAR EAX,0x8                         ; 0048d80b
    MOV word ptr [ESP + 0xc],AX         ; 0048d80e
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0048d813
    SAR EAX,0x8                         ; 0048d816
    MOV word ptr [ESP + 0xe],AX         ; 0048d819
    MOV EAX,dword ptr [EBX + 0x38]      ; 0048d81e
    MOV ECX,dword ptr [ESP + 0x30]      ; 0048d821
    SAR EAX,0x8                         ; 0048d825
    PUSH ECX                            ; 0048d828
    MOV word ptr [ESP + 0x14],AX        ; 0048d829
    LEA EAX,[ESP + 0x4]                 ; 0048d82e
    PUSH EAX                            ; 0048d832
    PUSH ESI                            ; 0048d833
    CALL engine_drender.cpp_CDemonRenderer_captureFace_FUN_0048d8a0 ; 0048d834
        ;   XREF to: 0048d8a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureFace_FUN_0048d8a0(CDemonRenderer * this_ptr, STrianglePackedIndices * triangle_indices, int render_flags)
    MOV EDI,dword ptr [EBX + 0x4]       ; 0048d839
    ADD ESP,0xc                         ; 0048d83c
    CMP EDI,0x3                         ; 0048d83f
    JLE 0x0048d7c5                      ; 0048d842
        ;   XREF to: 0048d7c5 (CONDITIONAL_JUMP)  ; LAB_0048d7c5
    MOV AX,word ptr [EBX + 0x30]        ; 0048d844
    MOV word ptr [ESP + 0x2],AX         ; 0048d848
    MOV AX,word ptr [EBX + 0x3c]        ; 0048d84d
    MOV word ptr [ESP + 0x4],AX         ; 0048d851
    MOV EAX,dword ptr [EBX + 0x34]      ; 0048d856
    SAR EAX,0x8                         ; 0048d859
    MOV word ptr [ESP + 0x8],AX         ; 0048d85c
    MOV EAX,dword ptr [EBX + 0x40]      ; 0048d861
    SAR EAX,0x8                         ; 0048d864
    MOV word ptr [ESP + 0xa],AX         ; 0048d867
    MOV EAX,dword ptr [EBX + 0x38]      ; 0048d86c
    SAR EAX,0x8                         ; 0048d86f
    MOV word ptr [ESP + 0xe],AX         ; 0048d872
    MOV EAX,dword ptr [EBX + 0x44]      ; 0048d877
    MOV EBP,dword ptr [ESP + 0x30]      ; 0048d87a
    SAR EAX,0x8                         ; 0048d87e
    PUSH EBP                            ; 0048d881
    MOV word ptr [ESP + 0x14],AX        ; 0048d882
    LEA EAX,[ESP + 0x4]                 ; 0048d887
    PUSH EAX                            ; 0048d88b
    PUSH ESI                            ; 0048d88c
    CALL engine_drender.cpp_CDemonRenderer_captureFace_FUN_0048d8a0 ; 0048d88d
        ;   XREF to: 0048d8a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureFace_FUN_0048d8a0(CDemonRenderer * this_ptr, STrianglePackedIndices * triangle_indices, int render_flags)
    ADD ESP,0xc                         ; 0048d892
    ADD ESP,0x14                        ; 0048d895
    POP EBP                             ; 0048d898
    POP EDI                             ; 0048d899
    POP ESI                             ; 0048d89a
    POP EBX                             ; 0048d89b
    RET                                 ; 0048d89c

