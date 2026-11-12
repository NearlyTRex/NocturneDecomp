; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_00476070(CDemonRaytrace *this_ptr,float fov_or_radius,int render_mode)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   fov_or_radius
; int              Stack[0xc]:4   render_mode
; Local Variables:
; undefined8       Stack[-0x1b0]:8  local_1b0
; undefined8       Stack[-0x1a8]:8  local_1a8
; undefined8       Stack[-0x1a0]:8  local_1a0
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x194]:4  local_194
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined4       Stack[-0x188]:4  local_188
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x180]:4  local_180
; undefined4       Stack[-0x17c]:4  local_17c
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x174]:4  local_174
; undefined4       Stack[-0x170]:4  local_170
; undefined4       Stack[-0x16c]:4  local_16c
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined        Stack[-0x15c]:1  local_15c
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00533b80 at 00533bf5
;
; Referenced Globals:
;   undefined4 DAT_005bca79
;   undefined4 DAT_005bca81
;   undefined4 DAT_005bca89
;   undefined4 DAT_005f2af8
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c0b7a4
;   undefined4 DAT_01c0b7a8
;   undefined4 DAT_01c0b7ac
;   undefined4 DAT_01c0b7b0
;   undefined4 DAT_01c0b7b4
;   undefined4 DAT_01c0b7b8
;   undefined4 DAT_01d72644
;   undefined4 DAT_01d72648
;   undefined4 DAT_01d7264c
;   undefined4 DAT_01d72650
;   ... and 6 more
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720
;   core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_004772f0
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046ce60
;   engine_drender.cpp_CDemonRenderer_getCameraOriginFixed_FUN_0046d1a0
;   engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0046d3d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476070
        ;   Label: core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00476070
    PUSH ESI                            ; 00476071
    PUSH EDI                            ; 00476072
    PUSH EBP                            ; 00476073
    MOV EBP,ESP                         ; 00476074
    SUB ESP,0x19c                       ; 00476076
    AND ESP,0xfffffff8                  ; 0047607c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0047607f
    CMP dword ptr [0x01c0b7b8],0x0      ; 00476082 | DAT_01c0b7b8
    JZ 0x00476095                       ; 00476089
        ;   XREF to: 00476095 (CONDITIONAL_JUMP)  ; LAB_00476095
    CMP dword ptr [EBP + 0x1c],0x0      ; 0047608b
    JNZ 0x004769a1                      ; 0047608f
        ;   XREF to: 004769a1 (CONDITIONAL_JUMP)  ; LAB_004769a1
    XOR ESI,ESI                         ; 00476095
        ;   Label: LAB_00476095
    MOV dword ptr [0x01c0b7a4],ESI      ; 00476097 | DAT_01c0b7a4
    MOV dword ptr [0x01c0b7a8],ESI      ; 0047609d | DAT_01c0b7a8
    MOV dword ptr [0x01c0b7ac],ESI      ; 004760a3 | DAT_01c0b7ac
    MOV dword ptr [0x01c0b7b0],ESI      ; 004760a9 | DAT_01c0b7b0
    MOV dword ptr [0x01c0b7b4],ESI      ; 004760af | DAT_01c0b7b4
    MOV ESI,dword ptr [0x005f2af8]      ; 004760b5 | DAT_005f2af8
    PUSH ESI                            ; 004760bb | DAT_01bdd7e4
    LEA ESI,[ESP + 0x58]                ; 004760bc
    LEA EDI,[ESP + 0x7c]                ; 004760c0
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginFixed_FUN_0046d1a0 ; 004760c4
        ;   XREF to: 0046d1a0 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraOriginFixed_FUN_0046d1a0(CDemonRenderer * this_ptr, CVector3i * output)
    LEA ESI,[ESP + 0x58]                ; 004760c9
    ADD ESP,0x4                         ; 004760cd
    MOVSD ES:EDI,ESI                    ; 004760d0
    MOVSD ES:EDI,ESI                    ; 004760d1
    MOVSD ES:EDI,ESI                    ; 004760d2
    MOV EAX,dword ptr [ESP + 0x78]      ; 004760d3
    MOV dword ptr [ESP + 0x190],EAX     ; 004760d7
    FLD double ptr [0x005bca79]         ; 004760de | DAT_005bca79
    FILD dword ptr [ESP + 0x190]        ; 004760e4
    FMUL ST1                            ; 004760eb
    FST float ptr [ESP + 0x60]          ; 004760ed
    FSUB float ptr [EBX + 0x10]         ; 004760f1
    FDIV float ptr [EBX + 0x28]         ; 004760f4
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004760f7
    MOV dword ptr [ESP + 0x190],EAX     ; 004760fb
    FILD dword ptr [ESP + 0x190]        ; 00476102
    FMUL ST2                            ; 00476109
    FST float ptr [ESP + 0x64]          ; 0047610b
    FXCH                                ; 0047610f
    CALL crt_math.c_round_FUN_005a3120  ; 00476111
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x78]        ; 00476116
    FSUB float ptr [EBX + 0x14]         ; 0047611a
    FDIV float ptr [EBX + 0x2c]         ; 0047611d
    MOV EAX,dword ptr [ESP + 0x80]      ; 00476120
    MOV dword ptr [ESP + 0x190],EAX     ; 00476127
    FILD dword ptr [ESP + 0x190]        ; 0047612e
    FMULP ST2                           ; 00476135
    FXCH                                ; 00476137
    FST float ptr [ESP + 0x68]          ; 00476139
    FXCH                                ; 0047613d
    CALL crt_math.c_round_FUN_005a3120  ; 0047613f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x7c]        ; 00476144
    FSUB float ptr [EBX + 0x18]         ; 00476148
    FDIV float ptr [EBX + 0x30]         ; 0047614b
    FLD float ptr [EBP + 0x18]          ; 0047614e
    FMUL float ptr [0x005bca81]         ; 00476151 | DAT_005bca81
    CALL crt_math.c_round_FUN_005a3120  ; 00476157
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x6c]        ; 0047615c
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00476160
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00476164
    MOV dword ptr [ESP + 0x70],EAX      ; 00476168
    MOV dword ptr [ESP + 0x74],EAX      ; 0047616c
    MOV EAX,[0x01d72644]                ; 00476170 | DAT_01d72644
    CALL crt_math.c_round_FUN_005a3120  ; 00476175
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x80]        ; 0047617a
    IMUL EDX                            ; 00476181
    SHRD EAX,EDX,0x10                   ; 00476183
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00476187
    MOV ECX,EAX                         ; 0047618b
    MOV EAX,[0x01d72650]                ; 0047618d | DAT_01d72650
    IMUL EDX                            ; 00476192
    SHRD EAX,EDX,0x10                   ; 00476194
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00476198
    ADD ECX,EAX                         ; 0047619c
    MOV EAX,[0x01d7265c]                ; 0047619e | DAT_01d7265c
    IMUL EDX                            ; 004761a3
    SHRD EAX,EDX,0x10                   ; 004761a5
    MOV EDX,dword ptr [ESP + 0x6c]      ; 004761a9
    ADD ECX,EAX                         ; 004761ad
    MOV EAX,[0x01d72648]                ; 004761af | DAT_01d72648
    MOV dword ptr [ESP + 0x18],ECX      ; 004761b4
    IMUL EDX                            ; 004761b8
    SHRD EAX,EDX,0x10                   ; 004761ba
    MOV EDX,dword ptr [ESP + 0x6c]      ; 004761be
    MOV ECX,EAX                         ; 004761c2
    MOV EAX,[0x01d72654]                ; 004761c4 | DAT_01d72654
    IMUL EDX                            ; 004761c9
    SHRD EAX,EDX,0x10                   ; 004761cb
    MOV EDX,dword ptr [ESP + 0x6c]      ; 004761cf
    ADD ECX,EAX                         ; 004761d3
    MOV EAX,[0x01d72660]                ; 004761d5 | DAT_01d72660
    IMUL EDX                            ; 004761da
    SHRD EAX,EDX,0x10                   ; 004761dc
    MOV EDX,dword ptr [ESP + 0x6c]      ; 004761e0
    ADD ECX,EAX                         ; 004761e4
    MOV EAX,[0x01d7264c]                ; 004761e6 | DAT_01d7264c
    MOV dword ptr [ESP + 0x1c],ECX      ; 004761eb
    IMUL EDX                            ; 004761ef
    SHRD EAX,EDX,0x10                   ; 004761f1
    MOV EDX,dword ptr [ESP + 0x6c]      ; 004761f5
    MOV ECX,EAX                         ; 004761f9
    MOV EAX,[0x01d72658]                ; 004761fb | DAT_01d72658
    IMUL EDX                            ; 00476200
    SHRD EAX,EDX,0x10                   ; 00476202
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00476206
    ADD ECX,EAX                         ; 0047620a
    MOV EAX,[0x01d72664]                ; 0047620c | DAT_01d72664
    IMUL EDX                            ; 00476211
    SHRD EAX,EDX,0x10                   ; 00476213
    ADD ECX,EAX                         ; 00476217
    MOV dword ptr [ESP + 0x20],ECX      ; 00476219
    MOV EDI,dword ptr [ESP + 0x6c]      ; 0047621d
    NEG EDI                             ; 00476221
    MOV EAX,[0x01d72644]                ; 00476223 | DAT_01d72644
    MOV EDX,EDI                         ; 00476228
    IMUL EDX                            ; 0047622a
    SHRD EAX,EDX,0x10                   ; 0047622c
    MOV EDX,dword ptr [ESP + 0x70]      ; 00476230
    MOV ECX,EAX                         ; 00476234
    MOV EAX,[0x01d72650]                ; 00476236 | DAT_01d72650
    IMUL EDX                            ; 0047623b
    SHRD EAX,EDX,0x10                   ; 0047623d
    MOV EDX,dword ptr [ESP + 0x74]      ; 00476241
    ADD ECX,EAX                         ; 00476245
    MOV EAX,[0x01d7265c]                ; 00476247 | DAT_01d7265c
    IMUL EDX                            ; 0047624c
    SHRD EAX,EDX,0x10                   ; 0047624e
    MOV EDX,EDI                         ; 00476252
    ADD ECX,EAX                         ; 00476254
    MOV EAX,[0x01d72648]                ; 00476256 | DAT_01d72648
    MOV dword ptr [ESP + 0x24],ECX      ; 0047625b
    IMUL EDX                            ; 0047625f
    SHRD EAX,EDX,0x10                   ; 00476261
    MOV EDX,dword ptr [ESP + 0x70]      ; 00476265
    MOV ECX,EAX                         ; 00476269
    MOV EAX,[0x01d72654]                ; 0047626b | DAT_01d72654
    IMUL EDX                            ; 00476270
    SHRD EAX,EDX,0x10                   ; 00476272
    MOV EDX,dword ptr [ESP + 0x74]      ; 00476276
    ADD ECX,EAX                         ; 0047627a
    MOV EAX,[0x01d72660]                ; 0047627c | DAT_01d72660
    IMUL EDX                            ; 00476281
    SHRD EAX,EDX,0x10                   ; 00476283
    MOV EDX,EDI                         ; 00476287
    ADD ECX,EAX                         ; 00476289
    MOV EAX,[0x01d7264c]                ; 0047628b | DAT_01d7264c
    MOV dword ptr [ESP + 0x28],ECX      ; 00476290
    IMUL EDX                            ; 00476294
    SHRD EAX,EDX,0x10                   ; 00476296
    MOV EDX,dword ptr [ESP + 0x70]      ; 0047629a
    MOV ECX,EAX                         ; 0047629e
    MOV EAX,[0x01d72658]                ; 004762a0 | DAT_01d72658
    IMUL EDX                            ; 004762a5
    SHRD EAX,EDX,0x10                   ; 004762a7
    MOV EDX,dword ptr [ESP + 0x74]      ; 004762ab
    ADD ECX,EAX                         ; 004762af
    MOV EAX,[0x01d72664]                ; 004762b1 | DAT_01d72664
    IMUL EDX                            ; 004762b6
    SHRD EAX,EDX,0x10                   ; 004762b8
    ADD ECX,EAX                         ; 004762bc
    MOV EAX,dword ptr [ESP + 0x70]      ; 004762be
    NEG EAX                             ; 004762c2
    MOV EDX,EDI                         ; 004762c4
    MOV dword ptr [ESP + 0x70],EAX      ; 004762c6
    MOV EAX,[0x01d72644]                ; 004762ca | DAT_01d72644
    MOV dword ptr [ESP + 0x2c],ECX      ; 004762cf
    IMUL EDX                            ; 004762d3
    SHRD EAX,EDX,0x10                   ; 004762d5
    MOV EDX,dword ptr [ESP + 0x70]      ; 004762d9
    MOV ECX,EAX                         ; 004762dd
    MOV EAX,[0x01d72650]                ; 004762df | DAT_01d72650
    IMUL EDX                            ; 004762e4
    SHRD EAX,EDX,0x10                   ; 004762e6
    MOV EDX,dword ptr [ESP + 0x74]      ; 004762ea
    ADD ECX,EAX                         ; 004762ee
    MOV EAX,[0x01d7265c]                ; 004762f0 | DAT_01d7265c
    IMUL EDX                            ; 004762f5
    SHRD EAX,EDX,0x10                   ; 004762f7
    ADD ECX,EAX                         ; 004762fb
    MOV dword ptr [ESP + 0x6c],EDI      ; 004762fd
    MOV dword ptr [ESP + 0x30],ECX      ; 00476301
    MOV EAX,[0x01d72648]                ; 00476305 | DAT_01d72648
    MOV EDX,EDI                         ; 0047630a
    IMUL EDX                            ; 0047630c
    SHRD EAX,EDX,0x10                   ; 0047630e
    MOV EDX,dword ptr [ESP + 0x70]      ; 00476312
    MOV ECX,EAX                         ; 00476316
    MOV EAX,[0x01d72654]                ; 00476318 | DAT_01d72654
    IMUL EDX                            ; 0047631d
    SHRD EAX,EDX,0x10                   ; 0047631f
    MOV EDX,dword ptr [ESP + 0x74]      ; 00476323
    ADD ECX,EAX                         ; 00476327
    MOV EAX,[0x01d72660]                ; 00476329 | DAT_01d72660
    IMUL EDX                            ; 0047632e
    SHRD EAX,EDX,0x10                   ; 00476330
    MOV EDX,EDI                         ; 00476334
    ADD ECX,EAX                         ; 00476336
    MOV EAX,[0x01d7264c]                ; 00476338 | DAT_01d7264c
    MOV dword ptr [ESP + 0x34],ECX      ; 0047633d
    IMUL EDX                            ; 00476341
    SHRD EAX,EDX,0x10                   ; 00476343
    MOV EDX,dword ptr [ESP + 0x70]      ; 00476347
    MOV ECX,EAX                         ; 0047634b
    MOV EAX,[0x01d72658]                ; 0047634d | DAT_01d72658
    IMUL EDX                            ; 00476352
    SHRD EAX,EDX,0x10                   ; 00476354
    MOV EDX,dword ptr [ESP + 0x74]      ; 00476358
    ADD ECX,EAX                         ; 0047635c
    MOV EAX,[0x01d72664]                ; 0047635e | DAT_01d72664
    IMUL EDX                            ; 00476363
    SHRD EAX,EDX,0x10                   ; 00476365
    MOV EDX,EDI                         ; 00476369
    ADD ECX,EAX                         ; 0047636b
    MOV EAX,[0x01d72644]                ; 0047636d | DAT_01d72644
    NEG EDX                             ; 00476372
    MOV dword ptr [ESP + 0x38],ECX      ; 00476374
    MOV dword ptr [ESP + 0x6c],EDX      ; 00476378
    IMUL EDX                            ; 0047637c
    SHRD EAX,EDX,0x10                   ; 0047637e
    MOV EDX,dword ptr [ESP + 0x70]      ; 00476382
    MOV ECX,EAX                         ; 00476386
    MOV EAX,[0x01d72650]                ; 00476388 | DAT_01d72650
    IMUL EDX                            ; 0047638d
    SHRD EAX,EDX,0x10                   ; 0047638f
    MOV EDX,dword ptr [ESP + 0x74]      ; 00476393
    ADD ECX,EAX                         ; 00476397
    MOV EAX,[0x01d7265c]                ; 00476399 | DAT_01d7265c
    IMUL EDX                            ; 0047639e
    SHRD EAX,EDX,0x10                   ; 004763a0
    MOV EDX,dword ptr [ESP + 0x6c]      ; 004763a4
    ADD ECX,EAX                         ; 004763a8
    MOV EAX,[0x01d72648]                ; 004763aa | DAT_01d72648
    MOV dword ptr [ESP + 0x3c],ECX      ; 004763af
    IMUL EDX                            ; 004763b3
    SHRD EAX,EDX,0x10                   ; 004763b5
    MOV EDX,dword ptr [ESP + 0x70]      ; 004763b9
    MOV ECX,EAX                         ; 004763bd
    MOV EAX,[0x01d72654]                ; 004763bf | DAT_01d72654
    IMUL EDX                            ; 004763c4
    SHRD EAX,EDX,0x10                   ; 004763c6
    MOV EDX,dword ptr [ESP + 0x74]      ; 004763ca
    ADD ECX,EAX                         ; 004763ce
    MOV EAX,[0x01d72660]                ; 004763d0 | DAT_01d72660
    IMUL EDX                            ; 004763d5
    SHRD EAX,EDX,0x10                   ; 004763d7
    ADD ECX,EAX                         ; 004763db
    MOV dword ptr [ESP + 0x40],ECX      ; 004763dd
    MOV EDX,dword ptr [ESP + 0x6c]      ; 004763e1
    MOV EAX,[0x01d7264c]                ; 004763e5 | DAT_01d7264c
    IMUL EDX                            ; 004763ea
    SHRD EAX,EDX,0x10                   ; 004763ec
    MOV EDX,dword ptr [ESP + 0x70]      ; 004763f0
    MOV ECX,EAX                         ; 004763f4
    MOV EAX,[0x01d72658]                ; 004763f6 | DAT_01d72658
    IMUL EDX                            ; 004763fb
    SHRD EAX,EDX,0x10                   ; 004763fd
    MOV EDX,dword ptr [ESP + 0x74]      ; 00476401
    ADD ECX,EAX                         ; 00476405
    MOV EAX,[0x01d72664]                ; 00476407 | DAT_01d72664
    IMUL EDX                            ; 0047640c
    SHRD EAX,EDX,0x10                   ; 0047640e
    ADD ECX,EAX                         ; 00476412
    MOV dword ptr [ESP + 0x44],ECX      ; 00476414
    XOR ECX,ECX                         ; 00476418
    MOV dword ptr [ESP + 0x48],ECX      ; 0047641a
    MOV dword ptr [ESP + 0x4c],ECX      ; 0047641e
    MOV dword ptr [ESP + 0x50],ECX      ; 00476422
    FLD double ptr [0x005bca89]         ; 00476426 | DAT_005bca89
    FLD float ptr [EBX + 0x28]          ; 0047642c
    FMUL ST1                            ; 0047642f
    FLD float ptr [EBX + 0x2c]          ; 00476431
    FMUL ST2                            ; 00476434
    FLD float ptr [EBX + 0x30]          ; 00476436
    FMULP ST3                           ; 00476439
    MOV EDX,0xfffffc19                  ; 0047643b
    MOV EAX,0x3e7                       ; 00476440
    MOV EDI,EDX                         ; 00476445
    MOV dword ptr [ESP + 0xa8],EAX      ; 00476447
    MOV dword ptr [ESP + 0xac],EAX      ; 0047644e
    MOV ESI,EAX                         ; 00476455
    MOV dword ptr [ESP + 0xb0],EAX      ; 00476457
    XOR ESI,EAX                         ; 0047645e
    MOV ECX,EDX                         ; 00476460
    FXCH                                ; 00476462
    FSTP double ptr [ESP + 0x10]        ; 00476464
    FSTP double ptr [ESP + 0x8]         ; 00476468
    FSTP double ptr [ESP]               ; 0047646c
    FILD dword ptr [ESP + ESI*0x1 + 0x18] ; 0047646f
        ;   Label: LAB_0047646f
    FDIV double ptr [ESP + 0x10]        ; 00476473
    FILD dword ptr [ESP + ESI*0x1 + 0x1c] ; 00476477
    FDIV double ptr [ESP + 0x8]         ; 0047647b
    FILD dword ptr [ESP + ESI*0x1 + 0x20] ; 0047647f
    FDIV double ptr [ESP]               ; 00476483
    MOV EAX,dword ptr [ESP + 0x78]      ; 00476486
    MOV dword ptr [ESP + 0x190],EAX     ; 0047648a
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00476491
    MOV dword ptr [ESP + 0x194],EAX     ; 00476495
    MOV EAX,dword ptr [ESP + 0x80]      ; 0047649c
    MOV dword ptr [ESP + 0x198],EAX     ; 004764a3
    FILD dword ptr [ESP + 0x190]        ; 004764aa
    FILD dword ptr [ESP + 0x194]        ; 004764b1
    FILD dword ptr [ESP + 0x198]        ; 004764b8
    FXCH ST2                            ; 004764bf
    FADDP ST5,ST0                       ; 004764c1
    FADDP ST3,ST0                       ; 004764c3
    FADDP                               ; 004764c5
    FXCH ST2                            ; 004764c7
    CALL crt_math.c_round_FUN_005a3120  ; 004764c9
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 004764ce
    CALL crt_math.c_round_FUN_005a3120  ; 004764d0
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST2                            ; 004764d5
    CALL crt_math.c_round_FUN_005a3120  ; 004764d7
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 004764dc
    FISTP dword ptr [ESP + 0x9c]        ; 004764de
    FXCH                                ; 004764e5
    FISTP dword ptr [ESP + 0xa0]        ; 004764e7
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004764ee
    FISTP dword ptr [ESP + 0xa4]        ; 004764f5
    CMP EAX,dword ptr [ESP + 0xa8]      ; 004764fc
    JGE 0x0047650c                      ; 00476503
        ;   XREF to: 0047650c (CONDITIONAL_JUMP)  ; LAB_0047650c
    MOV dword ptr [ESP + 0xa8],EAX      ; 00476505
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0047650c
        ;   Label: LAB_0047650c
    CMP EAX,dword ptr [ESP + 0xac]      ; 00476513
    JGE 0x00476523                      ; 0047651a
        ;   XREF to: 00476523 (CONDITIONAL_JUMP)  ; LAB_00476523
    MOV dword ptr [ESP + 0xac],EAX      ; 0047651c
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00476523
        ;   Label: LAB_00476523
    CMP EAX,dword ptr [ESP + 0xb0]      ; 0047652a
    JGE 0x0047653a                      ; 00476531
        ;   XREF to: 0047653a (CONDITIONAL_JUMP)  ; LAB_0047653a
    MOV dword ptr [ESP + 0xb0],EAX      ; 00476533
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0047653a
        ;   Label: LAB_0047653a
    CMP EDX,EAX                         ; 00476541
    JGE 0x00476547                      ; 00476543
        ;   XREF to: 00476547 (CONDITIONAL_JUMP)  ; LAB_00476547
    MOV EDX,EAX                         ; 00476545
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00476547
        ;   Label: LAB_00476547
    CMP ECX,EAX                         ; 0047654e
    JGE 0x00476554                      ; 00476550
        ;   XREF to: 00476554 (CONDITIONAL_JUMP)  ; LAB_00476554
    MOV ECX,EAX                         ; 00476552
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00476554
        ;   Label: LAB_00476554
    CMP EDI,EAX                         ; 0047655b
    JGE 0x00476561                      ; 0047655d
        ;   XREF to: 00476561 (CONDITIONAL_JUMP)  ; LAB_00476561
    MOV EDI,EAX                         ; 0047655f
    ADD ESI,0xc                         ; 00476561
        ;   Label: LAB_00476561
    CMP ESI,0x3c                        ; 00476564
    JNZ 0x0047646f                      ; 00476567
        ;   XREF to: 0047646f (CONDITIONAL_JUMP)  ; LAB_0047646f
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0047656d
    INC EDX                             ; 00476574
    MOV dword ptr [EBX + 0x54],EAX      ; 00476575
    INC ECX                             ; 00476578
    MOV dword ptr [EBX + 0x60],EDX      ; 00476579
    INC EDI                             ; 0047657c
    MOV dword ptr [EBX + 0x64],ECX      ; 0047657d
    MOV dword ptr [EBX + 0x68],EDI      ; 00476580
    MOV EAX,dword ptr [ESP + 0xac]      ; 00476583
    MOV dword ptr [EBX + 0x58],EAX      ; 0047658a
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0047658d
    MOV EDX,dword ptr [EBX + 0x54]      ; 00476594
    MOV dword ptr [EBX + 0x5c],EAX      ; 00476597
    TEST EDX,EDX                        ; 0047659a
    JL 0x004769b1                       ; 0047659c
        ;   XREF to: 004769b1 (CONDITIONAL_JUMP)  ; LAB_004769b1
    CMP dword ptr [EBX + 0x58],0x0      ; 004765a2
        ;   Label: LAB_004765a2
    JL 0x004769bd                       ; 004765a6
        ;   XREF to: 004769bd (CONDITIONAL_JUMP)  ; LAB_004769bd
    CMP dword ptr [EBX + 0x5c],0x0      ; 004765ac
        ;   Label: LAB_004765ac
    JL 0x004769c9                       ; 004765b0
        ;   XREF to: 004769c9 (CONDITIONAL_JUMP)  ; LAB_004769c9
    MOV EDI,dword ptr [EBX + 0x40]      ; 004765b6
        ;   Label: LAB_004765b6
    CMP EDI,dword ptr [EBX + 0x60]      ; 004765b9
    JG 0x004765c4                       ; 004765bc
        ;   XREF to: 004765c4 (CONDITIONAL_JUMP)  ; LAB_004765c4
    LEA EAX,[EDI + -0x1]                ; 004765be
    MOV dword ptr [EBX + 0x60],EAX      ; 004765c1
    MOV EDX,dword ptr [EBX + 0x44]      ; 004765c4
        ;   Label: LAB_004765c4
    CMP EDX,dword ptr [EBX + 0x64]      ; 004765c7
    JG 0x004765d2                       ; 004765ca
        ;   XREF to: 004765d2 (CONDITIONAL_JUMP)  ; LAB_004765d2
    LEA EAX,[EDX + -0x1]                ; 004765cc
    MOV dword ptr [EBX + 0x64],EAX      ; 004765cf
    MOV ECX,dword ptr [EBX + 0x48]      ; 004765d2
        ;   Label: LAB_004765d2
    CMP ECX,dword ptr [EBX + 0x68]      ; 004765d5
    JG 0x004765e0                       ; 004765d8
        ;   XREF to: 004765e0 (CONDITIONAL_JUMP)  ; LAB_004765e0
    LEA EAX,[ECX + -0x1]                ; 004765da
    MOV dword ptr [EBX + 0x68],EAX      ; 004765dd
    PUSH 0x1c599c0                      ; 004765e0
        ;   Label: LAB_004765e0
    MOV EDI,dword ptr [0x005f2af8]      ; 004765e5 | DAT_005f2af8
    XOR ESI,ESI                         ; 004765eb
    PUSH EDI                            ; 004765ed | DAT_01bdd7e4
    MOV dword ptr [0x01ed3198],ESI      ; 004765ee | DAT_01ed3198
    CALL engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046ce60 ; 004765f4
        ;   XREF to: 0046ce60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046ce60(CDemonRenderer * this_ptr, CVector3i * input_point)
    ADD ESP,0x8                         ; 004765f9
    PUSH 0xff                           ; 004765fc
    PUSH 0xff                           ; 00476601
    PUSH 0xff                           ; 00476606
    MOV EAX,[0x005f2af8]                ; 0047660b | DAT_005f2af8
    PUSH EAX                            ; 00476610 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0046d3d0 ; 00476611
        ;   XREF to: 0046d3d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0046d3d0(CDemonRenderer * this_ptr, int red_component, int green_component, int blue_component)
    MOV EDX,dword ptr [EBX]             ; 00476616
    ADD ESP,0x10                        ; 00476618
    CMP EDX,0x4                         ; 0047661b
    JLE 0x004769d5                      ; 0047661e
        ;   XREF to: 004769d5 (CONDITIONAL_JUMP)  ; LAB_004769d5
    MOV dword ptr [EBX],0x1             ; 00476624
        ;   Label: LAB_00476624
    MOV EAX,[0x01d7265c]                ; 0047662a | DAT_01d7265c
        ;   Label: LAB_0047662a
    CDQ                                 ; 0047662f
    XOR EAX,EDX                         ; 00476630
    SUB EAX,EDX                         ; 00476632
    MOV ECX,EAX                         ; 00476634
    MOV dword ptr [ESP + 0xb4],EAX      ; 00476636
    MOV EAX,[0x01d72660]                ; 0047663d | DAT_01d72660
    CDQ                                 ; 00476642
    XOR EAX,EDX                         ; 00476643
    SUB EAX,EDX                         ; 00476645
    MOV ESI,EAX                         ; 00476647
    MOV EDI,EAX                         ; 00476649
    MOV EAX,[0x01d72664]                ; 0047664b | DAT_01d72664
    CDQ                                 ; 00476650
    XOR EAX,EDX                         ; 00476651
    SUB EAX,EDX                         ; 00476653
    MOV EDX,EAX                         ; 00476655
    CMP ECX,ESI                         ; 00476657
    JL 0x004769e2                       ; 00476659
        ;   XREF to: 004769e2 (CONDITIONAL_JUMP)  ; LAB_004769e2
    CMP ECX,EAX                         ; 0047665f
    JL 0x004769e2                       ; 00476661
        ;   XREF to: 004769e2 (CONDITIONAL_JUMP)  ; LAB_004769e2
    MOV EDI,dword ptr [ESP + 0x78]      ; 00476667
    CMP EDI,dword ptr [EBX + 0x60]      ; 0047666b
    JG 0x004767f8                       ; 0047666e
        ;   XREF to: 004767f8 (CONDITIONAL_JUMP)  ; LAB_004767f8
    MOV EAX,dword ptr [ESP + 0x80]      ; 00476674
    DEC EAX                             ; 0047667b
    MOV dword ptr [ESP + 0x138],EAX     ; 0047667c
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00476683
    DEC EAX                             ; 00476687
    MOV dword ptr [ESP + 0x13c],EAX     ; 00476688
    MOV EAX,EDI                         ; 0047668f
    NEG EAX                             ; 00476691
    ADD EAX,EDI                         ; 00476693
    MOV dword ptr [ESP + 0x158],EAX     ; 00476695
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0047669c
        ;   Label: LAB_0047669c
    MOV ECX,dword ptr [EBX + 0x64]      ; 004766a0
    MOV dword ptr [ESP + 0x18c],EAX     ; 004766a3
    CMP EAX,ECX                         ; 004766aa
    JG 0x0047673b                       ; 004766ac
        ;   XREF to: 0047673b (CONDITIONAL_JUMP)  ; LAB_0047673b
    MOV EAX,dword ptr [ESP + 0x158]     ; 004766b2
    MOV dword ptr [ESP + 0xb8],EAX      ; 004766b9
    MOV dword ptr [ESP + 0xbc],EAX      ; 004766c0
    MOV ESI,dword ptr [ESP + 0x80]      ; 004766c7
        ;   Label: LAB_004766c7
    CMP ESI,dword ptr [EBX + 0x68]      ; 004766ce
    JG 0x004766f6                       ; 004766d1
        ;   XREF to: 004766f6 (CONDITIONAL_JUMP)  ; LAB_004766f6
    MOV ECX,dword ptr [ESP + 0xb8]      ; 004766d3
        ;   Label: LAB_004766d3
    PUSH ECX                            ; 004766da
    PUSH ESI                            ; 004766db
    MOV EAX,dword ptr [ESP + 0x194]     ; 004766dc
    PUSH EAX                            ; 004766e3
    PUSH EDI                            ; 004766e4
    PUSH EBX                            ; 004766e5
    INC ESI                             ; 004766e6
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720 ; 004766e7
        ;   XREF to: 00475720 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x68]      ; 004766ec
    ADD ESP,0x14                        ; 004766ef
    CMP ESI,EDX                         ; 004766f2
    JLE 0x004766d3                      ; 004766f4
        ;   XREF to: 004766d3 (CONDITIONAL_JUMP)  ; LAB_004766d3
    MOV ESI,dword ptr [ESP + 0x138]     ; 004766f6
        ;   Label: LAB_004766f6
    CMP ESI,dword ptr [EBX + 0x5c]      ; 004766fd
    JL 0x00476725                       ; 00476700
        ;   XREF to: 00476725 (CONDITIONAL_JUMP)  ; LAB_00476725
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00476702
        ;   Label: LAB_00476702
    PUSH EAX                            ; 00476709
    PUSH ESI                            ; 0047670a
    MOV EDX,dword ptr [ESP + 0x194]     ; 0047670b
    PUSH EDX                            ; 00476712
    PUSH EDI                            ; 00476713
    PUSH EBX                            ; 00476714
    DEC ESI                             ; 00476715
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720 ; 00476716
        ;   XREF to: 00475720 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x5c]      ; 0047671b
    ADD ESP,0x14                        ; 0047671e
    CMP ESI,ECX                         ; 00476721
    JGE 0x00476702                      ; 00476723
        ;   XREF to: 00476702 (CONDITIONAL_JUMP)  ; LAB_00476702
    MOV ESI,dword ptr [ESP + 0x18c]     ; 00476725
        ;   Label: LAB_00476725
    INC ESI                             ; 0047672c
    MOV EDX,dword ptr [EBX + 0x64]      ; 0047672d
    MOV dword ptr [ESP + 0x18c],ESI     ; 00476730
    CMP ESI,EDX                         ; 00476737
    JLE 0x004766c7                      ; 00476739
        ;   XREF to: 004766c7 (CONDITIONAL_JUMP)  ; LAB_004766c7
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0047673b
        ;   Label: LAB_0047673b
    MOV ECX,dword ptr [EBX + 0x58]      ; 00476742
    MOV dword ptr [ESP + 0x188],EAX     ; 00476745
    CMP EAX,ECX                         ; 0047674c
    JL 0x004767dd                       ; 0047674e
        ;   XREF to: 004767dd (CONDITIONAL_JUMP)  ; LAB_004767dd
    MOV EAX,dword ptr [ESP + 0x158]     ; 00476754
    MOV dword ptr [ESP + 0xc0],EAX      ; 0047675b
    MOV dword ptr [ESP + 0xc4],EAX      ; 00476762
    MOV ESI,dword ptr [ESP + 0x80]      ; 00476769
        ;   Label: LAB_00476769
    CMP ESI,dword ptr [EBX + 0x68]      ; 00476770
    JG 0x00476798                       ; 00476773
        ;   XREF to: 00476798 (CONDITIONAL_JUMP)  ; LAB_00476798
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00476775
        ;   Label: LAB_00476775
    PUSH EAX                            ; 0047677c
    PUSH ESI                            ; 0047677d
    MOV EDX,dword ptr [ESP + 0x190]     ; 0047677e
    PUSH EDX                            ; 00476785
    PUSH EDI                            ; 00476786
    PUSH EBX                            ; 00476787
    INC ESI                             ; 00476788
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720 ; 00476789
        ;   XREF to: 00475720 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x68]      ; 0047678e
    ADD ESP,0x14                        ; 00476791
    CMP ESI,ECX                         ; 00476794
    JLE 0x00476775                      ; 00476796
        ;   XREF to: 00476775 (CONDITIONAL_JUMP)  ; LAB_00476775
    MOV ESI,dword ptr [ESP + 0x138]     ; 00476798
        ;   Label: LAB_00476798
    CMP ESI,dword ptr [EBX + 0x5c]      ; 0047679f
    JL 0x004767c7                       ; 004767a2
        ;   XREF to: 004767c7 (CONDITIONAL_JUMP)  ; LAB_004767c7
    MOV ECX,dword ptr [ESP + 0xc4]      ; 004767a4
        ;   Label: LAB_004767a4
    PUSH ECX                            ; 004767ab
    PUSH ESI                            ; 004767ac
    MOV EAX,dword ptr [ESP + 0x190]     ; 004767ad
    PUSH EAX                            ; 004767b4
    PUSH EDI                            ; 004767b5
    PUSH EBX                            ; 004767b6
    DEC ESI                             ; 004767b7
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720 ; 004767b8
        ;   XREF to: 00475720 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x5c]      ; 004767bd
    ADD ESP,0x14                        ; 004767c0
    CMP ESI,EDX                         ; 004767c3
    JGE 0x004767a4                      ; 004767c5
        ;   XREF to: 004767a4 (CONDITIONAL_JUMP)  ; LAB_004767a4
    MOV ESI,dword ptr [ESP + 0x188]     ; 004767c7
        ;   Label: LAB_004767c7
    DEC ESI                             ; 004767ce
    MOV EDX,dword ptr [EBX + 0x58]      ; 004767cf
    MOV dword ptr [ESP + 0x188],ESI     ; 004767d2
    CMP ESI,EDX                         ; 004767d9
    JGE 0x00476769                      ; 004767db
        ;   XREF to: 00476769 (CONDITIONAL_JUMP)  ; LAB_00476769
    MOV ECX,dword ptr [ESP + 0x158]     ; 004767dd
        ;   Label: LAB_004767dd
    INC EDI                             ; 004767e4
    INC ECX                             ; 004767e5
    MOV ESI,dword ptr [EBX + 0x60]      ; 004767e6
    MOV dword ptr [ESP + 0x158],ECX     ; 004767e9
    CMP EDI,ESI                         ; 004767f0
    JLE 0x0047669c                      ; 004767f2
        ;   XREF to: 0047669c (CONDITIONAL_JUMP)  ; LAB_0047669c
    MOV EDI,dword ptr [ESP + 0x78]      ; 004767f8
        ;   Label: LAB_004767f8
    MOV EAX,dword ptr [EBX + 0x54]      ; 004767fc
    DEC EDI                             ; 004767ff
    CMP EDI,EAX                         ; 00476800
    JL 0x00476990                       ; 00476802
        ;   XREF to: 00476990 (CONDITIONAL_JUMP)  ; LAB_00476990
    MOV EAX,dword ptr [ESP + 0x80]      ; 00476808
    DEC EAX                             ; 0047680f
    MOV dword ptr [ESP + 0x140],EAX     ; 00476810
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00476817
    DEC EAX                             ; 0047681b
    MOV dword ptr [ESP + 0x144],EAX     ; 0047681c
    MOV EAX,EDI                         ; 00476823
    MOV EDX,dword ptr [ESP + 0x78]      ; 00476825
    NEG EAX                             ; 00476829
    ADD EAX,EDX                         ; 0047682b
    MOV dword ptr [ESP + 0x15c],EAX     ; 0047682d
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00476834
        ;   Label: LAB_00476834
    MOV ECX,dword ptr [EBX + 0x64]      ; 00476838
    MOV dword ptr [ESP + 0x184],EAX     ; 0047683b
    CMP EAX,ECX                         ; 00476842
    JG 0x004768d3                       ; 00476844
        ;   XREF to: 004768d3 (CONDITIONAL_JUMP)  ; LAB_004768d3
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0047684a
    MOV dword ptr [ESP + 0xc8],EAX      ; 00476851
    MOV dword ptr [ESP + 0xcc],EAX      ; 00476858
    MOV ESI,dword ptr [ESP + 0x80]      ; 0047685f
        ;   Label: LAB_0047685f
    CMP ESI,dword ptr [EBX + 0x68]      ; 00476866
    JG 0x0047688e                       ; 00476869
        ;   XREF to: 0047688e (CONDITIONAL_JUMP)  ; LAB_0047688e
    MOV ECX,dword ptr [ESP + 0xc8]      ; 0047686b
        ;   Label: LAB_0047686b
    PUSH ECX                            ; 00476872
    PUSH ESI                            ; 00476873
    MOV EAX,dword ptr [ESP + 0x18c]     ; 00476874
    PUSH EAX                            ; 0047687b
    PUSH EDI                            ; 0047687c
    PUSH EBX                            ; 0047687d
    INC ESI                             ; 0047687e
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720 ; 0047687f
        ;   XREF to: 00475720 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x68]      ; 00476884
    ADD ESP,0x14                        ; 00476887
    CMP ESI,EDX                         ; 0047688a
    JLE 0x0047686b                      ; 0047688c
        ;   XREF to: 0047686b (CONDITIONAL_JUMP)  ; LAB_0047686b
    MOV ESI,dword ptr [ESP + 0x140]     ; 0047688e
        ;   Label: LAB_0047688e
    CMP ESI,dword ptr [EBX + 0x5c]      ; 00476895
    JL 0x004768bd                       ; 00476898
        ;   XREF to: 004768bd (CONDITIONAL_JUMP)  ; LAB_004768bd
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0047689a
        ;   Label: LAB_0047689a
    PUSH EAX                            ; 004768a1
    PUSH ESI                            ; 004768a2
    MOV EDX,dword ptr [ESP + 0x18c]     ; 004768a3
    PUSH EDX                            ; 004768aa
    PUSH EDI                            ; 004768ab
    PUSH EBX                            ; 004768ac
    DEC ESI                             ; 004768ad
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720 ; 004768ae
        ;   XREF to: 00475720 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x5c]      ; 004768b3
    ADD ESP,0x14                        ; 004768b6
    CMP ESI,ECX                         ; 004768b9
    JGE 0x0047689a                      ; 004768bb
        ;   XREF to: 0047689a (CONDITIONAL_JUMP)  ; LAB_0047689a
    MOV ESI,dword ptr [ESP + 0x184]     ; 004768bd
        ;   Label: LAB_004768bd
    INC ESI                             ; 004768c4
    MOV EDX,dword ptr [EBX + 0x64]      ; 004768c5
    MOV dword ptr [ESP + 0x184],ESI     ; 004768c8
    CMP ESI,EDX                         ; 004768cf
    JLE 0x0047685f                      ; 004768d1
        ;   XREF to: 0047685f (CONDITIONAL_JUMP)  ; LAB_0047685f
    MOV EAX,dword ptr [ESP + 0x144]     ; 004768d3
        ;   Label: LAB_004768d3
    MOV ECX,dword ptr [EBX + 0x58]      ; 004768da
    MOV dword ptr [ESP + 0x180],EAX     ; 004768dd
    CMP EAX,ECX                         ; 004768e4
    JL 0x00476975                       ; 004768e6
        ;   XREF to: 00476975 (CONDITIONAL_JUMP)  ; LAB_00476975
    MOV EAX,dword ptr [ESP + 0x15c]     ; 004768ec
    MOV dword ptr [ESP + 0xd0],EAX      ; 004768f3
    MOV dword ptr [ESP + 0xd4],EAX      ; 004768fa
    MOV ESI,dword ptr [ESP + 0x80]      ; 00476901
        ;   Label: LAB_00476901
    CMP ESI,dword ptr [EBX + 0x68]      ; 00476908
    JG 0x00476930                       ; 0047690b
        ;   XREF to: 00476930 (CONDITIONAL_JUMP)  ; LAB_00476930
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0047690d
        ;   Label: LAB_0047690d
    PUSH EAX                            ; 00476914
    PUSH ESI                            ; 00476915
    MOV EDX,dword ptr [ESP + 0x188]     ; 00476916
    PUSH EDX                            ; 0047691d
    PUSH EDI                            ; 0047691e
    PUSH EBX                            ; 0047691f
    INC ESI                             ; 00476920
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720 ; 00476921
        ;   XREF to: 00475720 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x68]      ; 00476926
    ADD ESP,0x14                        ; 00476929
    CMP ESI,ECX                         ; 0047692c
    JLE 0x0047690d                      ; 0047692e
        ;   XREF to: 0047690d (CONDITIONAL_JUMP)  ; LAB_0047690d
    MOV ESI,dword ptr [ESP + 0x140]     ; 00476930
        ;   Label: LAB_00476930
    CMP ESI,dword ptr [EBX + 0x5c]      ; 00476937
    JL 0x0047695f                       ; 0047693a
        ;   XREF to: 0047695f (CONDITIONAL_JUMP)  ; LAB_0047695f
    MOV ECX,dword ptr [ESP + 0xd4]      ; 0047693c
        ;   Label: LAB_0047693c
    PUSH ECX                            ; 00476943
    PUSH ESI                            ; 00476944
    MOV EAX,dword ptr [ESP + 0x188]     ; 00476945
    PUSH EAX                            ; 0047694c
    PUSH EDI                            ; 0047694d
    PUSH EBX                            ; 0047694e
    DEC ESI                             ; 0047694f
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720 ; 00476950
        ;   XREF to: 00475720 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x5c]      ; 00476955
    ADD ESP,0x14                        ; 00476958
    CMP ESI,EDX                         ; 0047695b
    JGE 0x0047693c                      ; 0047695d
        ;   XREF to: 0047693c (CONDITIONAL_JUMP)  ; LAB_0047693c
    MOV ESI,dword ptr [ESP + 0x180]     ; 0047695f
        ;   Label: LAB_0047695f
    DEC ESI                             ; 00476966
    MOV EDX,dword ptr [EBX + 0x58]      ; 00476967
    MOV dword ptr [ESP + 0x180],ESI     ; 0047696a
    CMP ESI,EDX                         ; 00476971
    JGE 0x00476901                      ; 00476973
        ;   XREF to: 00476901 (CONDITIONAL_JUMP)  ; LAB_00476901
    MOV ECX,dword ptr [ESP + 0x15c]     ; 00476975
        ;   Label: LAB_00476975
    DEC EDI                             ; 0047697c
    INC ECX                             ; 0047697d
    MOV ESI,dword ptr [EBX + 0x54]      ; 0047697e
    MOV dword ptr [ESP + 0x15c],ECX     ; 00476981
    CMP EDI,ESI                         ; 00476988
    JGE 0x00476834                      ; 0047698a
        ;   XREF to: 00476834 (CONDITIONAL_JUMP)  ; LAB_00476834
    MOV dword ptr [0x01c0b7b8],0x1      ; 00476990 | DAT_01c0b7b8
        ;   Label: LAB_00476990
    MOV ESP,EBP                         ; 0047699a
    POP EBP                             ; 0047699c
    POP EDI                             ; 0047699d
    POP ESI                             ; 0047699e
    POP EBX                             ; 0047699f
    RET                                 ; 004769a0
    PUSH EBX                            ; 004769a1
        ;   Label: LAB_004769a1
    CALL core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_004772f0 ; 004769a2
        ;   XREF to: 004772f0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_004772f0(CDemonRaytrace * this_ptr)
    ADD ESP,0x4                         ; 004769a7
    MOV ESP,EBP                         ; 004769aa
    POP EBP                             ; 004769ac
    POP EDI                             ; 004769ad
    POP ESI                             ; 004769ae
    POP EBX                             ; 004769af
    RET                                 ; 004769b0
    MOV dword ptr [EBX + 0x54],0x0      ; 004769b1
        ;   Label: LAB_004769b1
    JMP 0x004765a2                      ; 004769b8
        ;   XREF to: 004765a2 (UNCONDITIONAL_JUMP)  ; LAB_004765a2
    MOV dword ptr [EBX + 0x58],0x0      ; 004769bd
        ;   Label: LAB_004769bd
    JMP 0x004765ac                      ; 004769c4
        ;   XREF to: 004765ac (UNCONDITIONAL_JUMP)  ; LAB_004765ac
    MOV dword ptr [EBX + 0x5c],0x0      ; 004769c9
        ;   Label: LAB_004769c9
    JMP 0x004765b6                      ; 004769d0
        ;   XREF to: 004765b6 (UNCONDITIONAL_JUMP)  ; LAB_004765b6
    TEST EDX,EDX                        ; 004769d5
        ;   Label: LAB_004769d5
    JGE 0x0047662a                      ; 004769d7
        ;   XREF to: 0047662a (CONDITIONAL_JUMP)  ; LAB_0047662a
    JMP 0x00476624                      ; 004769dd
        ;   XREF to: 00476624 (UNCONDITIONAL_JUMP)  ; LAB_00476624
    CMP EDI,dword ptr [ESP + 0xb4]      ; 004769e2
        ;   Label: LAB_004769e2
    JL 0x00476d2b                       ; 004769e9
        ;   XREF to: 00476d2b (CONDITIONAL_JUMP)  ; LAB_00476d2b
    CMP EDI,EDX                         ; 004769ef
    JL 0x00476d2b                       ; 004769f1
        ;   XREF to: 00476d2b (CONDITIONAL_JUMP)  ; LAB_00476d2b
    MOV EDI,dword ptr [ESP + 0x7c]      ; 004769f7
    CMP EDI,dword ptr [EBX + 0x64]      ; 004769fb
    JG 0x00476b88                       ; 004769fe
        ;   XREF to: 00476b88 (CONDITIONAL_JUMP)  ; LAB_00476b88
    MOV EAX,dword ptr [ESP + 0x80]      ; 00476a04
    DEC EAX                             ; 00476a0b
    MOV dword ptr [ESP + 0x128],EAX     ; 00476a0c
    MOV EAX,dword ptr [ESP + 0x78]      ; 00476a13
    DEC EAX                             ; 00476a17
    MOV dword ptr [ESP + 0x12c],EAX     ; 00476a18
    MOV EAX,EDI                         ; 00476a1f
    NEG EAX                             ; 00476a21
    ADD EAX,EDI                         ; 00476a23
    MOV dword ptr [ESP + 0x150],EAX     ; 00476a25
    MOV EAX,dword ptr [ESP + 0x78]      ; 00476a2c
        ;   Label: LAB_00476a2c
    MOV ECX,dword ptr [EBX + 0x60]      ; 00476a30
    MOV dword ptr [ESP + 0x16c],EAX     ; 00476a33
    CMP EAX,ECX                         ; 00476a3a
    JG 0x00476acb                       ; 00476a3c
        ;   XREF to: 00476acb (CONDITIONAL_JUMP)  ; LAB_00476acb
    MOV EAX,dword ptr [ESP + 0x150]     ; 00476a42
    MOV dword ptr [ESP + 0xd8],EAX      ; 00476a49
    MOV dword ptr [ESP + 0xdc],EAX      ; 00476a50
    MOV ESI,dword ptr [ESP + 0x80]      ; 00476a57
        ;   Label: LAB_00476a57
    CMP ESI,dword ptr [EBX + 0x68]      ; 00476a5e
    JG 0x00476a86                       ; 00476a61
        ;   XREF to: 00476a86 (CONDITIONAL_JUMP)  ; LAB_00476a86
    MOV ECX,dword ptr [ESP + 0xd8]      ; 00476a63
        ;   Label: LAB_00476a63
    PUSH ECX                            ; 00476a6a
    PUSH ESI                            ; 00476a6b
    PUSH EDI                            ; 00476a6c
    MOV EAX,dword ptr [ESP + 0x178]     ; 00476a6d
    PUSH EAX                            ; 00476a74
    PUSH EBX                            ; 00476a75
    INC ESI                             ; 00476a76
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720 ; 00476a77
        ;   XREF to: 00475720 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x68]      ; 00476a7c
    ADD ESP,0x14                        ; 00476a7f
    CMP ESI,EDX                         ; 00476a82
    JLE 0x00476a63                      ; 00476a84
        ;   XREF to: 00476a63 (CONDITIONAL_JUMP)  ; LAB_00476a63
    MOV ESI,dword ptr [ESP + 0x128]     ; 00476a86
        ;   Label: LAB_00476a86
    CMP ESI,dword ptr [EBX + 0x5c]      ; 00476a8d
    JL 0x00476ab5                       ; 00476a90
        ;   XREF to: 00476ab5 (CONDITIONAL_JUMP)  ; LAB_00476ab5
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00476a92
        ;   Label: LAB_00476a92
    PUSH EAX                            ; 00476a99
    PUSH ESI                            ; 00476a9a
    PUSH EDI                            ; 00476a9b
    MOV EDX,dword ptr [ESP + 0x178]     ; 00476a9c
    PUSH EDX                            ; 00476aa3
    PUSH EBX                            ; 00476aa4
    DEC ESI                             ; 00476aa5
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720 ; 00476aa6
        ;   XREF to: 00475720 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x5c]      ; 00476aab
    ADD ESP,0x14                        ; 00476aae
    CMP ESI,ECX                         ; 00476ab1
    JGE 0x00476a92                      ; 00476ab3
        ;   XREF to: 00476a92 (CONDITIONAL_JUMP)  ; LAB_00476a92
    MOV ESI,dword ptr [ESP + 0x16c]     ; 00476ab5
        ;   Label: LAB_00476ab5
    INC ESI                             ; 00476abc
    MOV EDX,dword ptr [EBX + 0x60]      ; 00476abd
    MOV dword ptr [ESP + 0x16c],ESI     ; 00476ac0
    CMP ESI,EDX                         ; 00476ac7
    JLE 0x00476a57                      ; 00476ac9
        ;   XREF to: 00476a57 (CONDITIONAL_JUMP)  ; LAB_00476a57
    MOV EAX,dword ptr [ESP + 0x12c]     ; 00476acb
        ;   Label: LAB_00476acb
    MOV ECX,dword ptr [EBX + 0x54]      ; 00476ad2
    MOV dword ptr [ESP + 0x168],EAX     ; 00476ad5
    CMP EAX,ECX                         ; 00476adc
    JL 0x00476b6d                       ; 00476ade
        ;   XREF to: 00476b6d (CONDITIONAL_JUMP)  ; LAB_00476b6d
    MOV EAX,dword ptr [ESP + 0x150]     ; 00476ae4
    MOV dword ptr [ESP + 0xe0],EAX      ; 00476aeb
    MOV dword ptr [ESP + 0xe4],EAX      ; 00476af2
    MOV ESI,dword ptr [ESP + 0x80]      ; 00476af9
        ;   Label: LAB_00476af9
    CMP ESI,dword ptr [EBX + 0x68]      ; 00476b00
    JG 0x00476b28                       ; 00476b03
        ;   XREF to: 00476b28 (CONDITIONAL_JUMP)  ; LAB_00476b28
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00476b05
        ;   Label: LAB_00476b05
    PUSH EAX                            ; 00476b0c
    PUSH ESI                            ; 00476b0d
    PUSH EDI                            ; 00476b0e
    MOV EDX,dword ptr [ESP + 0x174]     ; 00476b0f
    PUSH EDX                            ; 00476b16
    PUSH EBX                            ; 00476b17
    INC ESI                             ; 00476b18
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720 ; 00476b19
        ;   XREF to: 00475720 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x68]      ; 00476b1e
    ADD ESP,0x14                        ; 00476b21
    CMP ESI,ECX                         ; 00476b24
    JLE 0x00476b05                      ; 00476b26
        ;   XREF to: 00476b05 (CONDITIONAL_JUMP)  ; LAB_00476b05
    MOV ESI,dword ptr [ESP + 0x128]     ; 00476b28
        ;   Label: LAB_00476b28
    CMP ESI,dword ptr [EBX + 0x5c]      ; 00476b2f
    JL 0x00476b57                       ; 00476b32
        ;   XREF to: 00476b57 (CONDITIONAL_JUMP)  ; LAB_00476b57
    MOV ECX,dword ptr [ESP + 0xe4]      ; 00476b34
        ;   Label: LAB_00476b34
    PUSH ECX                            ; 00476b3b
    PUSH ESI                            ; 00476b3c
    PUSH EDI                            ; 00476b3d
    MOV EAX,dword ptr [ESP + 0x174]     ; 00476b3e
    PUSH EAX                            ; 00476b45
    PUSH EBX                            ; 00476b46
    DEC ESI                             ; 00476b47
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720 ; 00476b48
        ;   XREF to: 00475720 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x5c]      ; 00476b4d
    ADD ESP,0x14                        ; 00476b50
    CMP ESI,EDX                         ; 00476b53
    JGE 0x00476b34                      ; 00476b55
        ;   XREF to: 00476b34 (CONDITIONAL_JUMP)  ; LAB_00476b34
    MOV ESI,dword ptr [ESP + 0x168]     ; 00476b57
        ;   Label: LAB_00476b57
    DEC ESI                             ; 00476b5e
    MOV EDX,dword ptr [EBX + 0x54]      ; 00476b5f
    MOV dword ptr [ESP + 0x168],ESI     ; 00476b62
    CMP ESI,EDX                         ; 00476b69
    JGE 0x00476af9                      ; 00476b6b
        ;   XREF to: 00476af9 (CONDITIONAL_JUMP)  ; LAB_00476af9
    MOV ECX,dword ptr [ESP + 0x150]     ; 00476b6d
        ;   Label: LAB_00476b6d
    INC EDI                             ; 00476b74
    INC ECX                             ; 00476b75
    MOV ESI,dword ptr [EBX + 0x64]      ; 00476b76
    MOV dword ptr [ESP + 0x150],ECX     ; 00476b79
    CMP EDI,ESI                         ; 00476b80
    JLE 0x00476a2c                      ; 00476b82
        ;   XREF to: 00476a2c (CONDITIONAL_JUMP)  ; LAB_00476a2c
    MOV EDI,dword ptr [ESP + 0x7c]      ; 00476b88
        ;   Label: LAB_00476b88
    MOV EAX,dword ptr [EBX + 0x58]      ; 00476b8c
    DEC EDI                             ; 00476b8f
    CMP EDI,EAX                         ; 00476b90
    JL 0x00476990                       ; 00476b92
        ;   XREF to: 00476990 (CONDITIONAL_JUMP)  ; LAB_00476990
    MOV EAX,dword ptr [ESP + 0x80]      ; 00476b98
    DEC EAX                             ; 00476b9f
    MOV dword ptr [ESP + 0x130],EAX     ; 00476ba0
    MOV EAX,dword ptr [ESP + 0x78]      ; 00476ba7
    DEC EAX                             ; 00476bab
    MOV dword ptr [ESP + 0x134],EAX     ; 00476bac
    MOV EAX,EDI                         ; 00476bb3
    MOV EDX,dword ptr [ESP + 0x7c]      ; 00476bb5
    NEG EAX                             ; 00476bb9
    ADD EAX,EDX                         ; 00476bbb
    MOV dword ptr [ESP + 0x154],EAX     ; 00476bbd
    MOV EAX,dword ptr [ESP + 0x78]      ; 00476bc4
        ;   Label: LAB_00476bc4
    MOV ECX,dword ptr [EBX + 0x60]      ; 00476bc8
    MOV dword ptr [ESP + 0x164],EAX     ; 00476bcb
    CMP EAX,ECX                         ; 00476bd2
    JLE 0x00476d14                      ; 00476bd4
        ;   XREF to: 00476d14 (CONDITIONAL_JUMP)  ; LAB_00476d14
    MOV EAX,dword ptr [ESP + 0x134]     ; 00476bda
        ;   Label: LAB_00476bda
    MOV ECX,dword ptr [EBX + 0x54]      ; 00476be1
    MOV dword ptr [ESP + 0x160],EAX     ; 00476be4
    CMP EAX,ECX                         ; 00476beb
    JL 0x00476c7c                       ; 00476bed
        ;   XREF to: 00476c7c (CONDITIONAL_JUMP)  ; LAB_00476c7c
    MOV EAX,dword ptr [ESP + 0x154]     ; 00476bf3
    MOV dword ptr [ESP + 0xf0],EAX      ; 00476bfa
    MOV dword ptr [ESP + 0xf4],EAX      ; 00476c01
    MOV ESI,dword ptr [ESP + 0x80]      ; 00476c08
        ;   Label: LAB_00476c08
    CMP ESI,dword ptr [EBX + 0x68]      ; 00476c0f
    JG 0x00476c37                       ; 00476c12
        ;   XREF to: 00476c37 (CONDITIONAL_JUMP)  ; LAB_00476c37
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00476c14
        ;   Label: LAB_00476c14
    PUSH EAX                            ; 00476c1b
    PUSH ESI                            ; 00476c1c
    PUSH EDI                            ; 00476c1d
    MOV EDX,dword ptr [ESP + 0x16c]     ; 00476c1e
    PUSH EDX                            ; 00476c25
    PUSH EBX                            ; 00476c26
    INC ESI                             ; 00476c27
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720 ; 00476c28
        ;   XREF to: 00475720 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x68]      ; 00476c2d
    ADD ESP,0x14                        ; 00476c30
    CMP ESI,ECX                         ; 00476c33
    JLE 0x00476c14                      ; 00476c35
        ;   XREF to: 00476c14 (CONDITIONAL_JUMP)  ; LAB_00476c14
    MOV ESI,dword ptr [ESP + 0x130]     ; 00476c37
        ;   Label: LAB_00476c37
    CMP ESI,dword ptr [EBX + 0x5c]      ; 00476c3e
    JL 0x00476c66                       ; 00476c41
        ;   XREF to: 00476c66 (CONDITIONAL_JUMP)  ; LAB_00476c66
    MOV ECX,dword ptr [ESP + 0xf4]      ; 00476c43
        ;   Label: LAB_00476c43
    PUSH ECX                            ; 00476c4a
    PUSH ESI                            ; 00476c4b
    PUSH EDI                            ; 00476c4c
    MOV EAX,dword ptr [ESP + 0x16c]     ; 00476c4d
    PUSH EAX                            ; 00476c54
    PUSH EBX                            ; 00476c55
    DEC ESI                             ; 00476c56
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720 ; 00476c57
        ;   XREF to: 00475720 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x5c]      ; 00476c5c
    ADD ESP,0x14                        ; 00476c5f
    CMP ESI,EDX                         ; 00476c62
    JGE 0x00476c43                      ; 00476c64
        ;   XREF to: 00476c43 (CONDITIONAL_JUMP)  ; LAB_00476c43
    MOV ESI,dword ptr [ESP + 0x160]     ; 00476c66
        ;   Label: LAB_00476c66
    DEC ESI                             ; 00476c6d
    MOV EDX,dword ptr [EBX + 0x54]      ; 00476c6e
    MOV dword ptr [ESP + 0x160],ESI     ; 00476c71
    CMP ESI,EDX                         ; 00476c78
    JGE 0x00476c08                      ; 00476c7a
        ;   XREF to: 00476c08 (CONDITIONAL_JUMP)  ; LAB_00476c08
    MOV ECX,dword ptr [ESP + 0x154]     ; 00476c7c
        ;   Label: LAB_00476c7c
    DEC EDI                             ; 00476c83
    INC ECX                             ; 00476c84
    MOV ESI,dword ptr [EBX + 0x58]      ; 00476c85
    MOV dword ptr [ESP + 0x154],ECX     ; 00476c88
    CMP EDI,ESI                         ; 00476c8f
    JL 0x00476990                       ; 00476c91
        ;   XREF to: 00476990 (CONDITIONAL_JUMP)  ; LAB_00476990
    JMP 0x00476bc4                      ; 00476c97
        ;   XREF to: 00476bc4 (UNCONDITIONAL_JUMP)  ; LAB_00476bc4
    MOV ESI,dword ptr [ESP + 0x164]     ; 00476c9c
        ;   Label: LAB_00476c9c
    INC ESI                             ; 00476ca3
    MOV EDX,dword ptr [EBX + 0x60]      ; 00476ca4
    MOV dword ptr [ESP + 0x164],ESI     ; 00476ca7
    CMP ESI,EDX                         ; 00476cae
    JG 0x00476bda                       ; 00476cb0
        ;   XREF to: 00476bda (CONDITIONAL_JUMP)  ; LAB_00476bda
    MOV ESI,dword ptr [ESP + 0x80]      ; 00476cb6
        ;   Label: LAB_00476cb6
    CMP ESI,dword ptr [EBX + 0x68]      ; 00476cbd
    JG 0x00476ce5                       ; 00476cc0
        ;   XREF to: 00476ce5 (CONDITIONAL_JUMP)  ; LAB_00476ce5
    MOV ECX,dword ptr [ESP + 0xe8]      ; 00476cc2
        ;   Label: LAB_00476cc2
    PUSH ECX                            ; 00476cc9
    PUSH ESI                            ; 00476cca
    PUSH EDI                            ; 00476ccb
    MOV EAX,dword ptr [ESP + 0x170]     ; 00476ccc
    PUSH EAX                            ; 00476cd3
    PUSH EBX                            ; 00476cd4
    INC ESI                             ; 00476cd5
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720 ; 00476cd6
        ;   XREF to: 00475720 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x68]      ; 00476cdb
    ADD ESP,0x14                        ; 00476cde
    CMP ESI,EDX                         ; 00476ce1
    JLE 0x00476cc2                      ; 00476ce3
        ;   XREF to: 00476cc2 (CONDITIONAL_JUMP)  ; LAB_00476cc2
    MOV ESI,dword ptr [ESP + 0x130]     ; 00476ce5
        ;   Label: LAB_00476ce5
    CMP ESI,dword ptr [EBX + 0x5c]      ; 00476cec
    JL 0x00476c9c                       ; 00476cef
        ;   XREF to: 00476c9c (CONDITIONAL_JUMP)  ; LAB_00476c9c
        ;   Label: LAB_00476cef
    MOV EAX,dword ptr [ESP + 0xec]      ; 00476cf1
    PUSH EAX                            ; 00476cf8
    PUSH ESI                            ; 00476cf9
    PUSH EDI                            ; 00476cfa
    MOV EDX,dword ptr [ESP + 0x170]     ; 00476cfb
    PUSH EDX                            ; 00476d02
    PUSH EBX                            ; 00476d03
    DEC ESI                             ; 00476d04
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720 ; 00476d05
        ;   XREF to: 00475720 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x5c]      ; 00476d0a
    ADD ESP,0x14                        ; 00476d0d
    CMP ESI,ECX                         ; 00476d10
    JMP 0x00476cef                      ; 00476d12
        ;   XREF to: 00476cef (UNCONDITIONAL_JUMP)  ; LAB_00476cef
    MOV EAX,dword ptr [ESP + 0x154]     ; 00476d14
        ;   Label: LAB_00476d14
    MOV dword ptr [ESP + 0xe8],EAX      ; 00476d1b
    MOV dword ptr [ESP + 0xec],EAX      ; 00476d22
    JMP 0x00476cb6                      ; 00476d29
        ;   XREF to: 00476cb6 (UNCONDITIONAL_JUMP)  ; LAB_00476cb6
    MOV EDI,dword ptr [ESP + 0x80]      ; 00476d2b
        ;   Label: LAB_00476d2b
    CMP EDI,dword ptr [EBX + 0x68]      ; 00476d32
    JG 0x00476eb6                       ; 00476d35
        ;   XREF to: 00476eb6 (CONDITIONAL_JUMP)  ; LAB_00476eb6
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00476d3b
    DEC EAX                             ; 00476d3f
    MOV dword ptr [ESP + 0x118],EAX     ; 00476d40
    MOV EAX,dword ptr [ESP + 0x78]      ; 00476d47
    DEC EAX                             ; 00476d4b
    MOV dword ptr [ESP + 0x11c],EAX     ; 00476d4c
    MOV EAX,EDI                         ; 00476d53
    NEG EAX                             ; 00476d55
    ADD EAX,EDI                         ; 00476d57
    MOV dword ptr [ESP + 0x148],EAX     ; 00476d59
    MOV EAX,dword ptr [ESP + 0x78]      ; 00476d60
        ;   Label: LAB_00476d60
    MOV EDX,dword ptr [EBX + 0x60]      ; 00476d64
    MOV dword ptr [ESP + 0x17c],EAX     ; 00476d67
    CMP EAX,EDX                         ; 00476d6e
    JG 0x00476dfc                       ; 00476d70
        ;   XREF to: 00476dfc (CONDITIONAL_JUMP)  ; LAB_00476dfc
    MOV EAX,dword ptr [ESP + 0x148]     ; 00476d76
    MOV dword ptr [ESP + 0xf8],EAX      ; 00476d7d
    MOV dword ptr [ESP + 0xfc],EAX      ; 00476d84
    MOV ESI,dword ptr [ESP + 0x7c]      ; 00476d8b
        ;   Label: LAB_00476d8b
    CMP ESI,dword ptr [EBX + 0x64]      ; 00476d8f
    JG 0x00476db7                       ; 00476d92
        ;   XREF to: 00476db7 (CONDITIONAL_JUMP)  ; LAB_00476db7
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00476d94
        ;   Label: LAB_00476d94
    PUSH EAX                            ; 00476d9b
    PUSH EDI                            ; 00476d9c
    PUSH ESI                            ; 00476d9d
    MOV EDX,dword ptr [ESP + 0x188]     ; 00476d9e
    PUSH EDX                            ; 00476da5
    PUSH EBX                            ; 00476da6
    INC ESI                             ; 00476da7
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720 ; 00476da8
        ;   XREF to: 00475720 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x64]      ; 00476dad
    ADD ESP,0x14                        ; 00476db0
    CMP ESI,ECX                         ; 00476db3
    JLE 0x00476d94                      ; 00476db5
        ;   XREF to: 00476d94 (CONDITIONAL_JUMP)  ; LAB_00476d94
    MOV ESI,dword ptr [ESP + 0x118]     ; 00476db7
        ;   Label: LAB_00476db7
    CMP ESI,dword ptr [EBX + 0x58]      ; 00476dbe
    JL 0x00476de6                       ; 00476dc1
        ;   XREF to: 00476de6 (CONDITIONAL_JUMP)  ; LAB_00476de6
    MOV ECX,dword ptr [ESP + 0xfc]      ; 00476dc3
        ;   Label: LAB_00476dc3
    PUSH ECX                            ; 00476dca
    PUSH EDI                            ; 00476dcb
    PUSH ESI                            ; 00476dcc
    MOV EAX,dword ptr [ESP + 0x188]     ; 00476dcd
    PUSH EAX                            ; 00476dd4
    PUSH EBX                            ; 00476dd5
    DEC ESI                             ; 00476dd6
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720 ; 00476dd7
        ;   XREF to: 00475720 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x58]      ; 00476ddc
    ADD ESP,0x14                        ; 00476ddf
    CMP ESI,EDX                         ; 00476de2
    JGE 0x00476dc3                      ; 00476de4
        ;   XREF to: 00476dc3 (CONDITIONAL_JUMP)  ; LAB_00476dc3
    MOV ECX,dword ptr [ESP + 0x17c]     ; 00476de6
        ;   Label: LAB_00476de6
    INC ECX                             ; 00476ded
    MOV ESI,dword ptr [EBX + 0x60]      ; 00476dee
    MOV dword ptr [ESP + 0x17c],ECX     ; 00476df1
    CMP ECX,ESI                         ; 00476df8
    JLE 0x00476d8b                      ; 00476dfa
        ;   XREF to: 00476d8b (CONDITIONAL_JUMP)  ; LAB_00476d8b
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00476dfc
        ;   Label: LAB_00476dfc
    MOV EDX,dword ptr [EBX + 0x54]      ; 00476e03
    MOV dword ptr [ESP + 0x178],EAX     ; 00476e06
    CMP EAX,EDX                         ; 00476e0d
    JL 0x00476e9b                       ; 00476e0f
        ;   XREF to: 00476e9b (CONDITIONAL_JUMP)  ; LAB_00476e9b
    MOV EAX,dword ptr [ESP + 0x148]     ; 00476e15
    MOV dword ptr [ESP + 0x100],EAX     ; 00476e1c
    MOV dword ptr [ESP + 0x104],EAX     ; 00476e23
    MOV ESI,dword ptr [ESP + 0x7c]      ; 00476e2a
        ;   Label: LAB_00476e2a
    CMP ESI,dword ptr [EBX + 0x64]      ; 00476e2e
    JG 0x00476e56                       ; 00476e31
        ;   XREF to: 00476e56 (CONDITIONAL_JUMP)  ; LAB_00476e56
    MOV ECX,dword ptr [ESP + 0x100]     ; 00476e33
        ;   Label: LAB_00476e33
    PUSH ECX                            ; 00476e3a
    PUSH EDI                            ; 00476e3b
    PUSH ESI                            ; 00476e3c
    MOV EAX,dword ptr [ESP + 0x184]     ; 00476e3d
    PUSH EAX                            ; 00476e44
    PUSH EBX                            ; 00476e45
    INC ESI                             ; 00476e46
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720 ; 00476e47
        ;   XREF to: 00475720 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x64]      ; 00476e4c
    ADD ESP,0x14                        ; 00476e4f
    CMP ESI,EDX                         ; 00476e52
    JLE 0x00476e33                      ; 00476e54
        ;   XREF to: 00476e33 (CONDITIONAL_JUMP)  ; LAB_00476e33
    MOV ESI,dword ptr [ESP + 0x118]     ; 00476e56
        ;   Label: LAB_00476e56
    CMP ESI,dword ptr [EBX + 0x58]      ; 00476e5d
    JL 0x00476e85                       ; 00476e60
        ;   XREF to: 00476e85 (CONDITIONAL_JUMP)  ; LAB_00476e85
    MOV EAX,dword ptr [ESP + 0x104]     ; 00476e62
        ;   Label: LAB_00476e62
    PUSH EAX                            ; 00476e69
    PUSH EDI                            ; 00476e6a
    PUSH ESI                            ; 00476e6b
    MOV EDX,dword ptr [ESP + 0x184]     ; 00476e6c
    PUSH EDX                            ; 00476e73
    PUSH EBX                            ; 00476e74
    DEC ESI                             ; 00476e75
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720 ; 00476e76
        ;   XREF to: 00475720 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x58]      ; 00476e7b
    ADD ESP,0x14                        ; 00476e7e
    CMP ESI,ECX                         ; 00476e81
    JGE 0x00476e62                      ; 00476e83
        ;   XREF to: 00476e62 (CONDITIONAL_JUMP)  ; LAB_00476e62
    MOV ECX,dword ptr [ESP + 0x178]     ; 00476e85
        ;   Label: LAB_00476e85
    DEC ECX                             ; 00476e8c
    MOV ESI,dword ptr [EBX + 0x54]      ; 00476e8d
    MOV dword ptr [ESP + 0x178],ECX     ; 00476e90
    CMP ECX,ESI                         ; 00476e97
    JGE 0x00476e2a                      ; 00476e99
        ;   XREF to: 00476e2a (CONDITIONAL_JUMP)  ; LAB_00476e2a
    MOV EAX,dword ptr [ESP + 0x148]     ; 00476e9b
        ;   Label: LAB_00476e9b
    INC EDI                             ; 00476ea2
    INC EAX                             ; 00476ea3
    MOV EDX,dword ptr [EBX + 0x68]      ; 00476ea4
    MOV dword ptr [ESP + 0x148],EAX     ; 00476ea7
    CMP EDI,EDX                         ; 00476eae
    JLE 0x00476d60                      ; 00476eb0
        ;   XREF to: 00476d60 (CONDITIONAL_JUMP)  ; LAB_00476d60
    MOV EDI,dword ptr [ESP + 0x80]      ; 00476eb6
        ;   Label: LAB_00476eb6
    MOV ECX,dword ptr [EBX + 0x5c]      ; 00476ebd
    DEC EDI                             ; 00476ec0
    CMP EDI,ECX                         ; 00476ec1
    JL 0x00476990                       ; 00476ec3
        ;   XREF to: 00476990 (CONDITIONAL_JUMP)  ; LAB_00476990
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00476ec9
    DEC EAX                             ; 00476ecd
    MOV dword ptr [ESP + 0x120],EAX     ; 00476ece
    MOV EAX,dword ptr [ESP + 0x78]      ; 00476ed5
    DEC EAX                             ; 00476ed9
    MOV dword ptr [ESP + 0x124],EAX     ; 00476eda
    MOV EAX,EDI                         ; 00476ee1
    MOV EDX,dword ptr [ESP + 0x80]      ; 00476ee3
    NEG EAX                             ; 00476eea
    ADD EAX,EDX                         ; 00476eec
    MOV dword ptr [ESP + 0x14c],EAX     ; 00476eee
    MOV EAX,dword ptr [ESP + 0x78]      ; 00476ef5
        ;   Label: LAB_00476ef5
    MOV ECX,dword ptr [EBX + 0x60]      ; 00476ef9
    MOV dword ptr [ESP + 0x174],EAX     ; 00476efc
    CMP EAX,ECX                         ; 00476f03
    JLE 0x0047703f                      ; 00476f05
        ;   XREF to: 0047703f (CONDITIONAL_JUMP)  ; LAB_0047703f
    MOV EAX,dword ptr [ESP + 0x124]     ; 00476f0b
        ;   Label: LAB_00476f0b
    MOV ECX,dword ptr [EBX + 0x54]      ; 00476f12
    MOV dword ptr [ESP + 0x170],EAX     ; 00476f15
    CMP EAX,ECX                         ; 00476f1c
    JL 0x00476faa                       ; 00476f1e
        ;   XREF to: 00476faa (CONDITIONAL_JUMP)  ; LAB_00476faa
    MOV EAX,dword ptr [ESP + 0x14c]     ; 00476f24
    MOV dword ptr [ESP + 0x110],EAX     ; 00476f2b
    MOV dword ptr [ESP + 0x114],EAX     ; 00476f32
    MOV ESI,dword ptr [ESP + 0x7c]      ; 00476f39
        ;   Label: LAB_00476f39
    CMP ESI,dword ptr [EBX + 0x64]      ; 00476f3d
    JG 0x00476f65                       ; 00476f40
        ;   XREF to: 00476f65 (CONDITIONAL_JUMP)  ; LAB_00476f65
    MOV EAX,dword ptr [ESP + 0x110]     ; 00476f42
        ;   Label: LAB_00476f42
    PUSH EAX                            ; 00476f49
    PUSH EDI                            ; 00476f4a
    PUSH ESI                            ; 00476f4b
    MOV EDX,dword ptr [ESP + 0x17c]     ; 00476f4c
    PUSH EDX                            ; 00476f53
    PUSH EBX                            ; 00476f54
    INC ESI                             ; 00476f55
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720 ; 00476f56
        ;   XREF to: 00475720 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x64]      ; 00476f5b
    ADD ESP,0x14                        ; 00476f5e
    CMP ESI,ECX                         ; 00476f61
    JLE 0x00476f42                      ; 00476f63
        ;   XREF to: 00476f42 (CONDITIONAL_JUMP)  ; LAB_00476f42
    MOV ESI,dword ptr [ESP + 0x120]     ; 00476f65
        ;   Label: LAB_00476f65
    CMP ESI,dword ptr [EBX + 0x58]      ; 00476f6c
    JL 0x00476f94                       ; 00476f6f
        ;   XREF to: 00476f94 (CONDITIONAL_JUMP)  ; LAB_00476f94
    MOV ECX,dword ptr [ESP + 0x114]     ; 00476f71
        ;   Label: LAB_00476f71
    PUSH ECX                            ; 00476f78
    PUSH EDI                            ; 00476f79
    PUSH ESI                            ; 00476f7a
    MOV EAX,dword ptr [ESP + 0x17c]     ; 00476f7b
    PUSH EAX                            ; 00476f82
    PUSH EBX                            ; 00476f83
    DEC ESI                             ; 00476f84
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720 ; 00476f85
        ;   XREF to: 00475720 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x58]      ; 00476f8a
    ADD ESP,0x14                        ; 00476f8d
    CMP ESI,EDX                         ; 00476f90
    JGE 0x00476f71                      ; 00476f92
        ;   XREF to: 00476f71 (CONDITIONAL_JUMP)  ; LAB_00476f71
    MOV ESI,dword ptr [ESP + 0x170]     ; 00476f94
        ;   Label: LAB_00476f94
    DEC ESI                             ; 00476f9b
    MOV EDX,dword ptr [EBX + 0x54]      ; 00476f9c
    MOV dword ptr [ESP + 0x170],ESI     ; 00476f9f
    CMP ESI,EDX                         ; 00476fa6
    JGE 0x00476f39                      ; 00476fa8
        ;   XREF to: 00476f39 (CONDITIONAL_JUMP)  ; LAB_00476f39
    MOV ESI,dword ptr [ESP + 0x14c]     ; 00476faa
        ;   Label: LAB_00476faa
    DEC EDI                             ; 00476fb1
    INC ESI                             ; 00476fb2
    MOV EAX,dword ptr [EBX + 0x5c]      ; 00476fb3
    MOV dword ptr [ESP + 0x14c],ESI     ; 00476fb6
    CMP EDI,EAX                         ; 00476fbd
    JL 0x00476990                       ; 00476fbf
        ;   XREF to: 00476990 (CONDITIONAL_JUMP)  ; LAB_00476990
    JMP 0x00476ef5                      ; 00476fc5
        ;   XREF to: 00476ef5 (UNCONDITIONAL_JUMP)  ; LAB_00476ef5
    MOV ESI,dword ptr [ESP + 0x174]     ; 00476fca
        ;   Label: LAB_00476fca
    INC ESI                             ; 00476fd1
    MOV EDX,dword ptr [EBX + 0x60]      ; 00476fd2
    MOV dword ptr [ESP + 0x174],ESI     ; 00476fd5
    CMP ESI,EDX                         ; 00476fdc
    JG 0x00476f0b                       ; 00476fde
        ;   XREF to: 00476f0b (CONDITIONAL_JUMP)  ; LAB_00476f0b
    MOV ESI,dword ptr [ESP + 0x7c]      ; 00476fe4
        ;   Label: LAB_00476fe4
    CMP ESI,dword ptr [EBX + 0x64]      ; 00476fe8
    JG 0x00477010                       ; 00476feb
        ;   XREF to: 00477010 (CONDITIONAL_JUMP)  ; LAB_00477010
    MOV ECX,dword ptr [ESP + 0x108]     ; 00476fed
        ;   Label: LAB_00476fed
    PUSH ECX                            ; 00476ff4
    PUSH EDI                            ; 00476ff5
    PUSH ESI                            ; 00476ff6
    MOV EAX,dword ptr [ESP + 0x180]     ; 00476ff7
    PUSH EAX                            ; 00476ffe
    PUSH EBX                            ; 00476fff
    INC ESI                             ; 00477000
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720 ; 00477001
        ;   XREF to: 00475720 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x64]      ; 00477006
    ADD ESP,0x14                        ; 00477009
    CMP ESI,EDX                         ; 0047700c
    JLE 0x00476fed                      ; 0047700e
        ;   XREF to: 00476fed (CONDITIONAL_JUMP)  ; LAB_00476fed
    MOV ESI,dword ptr [ESP + 0x120]     ; 00477010
        ;   Label: LAB_00477010
    CMP ESI,dword ptr [EBX + 0x58]      ; 00477017
    JL 0x00476fca                       ; 0047701a
        ;   XREF to: 00476fca (CONDITIONAL_JUMP)  ; LAB_00476fca
        ;   Label: LAB_0047701a
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0047701c
    PUSH EAX                            ; 00477023
    PUSH EDI                            ; 00477024
    PUSH ESI                            ; 00477025
    MOV EDX,dword ptr [ESP + 0x180]     ; 00477026
    PUSH EDX                            ; 0047702d
    PUSH EBX                            ; 0047702e
    DEC ESI                             ; 0047702f
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720 ; 00477030
        ;   XREF to: 00475720 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x58]      ; 00477035
    ADD ESP,0x14                        ; 00477038
    CMP ESI,ECX                         ; 0047703b
    JMP 0x0047701a                      ; 0047703d
        ;   XREF to: 0047701a (UNCONDITIONAL_JUMP)  ; LAB_0047701a
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0047703f
        ;   Label: LAB_0047703f
    MOV dword ptr [ESP + 0x108],EAX     ; 00477046
    MOV dword ptr [ESP + 0x10c],EAX     ; 0047704d
    JMP 0x00476fe4                      ; 00477054
        ;   XREF to: 00476fe4 (UNCONDITIONAL_JUMP)  ; LAB_00476fe4

