; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_FUN_0046bb8c(CDemonRenderer *param_1,int param_2)
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

    LEA EDX,[EDX]                       ; 0046bb8c
        ;   Label: engine_drender.cpp_FUN_0046bb8c
    PUSH EBX                            ; 0046bb90
    PUSH ESI                            ; 0046bb91
    PUSH EBP                            ; 0046bb92
    MOV ESI,dword ptr [ESP + 0x10]      ; 0046bb93
    MOV EBX,dword ptr [ESP + 0x14]      ; 0046bb97
    CMP dword ptr [ESI + 0xc],0x0       ; 0046bb9b
    JNZ 0x0046bbd7                      ; 0046bb9f
        ;   XREF to: 0046bbd7 (CONDITIONAL_JUMP)  ; LAB_0046bbd7
    CMP dword ptr [ESI + 0x4],0x0       ; 0046bba1
        ;   Label: LAB_0046bba1
    JZ 0x0046bbe9                       ; 0046bba5
        ;   XREF to: 0046bbe9 (CONDITIONAL_JUMP)  ; LAB_0046bbe9
    PUSH EDI                            ; 0046bba7
    XOR EBP,EBP                         ; 0046bba8
    MOV EDI,0x46f9a6                    ; 0046bbaa
    MOV dword ptr [0x01c6e2b4],EBP      ; 0046bbaf | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EBP      ; 0046bbb5 | DAT_01c6e2b8
    MOV dword ptr [0x01c6b5cc],EDI      ; 0046bbbb | DAT_01c6b5cc
    POP EDI                             ; 0046bbc1
    LEA EAX,[EBX + 0x18]                ; 0046bbc2
        ;   Label: LAB_0046bbc2
    PUSH EAX                            ; 0046bbc5
    MOV EDX,dword ptr [EBX + 0x4]       ; 0046bbc6
    PUSH EDX                            ; 0046bbc9
    PUSH ESI                            ; 0046bbca
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160 ; 0046bbcb
        ;   XREF to: 0046b160 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046bbd0
    POP EBP                             ; 0046bbd3
        ;   Label: LAB_0046bbd3
    POP ESI                             ; 0046bbd4
    POP EBX                             ; 0046bbd5
    RET                                 ; 0046bbd6
    LEA EAX,[EBX + 0x8]                 ; 0046bbd7
        ;   Label: LAB_0046bbd7
    PUSH EAX                            ; 0046bbda
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0046bbdb
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 0046bbe0
    TEST EAX,EAX                        ; 0046bbe3
    JZ 0x0046bbd3                       ; 0046bbe5
        ;   XREF to: 0046bbd3 (CONDITIONAL_JUMP)  ; LAB_0046bbd3
    JMP 0x0046bba1                      ; 0046bbe7
        ;   XREF to: 0046bba1 (UNCONDITIONAL_JUMP)  ; LAB_0046bba1
    CMP dword ptr [0x005fba20],0x20     ; 0046bbe9 | DAT_005fba20
        ;   Label: LAB_0046bbe9
    JNZ 0x0046bc14                      ; 0046bbf0
        ;   XREF to: 0046bc14 (CONDITIONAL_JUMP)  ; LAB_0046bc14
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 0046bbf2 | DAT_01c6b5cc
    MOV ECX,0x6                         ; 0046bbfc
        ;   Label: LAB_0046bbfc
    MOV EDX,0x2cd                       ; 0046bc01
    MOV dword ptr [0x01c6e2b8],ECX      ; 0046bc06 | DAT_01c6e2b8
    MOV dword ptr [0x01c6e2b4],EDX      ; 0046bc0c | DAT_01c6e2b4
    JMP 0x0046bbc2                      ; 0046bc12
        ;   XREF to: 0046bbc2 (UNCONDITIONAL_JUMP)  ; LAB_0046bbc2
    MOV dword ptr [0x01c6b5cc],0x561713 ; 0046bc14 | DAT_01c6b5cc
        ;   Label: LAB_0046bc14
    JMP 0x0046bbfc                      ; 0046bc1e
        ;   XREF to: 0046bbfc (UNCONDITIONAL_JUMP)  ; LAB_0046bbfc

