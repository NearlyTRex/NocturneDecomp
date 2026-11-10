; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_spirmine_cpp_CSpiritMine_process_FUN_005ad530(CSpiritMine *this_ptr,float delta_time)
;
; Parameters:
; CSpiritMine *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_01cedef4
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_boxactor.cpp_CBoxActor_process_FUN_0041c090
;   core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0
;   core_spirmine.cpp_FUN_005ad940
;   core_xform.cpp_FUN_00591530
;   core_xform.cpp_FUN_00594380
;   core_xform.cpp_quaternionToMatrix3x4_FUN_00593a10
;   unkaddr_005a7eb0.cpp_FUN_005a7ed0
;   unkafter_superopt.cpp_FUN_005a8180
;   unkafter_superopt.cpp_FUN_005a8300
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad530
        ;   Label: core_spirmine.cpp_CSpiritMine_process_FUN_005ad530
    PUSH ESI                            ; 005ad531
    PUSH EDI                            ; 005ad532
    PUSH EBP                            ; 005ad533
    MOV EBP,ESP                         ; 005ad534
    SUB ESP,0x198                       ; 005ad536
    SUB EBP,0x7a                        ; 005ad53c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 005ad53f
    LEA EAX,[EBX + 0x154]               ; 005ad545
    PUSH dword ptr [EBP + 0x92]         ; 005ad54b
    PUSH EAX                            ; 005ad551
    MOV dword ptr [EBP + 0x72],EAX      ; 005ad552
    CALL unkafter_superopt.cpp_FUN_005a8180 ; 005ad555
        ;   XREF to: 005a8180 (UNCONDITIONAL_CALL)  ; undefined unkafter_superopt.cpp_FUN_005a8180()
    ADD ESP,0x8                         ; 005ad55a
    PUSH dword ptr [EBP + 0x92]         ; 005ad55d
    PUSH EBX                            ; 005ad563
    CALL core_boxactor.cpp_CBoxActor_process_FUN_0041c090 ; 005ad564
        ;   XREF to: 0041c090 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_CBoxActor_process_FUN_0041c090(CBoxActor * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005ad569
    PUSH EBX                            ; 005ad56c
    CALL core_spirmine.cpp_FUN_005ad940 ; 005ad56d
        ;   XREF to: 005ad940 (UNCONDITIONAL_CALL)  ; undefined core_spirmine.cpp_FUN_005ad940()
    MOV ESI,dword ptr [0x01cedef4]      ; 005ad572 | DAT_01cedef4
    LEA EAX,[EBX + 0x20]                ; 005ad578
    MOV ESI,dword ptr [ESI*0x4 + 0x1cedee4] ; 005ad57b
    FLD float ptr [EAX]                 ; 005ad582
    FSUB float ptr [ESI + 0x20]         ; 005ad584
    FMUL ST0                            ; 005ad587
    FLD float ptr [EAX + 0x8]           ; 005ad589
    FSUB float ptr [ESI + 0x28]         ; 005ad58c
    FMUL ST0                            ; 005ad58f
    FADDP                               ; 005ad591
    FSQRT                               ; 005ad593
    FLD float ptr [EBX + 0x7f0]         ; 005ad595
    FLDZ                                ; 005ad59b
    FXCH ST2                            ; 005ad59d
    FSTP float ptr [EBP + 0x6e]         ; 005ad59f
    MOV EAX,dword ptr [EBP + 0x6e]      ; 005ad5a2
    ADD ESP,0x4                         ; 005ad5a5
    MOV dword ptr [EBP + 0x6a],EAX      ; 005ad5a8
    FXCH                                ; 005ad5ab
    FCOMPP                              ; 005ad5ad
    FNSTSW AX                           ; 005ad5af
    SAHF                                ; 005ad5b1
    JNC 0x005ad7ab                      ; 005ad5b2
        ;   XREF to: 005ad7ab (CONDITIONAL_JUMP)  ; LAB_005ad7ab
    FLD float ptr [EBX + 0x7ec]         ; 005ad5b8
    FLD float ptr [EBP + 0x92]          ; 005ad5be
    FLD float ptr [EBX + 0x7f0]         ; 005ad5c4
    FSUB ST0,ST1                        ; 005ad5ca
    FXCH ST2                            ; 005ad5cc
    FSUBRP                              ; 005ad5ce
    FXCH                                ; 005ad5d0
    FSTP float ptr [EBX + 0x7f0]        ; 005ad5d2
    FST float ptr [EBX + 0x7ec]         ; 005ad5d8
    FLDZ                                ; 005ad5de
    FCOMPP                              ; 005ad5e0
    FNSTSW AX                           ; 005ad5e2
    SAHF                                ; 005ad5e4
    JC 0x005ad73d                       ; 005ad5e5
        ;   XREF to: 005ad73d (CONDITIONAL_JUMP)  ; LAB_005ad73d
    PUSH 0x40c90fdb                     ; 005ad5eb
    PUSH 0x40490fdb                     ; 005ad5f0
    MOV dword ptr [EBX + 0x7ec],0x3f000000 ; 005ad5f5
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005ad5ff
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    ADD ESP,0x8                         ; 005ad604
    MOV dword ptr [EBP + 0x76],EAX      ; 005ad607
    PUSH 0x40c90fdb                     ; 005ad60a
    FLD float ptr [EBP + 0x76]          ; 005ad60f
    PUSH 0x40490fdb                     ; 005ad612
    FSTP float ptr [EBP + 0x56]         ; 005ad617
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005ad61a
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    ADD ESP,0x8                         ; 005ad61f
    MOV dword ptr [EBP + 0x76],EAX      ; 005ad622
    PUSH 0x40c90fdb                     ; 005ad625
    FLD float ptr [EBP + 0x76]          ; 005ad62a
    PUSH 0x40490fdb                     ; 005ad62d
    FSTP float ptr [EBP + 0x52]         ; 005ad632
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005ad635
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 005ad63a
    MOV EAX,dword ptr [EBP + 0x56]      ; 005ad63d
    FLD float ptr [EBP + 0x76]          ; 005ad640
    MOV dword ptr [EBP + 0x2e],EAX      ; 005ad643
    MOV EAX,dword ptr [EBP + 0x52]      ; 005ad646
    FSTP float ptr [EBP + 0x4e]         ; 005ad649
    MOV dword ptr [EBP + 0x32],EAX      ; 005ad64c
    MOV EAX,dword ptr [EBP + 0x4e]      ; 005ad64f
    ADD ESP,0x8                         ; 005ad652
    MOV dword ptr [EBP + 0x36],EAX      ; 005ad655
    LEA EAX,[EBP + 0x2e]                ; 005ad658
    PUSH EAX                            ; 005ad65b
    LEA ESI,[EBP + -0x46]               ; 005ad65c
    LEA EDI,[EBP + -0x36]               ; 005ad65f
    CALL core_xform.cpp_FUN_00594380    ; 005ad662
        ;   XREF to: 00594380 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00594380()
    LEA ESI,[EBP + -0x46]               ; 005ad667
    LEA EAX,[EBP + -0x36]               ; 005ad66a
    ADD ESP,0x4                         ; 005ad66d
    MOVSD ES:EDI,ESI                    ; 005ad670
    MOVSD ES:EDI,ESI                    ; 005ad671
    MOVSD ES:EDI,ESI                    ; 005ad672
    MOVSD ES:EDI,ESI                    ; 005ad673
    PUSH EAX                            ; 005ad674
    LEA ESI,[EBP + 0xffffff5a]          ; 005ad675
    LEA EDI,[EBP + -0x76]               ; 005ad67b
    CALL core_xform.cpp_quaternionToMatrix3x4_FUN_00593a10 ; 005ad67e
        ;   XREF to: 00593a10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionToMatrix3x4_FUN_00593a10()
    MOV ECX,0xc                         ; 005ad683
    LEA ESI,[EBP + 0xffffff5a]          ; 005ad688
    LEA EAX,[EBP + -0x76]               ; 005ad68e
    ADD ESP,0x4                         ; 005ad691
    MOVSD.REP ES:EDI,ESI                ; 005ad694
    PUSH EAX                            ; 005ad696
    MOV EDI,0x3f800000                  ; 005ad697
    LEA EAX,[EBP + -0x1a]               ; 005ad69c
    XOR ECX,ECX                         ; 005ad69f
    LEA ESI,[EBP + 0x16]                ; 005ad6a1
    MOV dword ptr [EBP + -0x1a],ECX     ; 005ad6a4
    PUSH EAX                            ; 005ad6a7
    MOV dword ptr [EBP + -0x16],ECX     ; 005ad6a8
    MOV dword ptr [EBP + -0x12],EDI     ; 005ad6ab
    CALL core_xform.cpp_FUN_00591530    ; 005ad6ae
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 005ad6b3
    LEA EDI,[EBP + 0x22]                ; 005ad6b6
    XOR EAX,EAX                         ; 005ad6b9
    PUSH 0x3                            ; 005ad6bb
    MOV dword ptr [EBP + -0xe],EAX      ; 005ad6bd
    MOV dword ptr [EBP + -0x6],EAX      ; 005ad6c0
    LEA EAX,[EBP + -0xe]                ; 005ad6c3
    LEA ESI,[EBP + 0x16]                ; 005ad6c6
    PUSH EAX                            ; 005ad6c9
    LEA EAX,[EBP + -0x2]                ; 005ad6ca
    MOV EDX,0x3f800000                  ; 005ad6cd
    PUSH EAX                            ; 005ad6d2
    LEA EAX,[EBP + 0x22]                ; 005ad6d3
    MOV dword ptr [EBP + -0xa],EDX      ; 005ad6d6
    PUSH EAX                            ; 005ad6d9
    MOVSD ES:EDI,ESI                    ; 005ad6da
    MOVSD ES:EDI,ESI                    ; 005ad6db
    MOVSD ES:EDI,ESI                    ; 005ad6dc
    PUSH 0x3f266666                     ; 005ad6dd
    LEA EDI,[EBP + -0x2]                ; 005ad6e2
    PUSH 0x3f666666                     ; 005ad6e5
    LEA ESI,[EBP + 0x16]                ; 005ad6ea
    PUSH 0x3f333333                     ; 005ad6ed
    MOVSD ES:EDI,ESI                    ; 005ad6f2
    MOVSD ES:EDI,ESI                    ; 005ad6f3
    MOVSD ES:EDI,ESI                    ; 005ad6f4
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005ad6f5
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    ADD ESP,0x8                         ; 005ad6fa
    MOV dword ptr [EBP + 0x76],EAX      ; 005ad6fd
    SUB ESP,0x4                         ; 005ad700
    MOV EAX,dword ptr [EBP + 0x76]      ; 005ad703
    MOV dword ptr [ESP],EAX             ; 005ad706
    FLD float ptr [EBX + 0x7f0]         ; 005ad709
    FDIV float ptr [EBX + 0x7e0]        ; 005ad70f
    PUSH 0x3f051eb8                     ; 005ad715
    PUSH 0x40000000                     ; 005ad71a
    PUSH 0x3f000000                     ; 005ad71f
    PUSH 0x0                            ; 005ad724
    SUB ESP,0x4                         ; 005ad726
    FSTP float ptr [ESP]                ; 005ad729
    MOV ESI,dword ptr [EBP + 0x72]      ; 005ad72c
    PUSH 0x40000000                     ; 005ad72f
    PUSH ESI                            ; 005ad734
    CALL unkafter_superopt.cpp_FUN_005a8300 ; 005ad735
        ;   XREF to: 005a8300 (UNCONDITIONAL_CALL)  ; undefined unkafter_superopt.cpp_FUN_005a8300()
    ADD ESP,0x34                        ; 005ad73a
    FLD float ptr [EBP + 0x6a]          ; 005ad73d
        ;   Label: LAB_005ad73d
    FCOMP float ptr [EBX + 0x7d4]       ; 005ad740
    FNSTSW AX                           ; 005ad746
    SAHF                                ; 005ad748
    JBE 0x005ad753                      ; 005ad749
        ;   XREF to: 005ad753 (CONDITIONAL_JUMP)  ; LAB_005ad753
    LEA ESP,[EBP + 0x7a]                ; 005ad74b
        ;   Label: LAB_005ad74b
    POP EBP                             ; 005ad74e
    POP EDI                             ; 005ad74f
    POP ESI                             ; 005ad750
    POP EBX                             ; 005ad751
    RET                                 ; 005ad752
    LEA EAX,[EBP + 0xfffffee2]          ; 005ad753
        ;   Label: LAB_005ad753
    PUSH EAX                            ; 005ad759
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 005ad75a
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    FLD float ptr [EBX + 0x7e4]         ; 005ad75f
    FMUL float ptr [EBP + 0x92]         ; 005ad765
    MOV EAX,[0x01cedef4]                ; 005ad76b | DAT_01cedef4
    ADD ESP,0x4                         ; 005ad770
    MOV dword ptr [EBP + 0xffffff16],EBX ; 005ad773
    MOV dword ptr [EBP + 0xffffff1a],EBX ; 005ad779
    LEA EBX,[EBP + 0xfffffee2]          ; 005ad77f
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 005ad785
    PUSH EBX                            ; 005ad78c
    FSTP float ptr [EBP + 0xfffffee6]   ; 005ad78d
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 005ad793
    PUSH EAX                            ; 005ad799
    CALL dword ptr [ESI + 0x110]        ; 005ad79a
    ADD ESP,0x8                         ; 005ad7a0
    LEA ESP,[EBP + 0x7a]                ; 005ad7a3
    POP EBP                             ; 005ad7a6
    POP EDI                             ; 005ad7a7
    POP ESI                             ; 005ad7a8
    POP EBX                             ; 005ad7a9
    RET                                 ; 005ad7aa
    MOV dword ptr [EBX + 0x7f0],0x0     ; 005ad7ab
        ;   Label: LAB_005ad7ab
    FLD float ptr [EBP + 0x6e]          ; 005ad7b5
    FCOMP float ptr [EBX + 0x7d4]       ; 005ad7b8
    FNSTSW AX                           ; 005ad7be
    SAHF                                ; 005ad7c0
    JA 0x005ad74b                       ; 005ad7c1
        ;   XREF to: 005ad74b (CONDITIONAL_JUMP)  ; LAB_005ad74b
    MOV EDI,dword ptr [EBP + 0x72]      ; 005ad7c3
    XOR ESI,ESI                         ; 005ad7c6
    CALL unkaddr_005a7eb0.cpp_FUN_005a7ed0 ; 005ad7c8
        ;   XREF to: 005a7ed0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_005a7eb0.cpp_FUN_005a7ed0()
        ;   Label: LAB_005ad7c8
    TEST EAX,EAX                        ; 005ad7cd
    JNZ 0x005ad83e                      ; 005ad7cf
        ;   XREF to: 005ad83e (CONDITIONAL_JUMP)  ; LAB_005ad83e
    INC ESI                             ; 005ad7d1
        ;   Label: LAB_005ad7d1
    CMP ESI,0x64                        ; 005ad7d2
    JL 0x005ad7c8                       ; 005ad7d5
        ;   XREF to: 005ad7c8 (CONDITIONAL_JUMP)  ; LAB_005ad7c8
    LEA EAX,[EBP + 0xffffff1e]          ; 005ad7d7
    PUSH EAX                            ; 005ad7dd
    MOV ESI,0x40a00000                  ; 005ad7de
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 005ad7e3
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    MOV EAX,[0x01cedef4]                ; 005ad7e8 | DAT_01cedef4
    ADD ESP,0x4                         ; 005ad7ed
    MOV dword ptr [EBP + 0xffffff22],ESI ; 005ad7f0
    MOV dword ptr [EBP + 0xffffff52],EBX ; 005ad7f6
    LEA ESI,[EBP + 0xffffff1e]          ; 005ad7fc
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 005ad802
    MOV dword ptr [EBP + 0xffffff56],EBX ; 005ad809
    PUSH ESI                            ; 005ad80f
    MOV EDI,dword ptr [EAX + 0x2b0]     ; 005ad810
    PUSH EAX                            ; 005ad816
    CALL dword ptr [EDI + 0x110]        ; 005ad817
    FLD float ptr [EBX + 0x7e0]         ; 005ad81d
    MOV dword ptr [EBX + 0x7ec],0x0     ; 005ad823
    ADD ESP,0x8                         ; 005ad82d
    FSTP float ptr [EBX + 0x7f0]        ; 005ad830
    LEA ESP,[EBP + 0x7a]                ; 005ad836
    POP EBP                             ; 005ad839
    POP EDI                             ; 005ad83a
    POP ESI                             ; 005ad83b
    POP EBX                             ; 005ad83c
    RET                                 ; 005ad83d
    PUSH 0x40c90fdb                     ; 005ad83e
        ;   Label: LAB_005ad83e
    PUSH 0x0                            ; 005ad843
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005ad845
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    ADD ESP,0x8                         ; 005ad84a
    MOV dword ptr [EBP + 0x76],EAX      ; 005ad84d
    PUSH 0x40000000                     ; 005ad850
    FLD float ptr [EBP + 0x76]          ; 005ad855
    PUSH 0x3f800000                     ; 005ad858
    FSTP float ptr [EBP + 0x5e]         ; 005ad85d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005ad860
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    FLD float ptr [EBP + 0x5e]          ; 005ad865
    MOV dword ptr [EBP + 0x76],EAX      ; 005ad868
    FLD ST0                             ; 005ad86b
    FCOS                                ; 005ad86d
    FXCH                                ; 005ad86f
    FSIN                                ; 005ad871
    FLD float ptr [EBP + 0x76]          ; 005ad873
    FXCH ST2                            ; 005ad876
    FMUL ST2                            ; 005ad878
    ADD ESP,0x8                         ; 005ad87a
    FXCH                                ; 005ad87d
    FMULP ST2                           ; 005ad87f
    PUSH 0x40c00000                     ; 005ad881
    XOR EAX,EAX                         ; 005ad886
    PUSH 0x40400000                     ; 005ad888
    MOV dword ptr [EBP + -0x22],EAX     ; 005ad88d
    FSTP float ptr [EBP + 0x76]         ; 005ad890
    MOV EAX,dword ptr [EBP + 0x76]      ; 005ad893
    FSTP float ptr [EBP + -0x26]        ; 005ad896
    MOV dword ptr [EBP + -0x1e],EAX     ; 005ad899
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005ad89c
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 005ad8a1
    ADD ESP,0x8                         ; 005ad8a4
    XOR EDX,EDX                         ; 005ad8a7
    FLD float ptr [EBP + 0x76]          ; 005ad8a9
    PUSH EDX                            ; 005ad8ac
    FSTP float ptr [EBP + 0x66]         ; 005ad8ad
    MOV EAX,dword ptr [EBP + 0x66]      ; 005ad8b0
    PUSH EDX                            ; 005ad8b3
    MOV dword ptr [EBP + 0xe],EAX       ; 005ad8b4
    LEA EAX,[EBP + 0xa]                 ; 005ad8b7
    PUSH EAX                            ; 005ad8ba
    LEA EAX,[EBP + -0x26]               ; 005ad8bb
    PUSH EAX                            ; 005ad8be
    PUSH 0x3f2147ae                     ; 005ad8bf
    PUSH 0x3f28f5c3                     ; 005ad8c4
    PUSH 0x3df5c28f                     ; 005ad8c9
    PUSH 0x0                            ; 005ad8ce
    PUSH 0x3f000000                     ; 005ad8d0
    PUSH 0x0                            ; 005ad8d5
    PUSH 0x3f000000                     ; 005ad8d7
    PUSH 0x40400000                     ; 005ad8dc
    PUSH EDI                            ; 005ad8e1
    MOV dword ptr [EBP + 0xa],EDX       ; 005ad8e2
    MOV dword ptr [EBP + 0x12],EDX      ; 005ad8e5
    CALL unkafter_superopt.cpp_FUN_005a8300 ; 005ad8e8
        ;   XREF to: 005a8300 (UNCONDITIONAL_CALL)  ; undefined unkafter_superopt.cpp_FUN_005a8300()
    ADD ESP,0x34                        ; 005ad8ed
    JMP 0x005ad7d1                      ; 005ad8f0
        ;   XREF to: 005ad7d1 (UNCONDITIONAL_JUMP)  ; LAB_005ad7d1

