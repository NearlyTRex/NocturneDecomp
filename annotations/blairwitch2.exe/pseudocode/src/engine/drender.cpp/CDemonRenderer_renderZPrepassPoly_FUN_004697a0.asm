; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderZPrepassPoly_FUN_004697a0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitivePoly * Stack[0x8]:4   poly
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_mirror.cpp_CMirror_renderMirrorQuadDepth_FUN_004faef0 at 004fb07e
;
; Referenced Globals:
;   undefined4 DAT_01ba5c84
;   undefined4 DAT_01ba5c88
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004697a0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderZPrepassPoly_FUN_004697a0
    PUSH ESI                            ; 004697a1
    PUSH EDI                            ; 004697a2
    PUSH EBP                            ; 004697a3
    SUB ESP,0x8                         ; 004697a4
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004697a7
    MOV EBP,dword ptr [ESP + 0x20]      ; 004697ab
    CMP dword ptr [EDI + 0xc],0x0       ; 004697af
    JNZ 0x00469862                      ; 004697b3
        ;   XREF to: 00469862 (CONDITIONAL_JUMP)  ; LAB_00469862
    MOV EBX,0xffffffff                  ; 004697b9
        ;   Label: LAB_004697b9
    MOV ESI,dword ptr [EBP + 0x4]       ; 004697be
    XOR ECX,ECX                         ; 004697c1
    XOR EDX,EDX                         ; 004697c3
    MOV dword ptr [ESP + 0x4],EBX       ; 004697c5
    MOV dword ptr [ESP],ECX             ; 004697c9
    TEST ESI,ESI                        ; 004697cc
    JLE 0x00469806                      ; 004697ce
        ;   XREF to: 00469806 (CONDITIONAL_JUMP)  ; LAB_00469806
    MOV ECX,EBP                         ; 004697d0
    XOR EAX,EAX                         ; 004697d2
    MOV EBX,dword ptr [ECX + 0x18]      ; 004697d4
        ;   Label: LAB_004697d4
    MOV dword ptr [EAX + 0x1ba5c84],EBX ; 004697d7 | DAT_01ba5c84 | DAT_01ba5c88
    IMUL ESI,EBX,0x30                   ; 004697dd
    MOV EBX,dword ptr [EDI]             ; 004697e0
    ADD EBX,ESI                         ; 004697e2
    MOV ESI,dword ptr [EBX + 0x10]      ; 004697e4
    AND dword ptr [ESP + 0x4],ESI       ; 004697e7
    TEST byte ptr [EBX + 0x13],0x80     ; 004697eb
    JZ 0x004697f8                       ; 004697ef
        ;   XREF to: 004697f8 (CONDITIONAL_JUMP)  ; LAB_004697f8
    MOV dword ptr [ESP],0x1             ; 004697f1
    ADD EAX,0x4                         ; 004697f8
        ;   Label: LAB_004697f8
    INC EDX                             ; 004697fb
    MOV EBX,dword ptr [EBP + 0x4]       ; 004697fc
    ADD ECX,0xc                         ; 004697ff
    CMP EDX,EBX                         ; 00469802
    JL 0x004697d4                       ; 00469804
        ;   XREF to: 004697d4 (CONDITIONAL_JUMP)  ; LAB_004697d4
    TEST byte ptr [ESP + 0x7],0x80      ; 00469806
        ;   Label: LAB_00469806
    JZ 0x00469814                       ; 0046980b
        ;   XREF to: 00469814 (CONDITIONAL_JUMP)  ; LAB_00469814
    TEST byte ptr [ESP + 0x4],0x1f      ; 0046980d
    JNZ 0x0046985a                      ; 00469812
        ;   XREF to: 0046985a (CONDITIONAL_JUMP)  ; LAB_0046985a
    MOV EBX,dword ptr [EDI + 0x10]      ; 00469814
        ;   Label: LAB_00469814
    TEST EBX,EBX                        ; 00469817
    JZ 0x00469827                       ; 00469819
        ;   XREF to: 00469827 (CONDITIONAL_JUMP)  ; LAB_00469827
    CMP dword ptr [EDI + 0x4],0x0       ; 0046981b
    JZ 0x00469827                       ; 0046981f
        ;   XREF to: 00469827 (CONDITIONAL_JUMP)  ; LAB_00469827
    MOV EAX,dword ptr [ESP]             ; 00469821
    MOV dword ptr [EDI + 0x10],EAX      ; 00469824
    CMP dword ptr [EDI + 0x4],0x0       ; 00469827
        ;   Label: LAB_00469827
    JZ 0x00469877                       ; 0046982b
        ;   XREF to: 00469877 (CONDITIONAL_JUMP)  ; LAB_00469877
    XOR EDX,EDX                         ; 0046982d
    MOV EAX,0x46e984                    ; 0046982f
    MOV dword ptr [0x01c38b54],EDX      ; 00469834 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EDX      ; 0046983a | DAT_01c38b58
    MOV [0x01c35e6c],EAX                ; 00469840 | DAT_01c35e6c
    PUSH 0x1ba5c84                      ; 00469845 | DAT_01ba5c84
        ;   Label: LAB_00469845
    MOV ESI,dword ptr [EBP + 0x4]       ; 0046984a
    PUSH ESI                            ; 0046984d
    PUSH EDI                            ; 0046984e
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590 ; 0046984f
        ;   XREF to: 00469590 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 00469854
    MOV dword ptr [EDI + 0x10],EBX      ; 00469857
    ADD ESP,0x8                         ; 0046985a
        ;   Label: LAB_0046985a
    POP EBP                             ; 0046985d
    POP EDI                             ; 0046985e
    POP ESI                             ; 0046985f
    POP EBX                             ; 00469860
    RET                                 ; 00469861
    LEA EAX,[EBP + 0x8]                 ; 00469862
        ;   Label: LAB_00469862
    PUSH EAX                            ; 00469865
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 00469866
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403970(SClipPlane * plane)
    ADD ESP,0x4                         ; 0046986b
    TEST EAX,EAX                        ; 0046986e
    JZ 0x0046985a                       ; 00469870
        ;   XREF to: 0046985a (CONDITIONAL_JUMP)  ; LAB_0046985a
    JMP 0x004697b9                      ; 00469872
        ;   XREF to: 004697b9 (UNCONDITIONAL_JUMP)  ; LAB_004697b9
    MOV ECX,0x90                        ; 00469877
        ;   Label: LAB_00469877
    MOV ESI,0x6                         ; 0046987c
    MOV EDX,0x46eb02                    ; 00469881
    MOV dword ptr [0x01c38b54],ECX      ; 00469886 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],ESI      ; 0046988c | DAT_01c38b58
    MOV dword ptr [0x01c35e6c],EDX      ; 00469892 | DAT_01c35e6c
    JMP 0x00469845                      ; 00469898
        ;   XREF to: 00469845 (UNCONDITIONAL_JUMP)  ; LAB_00469845

