; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderAlphaBlendedFace_FUN_0046bd60(CDemonRenderer *this_ptr,SInputFace *face)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SInputFace *     Stack[0x8]:4   face
;
; Referenced Globals:
;   int g_INT_005fba20 = 0x8
;   int[16] g_INT_ARRAY_01bdd818
;   undefined4 g_INT_ARRAY_01bdd818[1]
;   undefined4 g_INT_ARRAY_01bdd818[2]
;   void* g_PTR_01c6b5cc
;   _BIT_INTEGER32 g_BIT_INTEGER32_01c6e2b4
;   int g_INT_01c6e2b8
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046bd60
        ;   Label: engine_drender.cpp_CDemonRenderer_renderAlphaBlendedFace_FUN_0046bd60
    PUSH ESI                            ; 0046bd61
    PUSH EDI                            ; 0046bd62
    PUSH EBP                            ; 0046bd63
    MOV ECX,dword ptr [ESP + 0x14]      ; 0046bd64
    MOV EBP,dword ptr [ESP + 0x18]      ; 0046bd68
    CMP dword ptr [ECX + 0x4],0x0       ; 0046bd6c
    JZ 0x0046bdee                       ; 0046bd70
        ;   XREF to: 0046bdee (CONDITIONAL_JUMP)  ; LAB_0046bdee
    LEA EAX,[EAX]                       ; 0046bd72
    LEA EDX,[EDX]                       ; 0046bd78
    MOV EAX,EAX                         ; 0046bd7e
    XOR EAX,EAX                         ; 0046bd80
        ;   Label: LAB_0046bd80
    MOV AX,word ptr [EBP]               ; 0046bd82
    MOV [0x01bdd818],EAX                ; 0046bd86 | g_INT_ARRAY_01bdd818
    XOR EAX,EAX                         ; 0046bd8b
    MOV AX,word ptr [EBP + 0x2]         ; 0046bd8d
    MOV [0x01bdd81c],EAX                ; 0046bd91 | g_INT_ARRAY_01bdd818[1]
    XOR EAX,EAX                         ; 0046bd96
    MOV AX,word ptr [EBP + 0x4]         ; 0046bd98
    MOV ESI,dword ptr [ECX + 0x4]       ; 0046bd9c
    MOV [0x01bdd820],EAX                ; 0046bd9f | g_INT_ARRAY_01bdd818[2]
    TEST ESI,ESI                        ; 0046bda4
    JNZ 0x0046be2b                      ; 0046bda6
        ;   XREF to: 0046be2b (CONDITIONAL_JUMP)  ; LAB_0046be2b
    CMP dword ptr [0x005fba20],0x20     ; 0046bdac | g_INT_005fba20
    JNZ 0x0046be46                      ; 0046bdb3
        ;   XREF to: 0046be46 (CONDITIONAL_JUMP)  ; LAB_0046be46
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 0046bdb9 | g_PTR_01c6b5cc
    MOV EBX,0x6                         ; 0046bdc3
        ;   Label: LAB_0046bdc3
    MOV EDX,0x2cd                       ; 0046bdc8
    MOV dword ptr [0x01c6e2b8],EBX      ; 0046bdcd | g_INT_01c6e2b8
    MOV dword ptr [0x01c6e2b4],EDX      ; 0046bdd3 | g_BIT_INTEGER32_01c6e2b4
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
    CMP dword ptr [ECX + 0x20],0x0      ; 0046bdee
        ;   Label: LAB_0046bdee
    JNZ 0x0046bd80                      ; 0046bdf2
        ;   XREF to: 0046bd80 (CONDITIONAL_JUMP)  ; LAB_0046bd80
    MOV EAX,EBP                         ; 0046bdf4
    LEA EDI,[EBP + 0x6]                 ; 0046bdf6
    XOR EDX,EDX                         ; 0046bdf9
        ;   Label: LAB_0046bdf9
    MOV DX,word ptr [EAX]               ; 0046bdfb
    IMUL EDX,EDX,0x30                   ; 0046bdfe
    XOR ESI,ESI                         ; 0046be01
    MOV SI,word ptr [EAX + 0x6]         ; 0046be03
    MOV EBX,dword ptr [ECX]             ; 0046be07
    SHL ESI,0x8                         ; 0046be09
    MOV dword ptr [EDX + EBX*0x1 + 0x18],ESI ; 0046be0c
    XOR EBX,EBX                         ; 0046be10
    MOV BX,word ptr [EAX + 0xc]         ; 0046be12
    MOV ESI,dword ptr [ECX]             ; 0046be16
    SHL EBX,0x8                         ; 0046be18
    ADD EAX,0x2                         ; 0046be1b
    MOV dword ptr [EDX + ESI*0x1 + 0x1c],EBX ; 0046be1e
    CMP EAX,EDI                         ; 0046be22
    JNZ 0x0046bdf9                      ; 0046be24
        ;   XREF to: 0046bdf9 (CONDITIONAL_JUMP)  ; LAB_0046bdf9
    JMP 0x0046bd80                      ; 0046be26
        ;   XREF to: 0046bd80 (UNCONDITIONAL_JUMP)  ; LAB_0046bd80
    XOR EDI,EDI                         ; 0046be2b
        ;   Label: LAB_0046be2b
    MOV ESI,0x46f9a6                    ; 0046be2d
    MOV dword ptr [0x01c6e2b4],EDI      ; 0046be32 | g_BIT_INTEGER32_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EDI      ; 0046be38 | g_INT_01c6e2b8
    MOV dword ptr [0x01c6b5cc],ESI      ; 0046be3e | g_PTR_01c6b5cc
    JMP 0x0046bdd9                      ; 0046be44
        ;   XREF to: 0046bdd9 (UNCONDITIONAL_JUMP)  ; LAB_0046bdd9
    MOV dword ptr [0x01c6b5cc],0x561713 ; 0046be46 | g_PTR_01c6b5cc
        ;   Label: LAB_0046be46
    JMP 0x0046bdc3                      ; 0046be50
        ;   XREF to: 0046bdc3 (UNCONDITIONAL_JUMP)  ; LAB_0046bdc3

