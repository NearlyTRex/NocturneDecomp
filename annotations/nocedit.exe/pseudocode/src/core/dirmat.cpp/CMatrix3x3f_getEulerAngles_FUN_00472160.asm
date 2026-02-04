; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3f * __cdecl core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160 (CMatrix3x3f *this_ptr,CVector3f *euler_angles)
;
; Parameters:
; CMatrix3x3f *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   euler_angles
; Local Variables:
; undefined8       Stack[-0x98]:8  local_98
; undefined8       Stack[-0x90]:8  local_90
; undefined8       Stack[-0x88]:8  local_88
; undefined8       Stack[-0x80]:8  local_80
; undefined8       Stack[-0x78]:8  local_78
; undefined8       Stack[-0x70]:8  local_70
; undefined8       Stack[-0x68]:8  local_68
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[13]:
;   core_box.cpp_CBox_processPhysics_FUN_0041e350 at 0041e8af
;   core_bugs.cpp_CBugs_FUN_004268e0 at 00426f84
;   core_cloth.cpp_FUN_0043b7e0 at 0043b806
;   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0 at 004736f1
;   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0 at 00475b03
;   core_dlight.cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210 at 0047524e
;   core_fire.cpp_FUN_004c1940 at 004c19bc
;   core_msnedit.cpp_CDemonMission_FUN_005390f0 at 00539457
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056b128
;   core_setedit.cpp_CDemonSet_FUN_00581aa0 at 00581bbc
;   ... and 3 more
;
; Referenced Globals:
;   double g_EulerGimbalLockThreshold = -1
;   double g_EulerSinCosThreshold = 0.707000000000000
;   double g_EulerSinCosThresholdNeg = -0.707000000000000
;   double g_EulerPi = 3.14159265359000
;   double g_EulerNegPi = -3.14159265359000
;   float g_EulerTwoPi = 6.283185
;   float g_EulerNegTwoPi = -6.283185
;
; Called Functions:
;   crt_math.c_acos_FUN_00600162
;   crt_math.c_asin_FUN_00600b94
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00472160
        ;   Label: core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
    PUSH EDI                            ; 00472161
    PUSH EBP                            ; 00472162
    MOV EBP,ESP                         ; 00472163
    SUB ESP,0x84                        ; 00472165
    AND ESP,0xfffffff8                  ; 0047216b
    MOV ECX,dword ptr [EBP + 0x10]      ; 0047216e
    MOV EDX,dword ptr [EBP + 0x14]      ; 00472171
    FLD float ptr [ECX + 0x14]          ; 00472174
    FCHS                                ; 00472177
    FST double ptr [ESP + 0x68]         ; 00472179
    FCOMP double ptr [0x0061ee1b]       ; 0047217d | g_EulerGimbalLockThreshold
    FNSTSW AX                           ; 00472183
    SAHF                                ; 00472185
    JBE 0x0047226e                      ; 00472186
        ;   XREF to: 0047226e (CONDITIONAL_JUMP)  ; LAB_0047226e
    FLD1                                ; 0047218c
    FCOMP double ptr [ESP + 0x68]       ; 0047218e
    FNSTSW AX                           ; 00472192
    SAHF                                ; 00472194
    JA 0x00472279                       ; 00472195
        ;   XREF to: 00472279 (CONDITIONAL_JUMP)  ; LAB_00472279
    MOV dword ptr [EDX],0x3fc90fdb      ; 0047219b
    MOV dword ptr [EDX + 0x8],0x0       ; 004721a1
        ;   Label: LAB_004721a1
    FLD float ptr [ECX + 0x18]          ; 004721a8
    FCHS                                ; 004721ab
    FSTP double ptr [ESP + 0x18]        ; 004721ad
    MOV EAX,dword ptr [ESP + 0x18]      ; 004721b1
    FLD float ptr [ECX]                 ; 004721b5
    MOV dword ptr [ESP + 0x28],EAX      ; 004721b7
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004721bb
    FSTP double ptr [ESP + 0x48]        ; 004721bf
    MOV dword ptr [ESP + 0x2c],EAX      ; 004721c3
    MOV EAX,dword ptr [ESP + 0x48]      ; 004721c7
    MOV dword ptr [ESP + 0x60],EAX      ; 004721cb
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004721cf
    FLD double ptr [ESP + 0x18]         ; 004721d3
    MOV dword ptr [ESP + 0x64],EAX      ; 004721d7
    FCOMP double ptr [0x0061ee23]       ; 004721db | g_EulerSinCosThreshold
    FNSTSW AX                           ; 004721e1
    SAHF                                ; 004721e3
    JNC 0x00472441                      ; 004721e4
        ;   XREF to: 00472441 (CONDITIONAL_JUMP)  ; LAB_00472441
    FLD double ptr [ESP + 0x18]         ; 004721ea
    FCOMP double ptr [0x0061ee2b]       ; 004721ee | g_EulerSinCosThresholdNeg
    FNSTSW AX                           ; 004721f4
    SAHF                                ; 004721f6
    JBE 0x00472441                      ; 004721f7
        ;   XREF to: 00472441 (CONDITIONAL_JUMP)  ; LAB_00472441
    FLD double ptr [ESP + 0x18]         ; 004721fd
    CALL crt_math.c_asin_FUN_00600b94   ; 00472201
        ;   XREF to: 00600b94 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_asin_FUN_00600b94(float10 sine_value)
    FLDZ                                ; 00472206
    FXCH                                ; 00472208
    FSTP float ptr [ESP + 0x70]         ; 0047220a
    FCOMP double ptr [ESP + 0x48]       ; 0047220e
    FNSTSW AX                           ; 00472212
    SAHF                                ; 00472214
    JBE 0x00472225                      ; 00472215
        ;   XREF to: 00472225 (CONDITIONAL_JUMP)  ; LAB_00472225
    FLD float ptr [ESP + 0x70]          ; 00472217
    FSUBR double ptr [0x0061ee33]       ; 0047221b | g_EulerPi
    FSTP float ptr [ESP + 0x70]         ; 00472221
    FLD float ptr [ESP + 0x70]          ; 00472225
        ;   Label: LAB_00472225
    FCOMP double ptr [0x0061ee3b]       ; 00472229 | g_EulerNegPi
    FNSTSW AX                           ; 0047222f
    SAHF                                ; 00472231
    JNC 0x00472242                      ; 00472232
        ;   XREF to: 00472242 (CONDITIONAL_JUMP)  ; LAB_00472242
    FLD float ptr [ESP + 0x70]          ; 00472234
    FADD float ptr [0x0061ee43]         ; 00472238 | g_EulerTwoPi
    FSTP float ptr [ESP + 0x70]         ; 0047223e
    FLD float ptr [ESP + 0x70]          ; 00472242
        ;   Label: LAB_00472242
    FCOMP double ptr [0x0061ee33]       ; 00472246 | g_EulerPi
    FNSTSW AX                           ; 0047224c
    SAHF                                ; 0047224e
    JBE 0x0047225f                      ; 0047224f
        ;   XREF to: 0047225f (CONDITIONAL_JUMP)  ; LAB_0047225f
    FLD float ptr [ESP + 0x70]          ; 00472251
    FADD float ptr [0x0061ee47]         ; 00472255 | g_EulerNegTwoPi
    FSTP float ptr [ESP + 0x70]         ; 0047225b
    MOV EAX,dword ptr [ESP + 0x70]      ; 0047225f
        ;   Label: LAB_0047225f
    MOV dword ptr [EDX + 0x4],EAX       ; 00472263
    MOV EAX,EDX                         ; 00472266
    MOV ESP,EBP                         ; 00472268
    POP EBP                             ; 0047226a
    POP EDI                             ; 0047226b
    POP EBX                             ; 0047226c
    RET                                 ; 0047226d
    MOV dword ptr [EDX],0xbfc90fdb      ; 0047226e
        ;   Label: LAB_0047226e
    JMP 0x004721a1                      ; 00472274
        ;   XREF to: 004721a1 (UNCONDITIONAL_JUMP)  ; LAB_004721a1
    FLD double ptr [ESP + 0x68]         ; 00472279
        ;   Label: LAB_00472279
    FLD ST0                             ; 0047227d
    CALL crt_math.c_asin_FUN_00600b94   ; 0047227f
        ;   XREF to: 00600b94 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_asin_FUN_00600b94(float10 sine_value)
    FLD ST1                             ; 00472284
    FMULP ST2                           ; 00472286
    FLD1                                ; 00472288
    FSUBRP ST2,ST0                      ; 0047228a
    FXCH                                ; 0047228c
    FSQRT                               ; 0047228e
    FLDZ                                ; 00472290
    FXCH ST2                            ; 00472292
    FSTP float ptr [EDX]                ; 00472294
    FSTP double ptr [ESP]               ; 00472296
    FCOMP double ptr [ESP]              ; 00472299
    FNSTSW AX                           ; 0047229c
    SAHF                                ; 0047229e
    JNC 0x004721a1                      ; 0047229f
        ;   XREF to: 004721a1 (CONDITIONAL_JUMP)  ; LAB_004721a1
    FLD float ptr [ECX + 0x20]          ; 004722a5
    FLD1                                ; 004722a8
    FDIV double ptr [ESP]               ; 004722aa
    FLD float ptr [ECX + 0x8]           ; 004722ad
    FMUL ST1                            ; 004722b0
    FXCH ST2                            ; 004722b2
    FMULP                               ; 004722b4
    FXCH                                ; 004722b6
    FSTP double ptr [ESP + 0x10]        ; 004722b8
    MOV EAX,dword ptr [ESP + 0x10]      ; 004722bc
    MOV dword ptr [ESP + 0x30],EAX      ; 004722c0
    MOV EAX,dword ptr [ESP + 0x14]      ; 004722c4
    FSTP double ptr [ESP + 0x38]        ; 004722c8
    MOV dword ptr [ESP + 0x34],EAX      ; 004722cc
    MOV EAX,dword ptr [ESP + 0x38]      ; 004722d0
    MOV dword ptr [ESP + 0x58],EAX      ; 004722d4
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004722d8
    FLD double ptr [ESP + 0x10]         ; 004722dc
    MOV dword ptr [ESP + 0x5c],EAX      ; 004722e0
    FCOMP double ptr [0x0061ee23]       ; 004722e4 | g_EulerSinCosThreshold
    FNSTSW AX                           ; 004722ea
    SAHF                                ; 004722ec
    JNC 0x00472493                      ; 004722ed
        ;   XREF to: 00472493 (CONDITIONAL_JUMP)  ; LAB_00472493
    FLD double ptr [ESP + 0x10]         ; 004722f3
    FCOMP double ptr [0x0061ee2b]       ; 004722f7 | g_EulerSinCosThresholdNeg
    FNSTSW AX                           ; 004722fd
    SAHF                                ; 004722ff
    JBE 0x00472493                      ; 00472300
        ;   XREF to: 00472493 (CONDITIONAL_JUMP)  ; LAB_00472493
    FLD double ptr [ESP + 0x10]         ; 00472306
    CALL crt_math.c_asin_FUN_00600b94   ; 0047230a
        ;   XREF to: 00600b94 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_asin_FUN_00600b94(float10 sine_value)
    FLDZ                                ; 0047230f
    FXCH                                ; 00472311
    FSTP float ptr [ESP + 0x78]         ; 00472313
    FCOMP double ptr [ESP + 0x38]       ; 00472317
    FNSTSW AX                           ; 0047231b
    SAHF                                ; 0047231d
    JBE 0x0047232e                      ; 0047231e
        ;   XREF to: 0047232e (CONDITIONAL_JUMP)  ; LAB_0047232e
    FLD float ptr [ESP + 0x78]          ; 00472320
    FSUBR double ptr [0x0061ee33]       ; 00472324 | g_EulerPi
    FSTP float ptr [ESP + 0x78]         ; 0047232a
    FLD float ptr [ESP + 0x78]          ; 0047232e
        ;   Label: LAB_0047232e
    FCOMP double ptr [0x0061ee3b]       ; 00472332 | g_EulerNegPi
    FNSTSW AX                           ; 00472338
    SAHF                                ; 0047233a
    JNC 0x0047234b                      ; 0047233b
        ;   XREF to: 0047234b (CONDITIONAL_JUMP)  ; LAB_0047234b
    FLD float ptr [ESP + 0x78]          ; 0047233d
    FADD float ptr [0x0061ee43]         ; 00472341 | g_EulerTwoPi
    FSTP float ptr [ESP + 0x78]         ; 00472347
    FLD float ptr [ESP + 0x78]          ; 0047234b
        ;   Label: LAB_0047234b
    FCOMP double ptr [0x0061ee33]       ; 0047234f | g_EulerPi
    FNSTSW AX                           ; 00472355
    SAHF                                ; 00472357
    JBE 0x00472368                      ; 00472358
        ;   XREF to: 00472368 (CONDITIONAL_JUMP)  ; LAB_00472368
    FLD float ptr [ESP + 0x78]          ; 0047235a
    FADD float ptr [0x0061ee47]         ; 0047235e | g_EulerNegTwoPi
    FSTP float ptr [ESP + 0x78]         ; 00472364
    MOV EAX,dword ptr [ESP + 0x78]      ; 00472368
        ;   Label: LAB_00472368
    MOV dword ptr [EDX + 0x4],EAX       ; 0047236c
    FLD float ptr [ECX + 0x10]          ; 0047236f
    FLD1                                ; 00472372
    FDIV double ptr [ESP]               ; 00472374
    FLD float ptr [ECX + 0xc]           ; 00472377
    FMUL ST1                            ; 0047237a
    FXCH ST2                            ; 0047237c
    FMULP                               ; 0047237e
    FXCH                                ; 00472380
    FSTP double ptr [ESP + 0x8]         ; 00472382
    MOV EAX,dword ptr [ESP + 0x8]       ; 00472386
    MOV dword ptr [ESP + 0x20],EAX      ; 0047238a
    MOV EAX,dword ptr [ESP + 0xc]       ; 0047238e
    FSTP double ptr [ESP + 0x40]        ; 00472392
    MOV dword ptr [ESP + 0x24],EAX      ; 00472396
    MOV EAX,dword ptr [ESP + 0x40]      ; 0047239a
    MOV dword ptr [ESP + 0x50],EAX      ; 0047239e
    MOV EAX,dword ptr [ESP + 0x44]      ; 004723a2
    FLD double ptr [ESP + 0x8]          ; 004723a6
    MOV dword ptr [ESP + 0x54],EAX      ; 004723aa
    FCOMP double ptr [0x0061ee23]       ; 004723ae | g_EulerSinCosThreshold
    FNSTSW AX                           ; 004723b4
    SAHF                                ; 004723b6
    JNC 0x004724e5                      ; 004723b7
        ;   XREF to: 004724e5 (CONDITIONAL_JUMP)  ; LAB_004724e5
    FLD double ptr [ESP + 0x8]          ; 004723bd
    FCOMP double ptr [0x0061ee2b]       ; 004723c1 | g_EulerSinCosThresholdNeg
    FNSTSW AX                           ; 004723c7
    SAHF                                ; 004723c9
    JBE 0x004724e5                      ; 004723ca
        ;   XREF to: 004724e5 (CONDITIONAL_JUMP)  ; LAB_004724e5
    FLD double ptr [ESP + 0x8]          ; 004723d0
    CALL crt_math.c_asin_FUN_00600b94   ; 004723d4
        ;   XREF to: 00600b94 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_asin_FUN_00600b94(float10 sine_value)
    FLDZ                                ; 004723d9
    FXCH                                ; 004723db
    FSTP float ptr [ESP + 0x74]         ; 004723dd
    FCOMP double ptr [ESP + 0x40]       ; 004723e1
    FNSTSW AX                           ; 004723e5
    SAHF                                ; 004723e7
    JBE 0x004723f8                      ; 004723e8
        ;   XREF to: 004723f8 (CONDITIONAL_JUMP)  ; LAB_004723f8
    FLD float ptr [ESP + 0x74]          ; 004723ea
    FSUBR double ptr [0x0061ee33]       ; 004723ee | g_EulerPi
    FSTP float ptr [ESP + 0x74]         ; 004723f4
    FLD float ptr [ESP + 0x74]          ; 004723f8
        ;   Label: LAB_004723f8
    FCOMP double ptr [0x0061ee3b]       ; 004723fc | g_EulerNegPi
    FNSTSW AX                           ; 00472402
    SAHF                                ; 00472404
    JNC 0x00472415                      ; 00472405
        ;   XREF to: 00472415 (CONDITIONAL_JUMP)  ; LAB_00472415
    FLD float ptr [ESP + 0x74]          ; 00472407
    FADD float ptr [0x0061ee43]         ; 0047240b | g_EulerTwoPi
    FSTP float ptr [ESP + 0x74]         ; 00472411
    FLD float ptr [ESP + 0x74]          ; 00472415
        ;   Label: LAB_00472415
    FCOMP double ptr [0x0061ee33]       ; 00472419 | g_EulerPi
    FNSTSW AX                           ; 0047241f
    SAHF                                ; 00472421
    JBE 0x00472432                      ; 00472422
        ;   XREF to: 00472432 (CONDITIONAL_JUMP)  ; LAB_00472432
    FLD float ptr [ESP + 0x74]          ; 00472424
    FADD float ptr [0x0061ee47]         ; 00472428 | g_EulerNegTwoPi
    FSTP float ptr [ESP + 0x74]         ; 0047242e
    MOV EAX,dword ptr [ESP + 0x74]      ; 00472432
        ;   Label: LAB_00472432
    MOV dword ptr [EDX + 0x8],EAX       ; 00472436
    MOV EAX,EDX                         ; 00472439
    MOV ESP,EBP                         ; 0047243b
    POP EBP                             ; 0047243d
    POP EDI                             ; 0047243e
    POP EBX                             ; 0047243f
    RET                                 ; 00472440
    FLD double ptr [ESP + 0x60]         ; 00472441
        ;   Label: LAB_00472441
    FCOMP double ptr [0x0061ee1b]       ; 00472445 | g_EulerGimbalLockThreshold
    FNSTSW AX                           ; 0047244b
    SAHF                                ; 0047244d
    JA 0x00472471                       ; 0047244e
        ;   XREF to: 00472471 (CONDITIONAL_JUMP)  ; LAB_00472471
    MOV dword ptr [ESP + 0x70],0x40490fdb ; 00472450
    FLDZ                                ; 00472458
        ;   Label: LAB_00472458
    FCOMP double ptr [ESP + 0x28]       ; 0047245a
    FNSTSW AX                           ; 0047245e
    SAHF                                ; 00472460
    JBE 0x00472225                      ; 00472461
        ;   XREF to: 00472225 (CONDITIONAL_JUMP)  ; LAB_00472225
    XOR byte ptr [ESP + 0x73],0x80      ; 00472467
    JMP 0x00472225                      ; 0047246c
        ;   XREF to: 00472225 (UNCONDITIONAL_JUMP)  ; LAB_00472225
    FLD1                                ; 00472471
        ;   Label: LAB_00472471
    FCOMP double ptr [ESP + 0x60]       ; 00472473
    FNSTSW AX                           ; 00472477
    SAHF                                ; 00472479
    JA 0x00472484                       ; 0047247a
        ;   XREF to: 00472484 (CONDITIONAL_JUMP)  ; LAB_00472484
    XOR ECX,ECX                         ; 0047247c
    MOV dword ptr [ESP + 0x70],ECX      ; 0047247e
    JMP 0x00472458                      ; 00472482
        ;   XREF to: 00472458 (UNCONDITIONAL_JUMP)  ; LAB_00472458
    FLD double ptr [ESP + 0x60]         ; 00472484
        ;   Label: LAB_00472484
    CALL crt_math.c_acos_FUN_00600162   ; 00472488
        ;   XREF to: 00600162 (UNCONDITIONAL_CALL)  ; double crt_math.c_acos_FUN_00600162(double x)
    FSTP float ptr [ESP + 0x70]         ; 0047248d
    JMP 0x00472458                      ; 00472491
        ;   XREF to: 00472458 (UNCONDITIONAL_JUMP)  ; LAB_00472458
    FLD double ptr [ESP + 0x58]         ; 00472493
        ;   Label: LAB_00472493
    FCOMP double ptr [0x0061ee1b]       ; 00472497 | g_EulerGimbalLockThreshold
    FNSTSW AX                           ; 0047249d
    SAHF                                ; 0047249f
    JA 0x004724c3                       ; 004724a0
        ;   XREF to: 004724c3 (CONDITIONAL_JUMP)  ; LAB_004724c3
    MOV dword ptr [ESP + 0x78],0x40490fdb ; 004724a2
    FLDZ                                ; 004724aa
        ;   Label: LAB_004724aa
    FCOMP double ptr [ESP + 0x30]       ; 004724ac
    FNSTSW AX                           ; 004724b0
    SAHF                                ; 004724b2
    JBE 0x0047232e                      ; 004724b3
        ;   XREF to: 0047232e (CONDITIONAL_JUMP)  ; LAB_0047232e
    XOR byte ptr [ESP + 0x7b],0x80      ; 004724b9
    JMP 0x0047232e                      ; 004724be
        ;   XREF to: 0047232e (UNCONDITIONAL_JUMP)  ; LAB_0047232e
    FLD1                                ; 004724c3
        ;   Label: LAB_004724c3
    FCOMP double ptr [ESP + 0x58]       ; 004724c5
    FNSTSW AX                           ; 004724c9
    SAHF                                ; 004724cb
    JA 0x004724d6                       ; 004724cc
        ;   XREF to: 004724d6 (CONDITIONAL_JUMP)  ; LAB_004724d6
    XOR EBX,EBX                         ; 004724ce
    MOV dword ptr [ESP + 0x78],EBX      ; 004724d0
    JMP 0x004724aa                      ; 004724d4
        ;   XREF to: 004724aa (UNCONDITIONAL_JUMP)  ; LAB_004724aa
    FLD double ptr [ESP + 0x58]         ; 004724d6
        ;   Label: LAB_004724d6
    CALL crt_math.c_acos_FUN_00600162   ; 004724da
        ;   XREF to: 00600162 (UNCONDITIONAL_CALL)  ; double crt_math.c_acos_FUN_00600162(double x)
    FSTP float ptr [ESP + 0x78]         ; 004724df
    JMP 0x004724aa                      ; 004724e3
        ;   XREF to: 004724aa (UNCONDITIONAL_JUMP)  ; LAB_004724aa
    FLD double ptr [ESP + 0x50]         ; 004724e5
        ;   Label: LAB_004724e5
    FCOMP double ptr [0x0061ee1b]       ; 004724e9 | g_EulerGimbalLockThreshold
    FNSTSW AX                           ; 004724ef
    SAHF                                ; 004724f1
    JA 0x00472515                       ; 004724f2
        ;   XREF to: 00472515 (CONDITIONAL_JUMP)  ; LAB_00472515
    MOV dword ptr [ESP + 0x74],0x40490fdb ; 004724f4
    FLDZ                                ; 004724fc
        ;   Label: LAB_004724fc
    FCOMP double ptr [ESP + 0x20]       ; 004724fe
    FNSTSW AX                           ; 00472502
    SAHF                                ; 00472504
    JBE 0x004723f8                      ; 00472505
        ;   XREF to: 004723f8 (CONDITIONAL_JUMP)  ; LAB_004723f8
    XOR byte ptr [ESP + 0x77],0x80      ; 0047250b
    JMP 0x004723f8                      ; 00472510
        ;   XREF to: 004723f8 (UNCONDITIONAL_JUMP)  ; LAB_004723f8
    FLD1                                ; 00472515
        ;   Label: LAB_00472515
    FCOMP double ptr [ESP + 0x50]       ; 00472517
    FNSTSW AX                           ; 0047251b
    SAHF                                ; 0047251d
    JA 0x00472528                       ; 0047251e
        ;   XREF to: 00472528 (CONDITIONAL_JUMP)  ; LAB_00472528
    XOR EDI,EDI                         ; 00472520
    MOV dword ptr [ESP + 0x74],EDI      ; 00472522
    JMP 0x004724fc                      ; 00472526
        ;   XREF to: 004724fc (UNCONDITIONAL_JUMP)  ; LAB_004724fc
    FLD double ptr [ESP + 0x50]         ; 00472528
        ;   Label: LAB_00472528
    CALL crt_math.c_acos_FUN_00600162   ; 0047252c
        ;   XREF to: 00600162 (UNCONDITIONAL_CALL)  ; double crt_math.c_acos_FUN_00600162(double x)
    FSTP float ptr [ESP + 0x74]         ; 00472531
    JMP 0x004724fc                      ; 00472535
        ;   XREF to: 004724fc (UNCONDITIONAL_JUMP)  ; LAB_004724fc

