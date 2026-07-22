; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_0050ffe0(int param_1,float param_2,float *param_3,float *param_4,float param_5)
;
; Local Variables:
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
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
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[4]:
;   FUN_0050fc90 at 0050fcf6
;   core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00 at 0050fbb4
;   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_0050fa30 at 0050fa77
;   core_setcolid.cpp_FUN_0050f910 at 0050f9de
;
; Called Functions:
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_0040a740
;   core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00
;   core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_005103f0
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050ffe0
        ;   Label: core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_0050ffe0
    PUSH ESI                            ; 0050ffe1
    PUSH EDI                            ; 0050ffe2
    PUSH EBP                            ; 0050ffe3
    MOV EBP,ESP                         ; 0050ffe4
    SUB ESP,0xc0                        ; 0050ffe6
    AND ESP,0xfffffff8                  ; 0050ffec
    MOV EDI,dword ptr [EBP + 0x14]      ; 0050ffef
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0050fff2
    MOV dword ptr [EDI + 0x14cd60],0xffffffff ; 0050fff5
    MOV dword ptr [EDI + 0x14cd64],0xffffffff ; 0050ffff
    MOV EDX,dword ptr [EDI + 0x15f2ac]  ; 00510009
    MOV dword ptr [EDI + 0x14cd5c],0x0  ; 0051000f
    TEST EDX,EDX                        ; 00510019
    JL 0x005101ec                       ; 0051001b
        ;   XREF to: 005101ec (CONDITIONAL_JUMP)  ; LAB_005101ec
    FLD float ptr [EBP + 0x24]          ; 00510021
    FLDZ                                ; 00510024
    FCOMPP                              ; 00510026
    FNSTSW AX                           ; 00510028
    SAHF                                ; 0051002a
    JNC 0x00510204                      ; 0051002b
        ;   XREF to: 00510204 (CONDITIONAL_JUMP)  ; LAB_00510204
    FLD float ptr [EBP + 0x18]          ; 00510031
    FLDZ                                ; 00510034
    FCOMPP                              ; 00510036
    FNSTSW AX                           ; 00510038
    SAHF                                ; 0051003a
    JA 0x0051021b                       ; 0051003b
        ;   XREF to: 0051021b (CONDITIONAL_JUMP)  ; LAB_0051021b
    FLD float ptr [EBP + 0x24]          ; 00510041
        ;   Label: LAB_00510041
    MOV EAX,dword ptr [EBP + 0x24]      ; 00510044
    FLD1                                ; 00510047
    MOV dword ptr [ESP + 0xac],EAX      ; 00510049
    FCOMPP                              ; 00510050
    FNSTSW AX                           ; 00510052
    SAHF                                ; 00510054
    JNC 0x00510062                      ; 00510055
        ;   XREF to: 00510062 (CONDITIONAL_JUMP)  ; LAB_00510062
    MOV dword ptr [ESP + 0xac],0x3f800000 ; 00510057
    MOV EAX,dword ptr [EBP + 0x20]      ; 00510062
        ;   Label: LAB_00510062
    FLD float ptr [EAX]                 ; 00510065
    FSUB float ptr [EBX]                ; 00510067
    FST float ptr [ESP + 0x60]          ; 00510069
    FLD float ptr [EAX + 0x4]           ; 0051006d
    FSUB float ptr [EBX + 0x4]          ; 00510070
    FXCH                                ; 00510073
    FLD float ptr [ESP + 0xac]          ; 00510075
    FXCH                                ; 0051007c
    FMUL ST1                            ; 0051007e
    FXCH ST2                            ; 00510080
    FST float ptr [ESP + 0x64]          ; 00510082
    FLD float ptr [EAX + 0x8]           ; 00510086
    FSUB float ptr [EBX + 0x8]          ; 00510089
    FXCH                                ; 0051008c
    FMUL ST2                            ; 0051008e
    FXCH                                ; 00510090
    FST float ptr [ESP + 0x68]          ; 00510092
    FMULP ST2                           ; 00510096
    MOV EDX,EBX                         ; 00510098
    LEA EAX,[ESP + 0x48]                ; 0051009a
    FXCH ST2                            ; 0051009e
    FSTP float ptr [ESP + 0x6c]         ; 005100a0
    FXCH                                ; 005100a4
    FSTP float ptr [ESP + 0x70]         ; 005100a6
    FSTP float ptr [ESP + 0x74]         ; 005100aa
    CMP EAX,EBX                         ; 005100ae
    JZ 0x005100c6                       ; 005100b0
        ;   XREF to: 005100c6 (CONDITIONAL_JUMP)  ; LAB_005100c6
    MOV EAX,dword ptr [EBX]             ; 005100b2
    MOV dword ptr [ESP + 0x48],EAX      ; 005100b4
    MOV EAX,dword ptr [EBX + 0x4]       ; 005100b8
    MOV dword ptr [ESP + 0x4c],EAX      ; 005100bb
    MOV EAX,dword ptr [EBX + 0x8]       ; 005100bf
    MOV dword ptr [ESP + 0x50],EAX      ; 005100c2
    LEA EAX,[ESP + 0x54]                ; 005100c6
        ;   Label: LAB_005100c6
    CMP EAX,EDX                         ; 005100ca
    JZ 0x005100e2                       ; 005100cc
        ;   XREF to: 005100e2 (CONDITIONAL_JUMP)  ; LAB_005100e2
    MOV EAX,dword ptr [EDX]             ; 005100ce
    MOV dword ptr [ESP + 0x54],EAX      ; 005100d0
    MOV EAX,dword ptr [EDX + 0x4]       ; 005100d4
    MOV dword ptr [ESP + 0x58],EAX      ; 005100d7
    MOV EAX,dword ptr [EDX + 0x8]       ; 005100db
    MOV dword ptr [ESP + 0x5c],EAX      ; 005100de
    FLD float ptr [EBX]                 ; 005100e2
        ;   Label: LAB_005100e2
    LEA EAX,[ESP + 0x84]                ; 005100e4
    FADD float ptr [ESP + 0x6c]         ; 005100eb
    PUSH EAX                            ; 005100ef
    FSTP float ptr [ESP + 0x88]         ; 005100f0
    FLD float ptr [EBX + 0x4]           ; 005100f7
    FADD float ptr [ESP + 0x74]         ; 005100fa
    LEA EAX,[ESP + 0x4c]                ; 005100fe
    FSTP float ptr [ESP + 0x8c]         ; 00510102
    FLD float ptr [EBX + 0x8]           ; 00510109
    FADD float ptr [ESP + 0x78]         ; 0051010c
    PUSH EAX                            ; 00510110
    FSTP float ptr [ESP + 0x94]         ; 00510111
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00 ; 00510118
        ;   XREF to: 0041cc00 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00()
    ADD ESP,0x8                         ; 0051011d
    LEA EAX,[ESP + 0x4]                 ; 00510120
    PUSH EAX                            ; 00510124
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990 ; 00510125
        ;   XREF to: 00511990 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990()
    ADD ESP,0x4                         ; 0051012a
    MOV EAX,dword ptr [EDI + 0x15f298]  ; 0051012d
    MOV dword ptr [ESP + 0x4],EAX       ; 00510133
    MOV EAX,dword ptr [EDI + 0x15f29c]  ; 00510137
    MOV dword ptr [ESP + 0x8],EAX       ; 0051013d
    MOV EAX,dword ptr [EDI + 0x15f2a0]  ; 00510141
    MOV dword ptr [ESP + 0xc],EAX       ; 00510147
    MOV EAX,dword ptr [EDI + 0x15f2a4]  ; 0051014b
    MOV dword ptr [ESP + 0x10],EAX      ; 00510151
    MOV EAX,dword ptr [EDI + 0x15f2a8]  ; 00510155
    MOV dword ptr [ESP + 0x14],EAX      ; 0051015b
    XOR EAX,EAX                         ; 0051015f
    MOV EDX,dword ptr [EDI + 0x1569c0]  ; 00510161
    MOV dword ptr [ESP + 0xb4],EAX      ; 00510167
    TEST EDX,EDX                        ; 0051016e
    JLE 0x005101cf                      ; 00510170
        ;   XREF to: 005101cf (CONDITIONAL_JUMP)  ; LAB_005101cf
    LEA EAX,[EDI + 0x14cd40]            ; 00510172
    MOV dword ptr [ESP + 0xb8],EAX      ; 00510178
    MOV dword ptr [ESP + 0xb0],EDI      ; 0051017f
    MOV ESI,dword ptr [ESP + 0xb0]      ; 00510186
        ;   Label: LAB_00510186
    MOV ESI,dword ptr [ESI + 0x1569c4]  ; 0051018d
    PUSH ESI                            ; 00510193
    PUSH EDI                            ; 00510194
    CALL core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_005103f0 ; 00510195
        ;   XREF to: 005103f0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_005103f0()
    ADD ESP,0x8                         ; 0051019a
    TEST EAX,EAX                        ; 0051019d
    JZ 0x00510225                       ; 0051019f
        ;   XREF to: 00510225 (CONDITIONAL_JUMP)  ; LAB_00510225
    MOV ESI,dword ptr [ESP + 0xb0]      ; 005101a5
        ;   Label: LAB_005101a5
    MOV EAX,dword ptr [ESP + 0xb4]      ; 005101ac
    MOV EDX,dword ptr [EDI + 0x1569c0]  ; 005101b3
    ADD ESI,0x4                         ; 005101b9
    INC EAX                             ; 005101bc
    MOV dword ptr [ESP + 0xb0],ESI      ; 005101bd
    MOV dword ptr [ESP + 0xb4],EAX      ; 005101c4
    CMP EAX,EDX                         ; 005101cb
    JL 0x00510186                       ; 005101cd
        ;   XREF to: 00510186 (CONDITIONAL_JUMP)  ; LAB_00510186
    MOV ECX,dword ptr [EDI + 0x14cd5c]  ; 005101cf
        ;   Label: LAB_005101cf
    TEST ECX,ECX                        ; 005101d5
    JZ 0x005101ec                       ; 005101d7
        ;   XREF to: 005101ec (CONDITIONAL_JUMP)  ; LAB_005101ec
    PUSH ECX                            ; 005101d9
    MOV EDX,dword ptr [ECX + 0x14c]     ; 005101da
    CALL dword ptr [EDX + 0x3c]         ; 005101e0
    ADD ESP,0x4                         ; 005101e3
    MOV dword ptr [EDI + 0x14cd4c],EAX  ; 005101e6
    MOV EAX,dword ptr [EBP + 0x24]      ; 005101ec
        ;   Label: LAB_005101ec
    MOV dword ptr [ESP + 0xa8],EAX      ; 005101ef
    MOV EAX,dword ptr [ESP + 0xa8]      ; 005101f6
    MOV ESP,EBP                         ; 005101fd
    POP EBP                             ; 005101ff
    POP EDI                             ; 00510200
    POP ESI                             ; 00510201
    POP EBX                             ; 00510202
    RET                                 ; 00510203
    XOR ECX,ECX                         ; 00510204
        ;   Label: LAB_00510204
    MOV dword ptr [ESP + 0xa8],ECX      ; 00510206
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0051020d
    MOV ESP,EBP                         ; 00510214
    POP EBP                             ; 00510216
    POP EDI                             ; 00510217
    POP ESI                             ; 00510218
    POP EBX                             ; 00510219
    RET                                 ; 0051021a
    XOR ECX,ECX                         ; 0051021b
        ;   Label: LAB_0051021b
    MOV dword ptr [EBP + 0x18],ECX      ; 0051021d
    JMP 0x00510041                      ; 00510220
        ;   XREF to: 00510041 (UNCONDITIONAL_JUMP)  ; LAB_00510041
    MOV dword ptr [ESP + 0x24],EAX      ; 00510225
        ;   Label: LAB_00510225
    MOV dword ptr [ESP + 0x28],EAX      ; 00510229
    LEA EAX,[ESP + 0x4]                 ; 0051022d
    PUSH EAX                            ; 00510231
    MOV EDX,dword ptr [ESI + 0x14c]     ; 00510232
    PUSH ESI                            ; 00510238
    CALL dword ptr [EDX + 0x34]         ; 00510239
    ADD ESP,0x8                         ; 0051023c
    TEST EAX,EAX                        ; 0051023f
    JZ 0x005101a5                       ; 00510241
        ;   XREF to: 005101a5 (CONDITIONAL_JUMP)  ; LAB_005101a5
    LEA EDX,[ESP + 0x48]                ; 00510247
    PUSH EDX                            ; 0051024b
    PUSH EAX                            ; 0051024c
    LEA EAX,[ESP + 0xc]                 ; 0051024d
    PUSH EAX                            ; 00510251
    LEA EAX,[ESP + 0x38]                ; 00510252
    PUSH EAX                            ; 00510256
    LEA EAX,[ESP + 0x7c]                ; 00510257
    PUSH EAX                            ; 0051025b
    PUSH EBX                            ; 0051025c
    PUSH ESI                            ; 0051025d
    CALL core_actor.cpp_CDemonActor_rayIntersect_FUN_0040a740 ; 0051025e
        ;   XREF to: 0040a740 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_rayIntersect_FUN_0040a740()
    MOV dword ptr [ESP + 0xd8],EAX      ; 00510263
    FLD float ptr [ESP + 0xd8]          ; 0051026a
    ADD ESP,0x1c                        ; 00510271
    FST float ptr [ESP]                 ; 00510274
    FLD1                                ; 00510277
    FCOMPP                              ; 00510279
    FNSTSW AX                           ; 0051027b
    SAHF                                ; 0051027d
    JC 0x005101a5                       ; 0051027e
        ;   XREF to: 005101a5 (CONDITIONAL_JUMP)  ; LAB_005101a5
    FLD float ptr [ESP]                 ; 00510284
    FMUL float ptr [ESP + 0xac]         ; 00510287
    FST float ptr [ESP]                 ; 0051028e
    FCOMP float ptr [EBP + 0x24]        ; 00510291
    FNSTSW AX                           ; 00510294
    SAHF                                ; 00510296
    JNC 0x005101a5                      ; 00510297
        ;   XREF to: 005101a5 (CONDITIONAL_JUMP)  ; LAB_005101a5
    FLD float ptr [ESP]                 ; 0051029d
    FCOMP float ptr [EBP + 0x18]        ; 005102a0
    FNSTSW AX                           ; 005102a3
    SAHF                                ; 005102a5
    JBE 0x005101a5                      ; 005102a6
        ;   XREF to: 005101a5 (CONDITIONAL_JUMP)  ; LAB_005101a5
    MOV EAX,dword ptr [ESP]             ; 005102ac
    MOV ECX,dword ptr [ESP + 0xb8]      ; 005102af
    MOV dword ptr [EBP + 0x24],EAX      ; 005102b6
    LEA EAX,[ESP + 0x2c]                ; 005102b9
    CMP EAX,ECX                         ; 005102bd
    JZ 0x005102d5                       ; 005102bf
        ;   XREF to: 005102d5 (CONDITIONAL_JUMP)  ; LAB_005102d5
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005102c1
    MOV dword ptr [ECX],EAX             ; 005102c5
    MOV EAX,dword ptr [ESP + 0x30]      ; 005102c7
    MOV dword ptr [ECX + 0x4],EAX       ; 005102cb
    MOV EAX,dword ptr [ESP + 0x34]      ; 005102ce
    MOV dword ptr [ECX + 0x8],EAX       ; 005102d2
    MOV dword ptr [EDI + 0x14cd5c],ESI  ; 005102d5
        ;   Label: LAB_005102d5
    MOV EAX,dword ptr [ESP + 0x38]      ; 005102db
    MOV dword ptr [EDI + 0x14cd60],EAX  ; 005102df
    MOV EAX,dword ptr [ESP + 0x44]      ; 005102e5
    MOV dword ptr [EDI + 0x14cd64],EAX  ; 005102e9
    MOV EAX,dword ptr [EBP + 0x24]      ; 005102ef
    MOV dword ptr [ESP + 0xac],EAX      ; 005102f2
    MOV EAX,dword ptr [EBP + 0x20]      ; 005102f9
    FLD float ptr [EAX]                 ; 005102fc
    FSUB float ptr [EBX]                ; 005102fe
    FST float ptr [ESP + 0x90]          ; 00510300
    FLD float ptr [EAX + 0x4]           ; 00510307
    FSUB float ptr [EBX + 0x4]          ; 0051030a
    FXCH                                ; 0051030d
    FMUL float ptr [EBP + 0x24]         ; 0051030f
    FXCH                                ; 00510312
    FST float ptr [ESP + 0x94]          ; 00510314
    FLD float ptr [EAX + 0x8]           ; 0051031b
    FSUB float ptr [EBX + 0x8]          ; 0051031e
    FXCH                                ; 00510321
    FMUL float ptr [EBP + 0x24]         ; 00510323
    FXCH                                ; 00510326
    FST float ptr [ESP + 0x98]          ; 00510328
    FMUL float ptr [EBP + 0x24]         ; 0051032f
    LEA ESI,[ESP + 0x6c]                ; 00510332
    LEA EAX,[ESP + 0x78]                ; 00510336
    FXCH ST2                            ; 0051033a
    FSTP float ptr [ESP + 0x78]         ; 0051033c
    FSTP float ptr [ESP + 0x7c]         ; 00510340
    FSTP float ptr [ESP + 0x80]         ; 00510344
    CMP ESI,EAX                         ; 0051034b
    JZ 0x0051036a                       ; 0051034d
        ;   XREF to: 0051036a (CONDITIONAL_JUMP)  ; LAB_0051036a
    MOV EAX,dword ptr [ESP + 0x78]      ; 0051034f
    MOV dword ptr [ESP + 0x6c],EAX      ; 00510353
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00510357
    MOV dword ptr [ESP + 0x70],EAX      ; 0051035b
    MOV EAX,dword ptr [ESP + 0x80]      ; 0051035f
    MOV dword ptr [ESP + 0x74],EAX      ; 00510366
    LEA EAX,[ESP + 0x48]                ; 0051036a
        ;   Label: LAB_0051036a
    MOV ESI,EBX                         ; 0051036e
    CMP EAX,EBX                         ; 00510370
    JZ 0x00510388                       ; 00510372
        ;   XREF to: 00510388 (CONDITIONAL_JUMP)  ; LAB_00510388
    MOV EAX,dword ptr [EBX]             ; 00510374
    MOV dword ptr [ESP + 0x48],EAX      ; 00510376
    MOV EAX,dword ptr [EBX + 0x4]       ; 0051037a
    MOV dword ptr [ESP + 0x4c],EAX      ; 0051037d
    MOV EAX,dword ptr [EBX + 0x8]       ; 00510381
    MOV dword ptr [ESP + 0x50],EAX      ; 00510384
    LEA EAX,[ESP + 0x54]                ; 00510388
        ;   Label: LAB_00510388
    CMP EAX,ESI                         ; 0051038c
    JZ 0x005103a4                       ; 0051038e
        ;   XREF to: 005103a4 (CONDITIONAL_JUMP)  ; LAB_005103a4
    MOV EAX,dword ptr [ESI]             ; 00510390
    MOV dword ptr [ESP + 0x54],EAX      ; 00510392
    MOV EAX,dword ptr [ESI + 0x4]       ; 00510396
    MOV dword ptr [ESP + 0x58],EAX      ; 00510399
    MOV EAX,dword ptr [ESI + 0x8]       ; 0051039d
    MOV dword ptr [ESP + 0x5c],EAX      ; 005103a0
    FLD float ptr [EBX]                 ; 005103a4
        ;   Label: LAB_005103a4
    LEA EAX,[ESP + 0x9c]                ; 005103a6
    FADD float ptr [ESP + 0x6c]         ; 005103ad
    PUSH EAX                            ; 005103b1
    FSTP float ptr [ESP + 0xa0]         ; 005103b2
    FLD float ptr [EBX + 0x4]           ; 005103b9
    FADD float ptr [ESP + 0x74]         ; 005103bc
    LEA EAX,[ESP + 0x4c]                ; 005103c0
    FSTP float ptr [ESP + 0xa4]         ; 005103c4
    FLD float ptr [EBX + 0x8]           ; 005103cb
    FADD float ptr [ESP + 0x78]         ; 005103ce
    PUSH EAX                            ; 005103d2
    FSTP float ptr [ESP + 0xac]         ; 005103d3
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00 ; 005103da
        ;   XREF to: 0041cc00 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00()
    ADD ESP,0x8                         ; 005103df
    JMP 0x005101a5                      ; 005103e2
        ;   XREF to: 005101a5 (UNCONDITIONAL_JUMP)  ; LAB_005101a5

