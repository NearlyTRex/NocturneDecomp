; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_zombie_cpp_FUN_00561010(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_zombie.cpp_FUN_0055ef50 at 005603c9
;
; Referenced Globals:
;   TerminatedCString s_s_can_t_pick_up_s_sombod_0059878e
;   string s_%s_can't_pick_up_%s,_giving_up_005987c0
;   string s_%s_beginning_to_pickup_%s_005987e0
;   string s_..\\core\\zombie.cpp_005987fb
;   string s_Invalid_zombie_object_shape!_0059880e
;   TerminatedCString s_CBodyPart_0059882b
;   TerminatedCString s_s_is_going_to_try_to_pic_00598835
;   undefined4 DAT_0059885e
;   undefined4 DAT_00598866
;   undefined4 DAT_0059886e
;   undefined4 DAT_00598876
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_005be368
;   undefined4 DAT_0077ad0c
;   undefined4 DAT_01cc4800
;   ... and 7 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_actor.cpp_getRandomInt_FUN_0040de00
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;   core_bodypart.cpp_addVector_FUN_00417fc0
;   core_bodypart.cpp_scaleVector_FUN_00417f60
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   core_zombie.cpp_classifyObjectShape_FUN_0055e940
;   core_zombie.cpp_CZombie_canPickupWithHand_FUN_00561880
;   core_zombie.cpp_CZombie_getPickupHandIndex_FUN_005617e0
;   core_zombie.cpp_CZombie_resetChaseState_FUN_005624e0
;   engine_console.cpp_CConsole_printf_FUN_0043ac60
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00561010
        ;   Label: core_zombie.cpp_FUN_00561010
    PUSH ESI                            ; 00561011
    PUSH EDI                            ; 00561012
    PUSH EBP                            ; 00561013
    MOV EBP,ESP                         ; 00561014
    SUB ESP,0x158                       ; 00561016
    AND ESP,0xfffffff8                  ; 0056101c
    MOV ESI,dword ptr [EBP + 0x14]      ; 0056101f
    CMP dword ptr [ESI + 0xbdf0],0x0    ; 00561022
    JL 0x00561083                       ; 00561029
        ;   XREF to: 00561083 (CONDITIONAL_JUMP)  ; LAB_00561083
    FLD float ptr [ESI + 0xbd2c]        ; 0056102b
    FSUB float ptr [EBP + 0x18]         ; 00561031
    FST float ptr [ESI + 0xbd2c]        ; 00561034
    FLDZ                                ; 0056103a
    FCOMPP                              ; 0056103c
    FNSTSW AX                           ; 0056103e
    SAHF                                ; 00561040
    JC 0x0056108c                       ; 00561041
        ;   XREF to: 0056108c (CONDITIONAL_JUMP)  ; LAB_0056108c
    MOV EBX,dword ptr [ESI + 0x24ac]    ; 00561043
        ;   Label: LAB_00561043
    TEST EBX,EBX                        ; 00561049
    JNZ 0x00561083                      ; 0056104b
        ;   XREF to: 00561083 (CONDITIONAL_JUMP)  ; LAB_00561083
    CMP dword ptr [ESI + 0x24f0],0x0    ; 0056104d
    JNZ 0x00561083                      ; 00561054
        ;   XREF to: 00561083 (CONDITIONAL_JUMP)  ; LAB_00561083
    FLD float ptr [ESI + 0xbd30]        ; 00561056
    FLDZ                                ; 0056105c
    FCOMPP                              ; 0056105e
    FNSTSW AX                           ; 00561060
    SAHF                                ; 00561062
    JNC 0x005610c1                      ; 00561063
        ;   XREF to: 005610c1 (CONDITIONAL_JUMP)  ; LAB_005610c1
    FLD float ptr [ESI + 0xbd30]        ; 00561065
    FSUB float ptr [EBP + 0x18]         ; 0056106b
    FST float ptr [ESI + 0xbd30]        ; 0056106e
    FLDZ                                ; 00561074
    FCOMPP                              ; 00561076
    FNSTSW AX                           ; 00561078
    SAHF                                ; 0056107a
    JBE 0x00561083                      ; 0056107b
        ;   XREF to: 00561083 (CONDITIONAL_JUMP)  ; LAB_00561083
    MOV dword ptr [ESI + 0xbd30],EBX    ; 0056107d
    XOR EAX,EAX                         ; 00561083
        ;   Label: LAB_00561083
    MOV ESP,EBP                         ; 00561085
    POP EBP                             ; 00561087
    POP EDI                             ; 00561088
    POP ESI                             ; 00561089
    POP EBX                             ; 0056108a
    RET                                 ; 0056108b
    MOV ECX,dword ptr [ESI + 0xbd28]    ; 0056108c
        ;   Label: LAB_0056108c
    PUSH 0x41200000                     ; 00561092
    INC ECX                             ; 00561097
    PUSH 0x40a00000                     ; 00561098
    MOV dword ptr [ESI + 0xbd28],ECX    ; 0056109d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 005610a3
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x15c],EAX     ; 005610a8
    MOV EAX,dword ptr [ESP + 0x15c]     ; 005610af
    MOV dword ptr [ESI + 0xbd2c],EAX    ; 005610b6
    ADD ESP,0x8                         ; 005610bc
    JMP 0x00561043                      ; 005610bf
        ;   XREF to: 00561043 (UNCONDITIONAL_JUMP)  ; LAB_00561043
    MOV EAX,dword ptr [ESI + 0xbd34]    ; 005610c1
        ;   Label: LAB_005610c1
    LEA EDI,[ESI + 0x20]                ; 005610c7
    TEST EAX,EAX                        ; 005610ca
    JNZ 0x0056114f                      ; 005610cc
        ;   XREF to: 0056114f (CONDITIONAL_JUMP)  ; LAB_0056114f
    MOV dword ptr [ESP + 0x144],EBX     ; 005610d2
    MOV dword ptr [ESP + 0x150],EBX     ; 005610d9
    MOV dword ptr [ESP + 0x14c],EDI     ; 005610e0
    MOV dword ptr [ESP + 0x148],EBX     ; 005610e7
    XOR EDI,EDI                         ; 005610ee
    MOV EAX,[0x005be368]                ; 005610f0 | DAT_005be368
        ;   Label: LAB_005610f0
    MOV EDX,dword ptr [ESP + 0x150]     ; 005610f5
    CMP EDX,dword ptr [EAX + 0x14cd6c]  ; 005610fc | DAT_01fa3ff0
    JGE 0x00561762                      ; 00561102
        ;   XREF to: 00561762 (CONDITIONAL_JUMP)  ; LAB_00561762
    ADD EAX,dword ptr [ESP + 0x148]     ; 00561108
    MOV EBX,dword ptr [EAX + 0x14cd70]  ; 0056110f | DAT_01fa3ff4 | DAT_01fa3ff8
    PUSH EBX                            ; 00561115
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00561116
    CALL dword ptr [EAX + 0x8c]         ; 0056111c
    ADD ESP,0x4                         ; 00561122
    TEST EAX,EAX                        ; 00561125
    JZ 0x005615f5                       ; 00561127
        ;   XREF to: 005615f5 (CONDITIONAL_JUMP)  ; LAB_005615f5
    MOV EDX,dword ptr [ESP + 0x150]     ; 0056112d
        ;   Label: LAB_0056112d
    MOV EAX,dword ptr [ESP + 0x148]     ; 00561134
    INC EDX                             ; 0056113b
    ADD EAX,0x4                         ; 0056113c
    MOV dword ptr [ESP + 0x150],EDX     ; 0056113f
    MOV dword ptr [ESP + 0x148],EAX     ; 00561146
    JMP 0x005610f0                      ; 0056114d
        ;   XREF to: 005610f0 (UNCONDITIONAL_JUMP)  ; LAB_005610f0
    PUSH EAX                            ; 0056114f
        ;   Label: LAB_0056114f
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00561150
    CALL dword ptr [EDX + 0x8c]         ; 00561156
    ADD ESP,0x4                         ; 0056115c
    TEST EAX,EAX                        ; 0056115f
    JNZ 0x005613ea                      ; 00561161
        ;   XREF to: 005613ea (CONDITIONAL_JUMP)  ; LAB_005613ea
    MOV EAX,dword ptr [ESI + 0xbd34]    ; 00561167
    FLD float ptr [EDI]                 ; 0056116d
    FSUB float ptr [EAX + 0x20]         ; 0056116f
    FMUL ST0                            ; 00561172
    FLD float ptr [EDI + 0x8]           ; 00561174
    FSUB float ptr [EAX + 0x28]         ; 00561177
    FMUL ST0                            ; 0056117a
    FADDP                               ; 0056117c
    FSQRT                               ; 0056117e
    FMUL double ptr [0x0059885e]        ; 00561180 | DAT_0059885e
    FSUBR double ptr [0x00598866]       ; 00561186 | DAT_00598866
    FST float ptr [ESP]                 ; 0056118c
    FLD1                                ; 0056118f
    FCOMPP                              ; 00561191
    FNSTSW AX                           ; 00561193
    SAHF                                ; 00561195
    JBE 0x0056119f                      ; 00561196
        ;   XREF to: 0056119f (CONDITIONAL_JUMP)  ; LAB_0056119f
    MOV dword ptr [ESP],0x3f800000      ; 00561198
    FLD float ptr [EBP + 0x18]          ; 0056119f
        ;   Label: LAB_0056119f
    FMUL float ptr [ESP]                ; 005611a2
    MOV EAX,dword ptr [ESI + 0xbd38]    ; 005611a5
    MOV EBX,0xffffffff                  ; 005611ab
    PUSH EAX                            ; 005611b0
    FADD float ptr [ESI + 0xbd30]       ; 005611b1
    PUSH ESI                            ; 005611b7
    FSTP float ptr [ESI + 0xbd30]       ; 005611b8
    CALL core_zombie.cpp_CZombie_getPickupHandIndex_FUN_005617e0 ; 005611be
        ;   XREF to: 005617e0 (UNCONDITIONAL_CALL)  ; undefined core_zombie.cpp_CZombie_getPickupHandIndex_FUN_005617e0()
    ADD ESP,0x8                         ; 005611c3
    MOV EDI,EAX                         ; 005611c6
    TEST EAX,EAX                        ; 005611c8
    JL 0x005613d0                       ; 005611ca
        ;   XREF to: 005613d0 (CONDITIONAL_JUMP)  ; LAB_005613d0
    FLD float ptr [ESI + 0xbd30]        ; 005611d0
    FLDZ                                ; 005611d6
    FCOMPP                              ; 005611d8
    FNSTSW AX                           ; 005611da
    SAHF                                ; 005611dc
    JBE 0x005613d0                      ; 005611dd
        ;   XREF to: 005613d0 (CONDITIONAL_JUMP)  ; LAB_005613d0
    PUSH ESI                            ; 005611e3
    MOV EAX,dword ptr [ESI + 0xbd34]    ; 005611e4
    PUSH EAX                            ; 005611ea
    MOV EDX,dword ptr [EAX + 0x14c]     ; 005611eb
    CALL dword ptr [EDX + 0x7c]         ; 005611f1
    ADD ESP,0x8                         ; 005611f4
    CMP EAX,0x3                         ; 005611f7
    JNZ 0x005613d0                      ; 005611fa
        ;   XREF to: 005613d0 (CONDITIONAL_JUMP)  ; LAB_005613d0
    MOV EDX,dword ptr [ESI + 0xbd38]    ; 00561200
    PUSH EDX                            ; 00561206
    PUSH ESI                            ; 00561207
    CALL core_zombie.cpp_CZombie_canPickupWithHand_FUN_00561880 ; 00561208
        ;   XREF to: 00561880 (UNCONDITIONAL_CALL)  ; undefined core_zombie.cpp_CZombie_canPickupWithHand_FUN_00561880()
    ADD ESP,0x8                         ; 0056120d
    TEST EAX,EAX                        ; 00561210
    JZ 0x005613d0                       ; 00561212
        ;   XREF to: 005613d0 (CONDITIONAL_JUMP)  ; LAB_005613d0
    MOV EAX,dword ptr [ESI + 0xbd38]    ; 00561218
    CMP EAX,0x2                         ; 0056121e
    JNC 0x005614e9                      ; 00561221
        ;   XREF to: 005614e9 (CONDITIONAL_JUMP)  ; LAB_005614e9
    CMP EAX,0x1                         ; 00561227
    JNZ 0x005614f8                      ; 0056122a
        ;   XREF to: 005614f8 (CONDITIONAL_JUMP)  ; LAB_005614f8
    LEA EAX,[ESP + 0x88]                ; 00561230
        ;   Label: LAB_00561230
    MOV EBX,dword ptr [ESI + 0xbd34]    ; 00561237
    PUSH EAX                            ; 0056123d
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0056123e
    PUSH EBX                            ; 00561244
    CALL dword ptr [EDX + 0x14]         ; 00561245
    MOV EAX,0x3f000000                  ; 00561248
    ADD ESP,0x8                         ; 0056124d
    MOV dword ptr [ESP + 0x13c],EAX     ; 00561250
    LEA EAX,[ESP + 0x13c]               ; 00561257
    PUSH EAX                            ; 0056125e
    LEA EAX,[ESP + 0xec]                ; 0056125f
    PUSH EAX                            ; 00561266
    LEA EAX,[ESP + 0x9c]                ; 00561267
    PUSH EAX                            ; 0056126e
    LEA EAX,[ESP + 0xc4]                ; 0056126f
    PUSH EAX                            ; 00561276
    LEA EAX,[ESP + 0x98]                ; 00561277
    PUSH EAX                            ; 0056127e
    CALL core_bodypart.cpp_addVector_FUN_00417fc0 ; 0056127f
        ;   XREF to: 00417fc0 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_addVector_FUN_00417fc0()
    ADD ESP,0xc                         ; 00561284
    PUSH EAX                            ; 00561287
    CALL core_bodypart.cpp_scaleVector_FUN_00417f60 ; 00561288
        ;   XREF to: 00417f60 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_scaleVector_FUN_00417f60()
    ADD ESP,0xc                         ; 0056128d
    LEA EAX,[ESP + 0xe8]                ; 00561290
    PUSH EAX                            ; 00561297
    LEA EAX,[ESP + 0x128]               ; 00561298
    FLD float ptr [ESP + 0x94]          ; 0056129f
    PUSH EAX                            ; 005612a6
    FADD double ptr [0x0059886e]        ; 005612a7 | DAT_0059886e
    PUSH EBX                            ; 005612ad
    FSTP float ptr [ESP + 0xfc]         ; 005612ae
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 005612b5
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    LEA EAX,[ESP + 0x130]               ; 005612ba
    LEA EDX,[ESP + 0xd0]                ; 005612c1
    ADD ESP,0xc                         ; 005612c8
    CMP EDX,EAX                         ; 005612cb
    JZ 0x005612f9                       ; 005612cd
        ;   XREF to: 005612f9 (CONDITIONAL_JUMP)  ; LAB_005612f9
    MOV EAX,dword ptr [ESP + 0x124]     ; 005612cf
    MOV dword ptr [ESP + 0xc4],EAX      ; 005612d6
    MOV EAX,dword ptr [ESP + 0x128]     ; 005612dd
    MOV dword ptr [ESP + 0xc8],EAX      ; 005612e4
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005612eb
    MOV dword ptr [ESP + 0xcc],EAX      ; 005612f2
        ;   Label: LAB_005612f2
    MOV EAX,[0x02dd1184]                ; 005612f9 | DAT_02dd1184
        ;   Label: LAB_005612f9
    MOV dword ptr [ESP + 0xa0],EAX      ; 005612fe
    MOV EAX,[0x02dd1188]                ; 00561305 | DAT_02dd1188
    MOV dword ptr [ESP + 0xa4],EAX      ; 0056130a
    MOV EAX,[0x02dd118c]                ; 00561311 | DAT_02dd118c
    MOV dword ptr [ESP + 0xa8],EAX      ; 00561316
    TEST EDI,EDI                        ; 0056131d
    JNZ 0x00561367                      ; 0056131f
        ;   XREF to: 00561367 (CONDITIONAL_JUMP)  ; LAB_00561367
    MOV EDX,0xbfc00000                  ; 00561321
    LEA EAX,[ESP + 0xa0]                ; 00561326
    MOV dword ptr [ESP + 0xf8],EDI      ; 0056132d
    MOV dword ptr [ESP + 0xf4],EDX      ; 00561334
    LEA EDX,[ESP + 0xf4]                ; 0056133b
    MOV dword ptr [ESP + 0xfc],EDI      ; 00561342
    CMP EAX,EDX                         ; 00561349
    JZ 0x00561367                       ; 0056134b
        ;   XREF to: 00561367 (CONDITIONAL_JUMP)  ; LAB_00561367
    MOV EAX,0xbfc00000                  ; 0056134d
    MOV dword ptr [ESP + 0xa4],EDI      ; 00561352
    MOV dword ptr [ESP + 0xa8],EDI      ; 00561359
    MOV dword ptr [ESP + 0xa0],EAX      ; 00561360
    CMP EDI,0x1                         ; 00561367
        ;   Label: LAB_00561367
    JNZ 0x005613af                      ; 0056136a
        ;   XREF to: 005613af (CONDITIONAL_JUMP)  ; LAB_005613af
    MOV EBX,0x3fc00000                  ; 0056136c
    LEA EDX,[ESP + 0xd0]                ; 00561371
    XOR EDI,EDI                         ; 00561378
    LEA EAX,[ESP + 0xa0]                ; 0056137a
    MOV dword ptr [ESP + 0xd4],EDI      ; 00561381
    MOV dword ptr [ESP + 0xd8],EDI      ; 00561388
    MOV dword ptr [ESP + 0xd0],EBX      ; 0056138f
    CMP EAX,EDX                         ; 00561396
    JZ 0x005613af                       ; 00561398
        ;   XREF to: 005613af (CONDITIONAL_JUMP)  ; LAB_005613af
    MOV dword ptr [ESP + 0xa4],EDI      ; 0056139a
    MOV dword ptr [ESP + 0xa8],EDI      ; 005613a1
    MOV dword ptr [ESP + 0xa0],EBX      ; 005613a8
    PUSH 0x0                            ; 005613af
        ;   Label: LAB_005613af
    LEA EAX,[ESP + 0xa4]                ; 005613b1
    PUSH 0x0                            ; 005613b8
    PUSH EAX                            ; 005613ba
    PUSH 0x0                            ; 005613bb
    LEA EAX,[ESP + 0xd4]                ; 005613bd
    PUSH EAX                            ; 005613c4
    PUSH ESI                            ; 005613c5
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0 ; 005613c6
        ;   XREF to: 004247f0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0()
    ADD ESP,0x18                        ; 005613cb
    MOV EBX,EAX                         ; 005613ce
    TEST EBX,EBX                        ; 005613d0
        ;   Label: LAB_005613d0
    JL 0x0056152b                       ; 005613d2
        ;   XREF to: 0056152b (CONDITIONAL_JUMP)  ; LAB_0056152b
    JG 0x00561592                       ; 005613d8
        ;   XREF to: 00561592 (CONDITIONAL_JUMP)  ; LAB_00561592
    MOV EAX,0x1                         ; 005613de
    MOV ESP,EBP                         ; 005613e3
    POP EBP                             ; 005613e5
    POP EDI                             ; 005613e6
    POP ESI                             ; 005613e7
    POP EBX                             ; 005613e8
    RET                                 ; 005613e9
    MOV EAX,dword ptr [ESI + 0xbd34]    ; 005613ea
        ;   Label: LAB_005613ea
    PUSH EAX                            ; 005613f0
    PUSH ESI                            ; 005613f1
    PUSH 0x59878e                       ; 005613f2 | = "%s can't pick up %s, sombody else bea..."
    MOV EDX,dword ptr [0x005ad350]      ; 005613f7 | PTR_DAT_005ad350
    PUSH EDX                            ; 005613fd | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 005613fe
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0x10                        ; 00561403
    MOV dword ptr [ESI + 0xbd34],EBX    ; 00561406
    PUSH ESI                            ; 0056140c
    MOV dword ptr [ESI + 0xbd30],EBX    ; 0056140d
    CALL core_zombie.cpp_CZombie_resetChaseState_FUN_005624e0 ; 00561413
        ;   XREF to: 005624e0 (UNCONDITIONAL_CALL)  ; undefined core_zombie.cpp_CZombie_resetChaseState_FUN_005624e0()
    ADD ESP,0x4                         ; 00561418
    XOR EAX,EAX                         ; 0056141b
    MOV ESP,EBP                         ; 0056141d
    POP EBP                             ; 0056141f
    POP EDI                             ; 00561420
    POP ESI                             ; 00561421
    POP EBX                             ; 00561422
    RET                                 ; 00561423
    LEA EDX,[ESP + 0x70]                ; 00561424
        ;   Label: LAB_00561424
    MOV EBX,dword ptr [ESI + 0xbd34]    ; 00561428
    PUSH EDX                            ; 0056142e
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0056142f
    PUSH EBX                            ; 00561435
    CALL dword ptr [EAX + 0x14]         ; 00561436
    ADD ESP,0x8                         ; 00561439
    LEA EAX,[ESP + 0x138]               ; 0056143c
    PUSH EAX                            ; 00561443
    LEA EAX,[ESP + 0xb0]                ; 00561444
    PUSH EAX                            ; 0056144b
    LEA EAX,[ESP + 0x84]                ; 0056144c
    PUSH EAX                            ; 00561453
    LEA EAX,[ESP + 0x10c]               ; 00561454
    PUSH EAX                            ; 0056145b
    LEA EAX,[ESP + 0x80]                ; 0056145c
    MOV ECX,0x3f000000                  ; 00561463
    PUSH EAX                            ; 00561468
    MOV dword ptr [ESP + 0x14c],ECX     ; 00561469
    CALL core_bodypart.cpp_addVector_FUN_00417fc0 ; 00561470
        ;   XREF to: 00417fc0 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_addVector_FUN_00417fc0()
    ADD ESP,0xc                         ; 00561475
    PUSH EAX                            ; 00561478
    CALL core_bodypart.cpp_scaleVector_FUN_00417f60 ; 00561479
        ;   XREF to: 00417f60 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_scaleVector_FUN_00417f60()
    ADD ESP,0xc                         ; 0056147e
    LEA EAX,[ESP + 0xac]                ; 00561481
    PUSH EAX                            ; 00561488
    LEA EAX,[ESP + 0x11c]               ; 00561489
    FLD float ptr [ESP + 0x7c]          ; 00561490
    PUSH EAX                            ; 00561494
    FADD double ptr [0x0059886e]        ; 00561495 | DAT_0059886e
    PUSH EBX                            ; 0056149b
    FSTP float ptr [ESP + 0xc0]         ; 0056149c
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 005614a3
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    LEA EDX,[ESP + 0x124]               ; 005614a8
    LEA EAX,[ESP + 0xd0]                ; 005614af
    ADD ESP,0xc                         ; 005614b6
    CMP EAX,EDX                         ; 005614b9
    JZ 0x005612f9                       ; 005614bb
        ;   XREF to: 005612f9 (CONDITIONAL_JUMP)  ; LAB_005612f9
    MOV EAX,dword ptr [ESP + 0x118]     ; 005614c1
    MOV dword ptr [ESP + 0xc4],EAX      ; 005614c8
    MOV EAX,dword ptr [ESP + 0x11c]     ; 005614cf
    MOV dword ptr [ESP + 0xc8],EAX      ; 005614d6
    MOV EAX,dword ptr [ESP + 0x120]     ; 005614dd
    JMP 0x005612f2                      ; 005614e4
        ;   XREF to: 005612f2 (UNCONDITIONAL_JUMP)  ; LAB_005612f2
    JBE 0x00561424                      ; 005614e9
        ;   XREF to: 00561424 (CONDITIONAL_JUMP)  ; LAB_00561424
        ;   Label: LAB_005614e9
    CMP EAX,0x3                         ; 005614ef
    JZ 0x00561230                       ; 005614f2
        ;   XREF to: 00561230 (CONDITIONAL_JUMP)  ; LAB_00561230
    MOV EDX,dword ptr [ESI + 0xbd34]    ; 005614f8
        ;   Label: LAB_005614f8
    LEA EAX,[ESP + 0xc4]                ; 005614fe
    ADD EDX,0x20                        ; 00561505
    CMP EAX,EDX                         ; 00561508
    JZ 0x005612f9                       ; 0056150a
        ;   XREF to: 005612f9 (CONDITIONAL_JUMP)  ; LAB_005612f9
    MOV EAX,dword ptr [EDX]             ; 00561510
    MOV dword ptr [ESP + 0xc4],EAX      ; 00561512
    MOV EAX,dword ptr [EDX + 0x4]       ; 00561519
    MOV dword ptr [ESP + 0xc8],EAX      ; 0056151c
    MOV EAX,dword ptr [EDX + 0x8]       ; 00561523
    JMP 0x005612f2                      ; 00561526
        ;   XREF to: 005612f2 (UNCONDITIONAL_JUMP)  ; LAB_005612f2
    MOV EBX,dword ptr [ESI + 0xbd34]    ; 0056152b
        ;   Label: LAB_0056152b
    PUSH EBX                            ; 00561531
    PUSH ESI                            ; 00561532
    PUSH 0x5987c0                       ; 00561533 | = "%s can't pick up %s, giving up\n"
    MOV EDI,dword ptr [0x005ad350]      ; 00561538 | PTR_DAT_005ad350
    PUSH EDI                            ; 0056153e | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 0056153f
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0x10                        ; 00561544
    MOV dword ptr [ESI + 0xbd34],0x0    ; 00561547
    PUSH ESI                            ; 00561551
    MOV dword ptr [ESI + 0xbd30],0x41a00000 ; 00561552
    CALL core_zombie.cpp_CZombie_resetChaseState_FUN_005624e0 ; 0056155c
        ;   XREF to: 005624e0 (UNCONDITIONAL_CALL)  ; undefined core_zombie.cpp_CZombie_resetChaseState_FUN_005624e0()
    ADD ESP,0x4                         ; 00561561
    XOR EAX,EAX                         ; 00561564
    MOV ESP,EBP                         ; 00561566
    POP EBP                             ; 00561568
    POP EDI                             ; 00561569
    POP ESI                             ; 0056156a
    POP EBX                             ; 0056156b
    RET                                 ; 0056156c
    PUSH 0x1                            ; 0056156d
        ;   Label: LAB_0056156d
    PUSH 0xa                            ; 0056156f
    ADD ESI,0x150                       ; 00561571
        ;   Label: LAB_00561571
    PUSH ESI                            ; 00561577
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00561578
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0056157d
    MOV EAX,0x1                         ; 00561580
    MOV ESP,EBP                         ; 00561585
    POP EBP                             ; 00561587
    POP EDI                             ; 00561588
    POP ESI                             ; 00561589
    POP EBX                             ; 0056158a
    RET                                 ; 0056158b
    PUSH 0x1                            ; 0056158c
        ;   Label: LAB_0056158c
    PUSH 0xc                            ; 0056158e
    JMP 0x00561571                      ; 00561590
        ;   XREF to: 00561571 (UNCONDITIONAL_JUMP)  ; LAB_00561571
    MOV EDI,dword ptr [ESI + 0xbd34]    ; 00561592
        ;   Label: LAB_00561592
    PUSH EDI                            ; 00561598
    PUSH ESI                            ; 00561599
    PUSH 0x5987e0                       ; 0056159a | = "%s beginning to pickup %s\n"
    MOV EAX,[0x005ad350]                ; 0056159f | PTR_DAT_005ad350
    PUSH EAX                            ; 005615a4 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 005615a5
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    MOV EAX,dword ptr [ESI + 0xbd38]    ; 005615aa
    ADD ESP,0x10                        ; 005615b0
    CMP EAX,0x2                         ; 005615b3
    JNC 0x005615bf                      ; 005615b6
        ;   XREF to: 005615bf (CONDITIONAL_JUMP)  ; LAB_005615bf
    CMP EAX,0x1                         ; 005615b8
    JZ 0x0056156d                       ; 005615bb
        ;   XREF to: 0056156d (CONDITIONAL_JUMP)  ; LAB_0056156d
    JMP 0x005615c6                      ; 005615bd
        ;   XREF to: 005615c6 (UNCONDITIONAL_JUMP)  ; LAB_005615c6
    JBE 0x0056158c                      ; 005615bf
        ;   XREF to: 0056158c (CONDITIONAL_JUMP)  ; LAB_0056158c
        ;   Label: LAB_005615bf
    CMP EAX,0x3                         ; 005615c1
    JZ 0x0056156d                       ; 005615c4
        ;   XREF to: 0056156d (CONDITIONAL_JUMP)  ; LAB_0056156d
    MOV EDX,0x5987fb                    ; 005615c6 | = "..\\core\\zombie.cpp"
        ;   Label: LAB_005615c6
    MOV ECX,0x5d0                       ; 005615cb
    PUSH 0x59880e                       ; 005615d0 | = "Invalid zombie object shape!"
    MOV dword ptr [0x01cc4800],EDX      ; 005615d5 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 005615db | DAT_01cc4804
    CALL FUN_004c8440                   ; 005615e1
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 005615e6
    MOV EAX,0x1                         ; 005615e9
    MOV ESP,EBP                         ; 005615ee
    POP EBP                             ; 005615f0
    POP EDI                             ; 005615f1
    POP ESI                             ; 005615f2
    POP EBX                             ; 005615f3
    RET                                 ; 005615f4
    PUSH ESI                            ; 005615f5
        ;   Label: LAB_005615f5
    MOV EAX,dword ptr [EBX + 0x14c]     ; 005615f6
    PUSH EBX                            ; 005615fc
    CALL dword ptr [EAX + 0x7c]         ; 005615fd
    ADD ESP,0x8                         ; 00561600
    CMP EAX,0x3                         ; 00561603
    JNZ 0x0056112d                      ; 00561606
        ;   XREF to: 0056112d (CONDITIONAL_JUMP)  ; LAB_0056112d
    LEA EDX,[ESP + 0x58]                ; 0056160c
    PUSH EDX                            ; 00561610
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00561611
    PUSH EBX                            ; 00561617
    CALL dword ptr [EAX + 0x14]         ; 00561618
    LEA EDX,[EAX + 0xc]                 ; 0056161b
    FLD float ptr [EDX]                 ; 0056161e
    FSUB float ptr [EAX]                ; 00561620
    ADD ESP,0x8                         ; 00561622
    FSTP float ptr [ESP + 0x10c]        ; 00561625
    FLD float ptr [EDX + 0x4]           ; 0056162c
    FSUB float ptr [EAX + 0x4]          ; 0056162f
    FSTP float ptr [ESP + 0x110]        ; 00561632
    FLD float ptr [EDX + 0x8]           ; 00561639
    FSUB float ptr [EAX + 0x8]          ; 0056163c
    LEA EAX,[ESP + 0x10c]               ; 0056163f
    PUSH EAX                            ; 00561646
    FSTP float ptr [ESP + 0x118]        ; 00561647
    CALL core_zombie.cpp_classifyObjectShape_FUN_0055e940 ; 0056164e
        ;   XREF to: 0055e940 (UNCONDITIONAL_CALL)  ; undefined core_zombie.cpp_classifyObjectShape_FUN_0055e940()
    ADD ESP,0x4                         ; 00561653
    MOV dword ptr [ESP + 0x140],EAX     ; 00561656
    TEST EAX,EAX                        ; 0056165d
    JZ 0x0056112d                       ; 0056165f
        ;   XREF to: 0056112d (CONDITIONAL_JUMP)  ; LAB_0056112d
    PUSH EAX                            ; 00561665
    PUSH ESI                            ; 00561666
    CALL core_zombie.cpp_CZombie_canPickupWithHand_FUN_00561880 ; 00561667
        ;   XREF to: 00561880 (UNCONDITIONAL_CALL)  ; undefined core_zombie.cpp_CZombie_canPickupWithHand_FUN_00561880()
    ADD ESP,0x8                         ; 0056166c
    TEST EAX,EAX                        ; 0056166f
    JZ 0x0056112d                       ; 00561671
        ;   XREF to: 0056112d (CONDITIONAL_JUMP)  ; LAB_0056112d
    PUSH 0x59882b                       ; 00561677 | = "CBodyPart"
    PUSH EBX                            ; 0056167c
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 0056167d
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 00561682
    TEST EAX,EAX                        ; 00561685
    JZ 0x005616a0                       ; 00561687
        ;   XREF to: 005616a0 (CONDITIONAL_JUMP)  ; LAB_005616a0
    MOV EDX,dword ptr [ESI + 0xbd28]    ; 00561689
    MOV EAX,dword ptr [EBX + 0x6c]      ; 0056168f
    AND EDX,0x3                         ; 00561692
    AND EAX,0x3                         ; 00561695
    CMP EAX,EDX                         ; 00561698
    JNZ 0x0056112d                      ; 0056169a
        ;   XREF to: 0056112d (CONDITIONAL_JUMP)  ; LAB_0056112d
    LEA EAX,[EBX + 0x20]                ; 005616a0
        ;   Label: LAB_005616a0
    MOV EDX,dword ptr [ESP + 0x14c]     ; 005616a3
    FLD float ptr [EAX]                 ; 005616aa
    FSUB float ptr [EDX]                ; 005616ac
    FSTP float ptr [ESP + 0xdc]         ; 005616ae
    FLD float ptr [EAX + 0x4]           ; 005616b5
    FSUB float ptr [EDX + 0x4]          ; 005616b8
    FST float ptr [ESP + 0xe0]          ; 005616bb
    FMUL float ptr [ESP + 0xe0]         ; 005616c2
    FLD float ptr [EAX + 0x8]           ; 005616c9
    FSUB float ptr [EDX + 0x8]          ; 005616cc
    FXCH                                ; 005616cf
    FST float ptr [ESP + 0xe0]          ; 005616d1
    FMUL float ptr [ESP + 0xe0]         ; 005616d8
    FST float ptr [ESP + 0xe0]          ; 005616df
    FMUL float ptr [ESP + 0xe0]         ; 005616e6
    FLD float ptr [ESP + 0xdc]          ; 005616ed
    FMUL ST0                            ; 005616f4
    FADDP                               ; 005616f6
    FXCH                                ; 005616f8
    FST float ptr [ESP + 0xe4]          ; 005616fa
    FMUL float ptr [ESP + 0xe4]         ; 00561701
    FADDP                               ; 00561708
    FSQRT                               ; 0056170a
    FST float ptr [ESP + 0x4]           ; 0056170c
    FCOMP double ptr [0x00598866]       ; 00561710 | DAT_00598866
    FNSTSW AX                           ; 00561716
    SAHF                                ; 00561718
    JC 0x0056112d                       ; 00561719
        ;   XREF to: 0056112d (CONDITIONAL_JUMP)  ; LAB_0056112d
    FLD float ptr [ESI + 0xbd24]        ; 0056171f
    FMUL float ptr [0x00598876]         ; 00561725 | DAT_00598876
    FCOMP float ptr [ESP + 0x4]         ; 0056172b
    FNSTSW AX                           ; 0056172f
    SAHF                                ; 00561731
    JC 0x0056112d                       ; 00561732
        ;   XREF to: 0056112d (CONDITIONAL_JUMP)  ; LAB_0056112d
    MOV EAX,dword ptr [ESP + 0x140]     ; 00561738
    MOV dword ptr [ESP + EDI*0x1 + 0x30],EAX ; 0056173f
    MOV EAX,dword ptr [ESP + 0x144]     ; 00561743
    ADD EDI,0x4                         ; 0056174a
    INC EAX                             ; 0056174d
    MOV dword ptr [ESP + EDI*0x1 + 0x4],EBX ; 0056174e
    MOV dword ptr [ESP + 0x144],EAX     ; 00561752
    CMP EDI,0x28                        ; 00561759
    JL 0x0056112d                       ; 0056175c
        ;   XREF to: 0056112d (CONDITIONAL_JUMP)  ; LAB_0056112d
    MOV EDX,dword ptr [ESP + 0x144]     ; 00561762
        ;   Label: LAB_00561762
    CMP EDX,0x1                         ; 00561769
    JL 0x00561083                       ; 0056176c
        ;   XREF to: 00561083 (CONDITIONAL_JUMP)  ; LAB_00561083
    LEA EAX,[EDX + -0x1]                ; 00561772
    PUSH EAX                            ; 00561775
    PUSH 0x0                            ; 00561776
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 00561778
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomInt_FUN_0040de00()
    ADD ESP,0x8                         ; 0056177d
    MOV EDX,dword ptr [ESP + EAX*0x4 + 0x8] ; 00561780
    MOV dword ptr [ESI + 0xbd34],EDX    ; 00561784
    MOV EBX,dword ptr [ESI + 0xbd34]    ; 0056178a
    MOV ECX,dword ptr [ESI + 0xbd28]    ; 00561790
    PUSH EBX                            ; 00561796
    MOV EAX,dword ptr [ESP + EAX*0x4 + 0x34] ; 00561797
    MOV dword ptr [ESI + 0xbd30],0xc2200000 ; 0056179b
    PUSH ESI                            ; 005617a5
    INC ECX                             ; 005617a6
    MOV dword ptr [ESI + 0xbd38],EAX    ; 005617a7
    PUSH 0x598835                       ; 005617ad | = "%s is going to try to pick up %s\n"
    MOV dword ptr [ESI + 0xbd28],ECX    ; 005617b2
    MOV ESI,dword ptr [0x005ad350]      ; 005617b8 | PTR_DAT_005ad350
    PUSH ESI                            ; 005617be | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 005617bf
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    MOV EAX,0x1                         ; 005617c4
    ADD ESP,0x10                        ; 005617c9
    MOV ESP,EBP                         ; 005617cc
    POP EBP                             ; 005617ce
    POP EDI                             ; 005617cf
    POP ESI                             ; 005617d0
    POP EBX                             ; 005617d1
    RET                                 ; 005617d2

