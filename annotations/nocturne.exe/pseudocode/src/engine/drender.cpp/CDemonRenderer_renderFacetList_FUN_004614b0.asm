; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderFacetList_FUN_004614b0(CDemonRenderer *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int primitive_stride,int render_flags)
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
;   engine_drender.cpp_CDemonRenderer_renderQuadBatch_FUN_00461440 at 0046149b
;   engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_004613d0 at 0046142b
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_0057dc9d
;   TerminatedCString s_CDemonRenderer_demonGZFa_0057dcb3
;   undefined4 DAT_005ae70c
;   undefined4 DAT_005b7624
;   undefined4 DAT_006b0280
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c02594
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460
;   engine_drender.cpp_renderTriangleSimple_FUN_00458080
;   engine_drender.cpp_renderTriangleTextured_FUN_00457a00
;   engine_prim.c_getTriangleWindingFromIndices1_FUN_004f9ad0
;   engine_special.cpp_drawPolyList_FUN_00532680
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004614b0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_004614b0
    PUSH ESI                            ; 004614b1
    PUSH EDI                            ; 004614b2
    PUSH EBP                            ; 004614b3
    SUB ESP,0x18                        ; 004614b4
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004614b7
    MOV EBX,dword ptr [ESP + 0x30]      ; 004614bb
    MOV EDI,dword ptr [ESP + 0x34]      ; 004614bf
    MOV EDX,dword ptr [ESI + 0x10]      ; 004614c3
    TEST EDX,EDX                        ; 004614c6
    JZ 0x004614f8                       ; 004614c8
        ;   XREF to: 004614f8 (CONDITIONAL_JUMP)  ; LAB_004614f8
    XOR EBP,EBP                         ; 004614ca
        ;   Label: LAB_004614ca
    TEST EDI,EDI                        ; 004614cc
    JLE 0x004614f0                      ; 004614ce
        ;   XREF to: 004614f0 (CONDITIONAL_JUMP)  ; LAB_004614f0
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004614d0
        ;   Label: LAB_004614d0
    PUSH EAX                            ; 004614d4
    PUSH EBX                            ; 004614d5
    PUSH ESI                            ; 004614d6
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460 ; 004614d7
        ;   XREF to: 0045f460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly, int render_flags)
    ADD ESP,0xc                         ; 004614dc
    MOV EDX,dword ptr [ESP + 0x38]      ; 004614df
    INC EBP                             ; 004614e3
    ADD EBX,EDX                         ; 004614e4
    CMP EBP,EDI                         ; 004614e6
    JL 0x004614d0                       ; 004614e8
        ;   XREF to: 004614d0 (CONDITIONAL_JUMP)  ; LAB_004614d0
    LEA EAX,[EAX]                       ; 004614ea
    ADD ESP,0x18                        ; 004614f0
        ;   Label: LAB_004614f0
    POP EBP                             ; 004614f3
    POP EDI                             ; 004614f4
    POP ESI                             ; 004614f5
    POP EBX                             ; 004614f6
    RET                                 ; 004614f7
    CMP dword ptr [ESI + 0xc],0x0       ; 004614f8
        ;   Label: LAB_004614f8
    JNZ 0x004614ca                      ; 004614fc
        ;   XREF to: 004614ca (CONDITIONAL_JUMP)  ; LAB_004614ca
    CMP dword ptr [0x006b0280],0x0      ; 004614fe | DAT_006b0280
    JZ 0x004614ca                       ; 00461505
        ;   XREF to: 004614ca (CONDITIONAL_JUMP)  ; LAB_004614ca
    CMP dword ptr [ESI + 0x4],0x0       ; 00461507
    JZ 0x0046156b                       ; 0046150b
        ;   XREF to: 0046156b (CONDITIONAL_JUMP)  ; LAB_0046156b
    MOV ESI,0x463a79                    ; 0046150d
    MOV dword ptr [0x01c039a0],EDX      ; 00461512 | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EDX      ; 00461518 | DAT_01c039a4
    MOV dword ptr [0x01c00c7c],ESI      ; 0046151e | DAT_01c00c7c
    TEST EDI,EDI                        ; 00461524
    JLE 0x004614f0                      ; 00461526
        ;   XREF to: 004614f0 (CONDITIONAL_JUMP)  ; LAB_004614f0
    MOV ESI,dword ptr [ESP + 0x38]      ; 00461528
    MOV EAX,dword ptr [EBX + 0x18]      ; 0046152c
        ;   Label: LAB_0046152c
    MOV dword ptr [ESP],EAX             ; 0046152f
    MOV EAX,dword ptr [EBX + 0x24]      ; 00461532
    MOV dword ptr [ESP + 0x4],EAX       ; 00461535
    MOV EAX,dword ptr [EBX + 0x30]      ; 00461539
    MOV dword ptr [ESP + 0x8],EAX       ; 0046153c
    MOV EBP,dword ptr [EBX + 0x4]       ; 00461540
    MOV EDX,EBX                         ; 00461543
    CMP EBP,0x4                         ; 00461545
    JNZ 0x00461551                      ; 00461548
        ;   XREF to: 00461551 (CONDITIONAL_JUMP)  ; LAB_00461551
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0046154a
    MOV dword ptr [ESP + 0xc],EAX       ; 0046154d
    MOV ECX,dword ptr [EDX + 0x4]       ; 00461551
        ;   Label: LAB_00461551
    PUSH ECX                            ; 00461554
    LEA EAX,[ESP + 0x4]                 ; 00461555
    PUSH EAX                            ; 00461559
    DEC EDI                             ; 0046155a
    ADD EBX,ESI                         ; 0046155b
    CALL engine_drender.cpp_renderTriangleSimple_FUN_00458080 ; 0046155d
        ;   XREF to: 00458080 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_renderTriangleSimple_FUN_00458080(CVector3i * vertex_indices, int vertex_count)
    ADD ESP,0x8                         ; 00461562
    TEST EDI,EDI                        ; 00461565
    JLE 0x004614f0                      ; 00461567
        ;   XREF to: 004614f0 (CONDITIONAL_JUMP)  ; LAB_004614f0
    JMP 0x0046152c                      ; 00461569
        ;   XREF to: 0046152c (UNCONDITIONAL_JUMP)  ; LAB_0046152c
    CMP dword ptr [0x005b7624],0x20     ; 0046156b | DAT_005b7624
        ;   Label: LAB_0046156b
    JNZ 0x00461670                      ; 00461572
        ;   XREF to: 00461670 (CONDITIONAL_JUMP)  ; LAB_00461670
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00461578 | DAT_01c00c7c
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00461582
        ;   Label: LAB_00461582
    MOV [0x01c039a0],EAX                ; 00461586 | DAT_01c039a0
    MOV EAX,0x6                         ; 0046158b
    MOV EDX,dword ptr [0x01c02594]      ; 00461590 | DAT_01c02594
    MOV [0x01c039a4],EAX                ; 00461596 | DAT_01c039a4
    TEST EDX,EDX                        ; 0046159b
    JNZ 0x0046167f                      ; 0046159d
        ;   XREF to: 0046167f (CONDITIONAL_JUMP)  ; LAB_0046167f
    TEST EDI,EDI                        ; 004615a3
        ;   Label: LAB_004615a3
    JLE 0x004614f0                      ; 004615a5
        ;   XREF to: 004614f0 (CONDITIONAL_JUMP)  ; LAB_004614f0
    MOV EAX,dword ptr [EBX + 0x18]      ; 004615ab
    MOV dword ptr [ESP],EAX             ; 004615ae
    MOV EAX,dword ptr [EBX + 0x24]      ; 004615b1
    MOV dword ptr [ESP + 0x4],EAX       ; 004615b4
    MOV EAX,dword ptr [EBX + 0x30]      ; 004615b8
    MOV dword ptr [ESP + 0x8],EAX       ; 004615bb
    MOV ECX,dword ptr [EBX + 0x4]       ; 004615bf
    MOV EDX,EBX                         ; 004615c2
    CMP ECX,0x4                         ; 004615c4
    JZ 0x00461712                       ; 004615c7
        ;   XREF to: 00461712 (CONDITIONAL_JUMP)  ; LAB_00461712
    CMP dword ptr [ESI + 0x20],0x0      ; 004615cd
        ;   Label: LAB_004615cd
    JNZ 0x00461653                      ; 004615d1
        ;   XREF to: 00461653 (CONDITIONAL_JUMP)  ; LAB_00461653
    IMUL EAX,dword ptr [ESP],0x30       ; 004615d7
    MOV EBP,dword ptr [ESI]             ; 004615db
    ADD EAX,EBP                         ; 004615dd
    MOV EBP,dword ptr [EDX + 0x1c]      ; 004615df
    MOV dword ptr [EAX + 0x18],EBP      ; 004615e2
    IMUL EAX,dword ptr [ESP],0x30       ; 004615e5
    MOV EBP,dword ptr [ESI]             ; 004615e9
    ADD EBP,EAX                         ; 004615eb
    MOV EAX,dword ptr [EDX + 0x20]      ; 004615ed
    MOV dword ptr [EBP + 0x1c],EAX      ; 004615f0
    IMUL EAX,dword ptr [ESP + 0x4],0x30 ; 004615f3
    MOV EBP,dword ptr [ESI]             ; 004615f8
    ADD EBP,EAX                         ; 004615fa
    MOV EAX,dword ptr [EDX + 0x28]      ; 004615fc
    MOV dword ptr [EBP + 0x18],EAX      ; 004615ff
    IMUL EBP,dword ptr [ESP + 0x4],0x30 ; 00461602
    MOV EAX,dword ptr [ESI]             ; 00461607
    ADD EBP,EAX                         ; 00461609
    MOV EAX,dword ptr [EDX + 0x2c]      ; 0046160b
    MOV dword ptr [EBP + 0x1c],EAX      ; 0046160e
    IMUL EAX,dword ptr [ESP + 0x8],0x30 ; 00461611
    MOV EBP,dword ptr [ESI]             ; 00461616
    ADD EBP,EAX                         ; 00461618
    MOV EAX,dword ptr [EDX + 0x34]      ; 0046161a
    MOV dword ptr [EBP + 0x18],EAX      ; 0046161d
    IMUL EBP,dword ptr [ESP + 0x8],0x30 ; 00461620
    MOV EAX,dword ptr [ESI]             ; 00461625
    ADD EBP,EAX                         ; 00461627
    MOV EAX,dword ptr [EDX + 0x38]      ; 00461629
    MOV dword ptr [EBP + 0x1c],EAX      ; 0046162c
    CMP dword ptr [EDX + 0x4],0x4       ; 0046162f
    JNZ 0x00461653                      ; 00461633
        ;   XREF to: 00461653 (CONDITIONAL_JUMP)  ; LAB_00461653
    IMUL EAX,dword ptr [ESP + 0xc],0x30 ; 00461635
    MOV EBP,dword ptr [ESI]             ; 0046163a
    ADD EBP,EAX                         ; 0046163c
    MOV EAX,dword ptr [EDX + 0x40]      ; 0046163e
    MOV dword ptr [EBP + 0x18],EAX      ; 00461641
    IMUL EBP,dword ptr [ESP + 0xc],0x30 ; 00461644
    MOV EAX,dword ptr [ESI]             ; 00461649
    ADD EBP,EAX                         ; 0046164b
    MOV EAX,dword ptr [EDX + 0x44]      ; 0046164d
    MOV dword ptr [EBP + 0x1c],EAX      ; 00461650
    MOV ECX,dword ptr [EDX + 0x4]       ; 00461653
        ;   Label: LAB_00461653
    PUSH ECX                            ; 00461656
    LEA EAX,[ESP + 0x4]                 ; 00461657
    PUSH EAX                            ; 0046165b
    CALL engine_drender.cpp_renderTriangleTextured_FUN_00457a00 ; 0046165c
        ;   XREF to: 00457a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_renderTriangleTextured_FUN_00457a00(int * vertex_indices, int vertex_count)
    ADD ESP,0x8                         ; 00461661
    MOV EBP,dword ptr [ESP + 0x38]      ; 00461664
    DEC EDI                             ; 00461668
    ADD EBX,EBP                         ; 00461669
    JMP 0x004615a3                      ; 0046166b
        ;   XREF to: 004615a3 (UNCONDITIONAL_JUMP)  ; LAB_004615a3
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00461670 | DAT_01c00c7c
        ;   Label: LAB_00461670
    JMP 0x00461582                      ; 0046167a
        ;   XREF to: 00461582 (UNCONDITIONAL_JUMP)  ; LAB_00461582
    XOR EBP,EBP                         ; 0046167f
        ;   Label: LAB_0046167f
    MOV dword ptr [ESP + 0x14],EBP      ; 00461681
    TEST EDI,EDI                        ; 00461685
    JLE 0x004616ea                      ; 00461687
        ;   XREF to: 004616ea (CONDITIONAL_JUMP)  ; LAB_004616ea
    MOV dword ptr [ESP + 0x10],EBP      ; 00461689
    PUSH EBX                            ; 0046168d
        ;   Label: LAB_0046168d
    CALL engine_prim.c_getTriangleWindingFromIndices1_FUN_004f9ad0 ; 0046168e
        ;   XREF to: 004f9ad0 (UNCONDITIONAL_CALL)  ; int engine_prim.c_getTriangleWindingFromIndices1_FUN_004f9ad0(SMRGLPrimitiveTriangle * triangle)
    ADD ESP,0x4                         ; 00461693
    TEST EAX,EAX                        ; 00461696
    JZ 0x004616d7                       ; 00461698
        ;   XREF to: 004616d7 (CONDITIONAL_JUMP)  ; LAB_004616d7
    MOV EAX,dword ptr [ESP + 0x10]      ; 0046169a
    INC EBP                             ; 0046169e
    LEA EDX,[EAX + 0x4]                 ; 0046169f
    MOV dword ptr [EAX + 0x5ae70c],EBX  ; 004616a2 | DAT_005ae70c
    MOV dword ptr [ESP + 0x10],EDX      ; 004616a8
    CMP EBP,0x7d0                       ; 004616ac
    JL 0x004616d7                       ; 004616b2
        ;   XREF to: 004616d7 (CONDITIONAL_JUMP)  ; LAB_004616d7
    PUSH EBP                            ; 004616b4
    MOV ECX,0x57dc9d                    ; 004616b5 | = "..\\engine\\drender.cpp"
    MOV EAX,0x967                       ; 004616ba
    PUSH 0x57dcb3                       ; 004616bf | = "CDemonRenderer::demonGZFacetList - To..."
    MOV dword ptr [0x01cc4800],ECX      ; 004616c4 | g_CHAR_PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 004616ca | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004616cf
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 004616d4
    MOV EDX,dword ptr [ESP + 0x14]      ; 004616d7
        ;   Label: LAB_004616d7
    MOV EAX,dword ptr [ESP + 0x38]      ; 004616db
    INC EDX                             ; 004616df
    ADD EBX,EAX                         ; 004616e0
    MOV dword ptr [ESP + 0x14],EDX      ; 004616e2
    CMP EDI,EDX                         ; 004616e6
    JG 0x0046168d                       ; 004616e8
        ;   XREF to: 0046168d (CONDITIONAL_JUMP)  ; LAB_0046168d
    TEST EBP,EBP                        ; 004616ea
        ;   Label: LAB_004616ea
    JLE 0x004614f0                      ; 004616ec
        ;   XREF to: 004614f0 (CONDITIONAL_JUMP)  ; LAB_004614f0
    MOV EBX,dword ptr [0x01c039a0]      ; 004616f2 | DAT_01c039a0
    PUSH EBX                            ; 004616f8
    PUSH EBP                            ; 004616f9
    PUSH 0x5ae70c                       ; 004616fa | DAT_005ae70c
    MOV EDI,dword ptr [ESI]             ; 004616ff
    PUSH EDI                            ; 00461701
    CALL engine_special.cpp_drawPolyList_FUN_00532680 ; 00461702
        ;   XREF to: 00532680 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolyList_FUN_00532680(SRenderVertex * vertex_buffer, SMRGLPrimitiveTriangle * * polygons, int polygon_count, int render_flags)
    ADD ESP,0x10                        ; 00461707
    ADD ESP,0x18                        ; 0046170a
    POP EBP                             ; 0046170d
    POP EDI                             ; 0046170e
    POP ESI                             ; 0046170f
    POP EBX                             ; 00461710
    RET                                 ; 00461711
    MOV EAX,dword ptr [EBX + 0x3c]      ; 00461712
        ;   Label: LAB_00461712
    MOV dword ptr [ESP + 0xc],EAX       ; 00461715
    JMP 0x004615cd                      ; 00461719
        ;   XREF to: 004615cd (UNCONDITIONAL_JUMP)  ; LAB_004615cd

