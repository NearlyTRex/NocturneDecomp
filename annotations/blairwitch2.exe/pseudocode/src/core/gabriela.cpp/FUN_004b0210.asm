; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gabriela_cpp_FUN_004b0210(CGabriella *this_ptr,float delta_time)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined        Stack[-0x3e0]:1  local_3e0
; undefined        Stack[-0x3b0]:1  local_3b0
; undefined        Stack[-0x380]:1  local_380
; undefined        Stack[-0x350]:1  local_350
; undefined        Stack[-0x320]:1  local_320
; undefined        Stack[-0x2f0]:1  local_2f0
; undefined        Stack[-0x2c0]:1  local_2c0
; undefined        Stack[-0x290]:1  local_290
; undefined        Stack[-0x260]:1  local_260
; undefined        Stack[-0x230]:1  local_230
; undefined        Stack[-0x200]:1  local_200
; undefined        Stack[-0x1d0]:1  local_1d0
; undefined        Stack[-0x1a0]:1  local_1a0
; undefined        Stack[-0x170]:1  local_170
; undefined        Stack[-0x140]:1  local_140
; undefined        Stack[-0x110]:1  local_110
; undefined        Stack[-0xe0]:1  local_e0
; undefined        Stack[-0xb0]:1  local_b0
; undefined        Stack[-0x80]:1  local_80
; undefined4       Stack[-0x78]:4  local_78
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x50]:1  local_50
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_gabriela.cpp_FUN_004ad640 at 004ade30
;
; Referenced Globals:
;   undefined4 s_CCrossbow_005d706a+1
;   undefined4 DAT_005f7334
;   undefined4 DAT_01cb06a0
;   undefined4 DAT_01cb06bc
;   undefined4 DAT_0265370c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
;   core_actor.cpp_FUN_0040c840
;   core_charactr.cpp_FUN_00428e30
;   core_xform.cpp_buildRotationX_FUN_00593240
;   core_xform.cpp_buildRotationY_FUN_005932c0
;   core_xform.cpp_FUN_00591c10
;   core_xform.cpp_FUN_00591de0
;   core_xform.cpp_FUN_00592720
;   core_xform.cpp_multiplyMatrix3x4_FUN_005916b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0210
        ;   Label: core_gabriela.cpp_FUN_004b0210
    PUSH ESI                            ; 004b0211
    PUSH EDI                            ; 004b0212
    PUSH EBP                            ; 004b0213
    MOV EBP,ESP                         ; 004b0214
    SUB ESP,0x3d0                       ; 004b0216
    SUB EBP,0x82                        ; 004b021c
    MOV EBX,dword ptr [EBP + 0x96]      ; 004b0222
    PUSH dword ptr [EBP + 0x9a]         ; 004b0228
    PUSH EBX                            ; 004b022e
    CALL core_charactr.cpp_FUN_00428e30 ; 004b022f
        ;   XREF to: 00428e30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00428e30(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004b0234
    LEA EAX,[EBX + 0x30]                ; 004b0237
    PUSH EAX                            ; 004b023a
    LEA EAX,[EBX + 0x20]                ; 004b023b
    PUSH EAX                            ; 004b023e
    LEA EAX,[EBP + 0xfffffd12]          ; 004b023f
    PUSH EAX                            ; 004b0245
    LEA ESI,[EBX + 0x1134]              ; 004b0246
    CALL core_xform.cpp_FUN_00591c10    ; 004b024c
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    FLD float ptr [EBX + 0x25648]       ; 004b0251
    LEA EAX,[EBX + 0x2437c]             ; 004b0257
    ADD ESP,0xc                         ; 004b025d
    MOV dword ptr [EBP + 0x7e],EAX      ; 004b0260
    FCOMP float ptr [0x005f7334]        ; 004b0263 | DAT_005f7334
    FNSTSW AX                           ; 004b0269
    SAHF                                ; 004b026b
    JC 0x004b04ff                       ; 004b026c
        ;   XREF to: 004b04ff (CONDITIONAL_JUMP)  ; LAB_004b04ff
    MOV EAX,dword ptr [EBP + 0x7e]      ; 004b0272
    MOV EAX,dword ptr [EAX + 0x468]     ; 004b0275
    MOV EDX,dword ptr [EBP + 0x7e]      ; 004b027b
    SHL EAX,0x2                         ; 004b027e
    ADD EAX,EDX                         ; 004b0281
    PUSH 0x2                            ; 004b0283
    MOV EAX,dword ptr [EAX + 0x610]     ; 004b0285
    PUSH EAX                            ; 004b028b
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004b028c
    CALL dword ptr [EDX + 0xe4]         ; 004b0292
    ADD ESP,0x8                         ; 004b0298
    PUSH 0x265370c                      ; 004b029b | DAT_0265370c
    PUSH 0x1cb0644                      ; 004b02a0
    LEA EAX,[EBP + 0xffffff22]          ; 004b02a5
    PUSH EAX                            ; 004b02ab
    CALL core_xform.cpp_FUN_00591c10    ; 004b02ac
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    MOV EDX,dword ptr [0x01cb06bc]      ; 004b02b1 | DAT_01cb06bc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b02b7
    SUB EAX,EDX                         ; 004b02be
    SHL EAX,0x4                         ; 004b02c0
    ADD ESP,0xc                         ; 004b02c3
    ADD EAX,ESI                         ; 004b02c6
    PUSH EAX                            ; 004b02c8
    LEA EAX,[EBP + 0xffffff22]          ; 004b02c9
    PUSH EAX                            ; 004b02cf
    LEA ESI,[EBP + 0xffffff52]          ; 004b02d0
    PUSH 0x3fc90fdb                     ; 004b02d6
    LEA EDI,[EBP + 0xfffffdd2]          ; 004b02db
    CALL core_xform.cpp_buildRotationX_FUN_00593240 ; 004b02e1
        ;   XREF to: 00593240 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildRotationX_FUN_00593240()
    MOV ECX,0xc                         ; 004b02e6
    ADD ESP,0x4                         ; 004b02eb
    LEA EAX,[EBP + 0xfffffdd2]          ; 004b02ee
    LEA ESI,[EBP + 0xffffff52]          ; 004b02f4
    PUSH EAX                            ; 004b02fa
    MOVSD.REP ES:EDI,ESI                ; 004b02fb
    PUSH 0x3fc90fdb                     ; 004b02fd
    LEA ESI,[EBP + -0x1e]               ; 004b0302
    LEA EDI,[EBP + 0xfffffda2]          ; 004b0305
    CALL core_xform.cpp_buildRotationY_FUN_005932c0 ; 004b030b
        ;   XREF to: 005932c0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildRotationY_FUN_005932c0()
    MOV ECX,0xc                         ; 004b0310
    LEA ESI,[EBP + -0x1e]               ; 004b0315
    LEA EAX,[EBP + 0xfffffda2]          ; 004b0318
    ADD ESP,0x4                         ; 004b031e
    MOVSD.REP ES:EDI,ESI                ; 004b0321
    PUSH EAX                            ; 004b0323
    LEA ESI,[EBP + 0xfffffef2]          ; 004b0324
    LEA EDI,[EBP + 0xfffffe02]          ; 004b032a
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 004b0330
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 004b0335
    LEA ESI,[EBP + 0xfffffef2]          ; 004b033a
    LEA EAX,[EBP + 0xfffffe02]          ; 004b0340
    ADD ESP,0x8                         ; 004b0346
    MOVSD.REP ES:EDI,ESI                ; 004b0349
    PUSH EAX                            ; 004b034b
    LEA ESI,[EBP + 0xfffffcb2]          ; 004b034c
    LEA EDI,[EBP + 0xfffffe32]          ; 004b0352
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 004b0358
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 004b035d
    LEA ESI,[EBP + 0xfffffcb2]          ; 004b0362
    LEA EAX,[EBP + 0xfffffe32]          ; 004b0368
    ADD ESP,0x8                         ; 004b036e
    MOVSD.REP ES:EDI,ESI                ; 004b0371
    PUSH EAX                            ; 004b0373
    LEA ESI,[EBP + 0xfffffce2]          ; 004b0374
    LEA EDI,[EBP + 0xfffffd72]          ; 004b037a
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 004b0380
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 004b0385
    LEA ESI,[EBP + 0xfffffce2]          ; 004b038a
    MOV EAX,dword ptr [EBP + 0x7e]      ; 004b0390
    MOVSD.REP ES:EDI,ESI                ; 004b0393
    MOV EAX,dword ptr [EAX + 0x468]     ; 004b0395
    MOV ECX,dword ptr [EBP + 0x7e]      ; 004b039b
    SHL EAX,0x2                         ; 004b039e
    ADD ESP,0x8                         ; 004b03a1
    ADD EAX,ECX                         ; 004b03a4
    PUSH 0x5d706b                       ; 004b03a6 | s_CCrossbow_005d706a+1
    MOV EAX,dword ptr [EAX + 0x610]     ; 004b03ab
    PUSH EAX                            ; 004b03b1
    CALL core_actor.cpp_FUN_0040c840    ; 004b03b2
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004b03b7
    TEST EAX,EAX                        ; 004b03ba
    JZ 0x004b0421                       ; 004b03bc
        ;   XREF to: 004b0421 (CONDITIONAL_JUMP)  ; LAB_004b0421
    LEA EAX,[EBP + 0xfffffd72]          ; 004b03be
    PUSH EAX                            ; 004b03c4
    LEA ESI,[EBP + 0x1e]                ; 004b03c5
    LEA EDI,[EBP + 0x5a]                ; 004b03c8
    CALL core_xform.cpp_FUN_00592720    ; 004b03cb
        ;   XREF to: 00592720 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00592720()
    LEA ESI,[EBP + 0x1e]                ; 004b03d0
    LEA EAX,[EBP + 0xfffffd72]          ; 004b03d3
    ADD ESP,0x4                         ; 004b03d9
    MOVSD ES:EDI,ESI                    ; 004b03dc
    MOVSD ES:EDI,ESI                    ; 004b03dd
    MOVSD ES:EDI,ESI                    ; 004b03de
    PUSH EAX                            ; 004b03df
    LEA ESI,[EBP + 0x36]                ; 004b03e0
    LEA EDI,[EBP + 0x12]                ; 004b03e3
    CALL core_xform.cpp_FUN_00591de0    ; 004b03e6
        ;   XREF to: 00591de0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591de0()
    LEA ESI,[EBP + 0x36]                ; 004b03eb
    LEA EAX,[EBP + 0x12]                ; 004b03ee
    ADD ESP,0x4                         ; 004b03f1
    MOVSD ES:EDI,ESI                    ; 004b03f4
    MOVSD ES:EDI,ESI                    ; 004b03f5
    MOVSD ES:EDI,ESI                    ; 004b03f6
    PUSH EAX                            ; 004b03f7
    FLD float ptr [EBX + 0x2567c]       ; 004b03f8
    FLD1                                ; 004b03fe
    LEA EAX,[EBP + 0x5a]                ; 004b0400
    FSUBRP                              ; 004b0403
    PUSH EAX                            ; 004b0405
    FLD float ptr [EBP + 0x1a]          ; 004b0406
    LEA EAX,[EBP + 0xfffffd72]          ; 004b0409
    FXCH                                ; 004b040f
    FMUL ST1                            ; 004b0411
    PUSH EAX                            ; 004b0413
    FSTP ST1                            ; 004b0414
    FSTP float ptr [EBP + 0x1a]         ; 004b0416
    CALL core_xform.cpp_FUN_00591c10    ; 004b0419
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    ADD ESP,0xc                         ; 004b041e
    LEA EAX,[EBP + 0xfffffd12]          ; 004b0421
        ;   Label: LAB_004b0421
    PUSH EAX                            ; 004b0427
    LEA EAX,[EBP + 0xfffffd72]          ; 004b0428
    PUSH EAX                            ; 004b042e
    LEA ESI,[EBP + -0x7e]               ; 004b042f
    LEA EDI,[EBP + 0xfffffd42]          ; 004b0432
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 004b0438
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 004b043d
    LEA ESI,[EBP + -0x7e]               ; 004b0442
    ADD ESP,0x8                         ; 004b0445
        ;   Label: LAB_004b0445
    MOVSD.REP ES:EDI,ESI                ; 004b0448
    LEA EAX,[EBP + 0xfffffd42]          ; 004b044a
    PUSH EAX                            ; 004b0450
    LEA ESI,[EBP + 0x42]                ; 004b0451
    LEA EDI,[EBP + 0x66]                ; 004b0454
    CALL core_xform.cpp_FUN_00592720    ; 004b0457
        ;   XREF to: 00592720 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00592720()
    LEA ESI,[EBP + 0x42]                ; 004b045c
    LEA EAX,[EBX + 0x2437c]             ; 004b045f
    MOVSD ES:EDI,ESI                    ; 004b0465
    MOVSD ES:EDI,ESI                    ; 004b0466
    MOVSD ES:EDI,ESI                    ; 004b0467
    MOV EDX,dword ptr [EAX + 0x468]     ; 004b0468
    SHL EDX,0x2                         ; 004b046e
    ADD EDX,EAX                         ; 004b0471
    MOV EDX,dword ptr [EDX + 0x610]     ; 004b0473
    MOV dword ptr [EBP + 0x7a],EAX      ; 004b0479
    MOV EAX,dword ptr [EBP + 0x66]      ; 004b047c
    MOV dword ptr [EDX + 0x20],EAX      ; 004b047f
    MOV EAX,dword ptr [EBP + 0x6a]      ; 004b0482
    MOV dword ptr [EDX + 0x24],EAX      ; 004b0485
    MOV EAX,dword ptr [EBP + 0x6e]      ; 004b0488
    ADD ESP,0x4                         ; 004b048b
    MOV dword ptr [EDX + 0x28],EAX      ; 004b048e
    LEA EAX,[EBP + 0xfffffd42]          ; 004b0491
    PUSH EAX                            ; 004b0497
    LEA ESI,[EBP + 0x2a]                ; 004b0498
    LEA EDI,[EBP + 0x4e]                ; 004b049b
    CALL core_xform.cpp_FUN_00591de0    ; 004b049e
        ;   XREF to: 00591de0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591de0()
    LEA ESI,[EBP + 0x2a]                ; 004b04a3
    MOV EAX,dword ptr [EBP + 0x7a]      ; 004b04a6
    MOVSD ES:EDI,ESI                    ; 004b04a9
    MOVSD ES:EDI,ESI                    ; 004b04aa
    MOVSD ES:EDI,ESI                    ; 004b04ab
    MOV EAX,dword ptr [EAX + 0x468]     ; 004b04ac
    MOV EDX,dword ptr [EBP + 0x7a]      ; 004b04b2
    SHL EAX,0x2                         ; 004b04b5
    ADD EAX,EDX                         ; 004b04b8
    MOV EDX,dword ptr [EAX + 0x610]     ; 004b04ba
    LEA EAX,[EBP + 0x4e]                ; 004b04c0
    ADD EDX,0x30                        ; 004b04c3
    ADD ESP,0x4                         ; 004b04c6
    CMP EDX,EAX                         ; 004b04c9
    JZ 0x004b04de                       ; 004b04cb
        ;   XREF to: 004b04de (CONDITIONAL_JUMP)  ; LAB_004b04de
    MOV EAX,dword ptr [EBP + 0x4e]      ; 004b04cd
    MOV dword ptr [EDX],EAX             ; 004b04d0
    MOV EAX,dword ptr [EBP + 0x52]      ; 004b04d2
    MOV dword ptr [EDX + 0x4],EAX       ; 004b04d5
    MOV EAX,dword ptr [EBP + 0x56]      ; 004b04d8
    MOV dword ptr [EDX + 0x8],EAX       ; 004b04db
    MOV EAX,dword ptr [EBX + 0x247e4]   ; 004b04de
        ;   Label: LAB_004b04de
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x2498c] ; 004b04e4
    PUSH EAX                            ; 004b04eb
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0 ; 004b04ec
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004b04f1
    LEA ESP,[EBP + 0x82]                ; 004b04f4
    POP EBP                             ; 004b04fa
    POP EDI                             ; 004b04fb
    POP ESI                             ; 004b04fc
    POP EBX                             ; 004b04fd
    RET                                 ; 004b04fe
    MOV EAX,dword ptr [EBP + 0x7e]      ; 004b04ff
        ;   Label: LAB_004b04ff
    MOV EAX,dword ptr [EAX + 0x468]     ; 004b0502
    MOV EDI,dword ptr [EBP + 0x7e]      ; 004b0508
    SHL EAX,0x2                         ; 004b050b
    ADD EAX,EDI                         ; 004b050e
    PUSH 0x1                            ; 004b0510
    MOV EAX,dword ptr [EAX + 0x610]     ; 004b0512
    PUSH EAX                            ; 004b0518
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004b0519
    CALL dword ptr [EDX + 0xe4]         ; 004b051f
    ADD ESP,0x8                         ; 004b0525
    PUSH 0x1cb065c                      ; 004b0528
    PUSH 0x1cb0650                      ; 004b052d
    LEA EAX,[EBP + 0xfffffe92]          ; 004b0532
    PUSH EAX                            ; 004b0538
    CALL core_xform.cpp_FUN_00591c10    ; 004b0539
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    ADD ESP,0xc                         ; 004b053e
    LEA EAX,[EBP + 0xfffffd12]          ; 004b0541
    MOV EDX,dword ptr [0x01cb06a0]      ; 004b0547 | DAT_01cb06a0
    PUSH EAX                            ; 004b054d
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b054e
    SUB EAX,EDX                         ; 004b0555
    SHL EAX,0x4                         ; 004b0557
    ADD EAX,ESI                         ; 004b055a
    PUSH EAX                            ; 004b055c
    LEA EAX,[EBP + 0xfffffe92]          ; 004b055d
    PUSH EAX                            ; 004b0563
    LEA ESI,[EBP + 0xfffffe62]          ; 004b0564
    LEA EDI,[EBP + 0xfffffec2]          ; 004b056a
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 004b0570
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 004b0575
    LEA ESI,[EBP + 0xfffffe62]          ; 004b057a
    LEA EAX,[EBP + 0xfffffec2]          ; 004b0580
    ADD ESP,0x8                         ; 004b0586
    MOVSD.REP ES:EDI,ESI                ; 004b0589
    PUSH EAX                            ; 004b058b
    LEA ESI,[EBP + -0x4e]               ; 004b058c
    LEA EDI,[EBP + 0xfffffd42]          ; 004b058f
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 004b0595
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 004b059a
    LEA ESI,[EBP + -0x4e]               ; 004b059f
    JMP 0x004b0445                      ; 004b05a2
        ;   XREF to: 004b0445 (UNCONDITIONAL_JUMP)  ; LAB_004b0445

