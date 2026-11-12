; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mirror_cpp_clipPolygonAgainstPlane_FUN_004f9770(SClipPlane *clip_plane,CVector3f *input_vertices,int input_count,CVector3f *output_vertices,int *output_count)
;
; Parameters:
; SClipPlane *     Stack[0x4]:4   clip_plane
; CVector3f *      Stack[0x8]:4   input_vertices
; int              Stack[0xc]:4   input_count
; CVector3f *      Stack[0x10]:4   output_vertices
; int *            Stack[0x14]:4   output_count
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_004faa10 at 004faaa0
;
; Referenced Globals:
;   void* PTR_caseD_1_004f9760 = 004f9845
;   void* PTR_caseD_3_004f9768 = 004f9827
;
; Called Functions:
;   core_mirror.cpp_computePlaneIntersection_FUN_004f9610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9770
        ;   Label: core_mirror.cpp_clipPolygonAgainstPlane_FUN_004f9770
    PUSH ESI                            ; 004f9771
    PUSH EDI                            ; 004f9772
    PUSH EBP                            ; 004f9773
    SUB ESP,0x4                         ; 004f9774
    MOV ESI,dword ptr [ESP + 0x18]      ; 004f9777
    MOV EBX,dword ptr [ESP + 0x28]      ; 004f977b
    MOV ECX,dword ptr [ESP + 0x20]      ; 004f977f
    XOR EDX,EDX                         ; 004f9783
    MOV dword ptr [EBX],0x0             ; 004f9785
    MOV dword ptr [ESP],EDX             ; 004f978b
    TEST ECX,ECX                        ; 004f978e
    JLE 0x004f983d                      ; 004f9790
        ;   XREF to: 004f983d (CONDITIONAL_JUMP)  ; LAB_004f983d
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004f9796
    MOV ECX,dword ptr [ESP]             ; 004f979a
        ;   Label: LAB_004f979a
    MOV EDX,dword ptr [ESP + 0x20]      ; 004f979d
    INC ECX                             ; 004f97a1
    CMP ECX,EDX                         ; 004f97a2
    JNZ 0x004f97a8                      ; 004f97a4
        ;   XREF to: 004f97a8 (CONDITIONAL_JUMP)  ; LAB_004f97a8
    XOR ECX,EDX                         ; 004f97a6
    IMUL ECX,ECX,0xc                    ; 004f97a8
        ;   Label: LAB_004f97a8
    FLD float ptr [ESI + 0x4]           ; 004f97ab
    FMUL float ptr [EDI + 0x4]          ; 004f97ae
    FLD float ptr [ESI]                 ; 004f97b1
    FMUL float ptr [EDI]                ; 004f97b3
    FADDP                               ; 004f97b5
    FLD float ptr [ESI + 0x8]           ; 004f97b7
    FMUL float ptr [EDI + 0x8]          ; 004f97ba
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004f97bd
    MOV EDX,EDI                         ; 004f97c1
    FADDP                               ; 004f97c3
    ADD EBP,ECX                         ; 004f97c5
    FADD float ptr [ESI + 0xc]          ; 004f97c7
    XOR ECX,ECX                         ; 004f97ca
    FLDZ                                ; 004f97cc
    FCOMPP                              ; 004f97ce
    FNSTSW AX                           ; 004f97d0
    SAHF                                ; 004f97d2
    JNC 0x004f97da                      ; 004f97d3
        ;   XREF to: 004f97da (CONDITIONAL_JUMP)  ; LAB_004f97da
    MOV ECX,0x1                         ; 004f97d5
    FLD float ptr [ESI + 0x4]           ; 004f97da
        ;   Label: LAB_004f97da
    FMUL float ptr [EBP + 0x4]          ; 004f97dd
    FLD float ptr [ESI]                 ; 004f97e0
    FMUL float ptr [EBP]                ; 004f97e2
    FADDP                               ; 004f97e5
    FLD float ptr [ESI + 0x8]           ; 004f97e7
    FMUL float ptr [EBP + 0x8]          ; 004f97ea
    FADDP                               ; 004f97ed
    FADD float ptr [ESI + 0xc]          ; 004f97ef
    FLDZ                                ; 004f97f2
    FCOMPP                              ; 004f97f4
    FNSTSW AX                           ; 004f97f6
    SAHF                                ; 004f97f8
    JNC 0x004f97fe                      ; 004f97f9
        ;   XREF to: 004f97fe (CONDITIONAL_JUMP)  ; LAB_004f97fe
    OR CL,0x2                           ; 004f97fb
    CMP ECX,0x3                         ; 004f97fe
        ;   Label: LAB_004f97fe
    JA 0x004f9827                       ; 004f9801
        ;   XREF to: 004f9827 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x4f975c]  ; 004f9803 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [EBX],0xc        ; 004f980a
        ;   Label: caseD_0
    ADD ECX,dword ptr [ESP + 0x24]      ; 004f980d
    CMP ECX,EDX                         ; 004f9811
    JZ 0x004f9825                       ; 004f9813
        ;   XREF to: 004f9825 (CONDITIONAL_JUMP)  ; LAB_004f9825
    MOV EAX,dword ptr [EDX]             ; 004f9815
    MOV dword ptr [ECX],EAX             ; 004f9817
    MOV EAX,dword ptr [EDX + 0x4]       ; 004f9819
    MOV dword ptr [ECX + 0x4],EAX       ; 004f981c
    MOV EAX,dword ptr [EDX + 0x8]       ; 004f981f
    MOV dword ptr [ECX + 0x8],EAX       ; 004f9822
    INC dword ptr [EBX]                 ; 004f9825
        ;   Label: LAB_004f9825
    MOV EBP,dword ptr [ESP]             ; 004f9827
        ;   Label: caseD_3
    MOV EAX,dword ptr [ESP + 0x20]      ; 004f982a
    INC EBP                             ; 004f982e
    ADD EDI,0xc                         ; 004f982f
    MOV dword ptr [ESP],EBP             ; 004f9832
    CMP EBP,EAX                         ; 004f9835
    JL 0x004f979a                       ; 004f9837
        ;   XREF to: 004f979a (CONDITIONAL_JUMP)  ; LAB_004f979a
    ADD ESP,0x4                         ; 004f983d
        ;   Label: LAB_004f983d
    POP EBP                             ; 004f9840
    POP EDI                             ; 004f9841
    POP ESI                             ; 004f9842
    POP EBX                             ; 004f9843
    RET                                 ; 004f9844
    IMUL ECX,dword ptr [EBX],0xc        ; 004f9845
        ;   Label: caseD_1
    ADD ECX,dword ptr [ESP + 0x24]      ; 004f9848
    PUSH ECX                            ; 004f984c
    PUSH EDX                            ; 004f984d
    PUSH EBP                            ; 004f984e
    PUSH ESI                            ; 004f984f
    CALL core_mirror.cpp_computePlaneIntersection_FUN_004f9610 ; 004f9850
        ;   XREF to: 004f9610 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_computePlaneIntersection_FUN_004f9610(SClipPlane * clip_plane, CVector3f * vertex_a, CVector3f * vertex_b, CVector3f * out_intersection)
    MOV EDX,dword ptr [EBX]             ; 004f9855
    INC EDX                             ; 004f9857
    ADD ESP,0x10                        ; 004f9858
    MOV dword ptr [EBX],EDX             ; 004f985b
    JMP 0x004f9827                      ; 004f985d
        ;   XREF to: 004f9827 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [EBX],0xc        ; 004f985f
        ;   Label: caseD_2
    ADD ECX,dword ptr [ESP + 0x24]      ; 004f9862
    CMP ECX,EDX                         ; 004f9866
    JZ 0x004f987a                       ; 004f9868
        ;   XREF to: 004f987a (CONDITIONAL_JUMP)  ; LAB_004f987a
    MOV EAX,dword ptr [EDX]             ; 004f986a
    MOV dword ptr [ECX],EAX             ; 004f986c
    MOV EAX,dword ptr [EDX + 0x4]       ; 004f986e
    MOV dword ptr [ECX + 0x4],EAX       ; 004f9871
    MOV EAX,dword ptr [EDX + 0x8]       ; 004f9874
    MOV dword ptr [ECX + 0x8],EAX       ; 004f9877
    MOV ECX,dword ptr [EBX]             ; 004f987a
        ;   Label: LAB_004f987a
    INC ECX                             ; 004f987c
    MOV dword ptr [EBX],ECX             ; 004f987d
    IMUL ECX,ECX,0xc                    ; 004f987f
    ADD ECX,dword ptr [ESP + 0x24]      ; 004f9882
    PUSH ECX                            ; 004f9886
    PUSH EBP                            ; 004f9887
    PUSH EDX                            ; 004f9888
    PUSH ESI                            ; 004f9889
    CALL core_mirror.cpp_computePlaneIntersection_FUN_004f9610 ; 004f988a
        ;   XREF to: 004f9610 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_computePlaneIntersection_FUN_004f9610(SClipPlane * clip_plane, CVector3f * vertex_a, CVector3f * vertex_b, CVector3f * out_intersection)
    MOV EDX,dword ptr [EBX]             ; 004f988f
    INC EDX                             ; 004f9891
    ADD ESP,0x10                        ; 004f9892
    MOV dword ptr [EBX],EDX             ; 004f9895
    JMP 0x004f9827                      ; 004f9897
        ;   XREF to: 004f9827 (UNCONDITIONAL_JUMP)  ; caseD_3

