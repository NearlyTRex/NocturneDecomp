; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_stranger_cpp_FUN_0056a240(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x158]:8  local_158
; undefined        Stack[-0x150]:1  local_150
; undefined        Stack[-0x138]:1  local_138
; undefined        Stack[-0xf0]:1  local_f0
; undefined        Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_stranger.cpp_FUN_0056e4d0 at 0056e731
;
; Referenced Globals:
;   TerminatedCString s_Climbing_ladder_s_005ebaa5
;   undefined4 DAT_005ebabd
;   undefined4 DAT_005ebac5
;   undefined4 DAT_005ebacd
;   undefined4 DAT_005ebad5
;   undefined4 DAT_005ebadd
;   undefined4 DAT_005ebae5
;   CConsole* g_CConsolePtr = 007c158c
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   CConsole g_CConsoleInstance
;   undefined4 g_CLadderClassInfo.name_hash
;   undefined4 g_CDemonSetInstance.field1364324_0x14d164
;   undefined4 g_CDemonSetInstance.field1364328_0x14d168
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_charactr.cpp_FUN_0042a5a0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_vecdir.cpp_FUN_005838f0
;   engine_console.cpp_FUN_00436710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056a240
        ;   Label: core_stranger.cpp_FUN_0056a240
    PUSH ESI                            ; 0056a241
    PUSH EDI                            ; 0056a242
    PUSH EBP                            ; 0056a243
    MOV EBP,ESP                         ; 0056a244
    SUB ESP,0x148                       ; 0056a246
    AND ESP,0xfffffff8                  ; 0056a24c
    PUSH 0x0                            ; 0056a24f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056a251
    PUSH EAX                            ; 0056a254
    MOV dword ptr [EAX + 0x25614],0x0   ; 0056a255
    CALL core_charactr.cpp_FUN_0042a5a0 ; 0056a25f
        ;   XREF to: 0042a5a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042a5a0()
    MOV dword ptr [ESP + 0x14c],EAX     ; 0056a264
    FLD float ptr [ESP + 0x14c]         ; 0056a26b
    ADD ESP,0x8                         ; 0056a272
    FCOMP double ptr [0x005ebabd]       ; 0056a275 | DAT_005ebabd
    FNSTSW AX                           ; 0056a27b
    SAHF                                ; 0056a27d
    JC 0x0056a2c2                       ; 0056a27e
        ;   XREF to: 0056a2c2 (CONDITIONAL_JUMP)  ; LAB_0056a2c2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056a280
    MOV ECX,dword ptr [EAX + 0x2620]    ; 0056a283
    TEST ECX,ECX                        ; 0056a289
    JNZ 0x0056a2c2                      ; 0056a28b
        ;   XREF to: 0056a2c2 (CONDITIONAL_JUMP)  ; LAB_0056a2c2
    CMP dword ptr [EAX + 0x2698],0x0    ; 0056a28d
    JNZ 0x0056a2c2                      ; 0056a294
        ;   XREF to: 0056a2c2 (CONDITIONAL_JUMP)  ; LAB_0056a2c2
    MOV dword ptr [ESP + 0x13c],ECX     ; 0056a296
    ADD EAX,0x20                        ; 0056a29d
    MOV dword ptr [ESP + 0x138],ECX     ; 0056a2a0
    MOV dword ptr [ESP + 0x134],EAX     ; 0056a2a7
    MOV EAX,[0x0061b5a8]                ; 0056a2ae | g_CDemonSetPtr
        ;   Label: LAB_0056a2ae
    MOV EBX,dword ptr [ESP + 0x13c]     ; 0056a2b3
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 0056a2ba | g_CDemonSetInstance.field1364324_0x14d164
    JL 0x0056a2ed                       ; 0056a2c0
        ;   XREF to: 0056a2ed (CONDITIONAL_JUMP)  ; LAB_0056a2ed
    XOR EAX,EAX                         ; 0056a2c2
        ;   Label: LAB_0056a2c2
    MOV ESP,EBP                         ; 0056a2c4
    POP EBP                             ; 0056a2c6
    POP EDI                             ; 0056a2c7
    POP ESI                             ; 0056a2c8
    POP EBX                             ; 0056a2c9
    RET                                 ; 0056a2ca
    MOV EBX,dword ptr [ESP + 0x13c]     ; 0056a2cb
        ;   Label: LAB_0056a2cb
    MOV ECX,dword ptr [ESP + 0x138]     ; 0056a2d2
    INC EBX                             ; 0056a2d9
    ADD ECX,0x4                         ; 0056a2da
    MOV dword ptr [ESP + 0x13c],EBX     ; 0056a2dd
    MOV dword ptr [ESP + 0x138],ECX     ; 0056a2e4
    JMP 0x0056a2ae                      ; 0056a2eb
        ;   XREF to: 0056a2ae (UNCONDITIONAL_JUMP)  ; LAB_0056a2ae
    MOV ECX,dword ptr [ESP + 0x138]     ; 0056a2ed
        ;   Label: LAB_0056a2ed
    MOV EBX,dword ptr [0x01d02fc0]      ; 0056a2f4 | g_CLadderClassInfo.name_hash
    ADD EAX,ECX                         ; 0056a2fa
    PUSH EBX                            ; 0056a2fc
    MOV EAX,dword ptr [EAX + 0x14d168]  ; 0056a2fd | g_CDemonSetInstance.field1364328_0x14d168
    PUSH EAX                            ; 0056a303
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0056a304
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 0056a309
    MOV EBX,EAX                         ; 0056a30c
    MOV dword ptr [ESP + 0x140],EAX     ; 0056a30e
    TEST EAX,EAX                        ; 0056a315
    JZ 0x0056a2cb                       ; 0056a317
        ;   XREF to: 0056a2cb (CONDITIONAL_JUMP)  ; LAB_0056a2cb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056a319
    FLD float ptr [EAX + 0x24]          ; 0056a31c
    FSUB float ptr [EBX + 0x24]         ; 0056a31f
    FABS                                ; 0056a322
    FCOMP double ptr [0x005ebacd]       ; 0056a324 | DAT_005ebacd
    FNSTSW AX                           ; 0056a32a
    SAHF                                ; 0056a32c
    JA 0x0056a2cb                       ; 0056a32d
        ;   XREF to: 0056a2cb (CONDITIONAL_JUMP)  ; LAB_0056a2cb
    MOV ESI,dword ptr [ESP + 0x134]     ; 0056a32f
    PUSH ESI                            ; 0056a336
    PUSH EBX                            ; 0056a337
    LEA ESI,[ESP + 0x70]                ; 0056a338
    LEA EDI,[ESP + 0xf4]                ; 0056a33c
    CALL core_actor.cpp_FUN_00408de0    ; 0056a343
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x70]                ; 0056a348
    ADD ESP,0x8                         ; 0056a34c
    MOVSD ES:EDI,ESI                    ; 0056a34f
    MOVSD ES:EDI,ESI                    ; 0056a350
    MOVSD ES:EDI,ESI                    ; 0056a351
    FLD float ptr [ESP + 0xf4]          ; 0056a352
    FST double ptr [ESP]                ; 0056a359
    FABS                                ; 0056a35c
    FCOMP double ptr [0x005ebad5]       ; 0056a35e | DAT_005ebad5
    FNSTSW AX                           ; 0056a364
    SAHF                                ; 0056a366
    JA 0x0056a2cb                       ; 0056a367
        ;   XREF to: 0056a2cb (CONDITIONAL_JUMP)  ; LAB_0056a2cb
    FLDZ                                ; 0056a36d
    FCOMP double ptr [ESP]              ; 0056a36f
    FNSTSW AX                           ; 0056a372
    SAHF                                ; 0056a374
    JA 0x0056a2cb                       ; 0056a375
        ;   XREF to: 0056a2cb (CONDITIONAL_JUMP)  ; LAB_0056a2cb
    PUSH EBX                            ; 0056a37b
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0056a37c
    LEA ESI,[ESP + 0xc]                 ; 0056a382
    LEA EDI,[ESP + 0x24]                ; 0056a386
    CALL dword ptr [EAX + 0x24]         ; 0056a38a
    MOV ECX,0x6                         ; 0056a38d
    LEA ESI,[ESP + 0xc]                 ; 0056a392
    ADD ESP,0x4                         ; 0056a396
    MOVSD.REP ES:EDI,ESI                ; 0056a399
    FLD float ptr [ESP + 0xec]          ; 0056a39b
    FCOMP float ptr [ESP + 0x2c]        ; 0056a3a2
    FNSTSW AX                           ; 0056a3a6
    SAHF                                ; 0056a3a8
    JBE 0x0056a3d0                      ; 0056a3a9
        ;   XREF to: 0056a3d0 (CONDITIONAL_JUMP)  ; LAB_0056a3d0
    FLD float ptr [ESP + 0x2c]          ; 0056a3ab
    FLD1                                ; 0056a3af
    FADDP                               ; 0056a3b1
    FLD float ptr [ESP + 0xec]          ; 0056a3b3
    FCOMPP                              ; 0056a3ba
    FNSTSW AX                           ; 0056a3bc
    SAHF                                ; 0056a3be
    JA 0x0056a2cb                       ; 0056a3bf
        ;   XREF to: 0056a2cb (CONDITIONAL_JUMP)  ; LAB_0056a2cb
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0056a3c5
    MOV dword ptr [ESP + 0xec],EAX      ; 0056a3c9
    FLD float ptr [ESP + 0xec]          ; 0056a3d0
        ;   Label: LAB_0056a3d0
    FCOMP float ptr [ESP + 0x20]        ; 0056a3d7
    FNSTSW AX                           ; 0056a3db
    SAHF                                ; 0056a3dd
    JNC 0x0056a407                      ; 0056a3de
        ;   XREF to: 0056a407 (CONDITIONAL_JUMP)  ; LAB_0056a407
    FLD float ptr [ESP + 0x20]          ; 0056a3e0
    FADD double ptr [0x005ebadd]        ; 0056a3e4 | DAT_005ebadd
    FLD float ptr [ESP + 0xec]          ; 0056a3ea
    FCOMPP                              ; 0056a3f1
    FNSTSW AX                           ; 0056a3f3
    SAHF                                ; 0056a3f5
    JC 0x0056a2cb                       ; 0056a3f6
        ;   XREF to: 0056a2cb (CONDITIONAL_JUMP)  ; LAB_0056a2cb
    MOV EAX,dword ptr [ESP + 0x20]      ; 0056a3fc
    MOV dword ptr [ESP + 0xec],EAX      ; 0056a400
    FLD float ptr [ESP + 0x20]          ; 0056a407
        ;   Label: LAB_0056a407
    FLD float ptr [ESP + 0x24]          ; 0056a40b
    FLD float ptr [ESP + 0x28]          ; 0056a40f
    LEA EDI,[ESP + 0xc8]                ; 0056a413
    LEA ESI,[ESP + 0x5c]                ; 0056a41a
    FXCH ST2                            ; 0056a41e
    FADD float ptr [ESP + 0x2c]         ; 0056a420
    FXCH                                ; 0056a424
    FADD float ptr [ESP + 0x30]         ; 0056a426
    FXCH ST2                            ; 0056a42a
    FADD float ptr [ESP + 0x34]         ; 0056a42c
    FXCH                                ; 0056a430
    FSTP float ptr [ESP + 0x5c]         ; 0056a432
    FXCH                                ; 0056a436
    FSTP float ptr [ESP + 0x60]         ; 0056a438
    FSTP float ptr [ESP + 0x64]         ; 0056a43c
    MOVSD ES:EDI,ESI                    ; 0056a440
    MOVSD ES:EDI,ESI                    ; 0056a441
    MOVSD ES:EDI,ESI                    ; 0056a442
    FLD float ptr [0x005ebac5]          ; 0056a443 | DAT_005ebac5
    FLD float ptr [ESP + 0xc8]          ; 0056a449
    FMUL ST1                            ; 0056a450
    FLD float ptr [ESP + 0xcc]          ; 0056a452
    FMUL ST2                            ; 0056a459
    FLD float ptr [ESP + 0xd0]          ; 0056a45b
    FMULP ST3                           ; 0056a462
    LEA EDI,[ESP + 0x110]               ; 0056a464
    LEA ESI,[ESP + 0x104]               ; 0056a46b
    FXCH                                ; 0056a472
    FSTP float ptr [ESP + 0x104]        ; 0056a474
    FSTP float ptr [ESP + 0x108]        ; 0056a47b
    FSTP float ptr [ESP + 0x10c]        ; 0056a482
    MOVSD ES:EDI,ESI                    ; 0056a489
    MOVSD ES:EDI,ESI                    ; 0056a48a
    MOVSD ES:EDI,ESI                    ; 0056a48b
    MOV EAX,dword ptr [ESP + 0x118]     ; 0056a48c
    MOV dword ptr [ESP + 0xf4],EAX      ; 0056a493
    LEA EAX,[ESP + 0xec]                ; 0056a49a
    PUSH EAX                            ; 0056a4a1
    MOV EDI,dword ptr [ESP + 0x144]     ; 0056a4a2
    PUSH EDI                            ; 0056a4a9
    LEA ESI,[ESP + 0xe8]                ; 0056a4aa
    LEA EBX,[ESP + 0xf4]                ; 0056a4b1
    CALL core_actor.cpp_FUN_00408d70    ; 0056a4b8
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA EDI,[ESP + 0x58]                ; 0056a4bd
    LEA ESI,[ESP + 0xe8]                ; 0056a4c1
    ADD ESP,0x8                         ; 0056a4c8
    LEA EAX,[ESP + 0x50]                ; 0056a4cb
    MOVSD ES:EDI,ESI                    ; 0056a4cf
    MOVSD ES:EDI,ESI                    ; 0056a4d0
    MOVSD ES:EDI,ESI                    ; 0056a4d1
    CMP EBX,EAX                         ; 0056a4d2
    JZ 0x0056a4f7                       ; 0056a4d4
        ;   XREF to: 0056a4f7 (CONDITIONAL_JUMP)  ; LAB_0056a4f7
    MOV EAX,dword ptr [ESP + 0x50]      ; 0056a4d6
    MOV dword ptr [ESP + 0xec],EAX      ; 0056a4da
    MOV EAX,dword ptr [ESP + 0x54]      ; 0056a4e1
    MOV dword ptr [ESP + 0xf0],EAX      ; 0056a4e5
    MOV EAX,dword ptr [ESP + 0x58]      ; 0056a4ec
    MOV dword ptr [ESP + 0xf4],EAX      ; 0056a4f0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056a4f7
        ;   Label: LAB_0056a4f7
    MOV EAX,dword ptr [EAX + 0x44]      ; 0056a4fa
    MOV dword ptr [ESP + 0x12c],EAX     ; 0056a4fd
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056a504
    MOV EAX,dword ptr [EAX + 0x50]      ; 0056a507
    MOV dword ptr [ESP + 0x124],EAX     ; 0056a50a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056a511
    MOV EAX,dword ptr [EAX + 0x5c]      ; 0056a514
    MOV dword ptr [ESP + 0x11c],EAX     ; 0056a517
    MOV EAX,dword ptr [ESP + 0x140]     ; 0056a51e
    MOV EAX,dword ptr [EAX + 0x44]      ; 0056a525
    MOV dword ptr [ESP + 0x130],EAX     ; 0056a528
    MOV EAX,dword ptr [ESP + 0x140]     ; 0056a52f
    MOV EAX,dword ptr [EAX + 0x50]      ; 0056a536
    MOV dword ptr [ESP + 0x120],EAX     ; 0056a539
    FLD float ptr [ESP + 0x124]         ; 0056a540
    FMUL float ptr [ESP + 0x120]        ; 0056a547
    MOV EAX,dword ptr [ESP + 0x140]     ; 0056a54e
    FLD float ptr [ESP + 0x12c]         ; 0056a555
    FMUL float ptr [ESP + 0x130]        ; 0056a55c
    MOV EAX,dword ptr [EAX + 0x5c]      ; 0056a563
    FADDP                               ; 0056a566
    MOV dword ptr [ESP + 0x128],EAX     ; 0056a568
    FLD float ptr [ESP + 0x11c]         ; 0056a56f
    FMUL float ptr [ESP + 0x128]        ; 0056a576
    FADDP                               ; 0056a57d
    FABS                                ; 0056a57f
    FLD double ptr [0x005ebae5]         ; 0056a581 | DAT_005ebae5
    FCOS                                ; 0056a587
    FCOMPP                              ; 0056a589
    FNSTSW AX                           ; 0056a58b
    SAHF                                ; 0056a58d
    JA 0x0056a2cb                       ; 0056a58e
        ;   XREF to: 0056a2cb (CONDITIONAL_JUMP)  ; LAB_0056a2cb
    MOV EAX,dword ptr [ESP + 0x140]     ; 0056a594
    ADD EAX,0x20                        ; 0056a59b
    PUSH EAX                            ; 0056a59e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056a59f
    PUSH EAX                            ; 0056a5a2
    LEA ESI,[ESP + 0xac]                ; 0056a5a3
    LEA EDI,[ESP + 0xb8]                ; 0056a5aa
    CALL core_actor.cpp_FUN_00408de0    ; 0056a5b1
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0xac]                ; 0056a5b6
    ADD ESP,0x8                         ; 0056a5bd
    MOVSD ES:EDI,ESI                    ; 0056a5c0
    MOVSD ES:EDI,ESI                    ; 0056a5c1
    MOVSD ES:EDI,ESI                    ; 0056a5c2
    FLD float ptr [ESP + 0xb8]          ; 0056a5c3
    FLDZ                                ; 0056a5ca
    FCOMPP                              ; 0056a5cc
    FNSTSW AX                           ; 0056a5ce
    SAHF                                ; 0056a5d0
    JNC 0x0056a2cb                      ; 0056a5d1
        ;   XREF to: 0056a2cb (CONDITIONAL_JUMP)  ; LAB_0056a2cb
    PUSH 0x1                            ; 0056a5d7
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056a5d9
    PUSH 0x2a                           ; 0056a5dc
    ADD EAX,0x2b4                       ; 0056a5de
    MOV EBX,dword ptr [ESP + 0x148]     ; 0056a5e3
    PUSH EAX                            ; 0056a5ea
    MOV dword ptr [EAX + 0x25360],EBX   ; 0056a5eb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0056a5f1
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0056a5f6
    MOV ESI,0x40000000                  ; 0056a5f9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056a5fe
    XOR EDX,EDX                         ; 0056a601
    MOV EBX,EAX                         ; 0056a603
    MOV dword ptr [EAX + 0x10a74],0x0   ; 0056a605
    LEA EAX,[ESP + 0xd4]                ; 0056a60f
    MOV EDI,dword ptr [ESP + 0x140]     ; 0056a616
    PUSH EAX                            ; 0056a61d
    MOV dword ptr [ESP + 0xd8],EDX      ; 0056a61e
    MOV dword ptr [ESP + 0xe0],ESI      ; 0056a625
    PUSH EDI                            ; 0056a62c
    LEA ESI,[ESP + 0x7c]                ; 0056a62d
    MOV dword ptr [ESP + 0xe0],EDX      ; 0056a631
    CALL core_actor.cpp_FUN_00408d70    ; 0056a638
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA EDI,[ESP + 0x100]               ; 0056a63d
    LEA ESI,[ESP + 0x7c]                ; 0056a644
    ADD ESP,0x8                         ; 0056a648
    ADD EBX,0x258c0                     ; 0056a64b
    MOVSD ES:EDI,ESI                    ; 0056a651
    MOVSD ES:EDI,ESI                    ; 0056a652
    MOVSD ES:EDI,ESI                    ; 0056a653
    LEA EAX,[ESP + 0x8c]                ; 0056a654
    FLD float ptr [ESP + 0xf8]          ; 0056a65b
    FLD float ptr [ESP + 0xfc]          ; 0056a662
    FLD float ptr [ESP + 0x100]         ; 0056a669
    LEA EDI,[ESP + 0x8c]                ; 0056a670
    LEA ESI,[ESP + 0x80]                ; 0056a677
    FXCH ST2                            ; 0056a67e
    FSUB float ptr [EBX + 0xfffda760]   ; 0056a680
    FXCH                                ; 0056a686
    FSUB float ptr [EBX + 0xfffda764]   ; 0056a688
    FXCH ST2                            ; 0056a68e
    FSUB float ptr [EBX + 0xfffda768]   ; 0056a690
    FXCH                                ; 0056a696
    FSTP float ptr [ESP + 0x80]         ; 0056a698
    FXCH                                ; 0056a69f
    FSTP float ptr [ESP + 0x84]         ; 0056a6a1
    FSTP float ptr [ESP + 0x88]         ; 0056a6a8
    MOVSD ES:EDI,ESI                    ; 0056a6af
    MOVSD ES:EDI,ESI                    ; 0056a6b0
    MOVSD ES:EDI,ESI                    ; 0056a6b1
    CMP EBX,EAX                         ; 0056a6b2
    JZ 0x0056a6d3                       ; 0056a6b4
        ;   XREF to: 0056a6d3 (CONDITIONAL_JUMP)  ; LAB_0056a6d3
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0056a6b6
    MOV dword ptr [EBX],EAX             ; 0056a6bd
    MOV EAX,dword ptr [ESP + 0x90]      ; 0056a6bf
    MOV dword ptr [EBX + 0x4],EAX       ; 0056a6c6
    MOV EAX,dword ptr [ESP + 0x94]      ; 0056a6c9
    MOV dword ptr [EBX + 0x8],EAX       ; 0056a6d0
    FLD float ptr [ESP + 0xec]          ; 0056a6d3
        ;   Label: LAB_0056a6d3
    FLD float ptr [ESP + 0xf0]          ; 0056a6da
    FLD float ptr [ESP + 0xf4]          ; 0056a6e1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056a6e8
    LEA EDI,[ESP + 0x38]                ; 0056a6eb
    LEA ESI,[ESP + 0x44]                ; 0056a6ef
    FXCH ST2                            ; 0056a6f3
    FSUB float ptr [EAX + 0x20]         ; 0056a6f5
    FXCH                                ; 0056a6f8
    FSUB float ptr [EAX + 0x24]         ; 0056a6fa
    FXCH ST2                            ; 0056a6fd
    FSUB float ptr [EAX + 0x28]         ; 0056a6ff
    FXCH                                ; 0056a702
    FSTP float ptr [ESP + 0x44]         ; 0056a704
    FXCH                                ; 0056a708
    FSTP float ptr [ESP + 0x48]         ; 0056a70a
    FSTP float ptr [ESP + 0x4c]         ; 0056a70e
    LEA EAX,[ESP + 0x38]                ; 0056a712
    MOVSD ES:EDI,ESI                    ; 0056a716
    MOVSD ES:EDI,ESI                    ; 0056a717
    MOVSD ES:EDI,ESI                    ; 0056a718
    PUSH EAX                            ; 0056a719
    LEA ESI,[ESP + 0xc0]                ; 0056a71a
    LEA EDI,[ESP + 0x9c]                ; 0056a721
    CALL core_vecdir.cpp_FUN_005838f0   ; 0056a728
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005838f0()
    LEA ESI,[ESP + 0xc0]                ; 0056a72d
    ADD ESP,0x4                         ; 0056a734
    MOVSD ES:EDI,ESI                    ; 0056a737
    MOVSD ES:EDI,ESI                    ; 0056a738
    MOVSD ES:EDI,ESI                    ; 0056a739
    MOV EBX,dword ptr [EBP + 0x14]      ; 0056a73a
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0056a73d
    MOV dword ptr [EBX + 0x258cc],EAX   ; 0056a744
    MOV EAX,dword ptr [ESP + 0x140]     ; 0056a74a
    PUSH EAX                            ; 0056a751
    PUSH 0x5ebaa5                       ; 0056a752 | = "Climbing ladder %s\n"
    MOV EDX,dword ptr [0x00609ed0]      ; 0056a757 | g_CConsolePtr
    PUSH EDX                            ; 0056a75d | g_CConsoleInstance
    MOV dword ptr [EBX + 0x258d0],0x3f800000 ; 0056a75e
    CALL engine_console.cpp_FUN_00436710 ; 0056a768
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    MOV EAX,0x1                         ; 0056a76d
    ADD ESP,0xc                         ; 0056a772
    MOV ESP,EBP                         ; 0056a775
    POP EBP                             ; 0056a777
    POP EDI                             ; 0056a778
    POP ESI                             ; 0056a779
    POP EBX                             ; 0056a77a
    RET                                 ; 0056a77b

