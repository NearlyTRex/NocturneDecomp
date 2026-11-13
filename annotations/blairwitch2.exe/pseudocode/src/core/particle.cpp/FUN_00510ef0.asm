; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_particle_cpp_FUN_00510ef0(CVector3f *param_1)
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
;   core_fire.cpp_CFireball_process_FUN_00495960 at 00495981
;   core_fire.cpp_CFirefly_process_FUN_00494ec0 at 00494f1d
;   core_fire.cpp_CGlassParticle_process_FUN_00497250 at 00497281
;   core_fire.cpp_CLeaf_process_FUN_004967d0 at 004967df
;   core_fire.cpp_CRock_process_FUN_00496620 at 0049662e
;   core_fire.cpp_CShell_process_FUN_0049b7f0 at 0049b80c
;   core_fire.cpp_CSpark_process_FUN_004945b0 at 00494608
;
; Referenced Globals:
;   undefined4 DAT_005e159a
;   undefined4 DAT_005e159e
;   undefined4 DAT_005e15a2
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 g_CGameInstance.delta_time_float
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_testVoxelAtCoords_FUN_00476b50
;   core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00476a50
;   core_dtrace.cpp_FUN_00472c60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510ef0
        ;   Label: core_particle.cpp_FUN_00510ef0
    PUSH ESI                            ; 00510ef1
    PUSH EDI                            ; 00510ef2
    PUSH EBP                            ; 00510ef3
    MOV EBP,ESP                         ; 00510ef4
    SUB ESP,0x11c                       ; 00510ef6
    AND ESP,0xfffffff8                  ; 00510efc
    MOV EBX,dword ptr [EBP + 0x14]      ; 00510eff
    FLD float ptr [EBX + 0x24]          ; 00510f02
    FLDZ                                ; 00510f05
    FCOMPP                              ; 00510f07
    FNSTSW AX                           ; 00510f09
    SAHF                                ; 00510f0b
    JNC 0x00511200                      ; 00510f0c
        ;   XREF to: 00511200 (CONDITIONAL_JUMP)  ; LAB_00511200
    LEA EAX,[EBX + 0x2c]                ; 00510f12
    CMP EAX,EBX                         ; 00510f15
    JZ 0x00510f29                       ; 00510f17
        ;   XREF to: 00510f29 (CONDITIONAL_JUMP)  ; LAB_00510f29
    MOV EDX,dword ptr [EBX]             ; 00510f19
    MOV dword ptr [EAX],EDX             ; 00510f1b
    MOV EDX,dword ptr [EBX + 0x4]       ; 00510f1d
    MOV dword ptr [EAX + 0x4],EDX       ; 00510f20
    MOV EDX,dword ptr [EBX + 0x8]       ; 00510f23
    MOV dword ptr [EAX + 0x8],EDX       ; 00510f26
    MOV EAX,dword ptr [EBX + 0x28]      ; 00510f29
        ;   Label: LAB_00510f29
    MOV dword ptr [EBX + 0x38],EAX      ; 00510f2c
    MOV EAX,[0x00616494]                ; 00510f2f | g_CGamePtr
    MOV EAX,dword ptr [EAX + 0x284]     ; 00510f34 | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP + 0x108],EAX     ; 00510f3a
    MOV dword ptr [ESP + 0x114],EAX     ; 00510f41
    LEA EAX,[EBX + 0x18]                ; 00510f48
    FLD float ptr [EAX]                 ; 00510f4b
    FMUL float ptr [ESP + 0x108]        ; 00510f4d
    FLD float ptr [EAX + 0x4]           ; 00510f54
    FMUL float ptr [ESP + 0x108]        ; 00510f57
    FLD float ptr [EAX + 0x8]           ; 00510f5e
    FMUL float ptr [ESP + 0x108]        ; 00510f61
    LEA EDI,[ESP + 0x30]                ; 00510f68
    LEA ESI,[ESP + 0xfc]                ; 00510f6c
    LEA EAX,[EBX + 0xc]                 ; 00510f73
    FXCH ST2                            ; 00510f76
    FSTP float ptr [ESP + 0xfc]         ; 00510f78
    FSTP float ptr [ESP + 0x100]        ; 00510f7f
    FSTP float ptr [ESP + 0x104]        ; 00510f86
    MOVSD ES:EDI,ESI                    ; 00510f8d
    MOVSD ES:EDI,ESI                    ; 00510f8e
    MOVSD ES:EDI,ESI                    ; 00510f8f
    FLD float ptr [EAX]                 ; 00510f90
    FADD float ptr [ESP + 0x30]         ; 00510f92
    FST float ptr [EAX]                 ; 00510f96
    FMUL float ptr [ESP + 0x108]        ; 00510f98
    FLD float ptr [EAX + 0x8]           ; 00510f9f
    FLD float ptr [EAX + 0x4]           ; 00510fa2
    FADD float ptr [ESP + 0x34]         ; 00510fa5
    FXCH                                ; 00510fa9
    FADD float ptr [ESP + 0x38]         ; 00510fab
    FXCH                                ; 00510faf
    FST float ptr [EAX + 0x4]           ; 00510fb1
    FMUL float ptr [ESP + 0x108]        ; 00510fb4
    FXCH                                ; 00510fbb
    FST float ptr [EAX + 0x8]           ; 00510fbd
    FMUL float ptr [ESP + 0x108]        ; 00510fc0
    PUSH EBX                            ; 00510fc7
    LEA EDI,[ESP + 0xa0]                ; 00510fc8
    LEA ESI,[ESP + 0x28]                ; 00510fcf
    FXCH ST2                            ; 00510fd3
    FSTP float ptr [ESP + 0x28]         ; 00510fd5
    FSTP float ptr [ESP + 0x2c]         ; 00510fd9
    FSTP float ptr [ESP + 0x30]         ; 00510fdd
    MOVSD ES:EDI,ESI                    ; 00510fe1
    MOVSD ES:EDI,ESI                    ; 00510fe2
    MOVSD ES:EDI,ESI                    ; 00510fe3
    PUSH 0x1fc9c68                      ; 00510fe4 | g_CDemonRaytraceInstance
    FLD float ptr [EBX]                 ; 00510fe9
    FLD float ptr [EBX + 0x4]           ; 00510feb
    FLD float ptr [EBX + 0x8]           ; 00510fee
    LEA ESI,[ESP + 0x50]                ; 00510ff1
    FXCH ST2                            ; 00510ff5
    FADD float ptr [ESP + 0xa4]         ; 00510ff7
    FXCH                                ; 00510ffe
    FADD float ptr [ESP + 0xa8]         ; 00511000
    FXCH ST2                            ; 00511007
    FADD float ptr [ESP + 0xac]         ; 00511009
    FXCH                                ; 00511010
    FSTP float ptr [EBX]                ; 00511012
    FXCH                                ; 00511014
    FSTP float ptr [EBX + 0x4]          ; 00511016
    FSTP float ptr [EBX + 0x8]          ; 00511019
    CALL core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00476a50 ; 0051101c
        ;   XREF to: 00476a50 (UNCONDITIONAL_CALL)  ; CVector3i * core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00476a50(CDemonRaytrace * this_ptr, CVector3f * world_position, CVector3i * output_voxel_coords)
    ADD ESP,0x8                         ; 00511021
    LEA EAX,[ESP + 0xc]                 ; 00511024
    PUSH EAX                            ; 00511028
    LEA EDI,[ESP + 0x10]                ; 00511029
    LEA ESI,[ESP + 0x4c]                ; 0051102d
    PUSH 0x1fc9c68                      ; 00511031 | g_CDemonRaytraceInstance
    MOVSD ES:EDI,ESI                    ; 00511036
    MOVSD ES:EDI,ESI                    ; 00511037
    MOVSD ES:EDI,ESI                    ; 00511038
    CALL core_dtrace.cpp_CDemonRaytrace_testVoxelAtCoords_FUN_00476b50 ; 00511039
        ;   XREF to: 00476b50 (UNCONDITIONAL_CALL)  ; int core_dtrace.cpp_CDemonRaytrace_testVoxelAtCoords_FUN_00476b50(CDemonRaytrace * this_ptr, CVector3i * voxel_coords)
    ADD ESP,0x8                         ; 0051103e
    MOV dword ptr [EBX + 0x28],EAX      ; 00511041
    TEST EAX,EAX                        ; 00511044
    JZ 0x00511207                       ; 00511046
        ;   XREF to: 00511207 (CONDITIONAL_JUMP)  ; LAB_00511207
    PUSH 0x0                            ; 0051104c
        ;   Label: LAB_0051104c
    LEA EAX,[ESP + 0x88]                ; 0051104e
    PUSH EAX                            ; 00511055
    PUSH EBX                            ; 00511056
    LEA EAX,[EBX + 0x2c]                ; 00511057
    PUSH EAX                            ; 0051105a
    PUSH 0x1fc9c68                      ; 0051105b | g_CDemonRaytraceInstance
    MOV dword ptr [ESP + 0x124],EAX     ; 00511060
    CALL core_dtrace.cpp_FUN_00472c60   ; 00511067
        ;   XREF to: 00472c60 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_00472c60()
    MOV dword ptr [ESP + 0x12c],EAX     ; 0051106c
    FLD float ptr [ESP + 0x12c]         ; 00511073
    ADD ESP,0x14                        ; 0051107a
    FLDZ                                ; 0051107d
    FXCH                                ; 0051107f
    FST float ptr [ESP + 0x8]           ; 00511081
    FSTP double ptr [ESP]               ; 00511085
    FCOMP double ptr [ESP]              ; 00511088
    FNSTSW AX                           ; 0051108b
    SAHF                                ; 0051108d
    JA 0x005111e6                       ; 0051108e
        ;   XREF to: 005111e6 (CONDITIONAL_JUMP)  ; LAB_005111e6
    FLD1                                ; 00511094
    FCOMP double ptr [ESP]              ; 00511096
    FNSTSW AX                           ; 00511099
    SAHF                                ; 0051109b
    JBE 0x005111e6                      ; 0051109c
        ;   XREF to: 005111e6 (CONDITIONAL_JUMP)  ; LAB_005111e6
    FLD float ptr [EBX]                 ; 005110a2
    FLD float ptr [EBX + 0x4]           ; 005110a4
    FLD float ptr [EBX + 0x8]           ; 005110a7
    MOV EAX,dword ptr [ESP + 0x110]     ; 005110aa
    LEA EDI,[ESP + 0xe4]                ; 005110b1
    LEA ESI,[ESP + 0x78]                ; 005110b8
    FXCH ST2                            ; 005110bc
    FSUB float ptr [EAX]                ; 005110be
    FXCH                                ; 005110c0
    FSUB float ptr [EAX + 0x4]          ; 005110c2
    FXCH ST2                            ; 005110c5
    FSUB float ptr [EAX + 0x8]          ; 005110c7
    FXCH                                ; 005110ca
    FSTP float ptr [ESP + 0x78]         ; 005110cc
    FXCH                                ; 005110d0
    FSTP float ptr [ESP + 0x7c]         ; 005110d2
    FSTP float ptr [ESP + 0x80]         ; 005110d6
    MOVSD ES:EDI,ESI                    ; 005110dd
    MOVSD ES:EDI,ESI                    ; 005110de
    MOVSD ES:EDI,ESI                    ; 005110df
    FLD float ptr [ESP + 0x8]           ; 005110e0
    FLD float ptr [ESP + 0xe4]          ; 005110e4
    FMUL ST1                            ; 005110eb
    FLD float ptr [ESP + 0xe8]          ; 005110ed
    FMUL ST2                            ; 005110f4
    FLD float ptr [ESP + 0xec]          ; 005110f6
    FMULP ST3                           ; 005110fd
    LEA EDI,[ESP + 0x6c]                ; 005110ff
    LEA ESI,[ESP + 0x90]                ; 00511103
    FXCH                                ; 0051110a
    FSTP float ptr [ESP + 0x90]         ; 0051110c
    FSTP float ptr [ESP + 0x94]         ; 00511113
    FSTP float ptr [ESP + 0x98]         ; 0051111a
    MOVSD ES:EDI,ESI                    ; 00511121
    MOVSD ES:EDI,ESI                    ; 00511122
    MOVSD ES:EDI,ESI                    ; 00511123
    FLD float ptr [0x005e159a]          ; 00511124 | DAT_005e159a
    FLD float ptr [ESP + 0x6c]          ; 0051112a
    FMUL ST1                            ; 0051112e
    FLD float ptr [ESP + 0x70]          ; 00511130
    FMUL ST2                            ; 00511134
    FLD float ptr [ESP + 0x74]          ; 00511136
    FMULP ST3                           ; 0051113a
    LEA EDI,[ESP + 0x3c]                ; 0051113c
    LEA ESI,[ESP + 0xb4]                ; 00511140
    FXCH                                ; 00511147
    FSTP float ptr [ESP + 0xb4]         ; 00511149
    FSTP float ptr [ESP + 0xb8]         ; 00511150
    FSTP float ptr [ESP + 0xbc]         ; 00511157
    MOVSD ES:EDI,ESI                    ; 0051115e
    MOVSD ES:EDI,ESI                    ; 0051115f
    MOVSD ES:EDI,ESI                    ; 00511160
    FLD float ptr [EAX + 0x4]           ; 00511161
    FLD float ptr [EAX + 0x8]           ; 00511164
    FLD float ptr [EAX]                 ; 00511167
    LEA EDI,[ESP + 0xa8]                ; 00511169
    LEA ESI,[ESP + 0xd8]                ; 00511170
    LEA EAX,[ESP + 0xa8]                ; 00511177
    FADD float ptr [ESP + 0x3c]         ; 0051117e
    FXCH ST2                            ; 00511182
    FADD float ptr [ESP + 0x40]         ; 00511184
    FXCH                                ; 00511188
    FADD float ptr [ESP + 0x44]         ; 0051118a
    FXCH ST2                            ; 0051118e
    FSTP float ptr [ESP + 0xd8]         ; 00511190
    FSTP float ptr [ESP + 0xdc]         ; 00511197
    FSTP float ptr [ESP + 0xe0]         ; 0051119e
    MOVSD ES:EDI,ESI                    ; 005111a5
    MOVSD ES:EDI,ESI                    ; 005111a6
    MOVSD ES:EDI,ESI                    ; 005111a7
    CMP EBX,EAX                         ; 005111a8
    JZ 0x005111c9                       ; 005111aa
        ;   XREF to: 005111c9 (CONDITIONAL_JUMP)  ; LAB_005111c9
    MOV EAX,dword ptr [ESP + 0xa8]      ; 005111ac
    MOV dword ptr [EBX],EAX             ; 005111b3
    MOV EAX,dword ptr [ESP + 0xac]      ; 005111b5
    MOV dword ptr [EBX + 0x4],EAX       ; 005111bc
    MOV EAX,dword ptr [ESP + 0xb0]      ; 005111bf
    MOV dword ptr [EBX + 0x8],EAX       ; 005111c6
    LEA EDX,[ESP + 0x84]                ; 005111c9
        ;   Label: LAB_005111c9
    PUSH EDX                            ; 005111d0
    MOV EAX,dword ptr [EBX + 0x3c]      ; 005111d1
    PUSH EBX                            ; 005111d4
    CALL dword ptr [EAX + 0xc]          ; 005111d5
    ADD ESP,0x8                         ; 005111d8
    TEST EAX,EAX                        ; 005111db
    JZ 0x00511213                       ; 005111dd
        ;   XREF to: 00511213 (CONDITIONAL_JUMP)  ; LAB_00511213
    MOV dword ptr [EBX + 0x24],0x0      ; 005111df
    FLD float ptr [EBX + 0x24]          ; 005111e6
        ;   Label: LAB_005111e6
    FSUB float ptr [ESP + 0x114]        ; 005111e9
    FST float ptr [EBX + 0x24]          ; 005111f0
    FLDZ                                ; 005111f3
    FCOMPP                              ; 005111f5
    FNSTSW AX                           ; 005111f7
    SAHF                                ; 005111f9
    JA 0x00511356                       ; 005111fa
        ;   XREF to: 00511356 (CONDITIONAL_JUMP)  ; LAB_00511356
    MOV ESP,EBP                         ; 00511200
        ;   Label: LAB_00511200
    POP EBP                             ; 00511202
    POP EDI                             ; 00511203
    POP ESI                             ; 00511204
    POP EBX                             ; 00511205
    RET                                 ; 00511206
    CMP dword ptr [EBX + 0x38],0x0      ; 00511207
        ;   Label: LAB_00511207
    JNZ 0x0051104c                      ; 0051120b
        ;   XREF to: 0051104c (CONDITIONAL_JUMP)  ; LAB_0051104c
    JMP 0x005111e6                      ; 00511211
        ;   XREF to: 005111e6 (UNCONDITIONAL_JUMP)  ; LAB_005111e6
    LEA EDX,[EBX + 0xc]                 ; 00511213
        ;   Label: LAB_00511213
    FLD float ptr [ESP + 0x88]          ; 00511216
    FMUL float ptr [EDX + 0x4]          ; 0051121d
    FLD float ptr [ESP + 0x84]          ; 00511220
    FMUL float ptr [EDX]                ; 00511227
    FADDP                               ; 00511229
    FLD float ptr [ESP + 0x8c]          ; 0051122b
    FMUL float ptr [EDX + 0x8]          ; 00511232
    FADDP                               ; 00511235
    FMUL float ptr [0x005e159e]         ; 00511237 | DAT_005e159e
    FLD float ptr [ESP + 0x84]          ; 0051123d
    FXCH                                ; 00511244
    FSTP float ptr [ESP + 0x10c]        ; 00511246
    FMUL float ptr [ESP + 0x10c]        ; 0051124d
    FLD float ptr [ESP + 0x88]          ; 00511254
    FMUL float ptr [ESP + 0x10c]        ; 0051125b
    FLD float ptr [ESP + 0x8c]          ; 00511262
    FMUL float ptr [ESP + 0x10c]        ; 00511269
    LEA EDI,[ESP + 0x54]                ; 00511270
    LEA ESI,[ESP + 0xcc]                ; 00511274
    FXCH ST2                            ; 0051127b
    FSTP float ptr [ESP + 0xcc]         ; 0051127d
    FSTP float ptr [ESP + 0xd0]         ; 00511284
    FSTP float ptr [ESP + 0xd4]         ; 0051128b
    MOVSD ES:EDI,ESI                    ; 00511292
    MOVSD ES:EDI,ESI                    ; 00511293
    MOVSD ES:EDI,ESI                    ; 00511294
    LEA EAX,[ESP + 0xc0]                ; 00511295
    FLD float ptr [ESP + 0x54]          ; 0051129c
    FLD float ptr [ESP + 0x58]          ; 005112a0
    FLD float ptr [ESP + 0x5c]          ; 005112a4
    LEA EDI,[ESP + 0xc0]                ; 005112a8
    LEA ESI,[ESP + 0xf0]                ; 005112af
    FXCH ST2                            ; 005112b6
    FSUB float ptr [EDX]                ; 005112b8
    FXCH                                ; 005112ba
    FSUB float ptr [EDX + 0x4]          ; 005112bc
    FXCH ST2                            ; 005112bf
    FSUB float ptr [EDX + 0x8]          ; 005112c1
    FXCH                                ; 005112c4
    FSTP float ptr [ESP + 0xf0]         ; 005112c6
    FXCH                                ; 005112cd
    FSTP float ptr [ESP + 0xf4]         ; 005112cf
    FSTP float ptr [ESP + 0xf8]         ; 005112d6
    MOVSD ES:EDI,ESI                    ; 005112dd
    MOVSD ES:EDI,ESI                    ; 005112de
    MOVSD ES:EDI,ESI                    ; 005112df
    CMP EDX,EAX                         ; 005112e0
    JZ 0x00511301                       ; 005112e2
        ;   XREF to: 00511301 (CONDITIONAL_JUMP)  ; LAB_00511301
    MOV EAX,dword ptr [ESP + 0xc0]      ; 005112e4
    MOV dword ptr [EDX],EAX             ; 005112eb
    MOV EAX,dword ptr [ESP + 0xc4]      ; 005112ed
    MOV dword ptr [EDX + 0x4],EAX       ; 005112f4
    MOV EAX,dword ptr [ESP + 0xc8]      ; 005112f7
    MOV dword ptr [EDX + 0x8],EAX       ; 005112fe
    LEA EDX,[EBX + 0xc]                 ; 00511301
        ;   Label: LAB_00511301
    FLD float ptr [0x005e15a2]          ; 00511304 | DAT_005e15a2
    FLD float ptr [EDX]                 ; 0051130a
    FMUL ST1                            ; 0051130c
    FLD float ptr [EDX + 0x4]           ; 0051130e
    FMUL ST2                            ; 00511311
    FLD float ptr [EDX + 0x8]           ; 00511313
    FMULP ST3                           ; 00511316
    LEA EDI,[ESP + 0x60]                ; 00511318
    LEA ESI,[ESP + 0x18]                ; 0051131c
    LEA EAX,[ESP + 0x60]                ; 00511320
    FXCH                                ; 00511324
    FSTP float ptr [ESP + 0x18]         ; 00511326
    FSTP float ptr [ESP + 0x1c]         ; 0051132a
    FSTP float ptr [ESP + 0x20]         ; 0051132e
    MOVSD ES:EDI,ESI                    ; 00511332
    MOVSD ES:EDI,ESI                    ; 00511333
    MOVSD ES:EDI,ESI                    ; 00511334
    CMP EDX,EAX                         ; 00511335
    JZ 0x005111e6                       ; 00511337
        ;   XREF to: 005111e6 (CONDITIONAL_JUMP)  ; LAB_005111e6
    MOV EAX,dword ptr [ESP + 0x60]      ; 0051133d
    MOV dword ptr [EDX],EAX             ; 00511341
    MOV EAX,dword ptr [ESP + 0x64]      ; 00511343
    MOV dword ptr [EDX + 0x4],EAX       ; 00511347
    MOV EAX,dword ptr [ESP + 0x68]      ; 0051134a
    MOV dword ptr [EDX + 0x8],EAX       ; 0051134e
    JMP 0x005111e6                      ; 00511351
        ;   XREF to: 005111e6 (UNCONDITIONAL_JUMP)  ; LAB_005111e6
    MOV dword ptr [EBX + 0x24],0x0      ; 00511356
        ;   Label: LAB_00511356
    MOV ESP,EBP                         ; 0051135d
    POP EBP                             ; 0051135f
    POP EDI                             ; 00511360
    POP ESI                             ; 00511361
    POP EBX                             ; 00511362
    RET                                 ; 00511363

