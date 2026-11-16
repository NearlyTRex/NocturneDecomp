; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00479b10(float param_1)
;
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_00479b04 = 00479bbc
;   undefined1* PTR_caseD_3_00479b0c = 00479ba1
;   undefined4 DAT_01c599dc
;   undefined4 DAT_01c59aa0
;
; Called Functions:
;   core_dtri.cpp_clipLineToPlane_FUN_00479970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479b10
        ;   Label: FUN_00479b10
    PUSH ESI                            ; 00479b11
    PUSH EDI                            ; 00479b12
    PUSH EBP                            ; 00479b13
    MOV EBP,ESP                         ; 00479b14
    SUB ESP,0x4                         ; 00479b16
    AND ESP,0xfffffff8                  ; 00479b19
    MOV EBX,dword ptr [0x01c59aa0]      ; 00479b1c | DAT_01c59aa0
    MOV EDX,dword ptr [0x01c599dc]      ; 00479b22 | DAT_01c599dc
    XOR ESI,ESI                         ; 00479b28
    TEST EDX,EDX                        ; 00479b2a
    JLE 0x00479baf                      ; 00479b2c
        ;   XREF to: 00479baf (CONDITIONAL_JUMP)  ; LAB_00479baf
    MOV EDI,0x1c599e0                   ; 00479b32
    MOV EAX,[0x01c599dc]                ; 00479b37 | DAT_01c599dc
        ;   Label: LAB_00479b37
    LEA ECX,[ESI + 0x1]                 ; 00479b3c
    CMP ECX,EAX                         ; 00479b3f
    JNZ 0x00479b45                      ; 00479b41
        ;   XREF to: 00479b45 (CONDITIONAL_JUMP)  ; LAB_00479b45
    XOR ECX,EAX                         ; 00479b43
    IMUL ECX,ECX,0xc                    ; 00479b45
        ;   Label: LAB_00479b45
    MOV EAX,0x1c599e0                   ; 00479b48
    FLD float ptr [EDI + 0x4]           ; 00479b4d
    ADD EAX,ECX                         ; 00479b50
    MOV EDX,EDI                         ; 00479b52
    MOV dword ptr [ESP],EAX             ; 00479b54
    XOR ECX,ECX                         ; 00479b57
    FCOMP float ptr [EBP + 0x14]        ; 00479b59
    FNSTSW AX                           ; 00479b5c
    SAHF                                ; 00479b5e
    JBE 0x00479b66                      ; 00479b5f
        ;   XREF to: 00479b66 (CONDITIONAL_JUMP)  ; LAB_00479b66
    MOV ECX,0x1                         ; 00479b61
    MOV EAX,dword ptr [ESP]             ; 00479b66
        ;   Label: LAB_00479b66
    FLD float ptr [EAX + 0x4]           ; 00479b69
    FCOMP float ptr [EBP + 0x14]        ; 00479b6c
    FNSTSW AX                           ; 00479b6f
    SAHF                                ; 00479b71
    JBE 0x00479b77                      ; 00479b72
        ;   XREF to: 00479b77 (CONDITIONAL_JUMP)  ; LAB_00479b77
    OR CL,0x2                           ; 00479b74
    CMP ECX,0x3                         ; 00479b77
        ;   Label: LAB_00479b77
    JA 0x00479ba1                       ; 00479b7a
        ;   XREF to: 00479ba1 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x479b00]  ; 00479b7c | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 00479b83
        ;   Label: caseD_0
    ADD ECX,0x1c59aa4                   ; 00479b86
    CMP ECX,EDX                         ; 00479b8c
    JZ 0x00479ba0                       ; 00479b8e
        ;   XREF to: 00479ba0 (CONDITIONAL_JUMP)  ; LAB_00479ba0
    MOV EAX,dword ptr [EDX]             ; 00479b90
    MOV dword ptr [ECX],EAX             ; 00479b92
    MOV EAX,dword ptr [EDX + 0x4]       ; 00479b94
    MOV dword ptr [ECX + 0x4],EAX       ; 00479b97
    MOV EAX,dword ptr [EDX + 0x8]       ; 00479b9a
    MOV dword ptr [ECX + 0x8],EAX       ; 00479b9d
    INC EBX                             ; 00479ba0
        ;   Label: LAB_00479ba0
    MOV ECX,dword ptr [0x01c599dc]      ; 00479ba1 | DAT_01c599dc
        ;   Label: caseD_3
    INC ESI                             ; 00479ba7
    ADD EDI,0xc                         ; 00479ba8
    CMP ESI,ECX                         ; 00479bab
    JL 0x00479b37                       ; 00479bad
        ;   XREF to: 00479b37 (CONDITIONAL_JUMP)  ; LAB_00479b37
    MOV dword ptr [0x01c59aa0],EBX      ; 00479baf | DAT_01c59aa0
        ;   Label: LAB_00479baf
    MOV ESP,EBP                         ; 00479bb5
    POP EBP                             ; 00479bb7
    POP EDI                             ; 00479bb8
    POP ESI                             ; 00479bb9
    POP EBX                             ; 00479bba
    RET                                 ; 00479bbb
    IMUL ECX,EBX,0xc                    ; 00479bbc
        ;   Label: caseD_1
    FLD float ptr [EBP + 0x14]          ; 00479bbf
    SUB ESP,0x8                         ; 00479bc2
    FCHS                                ; 00479bc5
    FSTP double ptr [ESP]               ; 00479bc7
    PUSH 0x0                            ; 00479bca
    PUSH 0x0                            ; 00479bcc
    PUSH 0x3ff00000                     ; 00479bce
    PUSH 0x0                            ; 00479bd3
    PUSH 0x0                            ; 00479bd5
    PUSH 0x0                            ; 00479bd7
    ADD ECX,0x1c59aa4                   ; 00479bd9
    PUSH ECX                            ; 00479bdf
    PUSH EDX                            ; 00479be0
    MOV EAX,dword ptr [ESP + 0x28]      ; 00479be1
    PUSH EAX                            ; 00479be5
    MOV dword ptr [0x01c59aa0],EBX      ; 00479be6 | DAT_01c59aa0
    CALL core_dtri.cpp_clipLineToPlane_FUN_00479970 ; 00479bec
        ;   XREF to: 00479970 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00479970(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x01c59aa0]      ; 00479bf1 | DAT_01c59aa0
    ADD ESP,0x2c                        ; 00479bf7
    JMP 0x00479ba0                      ; 00479bfa
        ;   XREF to: 00479ba0 (UNCONDITIONAL_JUMP)  ; LAB_00479ba0
    IMUL ECX,EBX,0xc                    ; 00479bfc
        ;   Label: caseD_2
    ADD ECX,0x1c59aa4                   ; 00479bff
    CMP ECX,EDX                         ; 00479c05
    JZ 0x00479c19                       ; 00479c07
        ;   XREF to: 00479c19 (CONDITIONAL_JUMP)  ; LAB_00479c19
    MOV EAX,dword ptr [EDX]             ; 00479c09
    MOV dword ptr [ECX],EAX             ; 00479c0b
    MOV EAX,dword ptr [EDX + 0x4]       ; 00479c0d
    MOV dword ptr [ECX + 0x4],EAX       ; 00479c10
    MOV EAX,dword ptr [EDX + 0x8]       ; 00479c13
    MOV dword ptr [ECX + 0x8],EAX       ; 00479c16
    INC EBX                             ; 00479c19
        ;   Label: LAB_00479c19
    IMUL ECX,EBX,0xc                    ; 00479c1a
    FLD float ptr [EBP + 0x14]          ; 00479c1d
    SUB ESP,0x8                         ; 00479c20
    FCHS                                ; 00479c23
    FSTP double ptr [ESP]               ; 00479c25
    PUSH 0x0                            ; 00479c28
    PUSH 0x0                            ; 00479c2a
    PUSH 0x3ff00000                     ; 00479c2c
    PUSH 0x0                            ; 00479c31
    PUSH 0x0                            ; 00479c33
    PUSH 0x0                            ; 00479c35
    ADD ECX,0x1c59aa4                   ; 00479c37
    PUSH ECX                            ; 00479c3d
    MOV ECX,dword ptr [ESP + 0x24]      ; 00479c3e
    PUSH ECX                            ; 00479c42
    PUSH EDX                            ; 00479c43
    MOV dword ptr [0x01c59aa0],EBX      ; 00479c44 | DAT_01c59aa0
    CALL core_dtri.cpp_clipLineToPlane_FUN_00479970 ; 00479c4a
        ;   XREF to: 00479970 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00479970(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x01c59aa0]      ; 00479c4f | DAT_01c59aa0
    ADD ESP,0x2c                        ; 00479c55
    JMP 0x00479ba0                      ; 00479c58
        ;   XREF to: 00479ba0 (UNCONDITIONAL_JUMP)  ; LAB_00479ba0

