; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_box.cpp_CBox_updateTransform_FUN_0041e0e0(CBox * this_ptr, CVector3f * new_position, CVector3f * new_orientation, float speed)
;
; Parameters:
; CBox *           Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   new_position
; CVector3f *      Stack[0xc]:4   new_orientation
; float            Stack[0x10]:4   speed
; Local Variables:
; undefined1       Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_box.cpp_CBox_setupCorners_FUN_0041dd20 at 0041df45
;
; Referenced Globals:
;   double g_BoxDensityScale = 0.03125
;   double g_BoxInertiaCoefficient = 0.0833333333333333
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041e0e0
        ;   Label: core_box.cpp_CBox_updateTransform_FUN_0041e0e0
    PUSH ESI                            ; 0041e0e1
    PUSH EDI                            ; 0041e0e2
    PUSH EBP                            ; 0041e0e3
    SUB ESP,0x1c                        ; 0041e0e4
    MOV ESI,dword ptr [ESP + 0x30]      ; 0041e0e7
    MOV EAX,dword ptr [ESP + 0x34]      ; 0041e0eb
    MOV EBX,dword ptr [ESP + 0x38]      ; 0041e0ef
    CMP ESI,EAX                         ; 0041e0f3
    JNZ 0x0041e2b8                      ; 0041e0f5 | LAB_0041e2b8
        ;   XREF to: 0041e2b8 (CONDITIONAL_JUMP)
    LEA EAX,[ESI + 0xc]                 ; 0041e0fb
        ;   Label: LAB_0041e0fb
    CMP EAX,EBX                         ; 0041e0fe
    JZ 0x0041e112                       ; 0041e100 | LAB_0041e112
        ;   XREF to: 0041e112 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBX]             ; 0041e102
    MOV dword ptr [EAX],EDX             ; 0041e104
    MOV EDX,dword ptr [EBX + 0x4]       ; 0041e106
    MOV dword ptr [EAX + 0x4],EDX       ; 0041e109
    MOV EDX,dword ptr [EBX + 0x8]       ; 0041e10c
    MOV dword ptr [EAX + 0x8],EDX       ; 0041e10f
    LEA EAX,[ESI + 0xc]                 ; 0041e112
        ;   Label: LAB_0041e112
    PUSH EAX                            ; 0041e115
    LEA EBP,[ESI + 0x18]                ; 0041e116
    PUSH EBP                            ; 0041e119
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 0041e11a | void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)
    FLD float ptr [ESI + 0xa8]          ; 0041e11f
    FMUL ST0                            ; 0041e125
    FLD float ptr [ESI + 0xa4]          ; 0041e127
    FMUL ST0                            ; 0041e12d
    FLD float ptr [ESI + 0xa4]          ; 0041e12f
    ADD ESP,0x8                         ; 0041e135
    FMUL float ptr [ESI + 0xa4]         ; 0041e138
    FLD float ptr [ESP + 0x3c]          ; 0041e13e
    FMUL double ptr [0x006164af]        ; 0041e142 | double g_BoxDensityScale
    FLD float ptr [ESI + 0xac]          ; 0041e148
    FMUL ST0                            ; 0041e14e
    FLD float ptr [ESI + 0xac]          ; 0041e150
    FMUL ST0                            ; 0041e156
    FLD float ptr [ESI + 0xa8]          ; 0041e158
    FMUL ST0                            ; 0041e15e
    FXCH ST2                            ; 0041e160
    FADDP ST6,ST0                       ; 0041e162
    FXCH ST2                            ; 0041e164
    FST float ptr [ESI + 0x94]          ; 0041e166
    FLD double ptr [0x006164b7]         ; 0041e16c | double g_BoxInertiaCoefficient
    FXCH                                ; 0041e172
    FMUL ST1                            ; 0041e174
    FXCH ST3                            ; 0041e176
    FADDP ST5,ST0                       ; 0041e178
    FXCH                                ; 0041e17a
    FADDP ST3,ST0                       ; 0041e17c
    FLD float ptr [ESI + 0x94]          ; 0041e17e
    FMUL ST1                            ; 0041e184
    FLD float ptr [ESI + 0x94]          ; 0041e186
    FMULP ST2                           ; 0041e18c
    FXCH ST2                            ; 0041e18e
    FMULP ST5                           ; 0041e190
    FXCH                                ; 0041e192
    FMULP ST3                           ; 0041e194
    FMULP                               ; 0041e196
    LEA EAX,[ESI + 0x64]                ; 0041e198
    FXCH ST2                            ; 0041e19b
    FSTP float ptr [ESI + 0x98]         ; 0041e19d
    FSTP float ptr [ESI + 0x9c]         ; 0041e1a3
    FSTP float ptr [ESI + 0xa0]         ; 0041e1a9
    MOV dword ptr [EAX + 0x8],0x0       ; 0041e1af
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041e1b6
    MOV dword ptr [EAX + 0x4],EDX       ; 0041e1b9
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041e1bc
    MOV dword ptr [EAX],EDX             ; 0041e1bf
    LEA EAX,[ESI + 0x88]                ; 0041e1c1
    MOV dword ptr [EAX + 0x8],0x0       ; 0041e1c7
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041e1ce
    MOV dword ptr [EAX + 0x4],EDX       ; 0041e1d1
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041e1d4
    MOV dword ptr [EAX],EDX             ; 0041e1d7
    LEA EAX,[ESI + 0x4c]                ; 0041e1d9
    MOV dword ptr [EAX + 0x8],0x0       ; 0041e1dc
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041e1e3
    MOV dword ptr [EAX + 0x4],EDX       ; 0041e1e6
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041e1e9
    MOV dword ptr [EAX],EDX             ; 0041e1ec
    LEA EAX,[ESI + 0x70]                ; 0041e1ee
    MOV dword ptr [EAX + 0x8],0x0       ; 0041e1f1
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041e1f8
    MOV dword ptr [EAX + 0x4],EDX       ; 0041e1fb
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041e1fe
    MOV dword ptr [EAX],EDX             ; 0041e201
    LEA EAX,[ESI + 0x58]                ; 0041e203
    MOV dword ptr [EAX + 0x8],0x0       ; 0041e206
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041e20d
    MOV dword ptr [EAX + 0x4],EDX       ; 0041e210
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041e213
    MOV dword ptr [EAX],EDX             ; 0041e216
    LEA EAX,[ESI + 0x7c]                ; 0041e218
    MOV dword ptr [EAX + 0x8],0x0       ; 0041e21b
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041e222
    MOV dword ptr [EAX + 0x4],EDX       ; 0041e225
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041e228
    MOV dword ptr [EAX],EDX             ; 0041e22b
    LEA EAX,[ESI + 0x40]                ; 0041e22d
    MOV dword ptr [EAX + 0x8],0x0       ; 0041e230
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041e237
    MOV dword ptr [EAX + 0x4],EDX       ; 0041e23a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041e23d
    MOV dword ptr [EAX],EDX             ; 0041e240
    MOV EDX,dword ptr [ESI + 0xb0]      ; 0041e242
    XOR EDI,EDI                         ; 0041e248
    TEST EDX,EDX                        ; 0041e24a
    JLE 0x0041e2a6                      ; 0041e24c | LAB_0041e2a6
        ;   XREF to: 0041e2a6 (CONDITIONAL_JUMP)
    LEA EAX,[ESI + 0xb4]                ; 0041e24e
    LEA EBX,[ESI + 0xc0]                ; 0041e254
    MOV dword ptr [ESP + 0x18],EAX      ; 0041e25a
    IMUL EAX,EDI,0x34                   ; 0041e25e
        ;   Label: LAB_0041e25e
    ADD EAX,dword ptr [ESP + 0x18]      ; 0041e261
    PUSH EAX                            ; 0041e265
    LEA EAX,[ESP + 0x4]                 ; 0041e266
    PUSH EAX                            ; 0041e26a
    PUSH EBP                            ; 0041e26b
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 0041e26c | CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
    FLD float ptr [ESI]                 ; 0041e271
    FADD float ptr [EAX]                ; 0041e273
    ADD ESP,0xc                         ; 0041e275
    FSTP float ptr [ESP + 0xc]          ; 0041e278
    FLD float ptr [ESI + 0x4]           ; 0041e27c
    FADD float ptr [EAX + 0x4]          ; 0041e27f
    FSTP float ptr [ESP + 0x10]         ; 0041e282
    FLD float ptr [ESI + 0x8]           ; 0041e286
    FADD float ptr [EAX + 0x8]          ; 0041e289
    LEA EAX,[ESP + 0xc]                 ; 0041e28c
    FSTP float ptr [ESP + 0x14]         ; 0041e290
    CMP EBX,EAX                         ; 0041e294
    JNZ 0x0041e2cd                      ; 0041e296 | LAB_0041e2cd
        ;   XREF to: 0041e2cd (CONDITIONAL_JUMP)
    INC EDI                             ; 0041e298
        ;   Label: LAB_0041e298
    MOV ECX,dword ptr [ESI + 0xb0]      ; 0041e299
    ADD EBX,0x34                        ; 0041e29f
    CMP EDI,ECX                         ; 0041e2a2
    JL 0x0041e25e                       ; 0041e2a4 | LAB_0041e25e
        ;   XREF to: 0041e25e (CONDITIONAL_JUMP)
    MOV dword ptr [ESI + 0x254],0x1     ; 0041e2a6
        ;   Label: LAB_0041e2a6
    ADD ESP,0x1c                        ; 0041e2b0
    POP EBP                             ; 0041e2b3
    POP EDI                             ; 0041e2b4
    POP ESI                             ; 0041e2b5
    POP EBX                             ; 0041e2b6
    RET                                 ; 0041e2b7
    MOV EDX,dword ptr [EAX]             ; 0041e2b8
        ;   Label: LAB_0041e2b8
    MOV dword ptr [ESI],EDX             ; 0041e2ba
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041e2bc
    MOV dword ptr [ESI + 0x4],EDX       ; 0041e2bf
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041e2c2
    MOV dword ptr [ESI + 0x8],EDX       ; 0041e2c5
    JMP 0x0041e0fb                      ; 0041e2c8 | LAB_0041e0fb
        ;   XREF to: 0041e0fb (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0xc]       ; 0041e2cd
        ;   Label: LAB_0041e2cd
    MOV dword ptr [EBX],EAX             ; 0041e2d1
    MOV EAX,dword ptr [ESP + 0x10]      ; 0041e2d3
    MOV dword ptr [EBX + 0x4],EAX       ; 0041e2d7
    MOV EAX,dword ptr [ESP + 0x14]      ; 0041e2da
    MOV dword ptr [EBX + 0x8],EAX       ; 0041e2de
    JMP 0x0041e298                      ; 0041e2e1 | LAB_0041e298
        ;   XREF to: 0041e298 (UNCONDITIONAL_JUMP)

