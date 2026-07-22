; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_gabriela_cpp_CGabriella_findAndPickupNearbyObject_FUN_004983f0(int param_1)
;
; Local Variables:
; undefined        Stack[-0xbc]:1  local_bc
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined        Stack[-0x80]:1  local_80
; undefined        Stack[-0x74]:1  local_74
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_00495a20 at 00496721
;
; Referenced Globals:
;   string s_..\\core\\gabriela.cpp_00582134
;   string s_Hell_froze_-_invalid_pickUpType:_00582149
;   double DOUBLE_00582172 = -0.800000000000000
;   double DOUBLE_0058217a = 2
;   undefined4 DAT_005993b0
;   undefined4 DAT_005be368
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_01fa3ff0
;   undefined4 DAT_01fa3ff4
;   undefined4 DAT_01fa3ff8
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   crt_memory.c___arrinit_FUN_005644a7
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004983f0
        ;   Label: core_gabriela.cpp_CGabriella_findAndPickupNearbyObject_FUN_004983f0
    PUSH ESI                            ; 004983f1
    PUSH EDI                            ; 004983f2
    PUSH EBP                            ; 004983f3
    MOV EBP,ESP                         ; 004983f4
    SUB ESP,0xb0                        ; 004983f6
    AND ESP,0xfffffff8                  ; 004983fc
    MOV ESI,dword ptr [EBP + 0x14]      ; 004983ff
    PUSH 0x5993b0                       ; 00498402 | DAT_005993b0
    PUSH 0x4                            ; 00498407
    LEA EAX,[ESP + 0xc]                 ; 00498409
    PUSH EAX                            ; 0049840d
    MOV dword ptr [ESI + 0x1fa08],0x0   ; 0049840e
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 00498418
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 0049841d
    LEA EAX,[ESP + 0x64]                ; 00498420
    MOV EBX,0x3ff5c28f                  ; 00498424
    PUSH EAX                            ; 00498429
    LEA EAX,[ESP + 0x50]                ; 0049842a
    MOV EDX,0xbda3d70a                  ; 0049842e
    PUSH EAX                            ; 00498433
    MOV ECX,0x3ee147ae                  ; 00498434
    MOV dword ptr [ESP + 0x6c],EDX      ; 00498439
    PUSH ESI                            ; 0049843d
    MOV dword ptr [ESP + 0x74],ECX      ; 0049843e
    MOV dword ptr [ESP + 0x78],EBX      ; 00498442
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00498446
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    MOV EDX,EAX                         ; 0049844b
    LEA EAX,[ESP + 0x1c]                ; 0049844d
    ADD ESP,0xc                         ; 00498451
    CMP EAX,EDX                         ; 00498454
    JZ 0x0049846c                       ; 00498456
        ;   XREF to: 0049846c (CONDITIONAL_JUMP)  ; LAB_0049846c
    MOV EAX,dword ptr [EDX]             ; 00498458
    MOV dword ptr [ESP + 0x10],EAX      ; 0049845a
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049845e
    MOV dword ptr [ESP + 0x14],EAX      ; 00498461
    MOV EAX,dword ptr [EDX + 0x8]       ; 00498465
    MOV dword ptr [ESP + 0x18],EAX      ; 00498468
    XOR EAX,EAX                         ; 0049846c
        ;   Label: LAB_0049846c
    MOV dword ptr [ESP + 0x74],EAX      ; 0049846e
    LEA EAX,[ESP + 0x70]                ; 00498472
    PUSH EAX                            ; 00498476
    LEA EAX,[ESP + 0x8c]                ; 00498477
    PUSH EAX                            ; 0049847e
    MOV EDI,0xbf266666                  ; 0049847f
    MOV EDX,0x4007ae14                  ; 00498484
    PUSH ESI                            ; 00498489
    MOV dword ptr [ESP + 0x7c],EDI      ; 0049848a
    MOV dword ptr [ESP + 0x84],EDX      ; 0049848e
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00498495
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    MOV EDX,EAX                         ; 0049849a
    LEA EAX,[ESP + 0x28]                ; 0049849c
    ADD ESP,0xc                         ; 004984a0
    CMP EAX,EDX                         ; 004984a3
    JZ 0x004984bb                       ; 004984a5
        ;   XREF to: 004984bb (CONDITIONAL_JUMP)  ; LAB_004984bb
    MOV EAX,dword ptr [EDX]             ; 004984a7
    MOV dword ptr [ESP + 0x1c],EAX      ; 004984a9
    MOV EAX,dword ptr [EDX + 0x4]       ; 004984ad
    MOV dword ptr [ESP + 0x20],EAX      ; 004984b0
    MOV EAX,dword ptr [EDX + 0x8]       ; 004984b4
    MOV dword ptr [ESP + 0x24],EAX      ; 004984b7
    LEA EAX,[ESP + 0x34]                ; 004984bb
        ;   Label: LAB_004984bb
    PUSH EAX                            ; 004984bf
    LEA EAX,[ESP + 0x44]                ; 004984c0
    XOR ECX,ECX                         ; 004984c4
    PUSH EAX                            ; 004984c6
    MOV EDI,0x40000000                  ; 004984c7
    MOV dword ptr [ESP + 0x3c],ECX      ; 004984cc
    PUSH ESI                            ; 004984d0
    MOV dword ptr [ESP + 0x44],ECX      ; 004984d1
    MOV dword ptr [ESP + 0x48],EDI      ; 004984d5
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004984d9
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    MOV EDX,EAX                         ; 004984de
    LEA EAX,[ESP + 0x34]                ; 004984e0
    ADD ESP,0xc                         ; 004984e4
    CMP EAX,EDX                         ; 004984e7
    JNZ 0x00498557                      ; 004984e9
        ;   XREF to: 00498557 (CONDITIONAL_JUMP)  ; LAB_00498557
    MOV EAX,0x40800000                  ; 004984eb
        ;   Label: LAB_004984eb
    XOR EDX,EDX                         ; 004984f0
    XOR EDI,EDI                         ; 004984f2
    MOV dword ptr [ESP + 0x9c],EAX      ; 004984f4
    LEA EAX,[ESI + 0x20]                ; 004984fb
    MOV dword ptr [ESP + 0xa8],EDX      ; 004984fe
    MOV dword ptr [ESP + 0x94],EAX      ; 00498505
    MOV EAX,[0x005be368]                ; 0049850c | DAT_005be368
        ;   Label: LAB_0049850c
    MOV EDX,dword ptr [ESP + 0xa8]      ; 00498511
    CMP EDX,dword ptr [EAX + 0x14cd6c]  ; 00498518 | DAT_01fa3ff0
    JGE 0x004986e0                      ; 0049851e
        ;   XREF to: 004986e0 (CONDITIONAL_JUMP)  ; LAB_004986e0
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14cd70] ; 00498524 | DAT_01fa3ff4 | DAT_01fa3ff8
    PUSH EBX                            ; 0049852b
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0049852c
    CALL dword ptr [EAX + 0x8c]         ; 00498532
    ADD ESP,0x4                         ; 00498538
    TEST EAX,EAX                        ; 0049853b
    JZ 0x004986a4                       ; 0049853d
        ;   XREF to: 004986a4 (CONDITIONAL_JUMP)  ; LAB_004986a4
    MOV ECX,dword ptr [ESP + 0xa8]      ; 00498543
        ;   Label: LAB_00498543
    INC ECX                             ; 0049854a
    ADD EDI,0x4                         ; 0049854b
    MOV dword ptr [ESP + 0xa8],ECX      ; 0049854e
    JMP 0x0049850c                      ; 00498555
        ;   XREF to: 0049850c (UNCONDITIONAL_JUMP)  ; LAB_0049850c
    MOV EAX,dword ptr [EDX]             ; 00498557
        ;   Label: LAB_00498557
    MOV dword ptr [ESP + 0x28],EAX      ; 00498559
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049855d
    MOV dword ptr [ESP + 0x2c],EAX      ; 00498560
    MOV EAX,dword ptr [EDX + 0x8]       ; 00498564
    MOV dword ptr [ESP + 0x30],EAX      ; 00498567
    JMP 0x004984eb                      ; 0049856b
        ;   XREF to: 004984eb (UNCONDITIONAL_JUMP)  ; LAB_004984eb
    CMP dword ptr [ESI + 0x24ac],0x0    ; 00498570
        ;   Label: LAB_00498570
    JNZ 0x00498543                      ; 00498577
        ;   XREF to: 00498543 (CONDITIONAL_JUMP)  ; LAB_00498543
    IMUL EAX,dword ptr [ESP + 0xa0],0xc ; 00498579
        ;   Label: LAB_00498579
    LEA EDX,[ESP + 0x4]                 ; 00498581
    ADD EDX,EAX                         ; 00498585
    LEA EAX,[EBX + 0x20]                ; 00498587
    FLD float ptr [EAX]                 ; 0049858a
    FSUB float ptr [EDX]                ; 0049858c
    FSTP float ptr [ESP + 0x7c]         ; 0049858e
    FLD float ptr [EAX + 0x4]           ; 00498592
    FSUB float ptr [EDX + 0x4]          ; 00498595
    FST float ptr [ESP + 0x80]          ; 00498598
    FLD float ptr [EAX + 0x8]           ; 0049859f
    FXCH                                ; 004985a2
    FABS                                ; 004985a4
    FXCH                                ; 004985a6
    FSUB float ptr [EDX + 0x8]          ; 004985a8
    FSTP float ptr [ESP + 0x84]         ; 004985ab
    FCOMP double ptr [0x0058217a]       ; 004985b2 | DOUBLE_0058217a
    FNSTSW AX                           ; 004985b8
    SAHF                                ; 004985ba
    JA 0x00498543                       ; 004985bb
        ;   XREF to: 00498543 (CONDITIONAL_JUMP)  ; LAB_00498543
    FLD float ptr [ESP + 0x84]          ; 004985bd
    FMUL ST0                            ; 004985c4
    FLD float ptr [ESP + 0x7c]          ; 004985c6
    FMUL ST0                            ; 004985ca
    FADDP                               ; 004985cc
    FST float ptr [ESP + 0xa4]          ; 004985ce
    FCOMP float ptr [ESP + 0x9c]        ; 004985d5
    FNSTSW AX                           ; 004985dc
    SAHF                                ; 004985de
    JA 0x00498543                       ; 004985df
        ;   XREF to: 00498543 (CONDITIONAL_JUMP)  ; LAB_00498543
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004985e5
    MOV dword ptr [ESP + 0x9c],EAX      ; 004985ec
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004985f3
    MOV dword ptr [ESI + 0x1fa08],EBX   ; 004985fa
    MOV dword ptr [ESP + 0x98],EAX      ; 00498600
    JMP 0x00498543                      ; 00498607
        ;   XREF to: 00498543 (UNCONDITIONAL_JUMP)  ; LAB_00498543
    CMP dword ptr [ESI + 0x24ac],0x0    ; 0049860c
        ;   Label: LAB_0049860c
    JNZ 0x00498543                      ; 00498613
        ;   XREF to: 00498543 (CONDITIONAL_JUMP)  ; LAB_00498543
    MOV EAX,dword ptr [ESP + 0x94]      ; 00498619
    PUSH EAX                            ; 00498620
    LEA EAX,[ESP + 0x5c]                ; 00498621
    PUSH EAX                            ; 00498625
    PUSH EBX                            ; 00498626
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 00498627
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    ADD ESP,0xc                         ; 0049862c
    FLD float ptr [ESP + 0x5c]          ; 0049862f
    FMUL ST0                            ; 00498633
    FLD float ptr [ESP + 0x58]          ; 00498635
    FMUL ST0                            ; 00498639
    FADDP                               ; 0049863b
    FLD float ptr [ESP + 0x60]          ; 0049863d
    FMUL ST0                            ; 00498641
    FADDP                               ; 00498643
    FSQRT                               ; 00498645
    FST float ptr [ESP]                 ; 00498647
    FLDZ                                ; 0049864a
    FCOMPP                              ; 0049864c
    FNSTSW AX                           ; 0049864e
    SAHF                                ; 00498650
    JNC 0x00498694                      ; 00498651
        ;   XREF to: 00498694 (CONDITIONAL_JUMP)  ; LAB_00498694
    FLD1                                ; 00498653
    FLD float ptr [ESP + 0x58]          ; 00498655
    FXCH                                ; 00498659
    FDIV float ptr [ESP]                ; 0049865b
    FXCH                                ; 0049865e
    FMUL ST1                            ; 00498660
    FLD float ptr [ESP + 0x5c]          ; 00498662
    FMUL ST2                            ; 00498666
    FLD float ptr [ESP + 0x60]          ; 00498668
    FMULP ST3                           ; 0049866c
    FXCH                                ; 0049866e
    FSTP float ptr [ESP + 0x58]         ; 00498670
    FSTP float ptr [ESP + 0x5c]         ; 00498674
    FSTP float ptr [ESP + 0x60]         ; 00498678
    FLD float ptr [ESP + 0x60]          ; 0049867c
        ;   Label: LAB_0049867c
    FCOMP double ptr [0x00582172]       ; 00498680 | DOUBLE_00582172
    FNSTSW AX                           ; 00498686
    SAHF                                ; 00498688
    JA 0x00498543                       ; 00498689
        ;   XREF to: 00498543 (CONDITIONAL_JUMP)  ; LAB_00498543
    JMP 0x00498579                      ; 0049868f
        ;   XREF to: 00498579 (UNCONDITIONAL_JUMP)  ; LAB_00498579
    XOR EDX,EDX                         ; 00498694
        ;   Label: LAB_00498694
    MOV dword ptr [ESP + 0x5c],EDX      ; 00498696
    MOV dword ptr [ESP + 0x58],EDX      ; 0049869a
    MOV dword ptr [ESP + 0x60],EDX      ; 0049869e
    JMP 0x0049867c                      ; 004986a2
        ;   XREF to: 0049867c (UNCONDITIONAL_JUMP)  ; LAB_0049867c
    PUSH ESI                            ; 004986a4
        ;   Label: LAB_004986a4
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004986a5
    PUSH EBX                            ; 004986ab
    CALL dword ptr [EAX + 0x7c]         ; 004986ac
    ADD ESP,0x8                         ; 004986af
    MOV dword ptr [ESP + 0xa0],EAX      ; 004986b2
    CMP EAX,0x2                         ; 004986b9
    JNC 0x004986cc                      ; 004986bc
        ;   XREF to: 004986cc (CONDITIONAL_JUMP)  ; LAB_004986cc
    CMP EAX,0x1                         ; 004986be
    JZ 0x0049860c                       ; 004986c1
        ;   XREF to: 0049860c (CONDITIONAL_JUMP)  ; LAB_0049860c
    JMP 0x00498543                      ; 004986c7
        ;   XREF to: 00498543 (UNCONDITIONAL_JUMP)  ; LAB_00498543
    JBE 0x00498570                      ; 004986cc
        ;   XREF to: 00498570 (CONDITIONAL_JUMP)  ; LAB_00498570
        ;   Label: LAB_004986cc
    CMP EAX,0x3                         ; 004986d2
    JZ 0x00498570                       ; 004986d5
        ;   XREF to: 00498570 (CONDITIONAL_JUMP)  ; LAB_00498570
    JMP 0x00498543                      ; 004986db
        ;   XREF to: 00498543 (UNCONDITIONAL_JUMP)  ; LAB_00498543
    MOV EBX,dword ptr [ESI + 0x1fa08]   ; 004986e0
        ;   Label: LAB_004986e0
    TEST EBX,EBX                        ; 004986e6
    JZ 0x00498749                       ; 004986e8
        ;   XREF to: 00498749 (CONDITIONAL_JUMP)  ; LAB_00498749
    MOV EDX,dword ptr [ESP + 0x98]      ; 004986ea
    LEA EAX,[EDX*0x4 + 0x0]             ; 004986f1
    SUB EAX,EDX                         ; 004986f8
    FLD float ptr [EBX + 0x20]          ; 004986fa
    FSUB float ptr [ESP + EAX*0x4 + 0x4] ; 004986fd
    FADD float ptr [ESI + 0x20]         ; 00498701
    MOV EDX,dword ptr [ESI + 0x1fa08]   ; 00498704
    FSTP float ptr [ESI + 0x20]         ; 0049870a
    FLD float ptr [EDX + 0x28]          ; 0049870d
    FSUB float ptr [ESP + EAX*0x4 + 0xc] ; 00498710
    FADD float ptr [ESI + 0x28]         ; 00498714
    LEA EAX,[ESI + 0x150]               ; 00498717
    FSTP float ptr [ESI + 0x28]         ; 0049871d
    MOV ESI,dword ptr [ESP + 0x98]      ; 00498720
    CMP ESI,0x2                         ; 00498727
    JNC 0x00498786                      ; 0049872a
        ;   XREF to: 00498786 (CONDITIONAL_JUMP)  ; LAB_00498786
    CMP ESI,0x1                         ; 0049872c
    JNZ 0x00498759                      ; 0049872f
        ;   XREF to: 00498759 (CONDITIONAL_JUMP)  ; LAB_00498759
    PUSH ESI                            ; 00498731
    PUSH 0xe                            ; 00498732
    PUSH EAX                            ; 00498734
        ;   Label: LAB_00498734
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00498735
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0049873a
    MOV EAX,0x1                         ; 0049873d
        ;   Label: LAB_0049873d
    MOV ESP,EBP                         ; 00498742
        ;   Label: LAB_00498742
    POP EBP                             ; 00498744
    POP EDI                             ; 00498745
    POP ESI                             ; 00498746
    POP EBX                             ; 00498747
    RET                                 ; 00498748
    XOR EAX,EAX                         ; 00498749
        ;   Label: LAB_00498749
    JMP 0x00498742                      ; 0049874b
        ;   XREF to: 00498742 (UNCONDITIONAL_JUMP)  ; LAB_00498742
    PUSH 0x1                            ; 0049874d
        ;   Label: LAB_0049874d
    PUSH 0xf                            ; 0049874f
    JMP 0x00498734                      ; 00498751
        ;   XREF to: 00498734 (UNCONDITIONAL_JUMP)  ; LAB_00498734
    PUSH 0x1                            ; 00498753
        ;   Label: LAB_00498753
    PUSH 0x4                            ; 00498755
    JMP 0x00498734                      ; 00498757
        ;   XREF to: 00498734 (UNCONDITIONAL_JUMP)  ; LAB_00498734
    MOV EDI,dword ptr [ESP + 0x98]      ; 00498759
        ;   Label: LAB_00498759
    PUSH EDI                            ; 00498760
    MOV EBX,0x582134                    ; 00498761 | = "..\\core\\gabriela.cpp"
    MOV ESI,0x638                       ; 00498766
    PUSH 0x582149                       ; 0049876b | = "Hell froze - invalid pickUpType: %d"
    MOV dword ptr [0x01cc4800],EBX      ; 00498770 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 00498776 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0049877c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 00498781
    JMP 0x0049873d                      ; 00498784
        ;   XREF to: 0049873d (UNCONDITIONAL_JUMP)  ; LAB_0049873d
    JBE 0x0049874d                      ; 00498786
        ;   XREF to: 0049874d (CONDITIONAL_JUMP)  ; LAB_0049874d
        ;   Label: LAB_00498786
    CMP ESI,0x3                         ; 00498788
    JZ 0x00498753                       ; 0049878b
        ;   XREF to: 00498753 (CONDITIONAL_JUMP)  ; LAB_00498753
    JMP 0x00498759                      ; 0049878d
        ;   XREF to: 00498759 (UNCONDITIONAL_JUMP)  ; LAB_00498759

