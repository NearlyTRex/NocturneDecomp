; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcube_cpp_FUN_00448930(float param_1)
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_00448918 = 004489da
;   undefined1* PTR_caseD_3_00448920 = 004489bf
;   undefined4 DAT_014b8614
;   CVector3f[16] g_CVector3f_ARRAY_014b8618
;   undefined4 g_CVector3f_ARRAY_014b8618[0].y
;   undefined4 g_CVector3f_ARRAY_014b8618[0].z
;   undefined4 g_CVector3f_ARRAY_014b8618[1].x
;   undefined4 g_CVector3f_ARRAY_014b8618[2].x
;   undefined4 DAT_014b86d8
;   CVector3f[16] g_CVector3f_ARRAY_014b86dc
;   undefined4 g_CVector3f_ARRAY_014b86dc[0].y
;   undefined4 g_CVector3f_ARRAY_014b86dc[0].z
;
; Called Functions:
;   core_dcube.cpp_clipEdgeToPlane_FUN_004484c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448930
        ;   Label: core_dcube.cpp_FUN_00448930
    PUSH ESI                            ; 00448931
    PUSH EDI                            ; 00448932
    PUSH EBP                            ; 00448933
    MOV EBP,ESP                         ; 00448934
    SUB ESP,0x4                         ; 00448936
    AND ESP,0xfffffff8                  ; 00448939
    MOV EBX,dword ptr [0x014b86d8]      ; 0044893c | DAT_014b86d8
    MOV EDX,dword ptr [0x014b8614]      ; 00448942 | DAT_014b8614
    XOR ESI,ESI                         ; 00448948
    TEST EDX,EDX                        ; 0044894a
    JLE 0x004489cd                      ; 0044894c
        ;   XREF to: 004489cd (CONDITIONAL_JUMP)  ; LAB_004489cd
    MOV EDI,0x14b8618                   ; 00448952
    MOV EAX,[0x014b8614]                ; 00448957 | DAT_014b8614
        ;   Label: LAB_00448957
    LEA ECX,[ESI + 0x1]                 ; 0044895c
    CMP ECX,EAX                         ; 0044895f
    JNZ 0x00448965                      ; 00448961
        ;   XREF to: 00448965 (CONDITIONAL_JUMP)  ; LAB_00448965
    XOR ECX,EAX                         ; 00448963
    IMUL ECX,ECX,0xc                    ; 00448965
        ;   Label: LAB_00448965
    MOV EAX,0x14b8618                   ; 00448968
    FLD float ptr [EDI]                 ; 0044896d | g_CVector3f_ARRAY_014b8618 | g_CVector3f_ARRAY_014b8618[1].x
    ADD EAX,ECX                         ; 0044896f
    MOV EDX,EDI                         ; 00448971
    MOV dword ptr [ESP],EAX             ; 00448973 | g_CVector3f_ARRAY_014b8618[2].x
    XOR ECX,ECX                         ; 00448976
    FCOMP float ptr [EBP + 0x14]        ; 00448978
    FNSTSW AX                           ; 0044897b
    SAHF                                ; 0044897d
    JBE 0x00448985                      ; 0044897e
        ;   XREF to: 00448985 (CONDITIONAL_JUMP)  ; LAB_00448985
    MOV ECX,0x1                         ; 00448980
    MOV EAX,dword ptr [ESP]             ; 00448985
        ;   Label: LAB_00448985
    FLD float ptr [EAX]                 ; 00448988 | g_CVector3f_ARRAY_014b8618 | g_CVector3f_ARRAY_014b8618[2].x
    FCOMP float ptr [EBP + 0x14]        ; 0044898a
    FNSTSW AX                           ; 0044898d
    SAHF                                ; 0044898f
    JBE 0x00448995                      ; 00448990
        ;   XREF to: 00448995 (CONDITIONAL_JUMP)  ; LAB_00448995
    OR CL,0x2                           ; 00448992
    CMP ECX,0x3                         ; 00448995
        ;   Label: LAB_00448995
    JA 0x004489bf                       ; 00448998
        ;   XREF to: 004489bf (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x448914]  ; 0044899a | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 004489a1
        ;   Label: caseD_0
    ADD ECX,0x14b86dc                   ; 004489a4
    CMP ECX,EDX                         ; 004489aa
    JZ 0x004489be                       ; 004489ac
        ;   XREF to: 004489be (CONDITIONAL_JUMP)  ; LAB_004489be
    MOV EAX,dword ptr [EDX]             ; 004489ae | g_CVector3f_ARRAY_014b8618
    MOV dword ptr [ECX],EAX             ; 004489b0 | g_CVector3f_ARRAY_014b86dc
    MOV EAX,dword ptr [EDX + 0x4]       ; 004489b2 | g_CVector3f_ARRAY_014b8618[0].y
    MOV dword ptr [ECX + 0x4],EAX       ; 004489b5 | g_CVector3f_ARRAY_014b86dc[0].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 004489b8 | g_CVector3f_ARRAY_014b8618[0].z
    MOV dword ptr [ECX + 0x8],EAX       ; 004489bb | g_CVector3f_ARRAY_014b86dc[0].z
    INC EBX                             ; 004489be
        ;   Label: LAB_004489be
    MOV ECX,dword ptr [0x014b8614]      ; 004489bf | DAT_014b8614
        ;   Label: caseD_3
    INC ESI                             ; 004489c5
    ADD EDI,0xc                         ; 004489c6
    CMP ESI,ECX                         ; 004489c9
    JL 0x00448957                       ; 004489cb
        ;   XREF to: 00448957 (CONDITIONAL_JUMP)  ; LAB_00448957
    MOV dword ptr [0x014b86d8],EBX      ; 004489cd | DAT_014b86d8
        ;   Label: LAB_004489cd
    MOV ESP,EBP                         ; 004489d3
    POP EBP                             ; 004489d5
    POP EDI                             ; 004489d6
    POP ESI                             ; 004489d7
    POP EBX                             ; 004489d8
    RET                                 ; 004489d9
    IMUL ECX,EBX,0xc                    ; 004489da
        ;   Label: caseD_1
    FLD float ptr [EBP + 0x14]          ; 004489dd
    SUB ESP,0x8                         ; 004489e0
    FCHS                                ; 004489e3
    FSTP double ptr [ESP]               ; 004489e5
    PUSH 0x0                            ; 004489e8
    PUSH 0x0                            ; 004489ea
    PUSH 0x0                            ; 004489ec
    PUSH 0x0                            ; 004489ee
    PUSH 0x3ff00000                     ; 004489f0
    PUSH 0x0                            ; 004489f5
    ADD ECX,0x14b86dc                   ; 004489f7
    PUSH ECX                            ; 004489fd
    PUSH EDX                            ; 004489fe | g_CVector3f_ARRAY_014b8618
    MOV EAX,dword ptr [ESP + 0x28]      ; 004489ff
    PUSH EAX                            ; 00448a03
    MOV dword ptr [0x014b86d8],EBX      ; 00448a04 | DAT_014b86d8
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004484c0 ; 00448a0a
        ;   XREF to: 004484c0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_004484c0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x014b86d8]      ; 00448a0f | DAT_014b86d8
    ADD ESP,0x2c                        ; 00448a15
    JMP 0x004489be                      ; 00448a18
        ;   XREF to: 004489be (UNCONDITIONAL_JUMP)  ; LAB_004489be
    IMUL ECX,EBX,0xc                    ; 00448a1a
        ;   Label: caseD_2
    ADD ECX,0x14b86dc                   ; 00448a1d
    CMP ECX,EDX                         ; 00448a23
    JZ 0x00448a37                       ; 00448a25
        ;   XREF to: 00448a37 (CONDITIONAL_JUMP)  ; LAB_00448a37
    MOV EAX,dword ptr [EDX]             ; 00448a27 | g_CVector3f_ARRAY_014b8618
    MOV dword ptr [ECX],EAX             ; 00448a29 | g_CVector3f_ARRAY_014b86dc
    MOV EAX,dword ptr [EDX + 0x4]       ; 00448a2b | g_CVector3f_ARRAY_014b8618[0].y
    MOV dword ptr [ECX + 0x4],EAX       ; 00448a2e | g_CVector3f_ARRAY_014b86dc[0].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 00448a31 | g_CVector3f_ARRAY_014b8618[0].z
    MOV dword ptr [ECX + 0x8],EAX       ; 00448a34 | g_CVector3f_ARRAY_014b86dc[0].z
    INC EBX                             ; 00448a37
        ;   Label: LAB_00448a37
    IMUL ECX,EBX,0xc                    ; 00448a38
    FLD float ptr [EBP + 0x14]          ; 00448a3b
    SUB ESP,0x8                         ; 00448a3e
    FCHS                                ; 00448a41
    FSTP double ptr [ESP]               ; 00448a43
    PUSH 0x0                            ; 00448a46
    PUSH 0x0                            ; 00448a48
    PUSH 0x0                            ; 00448a4a
    PUSH 0x0                            ; 00448a4c
    PUSH 0x3ff00000                     ; 00448a4e
    PUSH 0x0                            ; 00448a53
    ADD ECX,0x14b86dc                   ; 00448a55
    PUSH ECX                            ; 00448a5b
    MOV ECX,dword ptr [ESP + 0x24]      ; 00448a5c
    PUSH ECX                            ; 00448a60
    PUSH EDX                            ; 00448a61 | g_CVector3f_ARRAY_014b8618
    MOV dword ptr [0x014b86d8],EBX      ; 00448a62 | DAT_014b86d8
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004484c0 ; 00448a68
        ;   XREF to: 004484c0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_004484c0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x014b86d8]      ; 00448a6d | DAT_014b86d8
    ADD ESP,0x2c                        ; 00448a73
    JMP 0x004489be                      ; 00448a76
        ;   XREF to: 004489be (UNCONDITIONAL_JUMP)  ; LAB_004489be

