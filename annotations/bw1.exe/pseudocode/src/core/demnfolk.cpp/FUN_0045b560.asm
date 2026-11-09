; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_demnfolk_cpp_FUN_0045b560(CCharacter *param_1,float param_2)
;
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
;   core_demnfolk.cpp_FUN_00459100 at 0045a820
;
; Referenced Globals:
;   undefined4 s_s_can_t_pick_up_s_sombod_005d80c2+1
;   TerminatedCString s_s_can_t_pick_up_s_giving_005d80f5
;   TerminatedCString s_s_beginning_to_pickup_s_005d8115
;   TerminatedCString s_core_demnfolk_cpp_005d8130
;   TerminatedCString s_Invalid_demon_townsfolk_005d8145
;   TerminatedCString s_CBodyPart_005d816b
;   TerminatedCString s_s_is_going_to_try_to_pic_005d8175
;   undefined4 DAT_005d819b
;   undefined4 DAT_005d81a3
;   undefined4 DAT_005d81ab
;   undefined4 DAT_005d81b3
;   CConsole* g_CConsolePtr = 007db5f0
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01d1d400
;   ... and 6 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_0040c550
;   core_actor.cpp_FUN_0040cc00
;   core_actor.cpp_FUN_0040cc60
;   core_bodypart.cpp_FUN_0041afa0
;   core_bodypart.cpp_FUN_0041b020
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0
;   core_demnfolk.cpp_FUN_00458890
;   core_main.c_FUN_005030e0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   engine_console.cpp_FUN_00445430
;   unkafter_demnfolk.cpp_FUN_0045bec0
;   unkafter_demnfolk.cpp_FUN_0045bf60
;   unkafter_demnfolk.cpp_FUN_0045d060
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045b560
        ;   Label: core_demnfolk.cpp_FUN_0045b560
    PUSH ESI                            ; 0045b561
    PUSH EDI                            ; 0045b562
    PUSH EBP                            ; 0045b563
    MOV EBP,ESP                         ; 0045b564
    SUB ESP,0x224                       ; 0045b566
    AND ESP,0xfffffff8                  ; 0045b56c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045b56f
    CMP dword ptr [EAX + 0xc338],0x0    ; 0045b572
    JL 0x0045b5dd                       ; 0045b579
        ;   XREF to: 0045b5dd (CONDITIONAL_JUMP)  ; LAB_0045b5dd
    FLD float ptr [EAX + 0xc270]        ; 0045b57b
    FSUB float ptr [EBP + 0x18]         ; 0045b581
    FST float ptr [EAX + 0xc270]        ; 0045b584
    FLDZ                                ; 0045b58a
    FCOMPP                              ; 0045b58c
    FNSTSW AX                           ; 0045b58e
    SAHF                                ; 0045b590
    JC 0x0045b5e6                       ; 0045b591
        ;   XREF to: 0045b5e6 (CONDITIONAL_JUMP)  ; LAB_0045b5e6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045b593
        ;   Label: LAB_0045b593
    MOV EBX,dword ptr [EAX + 0x25b0]    ; 0045b596
    TEST EBX,EBX                        ; 0045b59c
    JNZ 0x0045b5dd                      ; 0045b59e
        ;   XREF to: 0045b5dd (CONDITIONAL_JUMP)  ; LAB_0045b5dd
    MOV ESI,dword ptr [EAX + 0x2628]    ; 0045b5a0
    TEST ESI,ESI                        ; 0045b5a6
    JNZ 0x0045b5dd                      ; 0045b5a8
        ;   XREF to: 0045b5dd (CONDITIONAL_JUMP)  ; LAB_0045b5dd
    FLD float ptr [EAX + 0xc274]        ; 0045b5aa
    FLDZ                                ; 0045b5b0
    FCOMPP                              ; 0045b5b2
    FNSTSW AX                           ; 0045b5b4
    SAHF                                ; 0045b5b6
    JNC 0x0045b624                      ; 0045b5b7
        ;   XREF to: 0045b624 (CONDITIONAL_JUMP)  ; LAB_0045b624
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045b5b9
    FLD float ptr [EAX + 0xc274]        ; 0045b5bc
    FSUB float ptr [EBP + 0x18]         ; 0045b5c2
    FST float ptr [EAX + 0xc274]        ; 0045b5c5
    FLDZ                                ; 0045b5cb
    FCOMPP                              ; 0045b5cd
    FNSTSW AX                           ; 0045b5cf
    SAHF                                ; 0045b5d1
    JBE 0x0045b5dd                      ; 0045b5d2
        ;   XREF to: 0045b5dd (CONDITIONAL_JUMP)  ; LAB_0045b5dd
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045b5d4
    MOV dword ptr [EAX + 0xc274],EBX    ; 0045b5d7
    XOR EAX,EAX                         ; 0045b5dd
        ;   Label: LAB_0045b5dd
    MOV ESP,EBP                         ; 0045b5df
    POP EBP                             ; 0045b5e1
    POP EDI                             ; 0045b5e2
    POP ESI                             ; 0045b5e3
    POP EBX                             ; 0045b5e4
    RET                                 ; 0045b5e5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045b5e6
        ;   Label: LAB_0045b5e6
    MOV ECX,dword ptr [EAX + 0xc26c]    ; 0045b5e9
    PUSH 0x41200000                     ; 0045b5ef
    INC ECX                             ; 0045b5f4
    PUSH 0x40a00000                     ; 0045b5f5
    MOV dword ptr [EAX + 0xc26c],ECX    ; 0045b5fa
    CALL core_actor.cpp_FUN_0040cc00    ; 0045b600
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0x228],EAX     ; 0045b605
    FLD float ptr [ESP + 0x228]         ; 0045b60c
    ADD ESP,0x8                         ; 0045b613
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045b616
    FSTP float ptr [EAX + 0xc270]       ; 0045b619
    JMP 0x0045b593                      ; 0045b61f
        ;   XREF to: 0045b593 (UNCONDITIONAL_JUMP)  ; LAB_0045b593
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045b624
        ;   Label: LAB_0045b624
    MOV EBX,dword ptr [EBP + 0x14]      ; 0045b627
    MOV EDI,dword ptr [EAX + 0xc278]    ; 0045b62a
    ADD EBX,0x20                        ; 0045b630
    TEST EDI,EDI                        ; 0045b633
    JNZ 0x0045b6ce                      ; 0045b635
        ;   XREF to: 0045b6ce (CONDITIONAL_JUMP)  ; LAB_0045b6ce
    LEA EAX,[ESP + 0xd0]                ; 0045b63b
    MOV dword ptr [ESP + 0x208],ESI     ; 0045b642
    MOV dword ptr [ESP + 0x218],ESI     ; 0045b649
    MOV dword ptr [ESP + 0x20c],EBX     ; 0045b650
    MOV dword ptr [ESP + 0x210],ESI     ; 0045b657
    ADD EAX,0xc                         ; 0045b65e
    MOV dword ptr [ESP + 0x21c],ESI     ; 0045b661
    MOV dword ptr [ESP + 0x214],EAX     ; 0045b668
    MOV EAX,[0x00622c18]                ; 0045b66f | g_CDemonSetPtr
        ;   Label: LAB_0045b66f
    MOV EBX,dword ptr [ESP + 0x218]     ; 0045b674
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 0045b67b | g_CDemonSetInstance.field1364324_0x14d164
    JGE 0x0045be4b                      ; 0045b681
        ;   XREF to: 0045be4b (CONDITIONAL_JUMP)  ; LAB_0045be4b
    ADD EAX,dword ptr [ESP + 0x210]     ; 0045b687
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 0045b68e | g_CDemonSetInstance.field1364328_0x14d168
    PUSH EBX                            ; 0045b694
    MOV EAX,dword ptr [EBX + 0x154]     ; 0045b695
    CALL dword ptr [EAX + 0x94]         ; 0045b69b
    ADD ESP,0x4                         ; 0045b6a1
    TEST EAX,EAX                        ; 0045b6a4
    JZ 0x0045bc68                       ; 0045b6a6
        ;   XREF to: 0045bc68 (CONDITIONAL_JUMP)  ; LAB_0045bc68
    MOV ECX,dword ptr [ESP + 0x218]     ; 0045b6ac
        ;   Label: LAB_0045b6ac
    MOV EDX,dword ptr [ESP + 0x210]     ; 0045b6b3
    INC ECX                             ; 0045b6ba
    ADD EDX,0x4                         ; 0045b6bb
    MOV dword ptr [ESP + 0x218],ECX     ; 0045b6be
    MOV dword ptr [ESP + 0x210],EDX     ; 0045b6c5
    JMP 0x0045b66f                      ; 0045b6cc
        ;   XREF to: 0045b66f (UNCONDITIONAL_JUMP)  ; LAB_0045b66f
    PUSH EDI                            ; 0045b6ce
        ;   Label: LAB_0045b6ce
    MOV ESI,dword ptr [EDI + 0x154]     ; 0045b6cf
    CALL dword ptr [ESI + 0x94]         ; 0045b6d5
    ADD ESP,0x4                         ; 0045b6db
    TEST EAX,EAX                        ; 0045b6de
    JNZ 0x0045b9d5                      ; 0045b6e0
        ;   XREF to: 0045b9d5 (CONDITIONAL_JUMP)  ; LAB_0045b9d5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045b6e6
    MOV EAX,dword ptr [EAX + 0xc278]    ; 0045b6e9
    FLD float ptr [EBX]                 ; 0045b6ef
    FSUB float ptr [EAX + 0x20]         ; 0045b6f1
    FMUL ST0                            ; 0045b6f4
    FLD float ptr [EBX + 0x8]           ; 0045b6f6
    FSUB float ptr [EAX + 0x28]         ; 0045b6f9
    FMUL ST0                            ; 0045b6fc
    FADDP                               ; 0045b6fe
    FSQRT                               ; 0045b700
    FMUL double ptr [0x005d819b]        ; 0045b702 | DAT_005d819b
    FSUBR double ptr [0x005d81a3]       ; 0045b708 | DAT_005d81a3
    FST float ptr [ESP + 0x4]           ; 0045b70e
    FLD1                                ; 0045b712
    FCOMPP                              ; 0045b714
    FNSTSW AX                           ; 0045b716
    SAHF                                ; 0045b718
    JBE 0x0045b723                      ; 0045b719
        ;   XREF to: 0045b723 (CONDITIONAL_JUMP)  ; LAB_0045b723
    MOV dword ptr [ESP + 0x4],0x3f800000 ; 0045b71b
    FLD float ptr [EBP + 0x18]          ; 0045b723
        ;   Label: LAB_0045b723
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045b726
    FMUL float ptr [ESP + 0x4]          ; 0045b729
    MOV EDI,dword ptr [EAX + 0xc27c]    ; 0045b72d
    PUSH EDI                            ; 0045b733
    FADD float ptr [EAX + 0xc274]       ; 0045b734
    PUSH EAX                            ; 0045b73a
    FSTP float ptr [EAX + 0xc274]       ; 0045b73b
    CALL unkafter_demnfolk.cpp_FUN_0045bec0 ; 0045b741
        ;   XREF to: 0045bec0 (UNCONDITIONAL_CALL)  ; undefined unkafter_demnfolk.cpp_FUN_0045bec0()
    ADD ESP,0x8                         ; 0045b746
    MOV ESI,0xffffffff                  ; 0045b749
    MOV dword ptr [ESP + 0x200],EAX     ; 0045b74e
    TEST EAX,EAX                        ; 0045b755
    JL 0x0045b9bb                       ; 0045b757
        ;   XREF to: 0045b9bb (CONDITIONAL_JUMP)  ; LAB_0045b9bb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045b75d
    FLD float ptr [EAX + 0xc274]        ; 0045b760
    FLDZ                                ; 0045b766
    FCOMPP                              ; 0045b768
    FNSTSW AX                           ; 0045b76a
    SAHF                                ; 0045b76c
    JBE 0x0045b9bb                      ; 0045b76d
        ;   XREF to: 0045b9bb (CONDITIONAL_JUMP)  ; LAB_0045b9bb
    MOV EDX,dword ptr [EBP + 0x14]      ; 0045b773
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045b776
    PUSH EDX                            ; 0045b779
    MOV EAX,dword ptr [EAX + 0xc278]    ; 0045b77a
    PUSH EAX                            ; 0045b780
    MOV EBX,dword ptr [EAX + 0x154]     ; 0045b781
    CALL dword ptr [EBX + 0x84]         ; 0045b787
    ADD ESP,0x8                         ; 0045b78d
    CMP EAX,0x3                         ; 0045b790
    JNZ 0x0045b9bb                      ; 0045b793
        ;   XREF to: 0045b9bb (CONDITIONAL_JUMP)  ; LAB_0045b9bb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045b799
    MOV ECX,dword ptr [EAX + 0xc27c]    ; 0045b79c
    PUSH ECX                            ; 0045b7a2
    PUSH EAX                            ; 0045b7a3
    CALL unkafter_demnfolk.cpp_FUN_0045bf60 ; 0045b7a4
        ;   XREF to: 0045bf60 (UNCONDITIONAL_CALL)  ; undefined unkafter_demnfolk.cpp_FUN_0045bf60()
    ADD ESP,0x8                         ; 0045b7a9
    TEST EAX,EAX                        ; 0045b7ac
    JZ 0x0045b9bb                       ; 0045b7ae
        ;   XREF to: 0045b9bb (CONDITIONAL_JUMP)  ; LAB_0045b9bb
    MOV ESI,dword ptr [EBP + 0x14]      ; 0045b7b4
    MOV ESI,dword ptr [ESI + 0xc27c]    ; 0045b7b7
    CMP ESI,0x2                         ; 0045b7bd
    JNC 0x0045bb47                      ; 0045b7c0
        ;   XREF to: 0045bb47 (CONDITIONAL_JUMP)  ; LAB_0045bb47
    CMP ESI,0x1                         ; 0045b7c6
    JNZ 0x0045bb56                      ; 0045b7c9
        ;   XREF to: 0045bb56 (CONDITIONAL_JUMP)  ; LAB_0045bb56
    MOV EBX,dword ptr [EBP + 0x14]      ; 0045b7cf
        ;   Label: LAB_0045b7cf
    MOV EBX,dword ptr [EBX + 0xc278]    ; 0045b7d2
    PUSH EBX                            ; 0045b7d8
    MOV EAX,dword ptr [EBX + 0x154]     ; 0045b7d9
    LEA ESI,[ESP + 0xa4]                ; 0045b7df
    LEA EDI,[ESP + 0x5c]                ; 0045b7e6
    CALL dword ptr [EAX + 0x1c]         ; 0045b7ea
    MOV ECX,0x6                         ; 0045b7ed
    ADD ESP,0x4                         ; 0045b7f2
    LEA EAX,[ESP + 0x1f0]               ; 0045b7f5
    LEA ESI,[ESP + 0xa0]                ; 0045b7fc
    PUSH EAX                            ; 0045b803
    MOVSD.REP ES:EDI,ESI                ; 0045b804
    LEA EAX,[ESP + 0x68]                ; 0045b806
    MOV EDI,0x3f000000                  ; 0045b80a
    PUSH EAX                            ; 0045b80f
    LEA EAX,[ESP + 0x60]                ; 0045b810
    LEA ESI,[ESP + 0x1bc]               ; 0045b814
    PUSH EAX                            ; 0045b81b
    MOV dword ptr [ESP + 0x1fc],EDI     ; 0045b81c
    LEA EDI,[ESP + 0xf4]                ; 0045b823
    CALL core_bodypart.cpp_FUN_0041b020 ; 0045b82a
        ;   XREF to: 0041b020 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_0041b020()
    LEA ESI,[ESP + 0x1c0]               ; 0045b82f
    ADD ESP,0x8                         ; 0045b836
    LEA EAX,[ESP + 0xec]                ; 0045b839
    MOVSD ES:EDI,ESI                    ; 0045b840
    MOVSD ES:EDI,ESI                    ; 0045b841
    MOVSD ES:EDI,ESI                    ; 0045b842
    PUSH EAX                            ; 0045b843
    LEA ESI,[ESP + 0x1ec]               ; 0045b844
    LEA EDI,[ESP + 0x1e0]               ; 0045b84b
    CALL core_bodypart.cpp_FUN_0041afa0 ; 0045b852
        ;   XREF to: 0041afa0 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_0041afa0()
    LEA ESI,[ESP + 0x1ec]               ; 0045b857
    ADD ESP,0x8                         ; 0045b85e
    LEA EAX,[ESP + 0x13c]               ; 0045b861
    FLD float ptr [ESP + 0x60]          ; 0045b868
    MOVSD ES:EDI,ESI                    ; 0045b86c
    MOVSD ES:EDI,ESI                    ; 0045b86d
    MOVSD ES:EDI,ESI                    ; 0045b86e
    PUSH EAX                            ; 0045b86f
    LEA EDI,[ESP + 0x140]               ; 0045b870
    LEA ESI,[ESP + 0x1dc]               ; 0045b877
    FADD double ptr [0x005d81ab]        ; 0045b87e | DAT_005d81ab
    PUSH EBX                            ; 0045b884
    FSTP float ptr [ESP + 0x1e8]        ; 0045b885
    MOVSD ES:EDI,ESI                    ; 0045b88c
    MOVSD ES:EDI,ESI                    ; 0045b88d
    MOVSD ES:EDI,ESI                    ; 0045b88e
    LEA EBX,[ESP + 0x15c]               ; 0045b88f
    LEA ESI,[ESP + 0x12c]               ; 0045b896
    LEA EDI,[ESP + 0x1a4]               ; 0045b89d
    CALL core_actor.cpp_FUN_00408b40    ; 0045b8a4
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x12c]               ; 0045b8a9
    ADD ESP,0x8                         ; 0045b8b0
    LEA EAX,[ESP + 0x19c]               ; 0045b8b3
    MOVSD ES:EDI,ESI                    ; 0045b8ba
    MOVSD ES:EDI,ESI                    ; 0045b8bb
    MOVSD ES:EDI,ESI                    ; 0045b8bc
    CMP EBX,EAX                         ; 0045b8bd
    JZ 0x0045b8eb                       ; 0045b8bf
        ;   XREF to: 0045b8eb (CONDITIONAL_JUMP)  ; LAB_0045b8eb
    MOV EAX,dword ptr [ESP + 0x19c]     ; 0045b8c1
    MOV dword ptr [ESP + 0x154],EAX     ; 0045b8c8
    MOV EAX,dword ptr [ESP + 0x1a0]     ; 0045b8cf
    MOV dword ptr [ESP + 0x158],EAX     ; 0045b8d6
    MOV EAX,dword ptr [ESP + 0x1a4]     ; 0045b8dd
    MOV dword ptr [ESP + 0x15c],EAX     ; 0045b8e4
        ;   Label: LAB_0045b8e4
    LEA EDI,[ESP + 0x178]               ; 0045b8eb
        ;   Label: LAB_0045b8eb
    MOV ESI,0x2c8af28                   ; 0045b8f2
    MOV EAX,dword ptr [ESP + 0x200]     ; 0045b8f7
    MOVSD ES:EDI,ESI                    ; 0045b8fe | DAT_02c8af28
    MOVSD ES:EDI,ESI                    ; 0045b8ff | DAT_02c8af2c
    MOVSD ES:EDI,ESI                    ; 0045b900 | DAT_02c8af30
    TEST EAX,EAX                        ; 0045b901
    JNZ 0x0045b948                      ; 0045b903
        ;   XREF to: 0045b948 (CONDITIONAL_JUMP)  ; LAB_0045b948
    MOV EDX,0xbfc00000                  ; 0045b905
    LEA EBX,[ESP + 0x178]               ; 0045b90a
    MOV dword ptr [ESP + 0x11c],EAX     ; 0045b911
    MOV dword ptr [ESP + 0x120],EAX     ; 0045b918
    LEA EAX,[ESP + 0x118]               ; 0045b91f
    MOV dword ptr [ESP + 0x118],EDX     ; 0045b926
    CMP EBX,EAX                         ; 0045b92d
    JZ 0x0045b948                       ; 0045b92f
        ;   XREF to: 0045b948 (CONDITIONAL_JUMP)  ; LAB_0045b948
    XOR EDI,EDI                         ; 0045b931
    MOV dword ptr [ESP + 0x178],EDX     ; 0045b933
    MOV dword ptr [ESP + 0x17c],EDI     ; 0045b93a
    MOV dword ptr [ESP + 0x180],EDI     ; 0045b941
    CMP dword ptr [ESP + 0x200],0x1     ; 0045b948
        ;   Label: LAB_0045b948
    JNZ 0x0045b997                      ; 0045b950
        ;   XREF to: 0045b997 (CONDITIONAL_JUMP)  ; LAB_0045b997
    MOV ECX,0x3fc00000                  ; 0045b952
    XOR EBX,EBX                         ; 0045b957
    LEA EAX,[ESP + 0x178]               ; 0045b959
    MOV dword ptr [ESP + 0x1ac],EBX     ; 0045b960
    MOV dword ptr [ESP + 0x1b0],EBX     ; 0045b967
    LEA EBX,[ESP + 0x1a8]               ; 0045b96e
    MOV dword ptr [ESP + 0x1a8],ECX     ; 0045b975
    CMP EAX,EBX                         ; 0045b97c
    JZ 0x0045b997                       ; 0045b97e
        ;   XREF to: 0045b997 (CONDITIONAL_JUMP)  ; LAB_0045b997
    XOR EAX,EAX                         ; 0045b980
    MOV dword ptr [ESP + 0x178],ECX     ; 0045b982
    MOV dword ptr [ESP + 0x17c],EAX     ; 0045b989
    MOV dword ptr [ESP + 0x180],EAX     ; 0045b990
    PUSH 0x0                            ; 0045b997
        ;   Label: LAB_0045b997
    LEA EAX,[ESP + 0x17c]               ; 0045b999
    PUSH 0x0                            ; 0045b9a0
    PUSH EAX                            ; 0045b9a2
    PUSH 0x0                            ; 0045b9a3
    LEA EAX,[ESP + 0x164]               ; 0045b9a5
    PUSH EAX                            ; 0045b9ac
    MOV ECX,dword ptr [EBP + 0x14]      ; 0045b9ad
    PUSH ECX                            ; 0045b9b0
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 0045b9b1
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0045b9b6
    MOV ESI,EAX                         ; 0045b9b9
    TEST ESI,ESI                        ; 0045b9bb
        ;   Label: LAB_0045b9bb
    JL 0x0045bb8c                       ; 0045b9bd
        ;   XREF to: 0045bb8c (CONDITIONAL_JUMP)  ; LAB_0045bb8c
    JG 0x0045bbfe                       ; 0045b9c3
        ;   XREF to: 0045bbfe (CONDITIONAL_JUMP)  ; LAB_0045bbfe
    MOV EAX,0x1                         ; 0045b9c9
    MOV ESP,EBP                         ; 0045b9ce
    POP EBP                             ; 0045b9d0
    POP EDI                             ; 0045b9d1
    POP ESI                             ; 0045b9d2
    POP EBX                             ; 0045b9d3
    RET                                 ; 0045b9d4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045b9d5
        ;   Label: LAB_0045b9d5
    MOV EDX,dword ptr [EAX + 0xc278]    ; 0045b9d8
    PUSH EDX                            ; 0045b9de
    PUSH EAX                            ; 0045b9df
    PUSH 0x5d80c3                       ; 0045b9e0 | s_s_can_t_pick_up_s_sombod_005d80c2+1
    MOV EBX,dword ptr [0x00611100]      ; 0045b9e5 | g_CConsolePtr
    PUSH EBX                            ; 0045b9eb | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 0045b9ec
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x10                        ; 0045b9f1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045b9f4
    MOV dword ptr [EAX + 0xc278],0x0    ; 0045b9f7
    PUSH EAX                            ; 0045ba01
    MOV dword ptr [EAX + 0xc274],0x0    ; 0045ba02
    CALL unkafter_demnfolk.cpp_FUN_0045d060 ; 0045ba0c
        ;   XREF to: 0045d060 (UNCONDITIONAL_CALL)  ; undefined unkafter_demnfolk.cpp_FUN_0045d060()
    ADD ESP,0x4                         ; 0045ba11
    XOR EAX,EAX                         ; 0045ba14
    MOV ESP,EBP                         ; 0045ba16
    POP EBP                             ; 0045ba18
    POP EDI                             ; 0045ba19
    POP ESI                             ; 0045ba1a
    POP EBX                             ; 0045ba1b
    RET                                 ; 0045ba1c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0045ba1d
        ;   Label: LAB_0045ba1d
    MOV EBX,dword ptr [EBX + 0xc278]    ; 0045ba20
    PUSH EBX                            ; 0045ba26
    MOV EAX,dword ptr [EBX + 0x154]     ; 0045ba27
    LEA ESI,[ESP + 0xbc]                ; 0045ba2d
    LEA EDI,[ESP + 0x8c]                ; 0045ba34
    CALL dword ptr [EAX + 0x1c]         ; 0045ba3b
    MOV ECX,0x6                         ; 0045ba3e
    ADD ESP,0x4                         ; 0045ba43
    LEA EAX,[ESP + 0x1fc]               ; 0045ba46
    LEA ESI,[ESP + 0xb8]                ; 0045ba4d
    PUSH EAX                            ; 0045ba54
    MOVSD.REP ES:EDI,ESI                ; 0045ba55
    LEA EAX,[ESP + 0x98]                ; 0045ba57
    MOV ESI,0x3f000000                  ; 0045ba5e
    PUSH EAX                            ; 0045ba63
    LEA EAX,[ESP + 0x90]                ; 0045ba64
    MOV dword ptr [ESP + 0x204],ESI     ; 0045ba6b
    PUSH EAX                            ; 0045ba72
    LEA ESI,[ESP + 0x178]               ; 0045ba73
    LEA EDI,[ESP + 0x190]               ; 0045ba7a
    CALL core_bodypart.cpp_FUN_0041b020 ; 0045ba81
        ;   XREF to: 0041b020 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_0041b020()
    LEA ESI,[ESP + 0x178]               ; 0045ba86
    ADD ESP,0x8                         ; 0045ba8d
    LEA EAX,[ESP + 0x188]               ; 0045ba90
    MOVSD ES:EDI,ESI                    ; 0045ba97
    MOVSD ES:EDI,ESI                    ; 0045ba98
    MOVSD ES:EDI,ESI                    ; 0045ba99
    PUSH EAX                            ; 0045ba9a
    LEA ESI,[ESP + 0xfc]                ; 0045ba9b
    LEA EDI,[ESP + 0x198]               ; 0045baa2
    CALL core_bodypart.cpp_FUN_0041afa0 ; 0045baa9
        ;   XREF to: 0041afa0 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_0041afa0()
    LEA ESI,[ESP + 0xfc]                ; 0045baae
    ADD ESP,0x8                         ; 0045bab5
    LEA EAX,[ESP + 0x10c]               ; 0045bab8
    FLD float ptr [ESP + 0x90]          ; 0045babf
    MOVSD ES:EDI,ESI                    ; 0045bac6
    MOVSD ES:EDI,ESI                    ; 0045bac7
    MOVSD ES:EDI,ESI                    ; 0045bac8
    PUSH EAX                            ; 0045bac9
    LEA EDI,[ESP + 0x110]               ; 0045baca
    LEA ESI,[ESP + 0x194]               ; 0045bad1
    FADD double ptr [0x005d81ab]        ; 0045bad8 | DAT_005d81ab
    PUSH EBX                            ; 0045bade
    FSTP float ptr [ESP + 0x1a0]        ; 0045badf
    MOVSD ES:EDI,ESI                    ; 0045bae6
    MOVSD ES:EDI,ESI                    ; 0045bae7
    MOVSD ES:EDI,ESI                    ; 0045bae8
    LEA EBX,[ESP + 0x168]               ; 0045bae9
    LEA ESI,[ESP + 0x108]               ; 0045baf0
    LEA EDI,[ESP + 0x168]               ; 0045baf7
    CALL core_actor.cpp_FUN_00408b40    ; 0045bafe
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x108]               ; 0045bb03
    ADD ESP,0x8                         ; 0045bb0a
    LEA EAX,[ESP + 0x154]               ; 0045bb0d
    MOVSD ES:EDI,ESI                    ; 0045bb14
    MOVSD ES:EDI,ESI                    ; 0045bb15
    MOVSD ES:EDI,ESI                    ; 0045bb16
    CMP EAX,EBX                         ; 0045bb17
    JZ 0x0045b8eb                       ; 0045bb19
        ;   XREF to: 0045b8eb (CONDITIONAL_JUMP)  ; LAB_0045b8eb
    MOV EAX,dword ptr [ESP + 0x160]     ; 0045bb1f
    MOV dword ptr [ESP + 0x154],EAX     ; 0045bb26
    MOV EAX,dword ptr [ESP + 0x164]     ; 0045bb2d
    MOV dword ptr [ESP + 0x158],EAX     ; 0045bb34
    MOV EAX,dword ptr [ESP + 0x168]     ; 0045bb3b
    JMP 0x0045b8e4                      ; 0045bb42
        ;   XREF to: 0045b8e4 (UNCONDITIONAL_JUMP)  ; LAB_0045b8e4
    JBE 0x0045ba1d                      ; 0045bb47
        ;   XREF to: 0045ba1d (CONDITIONAL_JUMP)  ; LAB_0045ba1d
        ;   Label: LAB_0045bb47
    CMP ESI,0x3                         ; 0045bb4d
    JZ 0x0045b7cf                       ; 0045bb50
        ;   XREF to: 0045b7cf (CONDITIONAL_JUMP)  ; LAB_0045b7cf
    MOV EBX,dword ptr [EBP + 0x14]      ; 0045bb56
        ;   Label: LAB_0045bb56
    MOV EBX,dword ptr [EBX + 0xc278]    ; 0045bb59
    LEA EAX,[ESP + 0x154]               ; 0045bb5f
    ADD EBX,0x20                        ; 0045bb66
    CMP EAX,EBX                         ; 0045bb69
    JZ 0x0045b8eb                       ; 0045bb6b
        ;   XREF to: 0045b8eb (CONDITIONAL_JUMP)  ; LAB_0045b8eb
    MOV EAX,dword ptr [EBX]             ; 0045bb71
    MOV dword ptr [ESP + 0x154],EAX     ; 0045bb73
    MOV EAX,dword ptr [EBX + 0x4]       ; 0045bb7a
    MOV dword ptr [ESP + 0x158],EAX     ; 0045bb7d
    MOV EAX,dword ptr [EBX + 0x8]       ; 0045bb84
    JMP 0x0045b8e4                      ; 0045bb87
        ;   XREF to: 0045b8e4 (UNCONDITIONAL_JUMP)  ; LAB_0045b8e4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045bb8c
        ;   Label: LAB_0045bb8c
    MOV ECX,dword ptr [EAX + 0xc278]    ; 0045bb8f
    PUSH ECX                            ; 0045bb95
    PUSH EAX                            ; 0045bb96
    PUSH 0x5d80f5                       ; 0045bb97 | = "%s can't pick up %s, giving up\n"
    MOV ESI,dword ptr [0x00611100]      ; 0045bb9c | g_CConsolePtr
    PUSH ESI                            ; 0045bba2 | g_CConsoleInstance
    MOV EBX,EAX                         ; 0045bba3
    CALL engine_console.cpp_FUN_00445430 ; 0045bba5
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    MOV EAX,EBX                         ; 0045bbaa
    ADD ESP,0x10                        ; 0045bbac
    MOV dword ptr [EAX + 0xc278],0x0    ; 0045bbaf
    PUSH EAX                            ; 0045bbb9
    MOV dword ptr [EAX + 0xc274],0x41a00000 ; 0045bbba
    CALL unkafter_demnfolk.cpp_FUN_0045d060 ; 0045bbc4
        ;   XREF to: 0045d060 (UNCONDITIONAL_CALL)  ; undefined unkafter_demnfolk.cpp_FUN_0045d060()
    ADD ESP,0x4                         ; 0045bbc9
    XOR EAX,EAX                         ; 0045bbcc
    MOV ESP,EBP                         ; 0045bbce
    POP EBP                             ; 0045bbd0
    POP EDI                             ; 0045bbd1
    POP ESI                             ; 0045bbd2
    POP EBX                             ; 0045bbd3
    RET                                 ; 0045bbd4
    PUSH 0x1                            ; 0045bbd5
        ;   Label: LAB_0045bbd5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045bbd7
    PUSH 0x20                           ; 0045bbda
    ADD EAX,0x158                       ; 0045bbdc
        ;   Label: LAB_0045bbdc
    PUSH EAX                            ; 0045bbe1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0045bbe2
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045bbe7
    MOV EAX,0x1                         ; 0045bbea
    MOV ESP,EBP                         ; 0045bbef
    POP EBP                             ; 0045bbf1
    POP EDI                             ; 0045bbf2
    POP ESI                             ; 0045bbf3
    POP EBX                             ; 0045bbf4
    RET                                 ; 0045bbf5
    PUSH 0x1                            ; 0045bbf6
        ;   Label: LAB_0045bbf6
    MOV EAX,ESI                         ; 0045bbf8
    PUSH 0x22                           ; 0045bbfa
    JMP 0x0045bbdc                      ; 0045bbfc
        ;   XREF to: 0045bbdc (UNCONDITIONAL_JUMP)  ; LAB_0045bbdc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045bbfe
        ;   Label: LAB_0045bbfe
    MOV EBX,dword ptr [EAX + 0xc278]    ; 0045bc01
    PUSH EBX                            ; 0045bc07
    PUSH EAX                            ; 0045bc08
    PUSH 0x5d8115                       ; 0045bc09 | = "%s beginning to pickup %s\n"
    MOV EDI,dword ptr [0x00611100]      ; 0045bc0e | g_CConsolePtr
    PUSH EDI                            ; 0045bc14 | g_CConsoleInstance
    MOV ESI,EAX                         ; 0045bc15
    CALL engine_console.cpp_FUN_00445430 ; 0045bc17
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    MOV EAX,ESI                         ; 0045bc1c
    MOV EAX,dword ptr [EAX + 0xc27c]    ; 0045bc1e
    ADD ESP,0x10                        ; 0045bc24
    CMP EAX,0x2                         ; 0045bc27
    JNC 0x0045bc33                      ; 0045bc2a
        ;   XREF to: 0045bc33 (CONDITIONAL_JUMP)  ; LAB_0045bc33
    CMP EAX,0x1                         ; 0045bc2c
    JZ 0x0045bbd5                       ; 0045bc2f
        ;   XREF to: 0045bbd5 (CONDITIONAL_JUMP)  ; LAB_0045bbd5
    JMP 0x0045bc3a                      ; 0045bc31
        ;   XREF to: 0045bc3a (UNCONDITIONAL_JUMP)  ; LAB_0045bc3a
    JBE 0x0045bbf6                      ; 0045bc33
        ;   XREF to: 0045bbf6 (CONDITIONAL_JUMP)  ; LAB_0045bbf6
        ;   Label: LAB_0045bc33
    CMP EAX,0x3                         ; 0045bc35
    JZ 0x0045bbd5                       ; 0045bc38
        ;   XREF to: 0045bbd5 (CONDITIONAL_JUMP)  ; LAB_0045bbd5
    MOV EAX,0x5d8130                    ; 0045bc3a | = "..\\core\\demnfolk.cpp"
        ;   Label: LAB_0045bc3a
    MOV EDX,0x5d5                       ; 0045bc3f
    PUSH 0x5d8145                       ; 0045bc44 | = "Invalid demon townsfolk object shape!"
    MOV [0x01d1d400],EAX                ; 0045bc49 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0045bc4e | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0045bc54
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0045bc59
    MOV EAX,0x1                         ; 0045bc5c
    MOV ESP,EBP                         ; 0045bc61
    POP EBP                             ; 0045bc63
    POP EDI                             ; 0045bc64
    POP ESI                             ; 0045bc65
    POP EBX                             ; 0045bc66
    RET                                 ; 0045bc67
    MOV ECX,dword ptr [EBP + 0x14]      ; 0045bc68
        ;   Label: LAB_0045bc68
    PUSH ECX                            ; 0045bc6b
    MOV EAX,dword ptr [EBX + 0x154]     ; 0045bc6c
    PUSH EBX                            ; 0045bc72
    CALL dword ptr [EAX + 0x84]         ; 0045bc73
    ADD ESP,0x8                         ; 0045bc79
    CMP EAX,0x3                         ; 0045bc7c
    JNZ 0x0045b6ac                      ; 0045bc7f
        ;   XREF to: 0045b6ac (CONDITIONAL_JUMP)  ; LAB_0045b6ac
    PUSH EBX                            ; 0045bc85
    MOV EAX,dword ptr [EBX + 0x154]     ; 0045bc86
    LEA ESI,[ESP + 0x74]                ; 0045bc8c
    LEA EDI,[ESP + 0xd4]                ; 0045bc90
    CALL dword ptr [EAX + 0x1c]         ; 0045bc97
    MOV ECX,0x6                         ; 0045bc9a
    ADD ESP,0x4                         ; 0045bc9f
    LEA ESI,[ESP + 0x70]                ; 0045bca2
    MOV EAX,dword ptr [ESP + 0x214]     ; 0045bca6
    MOVSD.REP ES:EDI,ESI                ; 0045bcad
    FLD float ptr [EAX + 0x4]           ; 0045bcaf
    FLD float ptr [EAX + 0x8]           ; 0045bcb2
    FLD float ptr [EAX]                 ; 0045bcb5
    LEA EDI,[ESP + 0x1c0]               ; 0045bcb7
    LEA ESI,[ESP + 0x148]               ; 0045bcbe
    LEA EAX,[ESP + 0x1c0]               ; 0045bcc5
    FSUB float ptr [ESP + 0xd0]         ; 0045bccc
    FXCH ST2                            ; 0045bcd3
    FSUB float ptr [ESP + 0xd4]         ; 0045bcd5
    FXCH                                ; 0045bcdc
    FSUB float ptr [ESP + 0xd8]         ; 0045bcde
    FXCH ST2                            ; 0045bce5
    FSTP float ptr [ESP + 0x148]        ; 0045bce7
    FSTP float ptr [ESP + 0x14c]        ; 0045bcee
    FSTP float ptr [ESP + 0x150]        ; 0045bcf5
    PUSH EAX                            ; 0045bcfc
    MOVSD ES:EDI,ESI                    ; 0045bcfd
    MOVSD ES:EDI,ESI                    ; 0045bcfe
    MOVSD ES:EDI,ESI                    ; 0045bcff
    CALL core_demnfolk.cpp_FUN_00458890 ; 0045bd00
        ;   XREF to: 00458890 (UNCONDITIONAL_CALL)  ; undefined core_demnfolk.cpp_FUN_00458890()
    ADD ESP,0x4                         ; 0045bd05
    MOV dword ptr [ESP + 0x204],EAX     ; 0045bd08
    TEST EAX,EAX                        ; 0045bd0f
    JZ 0x0045b6ac                       ; 0045bd11
        ;   XREF to: 0045b6ac (CONDITIONAL_JUMP)  ; LAB_0045b6ac
    PUSH EAX                            ; 0045bd17
    MOV ESI,dword ptr [EBP + 0x14]      ; 0045bd18
    PUSH ESI                            ; 0045bd1b
    CALL unkafter_demnfolk.cpp_FUN_0045bf60 ; 0045bd1c
        ;   XREF to: 0045bf60 (UNCONDITIONAL_CALL)  ; undefined unkafter_demnfolk.cpp_FUN_0045bf60()
    ADD ESP,0x8                         ; 0045bd21
    TEST EAX,EAX                        ; 0045bd24
    JZ 0x0045b6ac                       ; 0045bd26
        ;   XREF to: 0045b6ac (CONDITIONAL_JUMP)  ; LAB_0045b6ac
    PUSH 0x5d816b                       ; 0045bd2c | = "CBodyPart"
    PUSH EBX                            ; 0045bd31
    CALL core_actor.cpp_FUN_0040c550    ; 0045bd32
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0045bd37
    TEST EAX,EAX                        ; 0045bd3a
    JZ 0x0045bd58                       ; 0045bd3c
        ;   XREF to: 0045bd58 (CONDITIONAL_JUMP)  ; LAB_0045bd58
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045bd3e
    MOV ESI,dword ptr [EBX + 0x6c]      ; 0045bd41
    MOV EAX,dword ptr [EAX + 0xc26c]    ; 0045bd44
    AND ESI,0x3                         ; 0045bd4a
    AND EAX,0x3                         ; 0045bd4d
    CMP ESI,EAX                         ; 0045bd50
    JNZ 0x0045b6ac                      ; 0045bd52
        ;   XREF to: 0045b6ac (CONDITIONAL_JUMP)  ; LAB_0045b6ac
    LEA EAX,[EBX + 0x20]                ; 0045bd58
        ;   Label: LAB_0045bd58
    MOV ESI,dword ptr [ESP + 0x20c]     ; 0045bd5b
    LEA EDI,[ESP + 0x1cc]               ; 0045bd62
    FLD float ptr [EAX]                 ; 0045bd69
    FLD float ptr [EAX + 0x4]           ; 0045bd6b
    FLD float ptr [EAX + 0x8]           ; 0045bd6e
    FXCH ST2                            ; 0045bd71
    FSUB float ptr [ESI]                ; 0045bd73
    FXCH                                ; 0045bd75
    FSUB float ptr [ESI + 0x4]          ; 0045bd77
    FXCH ST2                            ; 0045bd7a
    FSUB float ptr [ESI + 0x8]          ; 0045bd7c
    FXCH                                ; 0045bd7f
    FSTP float ptr [ESP + 0x130]        ; 0045bd81
    FXCH                                ; 0045bd88
    FSTP float ptr [ESP + 0x134]        ; 0045bd8a
    LEA ESI,[ESP + 0x130]               ; 0045bd91
    FSTP float ptr [ESP + 0x138]        ; 0045bd98
    MOVSD ES:EDI,ESI                    ; 0045bd9f
    MOVSD ES:EDI,ESI                    ; 0045bda0
    MOVSD ES:EDI,ESI                    ; 0045bda1
    FLD float ptr [ESP + 0x1d0]         ; 0045bda2
    FMUL ST0                            ; 0045bda9
    FST float ptr [ESP + 0x1d0]         ; 0045bdab
    FMUL float ptr [ESP + 0x1d0]        ; 0045bdb2
    FST float ptr [ESP + 0x1d0]         ; 0045bdb9
    FMUL float ptr [ESP + 0x1d0]        ; 0045bdc0
    FLD float ptr [ESP + 0x1cc]         ; 0045bdc7
    FMUL ST0                            ; 0045bdce
    FADDP                               ; 0045bdd0
    FLD float ptr [ESP + 0x1d4]         ; 0045bdd2
    FMUL ST0                            ; 0045bdd9
    FADDP                               ; 0045bddb
    FSQRT                               ; 0045bddd
    FST float ptr [ESP]                 ; 0045bddf
    FCOMP double ptr [0x005d81a3]       ; 0045bde2 | DAT_005d81a3
    FNSTSW AX                           ; 0045bde8
    SAHF                                ; 0045bdea
    JC 0x0045b6ac                       ; 0045bdeb
        ;   XREF to: 0045b6ac (CONDITIONAL_JUMP)  ; LAB_0045b6ac
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045bdf1
    FLD float ptr [EAX + 0xc268]        ; 0045bdf4
    FMUL float ptr [0x005d81b3]         ; 0045bdfa | DAT_005d81b3
    FCOMP float ptr [ESP]               ; 0045be00
    FNSTSW AX                           ; 0045be03
    SAHF                                ; 0045be05
    JC 0x0045b6ac                       ; 0045be06
        ;   XREF to: 0045b6ac (CONDITIONAL_JUMP)  ; LAB_0045b6ac
    MOV EAX,dword ptr [ESP + 0x21c]     ; 0045be0c
    MOV dword ptr [ESP + EAX*0x1 + 0x8],EBX ; 0045be13
    MOV EBX,dword ptr [ESP + 0x21c]     ; 0045be17
    MOV EAX,dword ptr [ESP + 0x204]     ; 0045be1e
    MOV dword ptr [ESP + EBX*0x1 + 0x30],EAX ; 0045be25
    MOV EAX,dword ptr [ESP + 0x208]     ; 0045be29
    LEA EDI,[EBX + 0x4]                 ; 0045be30
    INC EAX                             ; 0045be33
    MOV dword ptr [ESP + 0x21c],EDI     ; 0045be34
    MOV dword ptr [ESP + 0x208],EAX     ; 0045be3b
    CMP EDI,0x28                        ; 0045be42
    JL 0x0045b6ac                       ; 0045be45
        ;   XREF to: 0045b6ac (CONDITIONAL_JUMP)  ; LAB_0045b6ac
    MOV ECX,dword ptr [ESP + 0x208]     ; 0045be4b
        ;   Label: LAB_0045be4b
    CMP ECX,0x1                         ; 0045be52
    JL 0x0045b5dd                       ; 0045be55
        ;   XREF to: 0045b5dd (CONDITIONAL_JUMP)  ; LAB_0045b5dd
    LEA EAX,[ECX + -0x1]                ; 0045be5b
    PUSH EAX                            ; 0045be5e
    PUSH 0x0                            ; 0045be5f
    CALL core_actor.cpp_FUN_0040cc60    ; 0045be61
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0045be66
    MOV ESI,dword ptr [EBP + 0x14]      ; 0045be69
    MOV EBX,dword ptr [ESP + EAX*0x4 + 0x8] ; 0045be6c
    MOV dword ptr [ESI + 0xc278],EBX    ; 0045be70
    MOV EAX,dword ptr [ESP + EAX*0x4 + 0x30] ; 0045be76
    MOV EBX,dword ptr [ESI + 0xc26c]    ; 0045be7a
    MOV dword ptr [ESI + 0xc274],0xc2200000 ; 0045be80
    INC EBX                             ; 0045be8a
    MOV dword ptr [ESI + 0xc27c],EAX    ; 0045be8b
    MOV dword ptr [ESI + 0xc26c],EBX    ; 0045be91
    MOV EDI,ESI                         ; 0045be97
    MOV ESI,dword ptr [ESI + 0xc278]    ; 0045be99
    PUSH ESI                            ; 0045be9f
    PUSH EDI                            ; 0045bea0
    PUSH 0x5d8175                       ; 0045bea1 | = "%s is going to try to pick up %s\n"
    MOV EAX,[0x00611100]                ; 0045bea6 | g_CConsolePtr
    PUSH EAX                            ; 0045beab | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 0045beac
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    MOV EAX,0x1                         ; 0045beb1
    ADD ESP,0x10                        ; 0045beb6
    MOV ESP,EBP                         ; 0045beb9
    POP EBP                             ; 0045bebb
    POP EDI                             ; 0045bebc
    POP ESI                             ; 0045bebd
    POP EBX                             ; 0045bebe
    RET                                 ; 0045bebf

