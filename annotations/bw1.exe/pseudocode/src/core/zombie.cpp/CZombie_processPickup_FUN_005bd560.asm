; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_zombie_cpp_CZombie_processPickup_FUN_005bd560(CZombie *this_ptr,float delta_time)
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
;   core_zombie.cpp_CZombie_process_FUN_005bafb0 at 005bc64d
;
; Referenced Globals:
;   undefined4 s_s_can_t_pick_up_s_sombod_005fa7a3+1
;   TerminatedCString s_s_can_t_pick_up_s_giving_005fa7d6
;   TerminatedCString s_s_beginning_to_pickup_s_005fa7f6
;   TerminatedCString s_core_zombie_cpp_005fa811
;   TerminatedCString s_Invalid_zombie_object_sh_005fa824
;   TerminatedCString s_CBodyPart_005fa841
;   TerminatedCString s_s_is_going_to_try_to_pic_005fa84b
;   undefined4 DAT_005fa874
;   undefined4 DAT_005fa87c
;   undefined4 DAT_005fa884
;   undefined4 DAT_005fa88c
;   CConsole* g_CConsolePtr = 007db5f0
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01d1d400
;   ... and 6 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_actor.cpp_getRandomInt_FUN_0040cc60
;   core_actor.cpp_isOfClass_FUN_0040c550
;   core_bodypart.cpp_FUN_0041afa0
;   core_bodypart.cpp_FUN_0041b020
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0
;   core_main.c_FUN_005030e0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   core_zombie.cpp_classifyObjectShape_FUN_005ba990
;   core_zombie.cpp_CZombie_canPickupWithHand_FUN_005bdf60
;   core_zombie.cpp_CZombie_getPickupHandIndex_FUN_005bdec0
;   core_zombie.cpp_CZombie_resetChaseState_FUN_005bed80
;   engine_console.cpp_FUN_00445430
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bd560
        ;   Label: core_zombie.cpp_CZombie_processPickup_FUN_005bd560
    PUSH ESI                            ; 005bd561
    PUSH EDI                            ; 005bd562
    PUSH EBP                            ; 005bd563
    MOV EBP,ESP                         ; 005bd564
    SUB ESP,0x224                       ; 005bd566
    AND ESP,0xfffffff8                  ; 005bd56c
    MOV EAX,dword ptr [EBP + 0x14]      ; 005bd56f
    CMP dword ptr [EAX + 0xc334],0x0    ; 005bd572
    JL 0x005bd5dd                       ; 005bd579
        ;   XREF to: 005bd5dd (CONDITIONAL_JUMP)  ; LAB_005bd5dd
    FLD float ptr [EAX + 0xc270]        ; 005bd57b
    FSUB float ptr [EBP + 0x18]         ; 005bd581
    FST float ptr [EAX + 0xc270]        ; 005bd584
    FLDZ                                ; 005bd58a
    FCOMPP                              ; 005bd58c
    FNSTSW AX                           ; 005bd58e
    SAHF                                ; 005bd590
    JC 0x005bd5e6                       ; 005bd591
        ;   XREF to: 005bd5e6 (CONDITIONAL_JUMP)  ; LAB_005bd5e6
    MOV EAX,dword ptr [EBP + 0x14]      ; 005bd593
        ;   Label: LAB_005bd593
    MOV EBX,dword ptr [EAX + 0x25b0]    ; 005bd596
    TEST EBX,EBX                        ; 005bd59c
    JNZ 0x005bd5dd                      ; 005bd59e
        ;   XREF to: 005bd5dd (CONDITIONAL_JUMP)  ; LAB_005bd5dd
    MOV ESI,dword ptr [EAX + 0x2628]    ; 005bd5a0
    TEST ESI,ESI                        ; 005bd5a6
    JNZ 0x005bd5dd                      ; 005bd5a8
        ;   XREF to: 005bd5dd (CONDITIONAL_JUMP)  ; LAB_005bd5dd
    FLD float ptr [EAX + 0xc274]        ; 005bd5aa
    FLDZ                                ; 005bd5b0
    FCOMPP                              ; 005bd5b2
    FNSTSW AX                           ; 005bd5b4
    SAHF                                ; 005bd5b6
    JNC 0x005bd624                      ; 005bd5b7
        ;   XREF to: 005bd624 (CONDITIONAL_JUMP)  ; LAB_005bd624
    MOV EAX,dword ptr [EBP + 0x14]      ; 005bd5b9
    FLD float ptr [EAX + 0xc274]        ; 005bd5bc
    FSUB float ptr [EBP + 0x18]         ; 005bd5c2
    FST float ptr [EAX + 0xc274]        ; 005bd5c5
    FLDZ                                ; 005bd5cb
    FCOMPP                              ; 005bd5cd
    FNSTSW AX                           ; 005bd5cf
    SAHF                                ; 005bd5d1
    JBE 0x005bd5dd                      ; 005bd5d2
        ;   XREF to: 005bd5dd (CONDITIONAL_JUMP)  ; LAB_005bd5dd
    MOV EAX,dword ptr [EBP + 0x14]      ; 005bd5d4
    MOV dword ptr [EAX + 0xc274],EBX    ; 005bd5d7
    XOR EAX,EAX                         ; 005bd5dd
        ;   Label: LAB_005bd5dd
    MOV ESP,EBP                         ; 005bd5df
    POP EBP                             ; 005bd5e1
    POP EDI                             ; 005bd5e2
    POP ESI                             ; 005bd5e3
    POP EBX                             ; 005bd5e4
    RET                                 ; 005bd5e5
    MOV EAX,dword ptr [EBP + 0x14]      ; 005bd5e6
        ;   Label: LAB_005bd5e6
    MOV ECX,dword ptr [EAX + 0xc26c]    ; 005bd5e9
    PUSH 0x41200000                     ; 005bd5ef
    INC ECX                             ; 005bd5f4
    PUSH 0x40a00000                     ; 005bd5f5
    MOV dword ptr [EAX + 0xc26c],ECX    ; 005bd5fa
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 005bd600
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x228],EAX     ; 005bd605
    FLD float ptr [ESP + 0x228]         ; 005bd60c
    ADD ESP,0x8                         ; 005bd613
    MOV EAX,dword ptr [EBP + 0x14]      ; 005bd616
    FSTP float ptr [EAX + 0xc270]       ; 005bd619
    JMP 0x005bd593                      ; 005bd61f
        ;   XREF to: 005bd593 (UNCONDITIONAL_JUMP)  ; LAB_005bd593
    MOV EAX,dword ptr [EBP + 0x14]      ; 005bd624
        ;   Label: LAB_005bd624
    MOV EBX,dword ptr [EBP + 0x14]      ; 005bd627
    MOV EDI,dword ptr [EAX + 0xc278]    ; 005bd62a
    ADD EBX,0x20                        ; 005bd630
    TEST EDI,EDI                        ; 005bd633
    JNZ 0x005bd6ce                      ; 005bd635
        ;   XREF to: 005bd6ce (CONDITIONAL_JUMP)  ; LAB_005bd6ce
    LEA EAX,[ESP + 0xd0]                ; 005bd63b
    MOV dword ptr [ESP + 0x208],ESI     ; 005bd642
    MOV dword ptr [ESP + 0x218],ESI     ; 005bd649
    MOV dword ptr [ESP + 0x20c],EBX     ; 005bd650
    MOV dword ptr [ESP + 0x210],ESI     ; 005bd657
    ADD EAX,0xc                         ; 005bd65e
    MOV dword ptr [ESP + 0x21c],ESI     ; 005bd661
    MOV dword ptr [ESP + 0x214],EAX     ; 005bd668
    MOV EAX,[0x00622c18]                ; 005bd66f | g_CDemonSetPtr
        ;   Label: LAB_005bd66f
    MOV EBX,dword ptr [ESP + 0x218]     ; 005bd674
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 005bd67b | g_CDemonSetInstance.actor_count
    JGE 0x005bde4b                      ; 005bd681
        ;   XREF to: 005bde4b (CONDITIONAL_JUMP)  ; LAB_005bde4b
    ADD EAX,dword ptr [ESP + 0x210]     ; 005bd687
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 005bd68e | g_CDemonSetInstance.actors[0]
    PUSH EBX                            ; 005bd694
    MOV EAX,dword ptr [EBX + 0x154]     ; 005bd695
    CALL dword ptr [EAX + 0x94]         ; 005bd69b
    ADD ESP,0x4                         ; 005bd6a1
    TEST EAX,EAX                        ; 005bd6a4
    JZ 0x005bdc68                       ; 005bd6a6
        ;   XREF to: 005bdc68 (CONDITIONAL_JUMP)  ; LAB_005bdc68
    MOV ECX,dword ptr [ESP + 0x218]     ; 005bd6ac
        ;   Label: LAB_005bd6ac
    MOV EDX,dword ptr [ESP + 0x210]     ; 005bd6b3
    INC ECX                             ; 005bd6ba
    ADD EDX,0x4                         ; 005bd6bb
    MOV dword ptr [ESP + 0x218],ECX     ; 005bd6be
    MOV dword ptr [ESP + 0x210],EDX     ; 005bd6c5
    JMP 0x005bd66f                      ; 005bd6cc
        ;   XREF to: 005bd66f (UNCONDITIONAL_JUMP)  ; LAB_005bd66f
    PUSH EDI                            ; 005bd6ce
        ;   Label: LAB_005bd6ce
    MOV ESI,dword ptr [EDI + 0x154]     ; 005bd6cf
    CALL dword ptr [ESI + 0x94]         ; 005bd6d5
    ADD ESP,0x4                         ; 005bd6db
    TEST EAX,EAX                        ; 005bd6de
    JNZ 0x005bd9d5                      ; 005bd6e0
        ;   XREF to: 005bd9d5 (CONDITIONAL_JUMP)  ; LAB_005bd9d5
    MOV EAX,dword ptr [EBP + 0x14]      ; 005bd6e6
    MOV EAX,dword ptr [EAX + 0xc278]    ; 005bd6e9
    FLD float ptr [EBX]                 ; 005bd6ef
    FSUB float ptr [EAX + 0x20]         ; 005bd6f1
    FMUL ST0                            ; 005bd6f4
    FLD float ptr [EBX + 0x8]           ; 005bd6f6
    FSUB float ptr [EAX + 0x28]         ; 005bd6f9
    FMUL ST0                            ; 005bd6fc
    FADDP                               ; 005bd6fe
    FSQRT                               ; 005bd700
    FMUL double ptr [0x005fa874]        ; 005bd702 | DAT_005fa874
    FSUBR double ptr [0x005fa87c]       ; 005bd708 | DAT_005fa87c
    FST float ptr [ESP + 0x4]           ; 005bd70e
    FLD1                                ; 005bd712
    FCOMPP                              ; 005bd714
    FNSTSW AX                           ; 005bd716
    SAHF                                ; 005bd718
    JBE 0x005bd723                      ; 005bd719
        ;   XREF to: 005bd723 (CONDITIONAL_JUMP)  ; LAB_005bd723
    MOV dword ptr [ESP + 0x4],0x3f800000 ; 005bd71b
    FLD float ptr [EBP + 0x18]          ; 005bd723
        ;   Label: LAB_005bd723
    MOV EAX,dword ptr [EBP + 0x14]      ; 005bd726
    FMUL float ptr [ESP + 0x4]          ; 005bd729
    MOV EDI,dword ptr [EAX + 0xc27c]    ; 005bd72d
    PUSH EDI                            ; 005bd733
    FADD float ptr [EAX + 0xc274]       ; 005bd734
    PUSH EAX                            ; 005bd73a
    FSTP float ptr [EAX + 0xc274]       ; 005bd73b
    CALL core_zombie.cpp_CZombie_getPickupHandIndex_FUN_005bdec0 ; 005bd741
        ;   XREF to: 005bdec0 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_CZombie_getPickupHandIndex_FUN_005bdec0(CZombie * this_ptr, int object_shape_type)
    ADD ESP,0x8                         ; 005bd746
    MOV ESI,0xffffffff                  ; 005bd749
    MOV dword ptr [ESP + 0x200],EAX     ; 005bd74e
    TEST EAX,EAX                        ; 005bd755
    JL 0x005bd9bb                       ; 005bd757
        ;   XREF to: 005bd9bb (CONDITIONAL_JUMP)  ; LAB_005bd9bb
    MOV EAX,dword ptr [EBP + 0x14]      ; 005bd75d
    FLD float ptr [EAX + 0xc274]        ; 005bd760
    FLDZ                                ; 005bd766
    FCOMPP                              ; 005bd768
    FNSTSW AX                           ; 005bd76a
    SAHF                                ; 005bd76c
    JBE 0x005bd9bb                      ; 005bd76d
        ;   XREF to: 005bd9bb (CONDITIONAL_JUMP)  ; LAB_005bd9bb
    MOV EDX,dword ptr [EBP + 0x14]      ; 005bd773
    MOV EAX,dword ptr [EBP + 0x14]      ; 005bd776
    PUSH EDX                            ; 005bd779
    MOV EAX,dword ptr [EAX + 0xc278]    ; 005bd77a
    PUSH EAX                            ; 005bd780
    MOV EBX,dword ptr [EAX + 0x154]     ; 005bd781
    CALL dword ptr [EBX + 0x84]         ; 005bd787
    ADD ESP,0x8                         ; 005bd78d
    CMP EAX,0x3                         ; 005bd790
    JNZ 0x005bd9bb                      ; 005bd793
        ;   XREF to: 005bd9bb (CONDITIONAL_JUMP)  ; LAB_005bd9bb
    MOV EAX,dword ptr [EBP + 0x14]      ; 005bd799
    MOV ECX,dword ptr [EAX + 0xc27c]    ; 005bd79c
    PUSH ECX                            ; 005bd7a2
    PUSH EAX                            ; 005bd7a3
    CALL core_zombie.cpp_CZombie_canPickupWithHand_FUN_005bdf60 ; 005bd7a4
        ;   XREF to: 005bdf60 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_CZombie_canPickupWithHand_FUN_005bdf60(CZombie * this_ptr, int object_shape_type)
    ADD ESP,0x8                         ; 005bd7a9
    TEST EAX,EAX                        ; 005bd7ac
    JZ 0x005bd9bb                       ; 005bd7ae
        ;   XREF to: 005bd9bb (CONDITIONAL_JUMP)  ; LAB_005bd9bb
    MOV ESI,dword ptr [EBP + 0x14]      ; 005bd7b4
    MOV ESI,dword ptr [ESI + 0xc27c]    ; 005bd7b7
    CMP ESI,0x2                         ; 005bd7bd
    JNC 0x005bdb47                      ; 005bd7c0
        ;   XREF to: 005bdb47 (CONDITIONAL_JUMP)  ; LAB_005bdb47
    CMP ESI,0x1                         ; 005bd7c6
    JNZ 0x005bdb56                      ; 005bd7c9
        ;   XREF to: 005bdb56 (CONDITIONAL_JUMP)  ; LAB_005bdb56
    MOV EBX,dword ptr [EBP + 0x14]      ; 005bd7cf
        ;   Label: LAB_005bd7cf
    MOV EBX,dword ptr [EBX + 0xc278]    ; 005bd7d2
    PUSH EBX                            ; 005bd7d8
    MOV EAX,dword ptr [EBX + 0x154]     ; 005bd7d9
    LEA ESI,[ESP + 0xa4]                ; 005bd7df
    LEA EDI,[ESP + 0x5c]                ; 005bd7e6
    CALL dword ptr [EAX + 0x1c]         ; 005bd7ea
    MOV ECX,0x6                         ; 005bd7ed
    ADD ESP,0x4                         ; 005bd7f2
    LEA EAX,[ESP + 0x1f0]               ; 005bd7f5
    LEA ESI,[ESP + 0xa0]                ; 005bd7fc
    PUSH EAX                            ; 005bd803
    MOVSD.REP ES:EDI,ESI                ; 005bd804
    LEA EAX,[ESP + 0x68]                ; 005bd806
    MOV EDI,0x3f000000                  ; 005bd80a
    PUSH EAX                            ; 005bd80f
    LEA EAX,[ESP + 0x60]                ; 005bd810
    LEA ESI,[ESP + 0x1bc]               ; 005bd814
    PUSH EAX                            ; 005bd81b
    MOV dword ptr [ESP + 0x1fc],EDI     ; 005bd81c
    LEA EDI,[ESP + 0xf4]                ; 005bd823
    CALL core_bodypart.cpp_FUN_0041b020 ; 005bd82a
        ;   XREF to: 0041b020 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_0041b020()
    LEA ESI,[ESP + 0x1c0]               ; 005bd82f
    ADD ESP,0x8                         ; 005bd836
    LEA EAX,[ESP + 0xec]                ; 005bd839
    MOVSD ES:EDI,ESI                    ; 005bd840
    MOVSD ES:EDI,ESI                    ; 005bd841
    MOVSD ES:EDI,ESI                    ; 005bd842
    PUSH EAX                            ; 005bd843
    LEA ESI,[ESP + 0x1ec]               ; 005bd844
    LEA EDI,[ESP + 0x1e0]               ; 005bd84b
    CALL core_bodypart.cpp_FUN_0041afa0 ; 005bd852
        ;   XREF to: 0041afa0 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_0041afa0()
    LEA ESI,[ESP + 0x1ec]               ; 005bd857
    ADD ESP,0x8                         ; 005bd85e
    LEA EAX,[ESP + 0x13c]               ; 005bd861
    FLD float ptr [ESP + 0x60]          ; 005bd868
    MOVSD ES:EDI,ESI                    ; 005bd86c
    MOVSD ES:EDI,ESI                    ; 005bd86d
    MOVSD ES:EDI,ESI                    ; 005bd86e
    PUSH EAX                            ; 005bd86f
    LEA EDI,[ESP + 0x140]               ; 005bd870
    LEA ESI,[ESP + 0x1dc]               ; 005bd877
    FADD double ptr [0x005fa884]        ; 005bd87e | DAT_005fa884
    PUSH EBX                            ; 005bd884
    FSTP float ptr [ESP + 0x1e8]        ; 005bd885
    MOVSD ES:EDI,ESI                    ; 005bd88c
    MOVSD ES:EDI,ESI                    ; 005bd88d
    MOVSD ES:EDI,ESI                    ; 005bd88e
    LEA EBX,[ESP + 0x15c]               ; 005bd88f
    LEA ESI,[ESP + 0x12c]               ; 005bd896
    LEA EDI,[ESP + 0x1a4]               ; 005bd89d
    CALL core_actor.cpp_FUN_00408b40    ; 005bd8a4
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x12c]               ; 005bd8a9
    ADD ESP,0x8                         ; 005bd8b0
    LEA EAX,[ESP + 0x19c]               ; 005bd8b3
    MOVSD ES:EDI,ESI                    ; 005bd8ba
    MOVSD ES:EDI,ESI                    ; 005bd8bb
    MOVSD ES:EDI,ESI                    ; 005bd8bc
    CMP EBX,EAX                         ; 005bd8bd
    JZ 0x005bd8eb                       ; 005bd8bf
        ;   XREF to: 005bd8eb (CONDITIONAL_JUMP)  ; LAB_005bd8eb
    MOV EAX,dword ptr [ESP + 0x19c]     ; 005bd8c1
    MOV dword ptr [ESP + 0x154],EAX     ; 005bd8c8
    MOV EAX,dword ptr [ESP + 0x1a0]     ; 005bd8cf
    MOV dword ptr [ESP + 0x158],EAX     ; 005bd8d6
    MOV EAX,dword ptr [ESP + 0x1a4]     ; 005bd8dd
    MOV dword ptr [ESP + 0x15c],EAX     ; 005bd8e4
        ;   Label: LAB_005bd8e4
    LEA EDI,[ESP + 0x178]               ; 005bd8eb
        ;   Label: LAB_005bd8eb
    MOV ESI,0x2c8af28                   ; 005bd8f2
    MOV EAX,dword ptr [ESP + 0x200]     ; 005bd8f7
    MOVSD ES:EDI,ESI                    ; 005bd8fe | DAT_02c8af28
    MOVSD ES:EDI,ESI                    ; 005bd8ff | DAT_02c8af2c
    MOVSD ES:EDI,ESI                    ; 005bd900 | DAT_02c8af30
    TEST EAX,EAX                        ; 005bd901
    JNZ 0x005bd948                      ; 005bd903
        ;   XREF to: 005bd948 (CONDITIONAL_JUMP)  ; LAB_005bd948
    MOV EDX,0xbfc00000                  ; 005bd905
    LEA EBX,[ESP + 0x178]               ; 005bd90a
    MOV dword ptr [ESP + 0x11c],EAX     ; 005bd911
    MOV dword ptr [ESP + 0x120],EAX     ; 005bd918
    LEA EAX,[ESP + 0x118]               ; 005bd91f
    MOV dword ptr [ESP + 0x118],EDX     ; 005bd926
    CMP EBX,EAX                         ; 005bd92d
    JZ 0x005bd948                       ; 005bd92f
        ;   XREF to: 005bd948 (CONDITIONAL_JUMP)  ; LAB_005bd948
    XOR EDI,EDI                         ; 005bd931
    MOV dword ptr [ESP + 0x178],EDX     ; 005bd933
    MOV dword ptr [ESP + 0x17c],EDI     ; 005bd93a
    MOV dword ptr [ESP + 0x180],EDI     ; 005bd941
    CMP dword ptr [ESP + 0x200],0x1     ; 005bd948
        ;   Label: LAB_005bd948
    JNZ 0x005bd997                      ; 005bd950
        ;   XREF to: 005bd997 (CONDITIONAL_JUMP)  ; LAB_005bd997
    MOV ECX,0x3fc00000                  ; 005bd952
    XOR EBX,EBX                         ; 005bd957
    LEA EAX,[ESP + 0x178]               ; 005bd959
    MOV dword ptr [ESP + 0x1ac],EBX     ; 005bd960
    MOV dword ptr [ESP + 0x1b0],EBX     ; 005bd967
    LEA EBX,[ESP + 0x1a8]               ; 005bd96e
    MOV dword ptr [ESP + 0x1a8],ECX     ; 005bd975
    CMP EAX,EBX                         ; 005bd97c
    JZ 0x005bd997                       ; 005bd97e
        ;   XREF to: 005bd997 (CONDITIONAL_JUMP)  ; LAB_005bd997
    XOR EAX,EAX                         ; 005bd980
    MOV dword ptr [ESP + 0x178],ECX     ; 005bd982
    MOV dword ptr [ESP + 0x17c],EAX     ; 005bd989
    MOV dword ptr [ESP + 0x180],EAX     ; 005bd990
    PUSH 0x0                            ; 005bd997
        ;   Label: LAB_005bd997
    LEA EAX,[ESP + 0x17c]               ; 005bd999
    PUSH 0x0                            ; 005bd9a0
    PUSH EAX                            ; 005bd9a2
    PUSH 0x0                            ; 005bd9a3
    LEA EAX,[ESP + 0x164]               ; 005bd9a5
    PUSH EAX                            ; 005bd9ac
    MOV ECX,dword ptr [EBP + 0x14]      ; 005bd9ad
    PUSH ECX                            ; 005bd9b0
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 005bd9b1
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 005bd9b6
    MOV ESI,EAX                         ; 005bd9b9
    TEST ESI,ESI                        ; 005bd9bb
        ;   Label: LAB_005bd9bb
    JL 0x005bdb8c                       ; 005bd9bd
        ;   XREF to: 005bdb8c (CONDITIONAL_JUMP)  ; LAB_005bdb8c
    JG 0x005bdbfe                       ; 005bd9c3
        ;   XREF to: 005bdbfe (CONDITIONAL_JUMP)  ; LAB_005bdbfe
    MOV EAX,0x1                         ; 005bd9c9
    MOV ESP,EBP                         ; 005bd9ce
    POP EBP                             ; 005bd9d0
    POP EDI                             ; 005bd9d1
    POP ESI                             ; 005bd9d2
    POP EBX                             ; 005bd9d3
    RET                                 ; 005bd9d4
    MOV EAX,dword ptr [EBP + 0x14]      ; 005bd9d5
        ;   Label: LAB_005bd9d5
    MOV EDX,dword ptr [EAX + 0xc278]    ; 005bd9d8
    PUSH EDX                            ; 005bd9de
    PUSH EAX                            ; 005bd9df
    PUSH 0x5fa7a4                       ; 005bd9e0 | s_s_can_t_pick_up_s_sombod_005fa7a3+1
    MOV EBX,dword ptr [0x00611100]      ; 005bd9e5 | g_CConsolePtr
    PUSH EBX                            ; 005bd9eb | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 005bd9ec
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x10                        ; 005bd9f1
    MOV EAX,dword ptr [EBP + 0x14]      ; 005bd9f4
    MOV dword ptr [EAX + 0xc278],0x0    ; 005bd9f7
    PUSH EAX                            ; 005bda01
    MOV dword ptr [EAX + 0xc274],0x0    ; 005bda02
    CALL core_zombie.cpp_CZombie_resetChaseState_FUN_005bed80 ; 005bda0c
        ;   XREF to: 005bed80 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_CZombie_resetChaseState_FUN_005bed80(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005bda11
    XOR EAX,EAX                         ; 005bda14
    MOV ESP,EBP                         ; 005bda16
    POP EBP                             ; 005bda18
    POP EDI                             ; 005bda19
    POP ESI                             ; 005bda1a
    POP EBX                             ; 005bda1b
    RET                                 ; 005bda1c
    MOV EBX,dword ptr [EBP + 0x14]      ; 005bda1d
        ;   Label: LAB_005bda1d
    MOV EBX,dword ptr [EBX + 0xc278]    ; 005bda20
    PUSH EBX                            ; 005bda26
    MOV EAX,dword ptr [EBX + 0x154]     ; 005bda27
    LEA ESI,[ESP + 0xbc]                ; 005bda2d
    LEA EDI,[ESP + 0x8c]                ; 005bda34
    CALL dword ptr [EAX + 0x1c]         ; 005bda3b
    MOV ECX,0x6                         ; 005bda3e
    ADD ESP,0x4                         ; 005bda43
    LEA EAX,[ESP + 0x1fc]               ; 005bda46
    LEA ESI,[ESP + 0xb8]                ; 005bda4d
    PUSH EAX                            ; 005bda54
    MOVSD.REP ES:EDI,ESI                ; 005bda55
    LEA EAX,[ESP + 0x98]                ; 005bda57
    MOV ESI,0x3f000000                  ; 005bda5e
    PUSH EAX                            ; 005bda63
    LEA EAX,[ESP + 0x90]                ; 005bda64
    MOV dword ptr [ESP + 0x204],ESI     ; 005bda6b
    PUSH EAX                            ; 005bda72
    LEA ESI,[ESP + 0x178]               ; 005bda73
    LEA EDI,[ESP + 0x190]               ; 005bda7a
    CALL core_bodypart.cpp_FUN_0041b020 ; 005bda81
        ;   XREF to: 0041b020 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_0041b020()
    LEA ESI,[ESP + 0x178]               ; 005bda86
    ADD ESP,0x8                         ; 005bda8d
    LEA EAX,[ESP + 0x188]               ; 005bda90
    MOVSD ES:EDI,ESI                    ; 005bda97
    MOVSD ES:EDI,ESI                    ; 005bda98
    MOVSD ES:EDI,ESI                    ; 005bda99
    PUSH EAX                            ; 005bda9a
    LEA ESI,[ESP + 0xfc]                ; 005bda9b
    LEA EDI,[ESP + 0x198]               ; 005bdaa2
    CALL core_bodypart.cpp_FUN_0041afa0 ; 005bdaa9
        ;   XREF to: 0041afa0 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_0041afa0()
    LEA ESI,[ESP + 0xfc]                ; 005bdaae
    ADD ESP,0x8                         ; 005bdab5
    LEA EAX,[ESP + 0x10c]               ; 005bdab8
    FLD float ptr [ESP + 0x90]          ; 005bdabf
    MOVSD ES:EDI,ESI                    ; 005bdac6
    MOVSD ES:EDI,ESI                    ; 005bdac7
    MOVSD ES:EDI,ESI                    ; 005bdac8
    PUSH EAX                            ; 005bdac9
    LEA EDI,[ESP + 0x110]               ; 005bdaca
    LEA ESI,[ESP + 0x194]               ; 005bdad1
    FADD double ptr [0x005fa884]        ; 005bdad8 | DAT_005fa884
    PUSH EBX                            ; 005bdade
    FSTP float ptr [ESP + 0x1a0]        ; 005bdadf
    MOVSD ES:EDI,ESI                    ; 005bdae6
    MOVSD ES:EDI,ESI                    ; 005bdae7
    MOVSD ES:EDI,ESI                    ; 005bdae8
    LEA EBX,[ESP + 0x168]               ; 005bdae9
    LEA ESI,[ESP + 0x108]               ; 005bdaf0
    LEA EDI,[ESP + 0x168]               ; 005bdaf7
    CALL core_actor.cpp_FUN_00408b40    ; 005bdafe
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x108]               ; 005bdb03
    ADD ESP,0x8                         ; 005bdb0a
    LEA EAX,[ESP + 0x154]               ; 005bdb0d
    MOVSD ES:EDI,ESI                    ; 005bdb14
    MOVSD ES:EDI,ESI                    ; 005bdb15
    MOVSD ES:EDI,ESI                    ; 005bdb16
    CMP EAX,EBX                         ; 005bdb17
    JZ 0x005bd8eb                       ; 005bdb19
        ;   XREF to: 005bd8eb (CONDITIONAL_JUMP)  ; LAB_005bd8eb
    MOV EAX,dword ptr [ESP + 0x160]     ; 005bdb1f
    MOV dword ptr [ESP + 0x154],EAX     ; 005bdb26
    MOV EAX,dword ptr [ESP + 0x164]     ; 005bdb2d
    MOV dword ptr [ESP + 0x158],EAX     ; 005bdb34
    MOV EAX,dword ptr [ESP + 0x168]     ; 005bdb3b
    JMP 0x005bd8e4                      ; 005bdb42
        ;   XREF to: 005bd8e4 (UNCONDITIONAL_JUMP)  ; LAB_005bd8e4
    JBE 0x005bda1d                      ; 005bdb47
        ;   XREF to: 005bda1d (CONDITIONAL_JUMP)  ; LAB_005bda1d
        ;   Label: LAB_005bdb47
    CMP ESI,0x3                         ; 005bdb4d
    JZ 0x005bd7cf                       ; 005bdb50
        ;   XREF to: 005bd7cf (CONDITIONAL_JUMP)  ; LAB_005bd7cf
    MOV EBX,dword ptr [EBP + 0x14]      ; 005bdb56
        ;   Label: LAB_005bdb56
    MOV EBX,dword ptr [EBX + 0xc278]    ; 005bdb59
    LEA EAX,[ESP + 0x154]               ; 005bdb5f
    ADD EBX,0x20                        ; 005bdb66
    CMP EAX,EBX                         ; 005bdb69
    JZ 0x005bd8eb                       ; 005bdb6b
        ;   XREF to: 005bd8eb (CONDITIONAL_JUMP)  ; LAB_005bd8eb
    MOV EAX,dword ptr [EBX]             ; 005bdb71
    MOV dword ptr [ESP + 0x154],EAX     ; 005bdb73
    MOV EAX,dword ptr [EBX + 0x4]       ; 005bdb7a
    MOV dword ptr [ESP + 0x158],EAX     ; 005bdb7d
    MOV EAX,dword ptr [EBX + 0x8]       ; 005bdb84
    JMP 0x005bd8e4                      ; 005bdb87
        ;   XREF to: 005bd8e4 (UNCONDITIONAL_JUMP)  ; LAB_005bd8e4
    MOV EAX,dword ptr [EBP + 0x14]      ; 005bdb8c
        ;   Label: LAB_005bdb8c
    MOV ECX,dword ptr [EAX + 0xc278]    ; 005bdb8f
    PUSH ECX                            ; 005bdb95
    PUSH EAX                            ; 005bdb96
    PUSH 0x5fa7d6                       ; 005bdb97 | = "%s can't pick up %s, giving up\n"
    MOV ESI,dword ptr [0x00611100]      ; 005bdb9c | g_CConsolePtr
    PUSH ESI                            ; 005bdba2 | g_CConsoleInstance
    MOV EBX,EAX                         ; 005bdba3
    CALL engine_console.cpp_FUN_00445430 ; 005bdba5
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    MOV EAX,EBX                         ; 005bdbaa
    ADD ESP,0x10                        ; 005bdbac
    MOV dword ptr [EAX + 0xc278],0x0    ; 005bdbaf
    PUSH EAX                            ; 005bdbb9
    MOV dword ptr [EAX + 0xc274],0x41a00000 ; 005bdbba
    CALL core_zombie.cpp_CZombie_resetChaseState_FUN_005bed80 ; 005bdbc4
        ;   XREF to: 005bed80 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_CZombie_resetChaseState_FUN_005bed80(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005bdbc9
    XOR EAX,EAX                         ; 005bdbcc
    MOV ESP,EBP                         ; 005bdbce
    POP EBP                             ; 005bdbd0
    POP EDI                             ; 005bdbd1
    POP ESI                             ; 005bdbd2
    POP EBX                             ; 005bdbd3
    RET                                 ; 005bdbd4
    PUSH 0x1                            ; 005bdbd5
        ;   Label: LAB_005bdbd5
    MOV EAX,dword ptr [EBP + 0x14]      ; 005bdbd7
    PUSH 0xa                            ; 005bdbda
    ADD EAX,0x158                       ; 005bdbdc
        ;   Label: LAB_005bdbdc
    PUSH EAX                            ; 005bdbe1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005bdbe2
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005bdbe7
    MOV EAX,0x1                         ; 005bdbea
    MOV ESP,EBP                         ; 005bdbef
    POP EBP                             ; 005bdbf1
    POP EDI                             ; 005bdbf2
    POP ESI                             ; 005bdbf3
    POP EBX                             ; 005bdbf4
    RET                                 ; 005bdbf5
    PUSH 0x1                            ; 005bdbf6
        ;   Label: LAB_005bdbf6
    MOV EAX,ESI                         ; 005bdbf8
    PUSH 0xc                            ; 005bdbfa
    JMP 0x005bdbdc                      ; 005bdbfc
        ;   XREF to: 005bdbdc (UNCONDITIONAL_JUMP)  ; LAB_005bdbdc
    MOV EAX,dword ptr [EBP + 0x14]      ; 005bdbfe
        ;   Label: LAB_005bdbfe
    MOV EBX,dword ptr [EAX + 0xc278]    ; 005bdc01
    PUSH EBX                            ; 005bdc07
    PUSH EAX                            ; 005bdc08
    PUSH 0x5fa7f6                       ; 005bdc09 | = "%s beginning to pickup %s\n"
    MOV EDI,dword ptr [0x00611100]      ; 005bdc0e | g_CConsolePtr
    PUSH EDI                            ; 005bdc14 | g_CConsoleInstance
    MOV ESI,EAX                         ; 005bdc15
    CALL engine_console.cpp_FUN_00445430 ; 005bdc17
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    MOV EAX,ESI                         ; 005bdc1c
    MOV EAX,dword ptr [EAX + 0xc27c]    ; 005bdc1e
    ADD ESP,0x10                        ; 005bdc24
    CMP EAX,0x2                         ; 005bdc27
    JNC 0x005bdc33                      ; 005bdc2a
        ;   XREF to: 005bdc33 (CONDITIONAL_JUMP)  ; LAB_005bdc33
    CMP EAX,0x1                         ; 005bdc2c
    JZ 0x005bdbd5                       ; 005bdc2f
        ;   XREF to: 005bdbd5 (CONDITIONAL_JUMP)  ; LAB_005bdbd5
    JMP 0x005bdc3a                      ; 005bdc31
        ;   XREF to: 005bdc3a (UNCONDITIONAL_JUMP)  ; LAB_005bdc3a
    JBE 0x005bdbf6                      ; 005bdc33
        ;   XREF to: 005bdbf6 (CONDITIONAL_JUMP)  ; LAB_005bdbf6
        ;   Label: LAB_005bdc33
    CMP EAX,0x3                         ; 005bdc35
    JZ 0x005bdbd5                       ; 005bdc38
        ;   XREF to: 005bdbd5 (CONDITIONAL_JUMP)  ; LAB_005bdbd5
    MOV EAX,0x5fa811                    ; 005bdc3a | = "..\\core\\zombie.cpp"
        ;   Label: LAB_005bdc3a
    MOV EDX,0x5d1                       ; 005bdc3f
    PUSH 0x5fa824                       ; 005bdc44 | = "Invalid zombie object shape!"
    MOV [0x01d1d400],EAX                ; 005bdc49 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 005bdc4e | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005bdc54
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005bdc59
    MOV EAX,0x1                         ; 005bdc5c
    MOV ESP,EBP                         ; 005bdc61
    POP EBP                             ; 005bdc63
    POP EDI                             ; 005bdc64
    POP ESI                             ; 005bdc65
    POP EBX                             ; 005bdc66
    RET                                 ; 005bdc67
    MOV ECX,dword ptr [EBP + 0x14]      ; 005bdc68
        ;   Label: LAB_005bdc68
    PUSH ECX                            ; 005bdc6b
    MOV EAX,dword ptr [EBX + 0x154]     ; 005bdc6c
    PUSH EBX                            ; 005bdc72
    CALL dword ptr [EAX + 0x84]         ; 005bdc73
    ADD ESP,0x8                         ; 005bdc79
    CMP EAX,0x3                         ; 005bdc7c
    JNZ 0x005bd6ac                      ; 005bdc7f
        ;   XREF to: 005bd6ac (CONDITIONAL_JUMP)  ; LAB_005bd6ac
    PUSH EBX                            ; 005bdc85
    MOV EAX,dword ptr [EBX + 0x154]     ; 005bdc86
    LEA ESI,[ESP + 0x74]                ; 005bdc8c
    LEA EDI,[ESP + 0xd4]                ; 005bdc90
    CALL dword ptr [EAX + 0x1c]         ; 005bdc97
    MOV ECX,0x6                         ; 005bdc9a
    ADD ESP,0x4                         ; 005bdc9f
    LEA ESI,[ESP + 0x70]                ; 005bdca2
    MOV EAX,dword ptr [ESP + 0x214]     ; 005bdca6
    MOVSD.REP ES:EDI,ESI                ; 005bdcad
    FLD float ptr [EAX + 0x4]           ; 005bdcaf
    FLD float ptr [EAX + 0x8]           ; 005bdcb2
    FLD float ptr [EAX]                 ; 005bdcb5
    LEA EDI,[ESP + 0x1c0]               ; 005bdcb7
    LEA ESI,[ESP + 0x148]               ; 005bdcbe
    LEA EAX,[ESP + 0x1c0]               ; 005bdcc5
    FSUB float ptr [ESP + 0xd0]         ; 005bdccc
    FXCH ST2                            ; 005bdcd3
    FSUB float ptr [ESP + 0xd4]         ; 005bdcd5
    FXCH                                ; 005bdcdc
    FSUB float ptr [ESP + 0xd8]         ; 005bdcde
    FXCH ST2                            ; 005bdce5
    FSTP float ptr [ESP + 0x148]        ; 005bdce7
    FSTP float ptr [ESP + 0x14c]        ; 005bdcee
    FSTP float ptr [ESP + 0x150]        ; 005bdcf5
    PUSH EAX                            ; 005bdcfc
    MOVSD ES:EDI,ESI                    ; 005bdcfd
    MOVSD ES:EDI,ESI                    ; 005bdcfe
    MOVSD ES:EDI,ESI                    ; 005bdcff
    CALL core_zombie.cpp_classifyObjectShape_FUN_005ba990 ; 005bdd00
        ;   XREF to: 005ba990 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_classifyObjectShape_FUN_005ba990(CVector3f * dimensions)
    ADD ESP,0x4                         ; 005bdd05
    MOV dword ptr [ESP + 0x204],EAX     ; 005bdd08
    TEST EAX,EAX                        ; 005bdd0f
    JZ 0x005bd6ac                       ; 005bdd11
        ;   XREF to: 005bd6ac (CONDITIONAL_JUMP)  ; LAB_005bd6ac
    PUSH EAX                            ; 005bdd17
    MOV ESI,dword ptr [EBP + 0x14]      ; 005bdd18
    PUSH ESI                            ; 005bdd1b
    CALL core_zombie.cpp_CZombie_canPickupWithHand_FUN_005bdf60 ; 005bdd1c
        ;   XREF to: 005bdf60 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_CZombie_canPickupWithHand_FUN_005bdf60(CZombie * this_ptr, int object_shape_type)
    ADD ESP,0x8                         ; 005bdd21
    TEST EAX,EAX                        ; 005bdd24
    JZ 0x005bd6ac                       ; 005bdd26
        ;   XREF to: 005bd6ac (CONDITIONAL_JUMP)  ; LAB_005bd6ac
    PUSH 0x5fa841                       ; 005bdd2c | = "CBodyPart"
    PUSH EBX                            ; 005bdd31
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 005bdd32
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005bdd37
    TEST EAX,EAX                        ; 005bdd3a
    JZ 0x005bdd58                       ; 005bdd3c
        ;   XREF to: 005bdd58 (CONDITIONAL_JUMP)  ; LAB_005bdd58
    MOV EAX,dword ptr [EBP + 0x14]      ; 005bdd3e
    MOV ESI,dword ptr [EBX + 0x6c]      ; 005bdd41
    MOV EAX,dword ptr [EAX + 0xc26c]    ; 005bdd44
    AND ESI,0x3                         ; 005bdd4a
    AND EAX,0x3                         ; 005bdd4d
    CMP ESI,EAX                         ; 005bdd50
    JNZ 0x005bd6ac                      ; 005bdd52
        ;   XREF to: 005bd6ac (CONDITIONAL_JUMP)  ; LAB_005bd6ac
    LEA EAX,[EBX + 0x20]                ; 005bdd58
        ;   Label: LAB_005bdd58
    MOV ESI,dword ptr [ESP + 0x20c]     ; 005bdd5b
    LEA EDI,[ESP + 0x1cc]               ; 005bdd62
    FLD float ptr [EAX]                 ; 005bdd69
    FLD float ptr [EAX + 0x4]           ; 005bdd6b
    FLD float ptr [EAX + 0x8]           ; 005bdd6e
    FXCH ST2                            ; 005bdd71
    FSUB float ptr [ESI]                ; 005bdd73
    FXCH                                ; 005bdd75
    FSUB float ptr [ESI + 0x4]          ; 005bdd77
    FXCH ST2                            ; 005bdd7a
    FSUB float ptr [ESI + 0x8]          ; 005bdd7c
    FXCH                                ; 005bdd7f
    FSTP float ptr [ESP + 0x130]        ; 005bdd81
    FXCH                                ; 005bdd88
    FSTP float ptr [ESP + 0x134]        ; 005bdd8a
    LEA ESI,[ESP + 0x130]               ; 005bdd91
    FSTP float ptr [ESP + 0x138]        ; 005bdd98
    MOVSD ES:EDI,ESI                    ; 005bdd9f
    MOVSD ES:EDI,ESI                    ; 005bdda0
    MOVSD ES:EDI,ESI                    ; 005bdda1
    FLD float ptr [ESP + 0x1d0]         ; 005bdda2
    FMUL ST0                            ; 005bdda9
    FST float ptr [ESP + 0x1d0]         ; 005bddab
    FMUL float ptr [ESP + 0x1d0]        ; 005bddb2
    FST float ptr [ESP + 0x1d0]         ; 005bddb9
    FMUL float ptr [ESP + 0x1d0]        ; 005bddc0
    FLD float ptr [ESP + 0x1cc]         ; 005bddc7
    FMUL ST0                            ; 005bddce
    FADDP                               ; 005bddd0
    FLD float ptr [ESP + 0x1d4]         ; 005bddd2
    FMUL ST0                            ; 005bddd9
    FADDP                               ; 005bdddb
    FSQRT                               ; 005bdddd
    FST float ptr [ESP]                 ; 005bdddf
    FCOMP double ptr [0x005fa87c]       ; 005bdde2 | DAT_005fa87c
    FNSTSW AX                           ; 005bdde8
    SAHF                                ; 005bddea
    JC 0x005bd6ac                       ; 005bddeb
        ;   XREF to: 005bd6ac (CONDITIONAL_JUMP)  ; LAB_005bd6ac
    MOV EAX,dword ptr [EBP + 0x14]      ; 005bddf1
    FLD float ptr [EAX + 0xc268]        ; 005bddf4
    FMUL float ptr [0x005fa88c]         ; 005bddfa | DAT_005fa88c
    FCOMP float ptr [ESP]               ; 005bde00
    FNSTSW AX                           ; 005bde03
    SAHF                                ; 005bde05
    JC 0x005bd6ac                       ; 005bde06
        ;   XREF to: 005bd6ac (CONDITIONAL_JUMP)  ; LAB_005bd6ac
    MOV EAX,dword ptr [ESP + 0x21c]     ; 005bde0c
    MOV dword ptr [ESP + EAX*0x1 + 0x8],EBX ; 005bde13
    MOV EBX,dword ptr [ESP + 0x21c]     ; 005bde17
    MOV EAX,dword ptr [ESP + 0x204]     ; 005bde1e
    MOV dword ptr [ESP + EBX*0x1 + 0x30],EAX ; 005bde25
    MOV EAX,dword ptr [ESP + 0x208]     ; 005bde29
    LEA EDI,[EBX + 0x4]                 ; 005bde30
    INC EAX                             ; 005bde33
    MOV dword ptr [ESP + 0x21c],EDI     ; 005bde34
    MOV dword ptr [ESP + 0x208],EAX     ; 005bde3b
    CMP EDI,0x28                        ; 005bde42
    JL 0x005bd6ac                       ; 005bde45
        ;   XREF to: 005bd6ac (CONDITIONAL_JUMP)  ; LAB_005bd6ac
    MOV ECX,dword ptr [ESP + 0x208]     ; 005bde4b
        ;   Label: LAB_005bde4b
    CMP ECX,0x1                         ; 005bde52
    JL 0x005bd5dd                       ; 005bde55
        ;   XREF to: 005bd5dd (CONDITIONAL_JUMP)  ; LAB_005bd5dd
    LEA EAX,[ECX + -0x1]                ; 005bde5b
    PUSH EAX                            ; 005bde5e
    PUSH 0x0                            ; 005bde5f
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 005bde61
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 005bde66
    MOV ESI,dword ptr [EBP + 0x14]      ; 005bde69
    MOV EBX,dword ptr [ESP + EAX*0x4 + 0x8] ; 005bde6c
    MOV dword ptr [ESI + 0xc278],EBX    ; 005bde70
    MOV EAX,dword ptr [ESP + EAX*0x4 + 0x30] ; 005bde76
    MOV EBX,dword ptr [ESI + 0xc26c]    ; 005bde7a
    MOV dword ptr [ESI + 0xc274],0xc2200000 ; 005bde80
    INC EBX                             ; 005bde8a
    MOV dword ptr [ESI + 0xc27c],EAX    ; 005bde8b
    MOV dword ptr [ESI + 0xc26c],EBX    ; 005bde91
    MOV EDI,ESI                         ; 005bde97
    MOV ESI,dword ptr [ESI + 0xc278]    ; 005bde99
    PUSH ESI                            ; 005bde9f
    PUSH EDI                            ; 005bdea0
    PUSH 0x5fa84b                       ; 005bdea1 | = "%s is going to try to pick up %s\n"
    MOV EAX,[0x00611100]                ; 005bdea6 | g_CConsolePtr
    PUSH EAX                            ; 005bdeab | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 005bdeac
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    MOV EAX,0x1                         ; 005bdeb1
    ADD ESP,0x10                        ; 005bdeb6
    MOV ESP,EBP                         ; 005bdeb9
    POP EBP                             ; 005bdebb
    POP EDI                             ; 005bdebc
    POP ESI                             ; 005bdebd
    POP EBX                             ; 005bdebe
    RET                                 ; 005bdebf

