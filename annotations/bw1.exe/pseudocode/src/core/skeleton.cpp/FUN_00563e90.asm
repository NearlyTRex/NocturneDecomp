; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_skeleton_cpp_FUN_00563e90(int param_1,int param_2,int param_3,int param_4)
;
;
; XREF[1]:
;   core_skeleton.cpp_FUN_005698d0 at 005698fc
;
; Called Functions:
;   core_xform.cpp_FUN_005b5080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00563e90
        ;   Label: core_skeleton.cpp_FUN_00563e90
    PUSH EDI                            ; 00563e91
    PUSH EBP                            ; 00563e92
    SUB ESP,0x64                        ; 00563e93
    MOV dword ptr [ESP + 0x54],ESI      ; 00563e96
    MOV ESI,dword ptr [ESP + 0x7c]      ; 00563e9a
    MOV EAX,dword ptr [ESP + 0x78]      ; 00563e9e
    LEA EBX,[ESI*0x4 + 0x0]             ; 00563ea2
    MOV EDX,dword ptr [ESP + 0x74]      ; 00563ea9
    SUB EBX,ESI                         ; 00563ead
    SHL EAX,0x2                         ; 00563eaf
    SHL EBX,0x2                         ; 00563eb2
    ADD EAX,EDX                         ; 00563eb5
    ADD EBX,ESI                         ; 00563eb7
    MOV EAX,dword ptr [EAX + 0x40]      ; 00563eb9
    SHL EBX,0x2                         ; 00563ebc
    ADD EAX,EBX                         ; 00563ebf
    MOV dword ptr [ESP + 0x58],EAX      ; 00563ec1
    MOV EBX,dword ptr [ESP + 0x58]      ; 00563ec5
    MOV DL,byte ptr [EBX]               ; 00563ec9
    ADD EAX,0x10                        ; 00563ecb
    CMP DL,0x1                          ; 00563ece
    JZ 0x00563f1a                       ; 00563ed1
        ;   XREF to: 00563f1a (CONDITIONAL_JUMP)  ; LAB_00563f1a
    ADD EBX,0x4                         ; 00563ed3
    MOV dword ptr [ESP + 0x5c],EAX      ; 00563ed6
    XOR ECX,ECX                         ; 00563eda
    XOR EBP,EBP                         ; 00563edc
    MOV EAX,dword ptr [ESP + 0x58]      ; 00563ede
    MOV dword ptr [ESP + 0x34],ECX      ; 00563ee2
    MOV dword ptr [ESP + 0x38],ECX      ; 00563ee6
    MOV dword ptr [ESP + 0x30],ECX      ; 00563eea
    MOV dword ptr [ESP + 0x60],EAX      ; 00563eee
    MOV ESI,dword ptr [ESP + 0x58]      ; 00563ef2
        ;   Label: LAB_00563ef2
    MOVZX ESI,byte ptr [ESI]            ; 00563ef6
    CMP EBP,ESI                         ; 00563ef9
    JL 0x00563f4b                       ; 00563efb
        ;   XREF to: 00563f4b (CONDITIONAL_JUMP)  ; LAB_00563f4b
    MOV EDI,ESP                         ; 00563efd
    LEA ESI,[ESP + 0x30]                ; 00563eff
    MOVSD ES:EDI,ESI                    ; 00563f03
        ;   Label: LAB_00563f03
    MOVSD ES:EDI,ESI                    ; 00563f04
    MOVSD ES:EDI,ESI                    ; 00563f05
    MOV EDI,dword ptr [ESP + 0x54]      ; 00563f06
    MOV ESI,ESP                         ; 00563f0a
    MOVSD ES:EDI,ESI                    ; 00563f0c
    MOVSD ES:EDI,ESI                    ; 00563f0d
    MOVSD ES:EDI,ESI                    ; 00563f0e
    MOV EAX,dword ptr [ESP + 0x54]      ; 00563f0f
    ADD ESP,0x64                        ; 00563f13
    POP EBP                             ; 00563f16
    POP EDI                             ; 00563f17
    POP EBX                             ; 00563f18
    RET                                 ; 00563f19
    MOVZX ESI,byte ptr [EBX + 0x1]      ; 00563f1a
        ;   Label: LAB_00563f1a
    LEA EBX,[ESI*0x4 + 0x0]             ; 00563f1e
    SUB EBX,ESI                         ; 00563f25
    MOV EDI,dword ptr [ESP + 0x80]      ; 00563f27
    SHL EBX,0x4                         ; 00563f2e
    ADD EBX,EDI                         ; 00563f31
    PUSH EBX                            ; 00563f33
    PUSH EAX                            ; 00563f34
    LEA ESI,[ESP + 0x20]                ; 00563f35
    LEA EDI,[ESP + 0x8]                 ; 00563f39
    CALL core_xform.cpp_FUN_005b5080    ; 00563f3d
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[ESP + 0x20]                ; 00563f42
    ADD ESP,0x8                         ; 00563f46
    JMP 0x00563f03                      ; 00563f49
        ;   XREF to: 00563f03 (UNCONDITIONAL_JUMP)  ; LAB_00563f03
    MOV ESI,dword ptr [ESP + 0x60]      ; 00563f4b
        ;   Label: LAB_00563f4b
    MOVZX ESI,byte ptr [ESI + 0x1]      ; 00563f4f
    IMUL ESI,ESI,0x30                   ; 00563f53
    ADD ESI,dword ptr [ESP + 0x80]      ; 00563f56
    PUSH ESI                            ; 00563f5d
    MOV EDX,dword ptr [ESP + 0x60]      ; 00563f5e
    PUSH EDX                            ; 00563f62
    LEA ESI,[ESP + 0x14]                ; 00563f63
    LEA EDI,[ESP + 0x2c]                ; 00563f67
    CALL core_xform.cpp_FUN_005b5080    ; 00563f6b
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[ESP + 0x14]                ; 00563f70
    ADD ESP,0x8                         ; 00563f74
    MOVSD ES:EDI,ESI                    ; 00563f77
    MOVSD ES:EDI,ESI                    ; 00563f78
    MOVSD ES:EDI,ESI                    ; 00563f79
    FLD float ptr [ESP + 0x24]          ; 00563f7a
    FMUL float ptr [EBX]                ; 00563f7e
    FLD float ptr [ESP + 0x28]          ; 00563f80
    FMUL float ptr [EBX]                ; 00563f84
    FLD float ptr [ESP + 0x2c]          ; 00563f86
    FMUL float ptr [EBX]                ; 00563f8a
    ADD EBX,0x4                         ; 00563f8c
    INC EBP                             ; 00563f8f
    FLD float ptr [ESP + 0x30]          ; 00563f90
    FLD float ptr [ESP + 0x34]          ; 00563f94
    FLD float ptr [ESP + 0x38]          ; 00563f98
    MOV ECX,dword ptr [ESP + 0x5c]      ; 00563f9c
    LEA EDI,[ESP + 0x3c]                ; 00563fa0
    LEA ESI,[ESP + 0x48]                ; 00563fa4
    ADD ECX,0xc                         ; 00563fa8
    FXCH ST5                            ; 00563fab
    FSTP float ptr [ESP + 0x48]         ; 00563fad
    FXCH ST3                            ; 00563fb1
    FSTP float ptr [ESP + 0x4c]         ; 00563fb3
    FXCH                                ; 00563fb7
    FSTP float ptr [ESP + 0x50]         ; 00563fb9
    MOVSD ES:EDI,ESI                    ; 00563fbd
    MOVSD ES:EDI,ESI                    ; 00563fbe
    MOVSD ES:EDI,ESI                    ; 00563fbf
    MOV dword ptr [ESP + 0x5c],ECX      ; 00563fc0
    MOV ESI,dword ptr [ESP + 0x60]      ; 00563fc4
    FADD float ptr [ESP + 0x3c]         ; 00563fc8
    FXCH                                ; 00563fcc
    FADD float ptr [ESP + 0x40]         ; 00563fce
    FXCH ST2                            ; 00563fd2
    FADD float ptr [ESP + 0x44]         ; 00563fd4
    FXCH                                ; 00563fd8
    FSTP float ptr [ESP + 0x30]         ; 00563fda
    FXCH                                ; 00563fde
    FSTP float ptr [ESP + 0x34]         ; 00563fe0
    INC ESI                             ; 00563fe4
    FSTP float ptr [ESP + 0x38]         ; 00563fe5
    MOV dword ptr [ESP + 0x60],ESI      ; 00563fe9
    JMP 0x00563ef2                      ; 00563fed
        ;   XREF to: 00563ef2 (UNCONDITIONAL_JUMP)  ; LAB_00563ef2

