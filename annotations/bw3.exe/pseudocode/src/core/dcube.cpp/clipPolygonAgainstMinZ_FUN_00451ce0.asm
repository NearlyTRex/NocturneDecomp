; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_clipPolygonAgainstMinZ_FUN_00451ce0(float min_z_plane)
;
; Parameters:
; float            Stack[0x4]:4   min_z_plane
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_00451cd4 = 00451d94
;   undefined1* PTR_caseD_3_00451cdc = 00451d79
;   int g_INT_0154890c
;   uint g_CubeClipStage5Count
;
; Called Functions:
;   core_dcube.cpp_clipEdgeToPlane_FUN_004515b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00451ce0
        ;   Label: core_dcube.cpp_clipPolygonAgainstMinZ_FUN_00451ce0
    PUSH ESI                            ; 00451ce1
    PUSH EDI                            ; 00451ce2
    PUSH EBP                            ; 00451ce3
    MOV EBP,ESP                         ; 00451ce4
    SUB ESP,0x8                         ; 00451ce6
    AND ESP,0xfffffff8                  ; 00451ce9
    MOV EBX,dword ptr [0x015489d0]      ; 00451cec | g_CubeClipStage5Count
    MOV EDX,dword ptr [EBP + 0x14]      ; 00451cf2
    MOV dword ptr [ESP],EDX             ; 00451cf5
    MOV EDX,dword ptr [0x0154890c]      ; 00451cf8 | g_INT_0154890c
    XOR EDI,EDI                         ; 00451cfe
    TEST EDX,EDX                        ; 00451d00
    JLE 0x00451d87                      ; 00451d02
        ;   XREF to: 00451d87 (CONDITIONAL_JUMP)  ; LAB_00451d87
    MOV ESI,0x1548910                   ; 00451d08
    MOV EAX,[0x0154890c]                ; 00451d0d | g_INT_0154890c
        ;   Label: LAB_00451d0d
    LEA ECX,[EDI + 0x1]                 ; 00451d12
    CMP ECX,EAX                         ; 00451d15
    JNZ 0x00451d1b                      ; 00451d17
        ;   XREF to: 00451d1b (CONDITIONAL_JUMP)  ; LAB_00451d1b
    XOR ECX,EAX                         ; 00451d19
    IMUL ECX,ECX,0xc                    ; 00451d1b
        ;   Label: LAB_00451d1b
    MOV EAX,0x1548910                   ; 00451d1e
    FLD float ptr [ESI + 0x8]           ; 00451d23
    ADD EAX,ECX                         ; 00451d26
    MOV EDX,ESI                         ; 00451d28
    MOV dword ptr [ESP + 0x4],EAX       ; 00451d2a
    XOR ECX,ECX                         ; 00451d2e
    FCOMP float ptr [ESP]               ; 00451d30
    FNSTSW AX                           ; 00451d33
    SAHF                                ; 00451d35
    JNC 0x00451d3d                      ; 00451d36
        ;   XREF to: 00451d3d (CONDITIONAL_JUMP)  ; LAB_00451d3d
    MOV ECX,0x1                         ; 00451d38
    MOV EAX,dword ptr [ESP + 0x4]       ; 00451d3d
        ;   Label: LAB_00451d3d
    FLD float ptr [EAX + 0x8]           ; 00451d41
    FCOMP float ptr [ESP]               ; 00451d44
    FNSTSW AX                           ; 00451d47
    SAHF                                ; 00451d49
    JNC 0x00451d4f                      ; 00451d4a
        ;   XREF to: 00451d4f (CONDITIONAL_JUMP)  ; LAB_00451d4f
    OR CL,0x2                           ; 00451d4c
    CMP ECX,0x3                         ; 00451d4f
        ;   Label: LAB_00451d4f
    JA 0x00451d79                       ; 00451d52
        ;   XREF to: 00451d79 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x451cd0]  ; 00451d54 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 00451d5b
        ;   Label: caseD_0
    ADD ECX,0x15489d4                   ; 00451d5e
    CMP ECX,EDX                         ; 00451d64
    JZ 0x00451d78                       ; 00451d66
        ;   XREF to: 00451d78 (CONDITIONAL_JUMP)  ; LAB_00451d78
    MOV EAX,dword ptr [EDX]             ; 00451d68
    MOV dword ptr [ECX],EAX             ; 00451d6a
    MOV EAX,dword ptr [EDX + 0x4]       ; 00451d6c
    MOV dword ptr [ECX + 0x4],EAX       ; 00451d6f
    MOV EAX,dword ptr [EDX + 0x8]       ; 00451d72
    MOV dword ptr [ECX + 0x8],EAX       ; 00451d75
    INC EBX                             ; 00451d78
        ;   Label: LAB_00451d78
    MOV ECX,dword ptr [0x0154890c]      ; 00451d79 | g_INT_0154890c
        ;   Label: caseD_3
    INC EDI                             ; 00451d7f
    ADD ESI,0xc                         ; 00451d80
    CMP EDI,ECX                         ; 00451d83
    JL 0x00451d0d                       ; 00451d85
        ;   XREF to: 00451d0d (CONDITIONAL_JUMP)  ; LAB_00451d0d
    MOV dword ptr [0x015489d0],EBX      ; 00451d87 | g_CubeClipStage5Count
        ;   Label: LAB_00451d87
    MOV ESP,EBP                         ; 00451d8d
    POP EBP                             ; 00451d8f
    POP EDI                             ; 00451d90
    POP ESI                             ; 00451d91
    POP EBX                             ; 00451d92
    RET                                 ; 00451d93
    IMUL ECX,EBX,0xc                    ; 00451d94
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 00451d97
    SUB ESP,0x8                         ; 00451d9a
    FSTP double ptr [ESP]               ; 00451d9d
    PUSH 0xbff00000                     ; 00451da0
    PUSH 0x0                            ; 00451da5
    PUSH 0x0                            ; 00451da7
    PUSH 0x0                            ; 00451da9
    PUSH 0x0                            ; 00451dab
    PUSH 0x0                            ; 00451dad
    ADD ECX,0x15489d4                   ; 00451daf
    PUSH ECX                            ; 00451db5
    PUSH EDX                            ; 00451db6
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00451db7
    PUSH EAX                            ; 00451dbb
    MOV dword ptr [0x015489d0],EBX      ; 00451dbc | g_CubeClipStage5Count
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004515b0 ; 00451dc2
        ;   XREF to: 004515b0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_004515b0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x015489d0]      ; 00451dc7 | g_CubeClipStage5Count
    ADD ESP,0x2c                        ; 00451dcd
    JMP 0x00451d78                      ; 00451dd0
        ;   XREF to: 00451d78 (UNCONDITIONAL_JUMP)  ; LAB_00451d78
    IMUL ECX,EBX,0xc                    ; 00451dd2
        ;   Label: caseD_2
    ADD ECX,0x15489d4                   ; 00451dd5
    CMP ECX,EDX                         ; 00451ddb
    JZ 0x00451def                       ; 00451ddd
        ;   XREF to: 00451def (CONDITIONAL_JUMP)  ; LAB_00451def
    MOV EAX,dword ptr [EDX]             ; 00451ddf
    MOV dword ptr [ECX],EAX             ; 00451de1
    MOV EAX,dword ptr [EDX + 0x4]       ; 00451de3
    MOV dword ptr [ECX + 0x4],EAX       ; 00451de6
    MOV EAX,dword ptr [EDX + 0x8]       ; 00451de9
    MOV dword ptr [ECX + 0x8],EAX       ; 00451dec
    INC EBX                             ; 00451def
        ;   Label: LAB_00451def
    IMUL ECX,EBX,0xc                    ; 00451df0
    FLD float ptr [ESP]                 ; 00451df3
    SUB ESP,0x8                         ; 00451df6
    FSTP double ptr [ESP]               ; 00451df9
    PUSH 0xbff00000                     ; 00451dfc
    PUSH 0x0                            ; 00451e01
    PUSH 0x0                            ; 00451e03
    PUSH 0x0                            ; 00451e05
    PUSH 0x0                            ; 00451e07
    PUSH 0x0                            ; 00451e09
    ADD ECX,0x15489d4                   ; 00451e0b
    PUSH ECX                            ; 00451e11
    MOV ECX,dword ptr [ESP + 0x28]      ; 00451e12
    PUSH ECX                            ; 00451e16
    PUSH EDX                            ; 00451e17
    MOV dword ptr [0x015489d0],EBX      ; 00451e18 | g_CubeClipStage5Count
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004515b0 ; 00451e1e
        ;   XREF to: 004515b0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_004515b0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x015489d0]      ; 00451e23 | g_CubeClipStage5Count
    ADD ESP,0x2c                        ; 00451e29
    JMP 0x00451d78                      ; 00451e2c
        ;   XREF to: 00451d78 (UNCONDITIONAL_JUMP)  ; LAB_00451d78

