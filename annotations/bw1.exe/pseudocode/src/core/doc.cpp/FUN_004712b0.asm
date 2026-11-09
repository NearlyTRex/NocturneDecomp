; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_doc_cpp_FUN_004712b0(CDemonActor *param_1)
;
; Local Variables:
; undefined8       Stack[-0x118]:8  local_118
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined        Stack[-0xf8]:1  local_f8
; undefined        Stack[-0xec]:1  local_ec
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
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x68]:1  local_68
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined        Stack[-0x50]:1  local_50
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_doc.cpp_FUN_00474ef0 at 00474f31
;
; Referenced Globals:
;   undefined4 s_actionPending_d_doc_cpp_005da1ab+1
;   undefined4 DAT_005da1d4
;   undefined4 DAT_005da1dc
;   undefined4 DAT_005da1e4
;   undefined4 DAT_005da1ec
;   CEditorTools* g_CEditorToolsPtr = 01c3eb54
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CCrateClassInfo.name_hash
;   undefined4 g_CActorDestinationClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.field1364324_0x14d164
;   undefined4 g_CDemonSetInstance.field1364328_0x14d168
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408bb0
;   core_charactr.cpp_FUN_00434590
;   core_dest.cpp_CActorDestination_acceptsActor_FUN_0045d550
;   core_doc.cpp_FUN_00468b80
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   core_motion.cpp_FUN_00524a40
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00559250
;   core_setcolid.cpp_CDemonSet_init_FUN_00559220
;   core_setcolid.cpp_FUN_005562c0
;   core_setcolid.cpp_FUN_00558450
;   shape_edittool.cpp_FUN_00494340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004712b0
        ;   Label: core_doc.cpp_FUN_004712b0
    PUSH ESI                            ; 004712b1
    PUSH EDI                            ; 004712b2
    PUSH EBP                            ; 004712b3
    MOV EBP,ESP                         ; 004712b4
    SUB ESP,0x108                       ; 004712b6
    AND ESP,0xfffffff8                  ; 004712bc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004712bf
    MOV EDX,dword ptr [EAX + 0x1ff78]   ; 004712c2
    TEST EDX,EDX                        ; 004712c8
    JNZ 0x004713ad                      ; 004712ca
        ;   XREF to: 004713ad (CONDITIONAL_JUMP)  ; LAB_004713ad
    CMP dword ptr [EAX + 0x2628],0x0    ; 004712d0
    JZ 0x004713ad                       ; 004712d7
        ;   XREF to: 004713ad (CONDITIONAL_JUMP)  ; LAB_004713ad
    CMP dword ptr [EAX + 0x2c98],0xe    ; 004712dd
    JZ 0x0047130d                       ; 004712e4
        ;   XREF to: 0047130d (CONDITIONAL_JUMP)  ; LAB_0047130d
    PUSH EDX                            ; 004712e6
    PUSH EAX                            ; 004712e7
    CALL core_charactr.cpp_FUN_00434590 ; 004712e8
        ;   XREF to: 00434590 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434590()
    MOV dword ptr [ESP + 0x10c],EAX     ; 004712ed
    FLD float ptr [ESP + 0x10c]         ; 004712f4
    ADD ESP,0x8                         ; 004712fb
    FCOMP double ptr [0x005da1d4]       ; 004712fe | DAT_005da1d4
    FNSTSW AX                           ; 00471304
    SAHF                                ; 00471306
    JC 0x004713ad                       ; 00471307
        ;   XREF to: 004713ad (CONDITIONAL_JUMP)  ; LAB_004713ad
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047130d
        ;   Label: LAB_0047130d
    PUSH 0x0                            ; 00471310
    ADD EAX,0x158                       ; 00471312
    PUSH EAX                            ; 00471317
    CALL core_motion.cpp_FUN_00524a40   ; 00471318
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x10c],EAX     ; 0047131d
    FLD float ptr [ESP + 0x10c]         ; 00471324
    FLD1                                ; 0047132b
    ADD ESP,0x8                         ; 0047132d
    FCOMPP                              ; 00471330
    FNSTSW AX                           ; 00471332
    SAHF                                ; 00471334
    JA 0x004713ad                       ; 00471335
        ;   XREF to: 004713ad (CONDITIONAL_JUMP)  ; LAB_004713ad
    XOR EDI,EDI                         ; 00471337
    MOV dword ptr [ESP + 0xfc],EDI      ; 00471339
    MOV dword ptr [ESP + 0xf4],EDI      ; 00471340
    MOV EAX,[0x00622c18]                ; 00471347 | g_CDemonSetPtr
        ;   Label: LAB_00471347
    MOV EBX,dword ptr [ESP + 0xfc]      ; 0047134c
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 00471353 | g_CDemonSetInstance.field1364324_0x14d164
    JGE 0x00471648                      ; 00471359
        ;   XREF to: 00471648 (CONDITIONAL_JUMP)  ; LAB_00471648
    MOV ECX,dword ptr [ESP + 0xf4]      ; 0047135f
    MOV EDX,dword ptr [0x0152c398]      ; 00471366 | g_CActorDestinationClassInfo.name_hash
    ADD EAX,ECX                         ; 0047136c
    PUSH EDX                            ; 0047136e
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 0047136f | g_CDemonSetInstance.field1364328_0x14d168
    PUSH EBX                            ; 00471375
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00471376
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 0047137b
    MOV EBX,EAX                         ; 0047137e
    MOV dword ptr [ESP + 0xf0],EAX      ; 00471380
    TEST EAX,EAX                        ; 00471387
    JNZ 0x004713b6                      ; 00471389
        ;   XREF to: 004713b6 (CONDITIONAL_JUMP)  ; LAB_004713b6
    MOV ECX,dword ptr [ESP + 0xfc]      ; 0047138b
        ;   Label: LAB_0047138b
    MOV EDX,dword ptr [ESP + 0xf4]      ; 00471392
    INC ECX                             ; 00471399
    ADD EDX,0x4                         ; 0047139a
    MOV dword ptr [ESP + 0xfc],ECX      ; 0047139d
    MOV dword ptr [ESP + 0xf4],EDX      ; 004713a4
    JMP 0x00471347                      ; 004713ab
        ;   XREF to: 00471347 (UNCONDITIONAL_JUMP)  ; LAB_00471347
    XOR EAX,EAX                         ; 004713ad
        ;   Label: LAB_004713ad
    MOV ESP,EBP                         ; 004713af
    POP EBP                             ; 004713b1
    POP EDI                             ; 004713b2
    POP ESI                             ; 004713b3
    POP EBX                             ; 004713b4
    RET                                 ; 004713b5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004713b6
        ;   Label: LAB_004713b6
    MOV ESI,dword ptr [EAX + 0x2628]    ; 004713b9
    PUSH ESI                            ; 004713bf
    PUSH EBX                            ; 004713c0
    CALL core_dest.cpp_CActorDestination_acceptsActor_FUN_0045d550 ; 004713c1
        ;   XREF to: 0045d550 (UNCONDITIONAL_CALL)  ; int core_dest.cpp_CActorDestination_acceptsActor_FUN_0045d550(CActorDestination * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004713c6
    TEST EAX,EAX                        ; 004713c9
    JZ 0x0047138b                       ; 004713cb
        ;   XREF to: 0047138b (CONDITIONAL_JUMP)  ; LAB_0047138b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004713cd
    MOV EAX,dword ptr [EAX + 0x2628]    ; 004713d0
    ADD EAX,0x20                        ; 004713d6
    PUSH EAX                            ; 004713d9
    MOV EDI,dword ptr [EBP + 0x14]      ; 004713da
    PUSH EDI                            ; 004713dd
    LEA ESI,[ESP + 0xd0]                ; 004713de
    ADD EBX,0x20                        ; 004713e5
    CALL core_actor.cpp_FUN_00408bb0    ; 004713e8
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA EDI,[ESP + 0x70]                ; 004713ed
    ADD ESP,0x8                         ; 004713f1
    LEA ESI,[ESP + 0xc8]                ; 004713f4
    MOV EAX,dword ptr [EBP + 0x14]      ; 004713fb
    PUSH EBX                            ; 004713fe
    MOVSD ES:EDI,ESI                    ; 004713ff
    MOVSD ES:EDI,ESI                    ; 00471400
    MOVSD ES:EDI,ESI                    ; 00471401
    PUSH EAX                            ; 00471402
    LEA ESI,[ESP + 0x28]                ; 00471403
    LEA EDI,[ESP + 0x40]                ; 00471407
    CALL core_actor.cpp_FUN_00408bb0    ; 0047140b
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x28]                ; 00471410
    ADD ESP,0x8                         ; 00471414
    MOVSD ES:EDI,ESI                    ; 00471417
    MOVSD ES:EDI,ESI                    ; 00471418
    MOVSD ES:EDI,ESI                    ; 00471419
    FLD float ptr [ESP + 0x38]          ; 0047141a
    FLD float ptr [ESP + 0x3c]          ; 0047141e
    FLD float ptr [ESP + 0x40]          ; 00471422
    LEA EDI,[ESP + 0x14]                ; 00471426
    LEA ESI,[ESP + 0x98]                ; 0047142a
    FXCH ST2                            ; 00471431
    FSUB float ptr [ESP + 0x68]         ; 00471433
    FXCH                                ; 00471437
    FSUB float ptr [ESP + 0x6c]         ; 00471439
    FXCH ST2                            ; 0047143d
    FSUB float ptr [ESP + 0x70]         ; 0047143f
    FXCH                                ; 00471443
    FSTP float ptr [ESP + 0x98]         ; 00471445
    FXCH                                ; 0047144c
    FSTP float ptr [ESP + 0x9c]         ; 0047144e
    FSTP float ptr [ESP + 0xa0]         ; 00471455
    MOVSD ES:EDI,ESI                    ; 0047145c
    MOVSD ES:EDI,ESI                    ; 0047145d
    MOVSD ES:EDI,ESI                    ; 0047145e
    FLDZ                                ; 0047145f
    FCOMP float ptr [ESP + 0x1c]        ; 00471461
    FNSTSW AX                           ; 00471465
    SAHF                                ; 00471467
    JNC 0x0047138b                      ; 00471468
        ;   XREF to: 0047138b (CONDITIONAL_JUMP)  ; LAB_0047138b
    FLD float ptr [ESP + 0x1c]          ; 0047146e
    FCOMP double ptr [0x005da1dc]       ; 00471472 | DAT_005da1dc
    FNSTSW AX                           ; 00471478
    SAHF                                ; 0047147a
    JNC 0x0047138b                      ; 0047147b
        ;   XREF to: 0047138b (CONDITIONAL_JUMP)  ; LAB_0047138b
    FLD float ptr [ESP + 0x14]          ; 00471481
    FABS                                ; 00471485
    FCOMP double ptr [0x005da1e4]       ; 00471487 | DAT_005da1e4
    FNSTSW AX                           ; 0047148d
    SAHF                                ; 0047148f
    JNC 0x0047138b                      ; 00471490
        ;   XREF to: 0047138b (CONDITIONAL_JUMP)  ; LAB_0047138b
    FLD float ptr [ESP + 0x18]          ; 00471496
    FLDZ                                ; 0047149a
    FXCH                                ; 0047149c
    FSTP double ptr [ESP]               ; 0047149e
    FCOMP double ptr [ESP]              ; 004714a1
    FNSTSW AX                           ; 004714a4
    SAHF                                ; 004714a6
    JNC 0x0047138b                      ; 004714a7
        ;   XREF to: 0047138b (CONDITIONAL_JUMP)  ; LAB_0047138b
    FLD double ptr [ESP]                ; 004714ad
    FCOMP double ptr [0x005da1ec]       ; 004714b0 | DAT_005da1ec
    FNSTSW AX                           ; 004714b6
    SAHF                                ; 004714b8
    JNC 0x0047138b                      ; 004714b9
        ;   XREF to: 0047138b (CONDITIONAL_JUMP)  ; LAB_0047138b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004714bf
    MOV EAX,dword ptr [EAX + 0x2628]    ; 004714c2
    TEST EAX,EAX                        ; 004714c8
    JNZ 0x0047156a                      ; 004714ca
        ;   XREF to: 0047156a (CONDITIONAL_JUMP)  ; LAB_0047156a
    PUSH 0x1                            ; 004714d0
        ;   Label: LAB_004714d0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004714d2
    PUSH 0x19                           ; 004714d5
    ADD EAX,0x158                       ; 004714d7
    PUSH EAX                            ; 004714dc
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004714dd
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004714e2
    MOV EAX,dword ptr [EBP + 0x14]      ; 004714e5
        ;   Label: LAB_004714e5
    MOV ESI,dword ptr [EAX + 0x1ff5c]   ; 004714e8
    TEST ESI,ESI                        ; 004714ee
    JZ 0x0047150b                       ; 004714f0
        ;   XREF to: 0047150b (CONDITIONAL_JUMP)  ; LAB_0047150b
    PUSH 0xfa1                          ; 004714f2
    PUSH ESI                            ; 004714f7
    PUSH 0x5da1ac                       ; 004714f8 | s_actionPending_d_doc_cpp_005da1ab+1
    MOV EAX,[0x0061abc0]                ; 004714fd | g_CEditorToolsPtr
    PUSH EAX                            ; 00471502
    CALL shape_edittool.cpp_FUN_00494340 ; 00471503
        ;   XREF to: 00494340 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00494340()
    ADD ESP,0x10                        ; 00471508
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047150b
        ;   Label: LAB_0047150b
    MOV EBX,dword ptr [ESP + 0xf0]      ; 0047150e
    ADD EAX,0x1ff90                     ; 00471515
    ADD EBX,0x20                        ; 0047151a
    MOV dword ptr [EAX + -0x34],0x2     ; 0047151d
    CMP EAX,EBX                         ; 00471524
    JZ 0x00471538                       ; 00471526
        ;   XREF to: 00471538 (CONDITIONAL_JUMP)  ; LAB_00471538
    MOV EDX,dword ptr [EBX]             ; 00471528
    MOV dword ptr [EAX],EDX             ; 0047152a
    MOV EDX,dword ptr [EBX + 0x4]       ; 0047152c
    MOV dword ptr [EAX + 0x4],EDX       ; 0047152f
    MOV EDX,dword ptr [EBX + 0x8]       ; 00471532
    MOV dword ptr [EAX + 0x8],EDX       ; 00471535
    MOV EBX,dword ptr [ESP + 0xf0]      ; 00471538
        ;   Label: LAB_00471538
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047153f
    ADD EBX,0x30                        ; 00471542
    ADD EAX,0x1ff9c                     ; 00471545
    CMP EAX,EBX                         ; 0047154a
    JZ 0x0047155e                       ; 0047154c
        ;   XREF to: 0047155e (CONDITIONAL_JUMP)  ; LAB_0047155e
    MOV EDX,dword ptr [EBX]             ; 0047154e
    MOV dword ptr [EAX],EDX             ; 00471550
    MOV EDX,dword ptr [EBX + 0x4]       ; 00471552
    MOV dword ptr [EAX + 0x4],EDX       ; 00471555
    MOV EDX,dword ptr [EBX + 0x8]       ; 00471558
    MOV dword ptr [EAX + 0x8],EDX       ; 0047155b
    MOV EAX,0x1                         ; 0047155e
        ;   Label: LAB_0047155e
    MOV ESP,EBP                         ; 00471563
    POP EBP                             ; 00471565
    POP EDI                             ; 00471566
    POP ESI                             ; 00471567
    POP EBX                             ; 00471568
    RET                                 ; 00471569
    MOV EDX,dword ptr [EBP + 0x14]      ; 0047156a
        ;   Label: LAB_0047156a
    PUSH EDX                            ; 0047156d
    MOV ESI,dword ptr [EAX + 0x154]     ; 0047156e
    PUSH EAX                            ; 00471574
    CALL dword ptr [ESI + 0x84]         ; 00471575
    ADD ESP,0x8                         ; 0047157b
    CMP EAX,0x4                         ; 0047157e
    SETZ AL                             ; 00471581
    AND EAX,0xff                        ; 00471584
    JZ 0x004714d0                       ; 00471589
        ;   XREF to: 004714d0 (CONDITIONAL_JUMP)  ; LAB_004714d0
    PUSH 0x1                            ; 0047158f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00471591
    PUSH 0x1d                           ; 00471594
    ADD EAX,0x158                       ; 00471596
    PUSH EAX                            ; 0047159b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047159c
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004715a1
    PUSH EBX                            ; 004715a4
    MOV ECX,dword ptr [EBP + 0x14]      ; 004715a5
    PUSH ECX                            ; 004715a8
    LEA ESI,[ESP + 0xe8]                ; 004715a9
    LEA EDI,[ESP + 0x88]                ; 004715b0
    CALL core_actor.cpp_FUN_00408bb0    ; 004715b7
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    ADD ESP,0x8                         ; 004715bc
    LEA ESI,[ESP + 0xe0]                ; 004715bf
    MOV EBX,dword ptr [EBP + 0x14]      ; 004715c6
    LEA EAX,[ESP + 0x80]                ; 004715c9
    ADD EBX,0x2006c                     ; 004715d0
    MOVSD ES:EDI,ESI                    ; 004715d6
    MOVSD ES:EDI,ESI                    ; 004715d7
    MOVSD ES:EDI,ESI                    ; 004715d8
    CMP EBX,EAX                         ; 004715d9
    JZ 0x004715fa                       ; 004715db
        ;   XREF to: 004715fa (CONDITIONAL_JUMP)  ; LAB_004715fa
    MOV EAX,dword ptr [ESP + 0x80]      ; 004715dd
    MOV dword ptr [EBX],EAX             ; 004715e4
    MOV EAX,dword ptr [ESP + 0x84]      ; 004715e6
    MOV dword ptr [EBX + 0x4],EAX       ; 004715ed
    MOV EAX,dword ptr [ESP + 0x88]      ; 004715f0
    MOV dword ptr [EBX + 0x8],EAX       ; 004715f7
    MOV EAX,dword ptr [EBP + 0x14]      ; 004715fa
        ;   Label: LAB_004715fa
    FLD float ptr [EAX + 0x20088]       ; 004715fd
    MOV EBX,dword ptr [EAX + 0x2628]    ; 00471603
    FSUB float ptr [EAX + 0x2007c]      ; 00471609
    PUSH EBX                            ; 0047160f
    FSTP float ptr [ESP + 0x104]        ; 00471610
    CALL core_doc.cpp_FUN_00468b80      ; 00471617
        ;   XREF to: 00468b80 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_00468b80()
    MOV dword ptr [ESP + 0x108],EAX     ; 0047161c
    FLD float ptr [ESP + 0x108]         ; 00471623
    ADD ESP,0x4                         ; 0047162a
    FSUBR float ptr [ESP + 0x100]       ; 0047162d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00471634
    FADD float ptr [EAX + 0x20070]      ; 00471637
    FSTP float ptr [EAX + 0x20070]      ; 0047163d
    JMP 0x004714e5                      ; 00471643
        ;   XREF to: 004714e5 (UNCONDITIONAL_JUMP)  ; LAB_004714e5
    MOV ECX,dword ptr [EBP + 0x14]      ; 00471648
        ;   Label: LAB_00471648
    PUSH ECX                            ; 0047164b
    PUSH EAX                            ; 0047164c | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 0047164d
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00471652
    MOV EAX,dword ptr [EBP + 0x14]      ; 00471655
    MOV EBX,dword ptr [EAX + 0x2628]    ; 00471658
    PUSH EBX                            ; 0047165e
    MOV ESI,dword ptr [0x00622c18]      ; 0047165f | g_CDemonSetPtr
    PUSH ESI                            ; 00471665 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 00471666
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0047166b
    MOV ESI,dword ptr [EBP + 0x14]      ; 0047166e
    LEA EDI,[ESP + 0x5c]                ; 00471671
    XOR EBX,EBX                         ; 00471675
    MOV ESI,dword ptr [ESI + 0x2628]    ; 00471677
    MOV EDX,0x3f800000                  ; 0047167d
    LEA EAX,[ESP + 0x8]                 ; 00471682
    LEA ESI,[ESI + 0x20]                ; 00471686
    MOV ECX,dword ptr [EBP + 0x14]      ; 00471689
    PUSH EAX                            ; 0047168c
    MOVSD ES:EDI,ESI                    ; 0047168d
    MOVSD ES:EDI,ESI                    ; 0047168e
    MOVSD ES:EDI,ESI                    ; 0047168f
    PUSH ECX                            ; 00471690
    LEA ESI,[ESP + 0xac]                ; 00471691
    XOR EDI,EDI                         ; 00471698
    MOV dword ptr [ESP + 0x18],EDX      ; 0047169a
    MOV dword ptr [ESP + 0x10],EDI      ; 0047169e
    MOV dword ptr [ESP + 0x14],EDI      ; 004716a2
    CALL core_actor.cpp_FUN_00408ac0    ; 004716a6
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA EDI,[ESP + 0xc4]                ; 004716ab
    ADD ESP,0x8                         ; 004716b2
    LEA ESI,[ESP + 0xa4]                ; 004716b5
    FLD float ptr [ESP + 0x5c]          ; 004716bc
    FLD float ptr [ESP + 0x60]          ; 004716c0
    FLD float ptr [ESP + 0x64]          ; 004716c4
    MOVSD ES:EDI,ESI                    ; 004716c8
    MOVSD ES:EDI,ESI                    ; 004716c9
    MOVSD ES:EDI,ESI                    ; 004716ca
    MOV EAX,dword ptr [EBP + 0x14]      ; 004716cb
    MOV EDI,0x3fc00000                  ; 004716ce
    LEA ESI,[ESP + 0xb0]                ; 004716d3
    MOV EAX,dword ptr [EAX + 0x24]      ; 004716da
    FXCH ST2                            ; 004716dd
    FADD float ptr [ESP + 0xbc]         ; 004716df
    FXCH                                ; 004716e6
    FADD float ptr [ESP + 0xc0]         ; 004716e8
    FXCH ST2                            ; 004716ef
    FADD float ptr [ESP + 0xc4]         ; 004716f1
    FXCH                                ; 004716f8
    FSTP float ptr [ESP + 0x5c]         ; 004716fa
    FXCH                                ; 004716fe
    FSTP float ptr [ESP + 0x60]         ; 00471700
    MOV dword ptr [ESP + 0x60],EAX      ; 00471704
    LEA EAX,[ESP + 0x50]                ; 00471708
    FSTP float ptr [ESP + 0x64]         ; 0047170c
    PUSH EAX                            ; 00471710
    MOV EAX,dword ptr [EBP + 0x14]      ; 00471711
    MOV dword ptr [ESP + 0x54],EBX      ; 00471714
    PUSH EAX                            ; 00471718
    MOV dword ptr [ESP + 0x5c],EBX      ; 00471719
    MOV dword ptr [ESP + 0x60],EDI      ; 0047171d
    CALL core_actor.cpp_FUN_00408ac0    ; 00471721
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    ADD ESP,0x8                         ; 00471726
    LEA EDI,[ESP + 0x74]                ; 00471729
    PUSH 0x40400000                     ; 0047172d
    LEA ESI,[ESP + 0xb4]                ; 00471732
    PUSH 0x3dcccccd                     ; 00471739
    MOVSD ES:EDI,ESI                    ; 0047173e
    MOVSD ES:EDI,ESI                    ; 0047173f
    MOVSD ES:EDI,ESI                    ; 00471740
    PUSH 0x3f800000                     ; 00471741
    PUSH dword ptr [ESP + 0x88]         ; 00471746
    PUSH dword ptr [ESP + 0x84]         ; 0047174d
    PUSH dword ptr [ESP + 0x78]         ; 00471754
    MOV EDX,dword ptr [0x00622c18]      ; 00471758 | g_CDemonSetPtr
    PUSH dword ptr [ESP + 0x74]         ; 0047175e
    PUSH EDX                            ; 00471762 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00558450 ; 00471763
        ;   XREF to: 00558450 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00558450()
    MOV dword ptr [ESP + 0x124],EAX     ; 00471768
    FLD float ptr [ESP + 0x124]         ; 0047176f
    FLD1                                ; 00471776
    ADD ESP,0x20                        ; 00471778
    FCOMPP                              ; 0047177b
    FNSTSW AX                           ; 0047177d
    SAHF                                ; 0047177f
    JA 0x00471879                       ; 00471780
        ;   XREF to: 00471879 (CONDITIONAL_JUMP)  ; LAB_00471879
    FLD float ptr [ESP + 0x5c]          ; 00471786
    FLD float ptr [ESP + 0x60]          ; 0047178a
    FLD float ptr [ESP + 0x64]          ; 0047178e
    PUSH 0x3f000000                     ; 00471792
    LEA EDI,[ESP + 0x30]                ; 00471797
    LEA ESI,[ESP + 0xd8]                ; 0047179b
    LEA EAX,[ESP + 0x30]                ; 004717a2
    MOV ECX,dword ptr [0x00622c18]      ; 004717a6 | g_CDemonSetPtr
    FXCH ST2                            ; 004717ac
    FADD float ptr [ESP + 0x78]         ; 004717ae
    FXCH                                ; 004717b2
    FADD float ptr [ESP + 0x7c]         ; 004717b4
    FXCH ST2                            ; 004717b8
    FADD float ptr [ESP + 0x80]         ; 004717ba
    PUSH EAX                            ; 004717c1
    FXCH                                ; 004717c2
    FSTP float ptr [ESP + 0xdc]         ; 004717c4
    FXCH                                ; 004717cb
    FSTP float ptr [ESP + 0xe0]         ; 004717cd
    FSTP float ptr [ESP + 0xe4]         ; 004717d4
    PUSH ECX                            ; 004717db | g_CDemonSetInstance
    MOVSD ES:EDI,ESI                    ; 004717dc
    MOVSD ES:EDI,ESI                    ; 004717dd
    MOVSD ES:EDI,ESI                    ; 004717de
    CALL core_setcolid.cpp_FUN_005562c0 ; 004717df
        ;   XREF to: 005562c0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_005562c0()
    MOV dword ptr [ESP + 0x110],EAX     ; 004717e4
    FLD float ptr [ESP + 0x110]         ; 004717eb
    ADD ESP,0xc                         ; 004717f2
    MOV EBX,dword ptr [0x00622c18]      ; 004717f5 | g_CDemonSetPtr
    PUSH EBX                            ; 004717fb | g_CDemonSetInstance
    FSTP float ptr [ESP + 0xf0]         ; 004717fc
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 00471803
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00471808
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047180b
    FLD float ptr [ESP + 0xec]          ; 0047180e
    FSUB float ptr [EAX + 0x24]         ; 00471815
    FABS                                ; 00471818
    FLD1                                ; 0047181a
    FCOMPP                              ; 0047181c
    FNSTSW AX                           ; 0047181e
    SAHF                                ; 00471820
    JC 0x004713ad                       ; 00471821
        ;   XREF to: 004713ad (CONDITIONAL_JUMP)  ; LAB_004713ad
    XOR EBX,EBX                         ; 00471827
    MOV dword ptr [ESP + 0xf8],EBX      ; 00471829
    MOV EAX,[0x00622c18]                ; 00471830 | g_CDemonSetPtr
        ;   Label: LAB_00471830
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 00471835 | g_CDemonSetInstance.field1364324_0x14d164
    JL 0x004718a5                       ; 0047183b
        ;   XREF to: 004718a5 (CONDITIONAL_JUMP)  ; LAB_004718a5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047183d
    MOV dword ptr [EAX + 0x1ff5c],0x6   ; 00471840
    MOV EAX,dword ptr [EAX + 0x2628]    ; 0047184a
    TEST EAX,EAX                        ; 00471850
    JNZ 0x0047193a                      ; 00471852
        ;   XREF to: 0047193a (CONDITIONAL_JUMP)  ; LAB_0047193a
    PUSH 0x1                            ; 00471858
        ;   Label: LAB_00471858
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047185a
    PUSH 0x17                           ; 0047185d
    ADD EAX,0x158                       ; 0047185f
    PUSH EAX                            ; 00471864
        ;   Label: LAB_00471864
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00471865
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047186a
    MOV EAX,0x1                         ; 0047186d
    MOV ESP,EBP                         ; 00471872
    POP EBP                             ; 00471874
    POP EDI                             ; 00471875
    POP ESI                             ; 00471876
    POP EBX                             ; 00471877
    RET                                 ; 00471878
    MOV EDI,dword ptr [0x00622c18]      ; 00471879 | g_CDemonSetPtr
        ;   Label: LAB_00471879
    PUSH EDI                            ; 0047187f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 00471880
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00471885
    XOR EAX,EAX                         ; 00471888
    MOV ESP,EBP                         ; 0047188a
    POP EBP                             ; 0047188c
    POP EDI                             ; 0047188d
    POP ESI                             ; 0047188e
    POP EBX                             ; 0047188f
    RET                                 ; 00471890
    MOV EDI,dword ptr [ESP + 0xf8]      ; 00471891
        ;   Label: LAB_00471891
    ADD EDI,0x4                         ; 00471898
    INC EBX                             ; 0047189b
    MOV dword ptr [ESP + 0xf8],EDI      ; 0047189c
    JMP 0x00471830                      ; 004718a3
        ;   XREF to: 00471830 (UNCONDITIONAL_JUMP)  ; LAB_00471830
    MOV ECX,dword ptr [ESP + 0xf8]      ; 004718a5
        ;   Label: LAB_004718a5
    MOV EDX,dword ptr [0x007dc6d8]      ; 004718ac | g_CCrateClassInfo.name_hash
    ADD EAX,ECX                         ; 004718b2
    PUSH EDX                            ; 004718b4
    MOV ESI,dword ptr [EAX + 0x14d168]  ; 004718b5 | g_CDemonSetInstance.field1364328_0x14d168
    PUSH ESI                            ; 004718bb
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004718bc
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004718c1
    TEST EAX,EAX                        ; 004718c4
    JZ 0x00471891                       ; 004718c6
        ;   XREF to: 00471891 (CONDITIONAL_JUMP)  ; LAB_00471891
    FLD float ptr [EAX + 0x20]          ; 004718c8
    FLD float ptr [EAX + 0x24]          ; 004718cb
    FLD float ptr [EAX + 0x28]          ; 004718ce
    LEA EDI,[ESP + 0x44]                ; 004718d1
    LEA ESI,[ESP + 0x8c]                ; 004718d5
    FXCH ST2                            ; 004718dc
    FSUB float ptr [ESP + 0x5c]         ; 004718de
    FXCH                                ; 004718e2
    FSUB float ptr [ESP + 0x60]         ; 004718e4
    FXCH ST2                            ; 004718e8
    FSUB float ptr [ESP + 0x64]         ; 004718ea
    FXCH                                ; 004718ee
    FSTP float ptr [ESP + 0x8c]         ; 004718f0
    FXCH                                ; 004718f7
    FSTP float ptr [ESP + 0x90]         ; 004718f9
    FSTP float ptr [ESP + 0x94]         ; 00471900
    MOVSD ES:EDI,ESI                    ; 00471907
    MOVSD ES:EDI,ESI                    ; 00471908
    MOVSD ES:EDI,ESI                    ; 00471909
    FLD float ptr [ESP + 0x48]          ; 0047190a
    FMUL ST0                            ; 0047190e
    FLD float ptr [ESP + 0x44]          ; 00471910
    FMUL ST0                            ; 00471914
    FADDP                               ; 00471916
    FLD float ptr [ESP + 0x4c]          ; 00471918
    FMUL ST0                            ; 0047191c
    FADDP                               ; 0047191e
    FSQRT                               ; 00471920
    FCOMP double ptr [0x005da1e4]       ; 00471922 | DAT_005da1e4
    FNSTSW AX                           ; 00471928
    SAHF                                ; 0047192a
    JNC 0x00471891                      ; 0047192b
        ;   XREF to: 00471891 (CONDITIONAL_JUMP)  ; LAB_00471891
    XOR EAX,EAX                         ; 00471931
    MOV ESP,EBP                         ; 00471933
    POP EBP                             ; 00471935
    POP EDI                             ; 00471936
    POP ESI                             ; 00471937
    POP EBX                             ; 00471938
    RET                                 ; 00471939
    MOV EDI,dword ptr [EBP + 0x14]      ; 0047193a
        ;   Label: LAB_0047193a
    PUSH EDI                            ; 0047193d
    MOV EBX,dword ptr [EAX + 0x154]     ; 0047193e
    PUSH EAX                            ; 00471944
    CALL dword ptr [EBX + 0x84]         ; 00471945
    ADD ESP,0x8                         ; 0047194b
    CMP EAX,0x4                         ; 0047194e
    SETZ AL                             ; 00471951
    AND EAX,0xff                        ; 00471954
    JZ 0x00471858                       ; 00471959
        ;   XREF to: 00471858 (CONDITIONAL_JUMP)  ; LAB_00471858
    PUSH 0x1                            ; 0047195f
    PUSH 0x1c                           ; 00471961
    LEA EAX,[EDI + 0x158]               ; 00471963
    JMP 0x00471864                      ; 00471969
        ;   XREF to: 00471864 (UNCONDITIONAL_JUMP)  ; LAB_00471864

