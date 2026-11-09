; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mobster_cpp_FUN_0051e5d0(CMobster *this_ptr,float delta_time)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_mobster.cpp_FUN_0051ce40 at 0051db88
;
; Referenced Globals:
;   TerminatedCString s_CTommyGun_005e9e72
;   undefined4 DAT_005e9e82
;   undefined4 DAT_005e9e8a
;   undefined4 DAT_005e9e92
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CDemonSetInstance.field1364324_0x14d164
;   undefined4 g_CDemonSetInstance.field1364328_0x14d168
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_0040c550
;   core_actor.cpp_FUN_0040cc00
;   core_actor.cpp_FUN_0040cc60
;   core_bodypart.cpp_FUN_0041afa0
;   core_bodypart.cpp_FUN_0041b020
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051e5d0
        ;   Label: core_mobster.cpp_FUN_0051e5d0
    PUSH ESI                            ; 0051e5d1
    PUSH EDI                            ; 0051e5d2
    PUSH EBP                            ; 0051e5d3
    MOV EBP,ESP                         ; 0051e5d4
    SUB ESP,0xfc                        ; 0051e5d6
    AND ESP,0xfffffff8                  ; 0051e5dc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051e5df
    CMP dword ptr [EAX + 0xc1dc],0x0    ; 0051e5e2
    JNZ 0x0051e961                      ; 0051e5e9
        ;   XREF to: 0051e961 (CONDITIONAL_JUMP)  ; LAB_0051e961
    FLD float ptr [EAX + 0xc26c]        ; 0051e5ef
    FSUB float ptr [EBP + 0x18]         ; 0051e5f5
    FST float ptr [EAX + 0xc26c]        ; 0051e5f8
    FLDZ                                ; 0051e5fe
    FCOMPP                              ; 0051e600
    FNSTSW AX                           ; 0051e602
    SAHF                                ; 0051e604
    JC 0x0051e6e0                       ; 0051e605
        ;   XREF to: 0051e6e0 (CONDITIONAL_JUMP)  ; LAB_0051e6e0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051e60b
        ;   Label: LAB_0051e60b
    MOV EAX,dword ptr [EAX + 0x2624]    ; 0051e60e
    MOV EBX,dword ptr [EBP + 0x14]      ; 0051e614
    SHL EAX,0x2                         ; 0051e617
    ADD EAX,EBX                         ; 0051e61a
    CMP dword ptr [EAX + 0x2298],0x0    ; 0051e61c
    JZ 0x0051e961                       ; 0051e623
        ;   XREF to: 0051e961 (CONDITIONAL_JUMP)  ; LAB_0051e961
    MOV EDI,dword ptr [EBX + 0x2628]    ; 0051e629
    TEST EDI,EDI                        ; 0051e62f
    JNZ 0x0051e961                      ; 0051e631
        ;   XREF to: 0051e961 (CONDITIONAL_JUMP)  ; LAB_0051e961
    FLD float ptr [EBX + 0xc270]        ; 0051e637
    FLDZ                                ; 0051e63d
    FCOMPP                              ; 0051e63f
    FNSTSW AX                           ; 0051e641
    SAHF                                ; 0051e643
    JC 0x0051e71e                       ; 0051e644
        ;   XREF to: 0051e71e (CONDITIONAL_JUMP)  ; LAB_0051e71e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051e64a
    MOV EDX,dword ptr [EAX + 0xc274]    ; 0051e64d
    ADD EBX,0x20                        ; 0051e653
    TEST EDX,EDX                        ; 0051e656
    JNZ 0x0051e749                      ; 0051e658
        ;   XREF to: 0051e749 (CONDITIONAL_JUMP)  ; LAB_0051e749
    MOV dword ptr [ESP + 0xe4],EDI      ; 0051e65e
    MOV dword ptr [ESP + 0xec],EDI      ; 0051e665
    MOV dword ptr [ESP + 0xe8],EBX      ; 0051e66c
    MOV dword ptr [ESP + 0xf0],EDI      ; 0051e673
    MOV dword ptr [ESP + 0xf4],EDI      ; 0051e67a
    MOV EAX,[0x00622c18]                ; 0051e681 | g_CDemonSetPtr
        ;   Label: LAB_0051e681
    MOV EBX,dword ptr [ESP + 0xec]      ; 0051e686
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 0051e68d | g_CDemonSetInstance.field1364324_0x14d164
    JGE 0x0051ea57                      ; 0051e693
        ;   XREF to: 0051ea57 (CONDITIONAL_JUMP)  ; LAB_0051ea57
    ADD EAX,dword ptr [ESP + 0xf0]      ; 0051e699
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 0051e6a0 | g_CDemonSetInstance.field1364328_0x14d168
    PUSH EBX                            ; 0051e6a6
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051e6a7
    CALL dword ptr [EAX + 0x94]         ; 0051e6ad
    ADD ESP,0x4                         ; 0051e6b3
    TEST EAX,EAX                        ; 0051e6b6
    JZ 0x0051e983                       ; 0051e6b8
        ;   XREF to: 0051e983 (CONDITIONAL_JUMP)  ; LAB_0051e983
    MOV EBX,dword ptr [ESP + 0xec]      ; 0051e6be
        ;   Label: LAB_0051e6be
    MOV ECX,dword ptr [ESP + 0xf0]      ; 0051e6c5
    INC EBX                             ; 0051e6cc
    ADD ECX,0x4                         ; 0051e6cd
    MOV dword ptr [ESP + 0xec],EBX      ; 0051e6d0
    MOV dword ptr [ESP + 0xf0],ECX      ; 0051e6d7
    JMP 0x0051e681                      ; 0051e6de
        ;   XREF to: 0051e681 (UNCONDITIONAL_JUMP)  ; LAB_0051e681
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051e6e0
        ;   Label: LAB_0051e6e0
    MOV ECX,dword ptr [EAX + 0xc268]    ; 0051e6e3
    PUSH 0x41200000                     ; 0051e6e9
    INC ECX                             ; 0051e6ee
    PUSH 0x40a00000                     ; 0051e6ef
    MOV dword ptr [EAX + 0xc268],ECX    ; 0051e6f4
    CALL core_actor.cpp_FUN_0040cc00    ; 0051e6fa
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0x100],EAX     ; 0051e6ff
    FLD float ptr [ESP + 0x100]         ; 0051e706
    ADD ESP,0x8                         ; 0051e70d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051e710
    FSTP float ptr [EAX + 0xc26c]       ; 0051e713
    JMP 0x0051e60b                      ; 0051e719
        ;   XREF to: 0051e60b (UNCONDITIONAL_JUMP)  ; LAB_0051e60b
    FLD float ptr [EBX + 0xc270]        ; 0051e71e
        ;   Label: LAB_0051e71e
    FSUB float ptr [EBP + 0x18]         ; 0051e724
    FST float ptr [EBX + 0xc270]        ; 0051e727
    FLDZ                                ; 0051e72d
    FCOMPP                              ; 0051e72f
    FNSTSW AX                           ; 0051e731
    SAHF                                ; 0051e733
    JBE 0x0051e961                      ; 0051e734
        ;   XREF to: 0051e961 (CONDITIONAL_JUMP)  ; LAB_0051e961
    MOV dword ptr [EBX + 0xc270],EDI    ; 0051e73a
    XOR EAX,EAX                         ; 0051e740
    MOV ESP,EBP                         ; 0051e742
    POP EBP                             ; 0051e744
    POP EDI                             ; 0051e745
    POP ESI                             ; 0051e746
    POP EBX                             ; 0051e747
    RET                                 ; 0051e748
    PUSH EDX                            ; 0051e749
        ;   Label: LAB_0051e749
    MOV ESI,dword ptr [EDX + 0x154]     ; 0051e74a
    CALL dword ptr [ESI + 0x94]         ; 0051e750
    ADD ESP,0x4                         ; 0051e756
    TEST EAX,EAX                        ; 0051e759
    JNZ 0x0051e913                      ; 0051e75b
        ;   XREF to: 0051e913 (CONDITIONAL_JUMP)  ; LAB_0051e913
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051e761
    MOV EAX,dword ptr [EAX + 0xc274]    ; 0051e764
    FLD float ptr [EBX]                 ; 0051e76a
    FSUB float ptr [EAX + 0x20]         ; 0051e76c
    FMUL ST0                            ; 0051e76f
    FLD float ptr [EBX + 0x8]           ; 0051e771
    FSUB float ptr [EAX + 0x28]         ; 0051e774
    FMUL ST0                            ; 0051e777
    FADDP                               ; 0051e779
    FSQRT                               ; 0051e77b
    FMUL double ptr [0x005e9e82]        ; 0051e77d | DAT_005e9e82
    FSUBR double ptr [0x005e9e8a]       ; 0051e783 | DAT_005e9e8a
    FST float ptr [ESP + 0x4]           ; 0051e789
    FLD1                                ; 0051e78d
    FCOMPP                              ; 0051e78f
    FNSTSW AX                           ; 0051e791
    SAHF                                ; 0051e793
    JBE 0x0051e79e                      ; 0051e794
        ;   XREF to: 0051e79e (CONDITIONAL_JUMP)  ; LAB_0051e79e
    MOV dword ptr [ESP + 0x4],0x3f800000 ; 0051e796
    FLD float ptr [EBP + 0x18]          ; 0051e79e
        ;   Label: LAB_0051e79e
    FMUL float ptr [ESP + 0x4]          ; 0051e7a1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051e7a5
    FADD float ptr [EAX + 0xc270]       ; 0051e7a8
    MOV ESI,0xffffffff                  ; 0051e7ae
    FST float ptr [EAX + 0xc270]        ; 0051e7b3
    FLDZ                                ; 0051e7b9
    FCOMPP                              ; 0051e7bb
    FNSTSW AX                           ; 0051e7bd
    SAHF                                ; 0051e7bf
    JBE 0x0051e8fe                      ; 0051e7c0
        ;   XREF to: 0051e8fe (CONDITIONAL_JUMP)  ; LAB_0051e8fe
    MOV ECX,dword ptr [EBP + 0x14]      ; 0051e7c6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051e7c9
    PUSH ECX                            ; 0051e7cc
    MOV EAX,dword ptr [EAX + 0xc274]    ; 0051e7cd
    PUSH EAX                            ; 0051e7d3
    MOV EBX,dword ptr [EAX + 0x154]     ; 0051e7d4
    CALL dword ptr [EBX + 0x84]         ; 0051e7da
    ADD ESP,0x8                         ; 0051e7e0
    CMP EAX,0x3                         ; 0051e7e3
    JNZ 0x0051e8fe                      ; 0051e7e6
        ;   XREF to: 0051e8fe (CONDITIONAL_JUMP)  ; LAB_0051e8fe
    MOV EBX,dword ptr [EBP + 0x14]      ; 0051e7ec
    MOV EBX,dword ptr [EBX + 0xc274]    ; 0051e7ef
    PUSH EBX                            ; 0051e7f5
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051e7f6
    LEA ESI,[ESP + 0x4c]                ; 0051e7fc
    LEA EDI,[ESP + 0x34]                ; 0051e800
    CALL dword ptr [EAX + 0x1c]         ; 0051e804
    MOV ECX,0x6                         ; 0051e807
    ADD ESP,0x4                         ; 0051e80c
    LEA EAX,[ESP + 0xe0]                ; 0051e80f
    LEA ESI,[ESP + 0x48]                ; 0051e816
    PUSH EAX                            ; 0051e81a
    MOVSD.REP ES:EDI,ESI                ; 0051e81b
    LEA EAX,[ESP + 0x40]                ; 0051e81d
    MOV ESI,0x3f000000                  ; 0051e821
    PUSH EAX                            ; 0051e826
    LEA EAX,[ESP + 0x38]                ; 0051e827
    MOV dword ptr [ESP + 0xe8],ESI      ; 0051e82b
    PUSH EAX                            ; 0051e832
    LEA ESI,[ESP + 0x6c]                ; 0051e833
    LEA EDI,[ESP + 0xc0]                ; 0051e837
    CALL core_bodypart.cpp_FUN_0041b020 ; 0051e83e
        ;   XREF to: 0041b020 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_0041b020()
    LEA ESI,[ESP + 0x6c]                ; 0051e843
    ADD ESP,0x8                         ; 0051e847
    LEA EAX,[ESP + 0xb8]                ; 0051e84a
    MOVSD ES:EDI,ESI                    ; 0051e851
    MOVSD ES:EDI,ESI                    ; 0051e852
    MOVSD ES:EDI,ESI                    ; 0051e853
    PUSH EAX                            ; 0051e854
    LEA ESI,[ESP + 0xb0]                ; 0051e855
    LEA EDI,[ESP + 0x74]                ; 0051e85c
    CALL core_bodypart.cpp_FUN_0041afa0 ; 0051e860
        ;   XREF to: 0041afa0 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_0041afa0()
    LEA ESI,[ESP + 0xb0]                ; 0051e865
    ADD ESP,0x8                         ; 0051e86c
    LEA EAX,[ESP + 0xcc]                ; 0051e86f
    FLD float ptr [ESP + 0x38]          ; 0051e876
    MOVSD ES:EDI,ESI                    ; 0051e87a
    MOVSD ES:EDI,ESI                    ; 0051e87b
    MOVSD ES:EDI,ESI                    ; 0051e87c
    PUSH EAX                            ; 0051e87d
    LEA EDI,[ESP + 0xd0]                ; 0051e87e
    FADD double ptr [0x005e9e92]        ; 0051e885 | DAT_005e9e92
    LEA ESI,[ESP + 0x70]                ; 0051e88b
    FSTP float ptr [ESP + 0x78]         ; 0051e88f
    MOVSD ES:EDI,ESI                    ; 0051e893
    MOVSD ES:EDI,ESI                    ; 0051e894
    MOVSD ES:EDI,ESI                    ; 0051e895
    PUSH EBX                            ; 0051e896
    LEA ESI,[ESP + 0xc8]                ; 0051e897
    CALL core_actor.cpp_FUN_00408b40    ; 0051e89e
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0051e8a3
    LEA EDI,[ESP + 0x90]                ; 0051e8a6
    PUSH 0x3d0efa35                     ; 0051e8ad
    XOR EAX,EAX                         ; 0051e8b2
    PUSH 0x3e99999a                     ; 0051e8b4
    MOV dword ptr [ESP + 0x90],EAX      ; 0051e8b9
    MOV dword ptr [ESP + 0x94],EAX      ; 0051e8c0
    LEA EAX,[ESP + 0x8c]                ; 0051e8c7
    LEA ESI,[ESP + 0xc8]                ; 0051e8ce
    PUSH EAX                            ; 0051e8d5
    XOR EDX,EDX                         ; 0051e8d6
    LEA EAX,[ESP + 0x9c]                ; 0051e8d8
    PUSH EDX                            ; 0051e8df
    MOVSD ES:EDI,ESI                    ; 0051e8e0
    MOVSD ES:EDI,ESI                    ; 0051e8e1
    MOVSD ES:EDI,ESI                    ; 0051e8e2
    PUSH EAX                            ; 0051e8e3
    MOV ECX,dword ptr [EBP + 0x14]      ; 0051e8e4
    MOV EDI,0x3fc00000                  ; 0051e8e7
    PUSH ECX                            ; 0051e8ec
    MOV dword ptr [ESP + 0x9c],EDI      ; 0051e8ed
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 0051e8f4
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0051e8f9
    MOV ESI,EAX                         ; 0051e8fc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051e8fe
        ;   Label: LAB_0051e8fe
    ADD EAX,0x158                       ; 0051e901
    TEST ESI,ESI                        ; 0051e906
    JL 0x0051e93d                       ; 0051e908
        ;   XREF to: 0051e93d (CONDITIONAL_JUMP)  ; LAB_0051e93d
    JG 0x0051e96a                       ; 0051e90a
        ;   XREF to: 0051e96a (CONDITIONAL_JUMP)  ; LAB_0051e96a
    MOV EAX,0x1                         ; 0051e90c
    JMP 0x0051e963                      ; 0051e911
        ;   XREF to: 0051e963 (UNCONDITIONAL_JUMP)  ; LAB_0051e963
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051e913
        ;   Label: LAB_0051e913
    PUSH 0x1                            ; 0051e916
    ADD EAX,0x158                       ; 0051e918
    PUSH 0x1                            ; 0051e91d
    MOV dword ptr [EAX + 0xc11c],EDI    ; 0051e91f
    PUSH EAX                            ; 0051e925
    MOV dword ptr [EAX + 0xc118],EDI    ; 0051e926
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0051e92c
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051e931
    XOR EAX,EAX                         ; 0051e934
    MOV ESP,EBP                         ; 0051e936
    POP EBP                             ; 0051e938
    POP EDI                             ; 0051e939
    POP ESI                             ; 0051e93a
    POP EBX                             ; 0051e93b
    RET                                 ; 0051e93c
    PUSH 0x1                            ; 0051e93d
        ;   Label: LAB_0051e93d
    MOV EBX,dword ptr [EBP + 0x14]      ; 0051e93f
    PUSH 0x1                            ; 0051e942
    MOV dword ptr [EBX + 0xc274],0x0    ; 0051e944
    PUSH EAX                            ; 0051e94e
    MOV dword ptr [EBX + 0xc270],0x41a00000 ; 0051e94f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0051e959
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051e95e
    XOR EAX,EAX                         ; 0051e961
        ;   Label: LAB_0051e961
    MOV ESP,EBP                         ; 0051e963
        ;   Label: LAB_0051e963
    POP EBP                             ; 0051e965
    POP EDI                             ; 0051e966
    POP ESI                             ; 0051e967
    POP EBX                             ; 0051e968
    RET                                 ; 0051e969
    PUSH 0x1                            ; 0051e96a
        ;   Label: LAB_0051e96a
    PUSH 0x7                            ; 0051e96c
    PUSH EAX                            ; 0051e96e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0051e96f
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 0051e974
    ADD ESP,0xc                         ; 0051e979
    MOV ESP,EBP                         ; 0051e97c
    POP EBP                             ; 0051e97e
    POP EDI                             ; 0051e97f
    POP ESI                             ; 0051e980
    POP EBX                             ; 0051e981
    RET                                 ; 0051e982
    PUSH 0x5e9e72                       ; 0051e983 | = "CTommyGun"
        ;   Label: LAB_0051e983
    PUSH EBX                            ; 0051e988
    CALL core_actor.cpp_FUN_0040c550    ; 0051e989
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0051e98e
    TEST EAX,EAX                        ; 0051e991
    JZ 0x0051e6be                       ; 0051e993
        ;   XREF to: 0051e6be (CONDITIONAL_JUMP)  ; LAB_0051e6be
    LEA EAX,[EBX + 0x20]                ; 0051e999
    MOV ESI,dword ptr [ESP + 0xe8]      ; 0051e99c
    LEA EDI,[ESP + 0x78]                ; 0051e9a3
    FLD float ptr [EAX]                 ; 0051e9a7
    FLD float ptr [EAX + 0x4]           ; 0051e9a9
    FLD float ptr [EAX + 0x8]           ; 0051e9ac
    FXCH ST2                            ; 0051e9af
    FSUB float ptr [ESI]                ; 0051e9b1
    FXCH                                ; 0051e9b3
    FSUB float ptr [ESI + 0x4]          ; 0051e9b5
    FXCH ST2                            ; 0051e9b8
    FSUB float ptr [ESI + 0x8]          ; 0051e9ba
    FXCH                                ; 0051e9bd
    FSTP float ptr [ESP + 0x9c]         ; 0051e9bf
    FXCH                                ; 0051e9c6
    FSTP float ptr [ESP + 0xa0]         ; 0051e9c8
    LEA ESI,[ESP + 0x9c]                ; 0051e9cf
    FSTP float ptr [ESP + 0xa4]         ; 0051e9d6
    MOVSD ES:EDI,ESI                    ; 0051e9dd
    MOVSD ES:EDI,ESI                    ; 0051e9de
    MOVSD ES:EDI,ESI                    ; 0051e9df
    FLD float ptr [ESP + 0x7c]          ; 0051e9e0
    FMUL ST0                            ; 0051e9e4
    FST float ptr [ESP + 0x7c]          ; 0051e9e6
    FMUL float ptr [ESP + 0x7c]         ; 0051e9ea
    FST float ptr [ESP + 0x7c]          ; 0051e9ee
    FMUL float ptr [ESP + 0x7c]         ; 0051e9f2
    FLD float ptr [ESP + 0x78]          ; 0051e9f6
    FMUL ST0                            ; 0051e9fa
    FADDP                               ; 0051e9fc
    FLD float ptr [ESP + 0x80]          ; 0051e9fe
    FMUL ST0                            ; 0051ea05
    FADDP                               ; 0051ea07
    FSQRT                               ; 0051ea09
    FST float ptr [ESP]                 ; 0051ea0b
    FCOMP double ptr [0x005e9e8a]       ; 0051ea0e | DAT_005e9e8a
    FNSTSW AX                           ; 0051ea14
    SAHF                                ; 0051ea16
    JC 0x0051e6be                       ; 0051ea17
        ;   XREF to: 0051e6be (CONDITIONAL_JUMP)  ; LAB_0051e6be
    CMP dword ptr [ESP],0x41700000      ; 0051ea1d
    JG 0x0051e6be                       ; 0051ea24
        ;   XREF to: 0051e6be (CONDITIONAL_JUMP)  ; LAB_0051e6be
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0051ea2a
    MOV dword ptr [ESP + EAX*0x1 + 0x8],EBX ; 0051ea31
    MOV EBX,dword ptr [ESP + 0xe4]      ; 0051ea35
    LEA ECX,[EAX + 0x4]                 ; 0051ea3c
    INC EBX                             ; 0051ea3f
    MOV dword ptr [ESP + 0xf4],ECX      ; 0051ea40
    MOV dword ptr [ESP + 0xe4],EBX      ; 0051ea47
    CMP ECX,0x28                        ; 0051ea4e
    JL 0x0051e6be                       ; 0051ea51
        ;   XREF to: 0051e6be (CONDITIONAL_JUMP)  ; LAB_0051e6be
    MOV EDI,dword ptr [ESP + 0xe4]      ; 0051ea57
        ;   Label: LAB_0051ea57
    CMP EDI,0x1                         ; 0051ea5e
    JL 0x0051e961                       ; 0051ea61
        ;   XREF to: 0051e961 (CONDITIONAL_JUMP)  ; LAB_0051e961
    LEA EAX,[EDI + -0x1]                ; 0051ea67
    PUSH EAX                            ; 0051ea6a
    PUSH 0x0                            ; 0051ea6b
    CALL core_actor.cpp_FUN_0040cc60    ; 0051ea6d
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0051ea72
    MOV EBX,dword ptr [EBP + 0x14]      ; 0051ea75
    PUSH 0x1                            ; 0051ea78
    MOV EAX,dword ptr [ESP + EAX*0x4 + 0xc] ; 0051ea7a
    MOV dword ptr [EBX + 0xc270],0xc2200000 ; 0051ea7e
    PUSH 0x1                            ; 0051ea88
    MOV EDX,dword ptr [EBX + 0xc268]    ; 0051ea8a
    MOV dword ptr [EBX + 0xc274],EAX    ; 0051ea90
    LEA EAX,[EBX + 0x158]               ; 0051ea96
    INC EDX                             ; 0051ea9c
    PUSH EAX                            ; 0051ea9d
    MOV dword ptr [EBX + 0xc268],EDX    ; 0051ea9e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0051eaa4
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 0051eaa9
    ADD ESP,0xc                         ; 0051eaae
    MOV ESP,EBP                         ; 0051eab1
    POP EBP                             ; 0051eab3
    POP EDI                             ; 0051eab4
    POP ESI                             ; 0051eab5
    POP EBX                             ; 0051eab6
    RET                                 ; 0051eab7

