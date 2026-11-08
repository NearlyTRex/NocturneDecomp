; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00534420(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_004b7f90 at 004b822f
;   FUN_004f70a0 at 004f71fd
;
; Referenced Globals:
;   TerminatedCString s_Initializing_scene_005d03c9
;   TerminatedCString s_core_set_cpp_005d03dc
;   TerminatedCString s_CDemonSet_initScene_Memo_005d03ec
;   TerminatedCString s_core_set_cpp_005d042d
;   TerminatedCString s_CDemonSet_initScene_Too_005d043d
;   undefined4 DAT_005f190c
;   undefined4 DAT_006002ac
;   undefined4 DAT_006071f0
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_0203a414
;   undefined4 DAT_0203a418
;   undefined4 DAT_0203a598
;   undefined4 DAT_0203ad1c
;   undefined4 DAT_0203ad30
;   ... and 2 more
;
; Called Functions:
;   FUN_00448ca0
;   FUN_0044f680
;   FUN_004503f0
;   FUN_004596c0
;   FUN_0045c470
;   FUN_0045c530
;   FUN_0045c7e0
;   FUN_0045d070
;   FUN_004e0000
;   FUN_004e4330
;   FUN_00508960
;   FUN_00533b80
;   FUN_005418d0
;   FUN_00541a20
;   FUN_00542940
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534420
        ;   Label: FUN_00534420
    PUSH ESI                            ; 00534421
    PUSH EDI                            ; 00534422
    PUSH EBP                            ; 00534423
    SUB ESP,0x4                         ; 00534424
    MOV EBX,dword ptr [ESP + 0x18]      ; 00534427
    PUSH 0x0                            ; 0053442b
    PUSH 0x5d03c9                       ; 0053442d | = "Initializing scene"
    CALL FUN_00508960                   ; 00534432
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 00534437
    PUSH EAX                            ; 0053443a
    MOV EDX,dword ptr [0x006002ac]      ; 0053443b | DAT_006002ac
    PUSH EDX                            ; 00534441
    CALL FUN_004e0000                   ; 00534442
        ;   XREF to: 004e0000 (UNCONDITIONAL_CALL)  ; undefined FUN_004e0000()
    ADD ESP,0xc                         ; 00534447
    CALL FUN_0045c470                   ; 0053444a
        ;   XREF to: 0045c470 (UNCONDITIONAL_CALL)  ; undefined FUN_0045c470()
    MOV ECX,dword ptr [0x005f190c]      ; 0053444f | DAT_005f190c
    PUSH ECX                            ; 00534455
    CALL FUN_004596c0                   ; 00534456
        ;   XREF to: 004596c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004596c0()
    ADD ESP,0x4                         ; 0053445b
    XOR ESI,ESI                         ; 0053445e
    PUSH 0x2038f4c                      ; 00534460
    MOV dword ptr [0x0203ad1c],ESI      ; 00534465 | DAT_0203ad1c
    MOV dword ptr [EBX + 0x15acc8],0x0  ; 0053446b
    CALL FUN_00448ca0                   ; 00534475
        ;   XREF to: 00448ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00448ca0()
    ADD ESP,0x4                         ; 0053447a
    LEA ESI,[EBX + 0x15ac40]            ; 0053447d
    PUSH ESI                            ; 00534483
    PUSH 0x2038f4c                      ; 00534484
    MOV EDI,ESI                         ; 00534489
    CALL FUN_004503f0                   ; 0053448b
        ;   XREF to: 004503f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004503f0()
    LEA EAX,[EBX + 0x15ac64]            ; 00534490
    MOV EBP,dword ptr [ESI]             ; 00534496
    ADD ESI,0xc                         ; 00534498
    MOV dword ptr [EAX],EBP             ; 0053449b
    MOV EBP,dword ptr [ESI + -0x8]      ; 0053449d
    MOV EDX,EAX                         ; 005344a0
    MOV dword ptr [EAX + 0x4],EBP       ; 005344a2
    ADD EAX,0xc                         ; 005344a5
    MOV EBP,dword ptr [ESI + -0x4]      ; 005344a8
    ADD ESP,0x8                         ; 005344ab
    MOV dword ptr [EAX + -0x4],EBP      ; 005344ae
    CMP EAX,ESI                         ; 005344b1
    JZ 0x005344c5                       ; 005344b3
        ;   XREF to: 005344c5 (CONDITIONAL_JUMP)  ; LAB_005344c5
    MOV ECX,dword ptr [ESI]             ; 005344b5
    MOV dword ptr [EAX],ECX             ; 005344b7
    MOV ECX,dword ptr [ESI + 0x4]       ; 005344b9
    MOV dword ptr [EAX + 0x4],ECX       ; 005344bc
    MOV ECX,dword ptr [ESI + 0x8]       ; 005344bf
    MOV dword ptr [EAX + 0x8],ECX       ; 005344c2
    MOV EAX,dword ptr [EDI + 0x18]      ; 005344c5
        ;   Label: LAB_005344c5
    MOV dword ptr [EDX + 0x18],EAX      ; 005344c8
    MOV EAX,dword ptr [EDI + 0x1c]      ; 005344cb
    MOV dword ptr [EDX + 0x1c],EAX      ; 005344ce
    MOV EAX,dword ptr [EDI + 0x20]      ; 005344d1
    MOV dword ptr [EDX + 0x20],EAX      ; 005344d4
    PUSH dword ptr [EBX + 0x14d150]     ; 005344d7
    PUSH 0x2038f4c                      ; 005344dd
    MOV EBP,0x5d03dc                    ; 005344e2 | = "..\\core\\set.cpp"
    XOR ESI,ESI                         ; 005344e7
    CALL FUN_0044f680                   ; 005344e9
        ;   XREF to: 0044f680 (UNCONDITIONAL_CALL)  ; undefined FUN_0044f680()
    ADD ESP,0x8                         ; 005344ee
    CMP dword ptr [ESI + 0x203a418],0x0 ; 005344f1 | DAT_0203a418
        ;   Label: LAB_005344f1
    JZ 0x00534517                       ; 005344f8
        ;   XREF to: 00534517 (CONDITIONAL_JUMP)  ; LAB_00534517
    MOV EAX,0x3f1                       ; 005344fa
    PUSH 0x5d03ec                       ; 005344ff | = "CDemonSet::initScene - Memory leakage..."
    MOV dword ptr [0x01d71de0],EBP      ; 00534504 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0053450a | DAT_01d71de4
    CALL FUN_004e4330                   ; 0053450f
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00534514
    ADD ESI,0x4                         ; 00534517
        ;   Label: LAB_00534517
    CMP ESI,0x180                       ; 0053451a
    JNZ 0x005344f1                      ; 00534520
        ;   XREF to: 005344f1 (CONDITIONAL_JUMP)  ; LAB_005344f1
    MOV ECX,dword ptr [EBX + 0x19a2c]   ; 00534522
    XOR EDX,EDX                         ; 00534528
    XOR ESI,ESI                         ; 0053452a
    MOV dword ptr [0x0203a414],EDX      ; 0053452c | DAT_0203a414
    TEST ECX,ECX                        ; 00534532
    JLE 0x00534565                      ; 00534534
        ;   XREF to: 00534565 (CONDITIONAL_JUMP)  ; LAB_00534565
    LEA EAX,[EBX + 0x19a30]             ; 00534536
    MOV EDI,EBX                         ; 0053453c
    MOV dword ptr [ESP],EAX             ; 0053453e
    IMUL EBP,ESI,0x1898                 ; 00534541
        ;   Label: LAB_00534541
    CMP dword ptr [EDI + 0x19a30],0x0   ; 00534547
    JZ 0x0053464e                       ; 0053454e
        ;   XREF to: 0053464e (CONDITIONAL_JUMP)  ; LAB_0053464e
    INC ESI                             ; 00534554
        ;   Label: LAB_00534554
    MOV EBP,dword ptr [EBX + 0x19a2c]   ; 00534555
    ADD EDI,0x1898                      ; 0053455b
    CMP ESI,EBP                         ; 00534561
    JL 0x00534541                       ; 00534563
        ;   XREF to: 00534541 (CONDITIONAL_JUMP)  ; LAB_00534541
    MOV EAX,[0x0203a414]                ; 00534565 | DAT_0203a414
        ;   Label: LAB_00534565
    XOR EDI,EDI                         ; 0053456a
    TEST EAX,EAX                        ; 0053456c
    JLE 0x005345c0                      ; 0053456e
        ;   XREF to: 005345c0 (CONDITIONAL_JUMP)  ; LAB_005345c0
    XOR EBP,EBP                         ; 00534570
    PUSH 0x0                            ; 00534572
        ;   Label: LAB_00534572
    MOV ESI,dword ptr [EBP + 0x203a418] ; 00534574 | DAT_0203a418
    PUSH ESI                            ; 0053457a
    CALL FUN_0045c530                   ; 0053457b
        ;   XREF to: 0045c530 (UNCONDITIONAL_CALL)  ; undefined FUN_0045c530()
    ADD ESP,0x8                         ; 00534580
    PUSH ESI                            ; 00534583
    CALL FUN_0045d070                   ; 00534584
        ;   XREF to: 0045d070 (UNCONDITIONAL_CALL)  ; undefined FUN_0045d070()
    ADD ESP,0x4                         ; 00534589
    PUSH 0x0                            ; 0053458c
    PUSH 0x461c3f9a                     ; 0053458e
    PUSH EBX                            ; 00534593
    CALL FUN_00533b80                   ; 00534594
        ;   XREF to: 00533b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00533b80()
    ADD ESP,0xc                         ; 00534599
    PUSH 0x0                            ; 0053459c
    PUSH ESI                            ; 0053459e
    ADD EBP,0x4                         ; 0053459f
    INC EDI                             ; 005345a2
    CALL FUN_0045c7e0                   ; 005345a3
        ;   XREF to: 0045c7e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045c7e0()
    MOV EDX,dword ptr [0x0203a414]      ; 005345a8 | DAT_0203a414
    ADD ESP,0x8                         ; 005345ae
    CMP EDI,EDX                         ; 005345b1
    JL 0x00534572                       ; 005345b3
        ;   XREF to: 00534572 (CONDITIONAL_JUMP)  ; LAB_00534572
    LEA EAX,[EAX]                       ; 005345b5
    LEA EDX,[EDX]                       ; 005345bb
    MOV EBX,EBX                         ; 005345be
    MOV dword ptr [EBX + 0x15aeb8],0xffffffff ; 005345c0
        ;   Label: LAB_005345c0
    PUSH EBX                            ; 005345ca
    MOV dword ptr [EBX + 0x15aebc],0xffffffff ; 005345cb
    XOR ECX,ECX                         ; 005345d5
    XOR ESI,ESI                         ; 005345d7
    MOV dword ptr [0x0203a598],ECX      ; 005345d9 | DAT_0203a598
    MOV dword ptr [0x0203b3e8],ECX      ; 005345df | DAT_0203b3e8
    MOV dword ptr [0x0203ad30],ECX      ; 005345e5 | DAT_0203ad30
    MOV dword ptr [0x0203aec4],ECX      ; 005345eb | DAT_0203aec4
    MOV dword ptr [EBX + 0x15aec0],ECX  ; 005345f1
    CALL FUN_005418d0                   ; 005345f7
        ;   XREF to: 005418d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005418d0()
    MOV EAX,dword ptr [EBX]             ; 005345fc
    ADD ESP,0x4                         ; 005345fe
    TEST EAX,EAX                        ; 00534601
    JLE 0x00534630                      ; 00534603
        ;   XREF to: 00534630 (CONDITIONAL_JUMP)  ; LAB_00534630
    MOV EDI,EBX                         ; 00534605
    LEA EBP,[EBX + 0x104]               ; 00534607
    PUSH EBP                            ; 0053460d
        ;   Label: LAB_0053460d
    PUSH EBX                            ; 0053460e
    ADD EDI,0x1a4                       ; 0053460f
    INC ESI                             ; 00534615
    CALL FUN_00541a20                   ; 00534616
        ;   XREF to: 00541a20 (UNCONDITIONAL_CALL)  ; undefined FUN_00541a20()
    MOV dword ptr [EDI + -0x4],EAX      ; 0053461b
    ADD EBP,0x1a4                       ; 0053461e
    MOV EDX,dword ptr [EBX]             ; 00534624
    ADD ESP,0x8                         ; 00534626
    CMP ESI,EDX                         ; 00534629
    JL 0x0053460d                       ; 0053462b
        ;   XREF to: 0053460d (CONDITIONAL_JUMP)  ; LAB_0053460d
    LEA EAX,[EAX]                       ; 0053462d
    MOV ECX,dword ptr [EBX + 0x161680]  ; 00534630
        ;   Label: LAB_00534630
    PUSH ECX                            ; 00534636
    MOV EBX,dword ptr [0x006071f0]      ; 00534637 | DAT_006071f0
    PUSH EBX                            ; 0053463d
    CALL FUN_0057d050                   ; 0053463e
        ;   XREF to: 0057d050 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d050()
    ADD ESP,0x8                         ; 00534643
    ADD ESP,0x4                         ; 00534646
    POP EBP                             ; 00534649
    POP EDI                             ; 0053464a
    POP ESI                             ; 0053464b
    POP EBX                             ; 0053464c
    RET                                 ; 0053464d
    ADD EBP,dword ptr [ESP]             ; 0053464e
        ;   Label: LAB_0053464e
    PUSH EBP                            ; 00534651
    CALL FUN_00542940                   ; 00534652
        ;   XREF to: 00542940 (UNCONDITIONAL_CALL)  ; undefined FUN_00542940()
    ADD ESP,0x4                         ; 00534657
    PUSH EAX                            ; 0053465a
    MOV EDX,dword ptr [0x0203a414]      ; 0053465b | DAT_0203a414
    PUSH EBP                            ; 00534661
    MOV dword ptr [EDX*0x4 + 0x203a418],EAX ; 00534662 | DAT_0203a418
    CALL FUN_00542aa0                   ; 00534669
        ;   XREF to: 00542aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00542aa0()
    MOV EDX,dword ptr [0x0203a414]      ; 0053466e | DAT_0203a414
    INC EDX                             ; 00534674
    ADD ESP,0x8                         ; 00534675
    MOV dword ptr [0x0203a414],EDX      ; 00534678 | DAT_0203a414
    CMP EDX,0x60                        ; 0053467e
    JLE 0x00534554                      ; 00534681
        ;   XREF to: 00534554 (CONDITIONAL_JUMP)  ; LAB_00534554
    MOV EBP,0x5d042d                    ; 00534687 | = "..\\core\\set.cpp"
    MOV EAX,0x408                       ; 0053468c
    PUSH 0x5d043d                       ; 00534691 | = "CDemonSet::initScene - Too many spotl..."
    MOV dword ptr [0x01d71de0],EBP      ; 00534696 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0053469c | DAT_01d71de4
    CALL FUN_004e4330                   ; 005346a1
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 005346a6
    JMP 0x00534554                      ; 005346a9
        ;   XREF to: 00534554 (UNCONDITIONAL_JUMP)  ; LAB_00534554

