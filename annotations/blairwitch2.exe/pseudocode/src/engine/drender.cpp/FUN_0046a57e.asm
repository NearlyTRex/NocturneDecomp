; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_FUN_0046a57e(CDemonRenderer *param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_006141c0
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

    MOV EAX,EAX                         ; 0046a57e
        ;   Label: engine_drender.cpp_FUN_0046a57e
    PUSH EBX                            ; 0046a580
    PUSH ESI                            ; 0046a581
    PUSH EDI                            ; 0046a582
    PUSH EBP                            ; 0046a583
    SUB ESP,0x4                         ; 0046a584
    MOV EBX,dword ptr [ESP + 0x18]      ; 0046a587
    CMP dword ptr [EBX + 0xc],0x0       ; 0046a58b
    JNZ 0x0046a63e                      ; 0046a58f
        ;   XREF to: 0046a63e (CONDITIONAL_JUMP)  ; LAB_0046a63e
    MOV ECX,0xffffffff                  ; 0046a595
        ;   Label: LAB_0046a595
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046a59a
    MOV dword ptr [ESP],ECX             ; 0046a59e
    MOV ESI,dword ptr [EAX + 0x4]       ; 0046a5a1
    XOR ECX,ECX                         ; 0046a5a4
    TEST ESI,ESI                        ; 0046a5a6
    JLE 0x0046a5e0                      ; 0046a5a8
        ;   XREF to: 0046a5e0 (CONDITIONAL_JUMP)  ; LAB_0046a5e0
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0046a5aa
    XOR EAX,EAX                         ; 0046a5ae
    MOV ESI,dword ptr [EDX + 0x18]      ; 0046a5b0
        ;   Label: LAB_0046a5b0
    MOV dword ptr [EAX + 0x1ba5c84],ESI ; 0046a5b3
    IMUL ESI,ESI,0x30                   ; 0046a5b9
    MOV EDI,dword ptr [EBX]             ; 0046a5bc
    MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10] ; 0046a5be
    MOV EDI,dword ptr [ESP]             ; 0046a5c2
    ADD EAX,0x4                         ; 0046a5c5
    AND EDI,ESI                         ; 0046a5c8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046a5ca
    ADD EDX,0xc                         ; 0046a5ce
    INC ECX                             ; 0046a5d1
    MOV EBP,dword ptr [ESI + 0x4]       ; 0046a5d2
    MOV dword ptr [ESP],EDI             ; 0046a5d5
    CMP ECX,EBP                         ; 0046a5d8
    JL 0x0046a5b0                       ; 0046a5da
        ;   XREF to: 0046a5b0 (CONDITIONAL_JUMP)  ; LAB_0046a5b0
    LEA EAX,[EAX]                       ; 0046a5dc
    TEST byte ptr [ESP + 0x3],0x80      ; 0046a5e0
        ;   Label: LAB_0046a5e0
    JZ 0x0046a5ed                       ; 0046a5e5
        ;   XREF to: 0046a5ed (CONDITIONAL_JUMP)  ; LAB_0046a5ed
    TEST byte ptr [ESP],0x1f            ; 0046a5e7
    JNZ 0x0046a636                      ; 0046a5eb
        ;   XREF to: 0046a636 (CONDITIONAL_JUMP)  ; LAB_0046a636
    CMP dword ptr [EBX + 0x4],0x0       ; 0046a5ed
        ;   Label: LAB_0046a5ed
    JZ 0x0046a657                       ; 0046a5f1
        ;   XREF to: 0046a657 (CONDITIONAL_JUMP)  ; LAB_0046a657
    MOV ESI,0x1                         ; 0046a5f3
    MOV ECX,0x46e9e7                    ; 0046a5f8
    XOR EDI,EDI                         ; 0046a5fd
    MOV dword ptr [0x01c38b54],ESI      ; 0046a5ff | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EDI      ; 0046a605 | DAT_01c38b58
    MOV dword ptr [0x01c35e6c],ECX      ; 0046a60b | DAT_01c35e6c
    LEA EAX,[EAX]                       ; 0046a611
    LEA EDX,[EDX]                       ; 0046a617
    LEA EAX,[EAX]                       ; 0046a61d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046a620
        ;   Label: LAB_0046a620
    PUSH 0x1ba5c84                      ; 0046a624
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046a629
    PUSH EDX                            ; 0046a62c
    PUSH EBX                            ; 0046a62d
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590 ; 0046a62e
        ;   XREF to: 00469590 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046a633
    ADD ESP,0x4                         ; 0046a636
        ;   Label: LAB_0046a636
    POP EBP                             ; 0046a639
    POP EDI                             ; 0046a63a
    POP ESI                             ; 0046a63b
    POP EBX                             ; 0046a63c
    RET                                 ; 0046a63d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046a63e
        ;   Label: LAB_0046a63e
    ADD EAX,0x8                         ; 0046a642
    PUSH EAX                            ; 0046a645
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 0046a646
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 0046a64b
    TEST EAX,EAX                        ; 0046a64e
    JZ 0x0046a636                       ; 0046a650
        ;   XREF to: 0046a636 (CONDITIONAL_JUMP)  ; LAB_0046a636
    JMP 0x0046a595                      ; 0046a652
        ;   XREF to: 0046a595 (UNCONDITIONAL_JUMP)  ; LAB_0046a595
    CMP dword ptr [0x006141c0],0x20     ; 0046a657 | DAT_006141c0
        ;   Label: LAB_0046a657
    JNZ 0x0046a6d8                      ; 0046a65e
        ;   XREF to: 0046a6d8 (CONDITIONAL_JUMP)  ; LAB_0046a6d8
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 0046a664 | DAT_01c35e6c
    MOV EBP,0x6                         ; 0046a66e
        ;   Label: LAB_0046a66e
    MOV EDI,0x3e7                       ; 0046a673
    MOV EAX,dword ptr [EBX + 0x20]      ; 0046a678
    MOV dword ptr [0x01c38b58],EBP      ; 0046a67b | DAT_01c38b58
    MOV dword ptr [0x01c38b54],EDI      ; 0046a681 | DAT_01c38b54
    TEST EAX,EAX                        ; 0046a687
    JNZ 0x0046a620                      ; 0046a689
        ;   XREF to: 0046a620 (CONDITIONAL_JUMP)  ; LAB_0046a620
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046a68b
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046a68f
    XOR ECX,ECX                         ; 0046a692
    TEST EDX,EDX                        ; 0046a694
    JLE 0x0046a620                      ; 0046a696
        ;   XREF to: 0046a620 (CONDITIONAL_JUMP)  ; LAB_0046a620
    MOV EDX,EAX                         ; 0046a698
    XOR ESI,ESI                         ; 0046a69a
    MOV EDI,dword ptr [ESI + 0x1ba5c84] ; 0046a69c
        ;   Label: LAB_0046a69c
    LEA EAX,[EDI*0x4 + 0x0]             ; 0046a6a2
    SUB EAX,EDI                         ; 0046a6a9
    MOV EBP,dword ptr [EBX]             ; 0046a6ab
    SHL EAX,0x4                         ; 0046a6ad
    MOV EDI,dword ptr [EDX + 0x1c]      ; 0046a6b0
    MOV dword ptr [EAX + EBP*0x1 + 0x18],EDI ; 0046a6b3
    MOV EDI,dword ptr [EBX]             ; 0046a6b7
    ADD EDI,EAX                         ; 0046a6b9
    MOV EAX,dword ptr [EDX + 0x20]      ; 0046a6bb
    MOV dword ptr [EDI + 0x1c],EAX      ; 0046a6be
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046a6c1
    ADD EDX,0xc                         ; 0046a6c5
    INC ECX                             ; 0046a6c8
    MOV EBP,dword ptr [EAX + 0x4]       ; 0046a6c9
    ADD ESI,0x4                         ; 0046a6cc
    CMP ECX,EBP                         ; 0046a6cf
    JL 0x0046a69c                       ; 0046a6d1
        ;   XREF to: 0046a69c (CONDITIONAL_JUMP)  ; LAB_0046a69c
    JMP 0x0046a620                      ; 0046a6d3
        ;   XREF to: 0046a620 (UNCONDITIONAL_JUMP)  ; LAB_0046a620
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 0046a6d8 | DAT_01c35e6c
        ;   Label: LAB_0046a6d8
    JMP 0x0046a66e                      ; 0046a6e2
        ;   XREF to: 0046a66e (UNCONDITIONAL_JUMP)  ; LAB_0046a66e

