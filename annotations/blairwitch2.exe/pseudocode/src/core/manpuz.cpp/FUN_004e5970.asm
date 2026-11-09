; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_manpuz_cpp_FUN_004e5970(int param_1,float *param_2,undefined4 param_3,float *param_4)
;
;
; Called Functions:
;   core_box.cpp_FUN_0041af70
;   core_dirmat.cpp_FUN_00449530
;   core_dirmat.cpp_FUN_004495a0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;   core_dtri.cpp_rayTriangleIntersection_FUN_00477a50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e5970
        ;   Label: core_manpuz.cpp_FUN_004e5970
    PUSH ESI                            ; 004e5971
    PUSH EDI                            ; 004e5972
    PUSH EBP                            ; 004e5973
    MOV EBP,ESP                         ; 004e5974
    SUB ESP,0x140                       ; 004e5976
    AND ESP,0xfffffff8                  ; 004e597c
    MOV EBX,dword ptr [EBP + 0x20]      ; 004e597f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e5982
    ADD EAX,0x2b4                       ; 004e5985
    PUSH EAX                            ; 004e598a
    LEA EDI,[ESP + 0x10]                ; 004e598b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 004e598f
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 004e5994
    ADD ESP,0x4                         ; 004e5999
    LEA ESI,[EAX + 0x338]               ; 004e599c
    MOV EDX,0x3f8147ae                  ; 004e59a2
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e59a7
    MOV dword ptr [ESP + 0x134],EDX     ; 004e59aa
    ADD EAX,0xbfc                       ; 004e59b1
    MOVSD.REP ES:EDI,ESI                ; 004e59b6
    MOV dword ptr [ESP + 0x11c],EAX     ; 004e59b8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e59bf
    XOR ECX,ECX                         ; 004e59c2
    ADD EAX,0x74c                       ; 004e59c4
    MOV dword ptr [ESP + 0x128],ECX     ; 004e59c9
    MOV dword ptr [ESP + 0x12c],EAX     ; 004e59d0
    MOV EAX,dword ptr [ESP + 0x12c]     ; 004e59d7
        ;   Label: LAB_004e59d7
    CMP dword ptr [EAX],0x0             ; 004e59de
    JNZ 0x004e5b9d                      ; 004e59e1
        ;   XREF to: 004e5b9d (CONDITIONAL_JUMP)  ; LAB_004e5b9d
    MOV EAX,dword ptr [ESP + 0x11c]     ; 004e59e7
        ;   Label: LAB_004e59e7
    MOV EDI,dword ptr [ESP + 0x128]     ; 004e59ee
    XOR ESI,ESI                         ; 004e59f5
    ADD EAX,EDI                         ; 004e59f7
    MOV dword ptr [ESP + 0x138],ESI     ; 004e59f9
    MOV dword ptr [ESP + 0x114],EAX     ; 004e5a00
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004e5a07
        ;   Label: LAB_004e5a07
    MOV EDX,dword ptr [EBP + 0x18]      ; 004e5a0a
    MOV ESI,dword ptr [ESP + 0x114]     ; 004e5a0d
    PUSH EAX                            ; 004e5a14
    MOV ECX,dword ptr [ESP + 0x13c]     ; 004e5a15
    ADD ESI,0x3c                        ; 004e5a1c
    PUSH EDX                            ; 004e5a1f
    ADD ESI,ECX                         ; 004e5a20
    PUSH ESI                            ; 004e5a22
    CALL core_dtri.cpp_rayTriangleIntersection_FUN_00477a50 ; 004e5a23
        ;   XREF to: 00477a50 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_rayTriangleIntersection_FUN_00477a50()
    MOV dword ptr [ESP + 0x148],EAX     ; 004e5a28
    FLD float ptr [ESP + 0x148]         ; 004e5a2f
    ADD ESP,0xc                         ; 004e5a36
    FST float ptr [ESP + 0x8]           ; 004e5a39
    FLDZ                                ; 004e5a3d
    FCOMPP                              ; 004e5a3f
    FNSTSW AX                           ; 004e5a41
    SAHF                                ; 004e5a43
    JA 0x004e5ab2                       ; 004e5a44
        ;   XREF to: 004e5ab2 (CONDITIONAL_JUMP)  ; LAB_004e5ab2
    FLD float ptr [ESP + 0x8]           ; 004e5a46
    FCOMP float ptr [ESP + 0x134]       ; 004e5a4a
    FNSTSW AX                           ; 004e5a51
    SAHF                                ; 004e5a53
    JNC 0x004e5ab2                      ; 004e5a54
        ;   XREF to: 004e5ab2 (CONDITIONAL_JUMP)  ; LAB_004e5ab2
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e5a56
    MOV dword ptr [ESP + 0x134],EAX     ; 004e5a5a
    LEA EAX,[ESI + 0x24]                ; 004e5a61
    LEA EDI,[ESP + 0x78]                ; 004e5a64
    FLD float ptr [EAX]                 ; 004e5a68
    FLD float ptr [EAX + 0x4]           ; 004e5a6a
    FLD float ptr [EAX + 0x8]           ; 004e5a6d
    LEA ESI,[ESP + 0x60]                ; 004e5a70
    FXCH ST2                            ; 004e5a74
    FCHS                                ; 004e5a76
    FXCH                                ; 004e5a78
    FCHS                                ; 004e5a7a
    FXCH ST2                            ; 004e5a7c
    FCHS                                ; 004e5a7e
    LEA EAX,[ESP + 0x78]                ; 004e5a80
    FXCH                                ; 004e5a84
    FSTP float ptr [ESP + 0x60]         ; 004e5a86
    FXCH                                ; 004e5a8a
    FSTP float ptr [ESP + 0x64]         ; 004e5a8c
    FSTP float ptr [ESP + 0x68]         ; 004e5a90
    MOVSD ES:EDI,ESI                    ; 004e5a94
    MOVSD ES:EDI,ESI                    ; 004e5a95
    MOVSD ES:EDI,ESI                    ; 004e5a96
    CMP EBX,EAX                         ; 004e5a97
    JZ 0x004e5ab2                       ; 004e5a99
        ;   XREF to: 004e5ab2 (CONDITIONAL_JUMP)  ; LAB_004e5ab2
    MOV EAX,dword ptr [ESP + 0x78]      ; 004e5a9b
    MOV dword ptr [EBX],EAX             ; 004e5a9f
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004e5aa1
    MOV dword ptr [EBX + 0x4],EAX       ; 004e5aa5
    MOV EAX,dword ptr [ESP + 0x80]      ; 004e5aa8
    MOV dword ptr [EBX + 0x8],EAX       ; 004e5aaf
    MOV ESI,dword ptr [ESP + 0x138]     ; 004e5ab2
        ;   Label: LAB_004e5ab2
    ADD ESI,0x38                        ; 004e5ab9
    MOV dword ptr [ESP + 0x138],ESI     ; 004e5abc
    CMP ESI,0x70                        ; 004e5ac3
    JNZ 0x004e5a07                      ; 004e5ac6
        ;   XREF to: 004e5a07 (CONDITIONAL_JUMP)  ; LAB_004e5a07
    MOV EDX,dword ptr [ESP + 0x128]     ; 004e5acc
    MOV EAX,dword ptr [ESP + 0x12c]     ; 004e5ad3
    ADD EDX,0xb8                        ; 004e5ada
    ADD EAX,0x64                        ; 004e5ae0
    MOV dword ptr [ESP + 0x128],EDX     ; 004e5ae3
    MOV dword ptr [ESP + 0x12c],EAX     ; 004e5aea
    CMP EDX,0x8a0                       ; 004e5af1
    JNZ 0x004e59d7                      ; 004e5af7
        ;   XREF to: 004e59d7 (CONDITIONAL_JUMP)  ; LAB_004e59d7
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e5afd
    ADD EAX,0x5ac                       ; 004e5b00
    PUSH EAX                            ; 004e5b05
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 004e5b06
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    LEA ESI,[EAX + 0x338]               ; 004e5b0b
    ADD ESP,0x4                         ; 004e5b11
    LEA EAX,[ESP + 0xc]                 ; 004e5b14
    MOV EDX,ESI                         ; 004e5b18
    CMP EAX,ESI                         ; 004e5b1a
    JZ 0x004e5b32                       ; 004e5b1c
        ;   XREF to: 004e5b32 (CONDITIONAL_JUMP)  ; LAB_004e5b32
    MOV EAX,dword ptr [ESI]             ; 004e5b1e
    MOV dword ptr [ESP + 0xc],EAX       ; 004e5b20
    MOV EAX,dword ptr [ESI + 0x4]       ; 004e5b24
    MOV dword ptr [ESP + 0x10],EAX      ; 004e5b27
    MOV EAX,dword ptr [ESI + 0x8]       ; 004e5b2b
    MOV dword ptr [ESP + 0x14],EAX      ; 004e5b2e
    LEA EAX,[ESP + 0x18]                ; 004e5b32
        ;   Label: LAB_004e5b32
    LEA ESI,[EDX + 0xc]                 ; 004e5b36
    CMP EAX,ESI                         ; 004e5b39
    JNZ 0x004e5cf6                      ; 004e5b3b
        ;   XREF to: 004e5cf6 (CONDITIONAL_JUMP)  ; LAB_004e5cf6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e5b41
        ;   Label: LAB_004e5b41
    ADD EAX,0x149c                      ; 004e5b44
    MOV dword ptr [ESP + 0x130],EAX     ; 004e5b49
    ADD EAX,0xc0                        ; 004e5b50
    MOV dword ptr [ESP + 0x118],EAX     ; 004e5b55
    MOV EAX,dword ptr [ESP + 0x130]     ; 004e5b5c
        ;   Label: LAB_004e5b5c
    FLD float ptr [EAX + 0x18]          ; 004e5b63
    FLDZ                                ; 004e5b66
    FCOMPP                              ; 004e5b68
    FNSTSW AX                           ; 004e5b6a
    SAHF                                ; 004e5b6c
    JC 0x004e5d0f                       ; 004e5b6d
        ;   XREF to: 004e5d0f (CONDITIONAL_JUMP)  ; LAB_004e5d0f
    MOV ECX,dword ptr [ESP + 0x130]     ; 004e5b73
        ;   Label: LAB_004e5b73
    ADD ECX,0x60                        ; 004e5b7a
    MOV ESI,dword ptr [ESP + 0x118]     ; 004e5b7d
    MOV dword ptr [ESP + 0x130],ECX     ; 004e5b84
    CMP ECX,ESI                         ; 004e5b8b
    JNZ 0x004e5b5c                      ; 004e5b8d
        ;   XREF to: 004e5b5c (CONDITIONAL_JUMP)  ; LAB_004e5b5c
    MOV EAX,dword ptr [ESP + 0x134]     ; 004e5b8f
    MOV ESP,EBP                         ; 004e5b96
    POP EBP                             ; 004e5b98
    POP EDI                             ; 004e5b99
    POP ESI                             ; 004e5b9a
    POP EBX                             ; 004e5b9b
    RET                                 ; 004e5b9c
    MOV EDX,dword ptr [EBP + 0x18]      ; 004e5b9d
        ;   Label: LAB_004e5b9d
    LEA EDI,[ESP + 0xd8]                ; 004e5ba0
    LEA ESI,[ESP + 0xa8]                ; 004e5ba7
    FLD float ptr [EDX]                 ; 004e5bae
    FLD float ptr [EDX + 0x4]           ; 004e5bb0
    FLD float ptr [EDX + 0x8]           ; 004e5bb3
    FXCH ST2                            ; 004e5bb6
    FSUB float ptr [EAX + 0xc]          ; 004e5bb8
    FXCH                                ; 004e5bbb
    FSUB float ptr [EAX + 0x10]         ; 004e5bbd
    FXCH ST2                            ; 004e5bc0
    FSUB float ptr [EAX + 0x14]         ; 004e5bc2
    FXCH                                ; 004e5bc5
    FSTP float ptr [ESP + 0xa8]         ; 004e5bc7
    FXCH                                ; 004e5bce
    FSTP float ptr [ESP + 0xac]         ; 004e5bd0
    LEA EAX,[ESP + 0xd8]                ; 004e5bd7
    FSTP float ptr [ESP + 0xb0]         ; 004e5bde
    PUSH EAX                            ; 004e5be5
    MOV EAX,dword ptr [ESP + 0x130]     ; 004e5be6
    MOVSD ES:EDI,ESI                    ; 004e5bed
    MOVSD ES:EDI,ESI                    ; 004e5bee
    MOVSD ES:EDI,ESI                    ; 004e5bef
    ADD EAX,0x24                        ; 004e5bf0
    LEA ESI,[ESP + 0xb8]                ; 004e5bf3
    PUSH EAX                            ; 004e5bfa
    LEA EDI,[ESP + 0xc8]                ; 004e5bfb
    MOV dword ptr [ESP + 0x12c],EAX     ; 004e5c02
    CALL core_dirmat.cpp_FUN_004495a0   ; 004e5c09
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    ADD ESP,0x8                         ; 004e5c0e
    LEA ESI,[ESP + 0xb4]                ; 004e5c11
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004e5c18
    MOV EDX,dword ptr [ESP + 0x124]     ; 004e5c1b
    PUSH EAX                            ; 004e5c22
    MOVSD ES:EDI,ESI                    ; 004e5c23
    MOVSD ES:EDI,ESI                    ; 004e5c24
    MOVSD ES:EDI,ESI                    ; 004e5c25
    PUSH EDX                            ; 004e5c26
    LEA ESI,[ESP + 0x50]                ; 004e5c27
    CALL core_dirmat.cpp_FUN_004495a0   ; 004e5c2b
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    ADD ESP,0x8                         ; 004e5c30
    LEA EAX,[ESP + 0x9c]                ; 004e5c33
    PUSH EAX                            ; 004e5c3a
    LEA EAX,[ESP + 0xe8]                ; 004e5c3b
    PUSH EAX                            ; 004e5c42
    LEA EAX,[ESP + 0xc8]                ; 004e5c43
    LEA EDI,[ESP + 0xec]                ; 004e5c4a
    PUSH EAX                            ; 004e5c51
    LEA EAX,[ESP + 0x18]                ; 004e5c52
    LEA ESI,[ESP + 0x54]                ; 004e5c56
    PUSH EAX                            ; 004e5c5a
    MOVSD ES:EDI,ESI                    ; 004e5c5b
    MOVSD ES:EDI,ESI                    ; 004e5c5c
    MOVSD ES:EDI,ESI                    ; 004e5c5d
    CALL core_box.cpp_FUN_0041af70      ; 004e5c5e
        ;   XREF to: 0041af70 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041af70()
    MOV dword ptr [ESP + 0x14c],EAX     ; 004e5c63
    FLD float ptr [ESP + 0x14c]         ; 004e5c6a
    ADD ESP,0x10                        ; 004e5c71
    FST float ptr [ESP + 0x4]           ; 004e5c74
    FLDZ                                ; 004e5c78
    FCOMPP                              ; 004e5c7a
    FNSTSW AX                           ; 004e5c7c
    SAHF                                ; 004e5c7e
    JA 0x004e59e7                       ; 004e5c7f
        ;   XREF to: 004e59e7 (CONDITIONAL_JUMP)  ; LAB_004e59e7
    FLD float ptr [ESP + 0x4]           ; 004e5c85
    FCOMP float ptr [ESP + 0x134]       ; 004e5c89
    FNSTSW AX                           ; 004e5c90
    SAHF                                ; 004e5c92
    JNC 0x004e59e7                      ; 004e5c93
        ;   XREF to: 004e59e7 (CONDITIONAL_JUMP)  ; LAB_004e59e7
    MOV EAX,dword ptr [ESP + 0x4]       ; 004e5c99
    MOV dword ptr [ESP + 0x134],EAX     ; 004e5c9d
    LEA EAX,[ESP + 0x9c]                ; 004e5ca4
    PUSH EAX                            ; 004e5cab
    MOV ECX,dword ptr [ESP + 0x128]     ; 004e5cac
    PUSH ECX                            ; 004e5cb3
    LEA ESI,[ESP + 0xd4]                ; 004e5cb4
    LEA EDI,[ESP + 0x38]                ; 004e5cbb
    CALL core_dirmat.cpp_FUN_00449530   ; 004e5cbf
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0xd4]                ; 004e5cc4
    ADD ESP,0x8                         ; 004e5ccb
    LEA EAX,[ESP + 0x30]                ; 004e5cce
    MOVSD ES:EDI,ESI                    ; 004e5cd2
    MOVSD ES:EDI,ESI                    ; 004e5cd3
    MOVSD ES:EDI,ESI                    ; 004e5cd4
    CMP EBX,EAX                         ; 004e5cd5
    JZ 0x004e59e7                       ; 004e5cd7
        ;   XREF to: 004e59e7 (CONDITIONAL_JUMP)  ; LAB_004e59e7
    MOV EAX,dword ptr [ESP + 0x30]      ; 004e5cdd
    MOV dword ptr [EBX],EAX             ; 004e5ce1
    MOV EAX,dword ptr [ESP + 0x34]      ; 004e5ce3
    MOV dword ptr [EBX + 0x4],EAX       ; 004e5ce7
    MOV EAX,dword ptr [ESP + 0x38]      ; 004e5cea
    MOV dword ptr [EBX + 0x8],EAX       ; 004e5cee
    JMP 0x004e59e7                      ; 004e5cf1
        ;   XREF to: 004e59e7 (UNCONDITIONAL_JUMP)  ; LAB_004e59e7
    MOV EAX,dword ptr [ESI]             ; 004e5cf6
        ;   Label: LAB_004e5cf6
    MOV dword ptr [ESP + 0x18],EAX      ; 004e5cf8
    MOV EAX,dword ptr [ESI + 0x4]       ; 004e5cfc
    MOV dword ptr [ESP + 0x1c],EAX      ; 004e5cff
    MOV EAX,dword ptr [ESI + 0x8]       ; 004e5d03
    MOV dword ptr [ESP + 0x20],EAX      ; 004e5d06
    JMP 0x004e5b41                      ; 004e5d0a
        ;   XREF to: 004e5b41 (UNCONDITIONAL_JUMP)  ; LAB_004e5b41
    MOV EAX,dword ptr [ESP + 0x130]     ; 004e5d0f
        ;   Label: LAB_004e5d0f
    MOV EDX,dword ptr [EBP + 0x18]      ; 004e5d16
    LEA EDI,[ESP + 0x3c]                ; 004e5d19
    LEA ESI,[ESP + 0x24]                ; 004e5d1d
    FLD float ptr [EDX]                 ; 004e5d21
    FLD float ptr [EDX + 0x4]           ; 004e5d23
    FLD float ptr [EDX + 0x8]           ; 004e5d26
    FXCH ST2                            ; 004e5d29
    FSUB float ptr [EAX + 0x1c]         ; 004e5d2b
    FXCH                                ; 004e5d2e
    FSUB float ptr [EAX + 0x20]         ; 004e5d30
    FXCH ST2                            ; 004e5d33
    FSUB float ptr [EAX + 0x24]         ; 004e5d35
    FXCH                                ; 004e5d38
    FSTP float ptr [ESP + 0x24]         ; 004e5d3a
    FXCH                                ; 004e5d3e
    FSTP float ptr [ESP + 0x28]         ; 004e5d40
    LEA EAX,[ESP + 0x3c]                ; 004e5d44
    FSTP float ptr [ESP + 0x2c]         ; 004e5d48
    PUSH EAX                            ; 004e5d4c
    MOV EAX,dword ptr [ESP + 0x134]     ; 004e5d4d
    MOVSD ES:EDI,ESI                    ; 004e5d54
    MOVSD ES:EDI,ESI                    ; 004e5d55
    MOVSD ES:EDI,ESI                    ; 004e5d56
    ADD EAX,0x34                        ; 004e5d57
    LEA ESI,[ESP + 0x10c]               ; 004e5d5a
    PUSH EAX                            ; 004e5d61
    LEA EDI,[ESP + 0x74]                ; 004e5d62
    MOV dword ptr [ESP + 0x128],EAX     ; 004e5d66
    CALL core_dirmat.cpp_FUN_004495a0   ; 004e5d6d
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    LEA ESI,[ESP + 0x110]               ; 004e5d72
    ADD ESP,0x8                         ; 004e5d79
    MOVSD ES:EDI,ESI                    ; 004e5d7c
    MOVSD ES:EDI,ESI                    ; 004e5d7d
    MOVSD ES:EDI,ESI                    ; 004e5d7e
    MOV EDI,dword ptr [EBP + 0x1c]      ; 004e5d7f
    PUSH EDI                            ; 004e5d82
    MOV EAX,dword ptr [ESP + 0x124]     ; 004e5d83
    PUSH EAX                            ; 004e5d8a
    LEA ESI,[ESP + 0xf8]                ; 004e5d8b
    CALL core_dirmat.cpp_FUN_004495a0   ; 004e5d92
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    ADD ESP,0x8                         ; 004e5d97
    LEA EAX,[ESP + 0x54]                ; 004e5d9a
    PUSH EAX                            ; 004e5d9e
    LEA EAX,[ESP + 0x100]               ; 004e5d9f
    PUSH EAX                            ; 004e5da6
    LEA EAX,[ESP + 0x74]                ; 004e5da7
    LEA EDI,[ESP + 0x104]               ; 004e5dab
    PUSH EAX                            ; 004e5db2
    LEA EAX,[ESP + 0x18]                ; 004e5db3
    LEA ESI,[ESP + 0xfc]                ; 004e5db7
    PUSH EAX                            ; 004e5dbe
    MOVSD ES:EDI,ESI                    ; 004e5dbf
    MOVSD ES:EDI,ESI                    ; 004e5dc0
    MOVSD ES:EDI,ESI                    ; 004e5dc1
    CALL core_box.cpp_FUN_0041af70      ; 004e5dc2
        ;   XREF to: 0041af70 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041af70()
    MOV dword ptr [ESP + 0x14c],EAX     ; 004e5dc7
    FLD float ptr [ESP + 0x14c]         ; 004e5dce
    ADD ESP,0x10                        ; 004e5dd5
    FST float ptr [ESP]                 ; 004e5dd8
    FLDZ                                ; 004e5ddb
    FCOMPP                              ; 004e5ddd
    FNSTSW AX                           ; 004e5ddf
    SAHF                                ; 004e5de1
    JA 0x004e5b73                       ; 004e5de2
        ;   XREF to: 004e5b73 (CONDITIONAL_JUMP)  ; LAB_004e5b73
    FLD float ptr [ESP]                 ; 004e5de8
    FCOMP float ptr [ESP + 0x134]       ; 004e5deb
    FNSTSW AX                           ; 004e5df2
    SAHF                                ; 004e5df4
    JNC 0x004e5b73                      ; 004e5df5
        ;   XREF to: 004e5b73 (CONDITIONAL_JUMP)  ; LAB_004e5b73
    MOV EAX,dword ptr [ESP]             ; 004e5dfb
    MOV dword ptr [ESP + 0x134],EAX     ; 004e5dfe
    LEA EAX,[ESP + 0x54]                ; 004e5e05
    PUSH EAX                            ; 004e5e09
    MOV EDX,dword ptr [ESP + 0x124]     ; 004e5e0a
    PUSH EDX                            ; 004e5e11
    LEA ESI,[ESP + 0x98]                ; 004e5e12
    LEA EDI,[ESP + 0x8c]                ; 004e5e19
    CALL core_dirmat.cpp_FUN_00449530   ; 004e5e20
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0x98]                ; 004e5e25
    ADD ESP,0x8                         ; 004e5e2c
    LEA EAX,[ESP + 0x84]                ; 004e5e2f
    MOVSD ES:EDI,ESI                    ; 004e5e36
    MOVSD ES:EDI,ESI                    ; 004e5e37
    MOVSD ES:EDI,ESI                    ; 004e5e38
    CMP EBX,EAX                         ; 004e5e39
    JZ 0x004e5b73                       ; 004e5e3b
        ;   XREF to: 004e5b73 (CONDITIONAL_JUMP)  ; LAB_004e5b73
    MOV EAX,dword ptr [ESP + 0x84]      ; 004e5e41
    MOV dword ptr [EBX],EAX             ; 004e5e48
    MOV EAX,dword ptr [ESP + 0x88]      ; 004e5e4a
    MOV dword ptr [EBX + 0x4],EAX       ; 004e5e51
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004e5e54
    MOV dword ptr [EBX + 0x8],EAX       ; 004e5e5b
    JMP 0x004e5b73                      ; 004e5e5e
        ;   XREF to: 004e5b73 (UNCONDITIONAL_JUMP)  ; LAB_004e5b73

