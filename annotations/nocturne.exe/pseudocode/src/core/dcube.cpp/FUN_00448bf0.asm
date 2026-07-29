; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcube_cpp_FUN_00448bf0(float param_1)
;
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_00448be4 = 00448ca4
;   undefined1* PTR_caseD_3_00448bec = 00448c89
;   undefined4 DAT_014b879c
;   undefined4 DAT_014b8860
;
; Called Functions:
;   core_dcube.cpp_clipEdgeToPlane_FUN_004484c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448bf0
        ;   Label: core_dcube.cpp_FUN_00448bf0
    PUSH ESI                            ; 00448bf1
    PUSH EDI                            ; 00448bf2
    PUSH EBP                            ; 00448bf3
    MOV EBP,ESP                         ; 00448bf4
    SUB ESP,0x8                         ; 00448bf6
    AND ESP,0xfffffff8                  ; 00448bf9
    MOV EBX,dword ptr [0x014b8860]      ; 00448bfc | DAT_014b8860
    MOV EDX,dword ptr [EBP + 0x14]      ; 00448c02
    MOV dword ptr [ESP],EDX             ; 00448c05
    MOV EDX,dword ptr [0x014b879c]      ; 00448c08 | DAT_014b879c
    XOR EDI,EDI                         ; 00448c0e
    TEST EDX,EDX                        ; 00448c10
    JLE 0x00448c97                      ; 00448c12
        ;   XREF to: 00448c97 (CONDITIONAL_JUMP)  ; LAB_00448c97
    MOV ESI,0x14b87a0                   ; 00448c18
    MOV EAX,[0x014b879c]                ; 00448c1d | DAT_014b879c
        ;   Label: LAB_00448c1d
    LEA ECX,[EDI + 0x1]                 ; 00448c22
    CMP ECX,EAX                         ; 00448c25
    JNZ 0x00448c2b                      ; 00448c27
        ;   XREF to: 00448c2b (CONDITIONAL_JUMP)  ; LAB_00448c2b
    XOR ECX,EAX                         ; 00448c29
    IMUL ECX,ECX,0xc                    ; 00448c2b
        ;   Label: LAB_00448c2b
    MOV EAX,0x14b87a0                   ; 00448c2e
    FLD float ptr [ESI + 0x8]           ; 00448c33
    ADD EAX,ECX                         ; 00448c36
    MOV EDX,ESI                         ; 00448c38
    MOV dword ptr [ESP + 0x4],EAX       ; 00448c3a
    XOR ECX,ECX                         ; 00448c3e
    FCOMP float ptr [ESP]               ; 00448c40
    FNSTSW AX                           ; 00448c43
    SAHF                                ; 00448c45
    JNC 0x00448c4d                      ; 00448c46
        ;   XREF to: 00448c4d (CONDITIONAL_JUMP)  ; LAB_00448c4d
    MOV ECX,0x1                         ; 00448c48
    MOV EAX,dword ptr [ESP + 0x4]       ; 00448c4d
        ;   Label: LAB_00448c4d
    FLD float ptr [EAX + 0x8]           ; 00448c51
    FCOMP float ptr [ESP]               ; 00448c54
    FNSTSW AX                           ; 00448c57
    SAHF                                ; 00448c59
    JNC 0x00448c5f                      ; 00448c5a
        ;   XREF to: 00448c5f (CONDITIONAL_JUMP)  ; LAB_00448c5f
    OR CL,0x2                           ; 00448c5c
    CMP ECX,0x3                         ; 00448c5f
        ;   Label: LAB_00448c5f
    JA 0x00448c89                       ; 00448c62
        ;   XREF to: 00448c89 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x448be0]  ; 00448c64 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 00448c6b
        ;   Label: caseD_0
    ADD ECX,0x14b8864                   ; 00448c6e
    CMP ECX,EDX                         ; 00448c74
    JZ 0x00448c88                       ; 00448c76
        ;   XREF to: 00448c88 (CONDITIONAL_JUMP)  ; LAB_00448c88
    MOV EAX,dword ptr [EDX]             ; 00448c78
    MOV dword ptr [ECX],EAX             ; 00448c7a
    MOV EAX,dword ptr [EDX + 0x4]       ; 00448c7c
    MOV dword ptr [ECX + 0x4],EAX       ; 00448c7f
    MOV EAX,dword ptr [EDX + 0x8]       ; 00448c82
    MOV dword ptr [ECX + 0x8],EAX       ; 00448c85
    INC EBX                             ; 00448c88
        ;   Label: LAB_00448c88
    MOV ECX,dword ptr [0x014b879c]      ; 00448c89 | DAT_014b879c
        ;   Label: caseD_3
    INC EDI                             ; 00448c8f
    ADD ESI,0xc                         ; 00448c90
    CMP EDI,ECX                         ; 00448c93
    JL 0x00448c1d                       ; 00448c95
        ;   XREF to: 00448c1d (CONDITIONAL_JUMP)  ; LAB_00448c1d
    MOV dword ptr [0x014b8860],EBX      ; 00448c97 | DAT_014b8860
        ;   Label: LAB_00448c97
    MOV ESP,EBP                         ; 00448c9d
    POP EBP                             ; 00448c9f
    POP EDI                             ; 00448ca0
    POP ESI                             ; 00448ca1
    POP EBX                             ; 00448ca2
    RET                                 ; 00448ca3
    IMUL ECX,EBX,0xc                    ; 00448ca4
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 00448ca7
    SUB ESP,0x8                         ; 00448caa
    FSTP double ptr [ESP]               ; 00448cad
    PUSH 0xbff00000                     ; 00448cb0
    PUSH 0x0                            ; 00448cb5
    PUSH 0x0                            ; 00448cb7
    PUSH 0x0                            ; 00448cb9
    PUSH 0x0                            ; 00448cbb
    PUSH 0x0                            ; 00448cbd
    ADD ECX,0x14b8864                   ; 00448cbf
    PUSH ECX                            ; 00448cc5
    PUSH EDX                            ; 00448cc6
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00448cc7
    PUSH EAX                            ; 00448ccb
    MOV dword ptr [0x014b8860],EBX      ; 00448ccc | DAT_014b8860
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004484c0 ; 00448cd2
        ;   XREF to: 004484c0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_004484c0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x014b8860]      ; 00448cd7 | DAT_014b8860
    ADD ESP,0x2c                        ; 00448cdd
    JMP 0x00448c88                      ; 00448ce0
        ;   XREF to: 00448c88 (UNCONDITIONAL_JUMP)  ; LAB_00448c88
    IMUL ECX,EBX,0xc                    ; 00448ce2
        ;   Label: caseD_2
    ADD ECX,0x14b8864                   ; 00448ce5
    CMP ECX,EDX                         ; 00448ceb
    JZ 0x00448cff                       ; 00448ced
        ;   XREF to: 00448cff (CONDITIONAL_JUMP)  ; LAB_00448cff
    MOV EAX,dword ptr [EDX]             ; 00448cef
    MOV dword ptr [ECX],EAX             ; 00448cf1
    MOV EAX,dword ptr [EDX + 0x4]       ; 00448cf3
    MOV dword ptr [ECX + 0x4],EAX       ; 00448cf6
    MOV EAX,dword ptr [EDX + 0x8]       ; 00448cf9
    MOV dword ptr [ECX + 0x8],EAX       ; 00448cfc
    INC EBX                             ; 00448cff
        ;   Label: LAB_00448cff
    IMUL ECX,EBX,0xc                    ; 00448d00
    FLD float ptr [ESP]                 ; 00448d03
    SUB ESP,0x8                         ; 00448d06
    FSTP double ptr [ESP]               ; 00448d09
    PUSH 0xbff00000                     ; 00448d0c
    PUSH 0x0                            ; 00448d11
    PUSH 0x0                            ; 00448d13
    PUSH 0x0                            ; 00448d15
    PUSH 0x0                            ; 00448d17
    PUSH 0x0                            ; 00448d19
    ADD ECX,0x14b8864                   ; 00448d1b
    PUSH ECX                            ; 00448d21
    MOV ECX,dword ptr [ESP + 0x28]      ; 00448d22
    PUSH ECX                            ; 00448d26
    PUSH EDX                            ; 00448d27
    MOV dword ptr [0x014b8860],EBX      ; 00448d28 | DAT_014b8860
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004484c0 ; 00448d2e
        ;   XREF to: 004484c0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_004484c0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x014b8860]      ; 00448d33 | DAT_014b8860
    ADD ESP,0x2c                        ; 00448d39
    JMP 0x00448c88                      ; 00448d3c
        ;   XREF to: 00448c88 (UNCONDITIONAL_JUMP)  ; LAB_00448c88

