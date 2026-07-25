; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_curtain_cpp_CCurtain_archive_FUN_0043f6b0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   TerminatedCString s_curtainSize_0057b54e
;   TerminatedCString s_curtainTexture_0057b55a
;   TerminatedCString s_opacity_0057b569
;   TerminatedCString s_cinched_0057b571
;   TerminatedCString s_weight_0057b579
;   TerminatedCString s_dampen_0057b580
;   TerminatedCString s_spring_0057b587
;   TerminatedCString s_friction_0057b58e
;   TerminatedCString s_gravity_0057b597
;   TerminatedCString s_hitFloor_0057b59f
;   TerminatedCString s_simulateMe_0057b5a8
;   TerminatedCString s_cinchedTop_0057b5b3
;   TerminatedCString s_cinchedBottom_0057b5be
;   TerminatedCString s_cinchedLeft_0057b5cc
;   TerminatedCString s_cinchedRight_0057b5d8
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_actor.cpp_archiveVector_FUN_0040c450
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043f6b0
        ;   Label: core_curtain.cpp_CCurtain_archive_FUN_0043f6b0
    SUB ESP,0x4                         ; 0043f6b1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0043f6b4
    PUSH EBX                            ; 0043f6b8
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 0043f6b9
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_archive_FUN_0040d2d0()
    ADD ESP,0x4                         ; 0043f6be
    PUSH 0x57b54e                       ; 0043f6c1 | = "curtainSize"
    LEA EAX,[EBX + 0x150]               ; 0043f6c6
    PUSH EAX                            ; 0043f6cc
    CALL core_actor.cpp_archiveVector_FUN_0040c450 ; 0043f6cd
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040c450()
    ADD ESP,0x8                         ; 0043f6d2
    PUSH 0x57b55a                       ; 0043f6d5 | = "curtainTexture"
    LEA EAX,[EBX + 0x164]               ; 0043f6da
    PUSH EAX                            ; 0043f6e0
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0043f6e1
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 0043f6e6
    PUSH 0x57b569                       ; 0043f6e9 | = "opacity"
    LEA EAX,[EBX + 0x174]               ; 0043f6ee
    PUSH EAX                            ; 0043f6f4
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0043f6f5
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 0043f6fa
    XOR EDX,EDX                         ; 0043f6fd
    MOV ECX,dword ptr [0x005ad3f0]      ; 0043f6ff | INT_005ad3f0
    MOV dword ptr [ESP],EDX             ; 0043f705
    CMP ECX,0x2                         ; 0043f708
    JL 0x0043f7e8                       ; 0043f70b
        ;   XREF to: 0043f7e8 (CONDITIONAL_JUMP)  ; LAB_0043f7e8
    CMP ECX,0x4                         ; 0043f711
    JGE 0x0043f770                      ; 0043f714
        ;   XREF to: 0043f770 (CONDITIONAL_JUMP)  ; LAB_0043f770
    PUSH 0x57b571                       ; 0043f716 | = "cinched"
    LEA EAX,[ESP + 0x4]                 ; 0043f71b
    PUSH EAX                            ; 0043f71f
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0043f720
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 0043f725
    TEST byte ptr [ESP],0x1             ; 0043f728
    SETNZ AL                            ; 0043f72c
    AND EAX,0xff                        ; 0043f72f
    MOV dword ptr [EBX + 0x178],EAX     ; 0043f734
    TEST byte ptr [ESP],0x2             ; 0043f73a
    SETNZ AL                            ; 0043f73e
    AND EAX,0xff                        ; 0043f741
    MOV dword ptr [EBX + 0x184],EAX     ; 0043f746
    TEST byte ptr [ESP],0x4             ; 0043f74c
    SETNZ AL                            ; 0043f750
    AND EAX,0xff                        ; 0043f753
    MOV dword ptr [EBX + 0x17c],EAX     ; 0043f758
    TEST byte ptr [ESP],0x8             ; 0043f75e
    SETNZ AL                            ; 0043f762
    AND EAX,0xff                        ; 0043f765
    MOV dword ptr [EBX + 0x180],EAX     ; 0043f76a
    PUSH 0x57b579                       ; 0043f770 | = "weight"
        ;   Label: LAB_0043f770
    LEA EAX,[EBX + 0x65b0c]             ; 0043f775
    PUSH EAX                            ; 0043f77b
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0043f77c
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 0043f781
    PUSH 0x57b580                       ; 0043f784 | = "dampen"
    LEA EAX,[EBX + 0x65b10]             ; 0043f789
    PUSH EAX                            ; 0043f78f
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0043f790
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 0043f795
    PUSH 0x57b587                       ; 0043f798 | = "spring"
    LEA EAX,[EBX + 0x65b14]             ; 0043f79d
    PUSH EAX                            ; 0043f7a3
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0043f7a4
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 0043f7a9
    PUSH 0x57b58e                       ; 0043f7ac | = "friction"
    LEA EAX,[EBX + 0x65b18]             ; 0043f7b1
    PUSH EAX                            ; 0043f7b7
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0043f7b8
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 0043f7bd
    PUSH 0x57b597                       ; 0043f7c0 | = "gravity"
    LEA EAX,[EBX + 0x65b1c]             ; 0043f7c5
    PUSH EAX                            ; 0043f7cb
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0043f7cc
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 0043f7d1
    PUSH 0x57b59f                       ; 0043f7d4 | = "hitFloor"
    LEA EAX,[EBX + 0x65b24]             ; 0043f7d9
    PUSH EAX                            ; 0043f7df
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0043f7e0
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 0043f7e5
    CMP dword ptr [0x005ad3f0],0x3      ; 0043f7e8 | INT_005ad3f0
        ;   Label: LAB_0043f7e8
    JL 0x0043f805                       ; 0043f7ef
        ;   XREF to: 0043f805 (CONDITIONAL_JUMP)  ; LAB_0043f805
    PUSH 0x57b5a8                       ; 0043f7f1 | = "simulateMe"
    LEA EAX,[EBX + 0x1f0]               ; 0043f7f6
    PUSH EAX                            ; 0043f7fc
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0043f7fd
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 0043f802
    CMP dword ptr [0x005ad3f0],0x4      ; 0043f805 | INT_005ad3f0
        ;   Label: LAB_0043f805
    JL 0x0043f886                       ; 0043f80c
        ;   XREF to: 0043f886 (CONDITIONAL_JUMP)  ; LAB_0043f886
    PUSH 0x57b5b3                       ; 0043f80e | = "cinchedTop"
    LEA EAX,[EBX + 0x178]               ; 0043f813
    PUSH EAX                            ; 0043f819
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0043f81a
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 0043f81f
    PUSH 0x57b5be                       ; 0043f822 | = "cinchedBottom"
    LEA EAX,[EBX + 0x184]               ; 0043f827
    PUSH EAX                            ; 0043f82d
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0043f82e
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 0043f833
    PUSH 0x57b5cc                       ; 0043f836 | = "cinchedLeft"
    LEA EAX,[EBX + 0x17c]               ; 0043f83b
    PUSH EAX                            ; 0043f841
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0043f842
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 0043f847
    PUSH 0x57b5d8                       ; 0043f84a | = "cinchedRight"
    LEA EAX,[EBX + 0x180]               ; 0043f84f
    PUSH EAX                            ; 0043f855
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0043f856
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 0043f85b
    PUSH 0x57b5e5                       ; 0043f85e | = "falling"
    LEA EAX,[EBX + 0x188]               ; 0043f863
    PUSH EAX                            ; 0043f869
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0043f86a
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 0043f86f
    PUSH 0x57b5ed                       ; 0043f872 | = "letGoEvent"
    LEA EAX,[EBX + 0x18c]               ; 0043f877
    PUSH EAX                            ; 0043f87d
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0043f87e
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 0043f883
    CMP dword ptr [0x005ad3f0],0x5      ; 0043f886 | INT_005ad3f0
        ;   Label: LAB_0043f886
    JL 0x0043f8a3                       ; 0043f88d
        ;   XREF to: 0043f8a3 (CONDITIONAL_JUMP)  ; LAB_0043f8a3
    PUSH 0x57b5f8                       ; 0043f88f | = "patchSize"
    LEA EAX,[EBX + 0x1f4]               ; 0043f894
    PUSH EAX                            ; 0043f89a
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0043f89b
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 0043f8a0
    CMP dword ptr [0x005ad3f0],0x6      ; 0043f8a3 | INT_005ad3f0
        ;   Label: LAB_0043f8a3
    JGE 0x0043f8b1                      ; 0043f8aa
        ;   XREF to: 0043f8b1 (CONDITIONAL_JUMP)  ; LAB_0043f8b1
    ADD ESP,0x4                         ; 0043f8ac
    POP EBX                             ; 0043f8af
    RET                                 ; 0043f8b0
    PUSH 0x57b602                       ; 0043f8b1 | = "blockVirtualDirectorFlag"
        ;   Label: LAB_0043f8b1
    ADD EBX,0x1f8                       ; 0043f8b6
    PUSH EBX                            ; 0043f8bc
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0043f8bd
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 0043f8c2
    ADD ESP,0x4                         ; 0043f8c5
    POP EBX                             ; 0043f8c8
    RET                                 ; 0043f8c9

