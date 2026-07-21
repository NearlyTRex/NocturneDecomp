; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110(float *param_1,float *param_2,float param_3,float *param_4)
;
; Local Variables:
; undefined8       Stack[-0x88]:8  local_88
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
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_dmodel.cpp_CKeyFramedModel_getFloorHeight_FUN_00453f00 at 00453fa3
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80 at 0050f08a
;   core_stairs.cpp_CStairs_customGetFloorHeight_FUN_00534a70 at 00534aa4
;
; Referenced Globals:
;   undefined4 DAT_0057e47e
;   undefined4 DAT_0057e486
;   undefined4 DAT_01bc995c
;   undefined4 DAT_01bc9960
;   undefined4 DAT_01bc9964
;   undefined4 DAT_01bc9968
;
; Called Functions:
;   core_dtri.cpp_rayEdgeHeightTest_FUN_0046cfa0
;   core_dtri.cpp_rayTriangleIntersection_FUN_0046c620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046d110
        ;   Label: core_dtri.cpp_rayTriangleFloorTest_FUN_0046d110
    PUSH ESI                            ; 0046d111
    PUSH EDI                            ; 0046d112
    PUSH EBP                            ; 0046d113
    MOV EBP,ESP                         ; 0046d114
    SUB ESP,0x78                        ; 0046d116
    AND ESP,0xfffffff8                  ; 0046d119
    MOV EBX,dword ptr [EBP + 0x14]      ; 0046d11c
    MOV ESI,dword ptr [EBP + 0x18]      ; 0046d11f
    FLD float ptr [EBX + 0x28]          ; 0046d122
    FCOMP double ptr [0x0057e47e]       ; 0046d125 | DAT_0057e47e
    FNSTSW AX                           ; 0046d12b
    SAHF                                ; 0046d12d
    JA 0x0046d374                       ; 0046d12e
        ;   XREF to: 0046d374 (CONDITIONAL_JUMP)  ; LAB_0046d374
    FLD float ptr [EBX]                 ; 0046d134
    FSUB float ptr [ESI]                ; 0046d136
    FSTP float ptr [ESP + 0x3c]         ; 0046d138
    MOV EAX,dword ptr [EBX + 0x4]       ; 0046d13c
    MOV dword ptr [ESP + 0x40],EAX      ; 0046d13f
    FLD float ptr [EBX + 0x8]           ; 0046d143
    FSUB float ptr [ESI + 0x8]          ; 0046d146
    FSTP float ptr [ESP + 0x44]         ; 0046d149
    FLD float ptr [EBX + 0xc]           ; 0046d14d
    FSUB float ptr [ESI]                ; 0046d150
    FSTP float ptr [ESP + 0x30]         ; 0046d152
    MOV EAX,dword ptr [EBX + 0x10]      ; 0046d156
    MOV dword ptr [ESP + 0x34],EAX      ; 0046d159
    FLD float ptr [EBX + 0x14]          ; 0046d15d
    FSUB float ptr [ESI + 0x8]          ; 0046d160
    FSTP float ptr [ESP + 0x38]         ; 0046d163
    FLD float ptr [EBX + 0x18]          ; 0046d167
    FSUB float ptr [ESI]                ; 0046d16a
    FSTP float ptr [ESP + 0x18]         ; 0046d16c
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0046d170
    MOV dword ptr [ESP + 0x1c],EAX      ; 0046d173
    FLD float ptr [EBX + 0x20]          ; 0046d177
    FSUB float ptr [ESI + 0x8]          ; 0046d17a
    FLD float ptr [ESP + 0x40]          ; 0046d17d
    FXCH                                ; 0046d181
    FSTP float ptr [ESP + 0x20]         ; 0046d183
    FCOMP float ptr [ESP + 0x34]        ; 0046d187
    FNSTSW AX                           ; 0046d18b
    SAHF                                ; 0046d18d
    JC 0x0046d37d                       ; 0046d18e
        ;   XREF to: 0046d37d (CONDITIONAL_JUMP)  ; LAB_0046d37d
    FLD float ptr [ESP + 0x34]          ; 0046d194
        ;   Label: LAB_0046d194
    FCOMP float ptr [ESP + 0x1c]        ; 0046d198
    FNSTSW AX                           ; 0046d19c
    SAHF                                ; 0046d19e
    JNC 0x0046d201                      ; 0046d19f
        ;   XREF to: 0046d201 (CONDITIONAL_JUMP)  ; LAB_0046d201
    MOV EAX,dword ptr [ESP + 0x30]      ; 0046d1a1
    MOV dword ptr [ESP + 0x54],EAX      ; 0046d1a5
    MOV EAX,dword ptr [ESP + 0x34]      ; 0046d1a9
    MOV dword ptr [ESP + 0x58],EAX      ; 0046d1ad
    MOV EAX,dword ptr [ESP + 0x38]      ; 0046d1b1
    LEA EDI,[ESP + 0x30]                ; 0046d1b5
    MOV dword ptr [ESP + 0x5c],EAX      ; 0046d1b9
    LEA EAX,[ESP + 0x18]                ; 0046d1bd
    CMP EDI,EAX                         ; 0046d1c1
    JZ 0x0046d1dd                       ; 0046d1c3
        ;   XREF to: 0046d1dd (CONDITIONAL_JUMP)  ; LAB_0046d1dd
    MOV EAX,dword ptr [ESP + 0x18]      ; 0046d1c5
    MOV dword ptr [ESP + 0x30],EAX      ; 0046d1c9
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046d1cd
    MOV dword ptr [ESP + 0x34],EAX      ; 0046d1d1
    MOV EAX,dword ptr [ESP + 0x20]      ; 0046d1d5
    MOV dword ptr [ESP + 0x38],EAX      ; 0046d1d9
    LEA EAX,[ESP + 0x18]                ; 0046d1dd
        ;   Label: LAB_0046d1dd
    LEA EDI,[ESP + 0x54]                ; 0046d1e1
    CMP EAX,EDI                         ; 0046d1e5
    JZ 0x0046d201                       ; 0046d1e7
        ;   XREF to: 0046d201 (CONDITIONAL_JUMP)  ; LAB_0046d201
    MOV EAX,dword ptr [ESP + 0x54]      ; 0046d1e9
    MOV dword ptr [ESP + 0x18],EAX      ; 0046d1ed
    MOV EAX,dword ptr [ESP + 0x58]      ; 0046d1f1
    MOV dword ptr [ESP + 0x1c],EAX      ; 0046d1f5
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0046d1f9
    MOV dword ptr [ESP + 0x20],EAX      ; 0046d1fd
    FLD float ptr [ESP + 0x1c]          ; 0046d201
        ;   Label: LAB_0046d201
    FCOMP float ptr [ESI + 0x4]         ; 0046d205
    FNSTSW AX                           ; 0046d208
    SAHF                                ; 0046d20a
    JA 0x0046d374                       ; 0046d20b
        ;   XREF to: 0046d374 (CONDITIONAL_JUMP)  ; LAB_0046d374
    FLD float ptr [ESP + 0x40]          ; 0046d211
    FCOMP float ptr [ESP + 0x34]        ; 0046d215
    FNSTSW AX                           ; 0046d219
    SAHF                                ; 0046d21b
    JNC 0x0046d27e                      ; 0046d21c
        ;   XREF to: 0046d27e (CONDITIONAL_JUMP)  ; LAB_0046d27e
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0046d21e
    MOV dword ptr [ESP + 0xc],EAX       ; 0046d222
    MOV EAX,dword ptr [ESP + 0x40]      ; 0046d226
    MOV dword ptr [ESP + 0x10],EAX      ; 0046d22a
    MOV EAX,dword ptr [ESP + 0x44]      ; 0046d22e
    LEA EDI,[ESP + 0x3c]                ; 0046d232
    MOV dword ptr [ESP + 0x14],EAX      ; 0046d236
    LEA EAX,[ESP + 0x30]                ; 0046d23a
    CMP EDI,EAX                         ; 0046d23e
    JZ 0x0046d25a                       ; 0046d240
        ;   XREF to: 0046d25a (CONDITIONAL_JUMP)  ; LAB_0046d25a
    MOV EAX,dword ptr [ESP + 0x30]      ; 0046d242
    MOV dword ptr [ESP + 0x3c],EAX      ; 0046d246
    MOV EAX,dword ptr [ESP + 0x34]      ; 0046d24a
    MOV dword ptr [ESP + 0x40],EAX      ; 0046d24e
    MOV EAX,dword ptr [ESP + 0x38]      ; 0046d252
    MOV dword ptr [ESP + 0x44],EAX      ; 0046d256
    LEA EDI,[ESP + 0x30]                ; 0046d25a
        ;   Label: LAB_0046d25a
    LEA EAX,[ESP + 0xc]                 ; 0046d25e
    CMP EDI,EAX                         ; 0046d262
    JZ 0x0046d27e                       ; 0046d264
        ;   XREF to: 0046d27e (CONDITIONAL_JUMP)  ; LAB_0046d27e
    MOV EAX,dword ptr [ESP + 0xc]       ; 0046d266
    MOV dword ptr [ESP + 0x30],EAX      ; 0046d26a
    MOV EAX,dword ptr [ESP + 0x10]      ; 0046d26e
    MOV dword ptr [ESP + 0x34],EAX      ; 0046d272
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046d276
    MOV dword ptr [ESP + 0x38],EAX      ; 0046d27a
    MOV EAX,dword ptr [EBP + 0x20]      ; 0046d27e
        ;   Label: LAB_0046d27e
    FLD float ptr [ESP + 0x40]          ; 0046d281
    FCOMP float ptr [EAX]               ; 0046d285
    FNSTSW AX                           ; 0046d287
    SAHF                                ; 0046d289
    JC 0x0046d374                       ; 0046d28a
        ;   XREF to: 0046d374 (CONDITIONAL_JUMP)  ; LAB_0046d374
    FLD float ptr [ESP + 0x44]          ; 0046d290
    FMUL ST0                            ; 0046d294
    FLD float ptr [ESP + 0x3c]          ; 0046d296
    FMUL ST0                            ; 0046d29a
    FLD float ptr [EBP + 0x1c]          ; 0046d29c
    FMUL ST0                            ; 0046d29f
    FXCH                                ; 0046d2a1
    FADDP ST2,ST0                       ; 0046d2a3
    FCOMPP                              ; 0046d2a5
    FNSTSW AX                           ; 0046d2a7
    SAHF                                ; 0046d2a9
    JA 0x0046d3e6                       ; 0046d2aa
        ;   XREF to: 0046d3e6 (CONDITIONAL_JUMP)  ; LAB_0046d3e6
    MOV EDX,dword ptr [EBP + 0x20]      ; 0046d2b0
    PUSH EDX                            ; 0046d2b3
    LEA EAX,[ESP + 0x34]                ; 0046d2b4
    PUSH dword ptr [EBP + 0x1c]         ; 0046d2b8
    PUSH EAX                            ; 0046d2bb
    LEA EAX,[ESP + 0x48]                ; 0046d2bc
    PUSH EAX                            ; 0046d2c0
    CALL core_dtri.cpp_rayEdgeHeightTest_FUN_0046cfa0 ; 0046d2c1
        ;   XREF to: 0046cfa0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_rayEdgeHeightTest_FUN_0046cfa0()
    ADD ESP,0x10                        ; 0046d2c6
    MOV ECX,dword ptr [EBP + 0x20]      ; 0046d2c9
    PUSH ECX                            ; 0046d2cc
    MOV EDI,EAX                         ; 0046d2cd
    LEA EAX,[ESP + 0x1c]                ; 0046d2cf
    PUSH dword ptr [EBP + 0x1c]         ; 0046d2d3
    PUSH EAX                            ; 0046d2d6
    LEA EAX,[ESP + 0x3c]                ; 0046d2d7
    PUSH EAX                            ; 0046d2db
    CALL core_dtri.cpp_rayEdgeHeightTest_FUN_0046cfa0 ; 0046d2dc
        ;   XREF to: 0046cfa0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_rayEdgeHeightTest_FUN_0046cfa0()
    ADD ESP,0x10                        ; 0046d2e1
    OR EDI,EAX                          ; 0046d2e4
    MOV EAX,dword ptr [EBP + 0x20]      ; 0046d2e6
    PUSH EAX                            ; 0046d2e9
    LEA EAX,[ESP + 0x40]                ; 0046d2ea
    PUSH dword ptr [EBP + 0x1c]         ; 0046d2ee
    PUSH EAX                            ; 0046d2f1
    LEA EAX,[ESP + 0x24]                ; 0046d2f2
    PUSH EAX                            ; 0046d2f6
    CALL core_dtri.cpp_rayEdgeHeightTest_FUN_0046cfa0 ; 0046d2f7
        ;   XREF to: 0046cfa0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_rayEdgeHeightTest_FUN_0046cfa0()
    FLD float ptr [EBX + 0x24]          ; 0046d2fc
    FMUL ST0                            ; 0046d2ff
    FLD float ptr [EBX + 0x2c]          ; 0046d301
    FMUL ST0                            ; 0046d304
    FADDP                               ; 0046d306
    OR EDI,EAX                          ; 0046d308
    FSQRT                               ; 0046d30a
    ADD ESP,0x10                        ; 0046d30c
    MOV AH,byte ptr [0x01bc9968]        ; 0046d30f | DAT_01bc9968
    FSTP double ptr [ESP]               ; 0046d315
    TEST AH,0x1                         ; 0046d318
    JZ 0x0046d3fb                       ; 0046d31b
        ;   XREF to: 0046d3fb (CONDITIONAL_JUMP)  ; LAB_0046d3fb
    FLD double ptr [ESP]                ; 0046d321
        ;   Label: LAB_0046d321
    FCOMP double ptr [0x0057e486]       ; 0046d324 | DAT_0057e486
    FNSTSW AX                           ; 0046d32a
    SAHF                                ; 0046d32c
    JNC 0x0046d424                      ; 0046d32d
        ;   XREF to: 0046d424 (CONDITIONAL_JUMP)  ; LAB_0046d424
    TEST EDI,EDI                        ; 0046d333
    JNZ 0x0046d36b                      ; 0046d335
        ;   XREF to: 0046d36b (CONDITIONAL_JUMP)  ; LAB_0046d36b
    PUSH 0x1bc995c                      ; 0046d337 | DAT_01bc995c
    PUSH ESI                            ; 0046d33c
    PUSH EBX                            ; 0046d33d
    CALL core_dtri.cpp_rayTriangleIntersection_FUN_0046c620 ; 0046d33e
        ;   XREF to: 0046c620 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_rayTriangleIntersection_FUN_0046c620()
    MOV dword ptr [ESP + 0x80],EAX      ; 0046d343
    FLD float ptr [ESP + 0x80]          ; 0046d34a
    FLDZ                                ; 0046d351
    ADD ESP,0xc                         ; 0046d353
    FCOMPP                              ; 0046d356
    FNSTSW AX                           ; 0046d358
    SAHF                                ; 0046d35a
    JA 0x0046d36b                       ; 0046d35b
        ;   XREF to: 0046d36b (CONDITIONAL_JUMP)  ; LAB_0046d36b
    MOV EBX,dword ptr [EBP + 0x20]      ; 0046d35d
    MOV EAX,dword ptr [ESP + 0x40]      ; 0046d360
    MOV EDI,0x1                         ; 0046d364
    MOV dword ptr [EBX],EAX             ; 0046d369
    MOV EAX,EDI                         ; 0046d36b
        ;   Label: LAB_0046d36b
    MOV ESP,EBP                         ; 0046d36d
    POP EBP                             ; 0046d36f
    POP EDI                             ; 0046d370
    POP ESI                             ; 0046d371
    POP EBX                             ; 0046d372
    RET                                 ; 0046d373
    XOR EAX,EAX                         ; 0046d374
        ;   Label: LAB_0046d374
    MOV ESP,EBP                         ; 0046d376
    POP EBP                             ; 0046d378
    POP EDI                             ; 0046d379
    POP ESI                             ; 0046d37a
    POP EBX                             ; 0046d37b
    RET                                 ; 0046d37c
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0046d37d
        ;   Label: LAB_0046d37d
    MOV dword ptr [ESP + 0x48],EAX      ; 0046d381
    MOV EAX,dword ptr [ESP + 0x40]      ; 0046d385
    MOV dword ptr [ESP + 0x4c],EAX      ; 0046d389
    MOV EAX,dword ptr [ESP + 0x44]      ; 0046d38d
    LEA EDI,[ESP + 0x3c]                ; 0046d391
    MOV dword ptr [ESP + 0x50],EAX      ; 0046d395
    LEA EAX,[ESP + 0x30]                ; 0046d399
    CMP EDI,EAX                         ; 0046d39d
    JZ 0x0046d3b9                       ; 0046d39f
        ;   XREF to: 0046d3b9 (CONDITIONAL_JUMP)  ; LAB_0046d3b9
    MOV EAX,dword ptr [ESP + 0x30]      ; 0046d3a1
    MOV dword ptr [ESP + 0x3c],EAX      ; 0046d3a5
    MOV EAX,dword ptr [ESP + 0x34]      ; 0046d3a9
    MOV dword ptr [ESP + 0x40],EAX      ; 0046d3ad
    MOV EAX,dword ptr [ESP + 0x38]      ; 0046d3b1
    MOV dword ptr [ESP + 0x44],EAX      ; 0046d3b5
    LEA EDI,[ESP + 0x30]                ; 0046d3b9
        ;   Label: LAB_0046d3b9
    LEA EAX,[ESP + 0x48]                ; 0046d3bd
    CMP EDI,EAX                         ; 0046d3c1
    JZ 0x0046d194                       ; 0046d3c3
        ;   XREF to: 0046d194 (CONDITIONAL_JUMP)  ; LAB_0046d194
    MOV EAX,dword ptr [ESP + 0x48]      ; 0046d3c9
    MOV dword ptr [ESP + 0x30],EAX      ; 0046d3cd
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0046d3d1
    MOV dword ptr [ESP + 0x34],EAX      ; 0046d3d5
    MOV EAX,dword ptr [ESP + 0x50]      ; 0046d3d9
    MOV dword ptr [ESP + 0x38],EAX      ; 0046d3dd
    JMP 0x0046d194                      ; 0046d3e1
        ;   XREF to: 0046d194 (UNCONDITIONAL_JUMP)  ; LAB_0046d194
    MOV EBX,dword ptr [EBP + 0x20]      ; 0046d3e6
        ;   Label: LAB_0046d3e6
    MOV EAX,dword ptr [ESP + 0x40]      ; 0046d3e9
    MOV dword ptr [EBX],EAX             ; 0046d3ed
    MOV EAX,0x1                         ; 0046d3ef
    MOV ESP,EBP                         ; 0046d3f4
    POP EBP                             ; 0046d3f6
    POP EDI                             ; 0046d3f7
    POP ESI                             ; 0046d3f8
    POP EBX                             ; 0046d3f9
    RET                                 ; 0046d3fa
    MOV DL,AH                           ; 0046d3fb
        ;   Label: LAB_0046d3fb
    OR DL,0x1                           ; 0046d3fd
    MOV ECX,0xc2c80000                  ; 0046d400
    MOV byte ptr [0x01bc9968],DL        ; 0046d405 | DAT_01bc9968
    XOR EDX,EDX                         ; 0046d40b
    MOV dword ptr [0x01bc9960],ECX      ; 0046d40d | DAT_01bc9960
    MOV dword ptr [0x01bc995c],EDX      ; 0046d413 | DAT_01bc995c
    MOV dword ptr [0x01bc9964],EDX      ; 0046d419 | DAT_01bc9964
    JMP 0x0046d321                      ; 0046d41f
        ;   XREF to: 0046d321 (UNCONDITIONAL_JUMP)  ; LAB_0046d321
    FLD float ptr [EBX + 0x24]          ; 0046d424
        ;   Label: LAB_0046d424
    FLD float ptr [EBP + 0x1c]          ; 0046d427
    FDIV double ptr [ESP]               ; 0046d42a
    FXCH                                ; 0046d42d
    FMUL ST1                            ; 0046d42f
    FADD float ptr [ESI]                ; 0046d431
    FSTP float ptr [ESP + 0x24]         ; 0046d433
    FMUL float ptr [EBX + 0x2c]         ; 0046d437
    FADD float ptr [ESI + 0x8]          ; 0046d43a
    FSTP float ptr [ESP + 0x2c]         ; 0046d43d
    MOV EAX,dword ptr [ESI + 0x4]       ; 0046d441
    PUSH 0x1bc995c                      ; 0046d444 | DAT_01bc995c
    MOV dword ptr [ESP + 0x2c],EAX      ; 0046d449
    LEA EAX,[ESP + 0x28]                ; 0046d44d
    PUSH EAX                            ; 0046d451
    PUSH EBX                            ; 0046d452
    CALL core_dtri.cpp_rayTriangleIntersection_FUN_0046c620 ; 0046d453
        ;   XREF to: 0046c620 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_rayTriangleIntersection_FUN_0046c620()
    MOV dword ptr [ESP + 0x80],EAX      ; 0046d458
    FLD float ptr [ESP + 0x80]          ; 0046d45f
    ADD ESP,0xc                         ; 0046d466
    FST float ptr [ESP + 0x8]           ; 0046d469
    FLDZ                                ; 0046d46d
    FCOMPP                              ; 0046d46f
    FNSTSW AX                           ; 0046d471
    SAHF                                ; 0046d473
    JA 0x0046d36b                       ; 0046d474
        ;   XREF to: 0046d36b (CONDITIONAL_JUMP)  ; LAB_0046d36b
    FLD float ptr [ESP + 0x8]           ; 0046d47a
    FMUL float ptr [0x01bc9960]         ; 0046d47e | DAT_01bc9960
    FADD float ptr [ESP + 0x28]         ; 0046d484
    MOV EAX,dword ptr [EBP + 0x20]      ; 0046d488
    FST float ptr [ESP + 0x70]          ; 0046d48b
    FCOMP float ptr [EAX]               ; 0046d48f
    FNSTSW AX                           ; 0046d491
    SAHF                                ; 0046d493
    JBE 0x0046d36b                      ; 0046d494
        ;   XREF to: 0046d36b (CONDITIONAL_JUMP)  ; LAB_0046d36b
    MOV EBX,dword ptr [EBP + 0x20]      ; 0046d49a
    MOV EAX,dword ptr [ESP + 0x70]      ; 0046d49d
    MOV EDI,0x1                         ; 0046d4a1
    MOV dword ptr [EBX],EAX             ; 0046d4a6
    MOV EAX,EDI                         ; 0046d4a8
    MOV ESP,EBP                         ; 0046d4aa
    POP EBP                             ; 0046d4ac
    POP EDI                             ; 0046d4ad
    POP ESI                             ; 0046d4ae
    POP EBX                             ; 0046d4af
    RET                                 ; 0046d4b0

