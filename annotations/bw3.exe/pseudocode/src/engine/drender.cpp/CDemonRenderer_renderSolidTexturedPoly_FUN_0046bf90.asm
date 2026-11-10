; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0046bf90(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitivePoly * Stack[0x8]:4   poly
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_glass.cpp_CGlass_renderBrokenGlass_FUN_004ca940 at 004caae1
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01bdd818
;   undefined4 DAT_01bdd81c
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046bf90
        ;   Label: engine_drender.cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0046bf90
    PUSH EBP                            ; 0046bf91
    SUB ESP,0x4                         ; 0046bf92
    MOV EBX,dword ptr [ESP + 0x10]      ; 0046bf95
    CMP dword ptr [EBX + 0xc],0x0       ; 0046bf99
    JNZ 0x0046c03a                      ; 0046bf9d
        ;   XREF to: 0046c03a (CONDITIONAL_JUMP)  ; LAB_0046c03a
    PUSH EDI                            ; 0046bfa3
        ;   Label: LAB_0046bfa3
    PUSH ESI                            ; 0046bfa4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046bfa5
    MOV ESI,dword ptr [EAX + 0x4]       ; 0046bfa9
    XOR ECX,ECX                         ; 0046bfac
    TEST ESI,ESI                        ; 0046bfae
    JLE 0x0046bff9                      ; 0046bfb0
        ;   XREF to: 0046bff9 (CONDITIONAL_JUMP)  ; LAB_0046bff9
    XOR EDX,EDX                         ; 0046bfb2
    MOV EDI,dword ptr [EBX + 0x20]      ; 0046bfb4
        ;   Label: LAB_0046bfb4
    MOV ESI,dword ptr [EAX + 0x18]      ; 0046bfb7
    TEST EDI,EDI                        ; 0046bfba
    JNZ 0x0046bfe1                      ; 0046bfbc
        ;   XREF to: 0046bfe1 (CONDITIONAL_JUMP)  ; LAB_0046bfe1
    IMUL EDI,ESI,0x30                   ; 0046bfbe
    MOV dword ptr [ESP + 0x8],EDI       ; 0046bfc1
    MOV EBP,dword ptr [ESP + 0x8]       ; 0046bfc5
    MOV EDI,dword ptr [EBX]             ; 0046bfc9
    ADD EDI,EBP                         ; 0046bfcb
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0046bfcd
    MOV dword ptr [EDI + 0x18],EBP      ; 0046bfd0
    MOV EBP,dword ptr [ESP + 0x8]       ; 0046bfd3
    MOV EDI,dword ptr [EBX]             ; 0046bfd7
    ADD EBP,EDI                         ; 0046bfd9
    MOV EDI,dword ptr [EAX + 0x20]      ; 0046bfdb
    MOV dword ptr [EBP + 0x1c],EDI      ; 0046bfde
    MOV dword ptr [EDX + 0x1bdd818],ESI ; 0046bfe1 | DAT_01bdd818 | DAT_01bdd81c
        ;   Label: LAB_0046bfe1
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046bfe7
    ADD EAX,0xc                         ; 0046bfeb
    INC ECX                             ; 0046bfee
    MOV EDI,dword ptr [ESI + 0x4]       ; 0046bfef
    ADD EDX,0x4                         ; 0046bff2
    CMP ECX,EDI                         ; 0046bff5
    JL 0x0046bfb4                       ; 0046bff7
        ;   XREF to: 0046bfb4 (CONDITIONAL_JUMP)  ; LAB_0046bfb4
    CMP dword ptr [EBX + 0x4],0x0       ; 0046bff9
        ;   Label: LAB_0046bff9
    JZ 0x0046c053                       ; 0046bffd
        ;   XREF to: 0046c053 (CONDITIONAL_JUMP)  ; LAB_0046c053
    MOV EAX,0x1                         ; 0046bfff
    MOV EBP,0x46fa57                    ; 0046c004
    XOR EDX,EDX                         ; 0046c009
    MOV [0x01c6e2b4],EAX                ; 0046c00b | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EDX      ; 0046c010 | DAT_01c6e2b8
    MOV dword ptr [0x01c6b5cc],EBP      ; 0046c016 | DAT_01c6b5cc
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046c01c
        ;   Label: LAB_0046c01c
    PUSH 0x1bdd818                      ; 0046c020 | DAT_01bdd818
    MOV ECX,dword ptr [EAX + 0x4]       ; 0046c025
    PUSH ECX                            ; 0046c028
    PUSH EBX                            ; 0046c029
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160 ; 0046c02a
        ;   XREF to: 0046b160 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046c02f
    POP ESI                             ; 0046c032
    POP EDI                             ; 0046c033
    ADD ESP,0x4                         ; 0046c034
        ;   Label: LAB_0046c034
    POP EBP                             ; 0046c037
    POP EBX                             ; 0046c038
    RET                                 ; 0046c039
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046c03a
        ;   Label: LAB_0046c03a
    ADD EAX,0x8                         ; 0046c03e
    PUSH EAX                            ; 0046c041
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0046c042
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 0046c047
    TEST EAX,EAX                        ; 0046c04a
    JZ 0x0046c034                       ; 0046c04c
        ;   XREF to: 0046c034 (CONDITIONAL_JUMP)  ; LAB_0046c034
    JMP 0x0046bfa3                      ; 0046c04e
        ;   XREF to: 0046bfa3 (UNCONDITIONAL_JUMP)  ; LAB_0046bfa3
    CMP dword ptr [0x005fba20],0x20     ; 0046c053 | DAT_005fba20
        ;   Label: LAB_0046c053
    JNZ 0x0046c07e                      ; 0046c05a
        ;   XREF to: 0046c07e (CONDITIONAL_JUMP)  ; LAB_0046c07e
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 0046c05c | DAT_01c6b5cc
    MOV EDI,0x6                         ; 0046c066
        ;   Label: LAB_0046c066
    MOV ESI,0xc3                        ; 0046c06b
    MOV dword ptr [0x01c6e2b8],EDI      ; 0046c070 | DAT_01c6e2b8
    MOV dword ptr [0x01c6e2b4],ESI      ; 0046c076 | DAT_01c6e2b4
    JMP 0x0046c01c                      ; 0046c07c
        ;   XREF to: 0046c01c (UNCONDITIONAL_JUMP)  ; LAB_0046c01c
    MOV dword ptr [0x01c6b5cc],0x561713 ; 0046c07e | DAT_01c6b5cc
        ;   Label: LAB_0046c07e
    JMP 0x0046c066                      ; 0046c088
        ;   XREF to: 0046c066 (UNCONDITIONAL_JUMP)  ; LAB_0046c066

