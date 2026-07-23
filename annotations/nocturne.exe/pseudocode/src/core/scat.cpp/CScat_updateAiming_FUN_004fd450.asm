; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_scat_cpp_CScat_updateAiming_FUN_004fd450(int param_1,float param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined        Stack[-0x138]:1  local_138
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_004fbf20 at 004fc246
;
; Referenced Globals:
;   double DOUBLE_0058df4e = 3.14159265350000
;   double DOUBLE_0058df56 = 2
;   float FLOAT_0058df5e = -1.570796
;   float FLOAT_0058df62 = 0.5
;   double DOUBLE_0058df66 = 1.5
;   double DOUBLE_0058df6e = 0.0200000000000000
;   undefined4 DAT_005993b0
;   undefined4 DAT_005be368
;   undefined4 DAT_01e533a0
;   undefined4 DAT_01fa3ff0
;   undefined4 DAT_01fa3ff4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;   crt_memory.c___arrinit_FUN_005644a7
;   FUN_004fda20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd450
        ;   Label: core_scat.cpp_CScat_updateAiming_FUN_004fd450
    PUSH ESI                            ; 004fd451
    PUSH EDI                            ; 004fd452
    PUSH EBP                            ; 004fd453
    MOV EBP,ESP                         ; 004fd454
    SUB ESP,0x12c                       ; 004fd456
    AND ESP,0xfffffff8                  ; 004fd45c
    MOV ESI,dword ptr [EBP + 0x14]      ; 004fd45f
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004fd462
    MOV dword ptr [ESI + 0x1fa64],0x0   ; 004fd465
    TEST EDX,EDX                        ; 004fd46f
    JZ 0x004fd646                       ; 004fd471
        ;   XREF to: 004fd646 (CONDITIONAL_JUMP)  ; LAB_004fd646
    MOV EAX,dword ptr [ESI + 0x1fa54]   ; 004fd477
        ;   Label: LAB_004fd477
    MOV dword ptr [ESP + 0x4],EAX       ; 004fd47d
    MOV EAX,dword ptr [ESI + 0x1fa58]   ; 004fd481
    MOV EBX,dword ptr [ESI + 0x1f59c]   ; 004fd487
    MOV dword ptr [ESP + 0x114],EAX     ; 004fd48d
    TEST EBX,EBX                        ; 004fd494
    JNZ 0x004fd66d                      ; 004fd496
        ;   XREF to: 004fd66d (CONDITIONAL_JUMP)  ; LAB_004fd66d
    CMP dword ptr [ESI + 0x1fa3c],0x0   ; 004fd49c
        ;   Label: LAB_004fd49c
    JNZ 0x004fd6e5                      ; 004fd4a3
        ;   XREF to: 004fd6e5 (CONDITIONAL_JUMP)  ; LAB_004fd6e5
    MOV dword ptr [ESI + 0x1fa60],0x0   ; 004fd4a9
        ;   Label: LAB_004fd4a9
    CMP dword ptr [ESI + 0xbca0],0x0    ; 004fd4b3
        ;   Label: LAB_004fd4b3
    JZ 0x004fd7b1                       ; 004fd4ba
        ;   XREF to: 004fd7b1 (CONDITIONAL_JUMP)  ; LAB_004fd7b1
    MOV EBX,dword ptr [ESI + 0x1fa60]   ; 004fd4c0
    TEST EBX,EBX                        ; 004fd4c6
    JNZ 0x004fd4ed                      ; 004fd4c8
        ;   XREF to: 004fd4ed (CONDITIONAL_JUMP)  ; LAB_004fd4ed
    MOV dword ptr [ESI + 0x1fa58],EBX   ; 004fd4ca
    MOV EAX,dword ptr [ESI + 0x1fa58]   ; 004fd4d0
    MOV dword ptr [ESI + 0x1fa54],EAX   ; 004fd4d6
    MOV EAX,dword ptr [ESI + 0x1fa54]   ; 004fd4dc
    MOV dword ptr [ESP + 0x114],EAX     ; 004fd4e2
    MOV dword ptr [ESP + 0x4],EAX       ; 004fd4e9
    FLD float ptr [ESP + 0x114]         ; 004fd4ed
        ;   Label: LAB_004fd4ed
    FSUB float ptr [ESI + 0x1fa58]      ; 004fd4f4
    SUB ESP,0x4                         ; 004fd4fa
    FSTP float ptr [ESP]                ; 004fd4fd
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004fd500
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x12c],EAX     ; 004fd505
    FLD float ptr [ESP + 0x12c]         ; 004fd50c
    ADD ESP,0x4                         ; 004fd513
    FLD float ptr [ESP + 0x4]           ; 004fd516
    FXCH                                ; 004fd51a
    FSTP float ptr [ESP + 0x108]        ; 004fd51c
    FSUB float ptr [ESI + 0x1fa54]      ; 004fd523
    SUB ESP,0x4                         ; 004fd529
    FSTP float ptr [ESP]                ; 004fd52c
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004fd52f
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x12c],EAX     ; 004fd534
    FLD float ptr [ESP + 0x12c]         ; 004fd53b
    ADD ESP,0x4                         ; 004fd542
    FLD float ptr [EBP + 0x18]          ; 004fd545
    FMUL double ptr [0x0058df4e]        ; 004fd548 | DOUBLE_0058df4e
    FMUL double ptr [0x0058df66]        ; 004fd54e | DOUBLE_0058df66
    FLD float ptr [ESP + 0x108]         ; 004fd554
    FXCH ST2                            ; 004fd55b
    FSTP float ptr [ESP + 0x10c]        ; 004fd55d
    FST float ptr [ESP + 0x110]         ; 004fd564
    FCHS                                ; 004fd56b
    FSTP float ptr [ESP + 0x104]        ; 004fd56d
    FCOMP float ptr [ESP + 0x104]       ; 004fd574
    FNSTSW AX                           ; 004fd57b
    SAHF                                ; 004fd57d
    JNC 0x004fd58e                      ; 004fd57e
        ;   XREF to: 004fd58e (CONDITIONAL_JUMP)  ; LAB_004fd58e
    MOV EAX,dword ptr [ESP + 0x104]     ; 004fd580
    MOV dword ptr [ESP + 0x108],EAX     ; 004fd587
    FLD float ptr [ESP + 0x108]         ; 004fd58e
        ;   Label: LAB_004fd58e
    FCOMP float ptr [ESP + 0x110]       ; 004fd595
    FNSTSW AX                           ; 004fd59c
    SAHF                                ; 004fd59e
    JBE 0x004fd5af                      ; 004fd59f
        ;   XREF to: 004fd5af (CONDITIONAL_JUMP)  ; LAB_004fd5af
    MOV EAX,dword ptr [ESP + 0x110]     ; 004fd5a1
    MOV dword ptr [ESP + 0x108],EAX     ; 004fd5a8
    FLD float ptr [ESP + 0x10c]         ; 004fd5af
        ;   Label: LAB_004fd5af
    FLD float ptr [ESP + 0x110]         ; 004fd5b6
    FCHS                                ; 004fd5bd
    FSTP float ptr [ESP + 0x100]        ; 004fd5bf
    FCOMP float ptr [ESP + 0x100]       ; 004fd5c6
    FNSTSW AX                           ; 004fd5cd
    SAHF                                ; 004fd5cf
    JNC 0x004fd5e0                      ; 004fd5d0
        ;   XREF to: 004fd5e0 (CONDITIONAL_JUMP)  ; LAB_004fd5e0
    MOV EAX,dword ptr [ESP + 0x100]     ; 004fd5d2
    MOV dword ptr [ESP + 0x10c],EAX     ; 004fd5d9
    FLD float ptr [ESP + 0x10c]         ; 004fd5e0
        ;   Label: LAB_004fd5e0
    FCOMP float ptr [ESP + 0x110]       ; 004fd5e7
    FNSTSW AX                           ; 004fd5ee
    SAHF                                ; 004fd5f0
    JBE 0x004fd601                      ; 004fd5f1
        ;   XREF to: 004fd601 (CONDITIONAL_JUMP)  ; LAB_004fd601
    MOV EAX,dword ptr [ESP + 0x110]     ; 004fd5f3
    MOV dword ptr [ESP + 0x10c],EAX     ; 004fd5fa
    FLD float ptr [ESI + 0x1fa58]       ; 004fd601
        ;   Label: LAB_004fd601
    FLD float ptr [ESI + 0x1fa54]       ; 004fd607
    MOV EDI,dword ptr [ESI + 0x1fa60]   ; 004fd60d
    FADD float ptr [ESP + 0x10c]        ; 004fd613
    FXCH                                ; 004fd61a
    FADD float ptr [ESP + 0x108]        ; 004fd61c
    FXCH                                ; 004fd623
    FSTP float ptr [ESI + 0x1fa54]      ; 004fd625
    FSTP float ptr [ESI + 0x1fa58]      ; 004fd62b
    TEST EDI,EDI                        ; 004fd631
    JZ 0x004fd63f                       ; 004fd633
        ;   XREF to: 004fd63f (CONDITIONAL_JUMP)  ; LAB_004fd63f
    CMP dword ptr [EBP + 0x1c],0x0      ; 004fd635
    JZ 0x004fd98d                       ; 004fd639
        ;   XREF to: 004fd98d (CONDITIONAL_JUMP)  ; LAB_004fd98d
    MOV ESP,EBP                         ; 004fd63f
        ;   Label: LAB_004fd63f
    POP EBP                             ; 004fd641
    POP EDI                             ; 004fd642
    POP ESI                             ; 004fd643
    POP EBX                             ; 004fd644
    RET                                 ; 004fd645
    LEA EAX,[ESI + 0x150]               ; 004fd646
        ;   Label: LAB_004fd646
    PUSH EAX                            ; 004fd64c
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004fd64d
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004fd652
    ADD ESP,0x4                         ; 004fd655
    CMP EAX,0x2                         ; 004fd658
    JNZ 0x004fd477                      ; 004fd65b
        ;   XREF to: 004fd477 (CONDITIONAL_JUMP)  ; LAB_004fd477
    MOV dword ptr [EBP + 0x1c],0x1      ; 004fd661
    JMP 0x004fd477                      ; 004fd668
        ;   XREF to: 004fd477 (UNCONDITIONAL_JUMP)  ; LAB_004fd477
    CMP dword ptr [ESI + 0xbc90],0x2    ; 004fd66d
        ;   Label: LAB_004fd66d
    JZ 0x004fd49c                       ; 004fd674
        ;   XREF to: 004fd49c (CONDITIONAL_JUMP)  ; LAB_004fd49c
    FLD float ptr [ESI + 0xbcbc]        ; 004fd67a
    FMUL double ptr [0x0058df4e]        ; 004fd680 | DOUBLE_0058df4e
    FMUL double ptr [0x0058df56]        ; 004fd686 | DOUBLE_0058df56
    FMUL float ptr [EBP + 0x18]         ; 004fd68c
    MOV EAX,0x3fc90fdb                  ; 004fd68f
    FLD float ptr [ESP + 0x4]           ; 004fd694
    FXCH                                ; 004fd698
    FADD ST0,ST1                        ; 004fd69a
    MOV dword ptr [ESP + 0x124],EAX     ; 004fd69c
    FSTP ST1                            ; 004fd6a3
    FST float ptr [ESP + 0x4]           ; 004fd6a5
    FCOMP float ptr [0x0058df5e]        ; 004fd6a9 | FLOAT_0058df5e
    FNSTSW AX                           ; 004fd6af
    SAHF                                ; 004fd6b1
    JNC 0x004fd6bc                      ; 004fd6b2
        ;   XREF to: 004fd6bc (CONDITIONAL_JUMP)  ; LAB_004fd6bc
    MOV dword ptr [ESP + 0x4],0xbfc90fdb ; 004fd6b4
    FLD float ptr [ESP + 0x4]           ; 004fd6bc
        ;   Label: LAB_004fd6bc
    FCOMP float ptr [ESP + 0x124]       ; 004fd6c0
    FNSTSW AX                           ; 004fd6c7
    SAHF                                ; 004fd6c9
    JBE 0x004fd6d7                      ; 004fd6ca
        ;   XREF to: 004fd6d7 (CONDITIONAL_JUMP)  ; LAB_004fd6d7
    MOV EAX,dword ptr [ESP + 0x124]     ; 004fd6cc
    MOV dword ptr [ESP + 0x4],EAX       ; 004fd6d3
    XOR ECX,ECX                         ; 004fd6d7
        ;   Label: LAB_004fd6d7
    MOV dword ptr [ESP + 0x114],ECX     ; 004fd6d9
    JMP 0x004fd4ed                      ; 004fd6e0
        ;   XREF to: 004fd4ed (UNCONDITIONAL_JUMP)  ; LAB_004fd4ed
    MOV EDI,dword ptr [EBP + 0x1c]      ; 004fd6e5
        ;   Label: LAB_004fd6e5
    TEST EDI,EDI                        ; 004fd6e8
    JNZ 0x004fd4a9                      ; 004fd6ea
        ;   XREF to: 004fd4a9 (CONDITIONAL_JUMP)  ; LAB_004fd4a9
    CMP dword ptr [ESI + 0xbca0],0x0    ; 004fd6f0
    JNZ 0x004fd4b3                      ; 004fd6f7
        ;   XREF to: 004fd4b3 (CONDITIONAL_JUMP)  ; LAB_004fd4b3
    MOV EDX,0x7149f2ca                  ; 004fd6fd
    MOV dword ptr [ESP + 0x118],EDI     ; 004fd702
    MOV dword ptr [ESP + 0x120],EDI     ; 004fd709
    MOV dword ptr [ESP + 0x11c],EDX     ; 004fd710
    MOV EAX,[0x005be368]                ; 004fd717 | DAT_005be368
        ;   Label: LAB_004fd717
    MOV EBX,dword ptr [ESP + 0x120]     ; 004fd71c
    CMP EBX,dword ptr [EAX + 0x14cd6c]  ; 004fd723 | DAT_01fa3ff0
    JGE 0x004fd79f                      ; 004fd729
        ;   XREF to: 004fd79f (CONDITIONAL_JUMP)  ; LAB_004fd79f
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14cd70] ; 004fd72f | DAT_01fa3ff4
    CMP EBX,dword ptr [ESI + 0x1fa60]   ; 004fd736
    SETZ AL                             ; 004fd73c
    AND EAX,0xff                        ; 004fd73f
    PUSH EAX                            ; 004fd744
    PUSH EBX                            ; 004fd745
    PUSH ESI                            ; 004fd746
    CALL FUN_004fda20                   ; 004fd747
        ;   XREF to: 004fda20 (UNCONDITIONAL_CALL)  ; undefined FUN_004fda20()
    MOV dword ptr [ESP + 0x134],EAX     ; 004fd74c
    FLD float ptr [ESP + 0x134]         ; 004fd753
    ADD ESP,0xc                         ; 004fd75a
    FST float ptr [ESP]                 ; 004fd75d
    FLDZ                                ; 004fd760
    FCOMPP                              ; 004fd762
    FNSTSW AX                           ; 004fd764
    SAHF                                ; 004fd766
    JBE 0x004fd77d                      ; 004fd767
        ;   XREF to: 004fd77d (CONDITIONAL_JUMP)  ; LAB_004fd77d
    MOV EBX,dword ptr [ESP + 0x120]     ; 004fd769
        ;   Label: LAB_004fd769
    INC EBX                             ; 004fd770
    ADD EDI,0x4                         ; 004fd771
    MOV dword ptr [ESP + 0x120],EBX     ; 004fd774
    JMP 0x004fd717                      ; 004fd77b
        ;   XREF to: 004fd717 (UNCONDITIONAL_JUMP)  ; LAB_004fd717
    FLD float ptr [ESP]                 ; 004fd77d
        ;   Label: LAB_004fd77d
    FCOMP float ptr [ESP + 0x11c]       ; 004fd780
    FNSTSW AX                           ; 004fd787
    SAHF                                ; 004fd789
    JNC 0x004fd769                      ; 004fd78a
        ;   XREF to: 004fd769 (CONDITIONAL_JUMP)  ; LAB_004fd769
    MOV EAX,dword ptr [ESP]             ; 004fd78c
    MOV dword ptr [ESP + 0x118],EBX     ; 004fd78f
    MOV dword ptr [ESP + 0x11c],EAX     ; 004fd796
    JMP 0x004fd769                      ; 004fd79d
        ;   XREF to: 004fd769 (UNCONDITIONAL_JUMP)  ; LAB_004fd769
    MOV EAX,dword ptr [ESP + 0x118]     ; 004fd79f
        ;   Label: LAB_004fd79f
    MOV dword ptr [ESI + 0x1fa60],EAX   ; 004fd7a6
    JMP 0x004fd4b3                      ; 004fd7ac
        ;   XREF to: 004fd4b3 (UNCONDITIONAL_JUMP)  ; LAB_004fd4b3
    CMP dword ptr [ESI + 0x1fa60],0x0   ; 004fd7b1
        ;   Label: LAB_004fd7b1
    JZ 0x004fd4ed                       ; 004fd7b8
        ;   XREF to: 004fd4ed (CONDITIONAL_JUMP)  ; LAB_004fd4ed
    PUSH 0x5993b0                       ; 004fd7be | DAT_005993b0
    PUSH 0xa                            ; 004fd7c3
    LEA EAX,[ESP + 0x10]                ; 004fd7c5
    PUSH EAX                            ; 004fd7c9
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004fd7ca
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 004fd7cf
    LEA EDI,[ESP + 0x8]                 ; 004fd7d2
    MOV EAX,dword ptr [ESI + 0x1fa60]   ; 004fd7d6
    PUSH EDI                            ; 004fd7dc
    MOV EBX,dword ptr [EAX + 0x14c]     ; 004fd7dd
    PUSH EAX                            ; 004fd7e3
    CALL dword ptr [EBX + 0x4c]         ; 004fd7e4
    ADD ESP,0x8                         ; 004fd7e7
    TEST EAX,EAX                        ; 004fd7ea
    JLE 0x004fd8dd                      ; 004fd7ec
        ;   XREF to: 004fd8dd (CONDITIONAL_JUMP)  ; LAB_004fd8dd
    LEA EBX,[ESP + 0xe0]                ; 004fd7f2
    LEA EAX,[ESP + 0x8]                 ; 004fd7f9
    CMP EBX,EAX                         ; 004fd7fd
    JZ 0x004fd822                       ; 004fd7ff
        ;   XREF to: 004fd822 (CONDITIONAL_JUMP)  ; LAB_004fd822
    MOV EAX,dword ptr [ESP + 0x8]       ; 004fd801
    MOV dword ptr [ESP + 0xe0],EAX      ; 004fd805
    MOV EAX,dword ptr [ESP + 0xc]       ; 004fd80c
    MOV dword ptr [ESP + 0xe4],EAX      ; 004fd810
    MOV EAX,dword ptr [ESP + 0x10]      ; 004fd817
    MOV dword ptr [ESP + 0xe8],EAX      ; 004fd81b
        ;   Label: LAB_004fd81b
    LEA EAX,[ESP + 0xe0]                ; 004fd822
        ;   Label: LAB_004fd822
    PUSH EAX                            ; 004fd829
    LEA EAX,[ESP + 0xd8]                ; 004fd82a
    PUSH EAX                            ; 004fd831
    MOV EDX,dword ptr [ESI + 0x1fa60]   ; 004fd832
    PUSH EDX                            ; 004fd838
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004fd839
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 004fd83e
    PUSH EAX                            ; 004fd841
    LEA EAX,[ESP + 0xa8]                ; 004fd842
    PUSH EAX                            ; 004fd849
    PUSH ESI                            ; 004fd84a
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 004fd84b
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    ADD ESP,0xc                         ; 004fd850
    MOV ECX,dword ptr [0x01e533a0]      ; 004fd853 | DAT_01e533a0
    PUSH ECX                            ; 004fd859
    LEA EAX,[ESP + 0x9c]                ; 004fd85a
    PUSH EAX                            ; 004fd861
    LEA EAX,[ESI + 0x150]               ; 004fd862
    PUSH EAX                            ; 004fd868
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 004fd869
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0()
    ADD ESP,0xc                         ; 004fd86e
    FLD float ptr [ESP + 0xa4]          ; 004fd871
    FSUB float ptr [EAX]                ; 004fd878
    FLD float ptr [ESP + 0xa8]          ; 004fd87a
    FXCH                                ; 004fd881
    FSTP float ptr [ESP + 0xbc]         ; 004fd883
    FSUB float ptr [EAX + 0x4]          ; 004fd88a
    FLD float ptr [ESP + 0xac]          ; 004fd88d
    FXCH                                ; 004fd894
    FSTP float ptr [ESP + 0xc0]         ; 004fd896
    FSUB float ptr [EAX + 0x8]          ; 004fd89d
    LEA EAX,[ESP + 0xbc]                ; 004fd8a0
    PUSH EAX                            ; 004fd8a7
    LEA EAX,[ESP + 0xf0]                ; 004fd8a8
    PUSH EAX                            ; 004fd8af
    FSTP float ptr [ESP + 0xcc]         ; 004fd8b0
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004fd8b7
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    ADD ESP,0x8                         ; 004fd8bc
    MOV EAX,dword ptr [ESP + 0xec]      ; 004fd8bf
    MOV dword ptr [ESP + 0x4],EAX       ; 004fd8c6
    MOV EAX,dword ptr [ESP + 0xf0]      ; 004fd8ca
    MOV dword ptr [ESP + 0x114],EAX     ; 004fd8d1
    JMP 0x004fd4ed                      ; 004fd8d8
        ;   XREF to: 004fd4ed (UNCONDITIONAL_JUMP)  ; LAB_004fd4ed
    LEA EDI,[ESP + 0x80]                ; 004fd8dd
        ;   Label: LAB_004fd8dd
    MOV EAX,dword ptr [ESI + 0x1fa60]   ; 004fd8e4
    PUSH EDI                            ; 004fd8ea
    MOV EBX,dword ptr [EAX + 0x14c]     ; 004fd8eb
    PUSH EAX                            ; 004fd8f1
    CALL dword ptr [EBX + 0x14]         ; 004fd8f2
    LEA EBX,[EAX + 0xc]                 ; 004fd8f5
    FLD float ptr [EAX]                 ; 004fd8f8
    FADD float ptr [EBX]                ; 004fd8fa
    ADD ESP,0x8                         ; 004fd8fc
    FST float ptr [ESP + 0xb0]          ; 004fd8ff
    FLD float ptr [EAX + 0x4]           ; 004fd906
    FADD float ptr [EBX + 0x4]          ; 004fd909
    FXCH                                ; 004fd90c
    FLD float ptr [0x0058df62]          ; 004fd90e | FLOAT_0058df62
    FXCH                                ; 004fd914
    FMUL ST1                            ; 004fd916
    FXCH ST2                            ; 004fd918
    FST float ptr [ESP + 0xb4]          ; 004fd91a
    FLD float ptr [EAX + 0x8]           ; 004fd921
    FADD float ptr [EBX + 0x8]          ; 004fd924
    FXCH                                ; 004fd927
    FMUL ST2                            ; 004fd929
    FXCH                                ; 004fd92b
    FST float ptr [ESP + 0xb8]          ; 004fd92d
    FMULP ST2                           ; 004fd934
    LEA EAX,[ESP + 0xc8]                ; 004fd936
    FXCH ST2                            ; 004fd93d
    FSTP float ptr [ESP + 0xc8]         ; 004fd93f
    FXCH                                ; 004fd946
    FSTP float ptr [ESP + 0xcc]         ; 004fd948
    LEA EBX,[ESP + 0xe0]                ; 004fd94f
    FSTP float ptr [ESP + 0xd0]         ; 004fd956
    CMP EBX,EAX                         ; 004fd95d
    JZ 0x004fd822                       ; 004fd95f
        ;   XREF to: 004fd822 (CONDITIONAL_JUMP)  ; LAB_004fd822
    MOV EAX,dword ptr [ESP + 0xc8]      ; 004fd965
    MOV dword ptr [ESP + 0xe0],EAX      ; 004fd96c
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004fd973
    MOV dword ptr [ESP + 0xe4],EAX      ; 004fd97a
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004fd981
    JMP 0x004fd81b                      ; 004fd988
        ;   XREF to: 004fd81b (UNCONDITIONAL_JUMP)  ; LAB_004fd81b
    FLD float ptr [ESI + 0x1fa58]       ; 004fd98d
        ;   Label: LAB_004fd98d
    FSUB float ptr [ESP + 0x114]        ; 004fd993
    SUB ESP,0x4                         ; 004fd99a
    FSTP float ptr [ESP]                ; 004fd99d
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004fd9a0
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x12c],EAX     ; 004fd9a5
    FLD float ptr [ESP + 0x12c]         ; 004fd9ac
    FABS                                ; 004fd9b3
    ADD ESP,0x4                         ; 004fd9b5
    FCOMP double ptr [0x0058df6e]       ; 004fd9b8 | DOUBLE_0058df6e
    FNSTSW AX                           ; 004fd9be
    SAHF                                ; 004fd9c0
    JNC 0x004fd9d4                      ; 004fd9c1
        ;   XREF to: 004fd9d4 (CONDITIONAL_JUMP)  ; LAB_004fd9d4
    MOV dword ptr [ESI + 0x1fa64],0x1   ; 004fd9c3
        ;   Label: LAB_004fd9c3
    MOV ESP,EBP                         ; 004fd9cd
    POP EBP                             ; 004fd9cf
    POP EDI                             ; 004fd9d0
    POP ESI                             ; 004fd9d1
    POP EBX                             ; 004fd9d2
    RET                                 ; 004fd9d3
    FLD float ptr [ESI + 0x1fa58]       ; 004fd9d4
        ;   Label: LAB_004fd9d4
    FSUB float ptr [ESP + 0x114]        ; 004fd9da
    SUB ESP,0x4                         ; 004fd9e1
    FSTP float ptr [ESP]                ; 004fd9e4
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004fd9e7
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x12c],EAX     ; 004fd9ec
    FLD float ptr [ESP + 0x12c]         ; 004fd9f3
    FABS                                ; 004fd9fa
    ADD ESP,0x4                         ; 004fd9fc
    FCOMP double ptr [0x0058df6e]       ; 004fd9ff | DOUBLE_0058df6e
    FNSTSW AX                           ; 004fda05
    SAHF                                ; 004fda07
    JC 0x004fd9c3                       ; 004fda08
        ;   XREF to: 004fd9c3 (CONDITIONAL_JUMP)  ; LAB_004fd9c3
    MOV ESP,EBP                         ; 004fda0a
    POP EBP                             ; 004fda0c
    POP EDI                             ; 004fda0d
    POP ESI                             ; 004fda0e
    POP EBX                             ; 004fda0f
    RET                                 ; 004fda10

