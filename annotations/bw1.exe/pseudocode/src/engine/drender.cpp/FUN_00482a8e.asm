; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_FUN_00482a8e(CDemonRenderer *param_1,int param_2)
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

    MOV EAX,EAX                         ; 00482a8e
        ;   Label: engine_drender.cpp_FUN_00482a8e
    PUSH EBX                            ; 00482a90
    PUSH ESI                            ; 00482a91
    PUSH EDI                            ; 00482a92
    PUSH EBP                            ; 00482a93
    SUB ESP,0x4                         ; 00482a94
    MOV EBX,dword ptr [ESP + 0x18]      ; 00482a97
    CMP dword ptr [EBX + 0xc],0x0       ; 00482a9b
    JNZ 0x00482b4e                      ; 00482a9f
        ;   XREF to: 00482b4e (CONDITIONAL_JUMP)  ; LAB_00482b4e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00482aa5
        ;   Label: LAB_00482aa5
    MOV ECX,0xffffffff                  ; 00482aa9
    XOR EDX,EDX                         ; 00482aae
    MOV ESI,dword ptr [EAX + 0x4]       ; 00482ab0
    MOV dword ptr [ESP],ECX             ; 00482ab3
    TEST ESI,ESI                        ; 00482ab6
    JLE 0x00482af0                      ; 00482ab8
        ;   XREF to: 00482af0 (CONDITIONAL_JUMP)  ; LAB_00482af0
    XOR ECX,ECX                         ; 00482aba
    MOV ESI,dword ptr [EAX + 0x18]      ; 00482abc
        ;   Label: LAB_00482abc
    MOV dword ptr [ECX + 0x1bc1240],ESI ; 00482abf
    IMUL ESI,ESI,0x30                   ; 00482ac5
    MOV EDI,dword ptr [EBX]             ; 00482ac8
    MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10] ; 00482aca
    MOV EDI,dword ptr [ESP]             ; 00482ace
    ADD ECX,0x4                         ; 00482ad1
    AND EDI,ESI                         ; 00482ad4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00482ad6
    ADD EAX,0xc                         ; 00482ada
    INC EDX                             ; 00482add
    MOV EBP,dword ptr [ESI + 0x4]       ; 00482ade
    MOV dword ptr [ESP],EDI             ; 00482ae1
    CMP EDX,EBP                         ; 00482ae4
    JL 0x00482abc                       ; 00482ae6
        ;   XREF to: 00482abc (CONDITIONAL_JUMP)  ; LAB_00482abc
    LEA EAX,[EAX]                       ; 00482ae8
    MOV EDX,EDX                         ; 00482aee
    TEST byte ptr [ESP + 0x3],0x80      ; 00482af0
        ;   Label: LAB_00482af0
    JZ 0x00482afd                       ; 00482af5
        ;   XREF to: 00482afd (CONDITIONAL_JUMP)  ; LAB_00482afd
    TEST byte ptr [ESP],0x1f            ; 00482af7
    JNZ 0x00482b46                      ; 00482afb
        ;   XREF to: 00482b46 (CONDITIONAL_JUMP)  ; LAB_00482b46
    CMP dword ptr [EBX + 0x4],0x0       ; 00482afd
        ;   Label: LAB_00482afd
    JZ 0x00482b67                       ; 00482b01
        ;   XREF to: 00482b67 (CONDITIONAL_JUMP)  ; LAB_00482b67
    MOV ESI,0x1                         ; 00482b03
    MOV ECX,0x486ed7                    ; 00482b08
    XOR EDI,EDI                         ; 00482b0d
    MOV dword ptr [0x01c51d14],ESI      ; 00482b0f | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EDI      ; 00482b15 | DAT_01c51d18
    MOV dword ptr [0x01c4f02c],ECX      ; 00482b1b | DAT_01c4f02c
    LEA EAX,[EAX]                       ; 00482b21
    LEA EDX,[EDX]                       ; 00482b27
    LEA EAX,[EAX]                       ; 00482b2d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00482b30
        ;   Label: LAB_00482b30
    PUSH 0x1bc1240                      ; 00482b34
    MOV EDX,dword ptr [EAX + 0x4]       ; 00482b39
    PUSH EDX                            ; 00482b3c
    PUSH EBX                            ; 00482b3d
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0 ; 00482b3e
        ;   XREF to: 00481aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 00482b43
    ADD ESP,0x4                         ; 00482b46
        ;   Label: LAB_00482b46
    POP EBP                             ; 00482b49
    POP EDI                             ; 00482b4a
    POP ESI                             ; 00482b4b
    POP EBX                             ; 00482b4c
    RET                                 ; 00482b4d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00482b4e
        ;   Label: LAB_00482b4e
    ADD EAX,0x8                         ; 00482b52
    PUSH EAX                            ; 00482b55
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00482b56
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 00482b5b
    TEST EAX,EAX                        ; 00482b5e
    JZ 0x00482b46                       ; 00482b60
        ;   XREF to: 00482b46 (CONDITIONAL_JUMP)  ; LAB_00482b46
    JMP 0x00482aa5                      ; 00482b62
        ;   XREF to: 00482aa5 (UNCONDITIONAL_JUMP)  ; LAB_00482aa5
    CMP dword ptr [0x0061b4a0],0x20     ; 00482b67 | DAT_0061b4a0
        ;   Label: LAB_00482b67
    JNZ 0x00482bd9                      ; 00482b6e
        ;   XREF to: 00482bd9 (CONDITIONAL_JUMP)  ; LAB_00482bd9
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00482b70 | DAT_01c4f02c
    MOV EBP,0x6                         ; 00482b7a
        ;   Label: LAB_00482b7a
    MOV EDI,0x3e7                       ; 00482b7f
    MOV EAX,dword ptr [EBX + 0x20]      ; 00482b84
    MOV dword ptr [0x01c51d18],EBP      ; 00482b87 | DAT_01c51d18
    MOV dword ptr [0x01c51d14],EDI      ; 00482b8d | DAT_01c51d14
    TEST EAX,EAX                        ; 00482b93
    JNZ 0x00482b30                      ; 00482b95
        ;   XREF to: 00482b30 (CONDITIONAL_JUMP)  ; LAB_00482b30
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00482b97
    MOV EDX,dword ptr [EAX + 0x4]       ; 00482b9b
    XOR ECX,ECX                         ; 00482b9e
    TEST EDX,EDX                        ; 00482ba0
    JLE 0x00482b30                      ; 00482ba2
        ;   XREF to: 00482b30 (CONDITIONAL_JUMP)  ; LAB_00482b30
    XOR EDX,EDX                         ; 00482ba4
    MOV ESI,dword ptr [EDX + 0x1bc1240] ; 00482ba6
        ;   Label: LAB_00482ba6
    IMUL ESI,ESI,0x30                   ; 00482bac
    MOV EDI,dword ptr [EBX]             ; 00482baf
    MOV EBP,dword ptr [EAX + 0x1c]      ; 00482bb1
    MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP ; 00482bb4
    MOV EDI,dword ptr [EBX]             ; 00482bb8
    ADD EDI,ESI                         ; 00482bba
    MOV ESI,dword ptr [EAX + 0x20]      ; 00482bbc
    MOV dword ptr [EDI + 0x1c],ESI      ; 00482bbf
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00482bc2
    ADD EAX,0xc                         ; 00482bc6
    INC ECX                             ; 00482bc9
    MOV EBP,dword ptr [ESI + 0x4]       ; 00482bca
    ADD EDX,0x4                         ; 00482bcd
    CMP ECX,EBP                         ; 00482bd0
    JL 0x00482ba6                       ; 00482bd2
        ;   XREF to: 00482ba6 (CONDITIONAL_JUMP)  ; LAB_00482ba6
    JMP 0x00482b30                      ; 00482bd4
        ;   XREF to: 00482b30 (UNCONDITIONAL_JUMP)  ; LAB_00482b30
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00482bd9 | DAT_01c4f02c
        ;   Label: LAB_00482bd9
    JMP 0x00482b7a                      ; 00482be3
        ;   XREF to: 00482b7a (UNCONDITIONAL_JUMP)  ; LAB_00482b7a

