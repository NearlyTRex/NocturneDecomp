; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderFaceList_FUN_004844f0(CDemonRenderer *this_ptr,SInputFace *face_array,int face_count,int render_flags)
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
;   core_set.cpp_CDemonSet_renderFaceListOrEnvMap_FUN_005552f0 at 00555332
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_005db451
;   TerminatedCString s_CDemonRenderer_demonGZFa_005db467
;   undefined4 DAT_00612568
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_00713a7c
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c50948
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_dpart.cpp_FUN_0047a480
;   core_dpart.cpp_FUN_0047ab00
;   core_main.c_FUN_005030e0
;   engine_drender.cpp_CDemonRenderer_captureFace_FUN_00484c20
;   engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_00482390
;   engine_prim.c_getTriangleWindingFromPackedIndices_FUN_0053e000
;   engine_special.cpp_drawPolyList2_FUN_005824e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004844f0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_004844f0
    PUSH ESI                            ; 004844f1
    PUSH EDI                            ; 004844f2
    PUSH EBP                            ; 004844f3
    SUB ESP,0x14                        ; 004844f4
    MOV ESI,dword ptr [ESP + 0x28]      ; 004844f7
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004844fb
    MOV EDI,dword ptr [ESP + 0x30]      ; 004844ff
    CMP dword ptr [ESP + 0x34],-0x1     ; 00484503
    JZ 0x00484538                       ; 00484508
        ;   XREF to: 00484538 (CONDITIONAL_JUMP)  ; LAB_00484538
    CMP dword ptr [ESI + 0x1c],0x0      ; 0048450a
        ;   Label: LAB_0048450a
    JZ 0x00484542                       ; 0048450e
        ;   XREF to: 00484542 (CONDITIONAL_JUMP)  ; LAB_00484542
    XOR EBP,EBP                         ; 00484510
    TEST EDI,EDI                        ; 00484512
    JLE 0x00484530                      ; 00484514
        ;   XREF to: 00484530 (CONDITIONAL_JUMP)  ; LAB_00484530
    MOV ECX,dword ptr [ESP + 0x34]      ; 00484516
        ;   Label: LAB_00484516
    PUSH ECX                            ; 0048451a
    PUSH EBX                            ; 0048451b
    PUSH ESI                            ; 0048451c
    INC EBP                             ; 0048451d
    CALL engine_drender.cpp_CDemonRenderer_captureFace_FUN_00484c20 ; 0048451e
        ;   XREF to: 00484c20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureFace_FUN_00484c20(CDemonRenderer * this_ptr, STrianglePackedIndices * triangle_indices, int render_flags)
    ADD EBX,0x12                        ; 00484523
    ADD ESP,0xc                         ; 00484526
    CMP EBP,EDI                         ; 00484529
    JL 0x00484516                       ; 0048452b
        ;   XREF to: 00484516 (CONDITIONAL_JUMP)  ; LAB_00484516
    LEA EAX,[EAX]                       ; 0048452d
    ADD ESP,0x14                        ; 00484530
        ;   Label: LAB_00484530
    POP EBP                             ; 00484533
    POP EDI                             ; 00484534
    POP ESI                             ; 00484535
    POP EBX                             ; 00484536
    RET                                 ; 00484537
    MOV dword ptr [ESP + 0x34],0x2cd    ; 00484538
        ;   Label: LAB_00484538
    JMP 0x0048450a                      ; 00484540
        ;   XREF to: 0048450a (UNCONDITIONAL_JUMP)  ; LAB_0048450a
    MOV EAX,dword ptr [ESI + 0x10]      ; 00484542
        ;   Label: LAB_00484542
    TEST EAX,EAX                        ; 00484545
    JZ 0x0048456e                       ; 00484547
        ;   XREF to: 0048456e (CONDITIONAL_JUMP)  ; LAB_0048456e
    XOR EBP,EBP                         ; 00484549
        ;   Label: LAB_00484549
    TEST EDI,EDI                        ; 0048454b
    JLE 0x00484530                      ; 0048454d
        ;   XREF to: 00484530 (CONDITIONAL_JUMP)  ; LAB_00484530
    MOV EDX,dword ptr [ESP + 0x34]      ; 0048454f
        ;   Label: LAB_0048454f
    PUSH EDX                            ; 00484553
    PUSH EBX                            ; 00484554
    PUSH ESI                            ; 00484555
    INC EBP                             ; 00484556
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_00482390 ; 00484557
        ;   XREF to: 00482390 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_00482390(CDemonRenderer * this_ptr, SInputFace * face, int render_flags)
    ADD EBX,0x12                        ; 0048455c
    ADD ESP,0xc                         ; 0048455f
    CMP EBP,EDI                         ; 00484562
    JL 0x0048454f                       ; 00484564
        ;   XREF to: 0048454f (CONDITIONAL_JUMP)  ; LAB_0048454f
    ADD ESP,0x14                        ; 00484566
    POP EBP                             ; 00484569
    POP EDI                             ; 0048456a
    POP ESI                             ; 0048456b
    POP EBX                             ; 0048456c
    RET                                 ; 0048456d
    CMP dword ptr [ESI + 0xc],0x0       ; 0048456e
        ;   Label: LAB_0048456e
    JNZ 0x00484549                      ; 00484572
        ;   XREF to: 00484549 (CONDITIONAL_JUMP)  ; LAB_00484549
    CMP dword ptr [0x00713a7c],0x0      ; 00484574 | DAT_00713a7c
    JZ 0x00484549                       ; 0048457b
        ;   XREF to: 00484549 (CONDITIONAL_JUMP)  ; LAB_00484549
    CMP dword ptr [ESI + 0x4],0x0       ; 0048457d
    JNZ 0x0048468e                      ; 00484581
        ;   XREF to: 0048468e (CONDITIONAL_JUMP)  ; LAB_0048468e
    CMP dword ptr [0x0061b4a0],0x20     ; 00484587 | DAT_0061b4a0
    JNZ 0x004846e6                      ; 0048458e
        ;   XREF to: 004846e6 (CONDITIONAL_JUMP)  ; LAB_004846e6
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00484594 | DAT_01c4f02c
    MOV EAX,dword ptr [ESP + 0x34]      ; 0048459e
        ;   Label: LAB_0048459e
    MOV EBP,0x6                         ; 004845a2
    MOV [0x01c51d14],EAX                ; 004845a7 | DAT_01c51d14
    MOV EAX,[0x01c50948]                ; 004845ac | DAT_01c50948
    MOV dword ptr [0x01c51d18],EBP      ; 004845b1 | DAT_01c51d18
    TEST EAX,EAX                        ; 004845b7
    JNZ 0x004846f5                      ; 004845b9
        ;   XREF to: 004846f5 (CONDITIONAL_JUMP)  ; LAB_004846f5
    TEST EDI,EDI                        ; 004845bf
        ;   Label: LAB_004845bf
    JLE 0x00484530                      ; 004845c1
        ;   XREF to: 00484530 (CONDITIONAL_JUMP)  ; LAB_00484530
    XOR EAX,EAX                         ; 004845c7
    MOV AX,word ptr [EBX]               ; 004845c9
    MOV dword ptr [ESP],EAX             ; 004845cc
    XOR EAX,EAX                         ; 004845cf
    MOV AX,word ptr [EBX + 0x2]         ; 004845d1
    MOV dword ptr [ESP + 0x4],EAX       ; 004845d5
    XOR EAX,EAX                         ; 004845d9
    MOV AX,word ptr [EBX + 0x4]         ; 004845db
    MOV dword ptr [ESP + 0x8],EAX       ; 004845df
    MOV EAX,dword ptr [ESI + 0x20]      ; 004845e3
    TEST EAX,EAX                        ; 004845e6
    JNZ 0x00484676                      ; 004845e8
        ;   XREF to: 00484676 (CONDITIONAL_JUMP)  ; LAB_00484676
    MOV AX,word ptr [EBX + 0x6]         ; 004845ee
    MOV ECX,dword ptr [ESP]             ; 004845f2
    MOV EDX,EAX                         ; 004845f5
    IMUL EAX,ECX,0x30                   ; 004845f7
    MOV EBP,dword ptr [ESI]             ; 004845fa
    SHL EDX,0x8                         ; 004845fc
    MOV dword ptr [EAX + EBP*0x1 + 0x18],EDX ; 004845ff
    XOR EAX,EAX                         ; 00484603
    MOV AX,word ptr [EBX + 0xc]         ; 00484605
    MOV EDX,dword ptr [ESP]             ; 00484609
    MOV EBP,EAX                         ; 0048460c
    IMUL EAX,EDX,0x30                   ; 0048460e
    MOV EDX,dword ptr [ESI]             ; 00484611
    SHL EBP,0x8                         ; 00484613
    MOV dword ptr [EDX + EAX*0x1 + 0x1c],EBP ; 00484616
    IMUL EDX,dword ptr [ESP + 0x4],0x30 ; 0048461a
    XOR EAX,EAX                         ; 0048461f
    MOV AX,word ptr [EBX + 0x8]         ; 00484621
    MOV EBP,dword ptr [ESI]             ; 00484625
    SHL EAX,0x8                         ; 00484627
    MOV dword ptr [EDX + EBP*0x1 + 0x18],EAX ; 0048462a
    XOR EAX,EAX                         ; 0048462e
    MOV AX,word ptr [EBX + 0xe]         ; 00484630
    MOV EDX,dword ptr [ESP + 0x4]       ; 00484634
    MOV EBP,EAX                         ; 00484638
    IMUL EAX,EDX,0x30                   ; 0048463a
    MOV EDX,dword ptr [ESI]             ; 0048463d
    SHL EBP,0x8                         ; 0048463f
    MOV dword ptr [EDX + EAX*0x1 + 0x1c],EBP ; 00484642
    XOR EAX,EAX                         ; 00484646
    MOV AX,word ptr [EBX + 0xa]         ; 00484648
    MOV ECX,dword ptr [ESP + 0x8]       ; 0048464c
    MOV EDX,EAX                         ; 00484650
    IMUL EAX,ECX,0x30                   ; 00484652
    MOV EBP,dword ptr [ESI]             ; 00484655
    SHL EDX,0x8                         ; 00484657
    MOV dword ptr [EAX + EBP*0x1 + 0x18],EDX ; 0048465a
    XOR EAX,EAX                         ; 0048465e
    MOV AX,word ptr [EBX + 0x10]        ; 00484660
    MOV EDX,dword ptr [ESP + 0x8]       ; 00484664
    MOV EBP,EAX                         ; 00484668
    IMUL EAX,EDX,0x30                   ; 0048466a
    MOV EDX,dword ptr [ESI]             ; 0048466d
    SHL EBP,0x8                         ; 0048466f
    MOV dword ptr [EDX + EAX*0x1 + 0x1c],EBP ; 00484672
    PUSH 0x3                            ; 00484676
        ;   Label: LAB_00484676
    LEA EAX,[ESP + 0x4]                 ; 00484678
    PUSH EAX                            ; 0048467c
    DEC EDI                             ; 0048467d
    ADD EBX,0x12                        ; 0048467e
    CALL core_dpart.cpp_FUN_0047a480    ; 00484681
        ;   XREF to: 0047a480 (UNCONDITIONAL_CALL)  ; void core_dpart.cpp_FUN_0047a480(int * vertex_indices, int vertex_count)
    ADD ESP,0x8                         ; 00484686
    JMP 0x004845bf                      ; 00484689
        ;   XREF to: 004845bf (UNCONDITIONAL_JUMP)  ; LAB_004845bf
    MOV ECX,0x486e26                    ; 0048468e
        ;   Label: LAB_0048468e
    MOV [0x01c51d14],EAX                ; 00484693 | DAT_01c51d14
    MOV [0x01c51d18],EAX                ; 00484698 | DAT_01c51d18
    MOV dword ptr [0x01c4f02c],ECX      ; 0048469d | DAT_01c4f02c
    TEST EDI,EDI                        ; 004846a3
    JLE 0x00484530                      ; 004846a5
        ;   XREF to: 00484530 (CONDITIONAL_JUMP)  ; LAB_00484530
    XOR EAX,EAX                         ; 004846ab
        ;   Label: LAB_004846ab
    MOV AX,word ptr [EBX]               ; 004846ad
    MOV dword ptr [ESP],EAX             ; 004846b0
    XOR EAX,EAX                         ; 004846b3
    MOV AX,word ptr [EBX + 0x2]         ; 004846b5
    MOV dword ptr [ESP + 0x4],EAX       ; 004846b9
    XOR EAX,EAX                         ; 004846bd
    MOV AX,word ptr [EBX + 0x4]         ; 004846bf
    PUSH 0x3                            ; 004846c3
    MOV dword ptr [ESP + 0xc],EAX       ; 004846c5
    LEA EAX,[ESP + 0x4]                 ; 004846c9
    PUSH EAX                            ; 004846cd
    DEC EDI                             ; 004846ce
    ADD EBX,0x12                        ; 004846cf
    CALL core_dpart.cpp_FUN_0047ab00    ; 004846d2
        ;   XREF to: 0047ab00 (UNCONDITIONAL_CALL)  ; void core_dpart.cpp_FUN_0047ab00(CVector3i * vertex_indices, int vertex_count)
    ADD ESP,0x8                         ; 004846d7
    TEST EDI,EDI                        ; 004846da
    JG 0x004846ab                       ; 004846dc
        ;   XREF to: 004846ab (CONDITIONAL_JUMP)  ; LAB_004846ab
    ADD ESP,0x14                        ; 004846de
    POP EBP                             ; 004846e1
    POP EDI                             ; 004846e2
    POP ESI                             ; 004846e3
    POP EBX                             ; 004846e4
    RET                                 ; 004846e5
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 004846e6 | DAT_01c4f02c
        ;   Label: LAB_004846e6
    JMP 0x0048459e                      ; 004846f0
        ;   XREF to: 0048459e (UNCONDITIONAL_JUMP)  ; LAB_0048459e
    XOR EBP,EBP                         ; 004846f5
        ;   Label: LAB_004846f5
    MOV dword ptr [ESP + 0x10],EBP      ; 004846f7
    TEST EDI,EDI                        ; 004846fb
    JLE 0x0048475d                      ; 004846fd
        ;   XREF to: 0048475d (CONDITIONAL_JUMP)  ; LAB_0048475d
    MOV dword ptr [ESP + 0xc],EBP       ; 004846ff
    PUSH EBX                            ; 00484703
        ;   Label: LAB_00484703
    CALL engine_prim.c_getTriangleWindingFromPackedIndices_FUN_0053e000 ; 00484704
        ;   XREF to: 0053e000 (UNCONDITIONAL_CALL)  ; int engine_prim.c_getTriangleWindingFromPackedIndices_FUN_0053e000(STrianglePackedIndices * triangle)
    ADD ESP,0x4                         ; 00484709
    TEST EAX,EAX                        ; 0048470c
    JZ 0x0048474d                       ; 0048470e
        ;   XREF to: 0048474d (CONDITIONAL_JUMP)  ; LAB_0048474d
    MOV EAX,dword ptr [ESP + 0xc]       ; 00484710
    INC EBP                             ; 00484714
    LEA EDX,[EAX + 0x4]                 ; 00484715
    MOV dword ptr [EAX + 0x612568],EBX  ; 00484718 | DAT_00612568
    MOV dword ptr [ESP + 0xc],EDX       ; 0048471e
    CMP EBP,0x7d0                       ; 00484722
    JL 0x0048474d                       ; 00484728
        ;   XREF to: 0048474d (CONDITIONAL_JUMP)  ; LAB_0048474d
    PUSH EBP                            ; 0048472a
    MOV ECX,0x5db451                    ; 0048472b | = "..\\engine\\drender.cpp"
    MOV EAX,0xa30                       ; 00484730
    PUSH 0x5db467                       ; 00484735 | = "CDemonRenderer::demonGZFacetList - To..."
    MOV dword ptr [0x01d1d400],ECX      ; 0048473a | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00484740 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00484745
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0048474a
    MOV ECX,dword ptr [ESP + 0x10]      ; 0048474d
        ;   Label: LAB_0048474d
    INC ECX                             ; 00484751
    ADD EBX,0x12                        ; 00484752
    MOV dword ptr [ESP + 0x10],ECX      ; 00484755
    CMP EDI,ECX                         ; 00484759
    JG 0x00484703                       ; 0048475b
        ;   XREF to: 00484703 (CONDITIONAL_JUMP)  ; LAB_00484703
    TEST EBP,EBP                        ; 0048475d
        ;   Label: LAB_0048475d
    JLE 0x00484530                      ; 0048475f
        ;   XREF to: 00484530 (CONDITIONAL_JUMP)  ; LAB_00484530
    MOV EDX,dword ptr [0x01c51d14]      ; 00484765 | DAT_01c51d14
    PUSH EDX                            ; 0048476b
    PUSH EBP                            ; 0048476c
    PUSH 0x612568                       ; 0048476d | DAT_00612568
    MOV ECX,dword ptr [ESI]             ; 00484772
    PUSH ECX                            ; 00484774
    CALL engine_special.cpp_drawPolyList2_FUN_005824e0 ; 00484775
        ;   XREF to: 005824e0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolyList2_FUN_005824e0(SRenderVertex * vertex_buffer, SInputFace * * polygons, int polygon_count, int render_flags)
    ADD ESP,0x10                        ; 0048477a
    ADD ESP,0x14                        ; 0048477d
    POP EBP                             ; 00484780
    POP EDI                             ; 00484781
    POP ESI                             ; 00484782
    POP EBX                             ; 00484783
    RET                                 ; 00484784

