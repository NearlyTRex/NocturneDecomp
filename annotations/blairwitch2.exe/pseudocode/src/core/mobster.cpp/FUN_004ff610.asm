; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mobster_cpp_FUN_004ff610(CMobster *this_ptr,float delta_time)
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
;   core_mobster.cpp_FUN_004fde80 at 004febc8
;
; Referenced Globals:
;   undefined4 s_CTommyGun_005dee24+1
;   undefined4 DAT_005dee35
;   undefined4 DAT_005dee3d
;   undefined4 DAT_005dee45
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CDemonSetInstance.field1364324_0x14d164
;   undefined4 g_CDemonSetInstance.field1364328_0x14d168
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_0040c840
;   core_actor.cpp_FUN_0040cf60
;   core_actor.cpp_FUN_0040cfc0
;   core_bodypart.cpp_FUN_00417b20
;   core_bodypart.cpp_FUN_00417ba0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ff610
        ;   Label: core_mobster.cpp_FUN_004ff610
    PUSH ESI                            ; 004ff611
    PUSH EDI                            ; 004ff612
    PUSH EBP                            ; 004ff613
    MOV EBP,ESP                         ; 004ff614
    SUB ESP,0xfc                        ; 004ff616
    AND ESP,0xfffffff8                  ; 004ff61c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ff61f
    CMP dword ptr [EAX + 0x10a6c],0x0   ; 004ff622
    JNZ 0x004ff9a1                      ; 004ff629
        ;   XREF to: 004ff9a1 (CONDITIONAL_JUMP)  ; LAB_004ff9a1
    FLD float ptr [EAX + 0x10afc]       ; 004ff62f
    FSUB float ptr [EBP + 0x18]         ; 004ff635
    FST float ptr [EAX + 0x10afc]       ; 004ff638
    FLDZ                                ; 004ff63e
    FCOMPP                              ; 004ff640
    FNSTSW AX                           ; 004ff642
    SAHF                                ; 004ff644
    JC 0x004ff720                       ; 004ff645
        ;   XREF to: 004ff720 (CONDITIONAL_JUMP)  ; LAB_004ff720
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ff64b
        ;   Label: LAB_004ff64b
    MOV EAX,dword ptr [EAX + 0x2694]    ; 004ff64e
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ff654
    SHL EAX,0x2                         ; 004ff657
    ADD EAX,EBX                         ; 004ff65a
    CMP dword ptr [EAX + 0x23f4],0x0    ; 004ff65c
    JZ 0x004ff9a1                       ; 004ff663
        ;   XREF to: 004ff9a1 (CONDITIONAL_JUMP)  ; LAB_004ff9a1
    MOV EDI,dword ptr [EBX + 0x2698]    ; 004ff669
    TEST EDI,EDI                        ; 004ff66f
    JNZ 0x004ff9a1                      ; 004ff671
        ;   XREF to: 004ff9a1 (CONDITIONAL_JUMP)  ; LAB_004ff9a1
    FLD float ptr [EBX + 0x10b00]       ; 004ff677
    FLDZ                                ; 004ff67d
    FCOMPP                              ; 004ff67f
    FNSTSW AX                           ; 004ff681
    SAHF                                ; 004ff683
    JC 0x004ff75e                       ; 004ff684
        ;   XREF to: 004ff75e (CONDITIONAL_JUMP)  ; LAB_004ff75e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ff68a
    MOV EDX,dword ptr [EAX + 0x10b04]   ; 004ff68d
    ADD EBX,0x20                        ; 004ff693
    TEST EDX,EDX                        ; 004ff696
    JNZ 0x004ff789                      ; 004ff698
        ;   XREF to: 004ff789 (CONDITIONAL_JUMP)  ; LAB_004ff789
    MOV dword ptr [ESP + 0xe4],EDI      ; 004ff69e
    MOV dword ptr [ESP + 0xec],EDI      ; 004ff6a5
    MOV dword ptr [ESP + 0xe8],EBX      ; 004ff6ac
    MOV dword ptr [ESP + 0xf0],EDI      ; 004ff6b3
    MOV dword ptr [ESP + 0xf4],EDI      ; 004ff6ba
    MOV EAX,[0x0061b5a8]                ; 004ff6c1 | g_CDemonSetPtr
        ;   Label: LAB_004ff6c1
    MOV EBX,dword ptr [ESP + 0xec]      ; 004ff6c6
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 004ff6cd | g_CDemonSetInstance.field1364324_0x14d164
    JGE 0x004ffa97                      ; 004ff6d3
        ;   XREF to: 004ffa97 (CONDITIONAL_JUMP)  ; LAB_004ffa97
    ADD EAX,dword ptr [ESP + 0xf0]      ; 004ff6d9
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 004ff6e0 | g_CDemonSetInstance.field1364328_0x14d168
    PUSH EBX                            ; 004ff6e6
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004ff6e7
    CALL dword ptr [EAX + 0x9c]         ; 004ff6ed
    ADD ESP,0x4                         ; 004ff6f3
    TEST EAX,EAX                        ; 004ff6f6
    JZ 0x004ff9c3                       ; 004ff6f8
        ;   XREF to: 004ff9c3 (CONDITIONAL_JUMP)  ; LAB_004ff9c3
    MOV EBX,dword ptr [ESP + 0xec]      ; 004ff6fe
        ;   Label: LAB_004ff6fe
    MOV ECX,dword ptr [ESP + 0xf0]      ; 004ff705
    INC EBX                             ; 004ff70c
    ADD ECX,0x4                         ; 004ff70d
    MOV dword ptr [ESP + 0xec],EBX      ; 004ff710
    MOV dword ptr [ESP + 0xf0],ECX      ; 004ff717
    JMP 0x004ff6c1                      ; 004ff71e
        ;   XREF to: 004ff6c1 (UNCONDITIONAL_JUMP)  ; LAB_004ff6c1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ff720
        ;   Label: LAB_004ff720
    MOV ECX,dword ptr [EAX + 0x10af8]   ; 004ff723
    PUSH 0x41200000                     ; 004ff729
    INC ECX                             ; 004ff72e
    PUSH 0x40a00000                     ; 004ff72f
    MOV dword ptr [EAX + 0x10af8],ECX   ; 004ff734
    CALL core_actor.cpp_FUN_0040cf60    ; 004ff73a
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0x100],EAX     ; 004ff73f
    FLD float ptr [ESP + 0x100]         ; 004ff746
    ADD ESP,0x8                         ; 004ff74d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ff750
    FSTP float ptr [EAX + 0x10afc]      ; 004ff753
    JMP 0x004ff64b                      ; 004ff759
        ;   XREF to: 004ff64b (UNCONDITIONAL_JUMP)  ; LAB_004ff64b
    FLD float ptr [EBX + 0x10b00]       ; 004ff75e
        ;   Label: LAB_004ff75e
    FSUB float ptr [EBP + 0x18]         ; 004ff764
    FST float ptr [EBX + 0x10b00]       ; 004ff767
    FLDZ                                ; 004ff76d
    FCOMPP                              ; 004ff76f
    FNSTSW AX                           ; 004ff771
    SAHF                                ; 004ff773
    JBE 0x004ff9a1                      ; 004ff774
        ;   XREF to: 004ff9a1 (CONDITIONAL_JUMP)  ; LAB_004ff9a1
    MOV dword ptr [EBX + 0x10b00],EDI   ; 004ff77a
    XOR EAX,EAX                         ; 004ff780
    MOV ESP,EBP                         ; 004ff782
    POP EBP                             ; 004ff784
    POP EDI                             ; 004ff785
    POP ESI                             ; 004ff786
    POP EBX                             ; 004ff787
    RET                                 ; 004ff788
    PUSH EDX                            ; 004ff789
        ;   Label: LAB_004ff789
    MOV ESI,dword ptr [EDX + 0x2b0]     ; 004ff78a
    CALL dword ptr [ESI + 0x9c]         ; 004ff790
    ADD ESP,0x4                         ; 004ff796
    TEST EAX,EAX                        ; 004ff799
    JNZ 0x004ff953                      ; 004ff79b
        ;   XREF to: 004ff953 (CONDITIONAL_JUMP)  ; LAB_004ff953
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ff7a1
    MOV EAX,dword ptr [EAX + 0x10b04]   ; 004ff7a4
    FLD float ptr [EBX]                 ; 004ff7aa
    FSUB float ptr [EAX + 0x20]         ; 004ff7ac
    FMUL ST0                            ; 004ff7af
    FLD float ptr [EBX + 0x8]           ; 004ff7b1
    FSUB float ptr [EAX + 0x28]         ; 004ff7b4
    FMUL ST0                            ; 004ff7b7
    FADDP                               ; 004ff7b9
    FSQRT                               ; 004ff7bb
    FMUL double ptr [0x005dee35]        ; 004ff7bd | DAT_005dee35
    FSUBR double ptr [0x005dee3d]       ; 004ff7c3 | DAT_005dee3d
    FST float ptr [ESP + 0x4]           ; 004ff7c9
    FLD1                                ; 004ff7cd
    FCOMPP                              ; 004ff7cf
    FNSTSW AX                           ; 004ff7d1
    SAHF                                ; 004ff7d3
    JBE 0x004ff7de                      ; 004ff7d4
        ;   XREF to: 004ff7de (CONDITIONAL_JUMP)  ; LAB_004ff7de
    MOV dword ptr [ESP + 0x4],0x3f800000 ; 004ff7d6
    FLD float ptr [EBP + 0x18]          ; 004ff7de
        ;   Label: LAB_004ff7de
    FMUL float ptr [ESP + 0x4]          ; 004ff7e1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ff7e5
    FADD float ptr [EAX + 0x10b00]      ; 004ff7e8
    MOV ESI,0xffffffff                  ; 004ff7ee
    FST float ptr [EAX + 0x10b00]       ; 004ff7f3
    FLDZ                                ; 004ff7f9
    FCOMPP                              ; 004ff7fb
    FNSTSW AX                           ; 004ff7fd
    SAHF                                ; 004ff7ff
    JBE 0x004ff93e                      ; 004ff800
        ;   XREF to: 004ff93e (CONDITIONAL_JUMP)  ; LAB_004ff93e
    MOV ECX,dword ptr [EBP + 0x14]      ; 004ff806
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ff809
    PUSH ECX                            ; 004ff80c
    MOV EAX,dword ptr [EAX + 0x10b04]   ; 004ff80d
    PUSH EAX                            ; 004ff813
    MOV EBX,dword ptr [EAX + 0x2b0]     ; 004ff814
    CALL dword ptr [EBX + 0x8c]         ; 004ff81a
    ADD ESP,0x8                         ; 004ff820
    CMP EAX,0x3                         ; 004ff823
    JNZ 0x004ff93e                      ; 004ff826
        ;   XREF to: 004ff93e (CONDITIONAL_JUMP)  ; LAB_004ff93e
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ff82c
    MOV EBX,dword ptr [EBX + 0x10b04]   ; 004ff82f
    PUSH EBX                            ; 004ff835
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004ff836
    LEA ESI,[ESP + 0x4c]                ; 004ff83c
    LEA EDI,[ESP + 0x34]                ; 004ff840
    CALL dword ptr [EAX + 0x24]         ; 004ff844
    MOV ECX,0x6                         ; 004ff847
    ADD ESP,0x4                         ; 004ff84c
    LEA EAX,[ESP + 0xe0]                ; 004ff84f
    LEA ESI,[ESP + 0x48]                ; 004ff856
    PUSH EAX                            ; 004ff85a
    MOVSD.REP ES:EDI,ESI                ; 004ff85b
    LEA EAX,[ESP + 0x40]                ; 004ff85d
    MOV ESI,0x3f000000                  ; 004ff861
    PUSH EAX                            ; 004ff866
    LEA EAX,[ESP + 0x38]                ; 004ff867
    MOV dword ptr [ESP + 0xe8],ESI      ; 004ff86b
    PUSH EAX                            ; 004ff872
    LEA ESI,[ESP + 0x6c]                ; 004ff873
    LEA EDI,[ESP + 0xc0]                ; 004ff877
    CALL core_bodypart.cpp_FUN_00417ba0 ; 004ff87e
        ;   XREF to: 00417ba0 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_00417ba0()
    LEA ESI,[ESP + 0x6c]                ; 004ff883
    ADD ESP,0x8                         ; 004ff887
    LEA EAX,[ESP + 0xb8]                ; 004ff88a
    MOVSD ES:EDI,ESI                    ; 004ff891
    MOVSD ES:EDI,ESI                    ; 004ff892
    MOVSD ES:EDI,ESI                    ; 004ff893
    PUSH EAX                            ; 004ff894
    LEA ESI,[ESP + 0xb0]                ; 004ff895
    LEA EDI,[ESP + 0x74]                ; 004ff89c
    CALL core_bodypart.cpp_FUN_00417b20 ; 004ff8a0
        ;   XREF to: 00417b20 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_00417b20()
    LEA ESI,[ESP + 0xb0]                ; 004ff8a5
    ADD ESP,0x8                         ; 004ff8ac
    LEA EAX,[ESP + 0xcc]                ; 004ff8af
    FLD float ptr [ESP + 0x38]          ; 004ff8b6
    MOVSD ES:EDI,ESI                    ; 004ff8ba
    MOVSD ES:EDI,ESI                    ; 004ff8bb
    MOVSD ES:EDI,ESI                    ; 004ff8bc
    PUSH EAX                            ; 004ff8bd
    LEA EDI,[ESP + 0xd0]                ; 004ff8be
    FADD double ptr [0x005dee45]        ; 004ff8c5 | DAT_005dee45
    LEA ESI,[ESP + 0x70]                ; 004ff8cb
    FSTP float ptr [ESP + 0x78]         ; 004ff8cf
    MOVSD ES:EDI,ESI                    ; 004ff8d3
    MOVSD ES:EDI,ESI                    ; 004ff8d4
    MOVSD ES:EDI,ESI                    ; 004ff8d5
    PUSH EBX                            ; 004ff8d6
    LEA ESI,[ESP + 0xc8]                ; 004ff8d7
    CALL core_actor.cpp_FUN_00408d70    ; 004ff8de
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004ff8e3
    LEA EDI,[ESP + 0x90]                ; 004ff8e6
    PUSH 0x3d0efa35                     ; 004ff8ed
    XOR EAX,EAX                         ; 004ff8f2
    PUSH 0x3e99999a                     ; 004ff8f4
    MOV dword ptr [ESP + 0x90],EAX      ; 004ff8f9
    MOV dword ptr [ESP + 0x94],EAX      ; 004ff900
    LEA EAX,[ESP + 0x8c]                ; 004ff907
    LEA ESI,[ESP + 0xc8]                ; 004ff90e
    PUSH EAX                            ; 004ff915
    XOR EDX,EDX                         ; 004ff916
    LEA EAX,[ESP + 0x9c]                ; 004ff918
    PUSH EDX                            ; 004ff91f
    MOVSD ES:EDI,ESI                    ; 004ff920
    MOVSD ES:EDI,ESI                    ; 004ff921
    MOVSD ES:EDI,ESI                    ; 004ff922
    PUSH EAX                            ; 004ff923
    MOV ECX,dword ptr [EBP + 0x14]      ; 004ff924
    MOV EDI,0x3fc00000                  ; 004ff927
    PUSH ECX                            ; 004ff92c
    MOV dword ptr [ESP + 0x9c],EDI      ; 004ff92d
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 004ff934
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004ff939
    MOV ESI,EAX                         ; 004ff93c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ff93e
        ;   Label: LAB_004ff93e
    ADD EAX,0x2b4                       ; 004ff941
    TEST ESI,ESI                        ; 004ff946
    JL 0x004ff97d                       ; 004ff948
        ;   XREF to: 004ff97d (CONDITIONAL_JUMP)  ; LAB_004ff97d
    JG 0x004ff9aa                       ; 004ff94a
        ;   XREF to: 004ff9aa (CONDITIONAL_JUMP)  ; LAB_004ff9aa
    MOV EAX,0x1                         ; 004ff94c
    JMP 0x004ff9a3                      ; 004ff951
        ;   XREF to: 004ff9a3 (UNCONDITIONAL_JUMP)  ; LAB_004ff9a3
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ff953
        ;   Label: LAB_004ff953
    PUSH 0x1                            ; 004ff956
    ADD EAX,0x2b4                       ; 004ff958
    PUSH 0x1                            ; 004ff95d
    MOV dword ptr [EAX + 0x10850],EDI   ; 004ff95f
    PUSH EAX                            ; 004ff965
    MOV dword ptr [EAX + 0x1084c],EDI   ; 004ff966
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004ff96c
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004ff971
    XOR EAX,EAX                         ; 004ff974
    MOV ESP,EBP                         ; 004ff976
    POP EBP                             ; 004ff978
    POP EDI                             ; 004ff979
    POP ESI                             ; 004ff97a
    POP EBX                             ; 004ff97b
    RET                                 ; 004ff97c
    PUSH 0x1                            ; 004ff97d
        ;   Label: LAB_004ff97d
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ff97f
    PUSH 0x1                            ; 004ff982
    MOV dword ptr [EBX + 0x10b04],0x0   ; 004ff984
    PUSH EAX                            ; 004ff98e
    MOV dword ptr [EBX + 0x10b00],0x41a00000 ; 004ff98f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004ff999
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004ff99e
    XOR EAX,EAX                         ; 004ff9a1
        ;   Label: LAB_004ff9a1
    MOV ESP,EBP                         ; 004ff9a3
        ;   Label: LAB_004ff9a3
    POP EBP                             ; 004ff9a5
    POP EDI                             ; 004ff9a6
    POP ESI                             ; 004ff9a7
    POP EBX                             ; 004ff9a8
    RET                                 ; 004ff9a9
    PUSH 0x1                            ; 004ff9aa
        ;   Label: LAB_004ff9aa
    PUSH 0x7                            ; 004ff9ac
    PUSH EAX                            ; 004ff9ae
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004ff9af
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 004ff9b4
    ADD ESP,0xc                         ; 004ff9b9
    MOV ESP,EBP                         ; 004ff9bc
    POP EBP                             ; 004ff9be
    POP EDI                             ; 004ff9bf
    POP ESI                             ; 004ff9c0
    POP EBX                             ; 004ff9c1
    RET                                 ; 004ff9c2
    PUSH 0x5dee25                       ; 004ff9c3 | s_CTommyGun_005dee24+1
        ;   Label: LAB_004ff9c3
    PUSH EBX                            ; 004ff9c8
    CALL core_actor.cpp_FUN_0040c840    ; 004ff9c9
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004ff9ce
    TEST EAX,EAX                        ; 004ff9d1
    JZ 0x004ff6fe                       ; 004ff9d3
        ;   XREF to: 004ff6fe (CONDITIONAL_JUMP)  ; LAB_004ff6fe
    LEA EAX,[EBX + 0x20]                ; 004ff9d9
    MOV ESI,dword ptr [ESP + 0xe8]      ; 004ff9dc
    LEA EDI,[ESP + 0x78]                ; 004ff9e3
    FLD float ptr [EAX]                 ; 004ff9e7
    FLD float ptr [EAX + 0x4]           ; 004ff9e9
    FLD float ptr [EAX + 0x8]           ; 004ff9ec
    FXCH ST2                            ; 004ff9ef
    FSUB float ptr [ESI]                ; 004ff9f1
    FXCH                                ; 004ff9f3
    FSUB float ptr [ESI + 0x4]          ; 004ff9f5
    FXCH ST2                            ; 004ff9f8
    FSUB float ptr [ESI + 0x8]          ; 004ff9fa
    FXCH                                ; 004ff9fd
    FSTP float ptr [ESP + 0x9c]         ; 004ff9ff
    FXCH                                ; 004ffa06
    FSTP float ptr [ESP + 0xa0]         ; 004ffa08
    LEA ESI,[ESP + 0x9c]                ; 004ffa0f
    FSTP float ptr [ESP + 0xa4]         ; 004ffa16
    MOVSD ES:EDI,ESI                    ; 004ffa1d
    MOVSD ES:EDI,ESI                    ; 004ffa1e
    MOVSD ES:EDI,ESI                    ; 004ffa1f
    FLD float ptr [ESP + 0x7c]          ; 004ffa20
    FMUL ST0                            ; 004ffa24
    FST float ptr [ESP + 0x7c]          ; 004ffa26
    FMUL float ptr [ESP + 0x7c]         ; 004ffa2a
    FST float ptr [ESP + 0x7c]          ; 004ffa2e
    FMUL float ptr [ESP + 0x7c]         ; 004ffa32
    FLD float ptr [ESP + 0x78]          ; 004ffa36
    FMUL ST0                            ; 004ffa3a
    FADDP                               ; 004ffa3c
    FLD float ptr [ESP + 0x80]          ; 004ffa3e
    FMUL ST0                            ; 004ffa45
    FADDP                               ; 004ffa47
    FSQRT                               ; 004ffa49
    FST float ptr [ESP]                 ; 004ffa4b
    FCOMP double ptr [0x005dee3d]       ; 004ffa4e | DAT_005dee3d
    FNSTSW AX                           ; 004ffa54
    SAHF                                ; 004ffa56
    JC 0x004ff6fe                       ; 004ffa57
        ;   XREF to: 004ff6fe (CONDITIONAL_JUMP)  ; LAB_004ff6fe
    CMP dword ptr [ESP],0x41700000      ; 004ffa5d
    JG 0x004ff6fe                       ; 004ffa64
        ;   XREF to: 004ff6fe (CONDITIONAL_JUMP)  ; LAB_004ff6fe
    MOV EAX,dword ptr [ESP + 0xf4]      ; 004ffa6a
    MOV dword ptr [ESP + EAX*0x1 + 0x8],EBX ; 004ffa71
    MOV EBX,dword ptr [ESP + 0xe4]      ; 004ffa75
    LEA ECX,[EAX + 0x4]                 ; 004ffa7c
    INC EBX                             ; 004ffa7f
    MOV dword ptr [ESP + 0xf4],ECX      ; 004ffa80
    MOV dword ptr [ESP + 0xe4],EBX      ; 004ffa87
    CMP ECX,0x28                        ; 004ffa8e
    JL 0x004ff6fe                       ; 004ffa91
        ;   XREF to: 004ff6fe (CONDITIONAL_JUMP)  ; LAB_004ff6fe
    MOV EDI,dword ptr [ESP + 0xe4]      ; 004ffa97
        ;   Label: LAB_004ffa97
    CMP EDI,0x1                         ; 004ffa9e
    JL 0x004ff9a1                       ; 004ffaa1
        ;   XREF to: 004ff9a1 (CONDITIONAL_JUMP)  ; LAB_004ff9a1
    LEA EAX,[EDI + -0x1]                ; 004ffaa7
    PUSH EAX                            ; 004ffaaa
    PUSH 0x0                            ; 004ffaab
    CALL core_actor.cpp_FUN_0040cfc0    ; 004ffaad
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 004ffab2
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ffab5
    PUSH 0x1                            ; 004ffab8
    MOV EAX,dword ptr [ESP + EAX*0x4 + 0xc] ; 004ffaba
    MOV dword ptr [EBX + 0x10b00],0xc2200000 ; 004ffabe
    PUSH 0x1                            ; 004ffac8
    MOV EDX,dword ptr [EBX + 0x10af8]   ; 004ffaca
    MOV dword ptr [EBX + 0x10b04],EAX   ; 004ffad0
    LEA EAX,[EBX + 0x2b4]               ; 004ffad6
    INC EDX                             ; 004ffadc
    PUSH EAX                            ; 004ffadd
    MOV dword ptr [EBX + 0x10af8],EDX   ; 004ffade
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004ffae4
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 004ffae9
    ADD ESP,0xc                         ; 004ffaee
    MOV ESP,EBP                         ; 004ffaf1
    POP EBP                             ; 004ffaf3
    POP EDI                             ; 004ffaf4
    POP ESI                             ; 004ffaf5
    POP EBX                             ; 004ffaf6
    RET                                 ; 004ffaf7

