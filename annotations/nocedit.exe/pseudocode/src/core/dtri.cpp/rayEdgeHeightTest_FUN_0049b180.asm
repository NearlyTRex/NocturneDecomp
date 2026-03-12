; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dtri_cpp_rayEdgeHeightTest_FUN_0049b180(CVector3f *vertex1,CVector3f *vertex2,float ray_radius,float *out_height)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   vertex1
; CVector3f *      Stack[0x8]:4   vertex2
; float            Stack[0xc]:4   ray_radius
; float *          Stack[0x10]:4   out_height
;
; XREF[1]:
;   core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0 at 0049b4a1
;
; Referenced Globals:
;   double g_QuadraticDouble = 2
;   double g_QuadraticQuarter = 4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049b180
        ;   Label: core_dtri.cpp_rayEdgeHeightTest_FUN_0049b180
    PUSH ESI                            ; 0049b181
    PUSH EBP                            ; 0049b182
    MOV EBP,ESP                         ; 0049b183
    SUB ESP,0x50                        ; 0049b185
    AND ESP,0xfffffff8                  ; 0049b188
    MOV EDX,dword ptr [EBP + 0x10]      ; 0049b18b
    MOV ESI,dword ptr [EBP + 0x14]      ; 0049b18e
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0049b191
    FLD float ptr [ESI + 0x8]           ; 0049b194
    FLD float ptr [ESI]                 ; 0049b197
    FSUB float ptr [EDX]                ; 0049b199
    FXCH                                ; 0049b19b
    FSUB float ptr [EDX + 0x8]          ; 0049b19d
    FXCH                                ; 0049b1a0
    FST double ptr [ESP + 0x30]         ; 0049b1a2
    FMUL double ptr [ESP + 0x30]        ; 0049b1a6
    FXCH                                ; 0049b1aa
    FST double ptr [ESP + 0x18]         ; 0049b1ac
    FMUL double ptr [ESP + 0x18]        ; 0049b1b0
    FADDP                               ; 0049b1b4
    FLDZ                                ; 0049b1b6
    FXCH                                ; 0049b1b8
    FSTP double ptr [ESP + 0x40]        ; 0049b1ba
    FCOMP double ptr [ESP + 0x40]       ; 0049b1be
    FNSTSW AX                           ; 0049b1c2
    SAHF                                ; 0049b1c4
    JNC 0x0049b2e5                      ; 0049b1c5
        ;   XREF to: 0049b2e5 (CONDITIONAL_JUMP)  ; LAB_0049b2e5
    FLD float ptr [EDX + 0x8]           ; 0049b1cb
    FMUL double ptr [ESP + 0x18]        ; 0049b1ce
    FLD float ptr [EDX + 0x8]           ; 0049b1d2
    FMUL ST0                            ; 0049b1d5
    FLD double ptr [ESP + 0x40]         ; 0049b1d7
    FMUL double ptr [0x00622e12]        ; 0049b1db | g_QuadraticQuarter
    FLD float ptr [EDX]                 ; 0049b1e1
    FMUL ST0                            ; 0049b1e3
    FLD float ptr [EDX]                 ; 0049b1e5
    FMUL double ptr [ESP + 0x30]        ; 0049b1e7
    FXCH                                ; 0049b1eb
    FADDP ST3,ST0                       ; 0049b1ed
    FADDP ST3,ST0                       ; 0049b1ef
    FLD float ptr [EBP + 0x18]          ; 0049b1f1
    FMUL ST0                            ; 0049b1f4
    FXCH ST3                            ; 0049b1f6
    FMUL double ptr [0x00622e0a]        ; 0049b1f8 | g_QuadraticDouble
    FXCH ST3                            ; 0049b1fe
    FSUBP ST2,ST0                       ; 0049b200
    FMULP                               ; 0049b202
    FXCH                                ; 0049b204
    FST double ptr [ESP + 0x38]         ; 0049b206
    FMUL double ptr [ESP + 0x38]        ; 0049b20a
    FSUBRP                              ; 0049b20e
    FLDZ                                ; 0049b210
    FXCH                                ; 0049b212
    FSTP double ptr [ESP + 0x8]         ; 0049b214
    FCOMP double ptr [ESP + 0x8]        ; 0049b218
    FNSTSW AX                           ; 0049b21c
    SAHF                                ; 0049b21e
    JA 0x0049b2e5                       ; 0049b21f
        ;   XREF to: 0049b2e5 (CONDITIONAL_JUMP)  ; LAB_0049b2e5
    FLD double ptr [ESP + 0x38]         ; 0049b225
    FCHS                                ; 0049b229
    FLD double ptr [ESP + 0x8]          ; 0049b22b
    FSQRT                               ; 0049b22f
    FSUBP                               ; 0049b231
    FLD double ptr [ESP + 0x40]         ; 0049b233
    FMUL double ptr [0x00622e0a]        ; 0049b237 | g_QuadraticDouble
    FDIVP                               ; 0049b23d
    FLDZ                                ; 0049b23f
    XOR ECX,ECX                         ; 0049b241
    FXCH                                ; 0049b243
    FSTP double ptr [ESP + 0x10]        ; 0049b245
    FCOMP double ptr [ESP + 0x10]       ; 0049b249
    FNSTSW AX                           ; 0049b24d
    SAHF                                ; 0049b24f
    JA 0x0049b286                       ; 0049b250
        ;   XREF to: 0049b286 (CONDITIONAL_JUMP)  ; LAB_0049b286
    FLD1                                ; 0049b252
    FCOMP double ptr [ESP + 0x10]       ; 0049b254
    FNSTSW AX                           ; 0049b258
    SAHF                                ; 0049b25a
    JC 0x0049b286                       ; 0049b25b
        ;   XREF to: 0049b286 (CONDITIONAL_JUMP)  ; LAB_0049b286
    FLD float ptr [ESI + 0x4]           ; 0049b25d
    FSUB float ptr [EDX + 0x4]          ; 0049b260
    FMUL double ptr [ESP + 0x10]        ; 0049b263
    FADD float ptr [EDX + 0x4]          ; 0049b267
    FLD float ptr [EBX]                 ; 0049b26a
    FXCH                                ; 0049b26c
    FSTP double ptr [ESP + 0x20]        ; 0049b26e
    FCOMP double ptr [ESP + 0x20]       ; 0049b272
    FNSTSW AX                           ; 0049b276
    SAHF                                ; 0049b278
    JNC 0x0049b286                      ; 0049b279
        ;   XREF to: 0049b286 (CONDITIONAL_JUMP)  ; LAB_0049b286
    FLD double ptr [ESP + 0x20]         ; 0049b27b
    MOV ECX,0x1                         ; 0049b27f
    FSTP float ptr [EBX]                ; 0049b284
    FLD double ptr [ESP + 0x8]          ; 0049b286
        ;   Label: LAB_0049b286
    FSQRT                               ; 0049b28a
    FSUB double ptr [ESP + 0x38]        ; 0049b28c
    FLD double ptr [ESP + 0x40]         ; 0049b290
    FMUL double ptr [0x00622e0a]        ; 0049b294 | g_QuadraticDouble
    FDIVP                               ; 0049b29a
    FLDZ                                ; 0049b29c
    FXCH                                ; 0049b29e
    FSTP double ptr [ESP]               ; 0049b2a0
    FCOMP double ptr [ESP]              ; 0049b2a3
    FNSTSW AX                           ; 0049b2a6
    SAHF                                ; 0049b2a8
    JA 0x0049b2dd                       ; 0049b2a9
        ;   XREF to: 0049b2dd (CONDITIONAL_JUMP)  ; LAB_0049b2dd
    FLD1                                ; 0049b2ab
    FCOMP double ptr [ESP]              ; 0049b2ad
    FNSTSW AX                           ; 0049b2b0
    SAHF                                ; 0049b2b2
    JC 0x0049b2dd                       ; 0049b2b3
        ;   XREF to: 0049b2dd (CONDITIONAL_JUMP)  ; LAB_0049b2dd
    FLD float ptr [ESI + 0x4]           ; 0049b2b5
    FSUB float ptr [EDX + 0x4]          ; 0049b2b8
    FMUL double ptr [ESP]               ; 0049b2bb
    FADD float ptr [EDX + 0x4]          ; 0049b2be
    FLD float ptr [EBX]                 ; 0049b2c1
    FXCH                                ; 0049b2c3
    FSTP double ptr [ESP + 0x28]        ; 0049b2c5
    FCOMP double ptr [ESP + 0x28]       ; 0049b2c9
    FNSTSW AX                           ; 0049b2cd
    SAHF                                ; 0049b2cf
    JNC 0x0049b2dd                      ; 0049b2d0
        ;   XREF to: 0049b2dd (CONDITIONAL_JUMP)  ; LAB_0049b2dd
    FLD double ptr [ESP + 0x28]         ; 0049b2d2
    MOV ECX,0x1                         ; 0049b2d6
    FSTP float ptr [EBX]                ; 0049b2db
    MOV EAX,ECX                         ; 0049b2dd
        ;   Label: LAB_0049b2dd
    MOV ESP,EBP                         ; 0049b2df
    POP EBP                             ; 0049b2e1
    POP ESI                             ; 0049b2e2
    POP EBX                             ; 0049b2e3
    RET                                 ; 0049b2e4
    XOR EAX,EAX                         ; 0049b2e5
        ;   Label: LAB_0049b2e5
    MOV ESP,EBP                         ; 0049b2e7
    POP EBP                             ; 0049b2e9
    POP ESI                             ; 0049b2ea
    POP EBX                             ; 0049b2eb
    RET                                 ; 0049b2ec

