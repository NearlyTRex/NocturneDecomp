; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0046a7d0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitivePoly * Stack[0x8]:4   poly
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_00533810 at 00533a72
;   core_set.cpp_CDemonSet_renderEnvMapTriangles_FUN_00533a80 at 00533ebb
;
; Referenced Globals:
;   undefined4 DAT_006141c0
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

    PUSH EBX                            ; 0046a7d0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0046a7d0
    PUSH ESI                            ; 0046a7d1
    PUSH EDI                            ; 0046a7d2
    PUSH EBP                            ; 0046a7d3
    SUB ESP,0x4                         ; 0046a7d4
    MOV EBX,dword ptr [ESP + 0x18]      ; 0046a7d7
    CMP dword ptr [EBX + 0xc],0x0       ; 0046a7db
    JNZ 0x0046a88e                      ; 0046a7df
        ;   XREF to: 0046a88e (CONDITIONAL_JUMP)  ; LAB_0046a88e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046a7e5
        ;   Label: LAB_0046a7e5
    MOV ECX,0xffffffff                  ; 0046a7e9
    XOR EDX,EDX                         ; 0046a7ee
    MOV ESI,dword ptr [EAX + 0x4]       ; 0046a7f0
    MOV dword ptr [ESP],ECX             ; 0046a7f3
    TEST ESI,ESI                        ; 0046a7f6
    JLE 0x0046a830                      ; 0046a7f8
        ;   XREF to: 0046a830 (CONDITIONAL_JUMP)  ; LAB_0046a830
    XOR ECX,ECX                         ; 0046a7fa
    MOV ESI,dword ptr [EAX + 0x18]      ; 0046a7fc
        ;   Label: LAB_0046a7fc
    MOV dword ptr [ECX + 0x1ba5c84],ESI ; 0046a7ff | DAT_01ba5c84 | DAT_01ba5c88
    IMUL ESI,ESI,0x30                   ; 0046a805
    MOV EDI,dword ptr [EBX]             ; 0046a808
    MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10] ; 0046a80a
    MOV EDI,dword ptr [ESP]             ; 0046a80e
    ADD ECX,0x4                         ; 0046a811
    AND EDI,ESI                         ; 0046a814
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046a816
    ADD EAX,0xc                         ; 0046a81a
    INC EDX                             ; 0046a81d
    MOV EBP,dword ptr [ESI + 0x4]       ; 0046a81e
    MOV dword ptr [ESP],EDI             ; 0046a821
    CMP EDX,EBP                         ; 0046a824
    JL 0x0046a7fc                       ; 0046a826
        ;   XREF to: 0046a7fc (CONDITIONAL_JUMP)  ; LAB_0046a7fc
    LEA EAX,[EAX]                       ; 0046a828
    MOV EDX,EDX                         ; 0046a82e
    TEST byte ptr [ESP + 0x3],0x80      ; 0046a830
        ;   Label: LAB_0046a830
    JZ 0x0046a83d                       ; 0046a835
        ;   XREF to: 0046a83d (CONDITIONAL_JUMP)  ; LAB_0046a83d
    TEST byte ptr [ESP],0x1f            ; 0046a837
    JNZ 0x0046a886                      ; 0046a83b
        ;   XREF to: 0046a886 (CONDITIONAL_JUMP)  ; LAB_0046a886
    CMP dword ptr [EBX + 0x4],0x0       ; 0046a83d
        ;   Label: LAB_0046a83d
    JZ 0x0046a8a7                       ; 0046a841
        ;   XREF to: 0046a8a7 (CONDITIONAL_JUMP)  ; LAB_0046a8a7
    MOV ESI,0x1                         ; 0046a843
    MOV ECX,0x46e9e7                    ; 0046a848
    XOR EDI,EDI                         ; 0046a84d
    MOV dword ptr [0x01c38b54],ESI      ; 0046a84f | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EDI      ; 0046a855 | DAT_01c38b58
    MOV dword ptr [0x01c35e6c],ECX      ; 0046a85b | DAT_01c35e6c
    LEA EAX,[EAX]                       ; 0046a861
    LEA EDX,[EDX]                       ; 0046a867
    LEA EAX,[EAX]                       ; 0046a86d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046a870
        ;   Label: LAB_0046a870
    PUSH 0x1ba5c84                      ; 0046a874 | DAT_01ba5c84
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046a879
    PUSH EDX                            ; 0046a87c
    PUSH EBX                            ; 0046a87d
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590 ; 0046a87e
        ;   XREF to: 00469590 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046a883
    ADD ESP,0x4                         ; 0046a886
        ;   Label: LAB_0046a886
    POP EBP                             ; 0046a889
    POP EDI                             ; 0046a88a
    POP ESI                             ; 0046a88b
    POP EBX                             ; 0046a88c
    RET                                 ; 0046a88d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046a88e
        ;   Label: LAB_0046a88e
    ADD EAX,0x8                         ; 0046a892
    PUSH EAX                            ; 0046a895
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 0046a896
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 0046a89b
    TEST EAX,EAX                        ; 0046a89e
    JZ 0x0046a886                       ; 0046a8a0
        ;   XREF to: 0046a886 (CONDITIONAL_JUMP)  ; LAB_0046a886
    JMP 0x0046a7e5                      ; 0046a8a2
        ;   XREF to: 0046a7e5 (UNCONDITIONAL_JUMP)  ; LAB_0046a7e5
    CMP dword ptr [0x006141c0],0x20     ; 0046a8a7 | DAT_006141c0
        ;   Label: LAB_0046a8a7
    JNZ 0x0046a919                      ; 0046a8ae
        ;   XREF to: 0046a919 (CONDITIONAL_JUMP)  ; LAB_0046a919
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 0046a8b0 | DAT_01c35e6c
    MOV EBP,0x6                         ; 0046a8ba
        ;   Label: LAB_0046a8ba
    MOV EDI,0x2e7                       ; 0046a8bf
    MOV EAX,dword ptr [EBX + 0x20]      ; 0046a8c4
    MOV dword ptr [0x01c38b58],EBP      ; 0046a8c7 | DAT_01c38b58
    MOV dword ptr [0x01c38b54],EDI      ; 0046a8cd | DAT_01c38b54
    TEST EAX,EAX                        ; 0046a8d3
    JNZ 0x0046a870                      ; 0046a8d5
        ;   XREF to: 0046a870 (CONDITIONAL_JUMP)  ; LAB_0046a870
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046a8d7
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046a8db
    XOR ECX,ECX                         ; 0046a8de
    TEST EDX,EDX                        ; 0046a8e0
    JLE 0x0046a870                      ; 0046a8e2
        ;   XREF to: 0046a870 (CONDITIONAL_JUMP)  ; LAB_0046a870
    XOR EDX,EDX                         ; 0046a8e4
    MOV ESI,dword ptr [EDX + 0x1ba5c84] ; 0046a8e6 | DAT_01ba5c84 | DAT_01ba5c88
        ;   Label: LAB_0046a8e6
    IMUL ESI,ESI,0x30                   ; 0046a8ec
    MOV EDI,dword ptr [EBX]             ; 0046a8ef
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0046a8f1
    MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP ; 0046a8f4
    MOV EDI,dword ptr [EBX]             ; 0046a8f8
    ADD EDI,ESI                         ; 0046a8fa
    MOV ESI,dword ptr [EAX + 0x20]      ; 0046a8fc
    MOV dword ptr [EDI + 0x1c],ESI      ; 0046a8ff
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046a902
    ADD EAX,0xc                         ; 0046a906
    INC ECX                             ; 0046a909
    MOV EBP,dword ptr [ESI + 0x4]       ; 0046a90a
    ADD EDX,0x4                         ; 0046a90d
    CMP ECX,EBP                         ; 0046a910
    JL 0x0046a8e6                       ; 0046a912
        ;   XREF to: 0046a8e6 (CONDITIONAL_JUMP)  ; LAB_0046a8e6
    JMP 0x0046a870                      ; 0046a914
        ;   XREF to: 0046a870 (UNCONDITIONAL_JUMP)  ; LAB_0046a870
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 0046a919 | DAT_01c35e6c
        ;   Label: LAB_0046a919
    JMP 0x0046a8ba                      ; 0046a923
        ;   XREF to: 0046a8ba (UNCONDITIONAL_JUMP)  ; LAB_0046a8ba

