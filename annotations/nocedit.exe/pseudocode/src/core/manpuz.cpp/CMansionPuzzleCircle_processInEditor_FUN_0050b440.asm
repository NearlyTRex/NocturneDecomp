; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_processInEditor_FUN_0050b440(CMansionPuzzleCircle *this_ptr)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x5c]:1  local_5c
; undefined1       Stack[-0x40]:1  local_40
; undefined1       Stack[-0x24]:1  local_24
;
; Referenced Globals:
;   int g_MansionPuzzleSlewType
;
; Called Functions:
;   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_slew.cpp_CSlew_init_FUN_005a2060
;   core_slew.cpp_CSlew_processInput_FUN_005a20b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050b440
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_processInEditor_FUN_0050b440
    PUSH EBP                            ; 0050b441
    SUB ESP,0x70                        ; 0050b442
    MOV EBX,dword ptr [ESP + 0x7c]      ; 0050b445
    MOV EDX,dword ptr [0x02f0cb1c]      ; 0050b449 | g_MansionPuzzleSlewType
    CMP EDX,0x1                         ; 0050b44f
    JZ 0x0050b5c9                       ; 0050b452
        ;   XREF to: 0050b5c9 (CONDITIONAL_JUMP)  ; LAB_0050b5c9
    CMP EDX,0x2                         ; 0050b458
    JZ 0x0050b63e                       ; 0050b45b
        ;   XREF to: 0050b63e (CONDITIONAL_JUMP)  ; LAB_0050b63e
    CMP EDX,0x3                         ; 0050b461
    JZ 0x0050b6e9                       ; 0050b464
        ;   XREF to: 0050b6e9 (CONDITIONAL_JUMP)  ; LAB_0050b6e9
    CMP EDX,0x4                         ; 0050b46a
    JNZ 0x0050b7ac                      ; 0050b46d
        ;   XREF to: 0050b7ac (CONDITIONAL_JUMP)  ; LAB_0050b7ac
    LEA EAX,[ESP + 0x1c]                ; 0050b473
    PUSH EAX                            ; 0050b477
    CALL core_slew.cpp_CSlew_init_FUN_005a2060 ; 0050b478
        ;   XREF to: 005a2060 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_init_FUN_005a2060(CSlew * this_ptr)
    LEA EAX,[ESP + 0x20]                ; 0050b47d
    LEA EDX,[EBX + 0x134c]              ; 0050b481
    ADD ESP,0x4                         ; 0050b487
    CMP EAX,EDX                         ; 0050b48a
    JZ 0x0050b4a2                       ; 0050b48c
        ;   XREF to: 0050b4a2 (CONDITIONAL_JUMP)  ; LAB_0050b4a2
    MOV EAX,dword ptr [EDX]             ; 0050b48e
    MOV dword ptr [ESP + 0x1c],EAX      ; 0050b490
    MOV EAX,dword ptr [EDX + 0x4]       ; 0050b494
    MOV dword ptr [ESP + 0x20],EAX      ; 0050b497
    MOV EAX,dword ptr [EDX + 0x8]       ; 0050b49b
    MOV dword ptr [ESP + 0x24],EAX      ; 0050b49e
    LEA EAX,[ESP + 0x28]                ; 0050b4a2
        ;   Label: LAB_0050b4a2
    LEA EDX,[EBX + 0x1368]              ; 0050b4a6
    CMP EAX,EDX                         ; 0050b4ac
    JZ 0x0050b4c4                       ; 0050b4ae
        ;   XREF to: 0050b4c4 (CONDITIONAL_JUMP)  ; LAB_0050b4c4
    MOV EAX,dword ptr [EDX]             ; 0050b4b0
    MOV dword ptr [ESP + 0x28],EAX      ; 0050b4b2
    MOV EAX,dword ptr [EDX + 0x4]       ; 0050b4b6
    MOV dword ptr [ESP + 0x2c],EAX      ; 0050b4b9
    MOV EAX,dword ptr [EDX + 0x8]       ; 0050b4bd
    MOV dword ptr [ESP + 0x30],EAX      ; 0050b4c0
    LEA EAX,[ESP + 0x1c]                ; 0050b4c4
        ;   Label: LAB_0050b4c4
    PUSH EAX                            ; 0050b4c8
    CALL core_slew.cpp_CSlew_processInput_FUN_005a20b0 ; 0050b4c9
        ;   XREF to: 005a20b0 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_processInput_FUN_005a20b0(CSlew * this_ptr)
    LEA EAX,[ESP + 0x20]                ; 0050b4ce
    LEA EDX,[EBX + 0x134c]              ; 0050b4d2
    ADD ESP,0x4                         ; 0050b4d8
    CMP EDX,EAX                         ; 0050b4db
    JZ 0x0050b4f3                       ; 0050b4dd
        ;   XREF to: 0050b4f3 (CONDITIONAL_JUMP)  ; LAB_0050b4f3
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0050b4df
    MOV dword ptr [EDX],EAX             ; 0050b4e3
    MOV EAX,dword ptr [ESP + 0x20]      ; 0050b4e5
    MOV dword ptr [EDX + 0x4],EAX       ; 0050b4e9
    MOV EAX,dword ptr [ESP + 0x24]      ; 0050b4ec
    MOV dword ptr [EDX + 0x8],EAX       ; 0050b4f0
    LEA EAX,[ESP + 0x28]                ; 0050b4f3
        ;   Label: LAB_0050b4f3
    LEA EDX,[EBX + 0x1368]              ; 0050b4f7
    CMP EDX,EAX                         ; 0050b4fd
    JZ 0x0050b515                       ; 0050b4ff
        ;   XREF to: 0050b515 (CONDITIONAL_JUMP)  ; LAB_0050b515
    MOV EAX,dword ptr [ESP + 0x28]      ; 0050b501
    MOV dword ptr [EDX],EAX             ; 0050b505
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0050b507
    MOV dword ptr [EDX + 0x4],EAX       ; 0050b50b
    MOV EAX,dword ptr [ESP + 0x30]      ; 0050b50e
    MOV dword ptr [EDX + 0x8],EAX       ; 0050b512
    MOV dword ptr [EBX + 0x1358],0x3f800000 ; 0050b515
        ;   Label: LAB_0050b515
    FLD float ptr [EBX + 0x1354]        ; 0050b51f
    MOV EAX,dword ptr [EBX + 0x134c]    ; 0050b525
    MOV dword ptr [EBX + 0x1340],EAX    ; 0050b52b
    FSTP float ptr [EBX + 0x1348]       ; 0050b531
    FLD float ptr [EBX + 0x1344]        ; 0050b537
        ;   Label: LAB_0050b537
    FLD float ptr [EBX + 0x1340]        ; 0050b53d
    FLD float ptr [EBX + 0x1348]        ; 0050b543
    FLD float ptr [EBX + 0x1350]        ; 0050b549
    FLD float ptr [EBX + 0x134c]        ; 0050b54f
    FLD float ptr [EBX + 0x1354]        ; 0050b555
    FLD float ptr [EBX + 0x1358]        ; 0050b55b
    FXCH ST5                            ; 0050b561
    FCHS                                ; 0050b563
    FXCH ST2                            ; 0050b565
    FCHS                                ; 0050b567
    MOV dword ptr [EBX + 0x38],0x0      ; 0050b569
    PUSH EBX                            ; 0050b570
    FXCH ST6                            ; 0050b571
    FSTP float ptr [EBX + 0x13a4]       ; 0050b573
    FXCH ST3                            ; 0050b579
    FSTP float ptr [EBX + 0x13a8]       ; 0050b57b
    FXCH                                ; 0050b581
    FSTP float ptr [EBX + 0x13b0]       ; 0050b583
    FXCH                                ; 0050b589
    FSTP float ptr [EBX + 0x13b4]       ; 0050b58b
    FXCH                                ; 0050b591
    FSTP float ptr [EBX + 0x13b8]       ; 0050b593
    FLD float ptr [EBX + 0x38]          ; 0050b599
    FXCH                                ; 0050b59c
    FSTP float ptr [EBX + 0x13a0]       ; 0050b59e
    FXCH                                ; 0050b5a4
    FSTP float ptr [EBX + 0x13ac]       ; 0050b5a6
    FSTP float ptr [EBX + 0x30]         ; 0050b5ac
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 0050b5af
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0050b5b4
    MOV EAX,dword ptr [EBX + 0x154]     ; 0050b5b7
    PUSH EBX                            ; 0050b5bd
    CALL dword ptr [EAX]                ; 0050b5be
    ADD ESP,0x4                         ; 0050b5c0
    ADD ESP,0x70                        ; 0050b5c3
    POP EBP                             ; 0050b5c6
    POP EBX                             ; 0050b5c7
    RET                                 ; 0050b5c8
    LEA EAX,[ESP + 0x38]                ; 0050b5c9
        ;   Label: LAB_0050b5c9
    PUSH EAX                            ; 0050b5cd
    CALL core_slew.cpp_CSlew_init_FUN_005a2060 ; 0050b5ce
        ;   XREF to: 005a2060 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_init_FUN_005a2060(CSlew * this_ptr)
    LEA EAX,[ESP + 0x3c]                ; 0050b5d3
    LEA EDX,[EBX + 0x5e4]               ; 0050b5d7
    ADD ESP,0x4                         ; 0050b5dd
    CMP EAX,EDX                         ; 0050b5e0
    JZ 0x0050b5f8                       ; 0050b5e2
        ;   XREF to: 0050b5f8 (CONDITIONAL_JUMP)  ; LAB_0050b5f8
    MOV EAX,dword ptr [EDX]             ; 0050b5e4
    MOV dword ptr [ESP + 0x38],EAX      ; 0050b5e6
    MOV EAX,dword ptr [EDX + 0x4]       ; 0050b5ea
    MOV dword ptr [ESP + 0x3c],EAX      ; 0050b5ed
    MOV EAX,dword ptr [EDX + 0x8]       ; 0050b5f1
    MOV dword ptr [ESP + 0x40],EAX      ; 0050b5f4
    XOR EAX,EAX                         ; 0050b5f8
        ;   Label: LAB_0050b5f8
    MOV dword ptr [ESP + 0x4c],EAX      ; 0050b5fa
    MOV dword ptr [ESP + 0x48],EAX      ; 0050b5fe
    MOV dword ptr [ESP + 0x44],EAX      ; 0050b602
    LEA EAX,[ESP + 0x38]                ; 0050b606
    PUSH EAX                            ; 0050b60a
    CALL core_slew.cpp_CSlew_processInput_FUN_005a20b0 ; 0050b60b
        ;   XREF to: 005a20b0 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_processInput_FUN_005a20b0(CSlew * this_ptr)
    LEA EAX,[ESP + 0x3c]                ; 0050b610
    LEA EDX,[EBX + 0x5e4]               ; 0050b614
    ADD ESP,0x4                         ; 0050b61a
    CMP EDX,EAX                         ; 0050b61d
    JZ 0x0050b537                       ; 0050b61f
        ;   XREF to: 0050b537 (CONDITIONAL_JUMP)  ; LAB_0050b537
    MOV EAX,dword ptr [ESP + 0x38]      ; 0050b625
    MOV dword ptr [EDX],EAX             ; 0050b629
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0050b62b
    MOV dword ptr [EDX + 0x4],EAX       ; 0050b62f
    MOV EAX,dword ptr [ESP + 0x40]      ; 0050b632
    MOV dword ptr [EDX + 0x8],EAX       ; 0050b636
    JMP 0x0050b537                      ; 0050b639
        ;   XREF to: 0050b537 (UNCONDITIONAL_JUMP)  ; LAB_0050b537
    LEA EAX,[ESP + 0x54]                ; 0050b63e
        ;   Label: LAB_0050b63e
    PUSH EAX                            ; 0050b642
    CALL core_slew.cpp_CSlew_init_FUN_005a2060 ; 0050b643
        ;   XREF to: 005a2060 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_init_FUN_005a2060(CSlew * this_ptr)
    LEA EAX,[ESP + 0x58]                ; 0050b648
    LEA EDX,[EBX + 0x5cc]               ; 0050b64c
    ADD ESP,0x4                         ; 0050b652
    CMP EAX,EDX                         ; 0050b655
    JZ 0x0050b66d                       ; 0050b657
        ;   XREF to: 0050b66d (CONDITIONAL_JUMP)  ; LAB_0050b66d
    MOV EAX,dword ptr [EDX]             ; 0050b659
    MOV dword ptr [ESP + 0x54],EAX      ; 0050b65b
    MOV EAX,dword ptr [EDX + 0x4]       ; 0050b65f
    MOV dword ptr [ESP + 0x58],EAX      ; 0050b662
    MOV EAX,dword ptr [EDX + 0x8]       ; 0050b666
    MOV dword ptr [ESP + 0x5c],EAX      ; 0050b669
    LEA EAX,[ESP + 0x60]                ; 0050b66d
        ;   Label: LAB_0050b66d
    LEA EDX,[EBX + 0x5d8]               ; 0050b671
    CMP EAX,EDX                         ; 0050b677
    JZ 0x0050b68f                       ; 0050b679
        ;   XREF to: 0050b68f (CONDITIONAL_JUMP)  ; LAB_0050b68f
    MOV EAX,dword ptr [EDX]             ; 0050b67b
    MOV dword ptr [ESP + 0x60],EAX      ; 0050b67d
    MOV EAX,dword ptr [EDX + 0x4]       ; 0050b681
    MOV dword ptr [ESP + 0x64],EAX      ; 0050b684
    MOV EAX,dword ptr [EDX + 0x8]       ; 0050b688
    MOV dword ptr [ESP + 0x68],EAX      ; 0050b68b
    LEA EAX,[ESP + 0x54]                ; 0050b68f
        ;   Label: LAB_0050b68f
    PUSH EAX                            ; 0050b693
    CALL core_slew.cpp_CSlew_processInput_FUN_005a20b0 ; 0050b694
        ;   XREF to: 005a20b0 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_processInput_FUN_005a20b0(CSlew * this_ptr)
    LEA EAX,[ESP + 0x58]                ; 0050b699
    LEA EDX,[EBX + 0x5cc]               ; 0050b69d
    ADD ESP,0x4                         ; 0050b6a3
    CMP EDX,EAX                         ; 0050b6a6
    JZ 0x0050b6be                       ; 0050b6a8
        ;   XREF to: 0050b6be (CONDITIONAL_JUMP)  ; LAB_0050b6be
    MOV EAX,dword ptr [ESP + 0x54]      ; 0050b6aa
    MOV dword ptr [EDX],EAX             ; 0050b6ae
    MOV EAX,dword ptr [ESP + 0x58]      ; 0050b6b0
    MOV dword ptr [EDX + 0x4],EAX       ; 0050b6b4
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0050b6b7
    MOV dword ptr [EDX + 0x8],EAX       ; 0050b6bb
    LEA EAX,[ESP + 0x60]                ; 0050b6be
        ;   Label: LAB_0050b6be
    LEA EDX,[EBX + 0x5d8]               ; 0050b6c2
    CMP EDX,EAX                         ; 0050b6c8
    JZ 0x0050b537                       ; 0050b6ca
        ;   XREF to: 0050b537 (CONDITIONAL_JUMP)  ; LAB_0050b537
    MOV EAX,dword ptr [ESP + 0x60]      ; 0050b6d0
    MOV dword ptr [EDX],EAX             ; 0050b6d4
    MOV EAX,dword ptr [ESP + 0x64]      ; 0050b6d6
    MOV dword ptr [EDX + 0x4],EAX       ; 0050b6da
    MOV EAX,dword ptr [ESP + 0x68]      ; 0050b6dd
    MOV dword ptr [EDX + 0x8],EAX       ; 0050b6e1
    JMP 0x0050b537                      ; 0050b6e4
        ;   XREF to: 0050b537 (UNCONDITIONAL_JUMP)  ; LAB_0050b537
    MOV EAX,ESP                         ; 0050b6e9
        ;   Label: LAB_0050b6e9
    PUSH EAX                            ; 0050b6eb
    CALL core_slew.cpp_CSlew_init_FUN_005a2060 ; 0050b6ec
        ;   XREF to: 005a2060 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_init_FUN_005a2060(CSlew * this_ptr)
    LEA EAX,[ESP + 0x4]                 ; 0050b6f1
    LEA EDX,[EBX + 0x1340]              ; 0050b6f5
    ADD ESP,0x4                         ; 0050b6fb
    CMP EAX,EDX                         ; 0050b6fe
    JZ 0x0050b715                       ; 0050b700
        ;   XREF to: 0050b715 (CONDITIONAL_JUMP)  ; LAB_0050b715
    MOV EAX,dword ptr [EDX]             ; 0050b702
    MOV dword ptr [ESP],EAX             ; 0050b704
    MOV EAX,dword ptr [EDX + 0x4]       ; 0050b707
    MOV dword ptr [ESP + 0x4],EAX       ; 0050b70a
    MOV EAX,dword ptr [EDX + 0x8]       ; 0050b70e
    MOV dword ptr [ESP + 0x8],EAX       ; 0050b711
    LEA EAX,[ESP + 0xc]                 ; 0050b715
        ;   Label: LAB_0050b715
    LEA EDX,[EBX + 0x1368]              ; 0050b719
    CMP EAX,EDX                         ; 0050b71f
    JZ 0x0050b737                       ; 0050b721
        ;   XREF to: 0050b737 (CONDITIONAL_JUMP)  ; LAB_0050b737
    MOV EAX,dword ptr [EDX]             ; 0050b723
    MOV dword ptr [ESP + 0xc],EAX       ; 0050b725
    MOV EAX,dword ptr [EDX + 0x4]       ; 0050b729
    MOV dword ptr [ESP + 0x10],EAX      ; 0050b72c
    MOV EAX,dword ptr [EDX + 0x8]       ; 0050b730
    MOV dword ptr [ESP + 0x14],EAX      ; 0050b733
    MOV EAX,ESP                         ; 0050b737
        ;   Label: LAB_0050b737
    PUSH EAX                            ; 0050b739
    CALL core_slew.cpp_CSlew_processInput_FUN_005a20b0 ; 0050b73a
        ;   XREF to: 005a20b0 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_processInput_FUN_005a20b0(CSlew * this_ptr)
    LEA EAX,[ESP + 0x4]                 ; 0050b73f
    LEA EDX,[EBX + 0x1340]              ; 0050b743
    ADD ESP,0x4                         ; 0050b749
    CMP EDX,EAX                         ; 0050b74c
    JZ 0x0050b763                       ; 0050b74e
        ;   XREF to: 0050b763 (CONDITIONAL_JUMP)  ; LAB_0050b763
    MOV EAX,dword ptr [ESP]             ; 0050b750
    MOV dword ptr [EDX],EAX             ; 0050b753
    MOV EAX,dword ptr [ESP + 0x4]       ; 0050b755
    MOV dword ptr [EDX + 0x4],EAX       ; 0050b759
    MOV EAX,dword ptr [ESP + 0x8]       ; 0050b75c
    MOV dword ptr [EDX + 0x8],EAX       ; 0050b760
    LEA EAX,[ESP + 0xc]                 ; 0050b763
        ;   Label: LAB_0050b763
    LEA EDX,[EBX + 0x1368]              ; 0050b767
    CMP EDX,EAX                         ; 0050b76d
    JZ 0x0050b785                       ; 0050b76f
        ;   XREF to: 0050b785 (CONDITIONAL_JUMP)  ; LAB_0050b785
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050b771
    MOV dword ptr [EDX],EAX             ; 0050b775
    MOV EAX,dword ptr [ESP + 0x10]      ; 0050b777
    MOV dword ptr [EDX + 0x4],EAX       ; 0050b77b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0050b77e
    MOV dword ptr [EDX + 0x8],EAX       ; 0050b782
    MOV dword ptr [EBX + 0x1358],0x0    ; 0050b785
        ;   Label: LAB_0050b785
    FLD float ptr [EBX + 0x1348]        ; 0050b78f
    MOV EAX,dword ptr [EBX + 0x1340]    ; 0050b795
    MOV dword ptr [EBX + 0x134c],EAX    ; 0050b79b
    FSTP float ptr [EBX + 0x1354]       ; 0050b7a1
    JMP 0x0050b537                      ; 0050b7a7
        ;   XREF to: 0050b537 (UNCONDITIONAL_JUMP)  ; LAB_0050b537
    XOR EBP,EBP                         ; 0050b7ac
        ;   Label: LAB_0050b7ac
    PUSH EBX                            ; 0050b7ae
    MOV dword ptr [0x02f0cb1c],EBP      ; 0050b7af | g_MansionPuzzleSlewType
    CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 ; 0050b7b5
        ;   XREF to: 0040d040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0050b7ba
    JMP 0x0050b537                      ; 0050b7bd
        ;   XREF to: 0050b537 (UNCONDITIONAL_JUMP)  ; LAB_0050b537

