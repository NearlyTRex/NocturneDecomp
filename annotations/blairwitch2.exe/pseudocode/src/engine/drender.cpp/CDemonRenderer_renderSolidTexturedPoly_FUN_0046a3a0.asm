; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0046a3a0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitivePoly * Stack[0x8]:4   poly
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_glass.cpp_CGlass_renderBrokenGlass_FUN_004c5640 at 004c57e1
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

    PUSH EBX                            ; 0046a3a0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0046a3a0
    PUSH EBP                            ; 0046a3a1
    SUB ESP,0x4                         ; 0046a3a2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0046a3a5
    CMP dword ptr [EBX + 0xc],0x0       ; 0046a3a9
    JNZ 0x0046a44a                      ; 0046a3ad
        ;   XREF to: 0046a44a (CONDITIONAL_JUMP)  ; LAB_0046a44a
    PUSH EDI                            ; 0046a3b3
        ;   Label: LAB_0046a3b3
    PUSH ESI                            ; 0046a3b4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046a3b5
    MOV ESI,dword ptr [EAX + 0x4]       ; 0046a3b9
    XOR ECX,ECX                         ; 0046a3bc
    TEST ESI,ESI                        ; 0046a3be
    JLE 0x0046a409                      ; 0046a3c0
        ;   XREF to: 0046a409 (CONDITIONAL_JUMP)  ; LAB_0046a409
    XOR EDX,EDX                         ; 0046a3c2
    MOV EDI,dword ptr [EBX + 0x20]      ; 0046a3c4
        ;   Label: LAB_0046a3c4
    MOV ESI,dword ptr [EAX + 0x18]      ; 0046a3c7
    TEST EDI,EDI                        ; 0046a3ca
    JNZ 0x0046a3f1                      ; 0046a3cc
        ;   XREF to: 0046a3f1 (CONDITIONAL_JUMP)  ; LAB_0046a3f1
    IMUL EDI,ESI,0x30                   ; 0046a3ce
    MOV dword ptr [ESP + 0x8],EDI       ; 0046a3d1
    MOV EBP,dword ptr [ESP + 0x8]       ; 0046a3d5
    MOV EDI,dword ptr [EBX]             ; 0046a3d9
    ADD EDI,EBP                         ; 0046a3db
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0046a3dd
    MOV dword ptr [EDI + 0x18],EBP      ; 0046a3e0
    MOV EBP,dword ptr [ESP + 0x8]       ; 0046a3e3
    MOV EDI,dword ptr [EBX]             ; 0046a3e7
    ADD EBP,EDI                         ; 0046a3e9
    MOV EDI,dword ptr [EAX + 0x20]      ; 0046a3eb
    MOV dword ptr [EBP + 0x1c],EDI      ; 0046a3ee
    MOV dword ptr [EDX + 0x1ba5c84],ESI ; 0046a3f1 | DAT_01ba5c84 | DAT_01ba5c88
        ;   Label: LAB_0046a3f1
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046a3f7
    ADD EAX,0xc                         ; 0046a3fb
    INC ECX                             ; 0046a3fe
    MOV EDI,dword ptr [ESI + 0x4]       ; 0046a3ff
    ADD EDX,0x4                         ; 0046a402
    CMP ECX,EDI                         ; 0046a405
    JL 0x0046a3c4                       ; 0046a407
        ;   XREF to: 0046a3c4 (CONDITIONAL_JUMP)  ; LAB_0046a3c4
    CMP dword ptr [EBX + 0x4],0x0       ; 0046a409
        ;   Label: LAB_0046a409
    JZ 0x0046a463                       ; 0046a40d
        ;   XREF to: 0046a463 (CONDITIONAL_JUMP)  ; LAB_0046a463
    MOV EAX,0x1                         ; 0046a40f
    MOV EBP,0x46e9e7                    ; 0046a414
    XOR EDX,EDX                         ; 0046a419
    MOV [0x01c38b54],EAX                ; 0046a41b | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EDX      ; 0046a420 | DAT_01c38b58
    MOV dword ptr [0x01c35e6c],EBP      ; 0046a426 | DAT_01c35e6c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046a42c
        ;   Label: LAB_0046a42c
    PUSH 0x1ba5c84                      ; 0046a430 | DAT_01ba5c84
    MOV ECX,dword ptr [EAX + 0x4]       ; 0046a435
    PUSH ECX                            ; 0046a438
    PUSH EBX                            ; 0046a439
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590 ; 0046a43a
        ;   XREF to: 00469590 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046a43f
    POP ESI                             ; 0046a442
    POP EDI                             ; 0046a443
    ADD ESP,0x4                         ; 0046a444
        ;   Label: LAB_0046a444
    POP EBP                             ; 0046a447
    POP EBX                             ; 0046a448
    RET                                 ; 0046a449
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046a44a
        ;   Label: LAB_0046a44a
    ADD EAX,0x8                         ; 0046a44e
    PUSH EAX                            ; 0046a451
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 0046a452
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 0046a457
    TEST EAX,EAX                        ; 0046a45a
    JZ 0x0046a444                       ; 0046a45c
        ;   XREF to: 0046a444 (CONDITIONAL_JUMP)  ; LAB_0046a444
    JMP 0x0046a3b3                      ; 0046a45e
        ;   XREF to: 0046a3b3 (UNCONDITIONAL_JUMP)  ; LAB_0046a3b3
    CMP dword ptr [0x006141c0],0x20     ; 0046a463 | DAT_006141c0
        ;   Label: LAB_0046a463
    JNZ 0x0046a48e                      ; 0046a46a
        ;   XREF to: 0046a48e (CONDITIONAL_JUMP)  ; LAB_0046a48e
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 0046a46c | DAT_01c35e6c
    MOV EDI,0x6                         ; 0046a476
        ;   Label: LAB_0046a476
    MOV ESI,0xc3                        ; 0046a47b
    MOV dword ptr [0x01c38b58],EDI      ; 0046a480 | DAT_01c38b58
    MOV dword ptr [0x01c38b54],ESI      ; 0046a486 | DAT_01c38b54
    JMP 0x0046a42c                      ; 0046a48c
        ;   XREF to: 0046a42c (UNCONDITIONAL_JUMP)  ; LAB_0046a42c
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 0046a48e | DAT_01c35e6c
        ;   Label: LAB_0046a48e
    JMP 0x0046a476                      ; 0046a498
        ;   XREF to: 0046a476 (UNCONDITIONAL_JUMP)  ; LAB_0046a476

