; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_FUN_00469f9c(CDemonRenderer *param_1,int param_2)
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

    LEA EDX,[EDX]                       ; 00469f9c
        ;   Label: engine_drender.cpp_FUN_00469f9c
    PUSH EBX                            ; 00469fa0
    PUSH ESI                            ; 00469fa1
    PUSH EBP                            ; 00469fa2
    MOV ESI,dword ptr [ESP + 0x10]      ; 00469fa3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00469fa7
    CMP dword ptr [ESI + 0xc],0x0       ; 00469fab
    JNZ 0x00469fe7                      ; 00469faf
        ;   XREF to: 00469fe7 (CONDITIONAL_JUMP)  ; LAB_00469fe7
    CMP dword ptr [ESI + 0x4],0x0       ; 00469fb1
        ;   Label: LAB_00469fb1
    JZ 0x00469ff9                       ; 00469fb5
        ;   XREF to: 00469ff9 (CONDITIONAL_JUMP)  ; LAB_00469ff9
    PUSH EDI                            ; 00469fb7
    XOR EBP,EBP                         ; 00469fb8
    MOV EDI,0x46e936                    ; 00469fba
    MOV dword ptr [0x01c38b54],EBP      ; 00469fbf | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EBP      ; 00469fc5 | DAT_01c38b58
    MOV dword ptr [0x01c35e6c],EDI      ; 00469fcb | DAT_01c35e6c
    POP EDI                             ; 00469fd1
    LEA EAX,[EBX + 0x18]                ; 00469fd2
        ;   Label: LAB_00469fd2
    PUSH EAX                            ; 00469fd5
    MOV EDX,dword ptr [EBX + 0x4]       ; 00469fd6
    PUSH EDX                            ; 00469fd9
    PUSH ESI                            ; 00469fda
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590 ; 00469fdb
        ;   XREF to: 00469590 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 00469fe0
    POP EBP                             ; 00469fe3
        ;   Label: LAB_00469fe3
    POP ESI                             ; 00469fe4
    POP EBX                             ; 00469fe5
    RET                                 ; 00469fe6
    LEA EAX,[EBX + 0x8]                 ; 00469fe7
        ;   Label: LAB_00469fe7
    PUSH EAX                            ; 00469fea
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 00469feb
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 00469ff0
    TEST EAX,EAX                        ; 00469ff3
    JZ 0x00469fe3                       ; 00469ff5
        ;   XREF to: 00469fe3 (CONDITIONAL_JUMP)  ; LAB_00469fe3
    JMP 0x00469fb1                      ; 00469ff7
        ;   XREF to: 00469fb1 (UNCONDITIONAL_JUMP)  ; LAB_00469fb1
    CMP dword ptr [0x006141c0],0x20     ; 00469ff9 | DAT_006141c0
        ;   Label: LAB_00469ff9
    JNZ 0x0046a024                      ; 0046a000
        ;   XREF to: 0046a024 (CONDITIONAL_JUMP)  ; LAB_0046a024
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 0046a002 | DAT_01c35e6c
    MOV ECX,0x6                         ; 0046a00c
        ;   Label: LAB_0046a00c
    MOV EDX,0x2cd                       ; 0046a011
    MOV dword ptr [0x01c38b58],ECX      ; 0046a016 | DAT_01c38b58
    MOV dword ptr [0x01c38b54],EDX      ; 0046a01c | DAT_01c38b54
    JMP 0x00469fd2                      ; 0046a022
        ;   XREF to: 00469fd2 (UNCONDITIONAL_JUMP)  ; LAB_00469fd2
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 0046a024 | DAT_01c35e6c
        ;   Label: LAB_0046a024
    JMP 0x0046a00c                      ; 0046a02e
        ;   XREF to: 0046a00c (UNCONDITIONAL_JUMP)  ; LAB_0046a00c

