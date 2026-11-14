; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_FUN_0046a190(void)
;
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01ba5c84
;   undefined4 DAT_01ba5c88
;   undefined4 DAT_01ba5c8c
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
;
; *****************************************************************************

section .text

    XOR EAX,EAX                         ; 0046a190
        ;   Label: engine_drender.cpp_FUN_0046a190
    MOV AX,word ptr [EBP]               ; 0046a192
    MOV [0x01ba5c84],EAX                ; 0046a196 | DAT_01ba5c84
    XOR EAX,EAX                         ; 0046a19b
    MOV AX,word ptr [EBP + 0x2]         ; 0046a19d
    MOV [0x01ba5c88],EAX                ; 0046a1a1 | DAT_01ba5c88
    XOR EAX,EAX                         ; 0046a1a6
    MOV AX,word ptr [EBP + 0x4]         ; 0046a1a8
    MOV ESI,dword ptr [ECX + 0x4]       ; 0046a1ac
    MOV [0x01ba5c8c],EAX                ; 0046a1af | DAT_01ba5c8c
    TEST ESI,ESI                        ; 0046a1b4
    JNZ 0x0046a23b                      ; 0046a1b6
        ;   XREF to: 0046a23b (CONDITIONAL_JUMP)  ; LAB_0046a23b
    CMP dword ptr [0x006141c0],0x20     ; 0046a1bc | DAT_006141c0
    JNZ 0x0046a256                      ; 0046a1c3
        ;   XREF to: 0046a256 (CONDITIONAL_JUMP)  ; LAB_0046a256
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 0046a1c9 | DAT_01c35e6c
    MOV EBX,0x6                         ; 0046a1d3
        ;   Label: LAB_0046a1d3
    MOV EDX,0x2cd                       ; 0046a1d8
    MOV dword ptr [0x01c38b58],EBX      ; 0046a1dd | DAT_01c38b58
    MOV dword ptr [0x01c38b54],EDX      ; 0046a1e3 | DAT_01c38b54
    PUSH 0x1ba5c84                      ; 0046a1e9
        ;   Label: LAB_0046a1e9
    PUSH 0x3                            ; 0046a1ee
    PUSH ECX                            ; 0046a1f0
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590 ; 0046a1f1
        ;   XREF to: 00469590 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046a1f6
    POP EBP                             ; 0046a1f9
    POP EDI                             ; 0046a1fa
    POP ESI                             ; 0046a1fb
    POP EBX                             ; 0046a1fc
    RET                                 ; 0046a1fd
    XOR EDI,EDI                         ; 0046a23b
        ;   Label: LAB_0046a23b
    MOV ESI,0x46e936                    ; 0046a23d
    MOV dword ptr [0x01c38b54],EDI      ; 0046a242 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EDI      ; 0046a248 | DAT_01c38b58
    MOV dword ptr [0x01c35e6c],ESI      ; 0046a24e | DAT_01c35e6c
    JMP 0x0046a1e9                      ; 0046a254
        ;   XREF to: 0046a1e9 (UNCONDITIONAL_JUMP)  ; LAB_0046a1e9
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 0046a256 | DAT_01c35e6c
        ;   Label: LAB_0046a256
    JMP 0x0046a1d3                      ; 0046a260
        ;   XREF to: 0046a1d3 (UNCONDITIONAL_JUMP)  ; LAB_0046a1d3

