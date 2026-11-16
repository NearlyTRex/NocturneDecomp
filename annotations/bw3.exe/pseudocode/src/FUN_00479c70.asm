; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00479c70(float param_1)
;
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_00479c64 = 00479d24
;   undefined1* PTR_caseD_3_00479c6c = 00479d09
;   undefined4 DAT_01c59aa0
;   undefined4 DAT_01c59b64
;
; Called Functions:
;   core_dtri.cpp_clipLineToPlane_FUN_00479970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479c70
        ;   Label: FUN_00479c70
    PUSH ESI                            ; 00479c71
    PUSH EDI                            ; 00479c72
    PUSH EBP                            ; 00479c73
    MOV EBP,ESP                         ; 00479c74
    SUB ESP,0x8                         ; 00479c76
    AND ESP,0xfffffff8                  ; 00479c79
    MOV EBX,dword ptr [0x01c59b64]      ; 00479c7c | DAT_01c59b64
    MOV EDX,dword ptr [EBP + 0x14]      ; 00479c82
    MOV dword ptr [ESP],EDX             ; 00479c85
    MOV EDX,dword ptr [0x01c59aa0]      ; 00479c88 | DAT_01c59aa0
    XOR EDI,EDI                         ; 00479c8e
    TEST EDX,EDX                        ; 00479c90
    JLE 0x00479d17                      ; 00479c92
        ;   XREF to: 00479d17 (CONDITIONAL_JUMP)  ; LAB_00479d17
    MOV ESI,0x1c59aa4                   ; 00479c98
    MOV EAX,[0x01c59aa0]                ; 00479c9d | DAT_01c59aa0
        ;   Label: LAB_00479c9d
    LEA ECX,[EDI + 0x1]                 ; 00479ca2
    CMP ECX,EAX                         ; 00479ca5
    JNZ 0x00479cab                      ; 00479ca7
        ;   XREF to: 00479cab (CONDITIONAL_JUMP)  ; LAB_00479cab
    XOR ECX,EAX                         ; 00479ca9
    IMUL ECX,ECX,0xc                    ; 00479cab
        ;   Label: LAB_00479cab
    MOV EAX,0x1c59aa4                   ; 00479cae
    FLD float ptr [ESI + 0x4]           ; 00479cb3
    ADD EAX,ECX                         ; 00479cb6
    MOV EDX,ESI                         ; 00479cb8
    MOV dword ptr [ESP + 0x4],EAX       ; 00479cba
    XOR ECX,ECX                         ; 00479cbe
    FCOMP float ptr [ESP]               ; 00479cc0
    FNSTSW AX                           ; 00479cc3
    SAHF                                ; 00479cc5
    JNC 0x00479ccd                      ; 00479cc6
        ;   XREF to: 00479ccd (CONDITIONAL_JUMP)  ; LAB_00479ccd
    MOV ECX,0x1                         ; 00479cc8
    MOV EAX,dword ptr [ESP + 0x4]       ; 00479ccd
        ;   Label: LAB_00479ccd
    FLD float ptr [EAX + 0x4]           ; 00479cd1
    FCOMP float ptr [ESP]               ; 00479cd4
    FNSTSW AX                           ; 00479cd7
    SAHF                                ; 00479cd9
    JNC 0x00479cdf                      ; 00479cda
        ;   XREF to: 00479cdf (CONDITIONAL_JUMP)  ; LAB_00479cdf
    OR CL,0x2                           ; 00479cdc
    CMP ECX,0x3                         ; 00479cdf
        ;   Label: LAB_00479cdf
    JA 0x00479d09                       ; 00479ce2
        ;   XREF to: 00479d09 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x479c60]  ; 00479ce4 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 00479ceb
        ;   Label: caseD_0
    ADD ECX,0x1c59b68                   ; 00479cee
    CMP ECX,EDX                         ; 00479cf4
    JZ 0x00479d08                       ; 00479cf6
        ;   XREF to: 00479d08 (CONDITIONAL_JUMP)  ; LAB_00479d08
    MOV EAX,dword ptr [EDX]             ; 00479cf8
    MOV dword ptr [ECX],EAX             ; 00479cfa
    MOV EAX,dword ptr [EDX + 0x4]       ; 00479cfc
    MOV dword ptr [ECX + 0x4],EAX       ; 00479cff
    MOV EAX,dword ptr [EDX + 0x8]       ; 00479d02
    MOV dword ptr [ECX + 0x8],EAX       ; 00479d05
    INC EBX                             ; 00479d08
        ;   Label: LAB_00479d08
    MOV ECX,dword ptr [0x01c59aa0]      ; 00479d09 | DAT_01c59aa0
        ;   Label: caseD_3
    INC EDI                             ; 00479d0f
    ADD ESI,0xc                         ; 00479d10
    CMP EDI,ECX                         ; 00479d13
    JL 0x00479c9d                       ; 00479d15
        ;   XREF to: 00479c9d (CONDITIONAL_JUMP)  ; LAB_00479c9d
    MOV dword ptr [0x01c59b64],EBX      ; 00479d17 | DAT_01c59b64
        ;   Label: LAB_00479d17
    MOV ESP,EBP                         ; 00479d1d
    POP EBP                             ; 00479d1f
    POP EDI                             ; 00479d20
    POP ESI                             ; 00479d21
    POP EBX                             ; 00479d22
    RET                                 ; 00479d23
    IMUL ECX,EBX,0xc                    ; 00479d24
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 00479d27
    SUB ESP,0x8                         ; 00479d2a
    FSTP double ptr [ESP]               ; 00479d2d
    PUSH 0x0                            ; 00479d30
    PUSH 0x0                            ; 00479d32
    PUSH 0xbff00000                     ; 00479d34
    PUSH 0x0                            ; 00479d39
    PUSH 0x0                            ; 00479d3b
    PUSH 0x0                            ; 00479d3d
    ADD ECX,0x1c59b68                   ; 00479d3f
    PUSH ECX                            ; 00479d45
    PUSH EDX                            ; 00479d46
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00479d47
    PUSH EAX                            ; 00479d4b
    MOV dword ptr [0x01c59b64],EBX      ; 00479d4c | DAT_01c59b64
    CALL core_dtri.cpp_clipLineToPlane_FUN_00479970 ; 00479d52
        ;   XREF to: 00479970 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00479970(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x01c59b64]      ; 00479d57 | DAT_01c59b64
    ADD ESP,0x2c                        ; 00479d5d
    JMP 0x00479d08                      ; 00479d60
        ;   XREF to: 00479d08 (UNCONDITIONAL_JUMP)  ; LAB_00479d08
    IMUL ECX,EBX,0xc                    ; 00479d62
        ;   Label: caseD_2
    ADD ECX,0x1c59b68                   ; 00479d65
    CMP ECX,EDX                         ; 00479d6b
    JZ 0x00479d7f                       ; 00479d6d
        ;   XREF to: 00479d7f (CONDITIONAL_JUMP)  ; LAB_00479d7f
    MOV EAX,dword ptr [EDX]             ; 00479d6f
    MOV dword ptr [ECX],EAX             ; 00479d71
    MOV EAX,dword ptr [EDX + 0x4]       ; 00479d73
    MOV dword ptr [ECX + 0x4],EAX       ; 00479d76
    MOV EAX,dword ptr [EDX + 0x8]       ; 00479d79
    MOV dword ptr [ECX + 0x8],EAX       ; 00479d7c
    INC EBX                             ; 00479d7f
        ;   Label: LAB_00479d7f
    IMUL ECX,EBX,0xc                    ; 00479d80
    FLD float ptr [ESP]                 ; 00479d83
    SUB ESP,0x8                         ; 00479d86
    FSTP double ptr [ESP]               ; 00479d89
    PUSH 0x0                            ; 00479d8c
    PUSH 0x0                            ; 00479d8e
    PUSH 0xbff00000                     ; 00479d90
    PUSH 0x0                            ; 00479d95
    PUSH 0x0                            ; 00479d97
    PUSH 0x0                            ; 00479d99
    ADD ECX,0x1c59b68                   ; 00479d9b
    PUSH ECX                            ; 00479da1
    MOV ECX,dword ptr [ESP + 0x28]      ; 00479da2
    PUSH ECX                            ; 00479da6
    PUSH EDX                            ; 00479da7
    MOV dword ptr [0x01c59b64],EBX      ; 00479da8 | DAT_01c59b64
    CALL core_dtri.cpp_clipLineToPlane_FUN_00479970 ; 00479dae
        ;   XREF to: 00479970 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00479970(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x01c59b64]      ; 00479db3 | DAT_01c59b64
    ADD ESP,0x2c                        ; 00479db9
    JMP 0x00479d08                      ; 00479dbc
        ;   XREF to: 00479d08 (UNCONDITIONAL_JUMP)  ; LAB_00479d08

