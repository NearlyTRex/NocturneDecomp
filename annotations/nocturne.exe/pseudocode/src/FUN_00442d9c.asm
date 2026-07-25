; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00442d9c(void)
;
; Parameters:
; undefined4       Stack[0x0]:4   local_res0
;
; Referenced Globals:
;   undefined4 DAT_0059bddc
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00442d9c
        ;   Label: FUN_00442d9c
    PUSH ESI                            ; 00442d9d
    PUSH EBX                            ; 00442d9e
    LEA EAX,[EBP + 0x1498]              ; 00442d9f
    LEA EDI,[EBP + 0x148c]              ; 00442da5
    LEA ESI,[EBP + 0x16c]               ; 00442dab
    LEA EBX,[EBP + 0x104]               ; 00442db1
    MOVSD ES:EDI,ESI                    ; 00442db7
    MOVSD ES:EDI,ESI                    ; 00442db8
    MOVSD ES:EDI,ESI                    ; 00442db9
    CMP EAX,EBX                         ; 00442dba
    JZ 0x00442dce                       ; 00442dbc
        ;   XREF to: 00442dce (CONDITIONAL_JUMP)  ; LAB_00442dce
    MOV ECX,dword ptr [EBX]             ; 00442dbe
    MOV dword ptr [EAX],ECX             ; 00442dc0
    MOV ECX,dword ptr [EBX + 0x4]       ; 00442dc2
    MOV dword ptr [EAX + 0x4],ECX       ; 00442dc5
    MOV ECX,dword ptr [EBX + 0x8]       ; 00442dc8
    MOV dword ptr [EAX + 0x8],ECX       ; 00442dcb
    MOV EAX,dword ptr [EBP + 0x178]     ; 00442dce
        ;   Label: LAB_00442dce
    MOV dword ptr [EBP + 0x14a4],EAX    ; 00442dd4
    MOV EAX,dword ptr [EBP + 0x17c]     ; 00442dda
    MOV dword ptr [EBP + 0x14a8],EAX    ; 00442de0
    MOV EAX,dword ptr [EBP + 0x180]     ; 00442de6
    MOV dword ptr [EBP + 0x14ac],EAX    ; 00442dec
    MOV EAX,dword ptr [EBP + 0x184]     ; 00442df2
    MOV dword ptr [EBP + 0x14b0],EAX    ; 00442df8
    MOV EAX,dword ptr [EBP + 0x188]     ; 00442dfe
    MOV dword ptr [EBP + 0x14b4],EAX    ; 00442e04
    MOV EAX,dword ptr [EBP + 0x18c]     ; 00442e0a
    MOV dword ptr [EBP + 0x14b8],EAX    ; 00442e10
    MOV EAX,dword ptr [EBP + 0x190]     ; 00442e16
    MOV dword ptr [EBP + 0x14bc],EAX    ; 00442e1c
    MOV EAX,dword ptr [EBP + 0x194]     ; 00442e22
    MOV dword ptr [EBP + 0x14c0],EAX    ; 00442e28
    MOV EAX,dword ptr [EBP + 0x198]     ; 00442e2e
    MOV dword ptr [EBP + 0x14c4],EAX    ; 00442e34
    LEA EBX,[EBP + 0x104]               ; 00442e3a
    FLD float ptr [EDX]                 ; 00442e40
    LEA EAX,[ESP + 0xc]                 ; 00442e42
    FSUB float ptr [EBX]                ; 00442e46
    PUSH EAX                            ; 00442e48
    FSTP float ptr [ESP + 0x10]         ; 00442e49
    LEA EAX,[ESP + 0x1c]                ; 00442e4d
    FLD float ptr [EDX + 0x4]           ; 00442e51
    FSUB float ptr [EBX + 0x4]          ; 00442e54
    PUSH EAX                            ; 00442e57
    FSTP float ptr [ESP + 0x18]         ; 00442e58
    FLD float ptr [EDX + 0x8]           ; 00442e5c
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00442e5f
    FSUB float ptr [EBX + 0x8]          ; 00442e63
    PUSH EDX                            ; 00442e66
    FSTP float ptr [ESP + 0x20]         ; 00442e67
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 00442e6b
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0()
    ADD ESP,0xc                         ; 00442e70
    CMP EBX,EAX                         ; 00442e73
    JZ 0x00442e87                       ; 00442e75
        ;   XREF to: 00442e87 (CONDITIONAL_JUMP)  ; LAB_00442e87
    MOV EDX,dword ptr [EAX]             ; 00442e77
    MOV dword ptr [EBX],EDX             ; 00442e79
    MOV EDX,dword ptr [EAX + 0x4]       ; 00442e7b
    MOV dword ptr [EBX + 0x4],EDX       ; 00442e7e
    MOV EDX,dword ptr [EAX + 0x8]       ; 00442e81
    MOV dword ptr [EBX + 0x8],EDX       ; 00442e84
    LEA EAX,[EBP + 0x104]               ; 00442e87
        ;   Label: LAB_00442e87
    LEA EBX,[EBP + 0x16c]               ; 00442e8d
    FLD float ptr [EAX]                 ; 00442e93
    FMUL float ptr [0x0059bddc]         ; 00442e95 | DAT_0059bddc
    FISTP dword ptr [EBX]               ; 00442e9b
    FLD float ptr [EAX + 0x4]           ; 00442e9d
    FMUL float ptr [0x0059bddc]         ; 00442ea0 | DAT_0059bddc
    FISTP dword ptr [EBX + 0x4]         ; 00442ea6
    FLD float ptr [EAX + 0x8]           ; 00442ea9
    FMUL float ptr [0x0059bddc]         ; 00442eac | DAT_0059bddc
    FISTP dword ptr [EBX + 0x8]         ; 00442eb2
    POP EBX                             ; 00442eb5
    POP ESI                             ; 00442eb6
    POP EDI                             ; 00442eb7
    MOV EAX,dword ptr [ESP + 0x28]      ; 00442eb8
    FILD dword ptr [EBP + 0x14a8]       ; 00442ebc
    FMUL float ptr [EAX + 0xc]          ; 00442ec2
    FILD dword ptr [EBP + 0x14a4]       ; 00442ec5
    FMUL float ptr [EAX]                ; 00442ecb
    FADDP                               ; 00442ecd
    FILD dword ptr [EBP + 0x14ac]       ; 00442ecf
    FMUL float ptr [EAX + 0x18]         ; 00442ed5
    FADDP                               ; 00442ed8
    FILD dword ptr [EBP + 0x14a4]       ; 00442eda
    FXCH                                ; 00442ee0
    CALL crt_math.c_round_FUN_00563a30  ; 00442ee2
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [EBP + 0x178]       ; 00442ee7
    FMUL float ptr [EAX + 0x4]          ; 00442eed
    FILD dword ptr [EBP + 0x14a8]       ; 00442ef0
    FMUL float ptr [EAX + 0x10]         ; 00442ef6
    FADDP                               ; 00442ef9
    FILD dword ptr [EBP + 0x14ac]       ; 00442efb
    FMUL float ptr [EAX + 0x1c]         ; 00442f01
    FADDP                               ; 00442f04
    FILD dword ptr [EBP + 0x14a4]       ; 00442f06
    FXCH                                ; 00442f0c
    CALL crt_math.c_round_FUN_00563a30  ; 00442f0e
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [EBP + 0x17c]       ; 00442f13
    FMUL float ptr [EAX + 0x8]          ; 00442f19
    FILD dword ptr [EBP + 0x14a8]       ; 00442f1c
    FMUL float ptr [EAX + 0x14]         ; 00442f22
    FADDP                               ; 00442f25
    FILD dword ptr [EBP + 0x14ac]       ; 00442f27
    FMUL float ptr [EAX + 0x20]         ; 00442f2d
    FADDP                               ; 00442f30
    FILD dword ptr [EBP + 0x14b4]       ; 00442f32
    FXCH                                ; 00442f38
    CALL crt_math.c_round_FUN_00563a30  ; 00442f3a
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [EBP + 0x180]       ; 00442f3f
    FMUL float ptr [EAX + 0xc]          ; 00442f45
    FILD dword ptr [EBP + 0x14b0]       ; 00442f48
    FMUL float ptr [EAX]                ; 00442f4e
    FADDP                               ; 00442f50
    FILD dword ptr [EBP + 0x14b8]       ; 00442f52
    FMUL float ptr [EAX + 0x18]         ; 00442f58
    FADDP                               ; 00442f5b
    FILD dword ptr [EBP + 0x14b0]       ; 00442f5d
    FXCH                                ; 00442f63
    CALL crt_math.c_round_FUN_00563a30  ; 00442f65
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [EBP + 0x184]       ; 00442f6a
    FMUL float ptr [EAX + 0x4]          ; 00442f70
    FILD dword ptr [EBP + 0x14b4]       ; 00442f73
    FMUL float ptr [EAX + 0x10]         ; 00442f79
    FADDP                               ; 00442f7c
    FILD dword ptr [EBP + 0x14b8]       ; 00442f7e
    FMUL float ptr [EAX + 0x1c]         ; 00442f84
    FADDP                               ; 00442f87
    FILD dword ptr [EBP + 0x14b0]       ; 00442f89
    FXCH                                ; 00442f8f
    CALL crt_math.c_round_FUN_00563a30  ; 00442f91
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [EBP + 0x188]       ; 00442f96
    FMUL float ptr [EAX + 0x8]          ; 00442f9c
    FILD dword ptr [EBP + 0x14b4]       ; 00442f9f
    FMUL float ptr [EAX + 0x14]         ; 00442fa5
    FADDP                               ; 00442fa8
    FILD dword ptr [EBP + 0x14b8]       ; 00442faa
    FMUL float ptr [EAX + 0x20]         ; 00442fb0
    FADDP                               ; 00442fb3
    FILD dword ptr [EBP + 0x14c0]       ; 00442fb5
    FXCH                                ; 00442fbb
    CALL crt_math.c_round_FUN_00563a30  ; 00442fbd
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [EBP + 0x18c]       ; 00442fc2
    FMUL float ptr [EAX + 0xc]          ; 00442fc8
    FILD dword ptr [EBP + 0x14bc]       ; 00442fcb
    FMUL float ptr [EAX]                ; 00442fd1
    FADDP                               ; 00442fd3
    FILD dword ptr [EBP + 0x14c4]       ; 00442fd5
    FMUL float ptr [EAX + 0x18]         ; 00442fdb
    FADDP                               ; 00442fde
    FILD dword ptr [EBP + 0x14bc]       ; 00442fe0
    FXCH                                ; 00442fe6
    CALL crt_math.c_round_FUN_00563a30  ; 00442fe8
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [EBP + 0x190]       ; 00442fed
    FMUL float ptr [EAX + 0x4]          ; 00442ff3
    FILD dword ptr [EBP + 0x14c0]       ; 00442ff6
    FMUL float ptr [EAX + 0x10]         ; 00442ffc
    FADDP                               ; 00442fff
    FILD dword ptr [EBP + 0x14c4]       ; 00443001
    FMUL float ptr [EAX + 0x1c]         ; 00443007
    FADDP                               ; 0044300a
    FILD dword ptr [EBP + 0x14bc]       ; 0044300c
    FXCH                                ; 00443012
    CALL crt_math.c_round_FUN_00563a30  ; 00443014
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [EBP + 0x194]       ; 00443019
    FMUL float ptr [EAX + 0x8]          ; 0044301f
    FILD dword ptr [EBP + 0x14c0]       ; 00443022
    FMUL float ptr [EAX + 0x14]         ; 00443028
    FADDP                               ; 0044302b
    FILD dword ptr [EBP + 0x14c4]       ; 0044302d
    FMUL float ptr [EAX + 0x20]         ; 00443033
    FADDP                               ; 00443036
    CALL crt_math.c_round_FUN_00563a30  ; 00443038
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [EBP + 0x198]       ; 0044303d
    ADD ESP,0x18                        ; 00443043
    POP EBP                             ; 00443046
    RET                                 ; 00443047

