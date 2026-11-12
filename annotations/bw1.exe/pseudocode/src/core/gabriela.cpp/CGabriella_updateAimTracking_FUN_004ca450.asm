; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gabriela_cpp_CGabriella_updateAimTracking_FUN_004ca450(CGabriella *this_ptr,float delta_time,int is_holstering)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; int              Stack[0xc]:4   is_holstering
; Local Variables:
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined        Stack[-0x19c]:1  local_19c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_gabriela.cpp_CGabriella_process_FUN_004c65f0 at 004c6c3e
;
; Referenced Globals:
;   undefined4 DAT_005e11e4
;   undefined4 DAT_005e11ec
;   undefined4 DAT_005e11f4
;   undefined4 DAT_005e11f8
;   undefined4 DAT_005e11fc
;   undefined4 DAT_005e1204
;   WatcomTypeInfo g_CVectorTypeInfo
;   undefined4 DAT_00600d60
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01cc9120
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_gabriela.cpp_CGabriella_scoreTargetVisibility_FUN_004ca0c0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_skeleton.cpp_FUN_00569040
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ca450
        ;   Label: core_gabriela.cpp_CGabriella_updateAimTracking_FUN_004ca450
    PUSH ESI                            ; 004ca451
    PUSH EDI                            ; 004ca452
    PUSH EBP                            ; 004ca453
    MOV EBP,ESP                         ; 004ca454
    SUB ESP,0x190                       ; 004ca456
    AND ESP,0xfffffff8                  ; 004ca45c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ca45f
    MOV ESI,dword ptr [EBP + 0x1c]      ; 004ca462
    TEST ESI,ESI                        ; 004ca465
    JZ 0x004ca565                       ; 004ca467
        ;   XREF to: 004ca565 (CONDITIONAL_JUMP)  ; LAB_004ca565
    CMP dword ptr [EBX + 0x1fae4],0x0   ; 004ca46d
        ;   Label: LAB_004ca46d
    JNZ 0x004ca58a                      ; 004ca474
        ;   XREF to: 004ca58a (CONDITIONAL_JUMP)  ; LAB_004ca58a
    CMP dword ptr [EBX + 0x1ffac],0x0   ; 004ca47a
        ;   Label: LAB_004ca47a
    JNZ 0x004ca61c                      ; 004ca481
        ;   XREF to: 004ca61c (CONDITIONAL_JUMP)  ; LAB_004ca61c
    MOV dword ptr [EBX + 0x1ffd0],0x0   ; 004ca487
        ;   Label: LAB_004ca487
    CMP dword ptr [EBX + 0x1ffc4],0x2   ; 004ca491
        ;   Label: LAB_004ca491
    JNZ 0x004ca6e8                      ; 004ca498
        ;   XREF to: 004ca6e8 (CONDITIONAL_JUMP)  ; LAB_004ca6e8
    MOV ECX,dword ptr [EBX + 0x1ffd0]   ; 004ca49e
    TEST ECX,ECX                        ; 004ca4a4
    JNZ 0x004ca4d2                      ; 004ca4a6
        ;   XREF to: 004ca4d2 (CONDITIONAL_JUMP)  ; LAB_004ca4d2
    MOV dword ptr [EBX + 0x1ffe0],ECX   ; 004ca4a8
    MOV EAX,dword ptr [EBX + 0x1ffe0]   ; 004ca4ae
    MOV dword ptr [EBX + 0x1ffdc],EAX   ; 004ca4b4
    MOV EAX,dword ptr [EBX + 0x1ffdc]   ; 004ca4ba
    MOV dword ptr [EBX + 0x1ffd8],EAX   ; 004ca4c0
    MOV EAX,dword ptr [EBX + 0x1ffd8]   ; 004ca4c6
    MOV dword ptr [EBX + 0x1ffd4],EAX   ; 004ca4cc
    FLD float ptr [0x00600d60]          ; 004ca4d2 | DAT_00600d60
        ;   Label: LAB_004ca4d2
    FMUL double ptr [0x005e11fc]        ; 004ca4d8 | DAT_005e11fc
    FDIVR float ptr [EBP + 0x18]        ; 004ca4de
    FADD float ptr [EBX + 0x1ffe8]      ; 004ca4e1
    FSTP float ptr [EBX + 0x1ffe8]      ; 004ca4e7
        ;   Label: LAB_004ca4e7
    FLD float ptr [EBX + 0x1ffe8]       ; 004ca4ed
        ;   Label: LAB_004ca4ed
    FLD1                                ; 004ca4f3
    FCOMPP                              ; 004ca4f5
    FNSTSW AX                           ; 004ca4f7
    SAHF                                ; 004ca4f9
    JNC 0x004ca506                      ; 004ca4fa
        ;   XREF to: 004ca506 (CONDITIONAL_JUMP)  ; LAB_004ca506
    MOV dword ptr [EBX + 0x1ffe8],0x3f800000 ; 004ca4fc
    FLD float ptr [EBX + 0x1ffe8]       ; 004ca506
        ;   Label: LAB_004ca506
    FLDZ                                ; 004ca50c
    FCOMPP                              ; 004ca50e
    FNSTSW AX                           ; 004ca510
    SAHF                                ; 004ca512
    JBE 0x004ca533                      ; 004ca513
        ;   XREF to: 004ca533 (CONDITIONAL_JUMP)  ; LAB_004ca533
    MOV dword ptr [EBX + 0x1ffdc],0x0   ; 004ca515
    MOV dword ptr [EBX + 0x1ffe0],0x0   ; 004ca51f
    MOV dword ptr [EBX + 0x1ffe8],0x0   ; 004ca529
    FLD float ptr [EBX + 0x1ffe8]       ; 004ca533
        ;   Label: LAB_004ca533
    FLDZ                                ; 004ca539
    FCOMPP                              ; 004ca53b
    FNSTSW AX                           ; 004ca53d
    SAHF                                ; 004ca53f
    JC 0x004ca9bb                       ; 004ca540
        ;   XREF to: 004ca9bb (CONDITIONAL_JUMP)  ; LAB_004ca9bb
    FLD float ptr [EBX + 0x1ffd8]       ; 004ca546
    MOV EAX,dword ptr [EBX + 0x1ffd4]   ; 004ca54c
    MOV dword ptr [EBX + 0x1ffdc],EAX   ; 004ca552
    FSTP float ptr [EBX + 0x1ffe0]      ; 004ca558
    MOV ESP,EBP                         ; 004ca55e
    POP EBP                             ; 004ca560
    POP EDI                             ; 004ca561
    POP ESI                             ; 004ca562
    POP EBX                             ; 004ca563
    RET                                 ; 004ca564
    LEA EAX,[EBX + 0x158]               ; 004ca565
        ;   Label: LAB_004ca565
    PUSH EAX                            ; 004ca56b
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004ca56c
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004ca571
    ADD ESP,0x4                         ; 004ca574
    CMP EAX,0x2                         ; 004ca577
    JNZ 0x004ca46d                      ; 004ca57a
        ;   XREF to: 004ca46d (CONDITIONAL_JUMP)  ; LAB_004ca46d
    MOV ESI,0x1                         ; 004ca580
    JMP 0x004ca46d                      ; 004ca585
        ;   XREF to: 004ca46d (UNCONDITIONAL_JUMP)  ; LAB_004ca46d
    CMP dword ptr [EBX + 0xc1d4],0x2    ; 004ca58a
        ;   Label: LAB_004ca58a
    JZ 0x004ca47a                       ; 004ca591
        ;   XREF to: 004ca47a (CONDITIONAL_JUMP)  ; LAB_004ca47a
    FLD float ptr [EBX + 0xc204]        ; 004ca597
    FMUL float ptr [0x005e11e4]         ; 004ca59d | DAT_005e11e4
    FMUL double ptr [0x005e11ec]        ; 004ca5a3 | DAT_005e11ec
    FMUL float ptr [EBP + 0x18]         ; 004ca5a9
    MOV ESI,0x3fc90fdb                  ; 004ca5ac
    FLD float ptr [EBX + 0x1ffd4]       ; 004ca5b1
    FXCH                                ; 004ca5b7
    FADD ST0,ST1                        ; 004ca5b9
    MOV dword ptr [ESP + 0x188],ESI     ; 004ca5bb
    FSTP ST1                            ; 004ca5c2
    FST float ptr [EBX + 0x1ffd4]       ; 004ca5c4
    FCOMP float ptr [0x005e11f4]        ; 004ca5ca | DAT_005e11f4
    FNSTSW AX                           ; 004ca5d0
    SAHF                                ; 004ca5d2
    JNC 0x004ca5df                      ; 004ca5d3
        ;   XREF to: 004ca5df (CONDITIONAL_JUMP)  ; LAB_004ca5df
    MOV dword ptr [EBX + 0x1ffd4],0xbfc90fdb ; 004ca5d5
    FLD float ptr [EBX + 0x1ffd4]       ; 004ca5df
        ;   Label: LAB_004ca5df
    FCOMP float ptr [ESP + 0x188]       ; 004ca5e5
    FNSTSW AX                           ; 004ca5ec
    SAHF                                ; 004ca5ee
    JBE 0x004ca5fe                      ; 004ca5ef
        ;   XREF to: 004ca5fe (CONDITIONAL_JUMP)  ; LAB_004ca5fe
    MOV EAX,dword ptr [ESP + 0x188]     ; 004ca5f1
    MOV dword ptr [EBX + 0x1ffd4],EAX   ; 004ca5f8
    FLD float ptr [EBP + 0x18]          ; 004ca5fe
        ;   Label: LAB_004ca5fe
    FDIV float ptr [0x00600d60]         ; 004ca601 | DAT_00600d60
    FADD float ptr [EBX + 0x1ffe8]      ; 004ca607
    MOV dword ptr [EBX + 0x1ffd8],0x0   ; 004ca60d
    JMP 0x004ca4e7                      ; 004ca617
        ;   XREF to: 004ca4e7 (UNCONDITIONAL_JUMP)  ; LAB_004ca4e7
    TEST ESI,ESI                        ; 004ca61c
        ;   Label: LAB_004ca61c
    JNZ 0x004ca487                      ; 004ca61e
        ;   XREF to: 004ca487 (CONDITIONAL_JUMP)  ; LAB_004ca487
    CMP dword ptr [EBX + 0x1ffc4],0x0   ; 004ca624
    JNZ 0x004ca491                      ; 004ca62b
        ;   XREF to: 004ca491 (CONDITIONAL_JUMP)  ; LAB_004ca491
    MOV EDX,0x7149f2ca                  ; 004ca631
    MOV dword ptr [ESP + 0x178],ESI     ; 004ca636
    MOV dword ptr [ESP + 0x180],ESI     ; 004ca63d
    XOR EDI,EDI                         ; 004ca644
    MOV dword ptr [ESP + 0x17c],EDX     ; 004ca646
    MOV EAX,[0x00622c18]                ; 004ca64d | g_CDemonSetPtr
        ;   Label: LAB_004ca64d
    CMP EDI,dword ptr [EAX + 0x14d164]  ; 004ca652 | g_CDemonSetInstance.actor_count
    JGE 0x004ca6d6                      ; 004ca658
        ;   XREF to: 004ca6d6 (CONDITIONAL_JUMP)  ; LAB_004ca6d6
    ADD EAX,dword ptr [ESP + 0x180]     ; 004ca65e
    MOV EDX,dword ptr [EBX + 0x1ffd0]   ; 004ca665
    MOV ESI,dword ptr [EAX + 0x14d168]  ; 004ca66b | g_CDemonSetInstance.actors[0]
    CMP ESI,EDX                         ; 004ca671
    SETZ AL                             ; 004ca673
    AND EAX,0xff                        ; 004ca676
    PUSH EAX                            ; 004ca67b
    PUSH ESI                            ; 004ca67c
    PUSH EBX                            ; 004ca67d
    CALL core_gabriela.cpp_CGabriella_scoreTargetVisibility_FUN_004ca0c0 ; 004ca67e
        ;   XREF to: 004ca0c0 (UNCONDITIONAL_CALL)  ; float core_gabriela.cpp_CGabriella_scoreTargetVisibility_FUN_004ca0c0(CGabriella * this_ptr, CDemonActor * target_actor, int use_wider_fov)
    MOV dword ptr [ESP + 0x198],EAX     ; 004ca683
    FLD float ptr [ESP + 0x198]         ; 004ca68a
    ADD ESP,0xc                         ; 004ca691
    FST float ptr [ESP]                 ; 004ca694
    FLDZ                                ; 004ca697
    FCOMPP                              ; 004ca699
    FNSTSW AX                           ; 004ca69b
    SAHF                                ; 004ca69d
    JBE 0x004ca6b4                      ; 004ca69e
        ;   XREF to: 004ca6b4 (CONDITIONAL_JUMP)  ; LAB_004ca6b4
    MOV ECX,dword ptr [ESP + 0x180]     ; 004ca6a0
        ;   Label: LAB_004ca6a0
    ADD ECX,0x4                         ; 004ca6a7
    INC EDI                             ; 004ca6aa
    MOV dword ptr [ESP + 0x180],ECX     ; 004ca6ab
    JMP 0x004ca64d                      ; 004ca6b2
        ;   XREF to: 004ca64d (UNCONDITIONAL_JUMP)  ; LAB_004ca64d
    FLD float ptr [ESP]                 ; 004ca6b4
        ;   Label: LAB_004ca6b4
    FCOMP float ptr [ESP + 0x17c]       ; 004ca6b7
    FNSTSW AX                           ; 004ca6be
    SAHF                                ; 004ca6c0
    JNC 0x004ca6a0                      ; 004ca6c1
        ;   XREF to: 004ca6a0 (CONDITIONAL_JUMP)  ; LAB_004ca6a0
    MOV EAX,dword ptr [ESP]             ; 004ca6c3
    MOV dword ptr [ESP + 0x178],ESI     ; 004ca6c6
    MOV dword ptr [ESP + 0x17c],EAX     ; 004ca6cd
    JMP 0x004ca6a0                      ; 004ca6d4
        ;   XREF to: 004ca6a0 (UNCONDITIONAL_JUMP)  ; LAB_004ca6a0
    MOV EAX,dword ptr [ESP + 0x178]     ; 004ca6d6
        ;   Label: LAB_004ca6d6
    MOV dword ptr [EBX + 0x1ffd0],EAX   ; 004ca6dd
    JMP 0x004ca491                      ; 004ca6e3
        ;   XREF to: 004ca491 (UNCONDITIONAL_JUMP)  ; LAB_004ca491
    CMP dword ptr [EBX + 0x1ffd0],0x0   ; 004ca6e8
        ;   Label: LAB_004ca6e8
    JZ 0x004ca994                       ; 004ca6ef
        ;   XREF to: 004ca994 (CONDITIONAL_JUMP)  ; LAB_004ca994
    PUSH 0x5fb430                       ; 004ca6f5 | g_CVectorTypeInfo
    PUSH 0xa                            ; 004ca6fa
    LEA EAX,[ESP + 0xc]                 ; 004ca6fc
    PUSH EAX                            ; 004ca700
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004ca701
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004ca706
    LEA EDI,[ESP + 0x4]                 ; 004ca709
    MOV EAX,dword ptr [EBX + 0x1ffd0]   ; 004ca70d
    PUSH EDI                            ; 004ca713
    MOV ESI,dword ptr [EAX + 0x154]     ; 004ca714
    PUSH EAX                            ; 004ca71a
    CALL dword ptr [ESI + 0x54]         ; 004ca71b
    ADD ESP,0x8                         ; 004ca71e
    TEST EAX,EAX                        ; 004ca721
    JLE 0x004ca88f                      ; 004ca723
        ;   XREF to: 004ca88f (CONDITIONAL_JUMP)  ; LAB_004ca88f
    LEA ESI,[ESP + 0x130]               ; 004ca729
    LEA EAX,[ESP + 0x4]                 ; 004ca730
    CMP ESI,EAX                         ; 004ca734
    JZ 0x004ca759                       ; 004ca736
        ;   XREF to: 004ca759 (CONDITIONAL_JUMP)  ; LAB_004ca759
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ca738
    MOV dword ptr [ESP + 0x130],EAX     ; 004ca73c
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ca743
    MOV dword ptr [ESP + 0x134],EAX     ; 004ca747
    MOV EAX,dword ptr [ESP + 0xc]       ; 004ca74e
    MOV dword ptr [ESP + 0x138],EAX     ; 004ca752
        ;   Label: LAB_004ca752
    LEA EAX,[ESP + 0x130]               ; 004ca759
        ;   Label: LAB_004ca759
    PUSH EAX                            ; 004ca760
    MOV EAX,dword ptr [EBX + 0x1ffd0]   ; 004ca761
    PUSH EAX                            ; 004ca767
    LEA ESI,[ESP + 0x108]               ; 004ca768
    LEA EDI,[ESP + 0xd8]                ; 004ca76f
    CALL core_actor.cpp_FUN_00408b40    ; 004ca776
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 004ca77b
    LEA EAX,[ESP + 0xd0]                ; 004ca77e
    LEA ESI,[ESP + 0x100]               ; 004ca785
    PUSH EAX                            ; 004ca78c
    MOVSD ES:EDI,ESI                    ; 004ca78d
    MOVSD ES:EDI,ESI                    ; 004ca78e
    MOVSD ES:EDI,ESI                    ; 004ca78f
    PUSH EBX                            ; 004ca790
    LEA ESI,[ESP + 0x114]               ; 004ca791
    LEA EDI,[ESP + 0x144]               ; 004ca798
    CALL core_actor.cpp_FUN_00408bb0    ; 004ca79f
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x114]               ; 004ca7a4
    ADD ESP,0x8                         ; 004ca7ab
    MOV EDX,dword ptr [0x01cc9120]      ; 004ca7ae | DAT_01cc9120
    LEA EAX,[EBX + 0x158]               ; 004ca7b4
    PUSH EDX                            ; 004ca7ba
    MOVSD ES:EDI,ESI                    ; 004ca7bb
    MOVSD ES:EDI,ESI                    ; 004ca7bc
    MOVSD ES:EDI,ESI                    ; 004ca7bd
    PUSH EAX                            ; 004ca7be
    LEA ESI,[ESP + 0xe4]                ; 004ca7bf
    LEA EDI,[ESP + 0xc0]                ; 004ca7c6
    CALL core_skeleton.cpp_FUN_00569040 ; 004ca7cd
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    LEA ESI,[ESP + 0xe4]                ; 004ca7d2
    ADD ESP,0x8                         ; 004ca7d9
    LEA EAX,[ESP + 0x118]               ; 004ca7dc
    FLD float ptr [ESP + 0x13c]         ; 004ca7e3
    FLD float ptr [ESP + 0x140]         ; 004ca7ea
    MOVSD ES:EDI,ESI                    ; 004ca7f1
    MOVSD ES:EDI,ESI                    ; 004ca7f2
    MOVSD ES:EDI,ESI                    ; 004ca7f3
    FLD float ptr [ESP + 0x144]         ; 004ca7f4
    LEA EDI,[ESP + 0x118]               ; 004ca7fb
    LEA ESI,[ESP + 0xe8]                ; 004ca802
    FXCH ST2                            ; 004ca809
    FSUB float ptr [ESP + 0xb8]         ; 004ca80b
    FXCH                                ; 004ca812
    FSUB float ptr [ESP + 0xbc]         ; 004ca814
    FXCH ST2                            ; 004ca81b
    FSUB float ptr [ESP + 0xc0]         ; 004ca81d
    FXCH                                ; 004ca824
    FSTP float ptr [ESP + 0xe8]         ; 004ca826
    FXCH                                ; 004ca82d
    FSTP float ptr [ESP + 0xec]         ; 004ca82f
    FSTP float ptr [ESP + 0xf0]         ; 004ca836
    MOVSD ES:EDI,ESI                    ; 004ca83d
    MOVSD ES:EDI,ESI                    ; 004ca83e
    MOVSD ES:EDI,ESI                    ; 004ca83f
    PUSH EAX                            ; 004ca840
    LEA ESI,[ESP + 0xb0]                ; 004ca841
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 004ca848
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    ADD ESP,0x4                         ; 004ca84d
    FLD float ptr [EBP + 0x18]          ; 004ca850
    FDIV float ptr [0x00600d60]         ; 004ca853 | DAT_00600d60
    LEA EDI,[ESP + 0xc4]                ; 004ca859
    LEA ESI,[ESP + 0xac]                ; 004ca860
    MOVSD ES:EDI,ESI                    ; 004ca867
    MOVSD ES:EDI,ESI                    ; 004ca868
    MOVSD ES:EDI,ESI                    ; 004ca869
    MOV EAX,dword ptr [ESP + 0xc4]      ; 004ca86a
    MOV dword ptr [EBX + 0x1ffd4],EAX   ; 004ca871
    MOV EAX,dword ptr [ESP + 0xc8]      ; 004ca877
    FADD float ptr [EBX + 0x1ffe8]      ; 004ca87e
    MOV dword ptr [EBX + 0x1ffd8],EAX   ; 004ca884
    JMP 0x004ca4e7                      ; 004ca88a
        ;   XREF to: 004ca4e7 (UNCONDITIONAL_JUMP)  ; LAB_004ca4e7
    MOV EAX,dword ptr [EBX + 0x1ffd0]   ; 004ca88f
        ;   Label: LAB_004ca88f
    PUSH EAX                            ; 004ca895
    MOV EDI,dword ptr [EAX + 0x154]     ; 004ca896
    LEA ESI,[ESP + 0x98]                ; 004ca89c
    CALL dword ptr [EDI + 0x1c]         ; 004ca8a3
    MOV ECX,0x6                         ; 004ca8a6
    LEA EDI,[ESP + 0x80]                ; 004ca8ab
    LEA ESI,[ESP + 0x98]                ; 004ca8b2
    ADD ESP,0x4                         ; 004ca8b9
    MOVSD.REP ES:EDI,ESI                ; 004ca8bc
    LEA EAX,[ESP + 0x7c]                ; 004ca8be
    FLD float ptr [ESP + 0x7c]          ; 004ca8c2
    FLD float ptr [ESP + 0x80]          ; 004ca8c6
    FLD float ptr [ESP + 0x84]          ; 004ca8cd
    LEA EDI,[ESP + 0xf4]                ; 004ca8d4
    LEA ESI,[ESP + 0x148]               ; 004ca8db
    FXCH ST2                            ; 004ca8e2
    FADD float ptr [EAX + 0xc]          ; 004ca8e4
    FXCH                                ; 004ca8e7
    FADD float ptr [EAX + 0x10]         ; 004ca8e9
    FXCH ST2                            ; 004ca8ec
    FADD float ptr [EAX + 0x14]         ; 004ca8ee
    FXCH                                ; 004ca8f1
    FSTP float ptr [ESP + 0x148]        ; 004ca8f3
    FXCH                                ; 004ca8fa
    FSTP float ptr [ESP + 0x14c]        ; 004ca8fc
    FSTP float ptr [ESP + 0x150]        ; 004ca903
    MOVSD ES:EDI,ESI                    ; 004ca90a
    MOVSD ES:EDI,ESI                    ; 004ca90b
    MOVSD ES:EDI,ESI                    ; 004ca90c
    FLD float ptr [0x005e11f8]          ; 004ca90d | DAT_005e11f8
    FLD float ptr [ESP + 0xf4]          ; 004ca913
    FMUL ST1                            ; 004ca91a
    FLD float ptr [ESP + 0xf8]          ; 004ca91c
    FMUL ST2                            ; 004ca923
    FLD float ptr [ESP + 0xfc]          ; 004ca925
    FMULP ST3                           ; 004ca92c
    LEA EDI,[ESP + 0x124]               ; 004ca92e
    LEA ESI,[ESP + 0x154]               ; 004ca935
    FXCH                                ; 004ca93c
    FSTP float ptr [ESP + 0x154]        ; 004ca93e
    FSTP float ptr [ESP + 0x158]        ; 004ca945
    FSTP float ptr [ESP + 0x15c]        ; 004ca94c
    MOVSD ES:EDI,ESI                    ; 004ca953
    MOVSD ES:EDI,ESI                    ; 004ca954
    MOVSD ES:EDI,ESI                    ; 004ca955
    LEA EAX,[ESP + 0x124]               ; 004ca956
    LEA ESI,[ESP + 0x130]               ; 004ca95d
    CMP ESI,EAX                         ; 004ca964
    JZ 0x004ca759                       ; 004ca966
        ;   XREF to: 004ca759 (CONDITIONAL_JUMP)  ; LAB_004ca759
    MOV EAX,dword ptr [ESP + 0x124]     ; 004ca96c
    MOV dword ptr [ESP + 0x130],EAX     ; 004ca973
    MOV EAX,dword ptr [ESP + 0x128]     ; 004ca97a
    MOV dword ptr [ESP + 0x134],EAX     ; 004ca981
    MOV EAX,dword ptr [ESP + 0x12c]     ; 004ca988
    JMP 0x004ca752                      ; 004ca98f
        ;   XREF to: 004ca752 (UNCONDITIONAL_JUMP)  ; LAB_004ca752
    FLD float ptr [EBX + 0x1ffe4]       ; 004ca994
        ;   Label: LAB_004ca994
    FLDZ                                ; 004ca99a
    FCOMPP                              ; 004ca99c
    FNSTSW AX                           ; 004ca99e
    SAHF                                ; 004ca9a0
    JC 0x004ca4ed                       ; 004ca9a1
        ;   XREF to: 004ca4ed (CONDITIONAL_JUMP)  ; LAB_004ca4ed
    FLD float ptr [EBP + 0x18]          ; 004ca9a7
    FDIV float ptr [0x00600d60]         ; 004ca9aa | DAT_00600d60
    FSUBR float ptr [EBX + 0x1ffe8]     ; 004ca9b0
    JMP 0x004ca4e7                      ; 004ca9b6
        ;   XREF to: 004ca4e7 (UNCONDITIONAL_JUMP)  ; LAB_004ca4e7
    FLD float ptr [EBX + 0x1ffd8]       ; 004ca9bb
        ;   Label: LAB_004ca9bb
    FSUB float ptr [EBX + 0x1ffe0]      ; 004ca9c1
    SUB ESP,0x4                         ; 004ca9c7
    FSTP float ptr [ESP]                ; 004ca9ca
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 004ca9cd
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x190],EAX     ; 004ca9d2
    FLD float ptr [EBX + 0x1ffd4]       ; 004ca9d9
    FLD float ptr [ESP + 0x190]         ; 004ca9df
    ADD ESP,0x4                         ; 004ca9e6
    FXCH                                ; 004ca9e9
    FSUB float ptr [EBX + 0x1ffdc]      ; 004ca9eb
    FXCH                                ; 004ca9f1
    FSTP float ptr [ESP + 0x170]        ; 004ca9f3
    SUB ESP,0x4                         ; 004ca9fa
    FSTP float ptr [ESP]                ; 004ca9fd
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 004caa00
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x190],EAX     ; 004caa05
    FLD float ptr [ESP + 0x190]         ; 004caa0c
    ADD ESP,0x4                         ; 004caa13
    FLD float ptr [EBP + 0x18]          ; 004caa16
    FMUL float ptr [0x005e11e4]         ; 004caa19 | DAT_005e11e4
    FMUL double ptr [0x005e1204]        ; 004caa1f | DAT_005e1204
    FLD float ptr [ESP + 0x170]         ; 004caa25
    FXCH ST2                            ; 004caa2c
    FSTP float ptr [ESP + 0x16c]        ; 004caa2e
    FST float ptr [ESP + 0x174]         ; 004caa35
    FCHS                                ; 004caa3c
    FSTP float ptr [ESP + 0x168]        ; 004caa3e
    FCOMP float ptr [ESP + 0x168]       ; 004caa45
    FNSTSW AX                           ; 004caa4c
    SAHF                                ; 004caa4e
    JNC 0x004caa5f                      ; 004caa4f
        ;   XREF to: 004caa5f (CONDITIONAL_JUMP)  ; LAB_004caa5f
    MOV EAX,dword ptr [ESP + 0x168]     ; 004caa51
    MOV dword ptr [ESP + 0x170],EAX     ; 004caa58
    FLD float ptr [ESP + 0x170]         ; 004caa5f
        ;   Label: LAB_004caa5f
    FCOMP float ptr [ESP + 0x174]       ; 004caa66
    FNSTSW AX                           ; 004caa6d
    SAHF                                ; 004caa6f
    JBE 0x004caa80                      ; 004caa70
        ;   XREF to: 004caa80 (CONDITIONAL_JUMP)  ; LAB_004caa80
    MOV EAX,dword ptr [ESP + 0x174]     ; 004caa72
    MOV dword ptr [ESP + 0x170],EAX     ; 004caa79
    FLD float ptr [ESP + 0x16c]         ; 004caa80
        ;   Label: LAB_004caa80
    FLD float ptr [ESP + 0x174]         ; 004caa87
    FCHS                                ; 004caa8e
    FSTP float ptr [ESP + 0x184]        ; 004caa90
    FCOMP float ptr [ESP + 0x184]       ; 004caa97
    FNSTSW AX                           ; 004caa9e
    SAHF                                ; 004caaa0
    JNC 0x004caab1                      ; 004caaa1
        ;   XREF to: 004caab1 (CONDITIONAL_JUMP)  ; LAB_004caab1
    MOV EAX,dword ptr [ESP + 0x184]     ; 004caaa3
    MOV dword ptr [ESP + 0x16c],EAX     ; 004caaaa
    FLD float ptr [ESP + 0x16c]         ; 004caab1
        ;   Label: LAB_004caab1
    FCOMP float ptr [ESP + 0x174]       ; 004caab8
    FNSTSW AX                           ; 004caabf
    SAHF                                ; 004caac1
    JBE 0x004caad2                      ; 004caac2
        ;   XREF to: 004caad2 (CONDITIONAL_JUMP)  ; LAB_004caad2
    MOV EAX,dword ptr [ESP + 0x174]     ; 004caac4
    MOV dword ptr [ESP + 0x16c],EAX     ; 004caacb
    FLD float ptr [EBX + 0x1ffe0]       ; 004caad2
        ;   Label: LAB_004caad2
    FLD float ptr [EBX + 0x1ffdc]       ; 004caad8
    FADD float ptr [ESP + 0x16c]        ; 004caade
    FXCH                                ; 004caae5
    FADD float ptr [ESP + 0x170]        ; 004caae7
    FXCH                                ; 004caaee
    FSTP float ptr [EBX + 0x1ffdc]      ; 004caaf0
    FSTP float ptr [EBX + 0x1ffe0]      ; 004caaf6
    MOV ESP,EBP                         ; 004caafc
    POP EBP                             ; 004caafe
    POP EDI                             ; 004caaff
    POP ESI                             ; 004cab00
    POP EBX                             ; 004cab01
    RET                                 ; 004cab02

