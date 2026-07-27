; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_closestHeroToPoint_FUN_004b4500(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_charactr.cpp_FUN_0042af70 at 0042aff7
;   core_emitter.cpp_CEmitter_launchFireballAtHero_FUN_004785a0 at 004785b1
;
; Referenced Globals:
;   TerminatedCString s_core_hero_cpp_0058569a
;   TerminatedCString s_closestHeroToPoint_no_he_005856ab
;   undefined4 DAT_01cae0d4
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b4500
        ;   Label: core_hero.cpp_closestHeroToPoint_FUN_004b4500
    PUSH ESI                            ; 004b4501
    PUSH EDI                            ; 004b4502
    PUSH EBP                            ; 004b4503
    SUB ESP,0x14                        ; 004b4504
    MOV EBX,dword ptr [ESP + 0x28]      ; 004b4507
    MOV EDX,0x7149f2ca                  ; 004b450b
    MOV ECX,dword ptr [0x01cae0d4]      ; 004b4510 | DAT_01cae0d4
    XOR ESI,ESI                         ; 004b4516
    MOV dword ptr [ESP + 0x8],EDX       ; 004b4518
    TEST ECX,ECX                        ; 004b451c
    JLE 0x004b453a                      ; 004b451e
        ;   XREF to: 004b453a (CONDITIONAL_JUMP)  ; LAB_004b453a
    LEA EDI,[ECX*0x4 + 0x0]             ; 004b4520
    XOR EDX,EDX                         ; 004b4527
    MOV EBP,dword ptr [EDX + 0x1cae0d8] ; 004b4529
        ;   Label: LAB_004b4529
    TEST EBP,EBP                        ; 004b452f
    JNZ 0x004b4548                      ; 004b4531
        ;   XREF to: 004b4548 (CONDITIONAL_JUMP)  ; LAB_004b4548
    ADD EDX,0x4                         ; 004b4533
        ;   Label: LAB_004b4533
    CMP EDX,EDI                         ; 004b4536
    JL 0x004b4529                       ; 004b4538
        ;   XREF to: 004b4529 (CONDITIONAL_JUMP)  ; LAB_004b4529
    TEST ESI,ESI                        ; 004b453a
        ;   Label: LAB_004b453a
    JZ 0x004b4582                       ; 004b453c
        ;   XREF to: 004b4582 (CONDITIONAL_JUMP)  ; LAB_004b4582
    MOV EAX,ESI                         ; 004b453e
    ADD ESP,0x14                        ; 004b4540
    POP EBP                             ; 004b4543
    POP EDI                             ; 004b4544
    POP ESI                             ; 004b4545
    POP EBX                             ; 004b4546
    RET                                 ; 004b4547
    MOV ECX,EBP                         ; 004b4548
        ;   Label: LAB_004b4548
    LEA EAX,[EBP + 0x20]                ; 004b454a
    FLD float ptr [EAX]                 ; 004b454d
    FSUB float ptr [EBX]                ; 004b454f
    FMUL ST0                            ; 004b4551
    FLD float ptr [EAX + 0x4]           ; 004b4553
    FSUB float ptr [EBX + 0x4]          ; 004b4556
    FMUL ST0                            ; 004b4559
    FLD float ptr [EAX + 0x8]           ; 004b455b
    FXCH                                ; 004b455e
    FADDP ST2,ST0                       ; 004b4560
    FSUB float ptr [EBX + 0x8]          ; 004b4562
    FMUL ST0                            ; 004b4565
    FADDP                               ; 004b4567
    FST float ptr [ESP + 0xc]           ; 004b4569
    FCOMP float ptr [ESP + 0x8]         ; 004b456d
    FNSTSW AX                           ; 004b4571
    SAHF                                ; 004b4573
    JNC 0x004b4533                      ; 004b4574
        ;   XREF to: 004b4533 (CONDITIONAL_JUMP)  ; LAB_004b4533
    MOV EAX,dword ptr [ESP + 0xc]       ; 004b4576
    MOV ESI,EBP                         ; 004b457a
    MOV dword ptr [ESP + 0x8],EAX       ; 004b457c
    JMP 0x004b4533                      ; 004b4580
        ;   XREF to: 004b4533 (UNCONDITIONAL_JUMP)  ; LAB_004b4533
    MOV EBX,0x58569a                    ; 004b4582 | = "..\\core\\hero.cpp"
        ;   Label: LAB_004b4582
    MOV EDI,0x34                        ; 004b4587
    PUSH 0x5856ab                       ; 004b458c | = "closestHeroToPoint - no heros!"
    MOV dword ptr [0x01cc4800],EBX      ; 004b4591 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 004b4597 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004b459d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004b45a2
    MOV EAX,ESI                         ; 004b45a5
    ADD ESP,0x14                        ; 004b45a7
    POP EBP                             ; 004b45aa
    POP EDI                             ; 004b45ab
    POP ESI                             ; 004b45ac
    POP EBX                             ; 004b45ad
    RET                                 ; 004b45ae

