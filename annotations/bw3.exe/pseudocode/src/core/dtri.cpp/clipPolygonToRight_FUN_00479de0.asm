; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_clipPolygonToRight_FUN_00479de0(float x_max)
;
; Parameters:
; float            Stack[0x4]:4   x_max
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_00479dc8 = 00479e8a
;   undefined1* PTR_caseD_3_00479dd0 = 00479e6f
;   undefined4 DAT_01c59b64
;   undefined4 DAT_01c59c28
;
; Called Functions:
;   core_dtri.cpp_clipLineToPlane_FUN_00479970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479de0
        ;   Label: core_dtri.cpp_clipPolygonToRight_FUN_00479de0
    PUSH ESI                            ; 00479de1
    PUSH EDI                            ; 00479de2
    PUSH EBP                            ; 00479de3
    MOV EBP,ESP                         ; 00479de4
    SUB ESP,0x4                         ; 00479de6
    AND ESP,0xfffffff8                  ; 00479de9
    MOV EBX,dword ptr [0x01c59c28]      ; 00479dec | DAT_01c59c28
    MOV EDX,dword ptr [0x01c59b64]      ; 00479df2 | DAT_01c59b64
    XOR ESI,ESI                         ; 00479df8
    TEST EDX,EDX                        ; 00479dfa
    JLE 0x00479e7d                      ; 00479dfc
        ;   XREF to: 00479e7d (CONDITIONAL_JUMP)  ; LAB_00479e7d
    MOV EDI,0x1c59b68                   ; 00479e02
    MOV EAX,[0x01c59b64]                ; 00479e07 | DAT_01c59b64
        ;   Label: LAB_00479e07
    LEA ECX,[ESI + 0x1]                 ; 00479e0c
    CMP ECX,EAX                         ; 00479e0f
    JNZ 0x00479e15                      ; 00479e11
        ;   XREF to: 00479e15 (CONDITIONAL_JUMP)  ; LAB_00479e15
    XOR ECX,EAX                         ; 00479e13
    IMUL ECX,ECX,0xc                    ; 00479e15
        ;   Label: LAB_00479e15
    MOV EAX,0x1c59b68                   ; 00479e18
    FLD float ptr [EDI]                 ; 00479e1d
    ADD EAX,ECX                         ; 00479e1f
    MOV EDX,EDI                         ; 00479e21
    MOV dword ptr [ESP],EAX             ; 00479e23
    XOR ECX,ECX                         ; 00479e26
    FCOMP float ptr [EBP + 0x14]        ; 00479e28
    FNSTSW AX                           ; 00479e2b
    SAHF                                ; 00479e2d
    JBE 0x00479e35                      ; 00479e2e
        ;   XREF to: 00479e35 (CONDITIONAL_JUMP)  ; LAB_00479e35
    MOV ECX,0x1                         ; 00479e30
    MOV EAX,dword ptr [ESP]             ; 00479e35
        ;   Label: LAB_00479e35
    FLD float ptr [EAX]                 ; 00479e38
    FCOMP float ptr [EBP + 0x14]        ; 00479e3a
    FNSTSW AX                           ; 00479e3d
    SAHF                                ; 00479e3f
    JBE 0x00479e45                      ; 00479e40
        ;   XREF to: 00479e45 (CONDITIONAL_JUMP)  ; LAB_00479e45
    OR CL,0x2                           ; 00479e42
    CMP ECX,0x3                         ; 00479e45
        ;   Label: LAB_00479e45
    JA 0x00479e6f                       ; 00479e48
        ;   XREF to: 00479e6f (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x479dc4]  ; 00479e4a | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 00479e51
        ;   Label: caseD_0
    ADD ECX,0x1c59c2c                   ; 00479e54
    CMP ECX,EDX                         ; 00479e5a
    JZ 0x00479e6e                       ; 00479e5c
        ;   XREF to: 00479e6e (CONDITIONAL_JUMP)  ; LAB_00479e6e
    MOV EAX,dword ptr [EDX]             ; 00479e5e
    MOV dword ptr [ECX],EAX             ; 00479e60
    MOV EAX,dword ptr [EDX + 0x4]       ; 00479e62
    MOV dword ptr [ECX + 0x4],EAX       ; 00479e65
    MOV EAX,dword ptr [EDX + 0x8]       ; 00479e68
    MOV dword ptr [ECX + 0x8],EAX       ; 00479e6b
    INC EBX                             ; 00479e6e
        ;   Label: LAB_00479e6e
    MOV ECX,dword ptr [0x01c59b64]      ; 00479e6f | DAT_01c59b64
        ;   Label: caseD_3
    INC ESI                             ; 00479e75
    ADD EDI,0xc                         ; 00479e76
    CMP ESI,ECX                         ; 00479e79
    JL 0x00479e07                       ; 00479e7b
        ;   XREF to: 00479e07 (CONDITIONAL_JUMP)  ; LAB_00479e07
    MOV dword ptr [0x01c59c28],EBX      ; 00479e7d | DAT_01c59c28
        ;   Label: LAB_00479e7d
    MOV ESP,EBP                         ; 00479e83
    POP EBP                             ; 00479e85
    POP EDI                             ; 00479e86
    POP ESI                             ; 00479e87
    POP EBX                             ; 00479e88
    RET                                 ; 00479e89
    IMUL ECX,EBX,0xc                    ; 00479e8a
        ;   Label: caseD_1
    FLD float ptr [EBP + 0x14]          ; 00479e8d
    SUB ESP,0x8                         ; 00479e90
    FCHS                                ; 00479e93
    FSTP double ptr [ESP]               ; 00479e95
    PUSH 0x0                            ; 00479e98
    PUSH 0x0                            ; 00479e9a
    PUSH 0x0                            ; 00479e9c
    PUSH 0x0                            ; 00479e9e
    PUSH 0x3ff00000                     ; 00479ea0
    PUSH 0x0                            ; 00479ea5
    ADD ECX,0x1c59c2c                   ; 00479ea7
    PUSH ECX                            ; 00479ead
    PUSH EDX                            ; 00479eae
    MOV EAX,dword ptr [ESP + 0x28]      ; 00479eaf
    PUSH EAX                            ; 00479eb3
    MOV dword ptr [0x01c59c28],EBX      ; 00479eb4 | DAT_01c59c28
    CALL core_dtri.cpp_clipLineToPlane_FUN_00479970 ; 00479eba
        ;   XREF to: 00479970 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_clipLineToPlane_FUN_00479970()
    MOV EBX,dword ptr [0x01c59c28]      ; 00479ebf | DAT_01c59c28
    ADD ESP,0x2c                        ; 00479ec5
    JMP 0x00479e6e                      ; 00479ec8
        ;   XREF to: 00479e6e (UNCONDITIONAL_JUMP)  ; LAB_00479e6e
    IMUL ECX,EBX,0xc                    ; 00479eca
        ;   Label: caseD_2
    ADD ECX,0x1c59c2c                   ; 00479ecd
    CMP ECX,EDX                         ; 00479ed3
    JZ 0x00479ee7                       ; 00479ed5
        ;   XREF to: 00479ee7 (CONDITIONAL_JUMP)  ; LAB_00479ee7
    MOV EAX,dword ptr [EDX]             ; 00479ed7
    MOV dword ptr [ECX],EAX             ; 00479ed9
    MOV EAX,dword ptr [EDX + 0x4]       ; 00479edb
    MOV dword ptr [ECX + 0x4],EAX       ; 00479ede
    MOV EAX,dword ptr [EDX + 0x8]       ; 00479ee1
    MOV dword ptr [ECX + 0x8],EAX       ; 00479ee4
    INC EBX                             ; 00479ee7
        ;   Label: LAB_00479ee7
    IMUL ECX,EBX,0xc                    ; 00479ee8
    FLD float ptr [EBP + 0x14]          ; 00479eeb
    SUB ESP,0x8                         ; 00479eee
    FCHS                                ; 00479ef1
    FSTP double ptr [ESP]               ; 00479ef3
    PUSH 0x0                            ; 00479ef6
    PUSH 0x0                            ; 00479ef8
    PUSH 0x0                            ; 00479efa
    PUSH 0x0                            ; 00479efc
    PUSH 0x3ff00000                     ; 00479efe
    PUSH 0x0                            ; 00479f03
    ADD ECX,0x1c59c2c                   ; 00479f05
    PUSH ECX                            ; 00479f0b
    MOV ECX,dword ptr [ESP + 0x24]      ; 00479f0c
    PUSH ECX                            ; 00479f10
    PUSH EDX                            ; 00479f11
    MOV dword ptr [0x01c59c28],EBX      ; 00479f12 | DAT_01c59c28
    CALL core_dtri.cpp_clipLineToPlane_FUN_00479970 ; 00479f18
        ;   XREF to: 00479970 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_clipLineToPlane_FUN_00479970()
    MOV EBX,dword ptr [0x01c59c28]      ; 00479f1d | DAT_01c59c28
    ADD ESP,0x2c                        ; 00479f23
    JMP 0x00479e6e                      ; 00479f26
        ;   XREF to: 00479e6e (UNCONDITIONAL_JUMP)  ; LAB_00479e6e

