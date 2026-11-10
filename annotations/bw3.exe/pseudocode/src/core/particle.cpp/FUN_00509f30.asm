; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_particle_cpp_FUN_00509f30(float *param_1)
;
; Local Variables:
; undefined8       Stack[-0x130]:8  local_130
; undefined4       Stack[-0x128]:4  local_128
; undefined        Stack[-0x124]:1  local_124
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined        Stack[-0xe8]:1  local_e8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined        Stack[-0xac]:1  local_ac
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
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[7]:
;   core_fire.cpp_CFireball_process_FUN_00499350 at 00499371
;   core_fire.cpp_CGlassParticle_process_FUN_0049ac10 at 0049ac4d
;   core_fire.cpp_CSpark_process_FUN_00497eb0 at 00497f08
;   core_fire.cpp_FUN_004988b0 at 0049890d
;   core_fire.cpp_FUN_0049a010 at 0049a01e
;   core_fire.cpp_FUN_0049a1c0 at 0049a1cf
;   core_fire.cpp_FUN_004a0af0 at 004a0b0c
;
; Referenced Globals:
;   undefined4 DAT_005cb65d
;   undefined4 DAT_005cb661
;   undefined4 DAT_005cb665
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 g_CGameInstance.delta_time_float
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_testVoxelAtCoords_FUN_00477bc0
;   core_dtrace.cpp_FUN_00473cd0
;   core_dtrace.cpp_FUN_00477ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00509f30
        ;   Label: core_particle.cpp_FUN_00509f30
    PUSH ESI                            ; 00509f31
    PUSH EDI                            ; 00509f32
    PUSH EBP                            ; 00509f33
    MOV EBP,ESP                         ; 00509f34
    SUB ESP,0x11c                       ; 00509f36
    AND ESP,0xfffffff8                  ; 00509f3c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00509f3f
    FLD float ptr [EBX + 0x24]          ; 00509f42
    FLDZ                                ; 00509f45
    FCOMPP                              ; 00509f47
    FNSTSW AX                           ; 00509f49
    SAHF                                ; 00509f4b
    JNC 0x0050a240                      ; 00509f4c
        ;   XREF to: 0050a240 (CONDITIONAL_JUMP)  ; LAB_0050a240
    LEA EAX,[EBX + 0x2c]                ; 00509f52
    CMP EAX,EBX                         ; 00509f55
    JZ 0x00509f69                       ; 00509f57
        ;   XREF to: 00509f69 (CONDITIONAL_JUMP)  ; LAB_00509f69
    MOV EDX,dword ptr [EBX]             ; 00509f59
    MOV dword ptr [EAX],EDX             ; 00509f5b
    MOV EDX,dword ptr [EBX + 0x4]       ; 00509f5d
    MOV dword ptr [EAX + 0x4],EDX       ; 00509f60
    MOV EDX,dword ptr [EBX + 0x8]       ; 00509f63
    MOV dword ptr [EAX + 0x8],EDX       ; 00509f66
    MOV EAX,dword ptr [EBX + 0x28]      ; 00509f69
        ;   Label: LAB_00509f69
    MOV dword ptr [EBX + 0x38],EAX      ; 00509f6c
    MOV EAX,[0x005fe9dc]                ; 00509f6f | g_CGamePtr
    MOV EAX,dword ptr [EAX + 0x314]     ; 00509f74 | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP + 0x108],EAX     ; 00509f7a
    MOV dword ptr [ESP + 0x114],EAX     ; 00509f81
    LEA EAX,[EBX + 0x18]                ; 00509f88
    FLD float ptr [EAX]                 ; 00509f8b
    FMUL float ptr [ESP + 0x108]        ; 00509f8d
    FLD float ptr [EAX + 0x4]           ; 00509f94
    FMUL float ptr [ESP + 0x108]        ; 00509f97
    FLD float ptr [EAX + 0x8]           ; 00509f9e
    FMUL float ptr [ESP + 0x108]        ; 00509fa1
    LEA EDI,[ESP + 0x30]                ; 00509fa8
    LEA ESI,[ESP + 0xfc]                ; 00509fac
    LEA EAX,[EBX + 0xc]                 ; 00509fb3
    FXCH ST2                            ; 00509fb6
    FSTP float ptr [ESP + 0xfc]         ; 00509fb8
    FSTP float ptr [ESP + 0x100]        ; 00509fbf
    FSTP float ptr [ESP + 0x104]        ; 00509fc6
    MOVSD ES:EDI,ESI                    ; 00509fcd
    MOVSD ES:EDI,ESI                    ; 00509fce
    MOVSD ES:EDI,ESI                    ; 00509fcf
    FLD float ptr [EAX]                 ; 00509fd0
    FADD float ptr [ESP + 0x30]         ; 00509fd2
    FST float ptr [EAX]                 ; 00509fd6
    FMUL float ptr [ESP + 0x108]        ; 00509fd8
    FLD float ptr [EAX + 0x8]           ; 00509fdf
    FLD float ptr [EAX + 0x4]           ; 00509fe2
    FADD float ptr [ESP + 0x34]         ; 00509fe5
    FXCH                                ; 00509fe9
    FADD float ptr [ESP + 0x38]         ; 00509feb
    FXCH                                ; 00509fef
    FST float ptr [EAX + 0x4]           ; 00509ff1
    FMUL float ptr [ESP + 0x108]        ; 00509ff4
    FXCH                                ; 00509ffb
    FST float ptr [EAX + 0x8]           ; 00509ffd
    FMUL float ptr [ESP + 0x108]        ; 0050a000
    PUSH EBX                            ; 0050a007
    LEA EDI,[ESP + 0xa0]                ; 0050a008
    LEA ESI,[ESP + 0x28]                ; 0050a00f
    FXCH ST2                            ; 0050a013
    FSTP float ptr [ESP + 0x28]         ; 0050a015
    FSTP float ptr [ESP + 0x2c]         ; 0050a019
    FSTP float ptr [ESP + 0x30]         ; 0050a01d
    MOVSD ES:EDI,ESI                    ; 0050a021
    MOVSD ES:EDI,ESI                    ; 0050a022
    MOVSD ES:EDI,ESI                    ; 0050a023
    PUSH 0x203b37c                      ; 0050a024 | g_CDemonRaytraceInstance
    FLD float ptr [EBX]                 ; 0050a029
    FLD float ptr [EBX + 0x4]           ; 0050a02b
    FLD float ptr [EBX + 0x8]           ; 0050a02e
    LEA ESI,[ESP + 0x50]                ; 0050a031
    FXCH ST2                            ; 0050a035
    FADD float ptr [ESP + 0xa4]         ; 0050a037
    FXCH                                ; 0050a03e
    FADD float ptr [ESP + 0xa8]         ; 0050a040
    FXCH ST2                            ; 0050a047
    FADD float ptr [ESP + 0xac]         ; 0050a049
    FXCH                                ; 0050a050
    FSTP float ptr [EBX]                ; 0050a052
    FXCH                                ; 0050a054
    FSTP float ptr [EBX + 0x4]          ; 0050a056
    FSTP float ptr [EBX + 0x8]          ; 0050a059
    CALL core_dtrace.cpp_FUN_00477ac0   ; 0050a05c
        ;   XREF to: 00477ac0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_00477ac0()
    ADD ESP,0x8                         ; 0050a061
    LEA EAX,[ESP + 0xc]                 ; 0050a064
    PUSH EAX                            ; 0050a068
    LEA EDI,[ESP + 0x10]                ; 0050a069
    LEA ESI,[ESP + 0x4c]                ; 0050a06d
    PUSH 0x203b37c                      ; 0050a071 | g_CDemonRaytraceInstance
    MOVSD ES:EDI,ESI                    ; 0050a076
    MOVSD ES:EDI,ESI                    ; 0050a077
    MOVSD ES:EDI,ESI                    ; 0050a078
    CALL core_dtrace.cpp_CDemonRaytrace_testVoxelAtCoords_FUN_00477bc0 ; 0050a079
        ;   XREF to: 00477bc0 (UNCONDITIONAL_CALL)  ; int core_dtrace.cpp_CDemonRaytrace_testVoxelAtCoords_FUN_00477bc0(CDemonRaytrace * this_ptr, CVector3i * voxel_coords)
    ADD ESP,0x8                         ; 0050a07e
    MOV dword ptr [EBX + 0x28],EAX      ; 0050a081
    TEST EAX,EAX                        ; 0050a084
    JZ 0x0050a247                       ; 0050a086
        ;   XREF to: 0050a247 (CONDITIONAL_JUMP)  ; LAB_0050a247
    PUSH 0x0                            ; 0050a08c
        ;   Label: LAB_0050a08c
    LEA EAX,[ESP + 0x88]                ; 0050a08e
    PUSH EAX                            ; 0050a095
    PUSH EBX                            ; 0050a096
    LEA EAX,[EBX + 0x2c]                ; 0050a097
    PUSH EAX                            ; 0050a09a
    PUSH 0x203b37c                      ; 0050a09b | g_CDemonRaytraceInstance
    MOV dword ptr [ESP + 0x124],EAX     ; 0050a0a0
    CALL core_dtrace.cpp_FUN_00473cd0   ; 0050a0a7
        ;   XREF to: 00473cd0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_00473cd0()
    MOV dword ptr [ESP + 0x12c],EAX     ; 0050a0ac
    FLD float ptr [ESP + 0x12c]         ; 0050a0b3
    ADD ESP,0x14                        ; 0050a0ba
    FLDZ                                ; 0050a0bd
    FXCH                                ; 0050a0bf
    FST float ptr [ESP + 0x8]           ; 0050a0c1
    FSTP double ptr [ESP]               ; 0050a0c5
    FCOMP double ptr [ESP]              ; 0050a0c8
    FNSTSW AX                           ; 0050a0cb
    SAHF                                ; 0050a0cd
    JA 0x0050a226                       ; 0050a0ce
        ;   XREF to: 0050a226 (CONDITIONAL_JUMP)  ; LAB_0050a226
    FLD1                                ; 0050a0d4
    FCOMP double ptr [ESP]              ; 0050a0d6
    FNSTSW AX                           ; 0050a0d9
    SAHF                                ; 0050a0db
    JBE 0x0050a226                      ; 0050a0dc
        ;   XREF to: 0050a226 (CONDITIONAL_JUMP)  ; LAB_0050a226
    FLD float ptr [EBX]                 ; 0050a0e2
    FLD float ptr [EBX + 0x4]           ; 0050a0e4
    FLD float ptr [EBX + 0x8]           ; 0050a0e7
    MOV EAX,dword ptr [ESP + 0x110]     ; 0050a0ea
    LEA EDI,[ESP + 0xe4]                ; 0050a0f1
    LEA ESI,[ESP + 0x78]                ; 0050a0f8
    FXCH ST2                            ; 0050a0fc
    FSUB float ptr [EAX]                ; 0050a0fe
    FXCH                                ; 0050a100
    FSUB float ptr [EAX + 0x4]          ; 0050a102
    FXCH ST2                            ; 0050a105
    FSUB float ptr [EAX + 0x8]          ; 0050a107
    FXCH                                ; 0050a10a
    FSTP float ptr [ESP + 0x78]         ; 0050a10c
    FXCH                                ; 0050a110
    FSTP float ptr [ESP + 0x7c]         ; 0050a112
    FSTP float ptr [ESP + 0x80]         ; 0050a116
    MOVSD ES:EDI,ESI                    ; 0050a11d
    MOVSD ES:EDI,ESI                    ; 0050a11e
    MOVSD ES:EDI,ESI                    ; 0050a11f
    FLD float ptr [ESP + 0x8]           ; 0050a120
    FLD float ptr [ESP + 0xe4]          ; 0050a124
    FMUL ST1                            ; 0050a12b
    FLD float ptr [ESP + 0xe8]          ; 0050a12d
    FMUL ST2                            ; 0050a134
    FLD float ptr [ESP + 0xec]          ; 0050a136
    FMULP ST3                           ; 0050a13d
    LEA EDI,[ESP + 0x6c]                ; 0050a13f
    LEA ESI,[ESP + 0x90]                ; 0050a143
    FXCH                                ; 0050a14a
    FSTP float ptr [ESP + 0x90]         ; 0050a14c
    FSTP float ptr [ESP + 0x94]         ; 0050a153
    FSTP float ptr [ESP + 0x98]         ; 0050a15a
    MOVSD ES:EDI,ESI                    ; 0050a161
    MOVSD ES:EDI,ESI                    ; 0050a162
    MOVSD ES:EDI,ESI                    ; 0050a163
    FLD float ptr [0x005cb65d]          ; 0050a164 | DAT_005cb65d
    FLD float ptr [ESP + 0x6c]          ; 0050a16a
    FMUL ST1                            ; 0050a16e
    FLD float ptr [ESP + 0x70]          ; 0050a170
    FMUL ST2                            ; 0050a174
    FLD float ptr [ESP + 0x74]          ; 0050a176
    FMULP ST3                           ; 0050a17a
    LEA EDI,[ESP + 0x3c]                ; 0050a17c
    LEA ESI,[ESP + 0xb4]                ; 0050a180
    FXCH                                ; 0050a187
    FSTP float ptr [ESP + 0xb4]         ; 0050a189
    FSTP float ptr [ESP + 0xb8]         ; 0050a190
    FSTP float ptr [ESP + 0xbc]         ; 0050a197
    MOVSD ES:EDI,ESI                    ; 0050a19e
    MOVSD ES:EDI,ESI                    ; 0050a19f
    MOVSD ES:EDI,ESI                    ; 0050a1a0
    FLD float ptr [EAX + 0x4]           ; 0050a1a1
    FLD float ptr [EAX + 0x8]           ; 0050a1a4
    FLD float ptr [EAX]                 ; 0050a1a7
    LEA EDI,[ESP + 0xa8]                ; 0050a1a9
    LEA ESI,[ESP + 0xd8]                ; 0050a1b0
    LEA EAX,[ESP + 0xa8]                ; 0050a1b7
    FADD float ptr [ESP + 0x3c]         ; 0050a1be
    FXCH ST2                            ; 0050a1c2
    FADD float ptr [ESP + 0x40]         ; 0050a1c4
    FXCH                                ; 0050a1c8
    FADD float ptr [ESP + 0x44]         ; 0050a1ca
    FXCH ST2                            ; 0050a1ce
    FSTP float ptr [ESP + 0xd8]         ; 0050a1d0
    FSTP float ptr [ESP + 0xdc]         ; 0050a1d7
    FSTP float ptr [ESP + 0xe0]         ; 0050a1de
    MOVSD ES:EDI,ESI                    ; 0050a1e5
    MOVSD ES:EDI,ESI                    ; 0050a1e6
    MOVSD ES:EDI,ESI                    ; 0050a1e7
    CMP EBX,EAX                         ; 0050a1e8
    JZ 0x0050a209                       ; 0050a1ea
        ;   XREF to: 0050a209 (CONDITIONAL_JUMP)  ; LAB_0050a209
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0050a1ec
    MOV dword ptr [EBX],EAX             ; 0050a1f3
    MOV EAX,dword ptr [ESP + 0xac]      ; 0050a1f5
    MOV dword ptr [EBX + 0x4],EAX       ; 0050a1fc
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0050a1ff
    MOV dword ptr [EBX + 0x8],EAX       ; 0050a206
    LEA EDX,[ESP + 0x84]                ; 0050a209
        ;   Label: LAB_0050a209
    PUSH EDX                            ; 0050a210
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0050a211
    PUSH EBX                            ; 0050a214
    CALL dword ptr [EAX + 0xc]          ; 0050a215
    ADD ESP,0x8                         ; 0050a218
    TEST EAX,EAX                        ; 0050a21b
    JZ 0x0050a253                       ; 0050a21d
        ;   XREF to: 0050a253 (CONDITIONAL_JUMP)  ; LAB_0050a253
    MOV dword ptr [EBX + 0x24],0x0      ; 0050a21f
    FLD float ptr [EBX + 0x24]          ; 0050a226
        ;   Label: LAB_0050a226
    FSUB float ptr [ESP + 0x114]        ; 0050a229
    FST float ptr [EBX + 0x24]          ; 0050a230
    FLDZ                                ; 0050a233
    FCOMPP                              ; 0050a235
    FNSTSW AX                           ; 0050a237
    SAHF                                ; 0050a239
    JA 0x0050a396                       ; 0050a23a
        ;   XREF to: 0050a396 (CONDITIONAL_JUMP)  ; LAB_0050a396
    MOV ESP,EBP                         ; 0050a240
        ;   Label: LAB_0050a240
    POP EBP                             ; 0050a242
    POP EDI                             ; 0050a243
    POP ESI                             ; 0050a244
    POP EBX                             ; 0050a245
    RET                                 ; 0050a246
    CMP dword ptr [EBX + 0x38],0x0      ; 0050a247
        ;   Label: LAB_0050a247
    JNZ 0x0050a08c                      ; 0050a24b
        ;   XREF to: 0050a08c (CONDITIONAL_JUMP)  ; LAB_0050a08c
    JMP 0x0050a226                      ; 0050a251
        ;   XREF to: 0050a226 (UNCONDITIONAL_JUMP)  ; LAB_0050a226
    LEA EDX,[EBX + 0xc]                 ; 0050a253
        ;   Label: LAB_0050a253
    FLD float ptr [ESP + 0x88]          ; 0050a256
    FMUL float ptr [EDX + 0x4]          ; 0050a25d
    FLD float ptr [ESP + 0x84]          ; 0050a260
    FMUL float ptr [EDX]                ; 0050a267
    FADDP                               ; 0050a269
    FLD float ptr [ESP + 0x8c]          ; 0050a26b
    FMUL float ptr [EDX + 0x8]          ; 0050a272
    FADDP                               ; 0050a275
    FMUL float ptr [0x005cb661]         ; 0050a277 | DAT_005cb661
    FLD float ptr [ESP + 0x84]          ; 0050a27d
    FXCH                                ; 0050a284
    FSTP float ptr [ESP + 0x10c]        ; 0050a286
    FMUL float ptr [ESP + 0x10c]        ; 0050a28d
    FLD float ptr [ESP + 0x88]          ; 0050a294
    FMUL float ptr [ESP + 0x10c]        ; 0050a29b
    FLD float ptr [ESP + 0x8c]          ; 0050a2a2
    FMUL float ptr [ESP + 0x10c]        ; 0050a2a9
    LEA EDI,[ESP + 0x54]                ; 0050a2b0
    LEA ESI,[ESP + 0xcc]                ; 0050a2b4
    FXCH ST2                            ; 0050a2bb
    FSTP float ptr [ESP + 0xcc]         ; 0050a2bd
    FSTP float ptr [ESP + 0xd0]         ; 0050a2c4
    FSTP float ptr [ESP + 0xd4]         ; 0050a2cb
    MOVSD ES:EDI,ESI                    ; 0050a2d2
    MOVSD ES:EDI,ESI                    ; 0050a2d3
    MOVSD ES:EDI,ESI                    ; 0050a2d4
    LEA EAX,[ESP + 0xc0]                ; 0050a2d5
    FLD float ptr [ESP + 0x54]          ; 0050a2dc
    FLD float ptr [ESP + 0x58]          ; 0050a2e0
    FLD float ptr [ESP + 0x5c]          ; 0050a2e4
    LEA EDI,[ESP + 0xc0]                ; 0050a2e8
    LEA ESI,[ESP + 0xf0]                ; 0050a2ef
    FXCH ST2                            ; 0050a2f6
    FSUB float ptr [EDX]                ; 0050a2f8
    FXCH                                ; 0050a2fa
    FSUB float ptr [EDX + 0x4]          ; 0050a2fc
    FXCH ST2                            ; 0050a2ff
    FSUB float ptr [EDX + 0x8]          ; 0050a301
    FXCH                                ; 0050a304
    FSTP float ptr [ESP + 0xf0]         ; 0050a306
    FXCH                                ; 0050a30d
    FSTP float ptr [ESP + 0xf4]         ; 0050a30f
    FSTP float ptr [ESP + 0xf8]         ; 0050a316
    MOVSD ES:EDI,ESI                    ; 0050a31d
    MOVSD ES:EDI,ESI                    ; 0050a31e
    MOVSD ES:EDI,ESI                    ; 0050a31f
    CMP EDX,EAX                         ; 0050a320
    JZ 0x0050a341                       ; 0050a322
        ;   XREF to: 0050a341 (CONDITIONAL_JUMP)  ; LAB_0050a341
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0050a324
    MOV dword ptr [EDX],EAX             ; 0050a32b
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0050a32d
    MOV dword ptr [EDX + 0x4],EAX       ; 0050a334
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0050a337
    MOV dword ptr [EDX + 0x8],EAX       ; 0050a33e
    LEA EDX,[EBX + 0xc]                 ; 0050a341
        ;   Label: LAB_0050a341
    FLD float ptr [0x005cb665]          ; 0050a344 | DAT_005cb665
    FLD float ptr [EDX]                 ; 0050a34a
    FMUL ST1                            ; 0050a34c
    FLD float ptr [EDX + 0x4]           ; 0050a34e
    FMUL ST2                            ; 0050a351
    FLD float ptr [EDX + 0x8]           ; 0050a353
    FMULP ST3                           ; 0050a356
    LEA EDI,[ESP + 0x60]                ; 0050a358
    LEA ESI,[ESP + 0x18]                ; 0050a35c
    LEA EAX,[ESP + 0x60]                ; 0050a360
    FXCH                                ; 0050a364
    FSTP float ptr [ESP + 0x18]         ; 0050a366
    FSTP float ptr [ESP + 0x1c]         ; 0050a36a
    FSTP float ptr [ESP + 0x20]         ; 0050a36e
    MOVSD ES:EDI,ESI                    ; 0050a372
    MOVSD ES:EDI,ESI                    ; 0050a373
    MOVSD ES:EDI,ESI                    ; 0050a374
    CMP EDX,EAX                         ; 0050a375
    JZ 0x0050a226                       ; 0050a377
        ;   XREF to: 0050a226 (CONDITIONAL_JUMP)  ; LAB_0050a226
    MOV EAX,dword ptr [ESP + 0x60]      ; 0050a37d
    MOV dword ptr [EDX],EAX             ; 0050a381
    MOV EAX,dword ptr [ESP + 0x64]      ; 0050a383
    MOV dword ptr [EDX + 0x4],EAX       ; 0050a387
    MOV EAX,dword ptr [ESP + 0x68]      ; 0050a38a
    MOV dword ptr [EDX + 0x8],EAX       ; 0050a38e
    JMP 0x0050a226                      ; 0050a391
        ;   XREF to: 0050a226 (UNCONDITIONAL_JUMP)  ; LAB_0050a226
    MOV dword ptr [EBX + 0x24],0x0      ; 0050a396
        ;   Label: LAB_0050a396
    MOV ESP,EBP                         ; 0050a39d
    POP EBP                             ; 0050a39f
    POP EDI                             ; 0050a3a0
    POP ESI                             ; 0050a3a1
    POP EBX                             ; 0050a3a2
    RET                                 ; 0050a3a3

