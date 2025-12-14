; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dcamera.cpp_CDemonCamera_saveCameraTransform_FUN_0044ef30(CDemonCamera * this_ptr, CVector3f * new_position, CMatrix3x3f * rotation_matrix, CMatrix3x3f * transform_matrix)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   new_position
; CMatrix3x3f *    Stack[0xc]:4   rotation_matrix
; CMatrix3x3f *    Stack[0x10]:4   transform_matrix
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   float g_CameraFixedPointScale = 256
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0044ef30
        ;   Label: core_dcamera.cpp_CDemonCamera_saveCameraTransform_FUN_0044ef30
    SUB ESP,0x18                        ; 0044ef31
    MOV EBP,dword ptr [ESP + 0x20]      ; 0044ef34
    MOV EDX,dword ptr [ESP + 0x24]      ; 0044ef38
    PUSH EDI                            ; 0044ef3c
    PUSH ESI                            ; 0044ef3d
    PUSH EBX                            ; 0044ef3e
    LEA EAX,[EBP + 0x1498]              ; 0044ef3f
    LEA EDI,[EBP + 0x148c]              ; 0044ef45
    LEA ESI,[EBP + 0x16c]               ; 0044ef4b
    LEA EBX,[EBP + 0x4]                 ; 0044ef51
    MOVSD ES:EDI,ESI                    ; 0044ef54
    MOVSD ES:EDI,ESI                    ; 0044ef55
    MOVSD ES:EDI,ESI                    ; 0044ef56
    CMP EAX,EBX                         ; 0044ef57
    JZ 0x0044ef6b                       ; 0044ef59
        ;   XREF to: 0044ef6b (CONDITIONAL_JUMP)  ; LAB_0044ef6b
    MOV ECX,dword ptr [EBX]             ; 0044ef5b
    MOV dword ptr [EAX],ECX             ; 0044ef5d
    MOV ECX,dword ptr [EBX + 0x4]       ; 0044ef5f
    MOV dword ptr [EAX + 0x4],ECX       ; 0044ef62
    MOV ECX,dword ptr [EBX + 0x8]       ; 0044ef65
    MOV dword ptr [EAX + 0x8],ECX       ; 0044ef68
    MOV EAX,dword ptr [EBP + 0x178]     ; 0044ef6b
        ;   Label: LAB_0044ef6b
    MOV dword ptr [EBP + 0x14a4],EAX    ; 0044ef71
    MOV EAX,dword ptr [EBP + 0x17c]     ; 0044ef77
    MOV dword ptr [EBP + 0x14a8],EAX    ; 0044ef7d
    MOV EAX,dword ptr [EBP + 0x180]     ; 0044ef83
    MOV dword ptr [EBP + 0x14ac],EAX    ; 0044ef89
    MOV EAX,dword ptr [EBP + 0x184]     ; 0044ef8f
    MOV dword ptr [EBP + 0x14b0],EAX    ; 0044ef95
    MOV EAX,dword ptr [EBP + 0x188]     ; 0044ef9b
    MOV dword ptr [EBP + 0x14b4],EAX    ; 0044efa1
    MOV EAX,dword ptr [EBP + 0x18c]     ; 0044efa7
    MOV dword ptr [EBP + 0x14b8],EAX    ; 0044efad
    MOV EAX,dword ptr [EBP + 0x190]     ; 0044efb3
    MOV dword ptr [EBP + 0x14bc],EAX    ; 0044efb9
    MOV EAX,dword ptr [EBP + 0x194]     ; 0044efbf
    MOV dword ptr [EBP + 0x14c0],EAX    ; 0044efc5
    MOV EAX,dword ptr [EBP + 0x198]     ; 0044efcb
    MOV dword ptr [EBP + 0x14c4],EAX    ; 0044efd1
    LEA EBX,[EBP + 0x4]                 ; 0044efd7
    FLD float ptr [EDX]                 ; 0044efda
    LEA EAX,[ESP + 0xc]                 ; 0044efdc
    FSUB float ptr [EBX]                ; 0044efe0
    PUSH EAX                            ; 0044efe2
    FSTP float ptr [ESP + 0x10]         ; 0044efe3
    LEA EAX,[ESP + 0x1c]                ; 0044efe7
    FLD float ptr [EDX + 0x4]           ; 0044efeb
    FSUB float ptr [EBX + 0x4]          ; 0044efee
    PUSH EAX                            ; 0044eff1
    FSTP float ptr [ESP + 0x18]         ; 0044eff2
    FLD float ptr [EDX + 0x8]           ; 0044eff6
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0044eff9
    FSUB float ptr [EBX + 0x8]          ; 0044effd
    PUSH EDX                            ; 0044f000
    FSTP float ptr [ESP + 0x20]         ; 0044f001
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 0044f005
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * matrix, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0044f00a
    CMP EBX,EAX                         ; 0044f00d
    JZ 0x0044f021                       ; 0044f00f
        ;   XREF to: 0044f021 (CONDITIONAL_JUMP)  ; LAB_0044f021
    MOV EDX,dword ptr [EAX]             ; 0044f011
    MOV dword ptr [EBX],EDX             ; 0044f013
    MOV EDX,dword ptr [EAX + 0x4]       ; 0044f015
    MOV dword ptr [EBX + 0x4],EDX       ; 0044f018
    MOV EDX,dword ptr [EAX + 0x8]       ; 0044f01b
    MOV dword ptr [EBX + 0x8],EDX       ; 0044f01e
    LEA EAX,[EBP + 0x4]                 ; 0044f021
        ;   Label: LAB_0044f021
    LEA EBX,[EBP + 0x16c]               ; 0044f024
    FLD float ptr [EAX]                 ; 0044f02a
    FMUL float ptr [0x0065c63c]         ; 0044f02c | g_CameraFixedPointScale
    FISTP dword ptr [EBX]               ; 0044f032
    FLD float ptr [EAX + 0x4]           ; 0044f034
    FMUL float ptr [0x0065c63c]         ; 0044f037 | g_CameraFixedPointScale
    FISTP dword ptr [EBX + 0x4]         ; 0044f03d
    FLD float ptr [EAX + 0x8]           ; 0044f040
    FMUL float ptr [0x0065c63c]         ; 0044f043 | g_CameraFixedPointScale
    FISTP dword ptr [EBX + 0x8]         ; 0044f049
    POP EBX                             ; 0044f04c
    POP ESI                             ; 0044f04d
    POP EDI                             ; 0044f04e
    MOV EAX,dword ptr [ESP + 0x28]      ; 0044f04f
    FILD dword ptr [EBP + 0x14a8]       ; 0044f053
    FMUL float ptr [EAX + 0xc]          ; 0044f059
    FILD dword ptr [EBP + 0x14a4]       ; 0044f05c
    FMUL float ptr [EAX]                ; 0044f062
    FADDP                               ; 0044f064
    FILD dword ptr [EBP + 0x14ac]       ; 0044f066
    FMUL float ptr [EAX + 0x18]         ; 0044f06c
    FADDP                               ; 0044f06f
    FILD dword ptr [EBP + 0x14a4]       ; 0044f071
    FXCH                                ; 0044f077
    CALL crt_math.c_round_FUN_005fe6b0  ; 0044f079
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0x178]       ; 0044f07e
    FMUL float ptr [EAX + 0x4]          ; 0044f084
    FILD dword ptr [EBP + 0x14a8]       ; 0044f087
    FMUL float ptr [EAX + 0x10]         ; 0044f08d
    FADDP                               ; 0044f090
    FILD dword ptr [EBP + 0x14ac]       ; 0044f092
    FMUL float ptr [EAX + 0x1c]         ; 0044f098
    FADDP                               ; 0044f09b
    FILD dword ptr [EBP + 0x14a4]       ; 0044f09d
    FXCH                                ; 0044f0a3
    CALL crt_math.c_round_FUN_005fe6b0  ; 0044f0a5
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0x17c]       ; 0044f0aa
    FMUL float ptr [EAX + 0x8]          ; 0044f0b0
    FILD dword ptr [EBP + 0x14a8]       ; 0044f0b3
    FMUL float ptr [EAX + 0x14]         ; 0044f0b9
    FADDP                               ; 0044f0bc
    FILD dword ptr [EBP + 0x14ac]       ; 0044f0be
    FMUL float ptr [EAX + 0x20]         ; 0044f0c4
    FADDP                               ; 0044f0c7
    FILD dword ptr [EBP + 0x14b4]       ; 0044f0c9
    FXCH                                ; 0044f0cf
    CALL crt_math.c_round_FUN_005fe6b0  ; 0044f0d1
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0x180]       ; 0044f0d6
    FMUL float ptr [EAX + 0xc]          ; 0044f0dc
    FILD dword ptr [EBP + 0x14b0]       ; 0044f0df
    FMUL float ptr [EAX]                ; 0044f0e5
    FADDP                               ; 0044f0e7
    FILD dword ptr [EBP + 0x14b8]       ; 0044f0e9
    FMUL float ptr [EAX + 0x18]         ; 0044f0ef
    FADDP                               ; 0044f0f2
    FILD dword ptr [EBP + 0x14b0]       ; 0044f0f4
    FXCH                                ; 0044f0fa
    CALL crt_math.c_round_FUN_005fe6b0  ; 0044f0fc
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0x184]       ; 0044f101
    FMUL float ptr [EAX + 0x4]          ; 0044f107
    FILD dword ptr [EBP + 0x14b4]       ; 0044f10a
    FMUL float ptr [EAX + 0x10]         ; 0044f110
    FADDP                               ; 0044f113
    FILD dword ptr [EBP + 0x14b8]       ; 0044f115
    FMUL float ptr [EAX + 0x1c]         ; 0044f11b
    FADDP                               ; 0044f11e
    FILD dword ptr [EBP + 0x14b0]       ; 0044f120
    FXCH                                ; 0044f126
    CALL crt_math.c_round_FUN_005fe6b0  ; 0044f128
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0x188]       ; 0044f12d
    FMUL float ptr [EAX + 0x8]          ; 0044f133
    FILD dword ptr [EBP + 0x14b4]       ; 0044f136
    FMUL float ptr [EAX + 0x14]         ; 0044f13c
    FADDP                               ; 0044f13f
    FILD dword ptr [EBP + 0x14b8]       ; 0044f141
    FMUL float ptr [EAX + 0x20]         ; 0044f147
    FADDP                               ; 0044f14a
    FILD dword ptr [EBP + 0x14c0]       ; 0044f14c
    FXCH                                ; 0044f152
    CALL crt_math.c_round_FUN_005fe6b0  ; 0044f154
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0x18c]       ; 0044f159
    FMUL float ptr [EAX + 0xc]          ; 0044f15f
    FILD dword ptr [EBP + 0x14bc]       ; 0044f162
    FMUL float ptr [EAX]                ; 0044f168
    FADDP                               ; 0044f16a
    FILD dword ptr [EBP + 0x14c4]       ; 0044f16c
    FMUL float ptr [EAX + 0x18]         ; 0044f172
    FADDP                               ; 0044f175
    FILD dword ptr [EBP + 0x14bc]       ; 0044f177
    FXCH                                ; 0044f17d
    CALL crt_math.c_round_FUN_005fe6b0  ; 0044f17f
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0x190]       ; 0044f184
    FMUL float ptr [EAX + 0x4]          ; 0044f18a
    FILD dword ptr [EBP + 0x14c0]       ; 0044f18d
    FMUL float ptr [EAX + 0x10]         ; 0044f193
    FADDP                               ; 0044f196
    FILD dword ptr [EBP + 0x14c4]       ; 0044f198
    FMUL float ptr [EAX + 0x1c]         ; 0044f19e
    FADDP                               ; 0044f1a1
    FILD dword ptr [EBP + 0x14bc]       ; 0044f1a3
    FXCH                                ; 0044f1a9
    CALL crt_math.c_round_FUN_005fe6b0  ; 0044f1ab
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0x194]       ; 0044f1b0
    FMUL float ptr [EAX + 0x8]          ; 0044f1b6
    FILD dword ptr [EBP + 0x14c0]       ; 0044f1b9
    FMUL float ptr [EAX + 0x14]         ; 0044f1bf
    FADDP                               ; 0044f1c2
    FILD dword ptr [EBP + 0x14c4]       ; 0044f1c4
    FMUL float ptr [EAX + 0x20]         ; 0044f1ca
    FADDP                               ; 0044f1cd
    CALL crt_math.c_round_FUN_005fe6b0  ; 0044f1cf
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0x198]       ; 0044f1d4
    ADD ESP,0x18                        ; 0044f1da
    POP EBP                             ; 0044f1dd
    RET                                 ; 0044f1de

