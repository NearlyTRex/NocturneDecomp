; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_clipPolygonStage3_FUN_005b9c30(void)
;
;
; Referenced Globals:
;   undefined1* switchdataD_005b9c14 = 005b9c92
;   undefined1* PTR_caseD_3_005b9c20 = 005b9cd7
;   undefined4 DAT_02c9d2f0
;   undefined4 DAT_02c9d2f4
;   undefined4 DAT_02c9defc
;   undefined4 DAT_02c9df00
;   undefined4 DAT_02c9e4f8
;   undefined4 DAT_02c9e4fc
;   undefined4 DAT_02c9e504
;
; Called Functions:
;   core_xform.cpp_clipInterpolateTopPlane_FUN_005b97b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b9c30
        ;   Label: core_xform.cpp_clipPolygonStage3_FUN_005b9c30
    PUSH ESI                            ; 005b9c31
    PUSH EDI                            ; 005b9c32
    PUSH EBP                            ; 005b9c33
    SUB ESP,0x4                         ; 005b9c34
    XOR EDX,EDX                         ; 005b9c37
    MOV ECX,dword ptr [0x02c9d2f0]      ; 005b9c39 | DAT_02c9d2f0
    MOV dword ptr [ESP],EDX             ; 005b9c3f
    TEST ECX,ECX                        ; 005b9c42
    JLE 0x005b9cef                      ; 005b9c44
        ;   XREF to: 005b9cef (CONDITIONAL_JUMP)  ; LAB_005b9cef
    MOV EBX,0x2c9def8                   ; 005b9c4a
    MOV EAX,dword ptr [ESP]             ; 005b9c4f
        ;   Label: LAB_005b9c4f
    MOV EBP,dword ptr [0x02c9d2f0]      ; 005b9c52 | DAT_02c9d2f0
    INC EAX                             ; 005b9c58
    CMP EAX,EBP                         ; 005b9c59
    JNZ 0x005b9c5f                      ; 005b9c5b
        ;   XREF to: 005b9c5f (CONDITIONAL_JUMP)  ; LAB_005b9c5f
    XOR EAX,EBP                         ; 005b9c5d
    IMUL EAX,EAX,0x30                   ; 005b9c5f
        ;   Label: LAB_005b9c5f
    MOV EBP,0x2c9def8                   ; 005b9c62
    MOV EDX,EBX                         ; 005b9c67
    MOV EDI,dword ptr [EBX + 0x4]       ; 005b9c69
    MOV ECX,dword ptr [EBX + 0x8]       ; 005b9c6c
    ADD EBP,EAX                         ; 005b9c6f
    XOR EAX,EAX                         ; 005b9c71
    CMP EDI,ECX                         ; 005b9c73
    JL 0x005b9c7c                       ; 005b9c75
        ;   XREF to: 005b9c7c (CONDITIONAL_JUMP)  ; LAB_005b9c7c
    MOV EAX,0x1                         ; 005b9c77
    MOV ESI,dword ptr [EBP + 0x8]       ; 005b9c7c | DAT_02c9df00
        ;   Label: LAB_005b9c7c
    CMP ESI,dword ptr [EBP + 0x4]       ; 005b9c7f | DAT_02c9defc
    JG 0x005b9c86                       ; 005b9c82
        ;   XREF to: 005b9c86 (CONDITIONAL_JUMP)  ; LAB_005b9c86
    OR AL,0x2                           ; 005b9c84
    CMP EAX,0x3                         ; 005b9c86
        ;   Label: LAB_005b9c86
    JA 0x005b9cd7                       ; 005b9c89
        ;   XREF to: 005b9cd7 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x5b9c14]  ; 005b9c8b | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x02c9d2f4],0x30 ; 005b9c92 | DAT_02c9d2f4
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 005b9c99
    MOV ESI,EDX                         ; 005b9c9e
    ADD EDI,0x2c9e4f8                   ; 005b9ca0
    TEST EDI,0x7                        ; 005b9ca6
    JZ 0x005b9cb4                       ; 005b9cac
        ;   XREF to: 005b9cb4 (CONDITIONAL_JUMP)  ; LAB_005b9cb4
    MOVSD ES:EDI,ESI                    ; 005b9cae | DAT_02c9e4f8
    SUB ECX,0x4                         ; 005b9caf
    JLE 0x005b9cd1                      ; 005b9cb2
        ;   XREF to: 005b9cd1 (CONDITIONAL_JUMP)  ; LAB_005b9cd1
    SUB ECX,0x8                         ; 005b9cb4
        ;   Label: LAB_005b9cb4
    JL 0x005b9cc5                       ; 005b9cb7
        ;   XREF to: 005b9cc5 (CONDITIONAL_JUMP)  ; LAB_005b9cc5
    FILD qword ptr [ESI]                ; 005b9cb9
    ADD ESI,0x8                         ; 005b9cbb
    FISTP qword ptr [EDI]               ; 005b9cbe | DAT_02c9e4fc | DAT_02c9e504 | DAT_02c9e4f8
    ADD EDI,0x8                         ; 005b9cc0
    JMP 0x005b9cb4                      ; 005b9cc3
        ;   XREF to: 005b9cb4 (UNCONDITIONAL_JUMP)  ; LAB_005b9cb4
    ADD ECX,0x8                         ; 005b9cc5
        ;   Label: LAB_005b9cc5
    JLE 0x005b9cd1                      ; 005b9cc8
        ;   XREF to: 005b9cd1 (CONDITIONAL_JUMP)  ; LAB_005b9cd1
    MOVSD ES:EDI,ESI                    ; 005b9cca | DAT_02c9e504
    SUB ECX,0x4                         ; 005b9ccb
    JLE 0x005b9cd1                      ; 005b9cce
        ;   XREF to: 005b9cd1 (CONDITIONAL_JUMP)  ; LAB_005b9cd1
    MOVSD ES:EDI,ESI                    ; 005b9cd0
    INC dword ptr [0x02c9d2f4]          ; 005b9cd1 | DAT_02c9d2f4
        ;   Label: LAB_005b9cd1
    MOV ESI,dword ptr [ESP]             ; 005b9cd7
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x02c9d2f0]      ; 005b9cda | DAT_02c9d2f0
    INC ESI                             ; 005b9ce0
    ADD EBX,0x30                        ; 005b9ce1
    MOV dword ptr [ESP],ESI             ; 005b9ce4
    CMP ESI,EDI                         ; 005b9ce7
    JL 0x005b9c4f                       ; 005b9ce9
        ;   XREF to: 005b9c4f (CONDITIONAL_JUMP)  ; LAB_005b9c4f
    ADD ESP,0x4                         ; 005b9cef
        ;   Label: LAB_005b9cef
    POP EBP                             ; 005b9cf2
    POP EDI                             ; 005b9cf3
    POP ESI                             ; 005b9cf4
    POP EBX                             ; 005b9cf5
    RET                                 ; 005b9cf6
    IMUL EAX,dword ptr [0x02c9d2f4],0x30 ; 005b9cf7 | DAT_02c9d2f4
        ;   Label: caseD_1
    ADD EAX,0x2c9e4f8                   ; 005b9cfe
    PUSH EAX                            ; 005b9d03
    PUSH EDX                            ; 005b9d04
    PUSH EBP                            ; 005b9d05
    CALL core_xform.cpp_clipInterpolateTopPlane_FUN_005b97b0 ; 005b9d06
        ;   XREF to: 005b97b0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateTopPlane_FUN_005b97b0(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV ESI,dword ptr [0x02c9d2f4]      ; 005b9d0b | DAT_02c9d2f4
    INC ESI                             ; 005b9d11
    ADD ESP,0xc                         ; 005b9d12
    MOV dword ptr [0x02c9d2f4],ESI      ; 005b9d15 | DAT_02c9d2f4
    JMP 0x005b9cd7                      ; 005b9d1b
        ;   XREF to: 005b9cd7 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x02c9d2f4],0x30 ; 005b9d1d | DAT_02c9d2f4
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 005b9d24
    MOV ESI,EDX                         ; 005b9d29
    ADD EDI,0x2c9e4f8                   ; 005b9d2b
    TEST EDI,0x7                        ; 005b9d31
    JZ 0x005b9d3f                       ; 005b9d37
        ;   XREF to: 005b9d3f (CONDITIONAL_JUMP)  ; LAB_005b9d3f
    MOVSD ES:EDI,ESI                    ; 005b9d39 | DAT_02c9e4f8
    SUB ECX,0x4                         ; 005b9d3a
    JLE 0x005b9d5c                      ; 005b9d3d
        ;   XREF to: 005b9d5c (CONDITIONAL_JUMP)  ; LAB_005b9d5c
    SUB ECX,0x8                         ; 005b9d3f
        ;   Label: LAB_005b9d3f
    JL 0x005b9d50                       ; 005b9d42
        ;   XREF to: 005b9d50 (CONDITIONAL_JUMP)  ; LAB_005b9d50
    FILD qword ptr [ESI]                ; 005b9d44
    ADD ESI,0x8                         ; 005b9d46
    FISTP qword ptr [EDI]               ; 005b9d49 | DAT_02c9e4fc | DAT_02c9e504 | DAT_02c9e4f8
    ADD EDI,0x8                         ; 005b9d4b
    JMP 0x005b9d3f                      ; 005b9d4e
        ;   XREF to: 005b9d3f (UNCONDITIONAL_JUMP)  ; LAB_005b9d3f
    ADD ECX,0x8                         ; 005b9d50
        ;   Label: LAB_005b9d50
    JLE 0x005b9d5c                      ; 005b9d53
        ;   XREF to: 005b9d5c (CONDITIONAL_JUMP)  ; LAB_005b9d5c
    MOVSD ES:EDI,ESI                    ; 005b9d55 | DAT_02c9e504
    SUB ECX,0x4                         ; 005b9d56
    JLE 0x005b9d5c                      ; 005b9d59
        ;   XREF to: 005b9d5c (CONDITIONAL_JUMP)  ; LAB_005b9d5c
    MOVSD ES:EDI,ESI                    ; 005b9d5b
    MOV ECX,dword ptr [0x02c9d2f4]      ; 005b9d5c | DAT_02c9d2f4
        ;   Label: LAB_005b9d5c
    INC ECX                             ; 005b9d62
    MOV dword ptr [0x02c9d2f4],ECX      ; 005b9d63 | DAT_02c9d2f4
    IMUL EAX,ECX,0x30                   ; 005b9d69
    ADD EAX,0x2c9e4f8                   ; 005b9d6c
    PUSH EAX                            ; 005b9d71
    PUSH EBP                            ; 005b9d72
    PUSH EDX                            ; 005b9d73
    CALL core_xform.cpp_clipInterpolateTopPlane_FUN_005b97b0 ; 005b9d74
        ;   XREF to: 005b97b0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateTopPlane_FUN_005b97b0(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV EDI,dword ptr [0x02c9d2f4]      ; 005b9d79 | DAT_02c9d2f4
    INC EDI                             ; 005b9d7f
    ADD ESP,0xc                         ; 005b9d80
    MOV dword ptr [0x02c9d2f4],EDI      ; 005b9d83 | DAT_02c9d2f4
    JMP 0x005b9cd7                      ; 005b9d89
        ;   XREF to: 005b9cd7 (UNCONDITIONAL_JUMP)  ; caseD_3

