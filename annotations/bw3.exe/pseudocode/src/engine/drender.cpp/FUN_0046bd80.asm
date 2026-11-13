; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_FUN_0046bd80(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01bdd818
;   undefined4 DAT_01bdd81c
;   undefined4 DAT_01bdd820
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
;
; *****************************************************************************

section .text

    XOR EAX,EAX                         ; 0046bd80
        ;   Label: engine_drender.cpp_FUN_0046bd80
    MOV AX,word ptr [EBP]               ; 0046bd82
    MOV [0x01bdd818],EAX                ; 0046bd86 | DAT_01bdd818
    XOR EAX,EAX                         ; 0046bd8b
    MOV AX,word ptr [EBP + 0x2]         ; 0046bd8d
    MOV [0x01bdd81c],EAX                ; 0046bd91 | DAT_01bdd81c
    XOR EAX,EAX                         ; 0046bd96
    MOV AX,word ptr [EBP + 0x4]         ; 0046bd98
    MOV ESI,dword ptr [ECX + 0x4]       ; 0046bd9c
    MOV [0x01bdd820],EAX                ; 0046bd9f | DAT_01bdd820
    TEST ESI,ESI                        ; 0046bda4
    JNZ 0x0046be2b                      ; 0046bda6
        ;   XREF to: 0046be2b (CONDITIONAL_JUMP)  ; LAB_0046be2b
    CMP dword ptr [0x005fba20],0x20     ; 0046bdac | DAT_005fba20
    JNZ 0x0046be46                      ; 0046bdb3
        ;   XREF to: 0046be46 (CONDITIONAL_JUMP)  ; LAB_0046be46
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 0046bdb9 | DAT_01c6b5cc
    MOV EBX,0x6                         ; 0046bdc3
        ;   Label: LAB_0046bdc3
    MOV EDX,0x2cd                       ; 0046bdc8
    MOV dword ptr [0x01c6e2b8],EBX      ; 0046bdcd | DAT_01c6e2b8
    MOV dword ptr [0x01c6e2b4],EDX      ; 0046bdd3 | DAT_01c6e2b4
    PUSH 0x1bdd818                      ; 0046bdd9
        ;   Label: LAB_0046bdd9
    PUSH 0x3                            ; 0046bdde
    PUSH ECX                            ; 0046bde0
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160 ; 0046bde1
        ;   XREF to: 0046b160 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046bde6
    POP EBP                             ; 0046bde9
    POP EDI                             ; 0046bdea
    POP ESI                             ; 0046bdeb
    POP EBX                             ; 0046bdec
    RET                                 ; 0046bded
    XOR EDI,EDI                         ; 0046be2b
        ;   Label: LAB_0046be2b
    MOV ESI,0x46f9a6                    ; 0046be2d
    MOV dword ptr [0x01c6e2b4],EDI      ; 0046be32 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EDI      ; 0046be38 | DAT_01c6e2b8
    MOV dword ptr [0x01c6b5cc],ESI      ; 0046be3e | DAT_01c6b5cc
    JMP 0x0046bdd9                      ; 0046be44
        ;   XREF to: 0046bdd9 (UNCONDITIONAL_JUMP)  ; LAB_0046bdd9
    MOV dword ptr [0x01c6b5cc],0x561713 ; 0046be46 | DAT_01c6b5cc
        ;   Label: LAB_0046be46
    JMP 0x0046bdc3                      ; 0046be50
        ;   XREF to: 0046bdc3 (UNCONDITIONAL_JUMP)  ; LAB_0046bdc3

