; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_clipPolygonToTop_FUN_00490f90(float y_max)
;
; Parameters:
; float            Stack[0x4]:4   y_max
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_00490f84 = 0049103c
;   undefined1* PTR_caseD_3_00490f8c = 00491021
;   int g_ClipInputVertexCount
;   int g_ClipBuffer1VertexCount
;
; Called Functions:
;   core_dtri.cpp_clipLineToPlane_FUN_00490df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00490f90
        ;   Label: core_dtri.cpp_clipPolygonToTop_FUN_00490f90
    PUSH ESI                            ; 00490f91
    PUSH EDI                            ; 00490f92
    PUSH EBP                            ; 00490f93
    MOV EBP,ESP                         ; 00490f94
    SUB ESP,0x4                         ; 00490f96
    AND ESP,0xfffffff8                  ; 00490f99
    MOV EBX,dword ptr [0x01c3d504]      ; 00490f9c | g_ClipBuffer1VertexCount
    MOV EDX,dword ptr [0x01c3d440]      ; 00490fa2 | g_ClipInputVertexCount
    XOR ESI,ESI                         ; 00490fa8
    TEST EDX,EDX                        ; 00490faa
    JLE 0x0049102f                      ; 00490fac
        ;   XREF to: 0049102f (CONDITIONAL_JUMP)  ; LAB_0049102f
    MOV EDI,0x1c3d444                   ; 00490fb2
    MOV EAX,[0x01c3d440]                ; 00490fb7 | g_ClipInputVertexCount
        ;   Label: LAB_00490fb7
    LEA ECX,[ESI + 0x1]                 ; 00490fbc
    CMP ECX,EAX                         ; 00490fbf
    JNZ 0x00490fc5                      ; 00490fc1
        ;   XREF to: 00490fc5 (CONDITIONAL_JUMP)  ; LAB_00490fc5
    XOR ECX,EAX                         ; 00490fc3
    IMUL ECX,ECX,0xc                    ; 00490fc5
        ;   Label: LAB_00490fc5
    MOV EAX,0x1c3d444                   ; 00490fc8
    FLD float ptr [EDI + 0x4]           ; 00490fcd
    ADD EAX,ECX                         ; 00490fd0
    MOV EDX,EDI                         ; 00490fd2
    MOV dword ptr [ESP],EAX             ; 00490fd4
    XOR ECX,ECX                         ; 00490fd7
    FCOMP float ptr [EBP + 0x14]        ; 00490fd9
    FNSTSW AX                           ; 00490fdc
    SAHF                                ; 00490fde
    JBE 0x00490fe6                      ; 00490fdf
        ;   XREF to: 00490fe6 (CONDITIONAL_JUMP)  ; LAB_00490fe6
    MOV ECX,0x1                         ; 00490fe1
    MOV EAX,dword ptr [ESP]             ; 00490fe6
        ;   Label: LAB_00490fe6
    FLD float ptr [EAX + 0x4]           ; 00490fe9
    FCOMP float ptr [EBP + 0x14]        ; 00490fec
    FNSTSW AX                           ; 00490fef
    SAHF                                ; 00490ff1
    JBE 0x00490ff7                      ; 00490ff2
        ;   XREF to: 00490ff7 (CONDITIONAL_JUMP)  ; LAB_00490ff7
    OR CL,0x2                           ; 00490ff4
    CMP ECX,0x3                         ; 00490ff7
        ;   Label: LAB_00490ff7
    JA 0x00491021                       ; 00490ffa
        ;   XREF to: 00491021 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x490f80]  ; 00490ffc | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 00491003
        ;   Label: caseD_0
    ADD ECX,0x1c3d508                   ; 00491006
    CMP ECX,EDX                         ; 0049100c
    JZ 0x00491020                       ; 0049100e
        ;   XREF to: 00491020 (CONDITIONAL_JUMP)  ; LAB_00491020
    MOV EAX,dword ptr [EDX]             ; 00491010
    MOV dword ptr [ECX],EAX             ; 00491012
    MOV EAX,dword ptr [EDX + 0x4]       ; 00491014
    MOV dword ptr [ECX + 0x4],EAX       ; 00491017
    MOV EAX,dword ptr [EDX + 0x8]       ; 0049101a
    MOV dword ptr [ECX + 0x8],EAX       ; 0049101d
    INC EBX                             ; 00491020
        ;   Label: LAB_00491020
    MOV ECX,dword ptr [0x01c3d440]      ; 00491021 | g_ClipInputVertexCount
        ;   Label: caseD_3
    INC ESI                             ; 00491027
    ADD EDI,0xc                         ; 00491028
    CMP ESI,ECX                         ; 0049102b
    JL 0x00490fb7                       ; 0049102d
        ;   XREF to: 00490fb7 (CONDITIONAL_JUMP)  ; LAB_00490fb7
    MOV dword ptr [0x01c3d504],EBX      ; 0049102f | g_ClipBuffer1VertexCount
        ;   Label: LAB_0049102f
    MOV ESP,EBP                         ; 00491035
    POP EBP                             ; 00491037
    POP EDI                             ; 00491038
    POP ESI                             ; 00491039
    POP EBX                             ; 0049103a
    RET                                 ; 0049103b
    IMUL ECX,EBX,0xc                    ; 0049103c
        ;   Label: caseD_1
    FLD float ptr [EBP + 0x14]          ; 0049103f
    SUB ESP,0x8                         ; 00491042
    FCHS                                ; 00491045
    FSTP double ptr [ESP]               ; 00491047
    PUSH 0x0                            ; 0049104a
    PUSH 0x0                            ; 0049104c
    PUSH 0x3ff00000                     ; 0049104e
    PUSH 0x0                            ; 00491053
    PUSH 0x0                            ; 00491055
    PUSH 0x0                            ; 00491057
    ADD ECX,0x1c3d508                   ; 00491059
    PUSH ECX                            ; 0049105f
    PUSH EDX                            ; 00491060
    MOV EAX,dword ptr [ESP + 0x28]      ; 00491061
    PUSH EAX                            ; 00491065
    MOV dword ptr [0x01c3d504],EBX      ; 00491066 | g_ClipBuffer1VertexCount
    CALL core_dtri.cpp_clipLineToPlane_FUN_00490df0 ; 0049106c
        ;   XREF to: 00490df0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00490df0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x01c3d504]      ; 00491071 | g_ClipBuffer1VertexCount
    ADD ESP,0x2c                        ; 00491077
    JMP 0x00491020                      ; 0049107a
        ;   XREF to: 00491020 (UNCONDITIONAL_JUMP)  ; LAB_00491020
    IMUL ECX,EBX,0xc                    ; 0049107c
        ;   Label: caseD_2
    ADD ECX,0x1c3d508                   ; 0049107f
    CMP ECX,EDX                         ; 00491085
    JZ 0x00491099                       ; 00491087
        ;   XREF to: 00491099 (CONDITIONAL_JUMP)  ; LAB_00491099
    MOV EAX,dword ptr [EDX]             ; 00491089
    MOV dword ptr [ECX],EAX             ; 0049108b
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049108d
    MOV dword ptr [ECX + 0x4],EAX       ; 00491090
    MOV EAX,dword ptr [EDX + 0x8]       ; 00491093
    MOV dword ptr [ECX + 0x8],EAX       ; 00491096
    INC EBX                             ; 00491099
        ;   Label: LAB_00491099
    IMUL ECX,EBX,0xc                    ; 0049109a
    FLD float ptr [EBP + 0x14]          ; 0049109d
    SUB ESP,0x8                         ; 004910a0
    FCHS                                ; 004910a3
    FSTP double ptr [ESP]               ; 004910a5
    PUSH 0x0                            ; 004910a8
    PUSH 0x0                            ; 004910aa
    PUSH 0x3ff00000                     ; 004910ac
    PUSH 0x0                            ; 004910b1
    PUSH 0x0                            ; 004910b3
    PUSH 0x0                            ; 004910b5
    ADD ECX,0x1c3d508                   ; 004910b7
    PUSH ECX                            ; 004910bd
    MOV ECX,dword ptr [ESP + 0x24]      ; 004910be
    PUSH ECX                            ; 004910c2
    PUSH EDX                            ; 004910c3
    MOV dword ptr [0x01c3d504],EBX      ; 004910c4 | g_ClipBuffer1VertexCount
    CALL core_dtri.cpp_clipLineToPlane_FUN_00490df0 ; 004910ca
        ;   XREF to: 00490df0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00490df0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x01c3d504]      ; 004910cf | g_ClipBuffer1VertexCount
    ADD ESP,0x2c                        ; 004910d5
    JMP 0x00491020                      ; 004910d8
        ;   XREF to: 00491020 (UNCONDITIONAL_JUMP)  ; LAB_00491020

