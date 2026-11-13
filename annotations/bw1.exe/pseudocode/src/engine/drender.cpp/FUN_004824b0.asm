; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_FUN_004824b0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004824b0
        ;   Label: engine_drender.cpp_FUN_004824b0
    PUSH ESI                            ; 004824b1
    PUSH EBP                            ; 004824b2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004824b3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004824b7
    CMP dword ptr [ESI + 0xc],0x0       ; 004824bb
    JNZ 0x004824f7                      ; 004824bf
        ;   XREF to: 004824f7 (CONDITIONAL_JUMP)  ; LAB_004824f7
    CMP dword ptr [ESI + 0x4],0x0       ; 004824c1
        ;   Label: LAB_004824c1
    JZ 0x00482509                       ; 004824c5
        ;   XREF to: 00482509 (CONDITIONAL_JUMP)  ; LAB_00482509
    PUSH EDI                            ; 004824c7
    XOR EBP,EBP                         ; 004824c8
    MOV EDI,0x486e26                    ; 004824ca
    MOV dword ptr [0x01c51d14],EBP      ; 004824cf | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EBP      ; 004824d5 | DAT_01c51d18
    MOV dword ptr [0x01c4f02c],EDI      ; 004824db | DAT_01c4f02c
    POP EDI                             ; 004824e1
    LEA EAX,[EBX + 0x18]                ; 004824e2
        ;   Label: LAB_004824e2
    PUSH EAX                            ; 004824e5
    MOV EDX,dword ptr [EBX + 0x4]       ; 004824e6
    PUSH EDX                            ; 004824e9
    PUSH ESI                            ; 004824ea
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0 ; 004824eb
        ;   XREF to: 00481aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 004824f0
    POP EBP                             ; 004824f3
        ;   Label: LAB_004824f3
    POP ESI                             ; 004824f4
    POP EBX                             ; 004824f5
    RET                                 ; 004824f6
    LEA EAX,[EBX + 0x8]                 ; 004824f7
        ;   Label: LAB_004824f7
    PUSH EAX                            ; 004824fa
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 004824fb
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 00482500
    TEST EAX,EAX                        ; 00482503
    JZ 0x004824f3                       ; 00482505
        ;   XREF to: 004824f3 (CONDITIONAL_JUMP)  ; LAB_004824f3
    JMP 0x004824c1                      ; 00482507
        ;   XREF to: 004824c1 (UNCONDITIONAL_JUMP)  ; LAB_004824c1
    CMP dword ptr [0x0061b4a0],0x20     ; 00482509 | DAT_0061b4a0
        ;   Label: LAB_00482509
    JNZ 0x00482534                      ; 00482510
        ;   XREF to: 00482534 (CONDITIONAL_JUMP)  ; LAB_00482534
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00482512 | DAT_01c4f02c
    MOV ECX,0x6                         ; 0048251c
        ;   Label: LAB_0048251c
    MOV EDX,0x2cd                       ; 00482521
    MOV dword ptr [0x01c51d18],ECX      ; 00482526 | DAT_01c51d18
    MOV dword ptr [0x01c51d14],EDX      ; 0048252c | DAT_01c51d14
    JMP 0x004824e2                      ; 00482532
        ;   XREF to: 004824e2 (UNCONDITIONAL_JUMP)  ; LAB_004824e2
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00482534 | DAT_01c4f02c
        ;   Label: LAB_00482534
    JMP 0x0048251c                      ; 0048253e
        ;   XREF to: 0048251c (UNCONDITIONAL_JUMP)  ; LAB_0048251c

