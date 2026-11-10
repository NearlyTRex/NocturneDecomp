; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mirror_cpp_clipPolygonAgainstPlane_FUN_004f3e90(float *param_1,float *param_2,uint param_3,int param_4,int *param_5)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_004f5130 at 004f51c0
;
; Referenced Globals:
;   void* PTR_caseD_1_004f3e80 = 004f3f65
;   void* PTR_caseD_3_004f3e88 = 004f3f47
;
; Called Functions:
;   core_mirror.cpp_computePlaneIntersection_FUN_004f3d30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3e90
        ;   Label: core_mirror.cpp_clipPolygonAgainstPlane_FUN_004f3e90
    PUSH ESI                            ; 004f3e91
    PUSH EDI                            ; 004f3e92
    PUSH EBP                            ; 004f3e93
    SUB ESP,0x4                         ; 004f3e94
    MOV ESI,dword ptr [ESP + 0x18]      ; 004f3e97
    MOV EBX,dword ptr [ESP + 0x28]      ; 004f3e9b
    MOV ECX,dword ptr [ESP + 0x20]      ; 004f3e9f
    XOR EDX,EDX                         ; 004f3ea3
    MOV dword ptr [EBX],0x0             ; 004f3ea5
    MOV dword ptr [ESP],EDX             ; 004f3eab
    TEST ECX,ECX                        ; 004f3eae
    JLE 0x004f3f5d                      ; 004f3eb0
        ;   XREF to: 004f3f5d (CONDITIONAL_JUMP)  ; LAB_004f3f5d
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004f3eb6
    MOV ECX,dword ptr [ESP]             ; 004f3eba
        ;   Label: LAB_004f3eba
    MOV EDX,dword ptr [ESP + 0x20]      ; 004f3ebd
    INC ECX                             ; 004f3ec1
    CMP ECX,EDX                         ; 004f3ec2
    JNZ 0x004f3ec8                      ; 004f3ec4
        ;   XREF to: 004f3ec8 (CONDITIONAL_JUMP)  ; LAB_004f3ec8
    XOR ECX,EDX                         ; 004f3ec6
    IMUL ECX,ECX,0xc                    ; 004f3ec8
        ;   Label: LAB_004f3ec8
    FLD float ptr [ESI + 0x4]           ; 004f3ecb
    FMUL float ptr [EDI + 0x4]          ; 004f3ece
    FLD float ptr [ESI]                 ; 004f3ed1
    FMUL float ptr [EDI]                ; 004f3ed3
    FADDP                               ; 004f3ed5
    FLD float ptr [ESI + 0x8]           ; 004f3ed7
    FMUL float ptr [EDI + 0x8]          ; 004f3eda
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004f3edd
    MOV EDX,EDI                         ; 004f3ee1
    FADDP                               ; 004f3ee3
    ADD EBP,ECX                         ; 004f3ee5
    FADD float ptr [ESI + 0xc]          ; 004f3ee7
    XOR ECX,ECX                         ; 004f3eea
    FLDZ                                ; 004f3eec
    FCOMPP                              ; 004f3eee
    FNSTSW AX                           ; 004f3ef0
    SAHF                                ; 004f3ef2
    JNC 0x004f3efa                      ; 004f3ef3
        ;   XREF to: 004f3efa (CONDITIONAL_JUMP)  ; LAB_004f3efa
    MOV ECX,0x1                         ; 004f3ef5
    FLD float ptr [ESI + 0x4]           ; 004f3efa
        ;   Label: LAB_004f3efa
    FMUL float ptr [EBP + 0x4]          ; 004f3efd
    FLD float ptr [ESI]                 ; 004f3f00
    FMUL float ptr [EBP]                ; 004f3f02
    FADDP                               ; 004f3f05
    FLD float ptr [ESI + 0x8]           ; 004f3f07
    FMUL float ptr [EBP + 0x8]          ; 004f3f0a
    FADDP                               ; 004f3f0d
    FADD float ptr [ESI + 0xc]          ; 004f3f0f
    FLDZ                                ; 004f3f12
    FCOMPP                              ; 004f3f14
    FNSTSW AX                           ; 004f3f16
    SAHF                                ; 004f3f18
    JNC 0x004f3f1e                      ; 004f3f19
        ;   XREF to: 004f3f1e (CONDITIONAL_JUMP)  ; LAB_004f3f1e
    OR CL,0x2                           ; 004f3f1b
    CMP ECX,0x3                         ; 004f3f1e
        ;   Label: LAB_004f3f1e
    JA 0x004f3f47                       ; 004f3f21
        ;   XREF to: 004f3f47 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x4f3e7c]  ; 004f3f23 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [EBX],0xc        ; 004f3f2a
        ;   Label: caseD_0
    ADD ECX,dword ptr [ESP + 0x24]      ; 004f3f2d
    CMP ECX,EDX                         ; 004f3f31
    JZ 0x004f3f45                       ; 004f3f33
        ;   XREF to: 004f3f45 (CONDITIONAL_JUMP)  ; LAB_004f3f45
    MOV EAX,dword ptr [EDX]             ; 004f3f35
    MOV dword ptr [ECX],EAX             ; 004f3f37
    MOV EAX,dword ptr [EDX + 0x4]       ; 004f3f39
    MOV dword ptr [ECX + 0x4],EAX       ; 004f3f3c
    MOV EAX,dword ptr [EDX + 0x8]       ; 004f3f3f
    MOV dword ptr [ECX + 0x8],EAX       ; 004f3f42
    INC dword ptr [EBX]                 ; 004f3f45
        ;   Label: LAB_004f3f45
    MOV EBP,dword ptr [ESP]             ; 004f3f47
        ;   Label: caseD_3
    MOV EAX,dword ptr [ESP + 0x20]      ; 004f3f4a
    INC EBP                             ; 004f3f4e
    ADD EDI,0xc                         ; 004f3f4f
    MOV dword ptr [ESP],EBP             ; 004f3f52
    CMP EBP,EAX                         ; 004f3f55
    JL 0x004f3eba                       ; 004f3f57
        ;   XREF to: 004f3eba (CONDITIONAL_JUMP)  ; LAB_004f3eba
    ADD ESP,0x4                         ; 004f3f5d
        ;   Label: LAB_004f3f5d
    POP EBP                             ; 004f3f60
    POP EDI                             ; 004f3f61
    POP ESI                             ; 004f3f62
    POP EBX                             ; 004f3f63
    RET                                 ; 004f3f64
    IMUL ECX,dword ptr [EBX],0xc        ; 004f3f65
        ;   Label: caseD_1
    ADD ECX,dword ptr [ESP + 0x24]      ; 004f3f68
    PUSH ECX                            ; 004f3f6c
    PUSH EDX                            ; 004f3f6d
    PUSH EBP                            ; 004f3f6e
    PUSH ESI                            ; 004f3f6f
    CALL core_mirror.cpp_computePlaneIntersection_FUN_004f3d30 ; 004f3f70
        ;   XREF to: 004f3d30 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_computePlaneIntersection_FUN_004f3d30()
    MOV EDX,dword ptr [EBX]             ; 004f3f75
    INC EDX                             ; 004f3f77
    ADD ESP,0x10                        ; 004f3f78
    MOV dword ptr [EBX],EDX             ; 004f3f7b
    JMP 0x004f3f47                      ; 004f3f7d
        ;   XREF to: 004f3f47 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [EBX],0xc        ; 004f3f7f
        ;   Label: caseD_2
    ADD ECX,dword ptr [ESP + 0x24]      ; 004f3f82
    CMP ECX,EDX                         ; 004f3f86
    JZ 0x004f3f9a                       ; 004f3f88
        ;   XREF to: 004f3f9a (CONDITIONAL_JUMP)  ; LAB_004f3f9a
    MOV EAX,dword ptr [EDX]             ; 004f3f8a
    MOV dword ptr [ECX],EAX             ; 004f3f8c
    MOV EAX,dword ptr [EDX + 0x4]       ; 004f3f8e
    MOV dword ptr [ECX + 0x4],EAX       ; 004f3f91
    MOV EAX,dword ptr [EDX + 0x8]       ; 004f3f94
    MOV dword ptr [ECX + 0x8],EAX       ; 004f3f97
    MOV ECX,dword ptr [EBX]             ; 004f3f9a
        ;   Label: LAB_004f3f9a
    INC ECX                             ; 004f3f9c
    MOV dword ptr [EBX],ECX             ; 004f3f9d
    IMUL ECX,ECX,0xc                    ; 004f3f9f
    ADD ECX,dword ptr [ESP + 0x24]      ; 004f3fa2
    PUSH ECX                            ; 004f3fa6
    PUSH EBP                            ; 004f3fa7
    PUSH EDX                            ; 004f3fa8
    PUSH ESI                            ; 004f3fa9
    CALL core_mirror.cpp_computePlaneIntersection_FUN_004f3d30 ; 004f3faa
        ;   XREF to: 004f3d30 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_computePlaneIntersection_FUN_004f3d30()
    MOV EDX,dword ptr [EBX]             ; 004f3faf
    INC EDX                             ; 004f3fb1
    ADD ESP,0x10                        ; 004f3fb2
    MOV dword ptr [EBX],EDX             ; 004f3fb5
    JMP 0x004f3f47                      ; 004f3fb7
        ;   XREF to: 004f3f47 (UNCONDITIONAL_JUMP)  ; caseD_3

