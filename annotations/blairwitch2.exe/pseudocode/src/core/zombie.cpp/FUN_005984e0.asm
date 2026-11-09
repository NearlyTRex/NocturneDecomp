; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_zombie_cpp_FUN_005984e0(CZombie *this_ptr,float delta_time)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined        Stack[-0x168]:1  local_168
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_zombie.cpp_FUN_00595f30 at 005975d0
;
; Referenced Globals:
;   undefined4 s_s_can_t_pick_up_s_sombod_005ef1d1+1
;   TerminatedCString s_s_can_t_pick_up_s_giving_005ef204
;   TerminatedCString s_s_beginning_to_pickup_s_005ef224
;   TerminatedCString s_core_zombie_cpp_005ef23f
;   TerminatedCString s_Invalid_zombie_object_sh_005ef252
;   TerminatedCString s_CBodyPart_005ef26f
;   TerminatedCString s_s_is_going_to_try_to_pic_005ef279
;   undefined4 DAT_005ef2a2
;   undefined4 DAT_005ef2aa
;   undefined4 DAT_005ef2b2
;   undefined4 DAT_005ef2ba
;   CConsole* g_CConsolePtr = 007c158c
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01d046a0
;   ... and 6 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_0040c840
;   core_actor.cpp_FUN_0040cf60
;   core_actor.cpp_FUN_0040cfc0
;   core_bodypart.cpp_FUN_00417b20
;   core_bodypart.cpp_FUN_00417ba0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000
;   core_main.c_FUN_004e4500
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_zombie.cpp_classifyObjectShape_FUN_00595910
;   core_zombie.cpp_FUN_00598e40
;   core_zombie.cpp_FUN_00598ee0
;   core_zombie.cpp_FUN_00599d00
;   engine_console.cpp_FUN_00436710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005984e0
        ;   Label: core_zombie.cpp_FUN_005984e0
    PUSH ESI                            ; 005984e1
    PUSH EDI                            ; 005984e2
    PUSH EBP                            ; 005984e3
    MOV EBP,ESP                         ; 005984e4
    SUB ESP,0x224                       ; 005984e6
    AND ESP,0xfffffff8                  ; 005984ec
    MOV EAX,dword ptr [EBP + 0x14]      ; 005984ef
    CMP dword ptr [EAX + 0x10bc4],0x0   ; 005984f2
    JL 0x0059855d                       ; 005984f9
        ;   XREF to: 0059855d (CONDITIONAL_JUMP)  ; LAB_0059855d
    FLD float ptr [EAX + 0x10b00]       ; 005984fb
    FSUB float ptr [EBP + 0x18]         ; 00598501
    FST float ptr [EAX + 0x10b00]       ; 00598504
    FLDZ                                ; 0059850a
    FCOMPP                              ; 0059850c
    FNSTSW AX                           ; 0059850e
    SAHF                                ; 00598510
    JC 0x00598566                       ; 00598511
        ;   XREF to: 00598566 (CONDITIONAL_JUMP)  ; LAB_00598566
    MOV EAX,dword ptr [EBP + 0x14]      ; 00598513
        ;   Label: LAB_00598513
    MOV EBX,dword ptr [EAX + 0x2620]    ; 00598516
    TEST EBX,EBX                        ; 0059851c
    JNZ 0x0059855d                      ; 0059851e
        ;   XREF to: 0059855d (CONDITIONAL_JUMP)  ; LAB_0059855d
    MOV ESI,dword ptr [EAX + 0x2698]    ; 00598520
    TEST ESI,ESI                        ; 00598526
    JNZ 0x0059855d                      ; 00598528
        ;   XREF to: 0059855d (CONDITIONAL_JUMP)  ; LAB_0059855d
    FLD float ptr [EAX + 0x10b04]       ; 0059852a
    FLDZ                                ; 00598530
    FCOMPP                              ; 00598532
    FNSTSW AX                           ; 00598534
    SAHF                                ; 00598536
    JNC 0x005985a4                      ; 00598537
        ;   XREF to: 005985a4 (CONDITIONAL_JUMP)  ; LAB_005985a4
    MOV EAX,dword ptr [EBP + 0x14]      ; 00598539
    FLD float ptr [EAX + 0x10b04]       ; 0059853c
    FSUB float ptr [EBP + 0x18]         ; 00598542
    FST float ptr [EAX + 0x10b04]       ; 00598545
    FLDZ                                ; 0059854b
    FCOMPP                              ; 0059854d
    FNSTSW AX                           ; 0059854f
    SAHF                                ; 00598551
    JBE 0x0059855d                      ; 00598552
        ;   XREF to: 0059855d (CONDITIONAL_JUMP)  ; LAB_0059855d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00598554
    MOV dword ptr [EAX + 0x10b04],EBX   ; 00598557
    XOR EAX,EAX                         ; 0059855d
        ;   Label: LAB_0059855d
    MOV ESP,EBP                         ; 0059855f
    POP EBP                             ; 00598561
    POP EDI                             ; 00598562
    POP ESI                             ; 00598563
    POP EBX                             ; 00598564
    RET                                 ; 00598565
    MOV EAX,dword ptr [EBP + 0x14]      ; 00598566
        ;   Label: LAB_00598566
    MOV ECX,dword ptr [EAX + 0x10afc]   ; 00598569
    PUSH 0x41200000                     ; 0059856f
    INC ECX                             ; 00598574
    PUSH 0x40a00000                     ; 00598575
    MOV dword ptr [EAX + 0x10afc],ECX   ; 0059857a
    CALL core_actor.cpp_FUN_0040cf60    ; 00598580
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0x228],EAX     ; 00598585
    FLD float ptr [ESP + 0x228]         ; 0059858c
    ADD ESP,0x8                         ; 00598593
    MOV EAX,dword ptr [EBP + 0x14]      ; 00598596
    FSTP float ptr [EAX + 0x10b00]      ; 00598599
    JMP 0x00598513                      ; 0059859f
        ;   XREF to: 00598513 (UNCONDITIONAL_JUMP)  ; LAB_00598513
    MOV EAX,dword ptr [EBP + 0x14]      ; 005985a4
        ;   Label: LAB_005985a4
    MOV EBX,dword ptr [EBP + 0x14]      ; 005985a7
    MOV EDI,dword ptr [EAX + 0x10b08]   ; 005985aa
    ADD EBX,0x20                        ; 005985b0
    TEST EDI,EDI                        ; 005985b3
    JNZ 0x0059864e                      ; 005985b5
        ;   XREF to: 0059864e (CONDITIONAL_JUMP)  ; LAB_0059864e
    LEA EAX,[ESP + 0xd0]                ; 005985bb
    MOV dword ptr [ESP + 0x208],ESI     ; 005985c2
    MOV dword ptr [ESP + 0x218],ESI     ; 005985c9
    MOV dword ptr [ESP + 0x20c],EBX     ; 005985d0
    MOV dword ptr [ESP + 0x210],ESI     ; 005985d7
    ADD EAX,0xc                         ; 005985de
    MOV dword ptr [ESP + 0x21c],ESI     ; 005985e1
    MOV dword ptr [ESP + 0x214],EAX     ; 005985e8
    MOV EAX,[0x0061b5a8]                ; 005985ef | g_CDemonSetPtr
        ;   Label: LAB_005985ef
    MOV EBX,dword ptr [ESP + 0x218]     ; 005985f4
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 005985fb | g_CDemonSetInstance.field1364324_0x14d164
    JGE 0x00598dcb                      ; 00598601
        ;   XREF to: 00598dcb (CONDITIONAL_JUMP)  ; LAB_00598dcb
    ADD EAX,dword ptr [ESP + 0x210]     ; 00598607
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 0059860e | g_CDemonSetInstance.field1364328_0x14d168
    PUSH EBX                            ; 00598614
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00598615
    CALL dword ptr [EAX + 0x9c]         ; 0059861b
    ADD ESP,0x4                         ; 00598621
    TEST EAX,EAX                        ; 00598624
    JZ 0x00598be8                       ; 00598626
        ;   XREF to: 00598be8 (CONDITIONAL_JUMP)  ; LAB_00598be8
    MOV ECX,dword ptr [ESP + 0x218]     ; 0059862c
        ;   Label: LAB_0059862c
    MOV EDX,dword ptr [ESP + 0x210]     ; 00598633
    INC ECX                             ; 0059863a
    ADD EDX,0x4                         ; 0059863b
    MOV dword ptr [ESP + 0x218],ECX     ; 0059863e
    MOV dword ptr [ESP + 0x210],EDX     ; 00598645
    JMP 0x005985ef                      ; 0059864c
        ;   XREF to: 005985ef (UNCONDITIONAL_JUMP)  ; LAB_005985ef
    PUSH EDI                            ; 0059864e
        ;   Label: LAB_0059864e
    MOV ESI,dword ptr [EDI + 0x2b0]     ; 0059864f
    CALL dword ptr [ESI + 0x9c]         ; 00598655
    ADD ESP,0x4                         ; 0059865b
    TEST EAX,EAX                        ; 0059865e
    JNZ 0x00598955                      ; 00598660
        ;   XREF to: 00598955 (CONDITIONAL_JUMP)  ; LAB_00598955
    MOV EAX,dword ptr [EBP + 0x14]      ; 00598666
    MOV EAX,dword ptr [EAX + 0x10b08]   ; 00598669
    FLD float ptr [EBX]                 ; 0059866f
    FSUB float ptr [EAX + 0x20]         ; 00598671
    FMUL ST0                            ; 00598674
    FLD float ptr [EBX + 0x8]           ; 00598676
    FSUB float ptr [EAX + 0x28]         ; 00598679
    FMUL ST0                            ; 0059867c
    FADDP                               ; 0059867e
    FSQRT                               ; 00598680
    FMUL double ptr [0x005ef2a2]        ; 00598682 | DAT_005ef2a2
    FSUBR double ptr [0x005ef2aa]       ; 00598688 | DAT_005ef2aa
    FST float ptr [ESP + 0x4]           ; 0059868e
    FLD1                                ; 00598692
    FCOMPP                              ; 00598694
    FNSTSW AX                           ; 00598696
    SAHF                                ; 00598698
    JBE 0x005986a3                      ; 00598699
        ;   XREF to: 005986a3 (CONDITIONAL_JUMP)  ; LAB_005986a3
    MOV dword ptr [ESP + 0x4],0x3f800000 ; 0059869b
    FLD float ptr [EBP + 0x18]          ; 005986a3
        ;   Label: LAB_005986a3
    MOV EAX,dword ptr [EBP + 0x14]      ; 005986a6
    FMUL float ptr [ESP + 0x4]          ; 005986a9
    MOV EDI,dword ptr [EAX + 0x10b0c]   ; 005986ad
    PUSH EDI                            ; 005986b3
    FADD float ptr [EAX + 0x10b04]      ; 005986b4
    PUSH EAX                            ; 005986ba
    FSTP float ptr [EAX + 0x10b04]      ; 005986bb
    CALL core_zombie.cpp_FUN_00598e40   ; 005986c1
        ;   XREF to: 00598e40 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_FUN_00598e40(CZombie * this_ptr, int object_shape_type)
    ADD ESP,0x8                         ; 005986c6
    MOV ESI,0xffffffff                  ; 005986c9
    MOV dword ptr [ESP + 0x200],EAX     ; 005986ce
    TEST EAX,EAX                        ; 005986d5
    JL 0x0059893b                       ; 005986d7
        ;   XREF to: 0059893b (CONDITIONAL_JUMP)  ; LAB_0059893b
    MOV EAX,dword ptr [EBP + 0x14]      ; 005986dd
    FLD float ptr [EAX + 0x10b04]       ; 005986e0
    FLDZ                                ; 005986e6
    FCOMPP                              ; 005986e8
    FNSTSW AX                           ; 005986ea
    SAHF                                ; 005986ec
    JBE 0x0059893b                      ; 005986ed
        ;   XREF to: 0059893b (CONDITIONAL_JUMP)  ; LAB_0059893b
    MOV EDX,dword ptr [EBP + 0x14]      ; 005986f3
    MOV EAX,dword ptr [EBP + 0x14]      ; 005986f6
    PUSH EDX                            ; 005986f9
    MOV EAX,dword ptr [EAX + 0x10b08]   ; 005986fa
    PUSH EAX                            ; 00598700
    MOV EBX,dword ptr [EAX + 0x2b0]     ; 00598701
    CALL dword ptr [EBX + 0x8c]         ; 00598707
    ADD ESP,0x8                         ; 0059870d
    CMP EAX,0x3                         ; 00598710
    JNZ 0x0059893b                      ; 00598713
        ;   XREF to: 0059893b (CONDITIONAL_JUMP)  ; LAB_0059893b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00598719
    MOV ECX,dword ptr [EAX + 0x10b0c]   ; 0059871c
    PUSH ECX                            ; 00598722
    PUSH EAX                            ; 00598723
    CALL core_zombie.cpp_FUN_00598ee0   ; 00598724
        ;   XREF to: 00598ee0 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_FUN_00598ee0(CZombie * this_ptr, int object_shape_type)
    ADD ESP,0x8                         ; 00598729
    TEST EAX,EAX                        ; 0059872c
    JZ 0x0059893b                       ; 0059872e
        ;   XREF to: 0059893b (CONDITIONAL_JUMP)  ; LAB_0059893b
    MOV ESI,dword ptr [EBP + 0x14]      ; 00598734
    MOV ESI,dword ptr [ESI + 0x10b0c]   ; 00598737
    CMP ESI,0x2                         ; 0059873d
    JNC 0x00598ac7                      ; 00598740
        ;   XREF to: 00598ac7 (CONDITIONAL_JUMP)  ; LAB_00598ac7
    CMP ESI,0x1                         ; 00598746
    JNZ 0x00598ad6                      ; 00598749
        ;   XREF to: 00598ad6 (CONDITIONAL_JUMP)  ; LAB_00598ad6
    MOV EBX,dword ptr [EBP + 0x14]      ; 0059874f
        ;   Label: LAB_0059874f
    MOV EBX,dword ptr [EBX + 0x10b08]   ; 00598752
    PUSH EBX                            ; 00598758
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00598759
    LEA ESI,[ESP + 0xa4]                ; 0059875f
    LEA EDI,[ESP + 0x5c]                ; 00598766
    CALL dword ptr [EAX + 0x24]         ; 0059876a
    MOV ECX,0x6                         ; 0059876d
    ADD ESP,0x4                         ; 00598772
    LEA EAX,[ESP + 0x1f0]               ; 00598775
    LEA ESI,[ESP + 0xa0]                ; 0059877c
    PUSH EAX                            ; 00598783
    MOVSD.REP ES:EDI,ESI                ; 00598784
    LEA EAX,[ESP + 0x68]                ; 00598786
    MOV EDI,0x3f000000                  ; 0059878a
    PUSH EAX                            ; 0059878f
    LEA EAX,[ESP + 0x60]                ; 00598790
    LEA ESI,[ESP + 0x1bc]               ; 00598794
    PUSH EAX                            ; 0059879b
    MOV dword ptr [ESP + 0x1fc],EDI     ; 0059879c
    LEA EDI,[ESP + 0xf4]                ; 005987a3
    CALL core_bodypart.cpp_FUN_00417ba0 ; 005987aa
        ;   XREF to: 00417ba0 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_00417ba0()
    LEA ESI,[ESP + 0x1c0]               ; 005987af
    ADD ESP,0x8                         ; 005987b6
    LEA EAX,[ESP + 0xec]                ; 005987b9
    MOVSD ES:EDI,ESI                    ; 005987c0
    MOVSD ES:EDI,ESI                    ; 005987c1
    MOVSD ES:EDI,ESI                    ; 005987c2
    PUSH EAX                            ; 005987c3
    LEA ESI,[ESP + 0x1ec]               ; 005987c4
    LEA EDI,[ESP + 0x1e0]               ; 005987cb
    CALL core_bodypart.cpp_FUN_00417b20 ; 005987d2
        ;   XREF to: 00417b20 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_00417b20()
    LEA ESI,[ESP + 0x1ec]               ; 005987d7
    ADD ESP,0x8                         ; 005987de
    LEA EAX,[ESP + 0x13c]               ; 005987e1
    FLD float ptr [ESP + 0x60]          ; 005987e8
    MOVSD ES:EDI,ESI                    ; 005987ec
    MOVSD ES:EDI,ESI                    ; 005987ed
    MOVSD ES:EDI,ESI                    ; 005987ee
    PUSH EAX                            ; 005987ef
    LEA EDI,[ESP + 0x140]               ; 005987f0
    LEA ESI,[ESP + 0x1dc]               ; 005987f7
    FADD double ptr [0x005ef2b2]        ; 005987fe | DAT_005ef2b2
    PUSH EBX                            ; 00598804
    FSTP float ptr [ESP + 0x1e8]        ; 00598805
    MOVSD ES:EDI,ESI                    ; 0059880c
    MOVSD ES:EDI,ESI                    ; 0059880d
    MOVSD ES:EDI,ESI                    ; 0059880e
    LEA EBX,[ESP + 0x15c]               ; 0059880f
    LEA ESI,[ESP + 0x12c]               ; 00598816
    LEA EDI,[ESP + 0x1a4]               ; 0059881d
    CALL core_actor.cpp_FUN_00408d70    ; 00598824
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x12c]               ; 00598829
    ADD ESP,0x8                         ; 00598830
    LEA EAX,[ESP + 0x19c]               ; 00598833
    MOVSD ES:EDI,ESI                    ; 0059883a
    MOVSD ES:EDI,ESI                    ; 0059883b
    MOVSD ES:EDI,ESI                    ; 0059883c
    CMP EBX,EAX                         ; 0059883d
    JZ 0x0059886b                       ; 0059883f
        ;   XREF to: 0059886b (CONDITIONAL_JUMP)  ; LAB_0059886b
    MOV EAX,dword ptr [ESP + 0x19c]     ; 00598841
    MOV dword ptr [ESP + 0x154],EAX     ; 00598848
    MOV EAX,dword ptr [ESP + 0x1a0]     ; 0059884f
    MOV dword ptr [ESP + 0x158],EAX     ; 00598856
    MOV EAX,dword ptr [ESP + 0x1a4]     ; 0059885d
    MOV dword ptr [ESP + 0x15c],EAX     ; 00598864
        ;   Label: LAB_00598864
    LEA EDI,[ESP + 0x178]               ; 0059886b
        ;   Label: LAB_0059886b
    MOV ESI,0x265370c                   ; 00598872
    MOV EAX,dword ptr [ESP + 0x200]     ; 00598877
    MOVSD ES:EDI,ESI                    ; 0059887e | DAT_0265370c
    MOVSD ES:EDI,ESI                    ; 0059887f | DAT_02653710
    MOVSD ES:EDI,ESI                    ; 00598880 | DAT_02653714
    TEST EAX,EAX                        ; 00598881
    JNZ 0x005988c8                      ; 00598883
        ;   XREF to: 005988c8 (CONDITIONAL_JUMP)  ; LAB_005988c8
    MOV EDX,0xbfc00000                  ; 00598885
    LEA EBX,[ESP + 0x178]               ; 0059888a
    MOV dword ptr [ESP + 0x11c],EAX     ; 00598891
    MOV dword ptr [ESP + 0x120],EAX     ; 00598898
    LEA EAX,[ESP + 0x118]               ; 0059889f
    MOV dword ptr [ESP + 0x118],EDX     ; 005988a6
    CMP EBX,EAX                         ; 005988ad
    JZ 0x005988c8                       ; 005988af
        ;   XREF to: 005988c8 (CONDITIONAL_JUMP)  ; LAB_005988c8
    XOR EDI,EDI                         ; 005988b1
    MOV dword ptr [ESP + 0x178],EDX     ; 005988b3
    MOV dword ptr [ESP + 0x17c],EDI     ; 005988ba
    MOV dword ptr [ESP + 0x180],EDI     ; 005988c1
    CMP dword ptr [ESP + 0x200],0x1     ; 005988c8
        ;   Label: LAB_005988c8
    JNZ 0x00598917                      ; 005988d0
        ;   XREF to: 00598917 (CONDITIONAL_JUMP)  ; LAB_00598917
    MOV ECX,0x3fc00000                  ; 005988d2
    XOR EBX,EBX                         ; 005988d7
    LEA EAX,[ESP + 0x178]               ; 005988d9
    MOV dword ptr [ESP + 0x1ac],EBX     ; 005988e0
    MOV dword ptr [ESP + 0x1b0],EBX     ; 005988e7
    LEA EBX,[ESP + 0x1a8]               ; 005988ee
    MOV dword ptr [ESP + 0x1a8],ECX     ; 005988f5
    CMP EAX,EBX                         ; 005988fc
    JZ 0x00598917                       ; 005988fe
        ;   XREF to: 00598917 (CONDITIONAL_JUMP)  ; LAB_00598917
    XOR EAX,EAX                         ; 00598900
    MOV dword ptr [ESP + 0x178],ECX     ; 00598902
    MOV dword ptr [ESP + 0x17c],EAX     ; 00598909
    MOV dword ptr [ESP + 0x180],EAX     ; 00598910
    PUSH 0x0                            ; 00598917
        ;   Label: LAB_00598917
    LEA EAX,[ESP + 0x17c]               ; 00598919
    PUSH 0x0                            ; 00598920
    PUSH EAX                            ; 00598922
    PUSH 0x0                            ; 00598923
    LEA EAX,[ESP + 0x164]               ; 00598925
    PUSH EAX                            ; 0059892c
    MOV ECX,dword ptr [EBP + 0x14]      ; 0059892d
    PUSH ECX                            ; 00598930
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 00598931
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00598936
    MOV ESI,EAX                         ; 00598939
    TEST ESI,ESI                        ; 0059893b
        ;   Label: LAB_0059893b
    JL 0x00598b0c                       ; 0059893d
        ;   XREF to: 00598b0c (CONDITIONAL_JUMP)  ; LAB_00598b0c
    JG 0x00598b7e                       ; 00598943
        ;   XREF to: 00598b7e (CONDITIONAL_JUMP)  ; LAB_00598b7e
    MOV EAX,0x1                         ; 00598949
    MOV ESP,EBP                         ; 0059894e
    POP EBP                             ; 00598950
    POP EDI                             ; 00598951
    POP ESI                             ; 00598952
    POP EBX                             ; 00598953
    RET                                 ; 00598954
    MOV EAX,dword ptr [EBP + 0x14]      ; 00598955
        ;   Label: LAB_00598955
    MOV EDX,dword ptr [EAX + 0x10b08]   ; 00598958
    PUSH EDX                            ; 0059895e
    PUSH EAX                            ; 0059895f
    PUSH 0x5ef1d2                       ; 00598960 | s_s_can_t_pick_up_s_sombod_005ef1d1+1
    MOV EBX,dword ptr [0x00609ed0]      ; 00598965 | g_CConsolePtr
    PUSH EBX                            ; 0059896b | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0059896c
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x10                        ; 00598971
    MOV EAX,dword ptr [EBP + 0x14]      ; 00598974
    MOV dword ptr [EAX + 0x10b08],0x0   ; 00598977
    PUSH EAX                            ; 00598981
    MOV dword ptr [EAX + 0x10b04],0x0   ; 00598982
    CALL core_zombie.cpp_FUN_00599d00   ; 0059898c
        ;   XREF to: 00599d00 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_00599d00(CZombie * this_ptr)
    ADD ESP,0x4                         ; 00598991
    XOR EAX,EAX                         ; 00598994
    MOV ESP,EBP                         ; 00598996
    POP EBP                             ; 00598998
    POP EDI                             ; 00598999
    POP ESI                             ; 0059899a
    POP EBX                             ; 0059899b
    RET                                 ; 0059899c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0059899d
        ;   Label: LAB_0059899d
    MOV EBX,dword ptr [EBX + 0x10b08]   ; 005989a0
    PUSH EBX                            ; 005989a6
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005989a7
    LEA ESI,[ESP + 0xbc]                ; 005989ad
    LEA EDI,[ESP + 0x8c]                ; 005989b4
    CALL dword ptr [EAX + 0x24]         ; 005989bb
    MOV ECX,0x6                         ; 005989be
    ADD ESP,0x4                         ; 005989c3
    LEA EAX,[ESP + 0x1fc]               ; 005989c6
    LEA ESI,[ESP + 0xb8]                ; 005989cd
    PUSH EAX                            ; 005989d4
    MOVSD.REP ES:EDI,ESI                ; 005989d5
    LEA EAX,[ESP + 0x98]                ; 005989d7
    MOV ESI,0x3f000000                  ; 005989de
    PUSH EAX                            ; 005989e3
    LEA EAX,[ESP + 0x90]                ; 005989e4
    MOV dword ptr [ESP + 0x204],ESI     ; 005989eb
    PUSH EAX                            ; 005989f2
    LEA ESI,[ESP + 0x178]               ; 005989f3
    LEA EDI,[ESP + 0x190]               ; 005989fa
    CALL core_bodypart.cpp_FUN_00417ba0 ; 00598a01
        ;   XREF to: 00417ba0 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_00417ba0()
    LEA ESI,[ESP + 0x178]               ; 00598a06
    ADD ESP,0x8                         ; 00598a0d
    LEA EAX,[ESP + 0x188]               ; 00598a10
    MOVSD ES:EDI,ESI                    ; 00598a17
    MOVSD ES:EDI,ESI                    ; 00598a18
    MOVSD ES:EDI,ESI                    ; 00598a19
    PUSH EAX                            ; 00598a1a
    LEA ESI,[ESP + 0xfc]                ; 00598a1b
    LEA EDI,[ESP + 0x198]               ; 00598a22
    CALL core_bodypart.cpp_FUN_00417b20 ; 00598a29
        ;   XREF to: 00417b20 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_00417b20()
    LEA ESI,[ESP + 0xfc]                ; 00598a2e
    ADD ESP,0x8                         ; 00598a35
    LEA EAX,[ESP + 0x10c]               ; 00598a38
    FLD float ptr [ESP + 0x90]          ; 00598a3f
    MOVSD ES:EDI,ESI                    ; 00598a46
    MOVSD ES:EDI,ESI                    ; 00598a47
    MOVSD ES:EDI,ESI                    ; 00598a48
    PUSH EAX                            ; 00598a49
    LEA EDI,[ESP + 0x110]               ; 00598a4a
    LEA ESI,[ESP + 0x194]               ; 00598a51
    FADD double ptr [0x005ef2b2]        ; 00598a58 | DAT_005ef2b2
    PUSH EBX                            ; 00598a5e
    FSTP float ptr [ESP + 0x1a0]        ; 00598a5f
    MOVSD ES:EDI,ESI                    ; 00598a66
    MOVSD ES:EDI,ESI                    ; 00598a67
    MOVSD ES:EDI,ESI                    ; 00598a68
    LEA EBX,[ESP + 0x168]               ; 00598a69
    LEA ESI,[ESP + 0x108]               ; 00598a70
    LEA EDI,[ESP + 0x168]               ; 00598a77
    CALL core_actor.cpp_FUN_00408d70    ; 00598a7e
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x108]               ; 00598a83
    ADD ESP,0x8                         ; 00598a8a
    LEA EAX,[ESP + 0x154]               ; 00598a8d
    MOVSD ES:EDI,ESI                    ; 00598a94
    MOVSD ES:EDI,ESI                    ; 00598a95
    MOVSD ES:EDI,ESI                    ; 00598a96
    CMP EAX,EBX                         ; 00598a97
    JZ 0x0059886b                       ; 00598a99
        ;   XREF to: 0059886b (CONDITIONAL_JUMP)  ; LAB_0059886b
    MOV EAX,dword ptr [ESP + 0x160]     ; 00598a9f
    MOV dword ptr [ESP + 0x154],EAX     ; 00598aa6
    MOV EAX,dword ptr [ESP + 0x164]     ; 00598aad
    MOV dword ptr [ESP + 0x158],EAX     ; 00598ab4
    MOV EAX,dword ptr [ESP + 0x168]     ; 00598abb
    JMP 0x00598864                      ; 00598ac2
        ;   XREF to: 00598864 (UNCONDITIONAL_JUMP)  ; LAB_00598864
    JBE 0x0059899d                      ; 00598ac7
        ;   XREF to: 0059899d (CONDITIONAL_JUMP)  ; LAB_0059899d
        ;   Label: LAB_00598ac7
    CMP ESI,0x3                         ; 00598acd
    JZ 0x0059874f                       ; 00598ad0
        ;   XREF to: 0059874f (CONDITIONAL_JUMP)  ; LAB_0059874f
    MOV EBX,dword ptr [EBP + 0x14]      ; 00598ad6
        ;   Label: LAB_00598ad6
    MOV EBX,dword ptr [EBX + 0x10b08]   ; 00598ad9
    LEA EAX,[ESP + 0x154]               ; 00598adf
    ADD EBX,0x20                        ; 00598ae6
    CMP EAX,EBX                         ; 00598ae9
    JZ 0x0059886b                       ; 00598aeb
        ;   XREF to: 0059886b (CONDITIONAL_JUMP)  ; LAB_0059886b
    MOV EAX,dword ptr [EBX]             ; 00598af1
    MOV dword ptr [ESP + 0x154],EAX     ; 00598af3
    MOV EAX,dword ptr [EBX + 0x4]       ; 00598afa
    MOV dword ptr [ESP + 0x158],EAX     ; 00598afd
    MOV EAX,dword ptr [EBX + 0x8]       ; 00598b04
    JMP 0x00598864                      ; 00598b07
        ;   XREF to: 00598864 (UNCONDITIONAL_JUMP)  ; LAB_00598864
    MOV EAX,dword ptr [EBP + 0x14]      ; 00598b0c
        ;   Label: LAB_00598b0c
    MOV ECX,dword ptr [EAX + 0x10b08]   ; 00598b0f
    PUSH ECX                            ; 00598b15
    PUSH EAX                            ; 00598b16
    PUSH 0x5ef204                       ; 00598b17 | = "%s can't pick up %s, giving up\n"
    MOV ESI,dword ptr [0x00609ed0]      ; 00598b1c | g_CConsolePtr
    PUSH ESI                            ; 00598b22 | g_CConsoleInstance
    MOV EBX,EAX                         ; 00598b23
    CALL engine_console.cpp_FUN_00436710 ; 00598b25
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    MOV EAX,EBX                         ; 00598b2a
    ADD ESP,0x10                        ; 00598b2c
    MOV dword ptr [EAX + 0x10b08],0x0   ; 00598b2f
    PUSH EAX                            ; 00598b39
    MOV dword ptr [EAX + 0x10b04],0x41a00000 ; 00598b3a
    CALL core_zombie.cpp_FUN_00599d00   ; 00598b44
        ;   XREF to: 00599d00 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_00599d00(CZombie * this_ptr)
    ADD ESP,0x4                         ; 00598b49
    XOR EAX,EAX                         ; 00598b4c
    MOV ESP,EBP                         ; 00598b4e
    POP EBP                             ; 00598b50
    POP EDI                             ; 00598b51
    POP ESI                             ; 00598b52
    POP EBX                             ; 00598b53
    RET                                 ; 00598b54
    PUSH 0x1                            ; 00598b55
        ;   Label: LAB_00598b55
    MOV EAX,dword ptr [EBP + 0x14]      ; 00598b57
    PUSH 0xa                            ; 00598b5a
    ADD EAX,0x2b4                       ; 00598b5c
        ;   Label: LAB_00598b5c
    PUSH EAX                            ; 00598b61
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00598b62
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00598b67
    MOV EAX,0x1                         ; 00598b6a
    MOV ESP,EBP                         ; 00598b6f
    POP EBP                             ; 00598b71
    POP EDI                             ; 00598b72
    POP ESI                             ; 00598b73
    POP EBX                             ; 00598b74
    RET                                 ; 00598b75
    PUSH 0x1                            ; 00598b76
        ;   Label: LAB_00598b76
    MOV EAX,ESI                         ; 00598b78
    PUSH 0xc                            ; 00598b7a
    JMP 0x00598b5c                      ; 00598b7c
        ;   XREF to: 00598b5c (UNCONDITIONAL_JUMP)  ; LAB_00598b5c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00598b7e
        ;   Label: LAB_00598b7e
    MOV EBX,dword ptr [EAX + 0x10b08]   ; 00598b81
    PUSH EBX                            ; 00598b87
    PUSH EAX                            ; 00598b88
    PUSH 0x5ef224                       ; 00598b89 | = "%s beginning to pickup %s\n"
    MOV EDI,dword ptr [0x00609ed0]      ; 00598b8e | g_CConsolePtr
    PUSH EDI                            ; 00598b94 | g_CConsoleInstance
    MOV ESI,EAX                         ; 00598b95
    CALL engine_console.cpp_FUN_00436710 ; 00598b97
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    MOV EAX,ESI                         ; 00598b9c
    MOV EAX,dword ptr [EAX + 0x10b0c]   ; 00598b9e
    ADD ESP,0x10                        ; 00598ba4
    CMP EAX,0x2                         ; 00598ba7
    JNC 0x00598bb3                      ; 00598baa
        ;   XREF to: 00598bb3 (CONDITIONAL_JUMP)  ; LAB_00598bb3
    CMP EAX,0x1                         ; 00598bac
    JZ 0x00598b55                       ; 00598baf
        ;   XREF to: 00598b55 (CONDITIONAL_JUMP)  ; LAB_00598b55
    JMP 0x00598bba                      ; 00598bb1
        ;   XREF to: 00598bba (UNCONDITIONAL_JUMP)  ; LAB_00598bba
    JBE 0x00598b76                      ; 00598bb3
        ;   XREF to: 00598b76 (CONDITIONAL_JUMP)  ; LAB_00598b76
        ;   Label: LAB_00598bb3
    CMP EAX,0x3                         ; 00598bb5
    JZ 0x00598b55                       ; 00598bb8
        ;   XREF to: 00598b55 (CONDITIONAL_JUMP)  ; LAB_00598b55
    MOV EAX,0x5ef23f                    ; 00598bba | = "..\\core\\zombie.cpp"
        ;   Label: LAB_00598bba
    MOV EDX,0x5d1                       ; 00598bbf
    PUSH 0x5ef252                       ; 00598bc4 | = "Invalid zombie object shape!"
    MOV [0x01d046a0],EAX                ; 00598bc9 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 00598bce | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00598bd4
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00598bd9
    MOV EAX,0x1                         ; 00598bdc
    MOV ESP,EBP                         ; 00598be1
    POP EBP                             ; 00598be3
    POP EDI                             ; 00598be4
    POP ESI                             ; 00598be5
    POP EBX                             ; 00598be6
    RET                                 ; 00598be7
    MOV ECX,dword ptr [EBP + 0x14]      ; 00598be8
        ;   Label: LAB_00598be8
    PUSH ECX                            ; 00598beb
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00598bec
    PUSH EBX                            ; 00598bf2
    CALL dword ptr [EAX + 0x8c]         ; 00598bf3
    ADD ESP,0x8                         ; 00598bf9
    CMP EAX,0x3                         ; 00598bfc
    JNZ 0x0059862c                      ; 00598bff
        ;   XREF to: 0059862c (CONDITIONAL_JUMP)  ; LAB_0059862c
    PUSH EBX                            ; 00598c05
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00598c06
    LEA ESI,[ESP + 0x74]                ; 00598c0c
    LEA EDI,[ESP + 0xd4]                ; 00598c10
    CALL dword ptr [EAX + 0x24]         ; 00598c17
    MOV ECX,0x6                         ; 00598c1a
    ADD ESP,0x4                         ; 00598c1f
    LEA ESI,[ESP + 0x70]                ; 00598c22
    MOV EAX,dword ptr [ESP + 0x214]     ; 00598c26
    MOVSD.REP ES:EDI,ESI                ; 00598c2d
    FLD float ptr [EAX + 0x4]           ; 00598c2f
    FLD float ptr [EAX + 0x8]           ; 00598c32
    FLD float ptr [EAX]                 ; 00598c35
    LEA EDI,[ESP + 0x1c0]               ; 00598c37
    LEA ESI,[ESP + 0x148]               ; 00598c3e
    LEA EAX,[ESP + 0x1c0]               ; 00598c45
    FSUB float ptr [ESP + 0xd0]         ; 00598c4c
    FXCH ST2                            ; 00598c53
    FSUB float ptr [ESP + 0xd4]         ; 00598c55
    FXCH                                ; 00598c5c
    FSUB float ptr [ESP + 0xd8]         ; 00598c5e
    FXCH ST2                            ; 00598c65
    FSTP float ptr [ESP + 0x148]        ; 00598c67
    FSTP float ptr [ESP + 0x14c]        ; 00598c6e
    FSTP float ptr [ESP + 0x150]        ; 00598c75
    PUSH EAX                            ; 00598c7c
    MOVSD ES:EDI,ESI                    ; 00598c7d
    MOVSD ES:EDI,ESI                    ; 00598c7e
    MOVSD ES:EDI,ESI                    ; 00598c7f
    CALL core_zombie.cpp_classifyObjectShape_FUN_00595910 ; 00598c80
        ;   XREF to: 00595910 (UNCONDITIONAL_CALL)  ; undefined core_zombie.cpp_classifyObjectShape_FUN_00595910()
    ADD ESP,0x4                         ; 00598c85
    MOV dword ptr [ESP + 0x204],EAX     ; 00598c88
    TEST EAX,EAX                        ; 00598c8f
    JZ 0x0059862c                       ; 00598c91
        ;   XREF to: 0059862c (CONDITIONAL_JUMP)  ; LAB_0059862c
    PUSH EAX                            ; 00598c97
    MOV ESI,dword ptr [EBP + 0x14]      ; 00598c98
    PUSH ESI                            ; 00598c9b
    CALL core_zombie.cpp_FUN_00598ee0   ; 00598c9c
        ;   XREF to: 00598ee0 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_FUN_00598ee0(CZombie * this_ptr, int object_shape_type)
    ADD ESP,0x8                         ; 00598ca1
    TEST EAX,EAX                        ; 00598ca4
    JZ 0x0059862c                       ; 00598ca6
        ;   XREF to: 0059862c (CONDITIONAL_JUMP)  ; LAB_0059862c
    PUSH 0x5ef26f                       ; 00598cac | = "CBodyPart"
    PUSH EBX                            ; 00598cb1
    CALL core_actor.cpp_FUN_0040c840    ; 00598cb2
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00598cb7
    TEST EAX,EAX                        ; 00598cba
    JZ 0x00598cd8                       ; 00598cbc
        ;   XREF to: 00598cd8 (CONDITIONAL_JUMP)  ; LAB_00598cd8
    MOV EAX,dword ptr [EBP + 0x14]      ; 00598cbe
    MOV ESI,dword ptr [EBX + 0x6c]      ; 00598cc1
    MOV EAX,dword ptr [EAX + 0x10afc]   ; 00598cc4
    AND ESI,0x3                         ; 00598cca
    AND EAX,0x3                         ; 00598ccd
    CMP ESI,EAX                         ; 00598cd0
    JNZ 0x0059862c                      ; 00598cd2
        ;   XREF to: 0059862c (CONDITIONAL_JUMP)  ; LAB_0059862c
    LEA EAX,[EBX + 0x20]                ; 00598cd8
        ;   Label: LAB_00598cd8
    MOV ESI,dword ptr [ESP + 0x20c]     ; 00598cdb
    LEA EDI,[ESP + 0x1cc]               ; 00598ce2
    FLD float ptr [EAX]                 ; 00598ce9
    FLD float ptr [EAX + 0x4]           ; 00598ceb
    FLD float ptr [EAX + 0x8]           ; 00598cee
    FXCH ST2                            ; 00598cf1
    FSUB float ptr [ESI]                ; 00598cf3
    FXCH                                ; 00598cf5
    FSUB float ptr [ESI + 0x4]          ; 00598cf7
    FXCH ST2                            ; 00598cfa
    FSUB float ptr [ESI + 0x8]          ; 00598cfc
    FXCH                                ; 00598cff
    FSTP float ptr [ESP + 0x130]        ; 00598d01
    FXCH                                ; 00598d08
    FSTP float ptr [ESP + 0x134]        ; 00598d0a
    LEA ESI,[ESP + 0x130]               ; 00598d11
    FSTP float ptr [ESP + 0x138]        ; 00598d18
    MOVSD ES:EDI,ESI                    ; 00598d1f
    MOVSD ES:EDI,ESI                    ; 00598d20
    MOVSD ES:EDI,ESI                    ; 00598d21
    FLD float ptr [ESP + 0x1d0]         ; 00598d22
    FMUL ST0                            ; 00598d29
    FST float ptr [ESP + 0x1d0]         ; 00598d2b
    FMUL float ptr [ESP + 0x1d0]        ; 00598d32
    FST float ptr [ESP + 0x1d0]         ; 00598d39
    FMUL float ptr [ESP + 0x1d0]        ; 00598d40
    FLD float ptr [ESP + 0x1cc]         ; 00598d47
    FMUL ST0                            ; 00598d4e
    FADDP                               ; 00598d50
    FLD float ptr [ESP + 0x1d4]         ; 00598d52
    FMUL ST0                            ; 00598d59
    FADDP                               ; 00598d5b
    FSQRT                               ; 00598d5d
    FST float ptr [ESP]                 ; 00598d5f
    FCOMP double ptr [0x005ef2aa]       ; 00598d62 | DAT_005ef2aa
    FNSTSW AX                           ; 00598d68
    SAHF                                ; 00598d6a
    JC 0x0059862c                       ; 00598d6b
        ;   XREF to: 0059862c (CONDITIONAL_JUMP)  ; LAB_0059862c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00598d71
    FLD float ptr [EAX + 0x10af8]       ; 00598d74
    FMUL float ptr [0x005ef2ba]         ; 00598d7a | DAT_005ef2ba
    FCOMP float ptr [ESP]               ; 00598d80
    FNSTSW AX                           ; 00598d83
    SAHF                                ; 00598d85
    JC 0x0059862c                       ; 00598d86
        ;   XREF to: 0059862c (CONDITIONAL_JUMP)  ; LAB_0059862c
    MOV EAX,dword ptr [ESP + 0x21c]     ; 00598d8c
    MOV dword ptr [ESP + EAX*0x1 + 0x8],EBX ; 00598d93
    MOV EBX,dword ptr [ESP + 0x21c]     ; 00598d97
    MOV EAX,dword ptr [ESP + 0x204]     ; 00598d9e
    MOV dword ptr [ESP + EBX*0x1 + 0x30],EAX ; 00598da5
    MOV EAX,dword ptr [ESP + 0x208]     ; 00598da9
    LEA EDI,[EBX + 0x4]                 ; 00598db0
    INC EAX                             ; 00598db3
    MOV dword ptr [ESP + 0x21c],EDI     ; 00598db4
    MOV dword ptr [ESP + 0x208],EAX     ; 00598dbb
    CMP EDI,0x28                        ; 00598dc2
    JL 0x0059862c                       ; 00598dc5
        ;   XREF to: 0059862c (CONDITIONAL_JUMP)  ; LAB_0059862c
    MOV ECX,dword ptr [ESP + 0x208]     ; 00598dcb
        ;   Label: LAB_00598dcb
    CMP ECX,0x1                         ; 00598dd2
    JL 0x0059855d                       ; 00598dd5
        ;   XREF to: 0059855d (CONDITIONAL_JUMP)  ; LAB_0059855d
    LEA EAX,[ECX + -0x1]                ; 00598ddb
    PUSH EAX                            ; 00598dde
    PUSH 0x0                            ; 00598ddf
    CALL core_actor.cpp_FUN_0040cfc0    ; 00598de1
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00598de6
    MOV ESI,dword ptr [EBP + 0x14]      ; 00598de9
    MOV EBX,dword ptr [ESP + EAX*0x4 + 0x8] ; 00598dec
    MOV dword ptr [ESI + 0x10b08],EBX   ; 00598df0
    MOV EAX,dword ptr [ESP + EAX*0x4 + 0x30] ; 00598df6
    MOV EBX,dword ptr [ESI + 0x10afc]   ; 00598dfa
    MOV dword ptr [ESI + 0x10b04],0xc2200000 ; 00598e00
    INC EBX                             ; 00598e0a
    MOV dword ptr [ESI + 0x10b0c],EAX   ; 00598e0b
    MOV dword ptr [ESI + 0x10afc],EBX   ; 00598e11
    MOV EDI,ESI                         ; 00598e17
    MOV ESI,dword ptr [ESI + 0x10b08]   ; 00598e19
    PUSH ESI                            ; 00598e1f
    PUSH EDI                            ; 00598e20
    PUSH 0x5ef279                       ; 00598e21 | = "%s is going to try to pick up %s\n"
    MOV EAX,[0x00609ed0]                ; 00598e26 | g_CConsolePtr
    PUSH EAX                            ; 00598e2b | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 00598e2c
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    MOV EAX,0x1                         ; 00598e31
    ADD ESP,0x10                        ; 00598e36
    MOV ESP,EBP                         ; 00598e39
    POP EBP                             ; 00598e3b
    POP EDI                             ; 00598e3c
    POP ESI                             ; 00598e3d
    POP EBX                             ; 00598e3e
    RET                                 ; 00598e3f

