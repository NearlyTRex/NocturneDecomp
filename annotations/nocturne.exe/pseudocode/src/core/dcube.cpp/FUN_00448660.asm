; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcube_cpp_FUN_00448660(float param_1)
;
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_00448654 = 0044870c
;   undefined1* PTR_caseD_3_0044865c = 004486f1
;   undefined4 DAT_014b848c
;   undefined4 DAT_014b8550
;
; Called Functions:
;   core_dcube.cpp_clipEdgeToPlane_FUN_004484c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448660
        ;   Label: core_dcube.cpp_FUN_00448660
    PUSH ESI                            ; 00448661
    PUSH EDI                            ; 00448662
    PUSH EBP                            ; 00448663
    MOV EBP,ESP                         ; 00448664
    SUB ESP,0x4                         ; 00448666
    AND ESP,0xfffffff8                  ; 00448669
    MOV EBX,dword ptr [0x014b8550]      ; 0044866c | DAT_014b8550
    MOV EDX,dword ptr [0x014b848c]      ; 00448672 | DAT_014b848c
    XOR ESI,ESI                         ; 00448678
    TEST EDX,EDX                        ; 0044867a
    JLE 0x004486ff                      ; 0044867c
        ;   XREF to: 004486ff (CONDITIONAL_JUMP)  ; LAB_004486ff
    MOV EDI,0x14b8490                   ; 00448682
    MOV EAX,[0x014b848c]                ; 00448687 | DAT_014b848c
        ;   Label: LAB_00448687
    LEA ECX,[ESI + 0x1]                 ; 0044868c
    CMP ECX,EAX                         ; 0044868f
    JNZ 0x00448695                      ; 00448691
        ;   XREF to: 00448695 (CONDITIONAL_JUMP)  ; LAB_00448695
    XOR ECX,EAX                         ; 00448693
    IMUL ECX,ECX,0xc                    ; 00448695
        ;   Label: LAB_00448695
    MOV EAX,0x14b8490                   ; 00448698
    FLD float ptr [EDI + 0x4]           ; 0044869d
    ADD EAX,ECX                         ; 004486a0
    MOV EDX,EDI                         ; 004486a2
    MOV dword ptr [ESP],EAX             ; 004486a4
    XOR ECX,ECX                         ; 004486a7
    FCOMP float ptr [EBP + 0x14]        ; 004486a9
    FNSTSW AX                           ; 004486ac
    SAHF                                ; 004486ae
    JBE 0x004486b6                      ; 004486af
        ;   XREF to: 004486b6 (CONDITIONAL_JUMP)  ; LAB_004486b6
    MOV ECX,0x1                         ; 004486b1
    MOV EAX,dword ptr [ESP]             ; 004486b6
        ;   Label: LAB_004486b6
    FLD float ptr [EAX + 0x4]           ; 004486b9
    FCOMP float ptr [EBP + 0x14]        ; 004486bc
    FNSTSW AX                           ; 004486bf
    SAHF                                ; 004486c1
    JBE 0x004486c7                      ; 004486c2
        ;   XREF to: 004486c7 (CONDITIONAL_JUMP)  ; LAB_004486c7
    OR CL,0x2                           ; 004486c4
    CMP ECX,0x3                         ; 004486c7
        ;   Label: LAB_004486c7
    JA 0x004486f1                       ; 004486ca
        ;   XREF to: 004486f1 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x448650]  ; 004486cc | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 004486d3
        ;   Label: caseD_0
    ADD ECX,0x14b8554                   ; 004486d6
    CMP ECX,EDX                         ; 004486dc
    JZ 0x004486f0                       ; 004486de
        ;   XREF to: 004486f0 (CONDITIONAL_JUMP)  ; LAB_004486f0
    MOV EAX,dword ptr [EDX]             ; 004486e0
    MOV dword ptr [ECX],EAX             ; 004486e2
    MOV EAX,dword ptr [EDX + 0x4]       ; 004486e4
    MOV dword ptr [ECX + 0x4],EAX       ; 004486e7
    MOV EAX,dword ptr [EDX + 0x8]       ; 004486ea
    MOV dword ptr [ECX + 0x8],EAX       ; 004486ed
    INC EBX                             ; 004486f0
        ;   Label: LAB_004486f0
    MOV ECX,dword ptr [0x014b848c]      ; 004486f1 | DAT_014b848c
        ;   Label: caseD_3
    INC ESI                             ; 004486f7
    ADD EDI,0xc                         ; 004486f8
    CMP ESI,ECX                         ; 004486fb
    JL 0x00448687                       ; 004486fd
        ;   XREF to: 00448687 (CONDITIONAL_JUMP)  ; LAB_00448687
    MOV dword ptr [0x014b8550],EBX      ; 004486ff | DAT_014b8550
        ;   Label: LAB_004486ff
    MOV ESP,EBP                         ; 00448705
    POP EBP                             ; 00448707
    POP EDI                             ; 00448708
    POP ESI                             ; 00448709
    POP EBX                             ; 0044870a
    RET                                 ; 0044870b
    IMUL ECX,EBX,0xc                    ; 0044870c
        ;   Label: caseD_1
    FLD float ptr [EBP + 0x14]          ; 0044870f
    SUB ESP,0x8                         ; 00448712
    FCHS                                ; 00448715
    FSTP double ptr [ESP]               ; 00448717
    PUSH 0x0                            ; 0044871a
    PUSH 0x0                            ; 0044871c
    PUSH 0x3ff00000                     ; 0044871e
    PUSH 0x0                            ; 00448723
    PUSH 0x0                            ; 00448725
    PUSH 0x0                            ; 00448727
    ADD ECX,0x14b8554                   ; 00448729
    PUSH ECX                            ; 0044872f
    PUSH EDX                            ; 00448730
    MOV EAX,dword ptr [ESP + 0x28]      ; 00448731
    PUSH EAX                            ; 00448735
    MOV dword ptr [0x014b8550],EBX      ; 00448736 | DAT_014b8550
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004484c0 ; 0044873c
        ;   XREF to: 004484c0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_004484c0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x014b8550]      ; 00448741 | DAT_014b8550
    ADD ESP,0x2c                        ; 00448747
    JMP 0x004486f0                      ; 0044874a
        ;   XREF to: 004486f0 (UNCONDITIONAL_JUMP)  ; LAB_004486f0
    IMUL ECX,EBX,0xc                    ; 0044874c
        ;   Label: caseD_2
    ADD ECX,0x14b8554                   ; 0044874f
    CMP ECX,EDX                         ; 00448755
    JZ 0x00448769                       ; 00448757
        ;   XREF to: 00448769 (CONDITIONAL_JUMP)  ; LAB_00448769
    MOV EAX,dword ptr [EDX]             ; 00448759
    MOV dword ptr [ECX],EAX             ; 0044875b
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044875d
    MOV dword ptr [ECX + 0x4],EAX       ; 00448760
    MOV EAX,dword ptr [EDX + 0x8]       ; 00448763
    MOV dword ptr [ECX + 0x8],EAX       ; 00448766
    INC EBX                             ; 00448769
        ;   Label: LAB_00448769
    IMUL ECX,EBX,0xc                    ; 0044876a
    FLD float ptr [EBP + 0x14]          ; 0044876d
    SUB ESP,0x8                         ; 00448770
    FCHS                                ; 00448773
    FSTP double ptr [ESP]               ; 00448775
    PUSH 0x0                            ; 00448778
    PUSH 0x0                            ; 0044877a
    PUSH 0x3ff00000                     ; 0044877c
    PUSH 0x0                            ; 00448781
    PUSH 0x0                            ; 00448783
    PUSH 0x0                            ; 00448785
    ADD ECX,0x14b8554                   ; 00448787
    PUSH ECX                            ; 0044878d
    MOV ECX,dword ptr [ESP + 0x24]      ; 0044878e
    PUSH ECX                            ; 00448792
    PUSH EDX                            ; 00448793
    MOV dword ptr [0x014b8550],EBX      ; 00448794 | DAT_014b8550
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004484c0 ; 0044879a
        ;   XREF to: 004484c0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_004484c0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x014b8550]      ; 0044879f | DAT_014b8550
    ADD ESP,0x2c                        ; 004487a5
    JMP 0x004486f0                      ; 004487a8
        ;   XREF to: 004486f0 (UNCONDITIONAL_JUMP)  ; LAB_004486f0

