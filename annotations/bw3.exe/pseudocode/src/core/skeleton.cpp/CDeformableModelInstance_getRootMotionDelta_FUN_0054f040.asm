; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __stack3_esi core_skeleton_cpp_CDeformableModelInstance_getRootMotionDelta_FUN_0054f040(CDeformableModelInstance *this_ptr,float start_frame,float end_frame,CVector3f *output_buffer)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   start_frame
; float            Stack[0xc]:4   end_frame
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_0054efa0 at 0054efba
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   crt_math.c_ceil_FUN_005a6067
;   crt_math.c_floor_FUN_005a3600
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054f040
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_0054f040
    PUSH EDI                            ; 0054f041
    PUSH EBP                            ; 0054f042
    SUB ESP,0x68                        ; 0054f043
    MOV EBP,dword ptr [ESP + 0x78]      ; 0054f046
    MOV EBX,ESI                         ; 0054f04a
    FLD float ptr [ESP + 0x7c]          ; 0054f04c
    FCOMP float ptr [ESP + 0x80]        ; 0054f050
    FNSTSW AX                           ; 0054f057
    SAHF                                ; 0054f059
    JC 0x0054f07a                       ; 0054f05a
        ;   XREF to: 0054f07a (CONDITIONAL_JUMP)  ; LAB_0054f07a
    LEA EDI,[ESP + 0xc]                 ; 0054f05c
    MOV ESI,0x2cfd900                   ; 0054f060
    MOVSD ES:EDI,ESI                    ; 0054f065
        ;   Label: LAB_0054f065
    MOVSD ES:EDI,ESI                    ; 0054f066
    MOVSD ES:EDI,ESI                    ; 0054f067
    LEA ESI,[ESP + 0xc]                 ; 0054f068
    MOV EDI,EBX                         ; 0054f06c
    MOVSD ES:EDI,ESI                    ; 0054f06e
    MOVSD ES:EDI,ESI                    ; 0054f06f
    MOVSD ES:EDI,ESI                    ; 0054f070
    MOV EAX,EBX                         ; 0054f071
    ADD ESP,0x68                        ; 0054f073
    POP EBP                             ; 0054f076
    POP EDI                             ; 0054f077
    POP EBX                             ; 0054f078
    RET                                 ; 0054f079
    PUSH EBP                            ; 0054f07a
        ;   Label: LAB_0054f07a
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0054f07b
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054f080
    FLD float ptr [ESP + 0x7c]          ; 0054f083
    MOV dword ptr [ESP + 0x58],EAX      ; 0054f087
    SUB ESP,0x8                         ; 0054f08b
    FSTP double ptr [ESP]               ; 0054f08e
    MOV ESI,EAX                         ; 0054f091
    CALL crt_math.c_floor_FUN_005a3600  ; 0054f093
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    MOV dword ptr [ESP + 0x50],EAX      ; 0054f098
    MOV dword ptr [ESP + 0x54],EDX      ; 0054f09c
    FLD double ptr [ESP + 0x50]         ; 0054f0a0
    ADD ESP,0x8                         ; 0054f0a4
    CALL crt_math.c_round_FUN_005a3120  ; 0054f0a7
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FLD float ptr [ESP + 0x80]          ; 0054f0ac
    FXCH                                ; 0054f0b3
    FISTP dword ptr [ESP + 0x5c]        ; 0054f0b5
    SUB ESP,0x8                         ; 0054f0b9
    FSTP double ptr [ESP]               ; 0054f0bc
    CALL crt_math.c_ceil_FUN_005a6067   ; 0054f0bf
        ;   XREF to: 005a6067 (UNCONDITIONAL_CALL)  ; double crt_math.c_ceil_FUN_005a6067(double value)
    MOV dword ptr [ESP + 0x50],EAX      ; 0054f0c4
    MOV dword ptr [ESP + 0x54],EDX      ; 0054f0c8
    FLD double ptr [ESP + 0x50]         ; 0054f0cc
    CALL crt_math.c_round_FUN_005a3120  ; 0054f0d0
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    ADD ESP,0x8                         ; 0054f0d5
    XOR EDX,EDX                         ; 0054f0d8
    FISTP dword ptr [ESP + 0x60]        ; 0054f0da
    MOV EDI,dword ptr [ESP + 0x5c]      ; 0054f0de
    MOV dword ptr [ESP + 0x3c],EDX      ; 0054f0e2
    MOV dword ptr [ESP + 0x40],EDX      ; 0054f0e6
    MOV dword ptr [ESP + 0x44],EDX      ; 0054f0ea
    CMP EDI,dword ptr [ESP + 0x60]      ; 0054f0ee
    JGE 0x0054f150                      ; 0054f0f2
        ;   XREF to: 0054f150 (CONDITIONAL_JUMP)  ; LAB_0054f150
    LEA EAX,[EDI*0x4 + 0x0]             ; 0054f0f4
    SUB EAX,EDI                         ; 0054f0fb
    MOV EDX,dword ptr [ESI + 0x1ec98]   ; 0054f0fd
    LEA ESI,[EAX*0x4 + 0x0]             ; 0054f103
    MOV ECX,dword ptr [ESP + 0x60]      ; 0054f10a
    ADD ESI,EDX                         ; 0054f10e
    FLD float ptr [ESP + 0x3c]          ; 0054f110
        ;   Label: LAB_0054f110
    FLD float ptr [ESP + 0x40]          ; 0054f114
    ADD ESI,0xc                         ; 0054f118
    FLD float ptr [ESP + 0x44]          ; 0054f11b
    INC EDI                             ; 0054f11f
    FXCH ST2                            ; 0054f120
    FADD float ptr [ESI + -0xc]         ; 0054f122
    FXCH                                ; 0054f125
    FADD float ptr [ESI + -0x8]         ; 0054f127
    FXCH ST2                            ; 0054f12a
    FADD float ptr [ESI + -0x4]         ; 0054f12c
    FXCH                                ; 0054f12f
    FSTP float ptr [ESP + 0x3c]         ; 0054f131
    FXCH                                ; 0054f135
    FSTP float ptr [ESP + 0x40]         ; 0054f137
    FSTP float ptr [ESP + 0x44]         ; 0054f13b
    CMP EDI,ECX                         ; 0054f13f
    JL 0x0054f110                       ; 0054f141
        ;   XREF to: 0054f110 (CONDITIONAL_JUMP)  ; LAB_0054f110
    LEA EAX,[EAX]                       ; 0054f143
    LEA EDX,[EDX]                       ; 0054f149
    NOP                                 ; 0054f14f
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0054f150
        ;   Label: LAB_0054f150
    MOV EDX,dword ptr [ESP + 0x58]      ; 0054f154
    MOV dword ptr [ESP + 0x64],EAX      ; 0054f158
    MOV ESI,EAX                         ; 0054f15c
    MOV EDX,dword ptr [EDX + 0x1ec98]   ; 0054f15e
    FILD dword ptr [ESP + 0x64]         ; 0054f164
    SHL EAX,0x2                         ; 0054f168
    FSUBR float ptr [ESP + 0x7c]        ; 0054f16b
    SUB EAX,ESI                         ; 0054f16f
    FSTP float ptr [ESP + 0x54]         ; 0054f171
    FLD float ptr [EDX + EAX*0x4]       ; 0054f175
    FMUL float ptr [ESP + 0x54]         ; 0054f178
    FLD float ptr [EDX + EAX*0x4 + 0x4] ; 0054f17c
    FMUL float ptr [ESP + 0x54]         ; 0054f180
    FLD float ptr [EDX + EAX*0x4 + 0x8] ; 0054f184
    FMUL float ptr [ESP + 0x54]         ; 0054f188
    MOV EDI,ESP                         ; 0054f18c
    LEA ESI,[ESP + 0x18]                ; 0054f18e
    MOV EAX,dword ptr [ESP + 0x60]      ; 0054f192
    FXCH ST2                            ; 0054f196
    FSTP float ptr [ESP + 0x18]         ; 0054f198
    FSTP float ptr [ESP + 0x1c]         ; 0054f19c
    FSTP float ptr [ESP + 0x20]         ; 0054f1a0
    MOVSD ES:EDI,ESI                    ; 0054f1a4
    MOVSD ES:EDI,ESI                    ; 0054f1a5
    MOVSD ES:EDI,ESI                    ; 0054f1a6
    MOV dword ptr [ESP + 0x64],EAX      ; 0054f1a7
    LEA ESI,[EAX + -0x1]                ; 0054f1ab
    FILD dword ptr [ESP + 0x64]         ; 0054f1ae
    LEA EAX,[ESI*0x4 + 0x0]             ; 0054f1b2
    FSUB float ptr [ESP + 0x80]         ; 0054f1b9
    SUB EAX,ESI                         ; 0054f1c0
    FSTP float ptr [ESP + 0x50]         ; 0054f1c2
    FLD float ptr [EDX + EAX*0x4]       ; 0054f1c6
    FMUL float ptr [ESP + 0x50]         ; 0054f1c9
    FLD float ptr [EDX + EAX*0x4 + 0x4] ; 0054f1cd
    FMUL float ptr [ESP + 0x50]         ; 0054f1d1
    FLD float ptr [EDX + EAX*0x4 + 0x8] ; 0054f1d5
    FMUL float ptr [ESP + 0x50]         ; 0054f1d9
    FLD float ptr [ESP + 0x3c]          ; 0054f1dd
    FSUB float ptr [ESP]                ; 0054f1e1
    LEA EDI,[ESP + 0x24]                ; 0054f1e4
    FSTP float ptr [ESP + 0x3c]         ; 0054f1e8
    LEA ESI,[ESP + 0x30]                ; 0054f1ec
    FXCH ST2                            ; 0054f1f0
    FSTP float ptr [ESP + 0x30]         ; 0054f1f2
    FSTP float ptr [ESP + 0x34]         ; 0054f1f6
    FSTP float ptr [ESP + 0x38]         ; 0054f1fa
    MOVSD ES:EDI,ESI                    ; 0054f1fe
    MOVSD ES:EDI,ESI                    ; 0054f1ff
    MOVSD ES:EDI,ESI                    ; 0054f200
    FLD float ptr [ESP + 0x3c]          ; 0054f201
    FSUB float ptr [ESP + 0x24]         ; 0054f205
    FMUL float ptr [EBP + 0x508]        ; 0054f209
    FLD float ptr [ESP + 0x44]          ; 0054f20f
    FLD float ptr [ESP + 0x40]          ; 0054f213
    FSUB float ptr [ESP + 0x4]          ; 0054f217
    FXCH                                ; 0054f21b
    FSUB float ptr [ESP + 0x8]          ; 0054f21d
    FXCH                                ; 0054f221
    FSUB float ptr [ESP + 0x28]         ; 0054f223
    FXCH                                ; 0054f227
    FSUB float ptr [ESP + 0x2c]         ; 0054f229
    FXCH                                ; 0054f22d
    FMUL float ptr [EBP + 0x50c]        ; 0054f22f
    FXCH                                ; 0054f235
    FMUL float ptr [EBP + 0x510]        ; 0054f237
    LEA EDI,[ESP + 0xc]                 ; 0054f23d
    LEA ESI,[ESP + 0x3c]                ; 0054f241
    FXCH ST2                            ; 0054f245
    FSTP float ptr [ESP + 0x3c]         ; 0054f247
    FSTP float ptr [ESP + 0x40]         ; 0054f24b
    FSTP float ptr [ESP + 0x44]         ; 0054f24f
    JMP 0x0054f065                      ; 0054f253
        ;   XREF to: 0054f065 (UNCONDITIONAL_JUMP)  ; LAB_0054f065

