; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3f * shape_meshlod.cpp_CLodMesh_computeClosestPointOnTriangle_FUN_0051a6b0(CLodMesh * this_ptr, CVector3f * output_point, CVector3f * target_point, CLodFace * triangle_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   output_point
; CVector3f *      Stack[0xc]:4   target_point
; CLodFace *       Stack[0x10]:4   triangle_ptr
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_meshlod.cpp_CLodMesh_findClosestPointOnMesh_FUN_0051a300 at 0051a370
;
; Referenced Globals:
;   void* PTR_caseD_3_0051a6a0 = 0051a7ff
;   void* PTR_caseD_5_0051a6a8 = 0051a83f
;   TerminatedCString s_shape_meshlod_cpp_00637abc
;   TerminatedCString s_anon_00637ad1
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_meshlod.cpp_CLodMesh_computeFaceCentroid_FUN_00518870
;   shape_meshlod.cpp_computeClosestPointOnEdge_FUN_00514f90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051a6b0
        ;   Label: shape_meshlod.cpp_CLodMesh_computeClosestPointOnTriangle_FUN_0051a6b0
    PUSH ESI                            ; 0051a6b1
    PUSH EDI                            ; 0051a6b2
    PUSH EBP                            ; 0051a6b3
    SUB ESP,0x14                        ; 0051a6b4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0051a6b7
    MOV EDX,dword ptr [ESP + 0x30]      ; 0051a6bb
    MOV ESI,dword ptr [ESP + 0x34]      ; 0051a6bf
    IMUL EBP,dword ptr [ESI + 0x10],0x4c4 ; 0051a6c3
    IMUL ECX,dword ptr [ESI + 0x14],0x4c4 ; 0051a6ca
    MOV EDI,dword ptr [ESP + 0x28]      ; 0051a6d1
    MOV EDI,dword ptr [EDI + 0x4]       ; 0051a6d5
    ADD EBP,EDI                         ; 0051a6d8
    LEA EAX,[EDI + ECX*0x1]             ; 0051a6da
    MOV dword ptr [ESP + 0x10],EAX      ; 0051a6dd
    IMUL ECX,dword ptr [ESI + 0x18],0x4c4 ; 0051a6e1
    LEA EAX,[ESI + 0x54]                ; 0051a6e8
    FLD float ptr [EDX + 0x4]           ; 0051a6eb
    FMUL float ptr [EAX + 0x4]          ; 0051a6ee
    FLD float ptr [EDX]                 ; 0051a6f1
    FMUL float ptr [EAX]                ; 0051a6f3
    FADDP                               ; 0051a6f5
    FLD float ptr [EDX + 0x8]           ; 0051a6f7
    FMUL float ptr [EAX + 0x8]          ; 0051a6fa
    ADD EDI,ECX                         ; 0051a6fd
    FADDP                               ; 0051a6ff
    XOR ECX,ECX                         ; 0051a701
    FCOMP float ptr [ESI + 0x78]        ; 0051a703
    FNSTSW AX                           ; 0051a706
    SAHF                                ; 0051a708
    JBE 0x0051a710                      ; 0051a709
        ;   XREF to: 0051a710 (CONDITIONAL_JUMP)  ; LAB_0051a710
    MOV ECX,0x1                         ; 0051a70b
    LEA EAX,[ESI + 0x60]                ; 0051a710
        ;   Label: LAB_0051a710
    FLD float ptr [EDX + 0x4]           ; 0051a713
    FMUL float ptr [EAX + 0x4]          ; 0051a716
    FLD float ptr [EDX]                 ; 0051a719
    FMUL float ptr [EAX]                ; 0051a71b
    FADDP                               ; 0051a71d
    FLD float ptr [EDX + 0x8]           ; 0051a71f
    FMUL float ptr [EAX + 0x8]          ; 0051a722
    FADDP                               ; 0051a725
    FCOMP float ptr [ESI + 0x7c]        ; 0051a727
    FNSTSW AX                           ; 0051a72a
    SAHF                                ; 0051a72c
    JBE 0x0051a732                      ; 0051a72d
        ;   XREF to: 0051a732 (CONDITIONAL_JUMP)  ; LAB_0051a732
    OR CL,0x2                           ; 0051a72f
    LEA EAX,[ESI + 0x6c]                ; 0051a732
        ;   Label: LAB_0051a732
    FLD float ptr [EDX + 0x4]           ; 0051a735
    FMUL float ptr [EAX + 0x4]          ; 0051a738
    FLD float ptr [EDX]                 ; 0051a73b
    FMUL float ptr [EAX]                ; 0051a73d
    FADDP                               ; 0051a73f
    FLD float ptr [EDX + 0x8]           ; 0051a741
    FMUL float ptr [EAX + 0x8]          ; 0051a744
    FADDP                               ; 0051a747
    FCOMP float ptr [ESI + 0x80]        ; 0051a749
    FNSTSW AX                           ; 0051a74f
    SAHF                                ; 0051a751
    JBE 0x0051a757                      ; 0051a752
        ;   XREF to: 0051a757 (CONDITIONAL_JUMP)  ; LAB_0051a757
    OR CL,0x4                           ; 0051a754
    CMP ECX,0x6                         ; 0051a757
        ;   Label: LAB_0051a757
    JA 0x0051a882                       ; 0051a75a
        ;   XREF to: 0051a882 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [ECX*0x4 + 0x51a694]  ; 0051a760 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    LEA ECX,[ESI + 0x44]                ; 0051a767
        ;   Label: caseD_0
    FLD float ptr [EDX + 0x4]           ; 0051a76a
    FMUL float ptr [ECX + 0x4]          ; 0051a76d
    FLD float ptr [EDX]                 ; 0051a770
    FMUL float ptr [ECX]                ; 0051a772
    FADDP                               ; 0051a774
    FLD float ptr [EDX + 0x8]           ; 0051a776
    FMUL float ptr [ECX + 0x8]          ; 0051a779
    FADDP                               ; 0051a77c
    FSUBR float ptr [ESI + 0x50]        ; 0051a77e
    FLD float ptr [ECX]                 ; 0051a781
    FXCH                                ; 0051a783
    FSTP float ptr [ESP + 0xc]          ; 0051a785
    FMUL float ptr [ESP + 0xc]          ; 0051a789
    FSTP float ptr [ESP]                ; 0051a78d
    FLD float ptr [ECX + 0x4]           ; 0051a790
    FMUL float ptr [ESP + 0xc]          ; 0051a793
    FSTP float ptr [ESP + 0x4]          ; 0051a797
    FLD float ptr [ECX + 0x8]           ; 0051a79b
    FMUL float ptr [ESP + 0xc]          ; 0051a79e
    FSTP float ptr [ESP + 0x8]          ; 0051a7a2
    FLD float ptr [EDX]                 ; 0051a7a6
    FSUB float ptr [ESP]                ; 0051a7a8
    FSTP float ptr [EBX]                ; 0051a7ab
    FLD float ptr [EDX + 0x4]           ; 0051a7ad
    FSUB float ptr [ESP + 0x4]          ; 0051a7b0
    FSTP float ptr [EBX + 0x4]          ; 0051a7b4
    FLD float ptr [EDX + 0x8]           ; 0051a7b7
    FSUB float ptr [ESP + 0x8]          ; 0051a7ba
    FSTP float ptr [EBX + 0x8]          ; 0051a7be
    MOV EAX,EBX                         ; 0051a7c1
    ADD ESP,0x14                        ; 0051a7c3
    POP EBP                             ; 0051a7c6
    POP EDI                             ; 0051a7c7
    POP ESI                             ; 0051a7c8
    POP EBX                             ; 0051a7c9
    RET                                 ; 0051a7ca
    MOV EAX,dword ptr [ESP + 0x10]      ; 0051a7cb
        ;   Label: caseD_1
    PUSH EAX                            ; 0051a7cf
    PUSH EBP                            ; 0051a7d0
    PUSH EDX                            ; 0051a7d1
    PUSH EBX                            ; 0051a7d2
    CALL shape_meshlod.cpp_computeClosestPointOnEdge_FUN_00514f90 ; 0051a7d3
        ;   XREF to: 00514f90 (UNCONDITIONAL_CALL)  ; CVector3f * shape_meshlod.cpp_computeClosestPointOnEdge_FUN_00514f90(CVector3f * out_closest_point, CVector3f * query_point, CVector3f * edge_vertex_0, CVector3f * edge_vertex_1)
    ADD ESP,0x10                        ; 0051a7d8
    MOV EAX,EBX                         ; 0051a7db
    ADD ESP,0x14                        ; 0051a7dd
    POP EBP                             ; 0051a7e0
    POP EDI                             ; 0051a7e1
    POP ESI                             ; 0051a7e2
    POP EBX                             ; 0051a7e3
    RET                                 ; 0051a7e4
    PUSH EDI                            ; 0051a7e5
        ;   Label: caseD_2
    MOV EDI,dword ptr [ESP + 0x14]      ; 0051a7e6
    PUSH EDI                            ; 0051a7ea
    PUSH EDX                            ; 0051a7eb
    PUSH EBX                            ; 0051a7ec
    CALL shape_meshlod.cpp_computeClosestPointOnEdge_FUN_00514f90 ; 0051a7ed
        ;   XREF to: 00514f90 (UNCONDITIONAL_CALL)  ; CVector3f * shape_meshlod.cpp_computeClosestPointOnEdge_FUN_00514f90(CVector3f * out_closest_point, CVector3f * query_point, CVector3f * edge_vertex_0, CVector3f * edge_vertex_1)
    ADD ESP,0x10                        ; 0051a7f2
    MOV EAX,EBX                         ; 0051a7f5
    ADD ESP,0x14                        ; 0051a7f7
    POP EBP                             ; 0051a7fa
    POP EDI                             ; 0051a7fb
    POP ESI                             ; 0051a7fc
    POP EBX                             ; 0051a7fd
    RET                                 ; 0051a7fe
    MOV EDX,dword ptr [ESP + 0x10]      ; 0051a7ff
        ;   Label: caseD_3
    MOV EDX,dword ptr [EDX]             ; 0051a803
    MOV ECX,dword ptr [ESP + 0x10]      ; 0051a805
    MOV dword ptr [EBX],EDX             ; 0051a809
    LEA EDX,[EBX + 0x4]                 ; 0051a80b
    MOV ECX,dword ptr [ECX + 0x4]       ; 0051a80e
    MOV dword ptr [EDX],ECX             ; 0051a811
    LEA ECX,[EDX + 0x4]                 ; 0051a813
    MOV EDX,dword ptr [ESP + 0x10]      ; 0051a816
    MOV EDX,dword ptr [EDX + 0x8]       ; 0051a81a
    MOV dword ptr [ECX],EDX             ; 0051a81d
    MOV EAX,EBX                         ; 0051a81f
    ADD ESP,0x14                        ; 0051a821
    POP EBP                             ; 0051a824
    POP EDI                             ; 0051a825
    POP ESI                             ; 0051a826
    POP EBX                             ; 0051a827
    RET                                 ; 0051a828
    PUSH EBP                            ; 0051a829
        ;   Label: caseD_4
    PUSH EDI                            ; 0051a82a
    PUSH EDX                            ; 0051a82b
    PUSH EBX                            ; 0051a82c
    CALL shape_meshlod.cpp_computeClosestPointOnEdge_FUN_00514f90 ; 0051a82d
        ;   XREF to: 00514f90 (UNCONDITIONAL_CALL)  ; CVector3f * shape_meshlod.cpp_computeClosestPointOnEdge_FUN_00514f90(CVector3f * out_closest_point, CVector3f * query_point, CVector3f * edge_vertex_0, CVector3f * edge_vertex_1)
    ADD ESP,0x10                        ; 0051a832
    MOV EAX,EBX                         ; 0051a835
    ADD ESP,0x14                        ; 0051a837
    POP EBP                             ; 0051a83a
    POP EDI                             ; 0051a83b
    POP ESI                             ; 0051a83c
    POP EBX                             ; 0051a83d
    RET                                 ; 0051a83e
    MOV EDX,dword ptr [EBP]             ; 0051a83f
        ;   Label: caseD_5
    LEA ECX,[EBP + 0x4]                 ; 0051a842
    MOV dword ptr [EBX],EDX             ; 0051a845
    LEA EDX,[EBX + 0x4]                 ; 0051a847
    MOV ECX,dword ptr [ECX]             ; 0051a84a
    MOV dword ptr [EDX],ECX             ; 0051a84c
    LEA ECX,[EDX + 0x4]                 ; 0051a84e
    LEA EDX,[EBP + 0x8]                 ; 0051a851
    MOV EDX,dword ptr [EDX]             ; 0051a854
    MOV dword ptr [ECX],EDX             ; 0051a856
    MOV EAX,EBX                         ; 0051a858
    ADD ESP,0x14                        ; 0051a85a
    POP EBP                             ; 0051a85d
    POP EDI                             ; 0051a85e
    POP ESI                             ; 0051a85f
    POP EBX                             ; 0051a860
    RET                                 ; 0051a861
    MOV EDX,dword ptr [EDI]             ; 0051a862
        ;   Label: caseD_6
    LEA ECX,[EDI + 0x4]                 ; 0051a864
    MOV dword ptr [EBX],EDX             ; 0051a867
    LEA EDX,[EBX + 0x4]                 ; 0051a869
    MOV ECX,dword ptr [ECX]             ; 0051a86c
    MOV dword ptr [EDX],ECX             ; 0051a86e
    LEA ECX,[EDI + 0x8]                 ; 0051a870
    MOV ECX,dword ptr [ECX]             ; 0051a873
    MOV dword ptr [EDX + 0x4],ECX       ; 0051a875
    MOV EAX,EBX                         ; 0051a878
    ADD ESP,0x14                        ; 0051a87a
    POP EBP                             ; 0051a87d
    POP EDI                             ; 0051a87e
    POP ESI                             ; 0051a87f
    POP EBX                             ; 0051a880
    RET                                 ; 0051a881
    MOV EDX,0x637abc                    ; 0051a882 | = "..\\shape\\meshlod.cpp"
        ;   Label: default
    MOV ECX,0xf22                       ; 0051a887
    PUSH 0x637ad1                       ; 0051a88c | = "!"
    MOV dword ptr [0x02f0ca48],EDX      ; 0051a891 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0051a897 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0051a89d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0051a8a2
    PUSH ESI                            ; 0051a8a5
    PUSH EBX                            ; 0051a8a6
    MOV ESI,dword ptr [ESP + 0x30]      ; 0051a8a7
    PUSH ESI                            ; 0051a8ab
    CALL shape_meshlod.cpp_CLodMesh_computeFaceCentroid_FUN_00518870 ; 0051a8ac
        ;   XREF to: 00518870 (UNCONDITIONAL_CALL)  ; CVector3f * shape_meshlod.cpp_CLodMesh_computeFaceCentroid_FUN_00518870(CLodMesh * this_ptr, CVector3f * out_centroid, CLodFace * face)
    ADD ESP,0xc                         ; 0051a8b1
    MOV EAX,EBX                         ; 0051a8b4
    ADD ESP,0x14                        ; 0051a8b6
    POP EBP                             ; 0051a8b9
    POP EDI                             ; 0051a8ba
    POP ESI                             ; 0051a8bb
    POP EBX                             ; 0051a8bc
    RET                                 ; 0051a8bd

