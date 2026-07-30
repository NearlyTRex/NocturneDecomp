; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcube_cpp_FUN_00448d60(float param_1)
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_00448d48 = 00448e14
;   undefined1* PTR_caseD_3_00448d50 = 00448df9
;   undefined4 DAT_014b8860
;   CVector3f[16] CVector3f_ARRAY_014b8864
;   undefined4 CVector3f_ARRAY_014b8864[0].y
;   undefined4 CVector3f_ARRAY_014b8864[0].z
;   undefined4 CVector3f_ARRAY_014b8864[1].z
;   undefined4 CVector3f_ARRAY_014b8864[2].z
;   undefined4 DAT_014b8924
;
; Called Functions:
;   core_dcube.cpp_clipEdgeToPlane_FUN_004484c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448d60
        ;   Label: core_dcube.cpp_FUN_00448d60
    PUSH ESI                            ; 00448d61
    PUSH EDI                            ; 00448d62
    PUSH EBP                            ; 00448d63
    MOV EBP,ESP                         ; 00448d64
    SUB ESP,0x8                         ; 00448d66
    AND ESP,0xfffffff8                  ; 00448d69
    MOV EBX,dword ptr [0x014b8924]      ; 00448d6c | DAT_014b8924
    MOV EDX,dword ptr [EBP + 0x14]      ; 00448d72
    MOV dword ptr [ESP],EDX             ; 00448d75
    MOV EDX,dword ptr [0x014b8860]      ; 00448d78 | DAT_014b8860
    XOR EDI,EDI                         ; 00448d7e
    TEST EDX,EDX                        ; 00448d80
    JLE 0x00448e07                      ; 00448d82
        ;   XREF to: 00448e07 (CONDITIONAL_JUMP)  ; LAB_00448e07
    MOV ESI,0x14b8864                   ; 00448d88
    MOV EAX,[0x014b8860]                ; 00448d8d | DAT_014b8860
        ;   Label: LAB_00448d8d
    LEA ECX,[EDI + 0x1]                 ; 00448d92
    CMP ECX,EAX                         ; 00448d95
    JNZ 0x00448d9b                      ; 00448d97
        ;   XREF to: 00448d9b (CONDITIONAL_JUMP)  ; LAB_00448d9b
    XOR ECX,EAX                         ; 00448d99
    IMUL ECX,ECX,0xc                    ; 00448d9b
        ;   Label: LAB_00448d9b
    MOV EAX,0x14b8864                   ; 00448d9e
    FLD float ptr [ESI + 0x8]           ; 00448da3 | CVector3f_ARRAY_014b8864[0].z | CVector3f_ARRAY_014b8864[1].z
    ADD EAX,ECX                         ; 00448da6
    MOV EDX,ESI                         ; 00448da8
    MOV dword ptr [ESP + 0x4],EAX       ; 00448daa
    XOR ECX,ECX                         ; 00448dae
    FCOMP float ptr [ESP]               ; 00448db0
    FNSTSW AX                           ; 00448db3
    SAHF                                ; 00448db5
    JBE 0x00448dbd                      ; 00448db6
        ;   XREF to: 00448dbd (CONDITIONAL_JUMP)  ; LAB_00448dbd
    MOV ECX,0x1                         ; 00448db8
    MOV EAX,dword ptr [ESP + 0x4]       ; 00448dbd
        ;   Label: LAB_00448dbd
    FLD float ptr [EAX + 0x8]           ; 00448dc1 | CVector3f_ARRAY_014b8864[0].z | CVector3f_ARRAY_014b8864[2].z
    FCOMP float ptr [ESP]               ; 00448dc4
    FNSTSW AX                           ; 00448dc7
    SAHF                                ; 00448dc9
    JBE 0x00448dcf                      ; 00448dca
        ;   XREF to: 00448dcf (CONDITIONAL_JUMP)  ; LAB_00448dcf
    OR CL,0x2                           ; 00448dcc
    CMP ECX,0x3                         ; 00448dcf
        ;   Label: LAB_00448dcf
    JA 0x00448df9                       ; 00448dd2
        ;   XREF to: 00448df9 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x448d44]  ; 00448dd4 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 00448ddb
        ;   Label: caseD_0
    ADD ECX,0x14b8928                   ; 00448dde
    CMP ECX,EDX                         ; 00448de4
    JZ 0x00448df8                       ; 00448de6
        ;   XREF to: 00448df8 (CONDITIONAL_JUMP)  ; LAB_00448df8
    MOV EAX,dword ptr [EDX]             ; 00448de8 | CVector3f_ARRAY_014b8864
    MOV dword ptr [ECX],EAX             ; 00448dea
    MOV EAX,dword ptr [EDX + 0x4]       ; 00448dec | CVector3f_ARRAY_014b8864[0].y
    MOV dword ptr [ECX + 0x4],EAX       ; 00448def
    MOV EAX,dword ptr [EDX + 0x8]       ; 00448df2 | CVector3f_ARRAY_014b8864[0].z
    MOV dword ptr [ECX + 0x8],EAX       ; 00448df5
    INC EBX                             ; 00448df8
        ;   Label: LAB_00448df8
    MOV ECX,dword ptr [0x014b8860]      ; 00448df9 | DAT_014b8860
        ;   Label: caseD_3
    INC EDI                             ; 00448dff
    ADD ESI,0xc                         ; 00448e00
    CMP EDI,ECX                         ; 00448e03
    JL 0x00448d8d                       ; 00448e05
        ;   XREF to: 00448d8d (CONDITIONAL_JUMP)  ; LAB_00448d8d
    MOV dword ptr [0x014b8924],EBX      ; 00448e07 | DAT_014b8924
        ;   Label: LAB_00448e07
    MOV ESP,EBP                         ; 00448e0d
    POP EBP                             ; 00448e0f
    POP EDI                             ; 00448e10
    POP ESI                             ; 00448e11
    POP EBX                             ; 00448e12
    RET                                 ; 00448e13
    IMUL ECX,EBX,0xc                    ; 00448e14
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 00448e17
    SUB ESP,0x8                         ; 00448e1a
    FSTP double ptr [ESP]               ; 00448e1d
    PUSH 0xbff00000                     ; 00448e20
    PUSH 0x0                            ; 00448e25
    PUSH 0x0                            ; 00448e27
    PUSH 0x0                            ; 00448e29
    PUSH 0x0                            ; 00448e2b
    PUSH 0x0                            ; 00448e2d
    ADD ECX,0x14b8928                   ; 00448e2f
    PUSH ECX                            ; 00448e35
    PUSH EDX                            ; 00448e36 | CVector3f_ARRAY_014b8864
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00448e37
    PUSH EAX                            ; 00448e3b
    MOV dword ptr [0x014b8924],EBX      ; 00448e3c | DAT_014b8924
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004484c0 ; 00448e42
        ;   XREF to: 004484c0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_004484c0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x014b8924]      ; 00448e47 | DAT_014b8924
    ADD ESP,0x2c                        ; 00448e4d
    JMP 0x00448df8                      ; 00448e50
        ;   XREF to: 00448df8 (UNCONDITIONAL_JUMP)  ; LAB_00448df8
    IMUL ECX,EBX,0xc                    ; 00448e52
        ;   Label: caseD_2
    ADD ECX,0x14b8928                   ; 00448e55
    CMP ECX,EDX                         ; 00448e5b
    JZ 0x00448e6f                       ; 00448e5d
        ;   XREF to: 00448e6f (CONDITIONAL_JUMP)  ; LAB_00448e6f
    MOV EAX,dword ptr [EDX]             ; 00448e5f | CVector3f_ARRAY_014b8864
    MOV dword ptr [ECX],EAX             ; 00448e61
    MOV EAX,dword ptr [EDX + 0x4]       ; 00448e63 | CVector3f_ARRAY_014b8864[0].y
    MOV dword ptr [ECX + 0x4],EAX       ; 00448e66
    MOV EAX,dword ptr [EDX + 0x8]       ; 00448e69 | CVector3f_ARRAY_014b8864[0].z
    MOV dword ptr [ECX + 0x8],EAX       ; 00448e6c
    INC EBX                             ; 00448e6f
        ;   Label: LAB_00448e6f
    IMUL ECX,EBX,0xc                    ; 00448e70
    FLD float ptr [ESP]                 ; 00448e73
    SUB ESP,0x8                         ; 00448e76
    FSTP double ptr [ESP]               ; 00448e79
    PUSH 0xbff00000                     ; 00448e7c
    PUSH 0x0                            ; 00448e81
    PUSH 0x0                            ; 00448e83
    PUSH 0x0                            ; 00448e85
    PUSH 0x0                            ; 00448e87
    PUSH 0x0                            ; 00448e89
    ADD ECX,0x14b8928                   ; 00448e8b
    PUSH ECX                            ; 00448e91
    MOV ECX,dword ptr [ESP + 0x28]      ; 00448e92
    PUSH ECX                            ; 00448e96
    PUSH EDX                            ; 00448e97 | CVector3f_ARRAY_014b8864
    MOV dword ptr [0x014b8924],EBX      ; 00448e98 | DAT_014b8924
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004484c0 ; 00448e9e
        ;   XREF to: 004484c0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_004484c0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x014b8924]      ; 00448ea3 | DAT_014b8924
    ADD ESP,0x2c                        ; 00448ea9
    JMP 0x00448df8                      ; 00448eac
        ;   XREF to: 00448df8 (UNCONDITIONAL_JUMP)  ; LAB_00448df8

