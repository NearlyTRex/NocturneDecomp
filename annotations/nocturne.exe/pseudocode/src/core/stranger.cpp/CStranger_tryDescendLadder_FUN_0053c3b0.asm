; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_stranger_cpp_CStranger_tryDescendLadder_FUN_0053c3b0(int param_1)
;
; Local Variables:
; undefined8       Stack[-0xf0]:8  local_f0
; undefined        Stack[-0xe8]:1  local_e8
; undefined        Stack[-0xd0]:1  local_d0
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_0053fc60 at 0053fef3
;
; Referenced Globals:
;   TerminatedCString s_Ladder_dot_f_00595b3f
;   double DOUBLE_00595b57 = 0.990000000000000
;   float FLOAT_00595b5f = 0.5
;   double DOUBLE_00595b67 = 2
;   double DOUBLE_00595b6f = 4
;   double DOUBLE_00595b77 = -1
;   double DOUBLE_00595b7f = 0.261799387791667
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_005be368
;   undefined4 DAT_0077ad0c
;   undefined4 DAT_01cc3120
;   undefined4 DAT_01fa3ff0
;   undefined4 DAT_01fa3ff4
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;   engine_console.cpp_CConsole_printf_FUN_0043ac60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053c3b0
        ;   Label: core_stranger.cpp_CStranger_tryDescendLadder_FUN_0053c3b0
    PUSH ESI                            ; 0053c3b1
    PUSH EDI                            ; 0053c3b2
    PUSH EBP                            ; 0053c3b3
    MOV EBP,ESP                         ; 0053c3b4
    SUB ESP,0xe4                        ; 0053c3b6
    AND ESP,0xfffffff8                  ; 0053c3bc
    MOV EDI,dword ptr [EBP + 0x14]      ; 0053c3bf
    PUSH 0x0                            ; 0053c3c2
    PUSH EDI                            ; 0053c3c4
    MOV dword ptr [EDI + 0x1fa90],0x0   ; 0053c3c5
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0 ; 0053c3cf
        ;   XREF to: 0042a9d0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0()
    MOV dword ptr [ESP + 0xe8],EAX      ; 0053c3d4
    FLD float ptr [ESP + 0xe8]          ; 0053c3db
    ADD ESP,0x8                         ; 0053c3e2
    FCOMP double ptr [0x00595b57]       ; 0053c3e5 | DOUBLE_00595b57
    FNSTSW AX                           ; 0053c3eb
    SAHF                                ; 0053c3ed
    JC 0x0053c42f                       ; 0053c3ee
        ;   XREF to: 0053c42f (CONDITIONAL_JUMP)  ; LAB_0053c42f
    MOV EDX,dword ptr [EDI + 0x24ac]    ; 0053c3f0
    TEST EDX,EDX                        ; 0053c3f6
    JNZ 0x0053c42f                      ; 0053c3f8
        ;   XREF to: 0053c42f (CONDITIONAL_JUMP)  ; LAB_0053c42f
    CMP dword ptr [EDI + 0x24f0],0x0    ; 0053c3fa
    JNZ 0x0053c42f                      ; 0053c401
        ;   XREF to: 0053c42f (CONDITIONAL_JUMP)  ; LAB_0053c42f
    MOV dword ptr [ESP + 0xdc],EDX      ; 0053c403
    LEA EAX,[EDI + 0x20]                ; 0053c40a
    MOV dword ptr [ESP + 0xd8],EDX      ; 0053c40d
    MOV dword ptr [ESP + 0xd0],EAX      ; 0053c414
    MOV EAX,[0x005be368]                ; 0053c41b | DAT_005be368
        ;   Label: LAB_0053c41b
    MOV EDX,dword ptr [ESP + 0xdc]      ; 0053c420
    CMP EDX,dword ptr [EAX + 0x14cd6c]  ; 0053c427 | DAT_01fa3ff0
    JL 0x0053c45a                       ; 0053c42d
        ;   XREF to: 0053c45a (CONDITIONAL_JUMP)  ; LAB_0053c45a
    XOR EAX,EAX                         ; 0053c42f
        ;   Label: LAB_0053c42f
    MOV ESP,EBP                         ; 0053c431
    POP EBP                             ; 0053c433
    POP EDI                             ; 0053c434
    POP ESI                             ; 0053c435
    POP EBX                             ; 0053c436
    RET                                 ; 0053c437
    MOV EBX,dword ptr [ESP + 0xdc]      ; 0053c438
        ;   Label: LAB_0053c438
    MOV ECX,dword ptr [ESP + 0xd8]      ; 0053c43f
    INC EBX                             ; 0053c446
    ADD ECX,0x4                         ; 0053c447
    MOV dword ptr [ESP + 0xdc],EBX      ; 0053c44a
    MOV dword ptr [ESP + 0xd8],ECX      ; 0053c451
    JMP 0x0053c41b                      ; 0053c458
        ;   XREF to: 0053c41b (UNCONDITIONAL_JUMP)  ; LAB_0053c41b
    MOV EBX,dword ptr [ESP + 0xd8]      ; 0053c45a
        ;   Label: LAB_0053c45a
    MOV ESI,dword ptr [0x01cc3120]      ; 0053c461 | DAT_01cc3120
    ADD EAX,EBX                         ; 0053c467
    PUSH ESI                            ; 0053c469
    MOV EAX,dword ptr [EAX + 0x14cd70]  ; 0053c46a | DAT_01fa3ff4
    PUSH EAX                            ; 0053c470
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0053c471
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    MOV EBX,EAX                         ; 0053c476
    ADD ESP,0x8                         ; 0053c478
    MOV ESI,EAX                         ; 0053c47b
    TEST EAX,EAX                        ; 0053c47d
    JZ 0x0053c438                       ; 0053c47f
        ;   XREF to: 0053c438 (CONDITIONAL_JUMP)  ; LAB_0053c438
    FLD float ptr [EBX + 0x24]          ; 0053c481
    FADD float ptr [EAX + 0x2d0]        ; 0053c484
    FSUBR float ptr [EDI + 0x24]        ; 0053c48a
    FABS                                ; 0053c48d
    FCOMP double ptr [0x00595b67]       ; 0053c48f | DOUBLE_00595b67
    FNSTSW AX                           ; 0053c495
    SAHF                                ; 0053c497
    JA 0x0053c438                       ; 0053c498
        ;   XREF to: 0053c438 (CONDITIONAL_JUMP)  ; LAB_0053c438
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0053c49a
    PUSH EAX                            ; 0053c4a1
    LEA EAX,[ESP + 0x2c]                ; 0053c4a2
    PUSH EAX                            ; 0053c4a6
    PUSH EBX                            ; 0053c4a7
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 0053c4a8
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    ADD ESP,0xc                         ; 0053c4ad
    FLD float ptr [ESP + 0x30]          ; 0053c4b0
    FST double ptr [ESP + 0x8]          ; 0053c4b4
    FABS                                ; 0053c4b8
    FCOMP double ptr [0x00595b6f]       ; 0053c4ba | DOUBLE_00595b6f
    FNSTSW AX                           ; 0053c4c0
    SAHF                                ; 0053c4c2
    JA 0x0053c438                       ; 0053c4c3
        ;   XREF to: 0053c438 (CONDITIONAL_JUMP)  ; LAB_0053c438
    FLDZ                                ; 0053c4c9
    FCOMP double ptr [ESP + 0x8]        ; 0053c4cb
    FNSTSW AX                           ; 0053c4cf
    SAHF                                ; 0053c4d1
    JC 0x0053c438                       ; 0053c4d2
        ;   XREF to: 0053c438 (CONDITIONAL_JUMP)  ; LAB_0053c438
    LEA EAX,[ESP + 0x10]                ; 0053c4d8
    PUSH EAX                            ; 0053c4dc
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0053c4dd
    PUSH EBX                            ; 0053c4e3
    CALL dword ptr [EDX + 0x14]         ; 0053c4e4
    ADD ESP,0x8                         ; 0053c4e7
    FLD float ptr [ESP + 0x28]          ; 0053c4ea
    FCOMP float ptr [ESP + 0x1c]        ; 0053c4ee
    FNSTSW AX                           ; 0053c4f2
    SAHF                                ; 0053c4f4
    JBE 0x0053c516                      ; 0053c4f5
        ;   XREF to: 0053c516 (CONDITIONAL_JUMP)  ; LAB_0053c516
    FLD float ptr [ESP + 0x1c]          ; 0053c4f7
    FLD1                                ; 0053c4fb
    FADDP                               ; 0053c4fd
    FLD float ptr [ESP + 0x28]          ; 0053c4ff
    FCOMPP                              ; 0053c503
    FNSTSW AX                           ; 0053c505
    SAHF                                ; 0053c507
    JA 0x0053c438                       ; 0053c508
        ;   XREF to: 0053c438 (CONDITIONAL_JUMP)  ; LAB_0053c438
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0053c50e
    MOV dword ptr [ESP + 0x28],EAX      ; 0053c512
    FLD float ptr [ESP + 0x28]          ; 0053c516
        ;   Label: LAB_0053c516
    FCOMP float ptr [ESP + 0x10]        ; 0053c51a
    FNSTSW AX                           ; 0053c51e
    SAHF                                ; 0053c520
    JNC 0x0053c544                      ; 0053c521
        ;   XREF to: 0053c544 (CONDITIONAL_JUMP)  ; LAB_0053c544
    FLD float ptr [ESP + 0x10]          ; 0053c523
    FADD double ptr [0x00595b77]        ; 0053c527 | DOUBLE_00595b77
    FLD float ptr [ESP + 0x28]          ; 0053c52d
    FCOMPP                              ; 0053c531
    FNSTSW AX                           ; 0053c533
    SAHF                                ; 0053c535
    JC 0x0053c438                       ; 0053c536
        ;   XREF to: 0053c438 (CONDITIONAL_JUMP)  ; LAB_0053c438
    MOV EAX,dword ptr [ESP + 0x10]      ; 0053c53c
    MOV dword ptr [ESP + 0x28],EAX      ; 0053c540
    FLD float ptr [ESP + 0x10]          ; 0053c544
        ;   Label: LAB_0053c544
    FADD float ptr [ESP + 0x1c]         ; 0053c548
    FST float ptr [ESP + 0x7c]          ; 0053c54c
    FLD float ptr [0x00595b5f]          ; 0053c550 | FLOAT_00595b5f
    FXCH                                ; 0053c556
    FMUL ST1                            ; 0053c558
    FLD float ptr [ESP + 0x14]          ; 0053c55a
    FLD float ptr [ESP + 0x18]          ; 0053c55e
    FADD float ptr [ESP + 0x24]         ; 0053c562
    FXCH                                ; 0053c566
    FADD float ptr [ESP + 0x20]         ; 0053c568
    FXCH                                ; 0053c56c
    FST float ptr [ESP + 0x84]          ; 0053c56e
    FMUL ST3                            ; 0053c575
    FXCH                                ; 0053c577
    FST float ptr [ESP + 0x80]          ; 0053c579
    FMULP ST3                           ; 0053c580
    FSTP float ptr [ESP + 0x6c]         ; 0053c582
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0053c586
    MOV dword ptr [ESP + 0x30],EAX      ; 0053c58a
    LEA EAX,[ESP + 0x28]                ; 0053c58e
    PUSH EAX                            ; 0053c592
    LEA EAX,[ESP + 0x74]                ; 0053c593
    PUSH EAX                            ; 0053c597
    FSTP float ptr [ESP + 0x6c]         ; 0053c598
    PUSH ESI                            ; 0053c59c
    FSTP float ptr [ESP + 0x74]         ; 0053c59d
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0053c5a1
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    MOV EBX,EAX                         ; 0053c5a6
    LEA EAX,[ESP + 0x34]                ; 0053c5a8
    ADD ESP,0xc                         ; 0053c5ac
    CMP EAX,EBX                         ; 0053c5af
    JZ 0x0053c5c7                       ; 0053c5b1
        ;   XREF to: 0053c5c7 (CONDITIONAL_JUMP)  ; LAB_0053c5c7
    MOV EAX,dword ptr [EBX]             ; 0053c5b3
    MOV dword ptr [ESP + 0x28],EAX      ; 0053c5b5
    MOV EAX,dword ptr [EBX + 0x4]       ; 0053c5b9
    MOV dword ptr [ESP + 0x2c],EAX      ; 0053c5bc
    MOV EAX,dword ptr [EBX + 0x8]       ; 0053c5c0
    MOV dword ptr [ESP + 0x30],EAX      ; 0053c5c3
    FLD float ptr [ESP + 0x2c]          ; 0053c5c7
        ;   Label: LAB_0053c5c7
    FADD float ptr [ESI + 0x2d0]        ; 0053c5cb
    FSTP float ptr [ESP + 0x2c]         ; 0053c5d1
    MOV EAX,dword ptr [EDI + 0x44]      ; 0053c5d5
    MOV dword ptr [ESP + 0xd4],EAX      ; 0053c5d8
    MOV EAX,dword ptr [EDI + 0x50]      ; 0053c5df
    MOV dword ptr [ESP + 0xb8],EAX      ; 0053c5e2
    MOV EAX,dword ptr [EDI + 0x5c]      ; 0053c5e9
    MOV dword ptr [ESP + 0xc8],EAX      ; 0053c5ec
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0053c5f3
    MOV dword ptr [ESP + 0x4c],EAX      ; 0053c5fa
    MOV EAX,dword ptr [ESP + 0xb8]      ; 0053c5fe
    MOV dword ptr [ESP + 0x50],EAX      ; 0053c605
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0053c609
    MOV dword ptr [ESP + 0x54],EAX      ; 0053c610
    MOV EAX,dword ptr [ESI + 0x44]      ; 0053c614
    MOV dword ptr [ESP + 0xbc],EAX      ; 0053c617
    MOV EAX,dword ptr [ESI + 0x50]      ; 0053c61e
    MOV dword ptr [ESP + 0xc0],EAX      ; 0053c621
    MOV EAX,dword ptr [ESI + 0x5c]      ; 0053c628
    MOV dword ptr [ESP + 0xc4],EAX      ; 0053c62b
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0053c632
    MOV dword ptr [ESP + 0x40],EAX      ; 0053c639
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0053c63d
    MOV dword ptr [ESP + 0x44],EAX      ; 0053c644
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0053c648
    FLD double ptr [0x00595b7f]         ; 0053c64f | DOUBLE_00595b7f
    MOV dword ptr [ESP + 0x48],EAX      ; 0053c655
    FCOS                                ; 0053c659
    FLD float ptr [ESP + 0xb8]          ; 0053c65b
    FMUL float ptr [ESP + 0xc0]         ; 0053c662
    FLD float ptr [ESP + 0xd4]          ; 0053c669
    FMUL float ptr [ESP + 0xbc]         ; 0053c670
    FADDP                               ; 0053c677
    FLD float ptr [ESP + 0xc8]          ; 0053c679
    FMUL float ptr [ESP + 0xc4]         ; 0053c680
    FADDP                               ; 0053c687
    FABS                                ; 0053c689
    FSTP double ptr [ESP]               ; 0053c68b
    FCOMP double ptr [ESP]              ; 0053c68e
    FNSTSW AX                           ; 0053c691
    SAHF                                ; 0053c693
    JA 0x0053c438                       ; 0053c694
        ;   XREF to: 0053c438 (CONDITIONAL_JUMP)  ; LAB_0053c438
    LEA EAX,[ESI + 0x20]                ; 0053c69a
    PUSH EAX                            ; 0053c69d
    LEA EAX,[ESP + 0x8c]                ; 0053c69e
    PUSH EAX                            ; 0053c6a5
    PUSH EDI                            ; 0053c6a6
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 0053c6a7
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    FLD float ptr [EAX + 0x8]           ; 0053c6ac
    FLDZ                                ; 0053c6af
    ADD ESP,0xc                         ; 0053c6b1
    FCOMPP                              ; 0053c6b4
    FNSTSW AX                           ; 0053c6b6
    SAHF                                ; 0053c6b8
    JNC 0x0053c438                      ; 0053c6b9
        ;   XREF to: 0053c438 (CONDITIONAL_JUMP)  ; LAB_0053c438
    MOV EDX,dword ptr [ESP + 0x4]       ; 0053c6bf
    PUSH EDX                            ; 0053c6c3
    MOV ECX,dword ptr [ESP + 0x4]       ; 0053c6c4
    PUSH ECX                            ; 0053c6c8
    PUSH 0x595b3f                       ; 0053c6c9 | = "Ladder dot : %f\n"
    MOV EBX,dword ptr [0x005ad350]      ; 0053c6ce | PTR_DAT_005ad350
    PUSH EBX                            ; 0053c6d4 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 0053c6d5
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0x10                        ; 0053c6da
    PUSH 0x1                            ; 0053c6dd
    PUSH 0x2b                           ; 0053c6df
    LEA EAX,[EDI + 0x150]               ; 0053c6e1
    PUSH EAX                            ; 0053c6e7
    MOV dword ptr [EDI + 0x1fa90],ESI   ; 0053c6e8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0053c6ee
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    MOV dword ptr [EDI + 0xbca0],0x0    ; 0053c6f3
    ADD ESP,0xc                         ; 0053c6fd
    MOV EAX,dword ptr [ESI + 0x2d0]     ; 0053c700
    MOV dword ptr [ESP + 0xcc],EAX      ; 0053c706
    XOR EAX,EAX                         ; 0053c70d
    MOV dword ptr [ESP + 0x58],EAX      ; 0053c70f
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0053c713
    MOV dword ptr [ESP + 0x5c],EAX      ; 0053c71a
    LEA EAX,[ESP + 0x58]                ; 0053c71e
    PUSH EAX                            ; 0053c722
    LEA EAX,[ESP + 0xa4]                ; 0053c723
    PUSH EAX                            ; 0053c72a
    MOV EDX,0xbfc00000                  ; 0053c72b
    PUSH ESI                            ; 0053c730
    LEA EBX,[EDI + 0x20]                ; 0053c731
    MOV dword ptr [ESP + 0x6c],EDX      ; 0053c734
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0053c738
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    FLD float ptr [EAX]                 ; 0053c73d
    FSUB float ptr [EBX]                ; 0053c73f
    ADD ESP,0xc                         ; 0053c741
    FSTP float ptr [ESP + 0x94]         ; 0053c744
    FLD float ptr [EAX + 0x4]           ; 0053c74b
    FSUB float ptr [EBX + 0x4]          ; 0053c74e
    LEA EDX,[EDI + 0x1fcbc]             ; 0053c751
    FSTP float ptr [ESP + 0x98]         ; 0053c757
    FLD float ptr [EAX + 0x8]           ; 0053c75e
    FSUB float ptr [EBX + 0x8]          ; 0053c761
    LEA EAX,[ESP + 0x94]                ; 0053c764
    FSTP float ptr [ESP + 0x9c]         ; 0053c76b
    CMP EDX,EAX                         ; 0053c772
    JZ 0x0053c793                       ; 0053c774
        ;   XREF to: 0053c793 (CONDITIONAL_JUMP)  ; LAB_0053c793
    MOV EAX,dword ptr [ESP + 0x94]      ; 0053c776
    MOV dword ptr [EDX],EAX             ; 0053c77d
    MOV EAX,dword ptr [ESP + 0x98]      ; 0053c77f
    MOV dword ptr [EDX + 0x4],EAX       ; 0053c786
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0053c789
    MOV dword ptr [EDX + 0x8],EAX       ; 0053c790
    LEA EAX,[EDI + 0x20]                ; 0053c793
        ;   Label: LAB_0053c793
    FLD float ptr [ESP + 0x28]          ; 0053c796
    FSUB float ptr [EAX]                ; 0053c79a
    FLD float ptr [ESP + 0x2c]          ; 0053c79c
    FXCH                                ; 0053c7a0
    FSTP float ptr [ESP + 0xac]         ; 0053c7a2
    FSUB float ptr [EAX + 0x4]          ; 0053c7a9
    FLD float ptr [ESP + 0x30]          ; 0053c7ac
    FXCH                                ; 0053c7b0
    FSTP float ptr [ESP + 0xb0]         ; 0053c7b2
    FSUB float ptr [EAX + 0x8]          ; 0053c7b9
    LEA EAX,[ESP + 0xac]                ; 0053c7bc
    PUSH EAX                            ; 0053c7c3
    LEA EAX,[ESP + 0x38]                ; 0053c7c4
    PUSH EAX                            ; 0053c7c8
    FSTP float ptr [ESP + 0xbc]         ; 0053c7c9
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 0053c7d0
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    FLD float ptr [EAX + 0x4]           ; 0053c7d5
    ADD ESP,0x8                         ; 0053c7d8
    FSTP float ptr [EDI + 0x1fcc8]      ; 0053c7db
    MOV EAX,0x1                         ; 0053c7e1
    MOV dword ptr [EDI + 0x1fccc],0x3f800000 ; 0053c7e6
    MOV ESP,EBP                         ; 0053c7f0
    POP EBP                             ; 0053c7f2
    POP EDI                             ; 0053c7f3
    POP ESI                             ; 0053c7f4
    POP EBX                             ; 0053c7f5
    RET                                 ; 0053c7f6

