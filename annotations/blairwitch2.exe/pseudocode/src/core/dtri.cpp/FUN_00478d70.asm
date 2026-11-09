; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtri_cpp_FUN_00478d70(float param_1)
;
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_00478d58 = 00478e1a
;   undefined1* PTR_caseD_3_00478d60 = 00478dff
;   undefined4 DAT_01c2200c
;   undefined4 DAT_01c220d0
;
; Called Functions:
;   core_dtri.cpp_clipLineToPlane_FUN_00478900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478d70
        ;   Label: core_dtri.cpp_FUN_00478d70
    PUSH ESI                            ; 00478d71
    PUSH EDI                            ; 00478d72
    PUSH EBP                            ; 00478d73
    MOV EBP,ESP                         ; 00478d74
    SUB ESP,0x4                         ; 00478d76
    AND ESP,0xfffffff8                  ; 00478d79
    MOV EBX,dword ptr [0x01c220d0]      ; 00478d7c | DAT_01c220d0
    MOV EDX,dword ptr [0x01c2200c]      ; 00478d82 | DAT_01c2200c
    XOR ESI,ESI                         ; 00478d88
    TEST EDX,EDX                        ; 00478d8a
    JLE 0x00478e0d                      ; 00478d8c
        ;   XREF to: 00478e0d (CONDITIONAL_JUMP)  ; LAB_00478e0d
    MOV EDI,0x1c22010                   ; 00478d92
    MOV EAX,[0x01c2200c]                ; 00478d97 | DAT_01c2200c
        ;   Label: LAB_00478d97
    LEA ECX,[ESI + 0x1]                 ; 00478d9c
    CMP ECX,EAX                         ; 00478d9f
    JNZ 0x00478da5                      ; 00478da1
        ;   XREF to: 00478da5 (CONDITIONAL_JUMP)  ; LAB_00478da5
    XOR ECX,EAX                         ; 00478da3
    IMUL ECX,ECX,0xc                    ; 00478da5
        ;   Label: LAB_00478da5
    MOV EAX,0x1c22010                   ; 00478da8
    FLD float ptr [EDI]                 ; 00478dad
    ADD EAX,ECX                         ; 00478daf
    MOV EDX,EDI                         ; 00478db1
    MOV dword ptr [ESP],EAX             ; 00478db3
    XOR ECX,ECX                         ; 00478db6
    FCOMP float ptr [EBP + 0x14]        ; 00478db8
    FNSTSW AX                           ; 00478dbb
    SAHF                                ; 00478dbd
    JBE 0x00478dc5                      ; 00478dbe
        ;   XREF to: 00478dc5 (CONDITIONAL_JUMP)  ; LAB_00478dc5
    MOV ECX,0x1                         ; 00478dc0
    MOV EAX,dword ptr [ESP]             ; 00478dc5
        ;   Label: LAB_00478dc5
    FLD float ptr [EAX]                 ; 00478dc8
    FCOMP float ptr [EBP + 0x14]        ; 00478dca
    FNSTSW AX                           ; 00478dcd
    SAHF                                ; 00478dcf
    JBE 0x00478dd5                      ; 00478dd0
        ;   XREF to: 00478dd5 (CONDITIONAL_JUMP)  ; LAB_00478dd5
    OR CL,0x2                           ; 00478dd2
    CMP ECX,0x3                         ; 00478dd5
        ;   Label: LAB_00478dd5
    JA 0x00478dff                       ; 00478dd8
        ;   XREF to: 00478dff (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x478d54]  ; 00478dda | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 00478de1
        ;   Label: caseD_0
    ADD ECX,0x1c220d4                   ; 00478de4
    CMP ECX,EDX                         ; 00478dea
    JZ 0x00478dfe                       ; 00478dec
        ;   XREF to: 00478dfe (CONDITIONAL_JUMP)  ; LAB_00478dfe
    MOV EAX,dword ptr [EDX]             ; 00478dee
    MOV dword ptr [ECX],EAX             ; 00478df0
    MOV EAX,dword ptr [EDX + 0x4]       ; 00478df2
    MOV dword ptr [ECX + 0x4],EAX       ; 00478df5
    MOV EAX,dword ptr [EDX + 0x8]       ; 00478df8
    MOV dword ptr [ECX + 0x8],EAX       ; 00478dfb
    INC EBX                             ; 00478dfe
        ;   Label: LAB_00478dfe
    MOV ECX,dword ptr [0x01c2200c]      ; 00478dff | DAT_01c2200c
        ;   Label: caseD_3
    INC ESI                             ; 00478e05
    ADD EDI,0xc                         ; 00478e06
    CMP ESI,ECX                         ; 00478e09
    JL 0x00478d97                       ; 00478e0b
        ;   XREF to: 00478d97 (CONDITIONAL_JUMP)  ; LAB_00478d97
    MOV dword ptr [0x01c220d0],EBX      ; 00478e0d | DAT_01c220d0
        ;   Label: LAB_00478e0d
    MOV ESP,EBP                         ; 00478e13
    POP EBP                             ; 00478e15
    POP EDI                             ; 00478e16
    POP ESI                             ; 00478e17
    POP EBX                             ; 00478e18
    RET                                 ; 00478e19
    IMUL ECX,EBX,0xc                    ; 00478e1a
        ;   Label: caseD_1
    FLD float ptr [EBP + 0x14]          ; 00478e1d
    SUB ESP,0x8                         ; 00478e20
    FCHS                                ; 00478e23
    FSTP double ptr [ESP]               ; 00478e25
    PUSH 0x0                            ; 00478e28
    PUSH 0x0                            ; 00478e2a
    PUSH 0x0                            ; 00478e2c
    PUSH 0x0                            ; 00478e2e
    PUSH 0x3ff00000                     ; 00478e30
    PUSH 0x0                            ; 00478e35
    ADD ECX,0x1c220d4                   ; 00478e37
    PUSH ECX                            ; 00478e3d
    PUSH EDX                            ; 00478e3e
    MOV EAX,dword ptr [ESP + 0x28]      ; 00478e3f
    PUSH EAX                            ; 00478e43
    MOV dword ptr [0x01c220d0],EBX      ; 00478e44 | DAT_01c220d0
    CALL core_dtri.cpp_clipLineToPlane_FUN_00478900 ; 00478e4a
        ;   XREF to: 00478900 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_clipLineToPlane_FUN_00478900()
    MOV EBX,dword ptr [0x01c220d0]      ; 00478e4f | DAT_01c220d0
    ADD ESP,0x2c                        ; 00478e55
    JMP 0x00478dfe                      ; 00478e58
        ;   XREF to: 00478dfe (UNCONDITIONAL_JUMP)  ; LAB_00478dfe
    IMUL ECX,EBX,0xc                    ; 00478e5a
        ;   Label: caseD_2
    ADD ECX,0x1c220d4                   ; 00478e5d
    CMP ECX,EDX                         ; 00478e63
    JZ 0x00478e77                       ; 00478e65
        ;   XREF to: 00478e77 (CONDITIONAL_JUMP)  ; LAB_00478e77
    MOV EAX,dword ptr [EDX]             ; 00478e67
    MOV dword ptr [ECX],EAX             ; 00478e69
    MOV EAX,dword ptr [EDX + 0x4]       ; 00478e6b
    MOV dword ptr [ECX + 0x4],EAX       ; 00478e6e
    MOV EAX,dword ptr [EDX + 0x8]       ; 00478e71
    MOV dword ptr [ECX + 0x8],EAX       ; 00478e74
    INC EBX                             ; 00478e77
        ;   Label: LAB_00478e77
    IMUL ECX,EBX,0xc                    ; 00478e78
    FLD float ptr [EBP + 0x14]          ; 00478e7b
    SUB ESP,0x8                         ; 00478e7e
    FCHS                                ; 00478e81
    FSTP double ptr [ESP]               ; 00478e83
    PUSH 0x0                            ; 00478e86
    PUSH 0x0                            ; 00478e88
    PUSH 0x0                            ; 00478e8a
    PUSH 0x0                            ; 00478e8c
    PUSH 0x3ff00000                     ; 00478e8e
    PUSH 0x0                            ; 00478e93
    ADD ECX,0x1c220d4                   ; 00478e95
    PUSH ECX                            ; 00478e9b
    MOV ECX,dword ptr [ESP + 0x24]      ; 00478e9c
    PUSH ECX                            ; 00478ea0
    PUSH EDX                            ; 00478ea1
    MOV dword ptr [0x01c220d0],EBX      ; 00478ea2 | DAT_01c220d0
    CALL core_dtri.cpp_clipLineToPlane_FUN_00478900 ; 00478ea8
        ;   XREF to: 00478900 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_clipLineToPlane_FUN_00478900()
    MOV EBX,dword ptr [0x01c220d0]      ; 00478ead | DAT_01c220d0
    ADD ESP,0x2c                        ; 00478eb3
    JMP 0x00478dfe                      ; 00478eb6
        ;   XREF to: 00478dfe (UNCONDITIONAL_JUMP)  ; LAB_00478dfe

