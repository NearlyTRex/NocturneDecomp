; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __stack3_esi core_skeleton_cpp_CDeformableModelInstance_getRootMotionDelta_FUN_00547e10(CDeformableModelInstance *this_ptr,float start_frame,float end_frame,CVector3f *output_buffer)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   start_frame
; float            Stack[0xc]:4   end_frame
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_00547d70 at 00547d8a
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   crt_math.c_ceil_FUN_005bae37
;   crt_math.c_floor_FUN_005b84d0
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00547e10
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_00547e10
    PUSH EDI                            ; 00547e11
    PUSH EBP                            ; 00547e12
    SUB ESP,0x68                        ; 00547e13
    MOV EBP,dword ptr [ESP + 0x78]      ; 00547e16
    MOV EBX,ESI                         ; 00547e1a
    FLD float ptr [ESP + 0x7c]          ; 00547e1c
    FCOMP float ptr [ESP + 0x80]        ; 00547e20
    FNSTSW AX                           ; 00547e27
    SAHF                                ; 00547e29
    JC 0x00547e4a                       ; 00547e2a
        ;   XREF to: 00547e4a (CONDITIONAL_JUMP)  ; LAB_00547e4a
    LEA EDI,[ESP + 0xc]                 ; 00547e2c
    MOV ESI,0x265370c                   ; 00547e30
    MOVSD ES:EDI,ESI                    ; 00547e35
        ;   Label: LAB_00547e35
    MOVSD ES:EDI,ESI                    ; 00547e36
    MOVSD ES:EDI,ESI                    ; 00547e37
    LEA ESI,[ESP + 0xc]                 ; 00547e38
    MOV EDI,EBX                         ; 00547e3c
    MOVSD ES:EDI,ESI                    ; 00547e3e
    MOVSD ES:EDI,ESI                    ; 00547e3f
    MOVSD ES:EDI,ESI                    ; 00547e40
    MOV EAX,EBX                         ; 00547e41
    ADD ESP,0x68                        ; 00547e43
    POP EBP                             ; 00547e46
    POP EDI                             ; 00547e47
    POP EBX                             ; 00547e48
    RET                                 ; 00547e49
    PUSH EBP                            ; 00547e4a
        ;   Label: LAB_00547e4a
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 00547e4b
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00547e50
    FLD float ptr [ESP + 0x7c]          ; 00547e53
    MOV dword ptr [ESP + 0x58],EAX      ; 00547e57
    SUB ESP,0x8                         ; 00547e5b
    FSTP double ptr [ESP]               ; 00547e5e
    MOV ESI,EAX                         ; 00547e61
    CALL crt_math.c_floor_FUN_005b84d0  ; 00547e63
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [ESP + 0x50],EAX      ; 00547e68
    MOV dword ptr [ESP + 0x54],EDX      ; 00547e6c
    FLD double ptr [ESP + 0x50]         ; 00547e70
    ADD ESP,0x8                         ; 00547e74
    CALL crt_math.c_round_FUN_005b7ff0  ; 00547e77
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FLD float ptr [ESP + 0x80]          ; 00547e7c
    FXCH                                ; 00547e83
    FISTP dword ptr [ESP + 0x5c]        ; 00547e85
    SUB ESP,0x8                         ; 00547e89
    FSTP double ptr [ESP]               ; 00547e8c
    CALL crt_math.c_ceil_FUN_005bae37   ; 00547e8f
        ;   XREF to: 005bae37 (UNCONDITIONAL_CALL)  ; double crt_math.c_ceil_FUN_005bae37(double value)
    MOV dword ptr [ESP + 0x50],EAX      ; 00547e94
    MOV dword ptr [ESP + 0x54],EDX      ; 00547e98
    FLD double ptr [ESP + 0x50]         ; 00547e9c
    CALL crt_math.c_round_FUN_005b7ff0  ; 00547ea0
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    ADD ESP,0x8                         ; 00547ea5
    XOR EDX,EDX                         ; 00547ea8
    FISTP dword ptr [ESP + 0x60]        ; 00547eaa
    MOV EDI,dword ptr [ESP + 0x5c]      ; 00547eae
    MOV dword ptr [ESP + 0x3c],EDX      ; 00547eb2
    MOV dword ptr [ESP + 0x40],EDX      ; 00547eb6
    MOV dword ptr [ESP + 0x44],EDX      ; 00547eba
    CMP EDI,dword ptr [ESP + 0x60]      ; 00547ebe
    JGE 0x00547f20                      ; 00547ec2
        ;   XREF to: 00547f20 (CONDITIONAL_JUMP)  ; LAB_00547f20
    LEA EAX,[EDI*0x4 + 0x0]             ; 00547ec4
    SUB EAX,EDI                         ; 00547ecb
    MOV EDX,dword ptr [ESI + 0x1e018]   ; 00547ecd
    LEA ESI,[EAX*0x4 + 0x0]             ; 00547ed3
    MOV ECX,dword ptr [ESP + 0x60]      ; 00547eda
    ADD ESI,EDX                         ; 00547ede
    FLD float ptr [ESP + 0x3c]          ; 00547ee0
        ;   Label: LAB_00547ee0
    FLD float ptr [ESP + 0x40]          ; 00547ee4
    ADD ESI,0xc                         ; 00547ee8
    FLD float ptr [ESP + 0x44]          ; 00547eeb
    INC EDI                             ; 00547eef
    FXCH ST2                            ; 00547ef0
    FADD float ptr [ESI + -0xc]         ; 00547ef2
    FXCH                                ; 00547ef5
    FADD float ptr [ESI + -0x8]         ; 00547ef7
    FXCH ST2                            ; 00547efa
    FADD float ptr [ESI + -0x4]         ; 00547efc
    FXCH                                ; 00547eff
    FSTP float ptr [ESP + 0x3c]         ; 00547f01
    FXCH                                ; 00547f05
    FSTP float ptr [ESP + 0x40]         ; 00547f07
    FSTP float ptr [ESP + 0x44]         ; 00547f0b
    CMP EDI,ECX                         ; 00547f0f
    JL 0x00547ee0                       ; 00547f11
        ;   XREF to: 00547ee0 (CONDITIONAL_JUMP)  ; LAB_00547ee0
    LEA EAX,[EAX]                       ; 00547f13
    LEA EDX,[EDX]                       ; 00547f19
    NOP                                 ; 00547f1f
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00547f20
        ;   Label: LAB_00547f20
    MOV EDX,dword ptr [ESP + 0x58]      ; 00547f24
    MOV dword ptr [ESP + 0x64],EAX      ; 00547f28
    MOV ESI,EAX                         ; 00547f2c
    MOV EDX,dword ptr [EDX + 0x1e018]   ; 00547f2e
    FILD dword ptr [ESP + 0x64]         ; 00547f34
    SHL EAX,0x2                         ; 00547f38
    FSUBR float ptr [ESP + 0x7c]        ; 00547f3b
    SUB EAX,ESI                         ; 00547f3f
    FSTP float ptr [ESP + 0x54]         ; 00547f41
    FLD float ptr [EDX + EAX*0x4]       ; 00547f45
    FMUL float ptr [ESP + 0x54]         ; 00547f48
    FLD float ptr [EDX + EAX*0x4 + 0x4] ; 00547f4c
    FMUL float ptr [ESP + 0x54]         ; 00547f50
    FLD float ptr [EDX + EAX*0x4 + 0x8] ; 00547f54
    FMUL float ptr [ESP + 0x54]         ; 00547f58
    MOV EDI,ESP                         ; 00547f5c
    LEA ESI,[ESP + 0x18]                ; 00547f5e
    MOV EAX,dword ptr [ESP + 0x60]      ; 00547f62
    FXCH ST2                            ; 00547f66
    FSTP float ptr [ESP + 0x18]         ; 00547f68
    FSTP float ptr [ESP + 0x1c]         ; 00547f6c
    FSTP float ptr [ESP + 0x20]         ; 00547f70
    MOVSD ES:EDI,ESI                    ; 00547f74
    MOVSD ES:EDI,ESI                    ; 00547f75
    MOVSD ES:EDI,ESI                    ; 00547f76
    MOV dword ptr [ESP + 0x64],EAX      ; 00547f77
    LEA ESI,[EAX + -0x1]                ; 00547f7b
    FILD dword ptr [ESP + 0x64]         ; 00547f7e
    LEA EAX,[ESI*0x4 + 0x0]             ; 00547f82
    FSUB float ptr [ESP + 0x80]         ; 00547f89
    SUB EAX,ESI                         ; 00547f90
    FSTP float ptr [ESP + 0x50]         ; 00547f92
    FLD float ptr [EDX + EAX*0x4]       ; 00547f96
    FMUL float ptr [ESP + 0x50]         ; 00547f99
    FLD float ptr [EDX + EAX*0x4 + 0x4] ; 00547f9d
    FMUL float ptr [ESP + 0x50]         ; 00547fa1
    FLD float ptr [EDX + EAX*0x4 + 0x8] ; 00547fa5
    FMUL float ptr [ESP + 0x50]         ; 00547fa9
    FLD float ptr [ESP + 0x3c]          ; 00547fad
    FSUB float ptr [ESP]                ; 00547fb1
    LEA EDI,[ESP + 0x24]                ; 00547fb4
    FSTP float ptr [ESP + 0x3c]         ; 00547fb8
    LEA ESI,[ESP + 0x30]                ; 00547fbc
    FXCH ST2                            ; 00547fc0
    FSTP float ptr [ESP + 0x30]         ; 00547fc2
    FSTP float ptr [ESP + 0x34]         ; 00547fc6
    FSTP float ptr [ESP + 0x38]         ; 00547fca
    MOVSD ES:EDI,ESI                    ; 00547fce
    MOVSD ES:EDI,ESI                    ; 00547fcf
    MOVSD ES:EDI,ESI                    ; 00547fd0
    FLD float ptr [ESP + 0x3c]          ; 00547fd1
    FSUB float ptr [ESP + 0x24]         ; 00547fd5
    FMUL float ptr [EBP + 0x508]        ; 00547fd9
    FLD float ptr [ESP + 0x44]          ; 00547fdf
    FLD float ptr [ESP + 0x40]          ; 00547fe3
    FSUB float ptr [ESP + 0x4]          ; 00547fe7
    FXCH                                ; 00547feb
    FSUB float ptr [ESP + 0x8]          ; 00547fed
    FXCH                                ; 00547ff1
    FSUB float ptr [ESP + 0x28]         ; 00547ff3
    FXCH                                ; 00547ff7
    FSUB float ptr [ESP + 0x2c]         ; 00547ff9
    FXCH                                ; 00547ffd
    FMUL float ptr [EBP + 0x50c]        ; 00547fff
    FXCH                                ; 00548005
    FMUL float ptr [EBP + 0x510]        ; 00548007
    LEA EDI,[ESP + 0xc]                 ; 0054800d
    LEA ESI,[ESP + 0x3c]                ; 00548011
    FXCH ST2                            ; 00548015
    FSTP float ptr [ESP + 0x3c]         ; 00548017
    FSTP float ptr [ESP + 0x40]         ; 0054801b
    FSTP float ptr [ESP + 0x44]         ; 0054801f
    JMP 0x00547e35                      ; 00548023
        ;   XREF to: 00547e35 (UNCONDITIONAL_JUMP)  ; LAB_00547e35

