; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcube_cpp_FUN_00451e50(float param_1)
;
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_00451e38 = 00451f04
;   undefined1* PTR_caseD_3_00451e40 = 00451ee9
;   undefined4 DAT_015489d0
;   undefined4 DAT_01548a94
;
; Called Functions:
;   core_dcube.cpp_clipEdgeToPlane_FUN_004515b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00451e50
        ;   Label: core_dcube.cpp_FUN_00451e50
    PUSH ESI                            ; 00451e51
    PUSH EDI                            ; 00451e52
    PUSH EBP                            ; 00451e53
    MOV EBP,ESP                         ; 00451e54
    SUB ESP,0x8                         ; 00451e56
    AND ESP,0xfffffff8                  ; 00451e59
    MOV EBX,dword ptr [0x01548a94]      ; 00451e5c | DAT_01548a94
    MOV EDX,dword ptr [EBP + 0x14]      ; 00451e62
    MOV dword ptr [ESP],EDX             ; 00451e65
    MOV EDX,dword ptr [0x015489d0]      ; 00451e68 | DAT_015489d0
    XOR EDI,EDI                         ; 00451e6e
    TEST EDX,EDX                        ; 00451e70
    JLE 0x00451ef7                      ; 00451e72
        ;   XREF to: 00451ef7 (CONDITIONAL_JUMP)  ; LAB_00451ef7
    MOV ESI,0x15489d4                   ; 00451e78
    MOV EAX,[0x015489d0]                ; 00451e7d | DAT_015489d0
        ;   Label: LAB_00451e7d
    LEA ECX,[EDI + 0x1]                 ; 00451e82
    CMP ECX,EAX                         ; 00451e85
    JNZ 0x00451e8b                      ; 00451e87
        ;   XREF to: 00451e8b (CONDITIONAL_JUMP)  ; LAB_00451e8b
    XOR ECX,EAX                         ; 00451e89
    IMUL ECX,ECX,0xc                    ; 00451e8b
        ;   Label: LAB_00451e8b
    MOV EAX,0x15489d4                   ; 00451e8e
    FLD float ptr [ESI + 0x8]           ; 00451e93
    ADD EAX,ECX                         ; 00451e96
    MOV EDX,ESI                         ; 00451e98
    MOV dword ptr [ESP + 0x4],EAX       ; 00451e9a
    XOR ECX,ECX                         ; 00451e9e
    FCOMP float ptr [ESP]               ; 00451ea0
    FNSTSW AX                           ; 00451ea3
    SAHF                                ; 00451ea5
    JBE 0x00451ead                      ; 00451ea6
        ;   XREF to: 00451ead (CONDITIONAL_JUMP)  ; LAB_00451ead
    MOV ECX,0x1                         ; 00451ea8
    MOV EAX,dword ptr [ESP + 0x4]       ; 00451ead
        ;   Label: LAB_00451ead
    FLD float ptr [EAX + 0x8]           ; 00451eb1
    FCOMP float ptr [ESP]               ; 00451eb4
    FNSTSW AX                           ; 00451eb7
    SAHF                                ; 00451eb9
    JBE 0x00451ebf                      ; 00451eba
        ;   XREF to: 00451ebf (CONDITIONAL_JUMP)  ; LAB_00451ebf
    OR CL,0x2                           ; 00451ebc
    CMP ECX,0x3                         ; 00451ebf
        ;   Label: LAB_00451ebf
    JA 0x00451ee9                       ; 00451ec2
        ;   XREF to: 00451ee9 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x451e34]  ; 00451ec4 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 00451ecb
        ;   Label: caseD_0
    ADD ECX,0x1548a98                   ; 00451ece
    CMP ECX,EDX                         ; 00451ed4
    JZ 0x00451ee8                       ; 00451ed6
        ;   XREF to: 00451ee8 (CONDITIONAL_JUMP)  ; LAB_00451ee8
    MOV EAX,dword ptr [EDX]             ; 00451ed8
    MOV dword ptr [ECX],EAX             ; 00451eda
    MOV EAX,dword ptr [EDX + 0x4]       ; 00451edc
    MOV dword ptr [ECX + 0x4],EAX       ; 00451edf
    MOV EAX,dword ptr [EDX + 0x8]       ; 00451ee2
    MOV dword ptr [ECX + 0x8],EAX       ; 00451ee5
    INC EBX                             ; 00451ee8
        ;   Label: LAB_00451ee8
    MOV ECX,dword ptr [0x015489d0]      ; 00451ee9 | DAT_015489d0
        ;   Label: caseD_3
    INC EDI                             ; 00451eef
    ADD ESI,0xc                         ; 00451ef0
    CMP EDI,ECX                         ; 00451ef3
    JL 0x00451e7d                       ; 00451ef5
        ;   XREF to: 00451e7d (CONDITIONAL_JUMP)  ; LAB_00451e7d
    MOV dword ptr [0x01548a94],EBX      ; 00451ef7 | DAT_01548a94
        ;   Label: LAB_00451ef7
    MOV ESP,EBP                         ; 00451efd
    POP EBP                             ; 00451eff
    POP EDI                             ; 00451f00
    POP ESI                             ; 00451f01
    POP EBX                             ; 00451f02
    RET                                 ; 00451f03
    IMUL ECX,EBX,0xc                    ; 00451f04
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 00451f07
    SUB ESP,0x8                         ; 00451f0a
    FSTP double ptr [ESP]               ; 00451f0d
    PUSH 0xbff00000                     ; 00451f10
    PUSH 0x0                            ; 00451f15
    PUSH 0x0                            ; 00451f17
    PUSH 0x0                            ; 00451f19
    PUSH 0x0                            ; 00451f1b
    PUSH 0x0                            ; 00451f1d
    ADD ECX,0x1548a98                   ; 00451f1f
    PUSH ECX                            ; 00451f25
    PUSH EDX                            ; 00451f26
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00451f27
    PUSH EAX                            ; 00451f2b
    MOV dword ptr [0x01548a94],EBX      ; 00451f2c | DAT_01548a94
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004515b0 ; 00451f32
        ;   XREF to: 004515b0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_004515b0()
    MOV EBX,dword ptr [0x01548a94]      ; 00451f37 | DAT_01548a94
    ADD ESP,0x2c                        ; 00451f3d
    JMP 0x00451ee8                      ; 00451f40
        ;   XREF to: 00451ee8 (UNCONDITIONAL_JUMP)  ; LAB_00451ee8
    IMUL ECX,EBX,0xc                    ; 00451f42
        ;   Label: caseD_2
    ADD ECX,0x1548a98                   ; 00451f45
    CMP ECX,EDX                         ; 00451f4b
    JZ 0x00451f5f                       ; 00451f4d
        ;   XREF to: 00451f5f (CONDITIONAL_JUMP)  ; LAB_00451f5f
    MOV EAX,dword ptr [EDX]             ; 00451f4f
    MOV dword ptr [ECX],EAX             ; 00451f51
    MOV EAX,dword ptr [EDX + 0x4]       ; 00451f53
    MOV dword ptr [ECX + 0x4],EAX       ; 00451f56
    MOV EAX,dword ptr [EDX + 0x8]       ; 00451f59
    MOV dword ptr [ECX + 0x8],EAX       ; 00451f5c
    INC EBX                             ; 00451f5f
        ;   Label: LAB_00451f5f
    IMUL ECX,EBX,0xc                    ; 00451f60
    FLD float ptr [ESP]                 ; 00451f63
    SUB ESP,0x8                         ; 00451f66
    FSTP double ptr [ESP]               ; 00451f69
    PUSH 0xbff00000                     ; 00451f6c
    PUSH 0x0                            ; 00451f71
    PUSH 0x0                            ; 00451f73
    PUSH 0x0                            ; 00451f75
    PUSH 0x0                            ; 00451f77
    PUSH 0x0                            ; 00451f79
    ADD ECX,0x1548a98                   ; 00451f7b
    PUSH ECX                            ; 00451f81
    MOV ECX,dword ptr [ESP + 0x28]      ; 00451f82
    PUSH ECX                            ; 00451f86
    PUSH EDX                            ; 00451f87
    MOV dword ptr [0x01548a94],EBX      ; 00451f88 | DAT_01548a94
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004515b0 ; 00451f8e
        ;   XREF to: 004515b0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_004515b0()
    MOV EBX,dword ptr [0x01548a94]      ; 00451f93 | DAT_01548a94
    ADD ESP,0x2c                        ; 00451f99
    JMP 0x00451ee8                      ; 00451f9c
        ;   XREF to: 00451ee8 (UNCONDITIONAL_JUMP)  ; LAB_00451ee8

