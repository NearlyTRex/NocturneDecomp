; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_robin_cpp_FUN_005a61f0(int param_1,float param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_Death_005f0693
;   TerminatedCString s_Animation_005f0699
;   undefined4 DAT_005f06a6
;   undefined4 DAT_005f06ae
;   undefined4 DAT_005f06b6
;   undefined4 DAT_0265370c
;   undefined4 DAT_02653710
;   undefined4 DAT_02653714
;
; Called Functions:
;   core_actor.cpp_FUN_0040cf60
;   core_xform.cpp_FUN_00591530
;   core_xform.cpp_multiplyQuaternion_FUN_00593c60
;   core_xform.cpp_quaternionFromAngleX_FUN_00593fa0
;   core_xform.cpp_quaternionFromAngleY_FUN_00593fe0
;   core_xform.cpp_quaternionFromAngleZ_FUN_00594020
;   core_xform.cpp_quaternionToMatrix3x4_FUN_00593a10
;   shape_superopt.cpp_CComplexPolygon_getMaterialId_FUN_005a8130
;   unkaddr_0059d350.cpp_FUN_0059daa0
;   unkaddr_005a7eb0.cpp_FUN_005a7ed0
;   unkafter_superopt.cpp_FUN_005a8180
;   unkafter_superopt.cpp_FUN_005a8300
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a61f0
        ;   Label: core_robin.cpp_FUN_005a61f0
    PUSH ESI                            ; 005a61f1
    PUSH EDI                            ; 005a61f2
    PUSH EBP                            ; 005a61f3
    MOV EBP,ESP                         ; 005a61f4
    SUB ESP,0x210                       ; 005a61f6
    SUB EBP,0x7a                        ; 005a61fc
    MOV EBX,dword ptr [EBP + 0x8e]      ; 005a61ff
    PUSH 0x5f0693                       ; 005a6205 | = "Death"
    ADD EBX,0x10af8                     ; 005a620a
    PUSH EBX                            ; 005a6210
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a6211
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a6216
    TEST EAX,EAX                        ; 005a6219
    JNZ 0x005a6233                      ; 005a621b
        ;   XREF to: 005a6233 (CONDITIONAL_JUMP)  ; LAB_005a6233
    PUSH 0x5f0699                       ; 005a621d | = "Animation"
    PUSH EBX                            ; 005a6222
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a6223
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a6228
    TEST EAX,EAX                        ; 005a622b
    JZ 0x005a65c7                       ; 005a622d
        ;   XREF to: 005a65c7 (CONDITIONAL_JUMP)  ; LAB_005a65c7
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005a6233
        ;   Label: LAB_005a6233
    ADD EAX,0x154                       ; 005a6239
    PUSH dword ptr [EBP + 0x92]         ; 005a623e
    PUSH EAX                            ; 005a6244
    MOV dword ptr [EBP + 0x6e],EAX      ; 005a6245
    CALL unkafter_superopt.cpp_FUN_005a8180 ; 005a6248
        ;   XREF to: 005a8180 (UNCONDITIONAL_CALL)  ; undefined unkafter_superopt.cpp_FUN_005a8180()
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005a624d
    ADD ESP,0x8                         ; 005a6253
    ADD EAX,0x198                       ; 005a6256
    PUSH dword ptr [EBP + 0x92]         ; 005a625b
    PUSH EAX                            ; 005a6261
    CALL unkafter_superopt.cpp_FUN_005a8180 ; 005a6262
        ;   XREF to: 005a8180 (UNCONDITIONAL_CALL)  ; undefined unkafter_superopt.cpp_FUN_005a8180()
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005a6267
    FLD float ptr [EAX + 0x2a8]         ; 005a626d
    FSUB float ptr [EBP + 0x92]         ; 005a6273
    ADD ESP,0x8                         ; 005a6279
    FST float ptr [EAX + 0x2a8]         ; 005a627c
    FLDZ                                ; 005a6282
    FCOMPP                              ; 005a6284
    FNSTSW AX                           ; 005a6286
    SAHF                                ; 005a6288
    JC 0x005a65aa                       ; 005a6289
        ;   XREF to: 005a65aa (CONDITIONAL_JUMP)  ; LAB_005a65aa
    MOV EBX,dword ptr [EBP + 0x6e]      ; 005a628f
    PUSH EBX                            ; 005a6292
    CALL shape_superopt.cpp_CComplexPolygon_getMaterialId_FUN_005a8130 ; 005a6293
        ;   XREF to: 005a8130 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_CComplexPolygon_getMaterialId_FUN_005a8130(CComplexPolygon * this_ptr)
    ADD ESP,0x4                         ; 005a6298
    TEST EAX,EAX                        ; 005a629b
    JZ 0x005a65aa                       ; 005a629d
        ;   XREF to: 005a65aa (CONDITIONAL_JUMP)  ; LAB_005a65aa
    MOV ESI,dword ptr [EBP + 0x8e]      ; 005a62a3
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005a62a9
    PUSH ESI                            ; 005a62af
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 005a62b0
    LEA ESI,[EBP + 0xfffffee2]          ; 005a62b6
    LEA EDI,[EBP + 0xfffffeca]          ; 005a62bc
    CALL dword ptr [EAX + 0x24]         ; 005a62c2
    MOV ECX,0x6                         ; 005a62c5
    LEA ESI,[EBP + 0xfffffee2]          ; 005a62ca
    MOVSD.REP ES:EDI,ESI                ; 005a62d0
    LEA EAX,[EBP + 0xfffffeca]          ; 005a62d2
    FLD float ptr [EBP + 0xfffffeca]    ; 005a62d8
    FLD float ptr [EBP + 0xfffffece]    ; 005a62de
    FLD float ptr [EBP + 0xfffffed2]    ; 005a62e4
    LEA EDI,[EBP + -0x66]               ; 005a62ea
    LEA ESI,[EBP + -0x5a]               ; 005a62ed
    FXCH ST2                            ; 005a62f0
    FADD float ptr [EAX + 0xc]          ; 005a62f2
    FXCH                                ; 005a62f5
    FADD float ptr [EAX + 0x10]         ; 005a62f7
    FXCH ST2                            ; 005a62fa
    FADD float ptr [EAX + 0x14]         ; 005a62fc
    FXCH                                ; 005a62ff
    FSTP float ptr [EBP + -0x5a]        ; 005a6301
    FXCH                                ; 005a6304
    FSTP float ptr [EBP + -0x56]        ; 005a6306
    FSTP float ptr [EBP + -0x52]        ; 005a6309
    MOVSD ES:EDI,ESI                    ; 005a630c
    MOVSD ES:EDI,ESI                    ; 005a630d
    MOVSD ES:EDI,ESI                    ; 005a630e
    FLD float ptr [0x005f06a6]          ; 005a630f | DAT_005f06a6
    FLD float ptr [EBP + -0x66]         ; 005a6315
    FMUL ST1                            ; 005a6318
    FLD float ptr [EBP + -0x62]         ; 005a631a
    FMUL ST2                            ; 005a631d
    FLD float ptr [EBP + -0x5e]         ; 005a631f
    FMULP ST3                           ; 005a6322
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005a6324
    LEA EDI,[EBP + -0x4e]               ; 005a632a
    LEA ESI,[EBP + -0x42]               ; 005a632d
    FXCH                                ; 005a6330
    FSTP float ptr [EBP + -0x42]        ; 005a6332
    FSTP float ptr [EBP + -0x3e]        ; 005a6335
    FSTP float ptr [EBP + -0x3a]        ; 005a6338
    MOVSD ES:EDI,ESI                    ; 005a633b
    MOVSD ES:EDI,ESI                    ; 005a633c
    MOVSD ES:EDI,ESI                    ; 005a633d
    XOR EBX,EBX                         ; 005a633e
    MOV dword ptr [EAX + 0x2a8],0x3d4ccccd ; 005a6340
    MOV EAX,dword ptr [EBP + 0x6e]      ; 005a634a
    ADD ESP,0x4                         ; 005a634d
    MOV dword ptr [EBP + 0x72],EAX      ; 005a6350
    CALL unkaddr_005a7eb0.cpp_FUN_005a7ed0 ; 005a6353
        ;   XREF to: 005a7ed0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_005a7eb0.cpp_FUN_005a7ed0()
        ;   Label: LAB_005a6353
    TEST EAX,EAX                        ; 005a6358
    JZ 0x005a65a0                       ; 005a635a
        ;   XREF to: 005a65a0 (CONDITIONAL_JUMP)  ; LAB_005a65a0
    PUSH 0x40c90fdb                     ; 005a6360
    PUSH 0x0                            ; 005a6365
    CALL core_actor.cpp_FUN_0040cf60    ; 005a6367
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    ADD ESP,0x8                         ; 005a636c
    LEA ESI,[EBP + 0xffffff6a]          ; 005a636f
    MOV dword ptr [EBP + 0x76],EAX      ; 005a6375
    PUSH 0x40c90fdb                     ; 005a6378
    FLD float ptr [EBP + 0x76]          ; 005a637d
    PUSH 0x0                            ; 005a6380
    FSTP float ptr [EBP + 0x62]         ; 005a6382
    CALL core_actor.cpp_FUN_0040cf60    ; 005a6385
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    ADD ESP,0x8                         ; 005a638a
    LEA EDI,[EBP + 0xffffff1a]          ; 005a638d
    MOV dword ptr [EBP + 0x76],EAX      ; 005a6393
    PUSH 0x40c90fdb                     ; 005a6396
    FLD float ptr [EBP + 0x76]          ; 005a639b
    PUSH 0x0                            ; 005a639e
    FSTP float ptr [EBP + 0x66]         ; 005a63a0
    CALL core_actor.cpp_FUN_0040cf60    ; 005a63a3
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    ADD ESP,0x8                         ; 005a63a8
    MOV dword ptr [EBP + 0x76],EAX      ; 005a63ab
    SUB ESP,0x4                         ; 005a63ae
    MOV EAX,dword ptr [EBP + 0x76]      ; 005a63b1
    MOV dword ptr [ESP],EAX             ; 005a63b4
    CALL core_xform.cpp_quaternionFromAngleZ_FUN_00594020 ; 005a63b7
        ;   XREF to: 00594020 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleZ_FUN_00594020()
    ADD ESP,0x4                         ; 005a63bc
    LEA EAX,[EBP + 0xffffff1a]          ; 005a63bf
    LEA ESI,[EBP + 0xffffff6a]          ; 005a63c5
    PUSH EAX                            ; 005a63cb
    MOVSD ES:EDI,ESI                    ; 005a63cc
    MOVSD ES:EDI,ESI                    ; 005a63cd
    MOVSD ES:EDI,ESI                    ; 005a63ce
    MOVSD ES:EDI,ESI                    ; 005a63cf
    PUSH dword ptr [EBP + 0x66]         ; 005a63d0
    LEA ESI,[EBP + 0xffffff2a]          ; 005a63d3
    LEA EDI,[EBP + 0xffffff7a]          ; 005a63d9
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00593fe0 ; 005a63df
        ;   XREF to: 00593fe0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00593fe0()
    ADD ESP,0x4                         ; 005a63e4
    LEA EAX,[EBP + 0xffffff7a]          ; 005a63e7
    LEA ESI,[EBP + 0xffffff2a]          ; 005a63ed
    PUSH EAX                            ; 005a63f3
    MOVSD ES:EDI,ESI                    ; 005a63f4
    MOVSD ES:EDI,ESI                    ; 005a63f5
    MOVSD ES:EDI,ESI                    ; 005a63f6
    MOVSD ES:EDI,ESI                    ; 005a63f7
    PUSH dword ptr [EBP + 0x62]         ; 005a63f8
    LEA ESI,[EBP + 0xfffffefa]          ; 005a63fb
    LEA EDI,[EBP + 0xffffff4a]          ; 005a6401
    CALL core_xform.cpp_quaternionFromAngleX_FUN_00593fa0 ; 005a6407
        ;   XREF to: 00593fa0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_00593fa0()
    LEA ESI,[EBP + 0xfffffefa]          ; 005a640c
    LEA EAX,[EBP + 0xffffff4a]          ; 005a6412
    ADD ESP,0x4                         ; 005a6418
    MOVSD ES:EDI,ESI                    ; 005a641b
    MOVSD ES:EDI,ESI                    ; 005a641c
    MOVSD ES:EDI,ESI                    ; 005a641d
    MOVSD ES:EDI,ESI                    ; 005a641e
    PUSH EAX                            ; 005a641f
    LEA ESI,[EBP + 0xffffff3a]          ; 005a6420
    LEA EDI,[EBP + -0x76]               ; 005a6426
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 005a6429
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    LEA ESI,[EBP + 0xffffff3a]          ; 005a642e
    LEA EAX,[EBP + -0x76]               ; 005a6434
    ADD ESP,0x8                         ; 005a6437
    MOVSD ES:EDI,ESI                    ; 005a643a
    MOVSD ES:EDI,ESI                    ; 005a643b
    MOVSD ES:EDI,ESI                    ; 005a643c
    MOVSD ES:EDI,ESI                    ; 005a643d
    PUSH EAX                            ; 005a643e
    LEA ESI,[EBP + 0xffffff0a]          ; 005a643f
    LEA EDI,[EBP + 0xffffff5a]          ; 005a6445
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 005a644b
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    LEA ESI,[EBP + 0xffffff0a]          ; 005a6450
    LEA EAX,[EBP + 0xffffff5a]          ; 005a6456
    ADD ESP,0x8                         ; 005a645c
    MOVSD ES:EDI,ESI                    ; 005a645f
    MOVSD ES:EDI,ESI                    ; 005a6460
    MOVSD ES:EDI,ESI                    ; 005a6461
    MOVSD ES:EDI,ESI                    ; 005a6462
    PUSH EAX                            ; 005a6463
    LEA ESI,[EBP + 0xfffffe9a]          ; 005a6464
    CALL core_xform.cpp_quaternionToMatrix3x4_FUN_00593a10 ; 005a646a
        ;   XREF to: 00593a10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionToMatrix3x4_FUN_00593a10()
    ADD ESP,0x4                         ; 005a646f
    LEA EAX,[EBP + 0xfffffe6a]          ; 005a6472
    PUSH EAX                            ; 005a6478
    LEA EDI,[EBP + 0xfffffe6a]          ; 005a6479
    MOV ECX,0xc                         ; 005a647f
    PUSH 0x3fc00000                     ; 005a6484
    LEA ESI,[EBP + 0xfffffe9a]          ; 005a6489
    PUSH 0x3f000000                     ; 005a648f
    MOVSD.REP ES:EDI,ESI                ; 005a6494
    CALL core_actor.cpp_FUN_0040cf60    ; 005a6496
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    XOR EDI,EDI                         ; 005a649b
    MOV dword ptr [EBP + 0x76],EAX      ; 005a649d
    MOV dword ptr [EBP + 0x6],EDI       ; 005a64a0
    ADD ESP,0x8                         ; 005a64a3
    MOV EAX,dword ptr [EBP + 0x76]      ; 005a64a6
    MOV dword ptr [EBP + 0x6a],EAX      ; 005a64a9
    MOV EAX,dword ptr [EBP + 0x6a]      ; 005a64ac
    MOV dword ptr [EBP + 0xe],EDI       ; 005a64af
    MOV dword ptr [EBP + 0xa],EAX       ; 005a64b2
    LEA EAX,[EBP + 0x6]                 ; 005a64b5
    PUSH EAX                            ; 005a64b8
    LEA ESI,[EBP + -0x2a]               ; 005a64b9
    LEA EDI,[EBP + 0x36]                ; 005a64bc
    CALL core_xform.cpp_FUN_00591530    ; 005a64bf
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    LEA ESI,[EBP + -0x2a]               ; 005a64c4
    MOV ECX,0x40a00000                  ; 005a64c7
    LEA EAX,[EBP + -0x36]               ; 005a64cc
    XOR EDX,EDX                         ; 005a64cf
    ADD ESP,0x8                         ; 005a64d1
    MOV dword ptr [EBP + -0x36],EDX     ; 005a64d4
    MOV dword ptr [EBP + -0x32],ECX     ; 005a64d7
    MOV dword ptr [EBP + -0x2e],EDX     ; 005a64da
    MOVSD ES:EDI,ESI                    ; 005a64dd
    MOVSD ES:EDI,ESI                    ; 005a64de
    MOVSD ES:EDI,ESI                    ; 005a64df
    PUSH EDX                            ; 005a64e0
    FLD float ptr [EBP + 0x36]          ; 005a64e1
    FLD float ptr [EBP + 0x3a]          ; 005a64e4
    FLD float ptr [EBP + 0x3e]          ; 005a64e7
    LEA EDI,[EBP + -0x1e]               ; 005a64ea
    LEA ESI,[EBP + -0x12]               ; 005a64ed
    PUSH EAX                            ; 005a64f0
    LEA EAX,[EBP + 0x12]                ; 005a64f1
    FXCH ST2                            ; 005a64f4
    FADD float ptr [EBP + -0x4e]        ; 005a64f6
    FXCH                                ; 005a64f9
    FADD float ptr [EBP + -0x4a]        ; 005a64fb
    FXCH ST2                            ; 005a64fe
    FADD float ptr [EBP + -0x46]        ; 005a6500
    FXCH                                ; 005a6503
    FSTP float ptr [EBP + -0x12]        ; 005a6505
    FXCH                                ; 005a6508
    FSTP float ptr [EBP + -0xe]         ; 005a650a
    FSTP float ptr [EBP + -0xa]         ; 005a650d
    MOVSD ES:EDI,ESI                    ; 005a6510
    MOVSD ES:EDI,ESI                    ; 005a6511
    MOVSD ES:EDI,ESI                    ; 005a6512
    PUSH EAX                            ; 005a6513
    FLD float ptr [EBP + -0x1e]         ; 005a6514
    FLD float ptr [EBP + -0x1a]         ; 005a6517
    LEA EAX,[EBP + -0x1e]               ; 005a651a
    FLD float ptr [EBP + -0x16]         ; 005a651d
    PUSH EAX                            ; 005a6520
    LEA EDI,[EBP + 0x12]                ; 005a6521
    LEA ESI,[EBP + 0x2a]                ; 005a6524
    PUSH 0x0                            ; 005a6527
    FXCH ST2                            ; 005a6529
    FSUB float ptr [EBP + -0x4e]        ; 005a652b
    FXCH                                ; 005a652e
    FSUB float ptr [EBP + -0x4a]        ; 005a6530
    FXCH ST2                            ; 005a6533
    FSUB float ptr [EBP + -0x46]        ; 005a6535
    PUSH 0x3e4ccccd                     ; 005a6538
    FXCH                                ; 005a653d
    FSTP float ptr [EBP + 0x2a]         ; 005a653f
    FXCH                                ; 005a6542
    FSTP float ptr [EBP + 0x2e]         ; 005a6544
    FSTP float ptr [EBP + 0x32]         ; 005a6547
    PUSH 0x0                            ; 005a654a
    MOVSD ES:EDI,ESI                    ; 005a654c
    MOVSD ES:EDI,ESI                    ; 005a654d
    MOVSD ES:EDI,ESI                    ; 005a654e
    CALL core_actor.cpp_FUN_0040cf60    ; 005a654f
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    ADD ESP,0x8                         ; 005a6554
    MOV dword ptr [EBP + 0x76],EAX      ; 005a6557
    SUB ESP,0x4                         ; 005a655a
    MOV EAX,dword ptr [EBP + 0x76]      ; 005a655d
    MOV dword ptr [ESP],EAX             ; 005a6560
    PUSH 0x3f19999a                     ; 005a6563
    PUSH 0x3e99999a                     ; 005a6568
    CALL core_actor.cpp_FUN_0040cf60    ; 005a656d
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    ADD ESP,0x8                         ; 005a6572
    MOV dword ptr [EBP + 0x76],EAX      ; 005a6575
    SUB ESP,0x4                         ; 005a6578
    MOV EAX,dword ptr [EBP + 0x76]      ; 005a657b
    MOV dword ptr [ESP],EAX             ; 005a657e
    PUSH 0x0                            ; 005a6581
    PUSH 0x3f333333                     ; 005a6583
    PUSH 0x0                            ; 005a6588
    PUSH 0x3f800000                     ; 005a658a
    MOV EDI,dword ptr [EBP + 0x72]      ; 005a658f
    PUSH 0x3f800000                     ; 005a6592
    PUSH EDI                            ; 005a6597
    CALL unkafter_superopt.cpp_FUN_005a8300 ; 005a6598
        ;   XREF to: 005a8300 (UNCONDITIONAL_CALL)  ; undefined unkafter_superopt.cpp_FUN_005a8300()
    ADD ESP,0x34                        ; 005a659d
    INC EBX                             ; 005a65a0
        ;   Label: LAB_005a65a0
    CMP EBX,0x14                        ; 005a65a1
    JL 0x005a6353                       ; 005a65a4
        ;   XREF to: 005a6353 (CONDITIONAL_JUMP)  ; LAB_005a6353
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005a65aa
        ;   Label: LAB_005a65aa
    FLD float ptr [EAX + 0x2a8]         ; 005a65b0
    FLDZ                                ; 005a65b6
    FCOMPP                              ; 005a65b8
    FNSTSW AX                           ; 005a65ba
    SAHF                                ; 005a65bc
    JNC 0x005a65e8                      ; 005a65bd
        ;   XREF to: 005a65e8 (CONDITIONAL_JUMP)  ; LAB_005a65e8
    LEA ESP,[EBP + 0x7a]                ; 005a65bf
        ;   Label: LAB_005a65bf
    POP EBP                             ; 005a65c2
    POP EDI                             ; 005a65c3
    POP ESI                             ; 005a65c4
    POP EBX                             ; 005a65c5
    RET                                 ; 005a65c6
    MOV EDX,dword ptr [EBP + 0x8e]      ; 005a65c7
        ;   Label: LAB_005a65c7
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005a65cd
    PUSH EDX                            ; 005a65d3
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 005a65d4
    CALL dword ptr [EAX + 0x17c]        ; 005a65da
    ADD ESP,0x4                         ; 005a65e0
    JMP 0x005a6233                      ; 005a65e3
        ;   XREF to: 005a6233 (UNCONDITIONAL_JUMP)  ; LAB_005a6233
    MOV EDI,dword ptr [EBP + 0x8e]      ; 005a65e8
        ;   Label: LAB_005a65e8
    ADD EDI,0x198                       ; 005a65ee
    PUSH EDI                            ; 005a65f4
    CALL shape_superopt.cpp_CComplexPolygon_getMaterialId_FUN_005a8130 ; 005a65f5
        ;   XREF to: 005a8130 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_CComplexPolygon_getMaterialId_FUN_005a8130(CComplexPolygon * this_ptr)
    ADD ESP,0x4                         ; 005a65fa
    TEST EAX,EAX                        ; 005a65fd
    JZ 0x005a65bf                       ; 005a65ff
        ;   XREF to: 005a65bf (CONDITIONAL_JUMP)  ; LAB_005a65bf
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005a6601
    XOR EBX,EBX                         ; 005a6607
    MOV dword ptr [EAX + 0x2a8],0x3d4ccccd ; 005a6609
    PUSH 0x40c90fdb                     ; 005a6613
        ;   Label: LAB_005a6613
    PUSH 0x0                            ; 005a6618
    CALL core_actor.cpp_FUN_0040cf60    ; 005a661a
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [EBP + 0x76],EAX      ; 005a661f
    FLD float ptr [EBP + 0x76]          ; 005a6622
    FLD ST0                             ; 005a6625
    FCOS                                ; 005a6627
    FXCH                                ; 005a6629
    FSIN                                ; 005a662b
    FXCH                                ; 005a662d
    FLD double ptr [0x005f06ae]         ; 005a662f | DAT_005f06ae
    FXCH                                ; 005a6635
    FMUL ST1                            ; 005a6637
    ADD ESP,0x8                         ; 005a6639
    FXCH ST2                            ; 005a663c
    FMULP                               ; 005a663e
    PUSH 0x3f800000                     ; 005a6640
    XOR EAX,EAX                         ; 005a6645
    PUSH 0x0                            ; 005a6647
    MOV dword ptr [EBP + 0x52],EAX      ; 005a6649
    FXCH                                ; 005a664c
    FSTP float ptr [EBP + 0x76]         ; 005a664e
    MOV EAX,dword ptr [EBP + 0x76]      ; 005a6651
    FSTP float ptr [EBP + 0x4e]         ; 005a6654
    MOV dword ptr [EBP + 0x56],EAX      ; 005a6657
    CALL core_actor.cpp_FUN_0040cf60    ; 005a665a
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [EBP + 0x76],EAX      ; 005a665f
    ADD ESP,0x8                         ; 005a6662
    FLD float ptr [EBP + 0x76]          ; 005a6665
    FCOMP double ptr [0x005f06b6]       ; 005a6668 | DAT_005f06b6
    FNSTSW AX                           ; 005a666e
    SAHF                                ; 005a6670
    JA 0x005a66f1                       ; 005a6671
        ;   XREF to: 005a66f1 (CONDITIONAL_JUMP)  ; LAB_005a66f1
    LEA EAX,[EBP + 0x42]                ; 005a6677
    CMP EAX,0x265370c                   ; 005a667a
    JZ 0x005a6699                       ; 005a667f
        ;   XREF to: 005a6699 (CONDITIONAL_JUMP)  ; LAB_005a6699
    MOV EAX,[0x0265370c]                ; 005a6681 | DAT_0265370c
    MOV dword ptr [EBP + 0x42],EAX      ; 005a6686
    MOV EAX,[0x02653710]                ; 005a6689 | DAT_02653710
    MOV dword ptr [EBP + 0x46],EAX      ; 005a668e
    MOV EAX,[0x02653714]                ; 005a6691 | DAT_02653714
    MOV dword ptr [EBP + 0x4a],EAX      ; 005a6696
    MOV EAX,0x3fc00000                  ; 005a6699
        ;   Label: LAB_005a6699
    PUSH 0x1                            ; 005a669e
    MOV dword ptr [EBP + 0x22],EAX      ; 005a66a0
    LEA EAX,[EBP + 0x1e]                ; 005a66a3
    PUSH EAX                            ; 005a66a6
    LEA EAX,[EBP + 0x42]                ; 005a66a7
    PUSH EAX                            ; 005a66aa
    LEA EAX,[EBP + 0x4e]                ; 005a66ab
    PUSH EAX                            ; 005a66ae
    PUSH 0x3eeb851f                     ; 005a66af
    PUSH 0x3f800000                     ; 005a66b4
    PUSH 0x3f07ae14                     ; 005a66b9
    PUSH 0x0                            ; 005a66be
    PUSH 0x3f000000                     ; 005a66c0
    PUSH 0x0                            ; 005a66c5
    PUSH 0x3f800000                     ; 005a66c7
    INC EBX                             ; 005a66cc
    PUSH 0x3f800000                     ; 005a66cd
    XOR ESI,ESI                         ; 005a66d2
    PUSH EDI                            ; 005a66d4
    MOV dword ptr [EBP + 0x1e],ESI      ; 005a66d5
    MOV dword ptr [EBP + 0x26],ESI      ; 005a66d8
    CALL unkafter_superopt.cpp_FUN_005a8300 ; 005a66db
        ;   XREF to: 005a8300 (UNCONDITIONAL_CALL)  ; undefined unkafter_superopt.cpp_FUN_005a8300()
    ADD ESP,0x34                        ; 005a66e0
    CMP EBX,0x14                        ; 005a66e3
    JGE 0x005a65bf                      ; 005a66e6
        ;   XREF to: 005a65bf (CONDITIONAL_JUMP)  ; LAB_005a65bf
    JMP 0x005a6613                      ; 005a66ec
        ;   XREF to: 005a6613 (UNCONDITIONAL_JUMP)  ; LAB_005a6613
    MOV ECX,0x3f000000                  ; 005a66f1
        ;   Label: LAB_005a66f1
    LEA EAX,[EBP + -0x6]                ; 005a66f6
    LEA ESI,[EBP + 0x42]                ; 005a66f9
    XOR EDX,EDX                         ; 005a66fc
    MOV dword ptr [EBP + -0x2],ECX      ; 005a66fe
    MOV dword ptr [EBP + 0x2],EDX       ; 005a6701
    MOV dword ptr [EBP + -0x6],EDX      ; 005a6704
    CMP ESI,EAX                         ; 005a6707
    JZ 0x005a6699                       ; 005a6709
        ;   XREF to: 005a6699 (CONDITIONAL_JUMP)  ; LAB_005a6699
    MOV dword ptr [EBP + 0x46],ECX      ; 005a670b
    MOV dword ptr [EBP + 0x4a],EDX      ; 005a670e
    MOV dword ptr [EBP + 0x42],EDX      ; 005a6711
    JMP 0x005a6699                      ; 005a6714
        ;   XREF to: 005a6699 (UNCONDITIONAL_JUMP)  ; LAB_005a6699

