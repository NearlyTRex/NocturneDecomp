; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_clipPolygonToTop_FUN_00478aa0(float y_max)
;
; Parameters:
; float            Stack[0x4]:4   y_max
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_00478a94 = 00478b4c
;   undefined1* PTR_caseD_3_00478a9c = 00478b31
;   undefined4 DAT_01c21e84
;   undefined4 DAT_01c21f48
;
; Called Functions:
;   core_dtri.cpp_clipLineToPlane_FUN_00478900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478aa0
        ;   Label: core_dtri.cpp_clipPolygonToTop_FUN_00478aa0
    PUSH ESI                            ; 00478aa1
    PUSH EDI                            ; 00478aa2
    PUSH EBP                            ; 00478aa3
    MOV EBP,ESP                         ; 00478aa4
    SUB ESP,0x4                         ; 00478aa6
    AND ESP,0xfffffff8                  ; 00478aa9
    MOV EBX,dword ptr [0x01c21f48]      ; 00478aac | DAT_01c21f48
    MOV EDX,dword ptr [0x01c21e84]      ; 00478ab2 | DAT_01c21e84
    XOR ESI,ESI                         ; 00478ab8
    TEST EDX,EDX                        ; 00478aba
    JLE 0x00478b3f                      ; 00478abc
        ;   XREF to: 00478b3f (CONDITIONAL_JUMP)  ; LAB_00478b3f
    MOV EDI,0x1c21e88                   ; 00478ac2
    MOV EAX,[0x01c21e84]                ; 00478ac7 | DAT_01c21e84
        ;   Label: LAB_00478ac7
    LEA ECX,[ESI + 0x1]                 ; 00478acc
    CMP ECX,EAX                         ; 00478acf
    JNZ 0x00478ad5                      ; 00478ad1
        ;   XREF to: 00478ad5 (CONDITIONAL_JUMP)  ; LAB_00478ad5
    XOR ECX,EAX                         ; 00478ad3
    IMUL ECX,ECX,0xc                    ; 00478ad5
        ;   Label: LAB_00478ad5
    MOV EAX,0x1c21e88                   ; 00478ad8
    FLD float ptr [EDI + 0x4]           ; 00478add
    ADD EAX,ECX                         ; 00478ae0
    MOV EDX,EDI                         ; 00478ae2
    MOV dword ptr [ESP],EAX             ; 00478ae4
    XOR ECX,ECX                         ; 00478ae7
    FCOMP float ptr [EBP + 0x14]        ; 00478ae9
    FNSTSW AX                           ; 00478aec
    SAHF                                ; 00478aee
    JBE 0x00478af6                      ; 00478aef
        ;   XREF to: 00478af6 (CONDITIONAL_JUMP)  ; LAB_00478af6
    MOV ECX,0x1                         ; 00478af1
    MOV EAX,dword ptr [ESP]             ; 00478af6
        ;   Label: LAB_00478af6
    FLD float ptr [EAX + 0x4]           ; 00478af9
    FCOMP float ptr [EBP + 0x14]        ; 00478afc
    FNSTSW AX                           ; 00478aff
    SAHF                                ; 00478b01
    JBE 0x00478b07                      ; 00478b02
        ;   XREF to: 00478b07 (CONDITIONAL_JUMP)  ; LAB_00478b07
    OR CL,0x2                           ; 00478b04
    CMP ECX,0x3                         ; 00478b07
        ;   Label: LAB_00478b07
    JA 0x00478b31                       ; 00478b0a
        ;   XREF to: 00478b31 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x478a90]  ; 00478b0c | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 00478b13
        ;   Label: caseD_0
    ADD ECX,0x1c21f4c                   ; 00478b16
    CMP ECX,EDX                         ; 00478b1c
    JZ 0x00478b30                       ; 00478b1e
        ;   XREF to: 00478b30 (CONDITIONAL_JUMP)  ; LAB_00478b30
    MOV EAX,dword ptr [EDX]             ; 00478b20
    MOV dword ptr [ECX],EAX             ; 00478b22
    MOV EAX,dword ptr [EDX + 0x4]       ; 00478b24
    MOV dword ptr [ECX + 0x4],EAX       ; 00478b27
    MOV EAX,dword ptr [EDX + 0x8]       ; 00478b2a
    MOV dword ptr [ECX + 0x8],EAX       ; 00478b2d
    INC EBX                             ; 00478b30
        ;   Label: LAB_00478b30
    MOV ECX,dword ptr [0x01c21e84]      ; 00478b31 | DAT_01c21e84
        ;   Label: caseD_3
    INC ESI                             ; 00478b37
    ADD EDI,0xc                         ; 00478b38
    CMP ESI,ECX                         ; 00478b3b
    JL 0x00478ac7                       ; 00478b3d
        ;   XREF to: 00478ac7 (CONDITIONAL_JUMP)  ; LAB_00478ac7
    MOV dword ptr [0x01c21f48],EBX      ; 00478b3f | DAT_01c21f48
        ;   Label: LAB_00478b3f
    MOV ESP,EBP                         ; 00478b45
    POP EBP                             ; 00478b47
    POP EDI                             ; 00478b48
    POP ESI                             ; 00478b49
    POP EBX                             ; 00478b4a
    RET                                 ; 00478b4b
    IMUL ECX,EBX,0xc                    ; 00478b4c
        ;   Label: caseD_1
    FLD float ptr [EBP + 0x14]          ; 00478b4f
    SUB ESP,0x8                         ; 00478b52
    FCHS                                ; 00478b55
    FSTP double ptr [ESP]               ; 00478b57
    PUSH 0x0                            ; 00478b5a
    PUSH 0x0                            ; 00478b5c
    PUSH 0x3ff00000                     ; 00478b5e
    PUSH 0x0                            ; 00478b63
    PUSH 0x0                            ; 00478b65
    PUSH 0x0                            ; 00478b67
    ADD ECX,0x1c21f4c                   ; 00478b69
    PUSH ECX                            ; 00478b6f
    PUSH EDX                            ; 00478b70
    MOV EAX,dword ptr [ESP + 0x28]      ; 00478b71
    PUSH EAX                            ; 00478b75
    MOV dword ptr [0x01c21f48],EBX      ; 00478b76 | DAT_01c21f48
    CALL core_dtri.cpp_clipLineToPlane_FUN_00478900 ; 00478b7c
        ;   XREF to: 00478900 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00478900(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x01c21f48]      ; 00478b81 | DAT_01c21f48
    ADD ESP,0x2c                        ; 00478b87
    JMP 0x00478b30                      ; 00478b8a
        ;   XREF to: 00478b30 (UNCONDITIONAL_JUMP)  ; LAB_00478b30
    IMUL ECX,EBX,0xc                    ; 00478b8c
        ;   Label: caseD_2
    ADD ECX,0x1c21f4c                   ; 00478b8f
    CMP ECX,EDX                         ; 00478b95
    JZ 0x00478ba9                       ; 00478b97
        ;   XREF to: 00478ba9 (CONDITIONAL_JUMP)  ; LAB_00478ba9
    MOV EAX,dword ptr [EDX]             ; 00478b99
    MOV dword ptr [ECX],EAX             ; 00478b9b
    MOV EAX,dword ptr [EDX + 0x4]       ; 00478b9d
    MOV dword ptr [ECX + 0x4],EAX       ; 00478ba0
    MOV EAX,dword ptr [EDX + 0x8]       ; 00478ba3
    MOV dword ptr [ECX + 0x8],EAX       ; 00478ba6
    INC EBX                             ; 00478ba9
        ;   Label: LAB_00478ba9
    IMUL ECX,EBX,0xc                    ; 00478baa
    FLD float ptr [EBP + 0x14]          ; 00478bad
    SUB ESP,0x8                         ; 00478bb0
    FCHS                                ; 00478bb3
    FSTP double ptr [ESP]               ; 00478bb5
    PUSH 0x0                            ; 00478bb8
    PUSH 0x0                            ; 00478bba
    PUSH 0x3ff00000                     ; 00478bbc
    PUSH 0x0                            ; 00478bc1
    PUSH 0x0                            ; 00478bc3
    PUSH 0x0                            ; 00478bc5
    ADD ECX,0x1c21f4c                   ; 00478bc7
    PUSH ECX                            ; 00478bcd
    MOV ECX,dword ptr [ESP + 0x24]      ; 00478bce
    PUSH ECX                            ; 00478bd2
    PUSH EDX                            ; 00478bd3
    MOV dword ptr [0x01c21f48],EBX      ; 00478bd4 | DAT_01c21f48
    CALL core_dtri.cpp_clipLineToPlane_FUN_00478900 ; 00478bda
        ;   XREF to: 00478900 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00478900(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x01c21f48]      ; 00478bdf | DAT_01c21f48
    ADD ESP,0x2c                        ; 00478be5
    JMP 0x00478b30                      ; 00478be8
        ;   XREF to: 00478b30 (UNCONDITIONAL_JUMP)  ; LAB_00478b30

