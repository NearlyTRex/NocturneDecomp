; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_hero_cpp_CHero_tryPushNearbyBox_FUN_004b54c0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x80]:1  local_80
;
; XREF[2]:
;   FUN_00495a20 at 00496ba7
;   FUN_0053fc60 at 0053fe53
;
; Referenced Globals:
;   float FLOAT_00585873 = 0.5
;   double DOUBLE_0058587b = 1.20000000000000
;   double DOUBLE_00585883 = 5
;   double DOUBLE_0058588b = 0.610865238180555
;   undefined4 DAT_005be368
;   undefined4 CDemonActorType_00764800.name_hash
;   undefined4 DAT_01fa3ff0
;   undefined4 DAT_01fa3ff4
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_charactr.cpp_CCharacter_isCarryingAnything_FUN_004294f0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b54c0
        ;   Label: core_hero.cpp_CHero_tryPushNearbyBox_FUN_004b54c0
    PUSH ESI                            ; 004b54c1
    PUSH EDI                            ; 004b54c2
    PUSH EBP                            ; 004b54c3
    MOV EBP,ESP                         ; 004b54c4
    SUB ESP,0x78                        ; 004b54c6
    AND ESP,0xfffffff8                  ; 004b54c9
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b54cc
    PUSH EDX                            ; 004b54cf
    CALL core_charactr.cpp_CCharacter_isCarryingAnything_FUN_004294f0 ; 004b54d0
        ;   XREF to: 004294f0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_isCarryingAnything_FUN_004294f0()
    ADD ESP,0x4                         ; 004b54d5
    TEST EAX,EAX                        ; 004b54d8
    JNZ 0x004b5550                      ; 004b54da
        ;   XREF to: 004b5550 (CONDITIONAL_JUMP)  ; LAB_004b5550
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b54e0
    CMP dword ptr [EAX + 0x1fa0c],0x0   ; 004b54e3
    JNZ 0x004b5544                      ; 004b54ea
        ;   XREF to: 004b5544 (CONDITIONAL_JUMP)  ; LAB_004b5544
    XOR EDI,EDI                         ; 004b54ec
    XOR ESI,ESI                         ; 004b54ee
    MOV EBX,dword ptr [0x005be368]      ; 004b54f0 | DAT_005be368
        ;   Label: LAB_004b54f0
    CMP EDI,dword ptr [EBX + 0x14cd6c]  ; 004b54f6 | DAT_01fa3ff0
    JL 0x004b555a                       ; 004b54fc
        ;   XREF to: 004b555a (CONDITIONAL_JUMP)  ; LAB_004b555a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b54fe
        ;   Label: LAB_004b54fe
    MOV EDX,dword ptr [EAX + 0x1fa0c]   ; 004b5501
    TEST EDX,EDX                        ; 004b5507
    JZ 0x004b5550                       ; 004b5509
        ;   XREF to: 004b5550 (CONDITIONAL_JUMP)  ; LAB_004b5550
    MOV ECX,dword ptr [0x00764838]      ; 004b550b | CDemonActorType_00764800.name_hash
    PUSH ECX                            ; 004b5511
    PUSH EDX                            ; 004b5512
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004b5513
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    MOV EBX,EAX                         ; 004b5518
    ADD ESP,0x8                         ; 004b551a
    TEST EAX,EAX                        ; 004b551d
    JZ 0x004b5544                       ; 004b551f
        ;   XREF to: 004b5544 (CONDITIONAL_JUMP)  ; LAB_004b5544
    LEA EDX,[EBX + 0x324]               ; 004b5521
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b5527
    PUSH EDX                            ; 004b552a
    MOV dword ptr [EBX + 0x318],EAX     ; 004b552b
    PUSH EBX                            ; 004b5531
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004b5532
    CALL dword ptr [EAX + 0x28]         ; 004b5538
    ADD ESP,0x8                         ; 004b553b
    MOV dword ptr [EBX + 0x320],EAX     ; 004b553e
    MOV EAX,0x1                         ; 004b5544
        ;   Label: LAB_004b5544
    MOV ESP,EBP                         ; 004b5549
        ;   Label: LAB_004b5549
    POP EBP                             ; 004b554b
    POP EDI                             ; 004b554c
    POP ESI                             ; 004b554d
    POP EBX                             ; 004b554e
    RET                                 ; 004b554f
    XOR EAX,EAX                         ; 004b5550
        ;   Label: LAB_004b5550
    JMP 0x004b5549                      ; 004b5552
        ;   XREF to: 004b5549 (UNCONDITIONAL_JUMP)  ; LAB_004b5549
    INC EDI                             ; 004b5554
        ;   Label: LAB_004b5554
    ADD ESI,0x4                         ; 004b5555
    JMP 0x004b54f0                      ; 004b5558
        ;   XREF to: 004b54f0 (UNCONDITIONAL_JUMP)  ; LAB_004b54f0
    MOV EDX,dword ptr [0x00764838]      ; 004b555a | CDemonActorType_00764800.name_hash
        ;   Label: LAB_004b555a
    PUSH EDX                            ; 004b5560
    MOV ECX,dword ptr [ESI + EBX*0x1 + 0x14cd70] ; 004b5561 | DAT_01fa3ff4
    PUSH ECX                            ; 004b5568
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004b5569
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    MOV EBX,EAX                         ; 004b556e
    ADD ESP,0x8                         ; 004b5570
    TEST EAX,EAX                        ; 004b5573
    JZ 0x004b5554                       ; 004b5575
        ;   XREF to: 004b5554 (CONDITIONAL_JUMP)  ; LAB_004b5554
    CMP dword ptr [EAX + 0x314],0x0     ; 004b5577
    JZ 0x004b5554                       ; 004b557e
        ;   XREF to: 004b5554 (CONDITIONAL_JUMP)  ; LAB_004b5554
    CMP dword ptr [EBX + 0x318],0x0     ; 004b5580
    JNZ 0x004b5554                      ; 004b5587
        ;   XREF to: 004b5554 (CONDITIONAL_JUMP)  ; LAB_004b5554
    LEA EAX,[ESP + 0x8]                 ; 004b5589
    PUSH EAX                            ; 004b558d
    MOV EDX,dword ptr [EBX + 0x14c]     ; 004b558e
    PUSH EBX                            ; 004b5594
    CALL dword ptr [EDX + 0x14]         ; 004b5595
    ADD ESP,0x8                         ; 004b5598
    FLD float ptr [ESP + 0xc]           ; 004b559b
    FLD float ptr [ESP + 0x8]           ; 004b559f
    FADD float ptr [ESP + 0x14]         ; 004b55a3
    FXCH                                ; 004b55a7
    FADD float ptr [ESP + 0x18]         ; 004b55a9
    FXCH                                ; 004b55ad
    FST float ptr [ESP + 0x20]          ; 004b55af
    FMUL float ptr [0x00585873]         ; 004b55b3 | FLOAT_00585873
    FXCH                                ; 004b55b9
    FST float ptr [ESP + 0x24]          ; 004b55bb
    FMUL float ptr [0x00585873]         ; 004b55bf | FLOAT_00585873
    LEA EAX,[ESP + 0x38]                ; 004b55c5
    FLD float ptr [ESP + 0x10]          ; 004b55c9
    PUSH EAX                            ; 004b55cd
    FADD float ptr [ESP + 0x20]         ; 004b55ce
    LEA EAX,[ESP + 0x30]                ; 004b55d2
    FST float ptr [ESP + 0x2c]          ; 004b55d6
    PUSH EAX                            ; 004b55da
    FMUL float ptr [0x00585873]         ; 004b55db | FLOAT_00585873
    PUSH EBX                            ; 004b55e1
    FXCH ST2                            ; 004b55e2
    FSTP float ptr [ESP + 0x44]         ; 004b55e4
    FSTP float ptr [ESP + 0x48]         ; 004b55e8
    FSTP float ptr [ESP + 0x4c]         ; 004b55ec
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004b55f0
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 004b55f5
    LEA EAX,[ESP + 0x2c]                ; 004b55f8
    PUSH EAX                            ; 004b55fc
    LEA EAX,[ESP + 0x54]                ; 004b55fd
    PUSH EAX                            ; 004b5601
    MOV ECX,dword ptr [EBP + 0x14]      ; 004b5602
    PUSH ECX                            ; 004b5605
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 004b5606
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    ADD ESP,0xc                         ; 004b560b
    FLD float ptr [ESP + 0x1c]          ; 004b560e
    FLD float ptr [ESP + 0x14]          ; 004b5612
    FSUB float ptr [ESP + 0x8]          ; 004b5616
    FXCH                                ; 004b561a
    FSUB float ptr [ESP + 0x10]         ; 004b561c
    FXCH                                ; 004b5620
    FST float ptr [ESP + 0x68]          ; 004b5622
    FMUL float ptr [0x00585873]         ; 004b5626 | FLOAT_00585873
    FXCH                                ; 004b562c
    FST float ptr [ESP + 0x70]          ; 004b562e
    FMUL float ptr [0x00585873]         ; 004b5632 | FLOAT_00585873
    FXCH                                ; 004b5638
    FST float ptr [ESP + 0x44]          ; 004b563a
    FMUL float ptr [ESP + 0x44]         ; 004b563e
    FXCH                                ; 004b5642
    FST float ptr [ESP + 0x4c]          ; 004b5644
    FMUL float ptr [ESP + 0x4c]         ; 004b5648
    XOR EAX,EAX                         ; 004b564c
    FADDP                               ; 004b564e
    MOV dword ptr [ESP + 0x48],EAX      ; 004b5650
    FSQRT                               ; 004b5654
    FLD float ptr [ESP + 0x18]          ; 004b5656
    FSUB float ptr [ESP + 0xc]          ; 004b565a
    FXCH                                ; 004b565e
    FSUBR float ptr [ESP + 0x58]        ; 004b5660
    FXCH                                ; 004b5664
    FSTP float ptr [ESP + 0x6c]         ; 004b5666
    FCOMP double ptr [0x0058587b]       ; 004b566a | DOUBLE_0058587b
    FNSTSW AX                           ; 004b5670
    SAHF                                ; 004b5672
    JA 0x004b5554                       ; 004b5673
        ;   XREF to: 004b5554 (CONDITIONAL_JUMP)  ; LAB_004b5554
    FLD float ptr [ESP + 0x54]          ; 004b5679
    FLD1                                ; 004b567d
    FXCH                                ; 004b567f
    FSTP double ptr [ESP]               ; 004b5681
    FCOMP double ptr [ESP]              ; 004b5684
    FNSTSW AX                           ; 004b5687
    SAHF                                ; 004b5689
    JA 0x004b5554                       ; 004b568a
        ;   XREF to: 004b5554 (CONDITIONAL_JUMP)  ; LAB_004b5554
    FLD double ptr [ESP]                ; 004b5690
    FCOMP double ptr [0x00585883]       ; 004b5693 | DOUBLE_00585883
    FNSTSW AX                           ; 004b5699
    SAHF                                ; 004b569b
    JA 0x004b5554                       ; 004b569c
        ;   XREF to: 004b5554 (CONDITIONAL_JUMP)  ; LAB_004b5554
    LEA EAX,[ESP + 0x50]                ; 004b56a2
    PUSH EAX                            ; 004b56a6
    LEA EAX,[ESP + 0x60]                ; 004b56a7
    PUSH EAX                            ; 004b56ab
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004b56ac
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    ADD ESP,0x8                         ; 004b56b1
    PUSH dword ptr [EAX + 0x4]          ; 004b56b4
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004b56b7
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x78],EAX      ; 004b56bc
    FLD float ptr [ESP + 0x78]          ; 004b56c0
    FABS                                ; 004b56c4
    ADD ESP,0x4                         ; 004b56c6
    FCOMP double ptr [0x0058588b]       ; 004b56c9 | DOUBLE_0058588b
    FNSTSW AX                           ; 004b56cf
    SAHF                                ; 004b56d1
    JA 0x004b5554                       ; 004b56d2
        ;   XREF to: 004b5554 (CONDITIONAL_JUMP)  ; LAB_004b5554
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b56d8
    MOV dword ptr [EAX + 0x1fa0c],EBX   ; 004b56db
    JMP 0x004b54fe                      ; 004b56e1
        ;   XREF to: 004b54fe (UNCONDITIONAL_JUMP)  ; LAB_004b54fe

