; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_clipPolygonToBottom_FUN_00478c00(float y_min)
;
; Parameters:
; float            Stack[0x4]:4   y_min
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_00478bf4 = 00478cb4
;   undefined1* PTR_caseD_3_00478bfc = 00478c99
;   undefined4 DAT_01c21f48
;   undefined4 DAT_01c2200c
;
; Called Functions:
;   core_dtri.cpp_clipLineToPlane_FUN_00478900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478c00
        ;   Label: core_dtri.cpp_clipPolygonToBottom_FUN_00478c00
    PUSH ESI                            ; 00478c01
    PUSH EDI                            ; 00478c02
    PUSH EBP                            ; 00478c03
    MOV EBP,ESP                         ; 00478c04
    SUB ESP,0x8                         ; 00478c06
    AND ESP,0xfffffff8                  ; 00478c09
    MOV EBX,dword ptr [0x01c2200c]      ; 00478c0c | DAT_01c2200c
    MOV EDX,dword ptr [EBP + 0x14]      ; 00478c12
    MOV dword ptr [ESP],EDX             ; 00478c15
    MOV EDX,dword ptr [0x01c21f48]      ; 00478c18 | DAT_01c21f48
    XOR EDI,EDI                         ; 00478c1e
    TEST EDX,EDX                        ; 00478c20
    JLE 0x00478ca7                      ; 00478c22
        ;   XREF to: 00478ca7 (CONDITIONAL_JUMP)  ; LAB_00478ca7
    MOV ESI,0x1c21f4c                   ; 00478c28
    MOV EAX,[0x01c21f48]                ; 00478c2d | DAT_01c21f48
        ;   Label: LAB_00478c2d
    LEA ECX,[EDI + 0x1]                 ; 00478c32
    CMP ECX,EAX                         ; 00478c35
    JNZ 0x00478c3b                      ; 00478c37
        ;   XREF to: 00478c3b (CONDITIONAL_JUMP)  ; LAB_00478c3b
    XOR ECX,EAX                         ; 00478c39
    IMUL ECX,ECX,0xc                    ; 00478c3b
        ;   Label: LAB_00478c3b
    MOV EAX,0x1c21f4c                   ; 00478c3e
    FLD float ptr [ESI + 0x4]           ; 00478c43
    ADD EAX,ECX                         ; 00478c46
    MOV EDX,ESI                         ; 00478c48
    MOV dword ptr [ESP + 0x4],EAX       ; 00478c4a
    XOR ECX,ECX                         ; 00478c4e
    FCOMP float ptr [ESP]               ; 00478c50
    FNSTSW AX                           ; 00478c53
    SAHF                                ; 00478c55
    JNC 0x00478c5d                      ; 00478c56
        ;   XREF to: 00478c5d (CONDITIONAL_JUMP)  ; LAB_00478c5d
    MOV ECX,0x1                         ; 00478c58
    MOV EAX,dword ptr [ESP + 0x4]       ; 00478c5d
        ;   Label: LAB_00478c5d
    FLD float ptr [EAX + 0x4]           ; 00478c61
    FCOMP float ptr [ESP]               ; 00478c64
    FNSTSW AX                           ; 00478c67
    SAHF                                ; 00478c69
    JNC 0x00478c6f                      ; 00478c6a
        ;   XREF to: 00478c6f (CONDITIONAL_JUMP)  ; LAB_00478c6f
    OR CL,0x2                           ; 00478c6c
    CMP ECX,0x3                         ; 00478c6f
        ;   Label: LAB_00478c6f
    JA 0x00478c99                       ; 00478c72
        ;   XREF to: 00478c99 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x478bf0]  ; 00478c74 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 00478c7b
        ;   Label: caseD_0
    ADD ECX,0x1c22010                   ; 00478c7e
    CMP ECX,EDX                         ; 00478c84
    JZ 0x00478c98                       ; 00478c86
        ;   XREF to: 00478c98 (CONDITIONAL_JUMP)  ; LAB_00478c98
    MOV EAX,dword ptr [EDX]             ; 00478c88
    MOV dword ptr [ECX],EAX             ; 00478c8a
    MOV EAX,dword ptr [EDX + 0x4]       ; 00478c8c
    MOV dword ptr [ECX + 0x4],EAX       ; 00478c8f
    MOV EAX,dword ptr [EDX + 0x8]       ; 00478c92
    MOV dword ptr [ECX + 0x8],EAX       ; 00478c95
    INC EBX                             ; 00478c98
        ;   Label: LAB_00478c98
    MOV ECX,dword ptr [0x01c21f48]      ; 00478c99 | DAT_01c21f48
        ;   Label: caseD_3
    INC EDI                             ; 00478c9f
    ADD ESI,0xc                         ; 00478ca0
    CMP EDI,ECX                         ; 00478ca3
    JL 0x00478c2d                       ; 00478ca5
        ;   XREF to: 00478c2d (CONDITIONAL_JUMP)  ; LAB_00478c2d
    MOV dword ptr [0x01c2200c],EBX      ; 00478ca7 | DAT_01c2200c
        ;   Label: LAB_00478ca7
    MOV ESP,EBP                         ; 00478cad
    POP EBP                             ; 00478caf
    POP EDI                             ; 00478cb0
    POP ESI                             ; 00478cb1
    POP EBX                             ; 00478cb2
    RET                                 ; 00478cb3
    IMUL ECX,EBX,0xc                    ; 00478cb4
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 00478cb7
    SUB ESP,0x8                         ; 00478cba
    FSTP double ptr [ESP]               ; 00478cbd
    PUSH 0x0                            ; 00478cc0
    PUSH 0x0                            ; 00478cc2
    PUSH 0xbff00000                     ; 00478cc4
    PUSH 0x0                            ; 00478cc9
    PUSH 0x0                            ; 00478ccb
    PUSH 0x0                            ; 00478ccd
    ADD ECX,0x1c22010                   ; 00478ccf
    PUSH ECX                            ; 00478cd5
    PUSH EDX                            ; 00478cd6
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00478cd7
    PUSH EAX                            ; 00478cdb
    MOV dword ptr [0x01c2200c],EBX      ; 00478cdc | DAT_01c2200c
    CALL core_dtri.cpp_clipLineToPlane_FUN_00478900 ; 00478ce2
        ;   XREF to: 00478900 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00478900(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x01c2200c]      ; 00478ce7 | DAT_01c2200c
    ADD ESP,0x2c                        ; 00478ced
    JMP 0x00478c98                      ; 00478cf0
        ;   XREF to: 00478c98 (UNCONDITIONAL_JUMP)  ; LAB_00478c98
    IMUL ECX,EBX,0xc                    ; 00478cf2
        ;   Label: caseD_2
    ADD ECX,0x1c22010                   ; 00478cf5
    CMP ECX,EDX                         ; 00478cfb
    JZ 0x00478d0f                       ; 00478cfd
        ;   XREF to: 00478d0f (CONDITIONAL_JUMP)  ; LAB_00478d0f
    MOV EAX,dword ptr [EDX]             ; 00478cff
    MOV dword ptr [ECX],EAX             ; 00478d01
    MOV EAX,dword ptr [EDX + 0x4]       ; 00478d03
    MOV dword ptr [ECX + 0x4],EAX       ; 00478d06
    MOV EAX,dword ptr [EDX + 0x8]       ; 00478d09
    MOV dword ptr [ECX + 0x8],EAX       ; 00478d0c
    INC EBX                             ; 00478d0f
        ;   Label: LAB_00478d0f
    IMUL ECX,EBX,0xc                    ; 00478d10
    FLD float ptr [ESP]                 ; 00478d13
    SUB ESP,0x8                         ; 00478d16
    FSTP double ptr [ESP]               ; 00478d19
    PUSH 0x0                            ; 00478d1c
    PUSH 0x0                            ; 00478d1e
    PUSH 0xbff00000                     ; 00478d20
    PUSH 0x0                            ; 00478d25
    PUSH 0x0                            ; 00478d27
    PUSH 0x0                            ; 00478d29
    ADD ECX,0x1c22010                   ; 00478d2b
    PUSH ECX                            ; 00478d31
    MOV ECX,dword ptr [ESP + 0x28]      ; 00478d32
    PUSH ECX                            ; 00478d36
    PUSH EDX                            ; 00478d37
    MOV dword ptr [0x01c2200c],EBX      ; 00478d38 | DAT_01c2200c
    CALL core_dtri.cpp_clipLineToPlane_FUN_00478900 ; 00478d3e
        ;   XREF to: 00478900 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00478900(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x01c2200c]      ; 00478d43 | DAT_01c2200c
    ADD ESP,0x2c                        ; 00478d49
    JMP 0x00478c98                      ; 00478d4c
        ;   XREF to: 00478c98 (UNCONDITIONAL_JUMP)  ; LAB_00478c98

