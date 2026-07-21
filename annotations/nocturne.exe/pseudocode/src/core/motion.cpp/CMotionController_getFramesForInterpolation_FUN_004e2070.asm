; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_motion_cpp_CMotionController_getFramesForInterpolation_FUN_004e2070(int *param_1,float param_2,float param_3,int *param_4,int *param_5,float *param_6)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0 at 0051c412
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_0051e350 at 0051e386
;   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0051b920 at 0051b95d
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e2070
        ;   Label: core_motion.cpp_CMotionController_getFramesForInterpolation_FUN_004e2070
    PUSH ESI                            ; 004e2071
    PUSH EDI                            ; 004e2072
    PUSH EBP                            ; 004e2073
    SUB ESP,0x8                         ; 004e2074
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004e2077
    MOV ECX,dword ptr [ESP + 0x28]      ; 004e207b
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004e207f
    MOV EBX,dword ptr [ESP + 0x30]      ; 004e2083
    IMUL EDX,dword ptr [ESP + 0x20],0x54c ; 004e2087
    MOV EAX,dword ptr [EDI]             ; 004e208f
    FLD float ptr [ESP + 0x24]          ; 004e2091
    ADD EAX,0x968                       ; 004e2095
    FLDZ                                ; 004e209a
    ADD EDX,EAX                         ; 004e209c
    FCOMPP                              ; 004e209e
    FNSTSW AX                           ; 004e20a0
    SAHF                                ; 004e20a2
    JNC 0x004e2121                      ; 004e20a3
        ;   XREF to: 004e2121 (CONDITIONAL_JUMP)  ; LAB_004e2121
    MOV EAX,dword ptr [EDX + 0x64]      ; 004e20a9
    DEC EAX                             ; 004e20ac
    MOV dword ptr [ESP + 0x4],EAX       ; 004e20ad
    FILD dword ptr [ESP + 0x4]          ; 004e20b1
    FCOMP float ptr [ESP + 0x24]        ; 004e20b5
    FNSTSW AX                           ; 004e20b9
    SAHF                                ; 004e20bb
    JA 0x004e214e                       ; 004e20bc
        ;   XREF to: 004e214e (CONDITIONAL_JUMP)  ; LAB_004e214e
    MOV EBP,dword ptr [EDX + 0x64]      ; 004e20c2
    MOV EAX,dword ptr [EDX + 0x60]      ; 004e20c5
    ADD EAX,EBP                         ; 004e20c8
    DEC EAX                             ; 004e20ca
    MOV dword ptr [ECX],EAX             ; 004e20cb
    MOV EAX,dword ptr [EDX + 0x64]      ; 004e20cd
    MOV EBP,dword ptr [EDX + 0x28]      ; 004e20d0
    DEC EAX                             ; 004e20d3
    CMP EAX,EBP                         ; 004e20d4
    JG 0x004e213c                       ; 004e20d6
        ;   XREF to: 004e213c (CONDITIONAL_JUMP)  ; LAB_004e213c
    CMP dword ptr [EDX + 0x30],0x1      ; 004e20d8
    JNZ 0x004e213c                      ; 004e20dc
        ;   XREF to: 004e213c (CONDITIONAL_JUMP)  ; LAB_004e213c
    IMUL EAX,dword ptr [EDX + 0x34],0x54c ; 004e20de
    MOV EDI,dword ptr [EDI]             ; 004e20e5
    FILD dword ptr [EDI + EAX*0x1 + 0x9c8] ; 004e20e7
    FADD float ptr [EDX + 0x38]         ; 004e20ee
    CALL crt_math.c_round_FUN_00563a30  ; 004e20f1
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESI]               ; 004e20f6
    MOV EAX,dword ptr [EDX + 0x64]      ; 004e20f8
    DEC EAX                             ; 004e20fb
    MOV dword ptr [ESP + 0x4],EAX       ; 004e20fc
    FILD dword ptr [ESP + 0x4]          ; 004e2100
    FSUBR float ptr [ESP + 0x24]        ; 004e2104
    FST float ptr [EBX]                 ; 004e2108
    FLD1                                ; 004e210a
    FCOMPP                              ; 004e210c
    FNSTSW AX                           ; 004e210e
    SAHF                                ; 004e2110
    JBE 0x004e2130                      ; 004e2111
        ;   XREF to: 004e2130 (CONDITIONAL_JUMP)  ; LAB_004e2130
    ADD ESP,0x8                         ; 004e2113
        ;   Label: LAB_004e2113
    POP EBP                             ; 004e2116
    POP EDI                             ; 004e2117
    POP ESI                             ; 004e2118
    POP EBX                             ; 004e2119
    LEA EAX,[EAX]                       ; 004e211a
    RET                                 ; 004e2120
    MOV EAX,dword ptr [EDX + 0x60]      ; 004e2121
        ;   Label: LAB_004e2121
    MOV dword ptr [ECX],EAX             ; 004e2124
    MOV dword ptr [ESI],EAX             ; 004e2126
    MOV dword ptr [EBX],0x0             ; 004e2128
    JMP 0x004e2113                      ; 004e212e
        ;   XREF to: 004e2113 (UNCONDITIONAL_JUMP)  ; LAB_004e2113
    MOV EAX,dword ptr [ESI]             ; 004e2130
        ;   Label: LAB_004e2130
    MOV dword ptr [ECX],EAX             ; 004e2132
    MOV dword ptr [EBX],0x0             ; 004e2134
    JMP 0x004e2113                      ; 004e213a
        ;   XREF to: 004e2113 (UNCONDITIONAL_JUMP)  ; LAB_004e2113
    MOV EAX,dword ptr [ECX]             ; 004e213c
        ;   Label: LAB_004e213c
    MOV dword ptr [ESI],EAX             ; 004e213e
    MOV dword ptr [EBX],0x0             ; 004e2140
    ADD ESP,0x8                         ; 004e2146
    POP EBP                             ; 004e2149
    POP EDI                             ; 004e214a
    POP ESI                             ; 004e214b
    POP EBX                             ; 004e214c
    RET                                 ; 004e214d
    FILD dword ptr [EDX + 0x60]         ; 004e214e
        ;   Label: LAB_004e214e
    FADD float ptr [ESP + 0x24]         ; 004e2151
    FLD ST0                             ; 004e2155
    CALL crt_math.c_round_FUN_00563a30  ; 004e2157
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ECX]               ; 004e215c
    MOV EDX,dword ptr [ECX]             ; 004e215e
    INC EDX                             ; 004e2160
    MOV dword ptr [ESI],EDX             ; 004e2161
    FILD dword ptr [ECX]                ; 004e2163
    FSUBP                               ; 004e2165
    FSTP float ptr [EBX]                ; 004e2167
    ADD ESP,0x8                         ; 004e2169
    POP EBP                             ; 004e216c
    POP EDI                             ; 004e216d
    POP ESI                             ; 004e216e
    POP EBX                             ; 004e216f
    RET                                 ; 004e2170

