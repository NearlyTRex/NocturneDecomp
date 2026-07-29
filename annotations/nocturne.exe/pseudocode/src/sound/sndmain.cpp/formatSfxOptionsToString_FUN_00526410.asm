; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_formatSfxOptionsToString_FUN_00526410(char *output_buffer,char *prefix_string,CSfxOptions *options,uint format_flags)
;
; Parameters:
; char *           Stack[0x4]:4   output_buffer
; char *           Stack[0x8]:4   prefix_string
; CSfxOptions *    Stack[0xc]:4   options
; uint             Stack[0x10]:4   format_flags
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
;
; Referenced Globals:
;   TerminatedCString s_s_005934dc
;   TerminatedCString s_channel_d_s_005934df
;   TerminatedCString s_pos_lg_lg_lg_005934ed
;   TerminatedCString s_posPtrFloat_p_005934fe
;   TerminatedCString s_posPtrDouble_p_0059350e
;   TerminatedCString s_vel_lg_lg_lg_0059351f
;   TerminatedCString s_velPtrFloat_p_00593530
;   TerminatedCString s_velPtrDouble_p_00593540
;   TerminatedCString s_vol_g_00593551
;   TerminatedCString s_freq_g_00593559
;   TerminatedCString s_delay_lg_00593562
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00526410
        ;   Label: sound_sndmain.cpp_formatSfxOptionsToString_FUN_00526410
    PUSH ESI                            ; 00526411
    PUSH EDI                            ; 00526412
    PUSH EBP                            ; 00526413
    MOV EDI,dword ptr [ESP + 0x14]      ; 00526414
    MOV EAX,dword ptr [ESP + 0x18]      ; 00526418
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0052641c
    MOV EBX,EDI                         ; 00526420
    TEST EAX,EAX                        ; 00526422
    JNZ 0x00526565                      ; 00526424
        ;   XREF to: 00526565 (CONDITIONAL_JUMP)  ; LAB_00526565
    MOV byte ptr [EDI],0x0              ; 0052642a
    TEST byte ptr [ESP + 0x20],0x1      ; 0052642d
        ;   Label: LAB_0052642d
    JZ 0x00526447                       ; 00526432
        ;   XREF to: 00526447 (CONDITIONAL_JUMP)  ; LAB_00526447
    MOV EDX,dword ptr [ESI]             ; 00526434
    PUSH EDX                            ; 00526436
    PUSH 0x5934df                       ; 00526437 | = " channel=%d%s"
    PUSH EBX                            ; 0052643c
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052643d
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 00526442
    ADD EBX,EAX                         ; 00526445
    TEST byte ptr [ESP + 0x20],0x2      ; 00526447
        ;   Label: LAB_00526447
    JZ 0x005264b0                       ; 0052644c
        ;   XREF to: 005264b0 (CONDITIONAL_JUMP)  ; LAB_005264b0
    CMP dword ptr [ESI + 0x20],0x0      ; 0052644e
    JNZ 0x0052647c                      ; 00526452
        ;   XREF to: 0052647c (CONDITIONAL_JUMP)  ; LAB_0052647c
    MOV EDI,dword ptr [ESI + 0x18]      ; 00526454
    PUSH EDI                            ; 00526457
    MOV EBP,dword ptr [ESI + 0x14]      ; 00526458
    PUSH EBP                            ; 0052645b
    MOV EAX,dword ptr [ESI + 0x10]      ; 0052645c
    PUSH EAX                            ; 0052645f
    MOV EDX,dword ptr [ESI + 0xc]       ; 00526460
    PUSH EDX                            ; 00526463
    MOV ECX,dword ptr [ESI + 0x8]       ; 00526464
    PUSH ECX                            ; 00526467
    MOV EDI,dword ptr [ESI + 0x4]       ; 00526468
    PUSH EDI                            ; 0052646b
    PUSH 0x5934ed                       ; 0052646c | = " pos=%lg,%lg,%lg"
    PUSH EBX                            ; 00526471
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00526472
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x20                        ; 00526477
    ADD EBX,EAX                         ; 0052647a
    CMP dword ptr [ESI + 0x20],0x1      ; 0052647c
        ;   Label: LAB_0052647c
    JNZ 0x00526496                      ; 00526480
        ;   XREF to: 00526496 (CONDITIONAL_JUMP)  ; LAB_00526496
    MOV EAX,dword ptr [ESI + 0x1c]      ; 00526482
    PUSH EAX                            ; 00526485
    PUSH 0x5934fe                       ; 00526486 | = " posPtrFloat=%p"
    PUSH EBX                            ; 0052648b
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052648c
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 00526491
    ADD EBX,EAX                         ; 00526494
    CMP dword ptr [ESI + 0x20],0x2      ; 00526496
        ;   Label: LAB_00526496
    JNZ 0x005264b0                      ; 0052649a
        ;   XREF to: 005264b0 (CONDITIONAL_JUMP)  ; LAB_005264b0
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0052649c
    PUSH ECX                            ; 0052649f
    PUSH 0x59350e                       ; 005264a0 | = " posPtrDouble=%p"
    PUSH EBX                            ; 005264a5
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 005264a6
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 005264ab
    ADD EBX,EAX                         ; 005264ae
    TEST byte ptr [ESP + 0x20],0x4      ; 005264b0
        ;   Label: LAB_005264b0
    JZ 0x00526519                       ; 005264b5
        ;   XREF to: 00526519 (CONDITIONAL_JUMP)  ; LAB_00526519
    CMP dword ptr [ESI + 0x40],0x0      ; 005264b7
    JNZ 0x005264e5                      ; 005264bb
        ;   XREF to: 005264e5 (CONDITIONAL_JUMP)  ; LAB_005264e5
    MOV EBP,dword ptr [ESI + 0x38]      ; 005264bd
    PUSH EBP                            ; 005264c0
    MOV EAX,dword ptr [ESI + 0x34]      ; 005264c1
    PUSH EAX                            ; 005264c4
    MOV EDX,dword ptr [ESI + 0x30]      ; 005264c5
    PUSH EDX                            ; 005264c8
    MOV ECX,dword ptr [ESI + 0x2c]      ; 005264c9
    PUSH ECX                            ; 005264cc
    MOV EDI,dword ptr [ESI + 0x28]      ; 005264cd
    PUSH EDI                            ; 005264d0
    MOV EBP,dword ptr [ESI + 0x24]      ; 005264d1
    PUSH EBP                            ; 005264d4
    PUSH 0x59351f                       ; 005264d5 | = " vel=%lg,%lg,%lg"
    PUSH EBX                            ; 005264da
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 005264db
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x20                        ; 005264e0
    ADD EBX,EAX                         ; 005264e3
    CMP dword ptr [ESI + 0x40],0x1      ; 005264e5
        ;   Label: LAB_005264e5
    JNZ 0x005264ff                      ; 005264e9
        ;   XREF to: 005264ff (CONDITIONAL_JUMP)  ; LAB_005264ff
    MOV EDX,dword ptr [ESI + 0x3c]      ; 005264eb
    PUSH EDX                            ; 005264ee
    PUSH 0x593530                       ; 005264ef | = " velPtrFloat=%p"
    PUSH EBX                            ; 005264f4
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 005264f5
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 005264fa
    ADD EBX,EAX                         ; 005264fd
    CMP dword ptr [ESI + 0x40],0x2      ; 005264ff
        ;   Label: LAB_005264ff
    JNZ 0x00526519                      ; 00526503
        ;   XREF to: 00526519 (CONDITIONAL_JUMP)  ; LAB_00526519
    MOV EDI,dword ptr [ESI + 0x3c]      ; 00526505
    PUSH EDI                            ; 00526508
    PUSH 0x593540                       ; 00526509 | = " velPtrDouble=%p"
    PUSH EBX                            ; 0052650e
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052650f
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 00526514
    ADD EBX,EAX                         ; 00526517
    TEST byte ptr [ESP + 0x20],0x8      ; 00526519
        ;   Label: LAB_00526519
    JZ 0x00526539                       ; 0052651e
        ;   XREF to: 00526539 (CONDITIONAL_JUMP)  ; LAB_00526539
    SUB ESP,0x8                         ; 00526520
    FLD float ptr [ESI + 0x44]          ; 00526523
    FSTP double ptr [ESP]               ; 00526526
    PUSH 0x593551                       ; 00526529 | = " vol=%g"
    PUSH EBX                            ; 0052652e
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052652f
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 00526534
    ADD EBX,EAX                         ; 00526537
    TEST byte ptr [ESP + 0x20],0x10     ; 00526539
        ;   Label: LAB_00526539
    JZ 0x00526559                       ; 0052653e
        ;   XREF to: 00526559 (CONDITIONAL_JUMP)  ; LAB_00526559
    SUB ESP,0x8                         ; 00526540
    FLD float ptr [ESI + 0x48]          ; 00526543
    FSTP double ptr [ESP]               ; 00526546
    PUSH 0x593559                       ; 00526549 | = " freq=%g"
    PUSH EBX                            ; 0052654e
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052654f
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 00526554
    ADD EBX,EAX                         ; 00526557
    TEST byte ptr [ESP + 0x20],0x20     ; 00526559
        ;   Label: LAB_00526559
    JNZ 0x0052657c                      ; 0052655e
        ;   XREF to: 0052657c (CONDITIONAL_JUMP)  ; LAB_0052657c
    POP EBP                             ; 00526560
    POP EDI                             ; 00526561
    POP ESI                             ; 00526562
    POP EBX                             ; 00526563
    RET                                 ; 00526564
    PUSH EAX                            ; 00526565
        ;   Label: LAB_00526565
    PUSH 0x5934dc                       ; 00526566 | = "%s"
    PUSH EDI                            ; 0052656b
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052656c
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 00526571
    LEA EBX,[EDI + EAX*0x1]             ; 00526574
    JMP 0x0052642d                      ; 00526577
        ;   XREF to: 0052642d (UNCONDITIONAL_JUMP)  ; LAB_0052642d
    MOV EBP,dword ptr [ESI + 0x50]      ; 0052657c
        ;   Label: LAB_0052657c
    PUSH EBP                            ; 0052657f
    MOV EAX,dword ptr [ESI + 0x4c]      ; 00526580
    PUSH EAX                            ; 00526583
    PUSH 0x593562                       ; 00526584 | = " delay=%lg"
    PUSH EBX                            ; 00526589
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052658a
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0052658f
    POP EBP                             ; 00526592
    POP EDI                             ; 00526593
    POP ESI                             ; 00526594
    POP EBX                             ; 00526595
    RET                                 ; 00526596

