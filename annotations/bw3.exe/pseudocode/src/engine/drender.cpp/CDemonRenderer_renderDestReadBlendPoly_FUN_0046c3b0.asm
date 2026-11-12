; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0046c3b0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitivePoly * Stack[0x8]:4   poly
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_0053a450 at 0053a6b2
;   core_set.cpp_CDemonSet_renderEnvMapTriangles_FUN_0053a6c0 at 0053aafb
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

    PUSH EBX                            ; 0046c3b0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0046c3b0
    PUSH ESI                            ; 0046c3b1
    PUSH EDI                            ; 0046c3b2
    PUSH EBP                            ; 0046c3b3
    SUB ESP,0x4                         ; 0046c3b4
    MOV EBX,dword ptr [ESP + 0x18]      ; 0046c3b7
    CMP dword ptr [EBX + 0xc],0x0       ; 0046c3bb
    JNZ 0x0046c46e                      ; 0046c3bf
        ;   XREF to: 0046c46e (CONDITIONAL_JUMP)  ; LAB_0046c46e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046c3c5
        ;   Label: LAB_0046c3c5
    MOV ECX,0xffffffff                  ; 0046c3c9
    XOR EDX,EDX                         ; 0046c3ce
    MOV ESI,dword ptr [EAX + 0x4]       ; 0046c3d0
    MOV dword ptr [ESP],ECX             ; 0046c3d3
    TEST ESI,ESI                        ; 0046c3d6
    JLE 0x0046c410                      ; 0046c3d8
        ;   XREF to: 0046c410 (CONDITIONAL_JUMP)  ; LAB_0046c410
    XOR ECX,ECX                         ; 0046c3da
    MOV ESI,dword ptr [EAX + 0x18]      ; 0046c3dc
        ;   Label: LAB_0046c3dc
    MOV dword ptr [ECX + 0x1bdd818],ESI ; 0046c3df | DAT_01bdd818 | DAT_01bdd81c
    IMUL ESI,ESI,0x30                   ; 0046c3e5
    MOV EDI,dword ptr [EBX]             ; 0046c3e8
    MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10] ; 0046c3ea
    MOV EDI,dword ptr [ESP]             ; 0046c3ee
    ADD ECX,0x4                         ; 0046c3f1
    AND EDI,ESI                         ; 0046c3f4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046c3f6
    ADD EAX,0xc                         ; 0046c3fa
    INC EDX                             ; 0046c3fd
    MOV EBP,dword ptr [ESI + 0x4]       ; 0046c3fe
    MOV dword ptr [ESP],EDI             ; 0046c401
    CMP EDX,EBP                         ; 0046c404
    JL 0x0046c3dc                       ; 0046c406
        ;   XREF to: 0046c3dc (CONDITIONAL_JUMP)  ; LAB_0046c3dc
    LEA EAX,[EAX]                       ; 0046c408
    MOV EDX,EDX                         ; 0046c40e
    TEST byte ptr [ESP + 0x3],0x80      ; 0046c410
        ;   Label: LAB_0046c410
    JZ 0x0046c41d                       ; 0046c415
        ;   XREF to: 0046c41d (CONDITIONAL_JUMP)  ; LAB_0046c41d
    TEST byte ptr [ESP],0x1f            ; 0046c417
    JNZ 0x0046c466                      ; 0046c41b
        ;   XREF to: 0046c466 (CONDITIONAL_JUMP)  ; LAB_0046c466
    CMP dword ptr [EBX + 0x4],0x0       ; 0046c41d
        ;   Label: LAB_0046c41d
    JZ 0x0046c487                       ; 0046c421
        ;   XREF to: 0046c487 (CONDITIONAL_JUMP)  ; LAB_0046c487
    MOV ESI,0x1                         ; 0046c423
    MOV ECX,0x46fa57                    ; 0046c428
    XOR EDI,EDI                         ; 0046c42d
    MOV dword ptr [0x01c6e2b4],ESI      ; 0046c42f | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EDI      ; 0046c435 | DAT_01c6e2b8
    MOV dword ptr [0x01c6b5cc],ECX      ; 0046c43b | DAT_01c6b5cc
    LEA EAX,[EAX]                       ; 0046c441
    LEA EDX,[EDX]                       ; 0046c447
    LEA EAX,[EAX]                       ; 0046c44d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046c450
        ;   Label: LAB_0046c450
    PUSH 0x1bdd818                      ; 0046c454 | DAT_01bdd818
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046c459
    PUSH EDX                            ; 0046c45c
    PUSH EBX                            ; 0046c45d
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160 ; 0046c45e
        ;   XREF to: 0046b160 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046c463
    ADD ESP,0x4                         ; 0046c466
        ;   Label: LAB_0046c466
    POP EBP                             ; 0046c469
    POP EDI                             ; 0046c46a
    POP ESI                             ; 0046c46b
    POP EBX                             ; 0046c46c
    RET                                 ; 0046c46d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046c46e
        ;   Label: LAB_0046c46e
    ADD EAX,0x8                         ; 0046c472
    PUSH EAX                            ; 0046c475
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0046c476
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 0046c47b
    TEST EAX,EAX                        ; 0046c47e
    JZ 0x0046c466                       ; 0046c480
        ;   XREF to: 0046c466 (CONDITIONAL_JUMP)  ; LAB_0046c466
    JMP 0x0046c3c5                      ; 0046c482
        ;   XREF to: 0046c3c5 (UNCONDITIONAL_JUMP)  ; LAB_0046c3c5
    CMP dword ptr [0x005fba20],0x20     ; 0046c487 | DAT_005fba20
        ;   Label: LAB_0046c487
    JNZ 0x0046c4f9                      ; 0046c48e
        ;   XREF to: 0046c4f9 (CONDITIONAL_JUMP)  ; LAB_0046c4f9
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 0046c490 | DAT_01c6b5cc
    MOV EBP,0x6                         ; 0046c49a
        ;   Label: LAB_0046c49a
    MOV EDI,0x2e7                       ; 0046c49f
    MOV EAX,dword ptr [EBX + 0x20]      ; 0046c4a4
    MOV dword ptr [0x01c6e2b8],EBP      ; 0046c4a7 | DAT_01c6e2b8
    MOV dword ptr [0x01c6e2b4],EDI      ; 0046c4ad | DAT_01c6e2b4
    TEST EAX,EAX                        ; 0046c4b3
    JNZ 0x0046c450                      ; 0046c4b5
        ;   XREF to: 0046c450 (CONDITIONAL_JUMP)  ; LAB_0046c450
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046c4b7
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046c4bb
    XOR ECX,ECX                         ; 0046c4be
    TEST EDX,EDX                        ; 0046c4c0
    JLE 0x0046c450                      ; 0046c4c2
        ;   XREF to: 0046c450 (CONDITIONAL_JUMP)  ; LAB_0046c450
    XOR EDX,EDX                         ; 0046c4c4
    MOV ESI,dword ptr [EDX + 0x1bdd818] ; 0046c4c6 | DAT_01bdd818 | DAT_01bdd81c
        ;   Label: LAB_0046c4c6
    IMUL ESI,ESI,0x30                   ; 0046c4cc
    MOV EDI,dword ptr [EBX]             ; 0046c4cf
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0046c4d1
    MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP ; 0046c4d4
    MOV EDI,dword ptr [EBX]             ; 0046c4d8
    ADD EDI,ESI                         ; 0046c4da
    MOV ESI,dword ptr [EAX + 0x20]      ; 0046c4dc
    MOV dword ptr [EDI + 0x1c],ESI      ; 0046c4df
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046c4e2
    ADD EAX,0xc                         ; 0046c4e6
    INC ECX                             ; 0046c4e9
    MOV EBP,dword ptr [ESI + 0x4]       ; 0046c4ea
    ADD EDX,0x4                         ; 0046c4ed
    CMP ECX,EBP                         ; 0046c4f0
    JL 0x0046c4c6                       ; 0046c4f2
        ;   XREF to: 0046c4c6 (CONDITIONAL_JUMP)  ; LAB_0046c4c6
    JMP 0x0046c450                      ; 0046c4f4
        ;   XREF to: 0046c450 (UNCONDITIONAL_JUMP)  ; LAB_0046c450
    MOV dword ptr [0x01c6b5cc],0x561713 ; 0046c4f9 | DAT_01c6b5cc
        ;   Label: LAB_0046c4f9
    JMP 0x0046c49a                      ; 0046c503
        ;   XREF to: 0046c49a (UNCONDITIONAL_JUMP)  ; LAB_0046c49a

