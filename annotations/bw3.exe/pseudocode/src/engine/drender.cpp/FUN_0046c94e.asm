; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_FUN_0046c94e(CDemonRenderer *param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
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

    MOV EBX,EBX                         ; 0046c94e
        ;   Label: engine_drender.cpp_FUN_0046c94e
    PUSH EBX                            ; 0046c950
    PUSH ESI                            ; 0046c951
    PUSH EDI                            ; 0046c952
    PUSH EBP                            ; 0046c953
    MOV EBP,dword ptr [ESP + 0x14]      ; 0046c954
    MOV ESI,dword ptr [ESP + 0x18]      ; 0046c958
    CMP dword ptr [EBP + 0xc],0x0       ; 0046c95c
    JNZ 0x0046c9d1                      ; 0046c960
        ;   XREF to: 0046c9d1 (CONDITIONAL_JUMP)  ; LAB_0046c9d1
    MOV ECX,0xffffffff                  ; 0046c966
        ;   Label: LAB_0046c966
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046c96b
    XOR EDX,EDX                         ; 0046c96e
    TEST EBX,EBX                        ; 0046c970
    JLE 0x0046c990                      ; 0046c972
        ;   XREF to: 0046c990 (CONDITIONAL_JUMP)  ; LAB_0046c990
    MOV EAX,ESI                         ; 0046c974
    MOV EDI,dword ptr [EBP]             ; 0046c976
    MOV EBX,dword ptr [EAX + 0x18]      ; 0046c979
        ;   Label: LAB_0046c979
    IMUL EBX,EBX,0x30                   ; 0046c97c
    INC EDX                             ; 0046c97f
    AND ECX,dword ptr [EDI + EBX*0x1 + 0x10] ; 0046c980
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046c984
    ADD EAX,0x4                         ; 0046c987
    CMP EDX,EBX                         ; 0046c98a
    JL 0x0046c979                       ; 0046c98c
        ;   XREF to: 0046c979 (CONDITIONAL_JUMP)  ; LAB_0046c979
    MOV EAX,EAX                         ; 0046c98e
    TEST ECX,0x80000000                 ; 0046c990
        ;   Label: LAB_0046c990
    JZ 0x0046c99d                       ; 0046c996
        ;   XREF to: 0046c99d (CONDITIONAL_JUMP)  ; LAB_0046c99d
    TEST CL,0x1f                        ; 0046c998
    JNZ 0x0046c9cc                      ; 0046c99b
        ;   XREF to: 0046c9cc (CONDITIONAL_JUMP)  ; LAB_0046c9cc
    CMP dword ptr [EBP + 0x4],0x0       ; 0046c99d
        ;   Label: LAB_0046c99d
    JZ 0x0046c9e3                       ; 0046c9a1
        ;   XREF to: 0046c9e3 (CONDITIONAL_JUMP)  ; LAB_0046c9e3
    XOR EDX,EDX                         ; 0046c9a3
    MOV EAX,0x46f9a6                    ; 0046c9a5
    MOV dword ptr [0x01c6e2b4],EDX      ; 0046c9aa | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EDX      ; 0046c9b0 | DAT_01c6e2b8
    MOV [0x01c6b5cc],EAX                ; 0046c9b6 | DAT_01c6b5cc
    LEA EAX,[ESI + 0x18]                ; 0046c9bb
        ;   Label: LAB_0046c9bb
    PUSH EAX                            ; 0046c9be
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046c9bf
    PUSH EBX                            ; 0046c9c2
    PUSH EBP                            ; 0046c9c3
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160 ; 0046c9c4
        ;   XREF to: 0046b160 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046c9c9
    POP EBP                             ; 0046c9cc
        ;   Label: LAB_0046c9cc
    POP EDI                             ; 0046c9cd
    POP ESI                             ; 0046c9ce
    POP EBX                             ; 0046c9cf
    RET                                 ; 0046c9d0
    LEA EAX,[ESI + 0x8]                 ; 0046c9d1
        ;   Label: LAB_0046c9d1
    PUSH EAX                            ; 0046c9d4
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0046c9d5
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 0046c9da
    TEST EAX,EAX                        ; 0046c9dd
    JZ 0x0046c9cc                       ; 0046c9df
        ;   XREF to: 0046c9cc (CONDITIONAL_JUMP)  ; LAB_0046c9cc
    JMP 0x0046c966                      ; 0046c9e1
        ;   XREF to: 0046c966 (UNCONDITIONAL_JUMP)  ; LAB_0046c966
    CMP dword ptr [0x005fba20],0x20     ; 0046c9e3 | DAT_005fba20
        ;   Label: LAB_0046c9e3
    JNZ 0x0046ca0b                      ; 0046c9ea
        ;   XREF to: 0046ca0b (CONDITIONAL_JUMP)  ; LAB_0046ca0b
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 0046c9ec | DAT_01c6b5cc
    XOR EDI,EDI                         ; 0046c9f6
        ;   Label: LAB_0046c9f6
    MOV EBX,0x327                       ; 0046c9f8
    MOV dword ptr [0x01c6e2b8],EDI      ; 0046c9fd | DAT_01c6e2b8
    MOV dword ptr [0x01c6e2b4],EBX      ; 0046ca03 | DAT_01c6e2b4
    JMP 0x0046c9bb                      ; 0046ca09
        ;   XREF to: 0046c9bb (UNCONDITIONAL_JUMP)  ; LAB_0046c9bb
    MOV dword ptr [0x01c6b5cc],0x561713 ; 0046ca0b | DAT_01c6b5cc
        ;   Label: LAB_0046ca0b
    JMP 0x0046c9f6                      ; 0046ca15
        ;   XREF to: 0046c9f6 (UNCONDITIONAL_JUMP)  ; LAB_0046c9f6

