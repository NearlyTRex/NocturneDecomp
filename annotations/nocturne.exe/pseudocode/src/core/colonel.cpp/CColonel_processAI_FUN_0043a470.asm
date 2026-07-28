; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_colonel_cpp_CColonel_processAI_FUN_0043a470(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0xac]:4  local_ac
; undefined8       Stack[-0xa8]:8  local_a8
; undefined8       Stack[-0xa0]:8  local_a0
; undefined8       Stack[-0x98]:8  local_98
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined        Stack[-0x84]:1  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined        Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x44]:4  local_44
; undefined        Stack[-0x3c]:1  local_3c
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
;   core_colonel.cpp_FUN_00439f50 at 00439fcb
;
; Referenced Globals:
;   double DOUBLE_0057b174 = 5.43968647586312E-315
;   double DOUBLE_0057b17c = 20
;   double DOUBLE_0057b184 = 6
;   double DOUBLE_0057b18c = 0.318309886192889
;   double DOUBLE_0057b194 = 4
;   double DOUBLE_0057b19c = 10
;   double DOUBLE_0057b1a4 = -0.25
;   double DOUBLE_0057b1ac = 0.25
;   double DOUBLE_0057b1b4 = 3.14159265350000
;   double DOUBLE_0057b1bc = -3.14159265350000
;   undefined4 DAT_01cae0e8
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_hero.cpp_CHero_closestEnemy_FUN_004b5d00
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600
;   core_path.cpp_getPathMap_FUN_004f1e00
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;   crt_memory.c_memset_FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043a470
        ;   Label: core_colonel.cpp_CColonel_processAI_FUN_0043a470
    PUSH ESI                            ; 0043a471
    PUSH EDI                            ; 0043a472
    PUSH EBP                            ; 0043a473
    MOV EBP,ESP                         ; 0043a474
    SUB ESP,0x98                        ; 0043a476
    AND ESP,0xfffffff8                  ; 0043a47c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0043a47f
    MOV EDX,0x3e800000                  ; 0043a482
    MOV ECX,0x3f490fdb                  ; 0043a487
    PUSH 0x2c                           ; 0043a48c
    XOR ESI,ESI                         ; 0043a48e
    MOV EDI,dword ptr [0x01cae0e8]      ; 0043a490 | DAT_01cae0e8
    PUSH ESI                            ; 0043a496
    LEA EAX,[EBX + 0xbc94]              ; 0043a497
    MOV dword ptr [ESP + 0x94],EDX      ; 0043a49d
    PUSH EAX                            ; 0043a4a4
    MOV dword ptr [ESP + 0x94],ECX      ; 0043a4a5
    MOV EDI,dword ptr [EDI*0x4 + 0x1cae0d8] ; 0043a4ac
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0043a4b3
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    MOV EAX,dword ptr [EBX + 0x1fa38]   ; 0043a4b8
    ADD ESP,0xc                         ; 0043a4be
    TEST EAX,EAX                        ; 0043a4c1
    JZ 0x0043a806                       ; 0043a4c3
        ;   XREF to: 0043a806 (CONDITIONAL_JUMP)  ; LAB_0043a806
    MOV EAX,[0x01cae0e8]                ; 0043a4c9 | DAT_01cae0e8
    LEA EDX,[EBX + 0x20]                ; 0043a4ce
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0043a4d1
    FLD float ptr [EDX]                 ; 0043a4d8
    FSUB float ptr [EAX + 0x20]         ; 0043a4da
    FSTP float ptr [ESP + 0x54]         ; 0043a4dd
    FLD float ptr [EDX + 0x4]           ; 0043a4e1
    FSUB float ptr [EAX + 0x24]         ; 0043a4e4
    FST float ptr [ESP + 0x58]          ; 0043a4e7
    FMUL float ptr [ESP + 0x58]         ; 0043a4eb
    FLD float ptr [ESP + 0x54]          ; 0043a4ef
    FMUL ST0                            ; 0043a4f3
    FLD float ptr [EDX + 0x8]           ; 0043a4f5
    FSUB float ptr [EAX + 0x28]         ; 0043a4f8
    FXCH                                ; 0043a4fb
    FADDP ST2,ST0                       ; 0043a4fd
    FST float ptr [ESP + 0x5c]          ; 0043a4ff
    FMUL float ptr [ESP + 0x5c]         ; 0043a503
    FADDP                               ; 0043a507
    FSQRT                               ; 0043a509
    MOV EDX,dword ptr [EBX + 0x1fa38]   ; 0043a50b
    FSTP float ptr [ESP + 0x7c]         ; 0043a511
    CMP EDX,0x3                         ; 0043a515
    JNZ 0x0043a80d                      ; 0043a518
        ;   XREF to: 0043a80d (CONDITIONAL_JUMP)  ; LAB_0043a80d
    MOV ECX,dword ptr [EBX + 0x1fa38]   ; 0043a51e
        ;   Label: LAB_0043a51e
    CMP ECX,0x2                         ; 0043a524
    JNZ 0x0043a825                      ; 0043a527
        ;   XREF to: 0043a825 (CONDITIONAL_JUMP)  ; LAB_0043a825
    LEA EAX,[ESP + 0x20]                ; 0043a52d
        ;   Label: LAB_0043a52d
    PUSH EAX                            ; 0043a531
    PUSH EBX                            ; 0043a532
    CALL core_hero.cpp_CHero_closestEnemy_FUN_004b5d00 ; 0043a533
        ;   XREF to: 004b5d00 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_CHero_closestEnemy_FUN_004b5d00()
    MOV EDX,EAX                         ; 0043a538
    ADD ESP,0x8                         ; 0043a53a
    TEST EAX,EAX                        ; 0043a53d
    JZ 0x0043a557                       ; 0043a53f
        ;   XREF to: 0043a557 (CONDITIONAL_JUMP)  ; LAB_0043a557
    FLD float ptr [ESP + 0x20]          ; 0043a541
    FCOMP double ptr [0x0057b17c]       ; 0043a545 | DOUBLE_0057b17c
    FNSTSW AX                           ; 0043a54b
    SAHF                                ; 0043a54d
    JNC 0x0043a557                      ; 0043a54e
        ;   XREF to: 0043a557 (CONDITIONAL_JUMP)  ; LAB_0043a557
    MOV ESI,0x1                         ; 0043a550
    MOV EDI,EDX                         ; 0043a555
    LEA EDX,[EDI + 0x20]                ; 0043a557
        ;   Label: LAB_0043a557
    LEA EAX,[EBX + 0x20]                ; 0043a55a
    FLD float ptr [EDX]                 ; 0043a55d
    FSUB float ptr [EAX]                ; 0043a55f
    FSTP float ptr [ESP + 0x48]         ; 0043a561
    FLD float ptr [EDX + 0x4]           ; 0043a565
    FSUB float ptr [EAX + 0x4]          ; 0043a568
    FSTP float ptr [ESP + 0x4c]         ; 0043a56b
    FLD float ptr [EDX + 0x8]           ; 0043a56f
    LEA EDX,[ESP + 0x54]                ; 0043a572
    FSUB float ptr [EAX + 0x8]          ; 0043a576
    LEA EAX,[ESP + 0x48]                ; 0043a579
    FSTP float ptr [ESP + 0x50]         ; 0043a57d
    CMP EDX,EAX                         ; 0043a581
    JZ 0x0043a59d                       ; 0043a583
        ;   XREF to: 0043a59d (CONDITIONAL_JUMP)  ; LAB_0043a59d
    MOV EAX,dword ptr [ESP + 0x48]      ; 0043a585
    MOV dword ptr [ESP + 0x54],EAX      ; 0043a589
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0043a58d
    MOV dword ptr [ESP + 0x58],EAX      ; 0043a591
    MOV EAX,dword ptr [ESP + 0x50]      ; 0043a595
    MOV dword ptr [ESP + 0x5c],EAX      ; 0043a599
    FLD float ptr [ESP + 0x58]          ; 0043a59d
        ;   Label: LAB_0043a59d
    FMUL ST0                            ; 0043a5a1
    FLD float ptr [ESP + 0x54]          ; 0043a5a3
    FMUL ST0                            ; 0043a5a7
    FADDP                               ; 0043a5a9
    FLD float ptr [ESP + 0x5c]          ; 0043a5ab
    FMUL ST0                            ; 0043a5af
    FADDP                               ; 0043a5b1
    FSQRT                               ; 0043a5b3
    FSTP float ptr [ESP + 0x78]         ; 0043a5b5
    MOV EAX,dword ptr [ESP + 0x78]      ; 0043a5b9
    FLD float ptr [ESP + 0x78]          ; 0043a5bd
    MOV dword ptr [ESP + 0x18],EAX      ; 0043a5c1
    FCOMP double ptr [0x0057b184]       ; 0043a5c5 | DOUBLE_0057b184
    FNSTSW AX                           ; 0043a5cb
    SAHF                                ; 0043a5cd
    JNC 0x0043a869                      ; 0043a5ce
        ;   XREF to: 0043a869 (CONDITIONAL_JUMP)  ; LAB_0043a869
    LEA EAX,[EBX + 0x150]               ; 0043a5d4
    CMP ESI,0x1                         ; 0043a5da
    JNZ 0x0043a85b                      ; 0043a5dd
        ;   XREF to: 0043a85b (CONDITIONAL_JUMP)  ; LAB_0043a85b
    CMP dword ptr [EBX + 0x1fa3c],0x0   ; 0043a5e3
    JNZ 0x0043a833                      ; 0043a5ea
        ;   XREF to: 0043a833 (CONDITIONAL_JUMP)  ; LAB_0043a833
    MOV dword ptr [EBX + 0xbcac],ESI    ; 0043a5f0
    CMP ESI,0x1                         ; 0043a5f6
        ;   Label: LAB_0043a5f6
    JNZ 0x0043a6c4                      ; 0043a5f9
        ;   XREF to: 0043a6c4 (CONDITIONAL_JUMP)  ; LAB_0043a6c4
    LEA EAX,[ESP + 0x54]                ; 0043a5ff
    PUSH EAX                            ; 0043a603
    LEA EAX,[ESP + 0x70]                ; 0043a604
    PUSH EAX                            ; 0043a608
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 0043a609
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    FLD float ptr [EAX + 0x4]           ; 0043a60e
    ADD ESP,0x8                         ; 0043a611
    FSUB float ptr [EBX + 0x34]         ; 0043a614
    SUB ESP,0x4                         ; 0043a617
    FSTP float ptr [ESP]                ; 0043a61a
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 0043a61d
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x98],EAX      ; 0043a622
    FLD float ptr [ESP + 0x98]          ; 0043a629
    FMUL double ptr [0x0057b18c]        ; 0043a630 | DOUBLE_0057b18c
    ADD ESP,0x4                         ; 0043a636
    FMUL double ptr [0x0057b194]        ; 0043a639 | DOUBLE_0057b194
    FLD float ptr [ESP + 0x8c]          ; 0043a63f
    FCHS                                ; 0043a646
    FSTP float ptr [ESP + 0x90]         ; 0043a648
    FST float ptr [EBX + 0xbcb8]        ; 0043a64f
    FCOMP float ptr [ESP + 0x90]        ; 0043a655
    FNSTSW AX                           ; 0043a65c
    SAHF                                ; 0043a65e
    JNC 0x0043a66e                      ; 0043a65f
        ;   XREF to: 0043a66e (CONDITIONAL_JUMP)  ; LAB_0043a66e
    MOV EAX,dword ptr [ESP + 0x90]      ; 0043a661
    MOV dword ptr [EBX + 0xbcb8],EAX    ; 0043a668
    FLD float ptr [EBX + 0xbcb8]        ; 0043a66e
        ;   Label: LAB_0043a66e
    FCOMP float ptr [ESP + 0x8c]        ; 0043a674
    FNSTSW AX                           ; 0043a67b
    SAHF                                ; 0043a67d
    JBE 0x0043a68d                      ; 0043a67e
        ;   XREF to: 0043a68d (CONDITIONAL_JUMP)  ; LAB_0043a68d
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0043a680
    MOV dword ptr [EBX + 0xbcb8],EAX    ; 0043a687
    FLD float ptr [EBX + 0xbcb8]        ; 0043a68d
        ;   Label: LAB_0043a68d
    FST double ptr [ESP + 0x10]         ; 0043a693
    FCOMP double ptr [0x0057b1a4]       ; 0043a697 | DOUBLE_0057b1a4
    FNSTSW AX                           ; 0043a69d
    SAHF                                ; 0043a69f
    JBE 0x0043a6c4                      ; 0043a6a0
        ;   XREF to: 0043a6c4 (CONDITIONAL_JUMP)  ; LAB_0043a6c4
    FLD double ptr [ESP + 0x10]         ; 0043a6a2
    FCOMP double ptr [0x0057b1ac]       ; 0043a6a6 | DOUBLE_0057b1ac
    FNSTSW AX                           ; 0043a6ac
    SAHF                                ; 0043a6ae
    JNC 0x0043a6c4                      ; 0043a6af
        ;   XREF to: 0043a6c4 (CONDITIONAL_JUMP)  ; LAB_0043a6c4
    CMP dword ptr [EBX + 0xbca0],0x0    ; 0043a6b1
    JZ 0x0043a6c4                       ; 0043a6b8
        ;   XREF to: 0043a6c4 (CONDITIONAL_JUMP)  ; LAB_0043a6c4
    MOV dword ptr [EBX + 0xbcb8],0x0    ; 0043a6ba
    LEA EAX,[EBX + 0x20]                ; 0043a6c4
        ;   Label: LAB_0043a6c4
    FLD float ptr [EDI + 0x20]          ; 0043a6c7
    FSUB float ptr [EAX]                ; 0043a6ca
    FSTP float ptr [ESP + 0x30]         ; 0043a6cc
    FLD float ptr [EDI + 0x24]          ; 0043a6d0
    FSUB float ptr [EAX + 0x4]          ; 0043a6d3
    LEA EDX,[ESP + 0x54]                ; 0043a6d6
    FSTP float ptr [ESP + 0x34]         ; 0043a6da
    FLD float ptr [EDI + 0x28]          ; 0043a6de
    FSUB float ptr [EAX + 0x8]          ; 0043a6e1
    LEA EAX,[ESP + 0x30]                ; 0043a6e4
    FSTP float ptr [ESP + 0x38]         ; 0043a6e8
    CMP EDX,EAX                         ; 0043a6ec
    JZ 0x0043a708                       ; 0043a6ee
        ;   XREF to: 0043a708 (CONDITIONAL_JUMP)  ; LAB_0043a708
    MOV EAX,dword ptr [ESP + 0x30]      ; 0043a6f0
    MOV dword ptr [ESP + 0x54],EAX      ; 0043a6f4
    MOV EAX,dword ptr [ESP + 0x34]      ; 0043a6f8
    MOV dword ptr [ESP + 0x58],EAX      ; 0043a6fc
    MOV EAX,dword ptr [ESP + 0x38]      ; 0043a700
    MOV dword ptr [ESP + 0x5c],EAX      ; 0043a704
    LEA EAX,[ESP + 0x54]                ; 0043a708
        ;   Label: LAB_0043a708
    PUSH EAX                            ; 0043a70c
    LEA EAX,[ESP + 0x40]                ; 0043a70d
    PUSH EAX                            ; 0043a711
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 0043a712
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    MOV EDX,EAX                         ; 0043a717
    LEA EAX,[ESP + 0x5c]                ; 0043a719
    ADD ESP,0x8                         ; 0043a71d
    CMP EAX,EDX                         ; 0043a720
    JZ 0x0043a738                       ; 0043a722
        ;   XREF to: 0043a738 (CONDITIONAL_JUMP)  ; LAB_0043a738
    MOV EAX,dword ptr [EDX]             ; 0043a724
    MOV dword ptr [ESP + 0x54],EAX      ; 0043a726
    MOV EAX,dword ptr [EDX + 0x4]       ; 0043a72a
    MOV dword ptr [ESP + 0x58],EAX      ; 0043a72d
    MOV EAX,dword ptr [EDX + 0x8]       ; 0043a731
    MOV dword ptr [ESP + 0x5c],EAX      ; 0043a734
    FLD float ptr [ESP + 0x58]          ; 0043a738
        ;   Label: LAB_0043a738
    FSUB float ptr [EBX + 0x34]         ; 0043a73c
    SUB ESP,0x4                         ; 0043a73f
    FSTP float ptr [ESP]                ; 0043a742
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 0043a745
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x98],EAX      ; 0043a74a
    FLD float ptr [ESP + 0x98]          ; 0043a751
    ADD ESP,0x4                         ; 0043a758
    FST float ptr [ESP + 0x64]          ; 0043a75b
    FCOMP float ptr [ESP + 0x88]        ; 0043a75f
    FNSTSW AX                           ; 0043a766
    SAHF                                ; 0043a768
    JBE 0x0043a776                      ; 0043a769
        ;   XREF to: 0043a776 (CONDITIONAL_JUMP)  ; LAB_0043a776
    MOV EAX,dword ptr [ESP + 0x88]      ; 0043a76b
    MOV dword ptr [ESP + 0x64],EAX      ; 0043a772
    FLD float ptr [ESP + 0x64]          ; 0043a776
        ;   Label: LAB_0043a776
    FLD float ptr [ESP + 0x88]          ; 0043a77a
    FCHS                                ; 0043a781
    FSTP float ptr [ESP + 0x84]         ; 0043a783
    FCOMP float ptr [ESP + 0x84]        ; 0043a78a
    FNSTSW AX                           ; 0043a791
    SAHF                                ; 0043a793
    JNC 0x0043a7a1                      ; 0043a794
        ;   XREF to: 0043a7a1 (CONDITIONAL_JUMP)  ; LAB_0043a7a1
    MOV EAX,dword ptr [ESP + 0x84]      ; 0043a796
    MOV dword ptr [ESP + 0x64],EAX      ; 0043a79d
    FLD float ptr [ESP + 0x64]          ; 0043a7a1
        ;   Label: LAB_0043a7a1
    FLD float ptr [EBP + 0x18]          ; 0043a7a5
    FXCH                                ; 0043a7a8
    FSUB float ptr [EBX + 0x1fa48]      ; 0043a7aa
    FXCH                                ; 0043a7b0
    FMUL double ptr [0x0057b1b4]        ; 0043a7b2 | DOUBLE_0057b1b4
    FXCH                                ; 0043a7b8
    FST float ptr [ESP + 0x1c]          ; 0043a7ba
    FXCH                                ; 0043a7be
    FSTP double ptr [ESP]               ; 0043a7c0
    FCOMP double ptr [ESP]              ; 0043a7c3
    FNSTSW AX                           ; 0043a7c6
    SAHF                                ; 0043a7c8
    JBE 0x0043a7d2                      ; 0043a7c9
        ;   XREF to: 0043a7d2 (CONDITIONAL_JUMP)  ; LAB_0043a7d2
    FLD double ptr [ESP]                ; 0043a7cb
    FSTP float ptr [ESP + 0x1c]         ; 0043a7ce
    FLD float ptr [EBP + 0x18]          ; 0043a7d2
        ;   Label: LAB_0043a7d2
    FMUL double ptr [0x0057b1bc]        ; 0043a7d5 | DOUBLE_0057b1bc
    FLD float ptr [ESP + 0x1c]          ; 0043a7db
    FXCH                                ; 0043a7df
    FSTP double ptr [ESP + 0x8]         ; 0043a7e1
    FCOMP double ptr [ESP + 0x8]        ; 0043a7e5
    FNSTSW AX                           ; 0043a7e9
    SAHF                                ; 0043a7eb
    JNC 0x0043a7f6                      ; 0043a7ec
        ;   XREF to: 0043a7f6 (CONDITIONAL_JUMP)  ; LAB_0043a7f6
    FLD double ptr [ESP + 0x8]          ; 0043a7ee
    FSTP float ptr [ESP + 0x1c]         ; 0043a7f2
    FLD float ptr [EBX + 0x1fa48]       ; 0043a7f6
        ;   Label: LAB_0043a7f6
    FADD float ptr [ESP + 0x1c]         ; 0043a7fc
    FSTP float ptr [EBX + 0x1fa48]      ; 0043a800
    MOV ESP,EBP                         ; 0043a806
        ;   Label: LAB_0043a806
    POP EBP                             ; 0043a808
    POP EDI                             ; 0043a809
    POP ESI                             ; 0043a80a
    POP EBX                             ; 0043a80b
    RET                                 ; 0043a80c
    FLD float ptr [ESP + 0x7c]          ; 0043a80d
        ;   Label: LAB_0043a80d
    FCOMP float ptr [0x0057b174]        ; 0043a811 | DOUBLE_0057b174
    FNSTSW AX                           ; 0043a817
    SAHF                                ; 0043a819
    JC 0x0043a51e                       ; 0043a81a
        ;   XREF to: 0043a51e (CONDITIONAL_JUMP)  ; LAB_0043a51e
    JMP 0x0043a557                      ; 0043a820
        ;   XREF to: 0043a557 (UNCONDITIONAL_JUMP)  ; LAB_0043a557
    CMP ECX,0x3                         ; 0043a825
        ;   Label: LAB_0043a825
    JZ 0x0043a52d                       ; 0043a828
        ;   XREF to: 0043a52d (CONDITIONAL_JUMP)  ; LAB_0043a52d
    JMP 0x0043a557                      ; 0043a82e
        ;   XREF to: 0043a557 (UNCONDITIONAL_JUMP)  ; LAB_0043a557
    PUSH EAX                            ; 0043a833
        ;   Label: LAB_0043a833
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 0043a834
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0043a839
    ADD ESP,0x4                         ; 0043a83c
    CMP EAX,0x2                         ; 0043a83f
    JZ 0x0043a5f6                       ; 0043a842
        ;   XREF to: 0043a5f6 (CONDITIONAL_JUMP)  ; LAB_0043a5f6
    CMP EAX,ESI                         ; 0043a848
    JZ 0x0043a5f6                       ; 0043a84a
        ;   XREF to: 0043a5f6 (CONDITIONAL_JUMP)  ; LAB_0043a5f6
    MOV dword ptr [EBX + 0xbca0],ESI    ; 0043a850
    JMP 0x0043a5f6                      ; 0043a856
        ;   XREF to: 0043a5f6 (UNCONDITIONAL_JUMP)  ; LAB_0043a5f6
    PUSH EAX                            ; 0043a85b
        ;   Label: LAB_0043a85b
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 0043a85c
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0043a861
    JMP 0x0043a5f6                      ; 0043a864
        ;   XREF to: 0043a5f6 (UNCONDITIONAL_JUMP)  ; LAB_0043a5f6
    XOR EAX,EAX                         ; 0043a869
        ;   Label: LAB_0043a869
    TEST ESI,ESI                        ; 0043a86b
    JNZ 0x0043a88b                      ; 0043a86d
        ;   XREF to: 0043a88b (CONDITIONAL_JUMP)  ; LAB_0043a88b
    MOV EAX,[0x01cae0e8]                ; 0043a86f | DAT_01cae0e8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0043a874
    PUSH EAX                            ; 0043a87b
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0043a87c
    CALL dword ptr [EDX + 0xbc]         ; 0043a882
    ADD ESP,0x4                         ; 0043a888
    TEST EAX,EAX                        ; 0043a88b
        ;   Label: LAB_0043a88b
    JNZ 0x0043a89b                      ; 0043a88d
        ;   XREF to: 0043a89b (CONDITIONAL_JUMP)  ; LAB_0043a89b
    LEA EAX,[EDI + 0x20]                ; 0043a88f
    PUSH EAX                            ; 0043a892
    CALL core_path.cpp_getPathMap_FUN_004f1e00 ; 0043a893
        ;   XREF to: 004f1e00 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_getPathMap_FUN_004f1e00(CLocation * location)
    ADD ESP,0x4                         ; 0043a898
    MOV EDX,dword ptr [EBX + 0x6c]      ; 0043a89b
        ;   Label: LAB_0043a89b
    PUSH EDX                            ; 0043a89e
    LEA EDX,[ESP + 0x28]                ; 0043a89f
    PUSH EDX                            ; 0043a8a3
    LEA EDX,[EBX + 0x20]                ; 0043a8a4
    PUSH EDX                            ; 0043a8a7
    PUSH EAX                            ; 0043a8a8
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600 ; 0043a8a9
        ;   XREF to: 004f1600 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 0043a8ae
    TEST EAX,EAX                        ; 0043a8b1
    JZ 0x0043a6c4                       ; 0043a8b3
        ;   XREF to: 0043a6c4 (CONDITIONAL_JUMP)  ; LAB_0043a6c4
    FLD float ptr [ESP + 0x28]          ; 0043a8b9
    FSUB float ptr [EBX + 0x34]         ; 0043a8bd
    SUB ESP,0x4                         ; 0043a8c0
    FSTP float ptr [ESP]                ; 0043a8c3
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 0043a8c6
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x98],EAX      ; 0043a8cb
    FLD float ptr [ESP + 0x98]          ; 0043a8d2
    FMUL double ptr [0x0057b18c]        ; 0043a8d9 | DOUBLE_0057b18c
    ADD ESP,0x4                         ; 0043a8df
    FMUL double ptr [0x0057b194]        ; 0043a8e2 | DOUBLE_0057b194
    FLD float ptr [ESP + 0x8c]          ; 0043a8e8
    FCHS                                ; 0043a8ef
    FSTP float ptr [ESP + 0x80]         ; 0043a8f1
    FST float ptr [EBX + 0xbcb8]        ; 0043a8f8
    FCOMP float ptr [ESP + 0x80]        ; 0043a8fe
    FNSTSW AX                           ; 0043a905
    SAHF                                ; 0043a907
    JC 0x0043a94c                       ; 0043a908
        ;   XREF to: 0043a94c (CONDITIONAL_JUMP)  ; LAB_0043a94c
    FLD float ptr [EBX + 0xbcb8]        ; 0043a90a
        ;   Label: LAB_0043a90a
    FCOMP float ptr [ESP + 0x8c]        ; 0043a910
    FNSTSW AX                           ; 0043a917
    SAHF                                ; 0043a919
    JBE 0x0043a929                      ; 0043a91a
        ;   XREF to: 0043a929 (CONDITIONAL_JUMP)  ; LAB_0043a929
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0043a91c
    MOV dword ptr [EBX + 0xbcb8],EAX    ; 0043a923
    FLD float ptr [ESP + 0x18]          ; 0043a929
        ;   Label: LAB_0043a929
    FCOMP double ptr [0x0057b19c]       ; 0043a92d | DOUBLE_0057b19c
    FNSTSW AX                           ; 0043a933
    SAHF                                ; 0043a935
    JNC 0x0043a95b                      ; 0043a936
        ;   XREF to: 0043a95b (CONDITIONAL_JUMP)  ; LAB_0043a95b
    CMP ESI,0x1                         ; 0043a938
    JZ 0x0043a95b                       ; 0043a93b
        ;   XREF to: 0043a95b (CONDITIONAL_JUMP)  ; LAB_0043a95b
    MOV dword ptr [EBX + 0xbc94],0x1    ; 0043a93d
    JMP 0x0043a6c4                      ; 0043a947
        ;   XREF to: 0043a6c4 (UNCONDITIONAL_JUMP)  ; LAB_0043a6c4
    MOV EAX,dword ptr [ESP + 0x80]      ; 0043a94c
        ;   Label: LAB_0043a94c
    MOV dword ptr [EBX + 0xbcb8],EAX    ; 0043a953
    JMP 0x0043a90a                      ; 0043a959
        ;   XREF to: 0043a90a (UNCONDITIONAL_JUMP)  ; LAB_0043a90a
    MOV dword ptr [EBX + 0xbc9c],0x1    ; 0043a95b
        ;   Label: LAB_0043a95b
    MOV dword ptr [EBX + 0xbc94],0x1    ; 0043a965
    JMP 0x0043a6c4                      ; 0043a96f
        ;   XREF to: 0043a6c4 (UNCONDITIONAL_JUMP)  ; LAB_0043a6c4

