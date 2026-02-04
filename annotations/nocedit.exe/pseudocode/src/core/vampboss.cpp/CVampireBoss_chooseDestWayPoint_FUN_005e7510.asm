; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_005e7510(CVampireBoss *this_ptr)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 at 005e5a26
;
; Referenced Globals:
;   TerminatedCString s_core_vampboss_cpp_00656d01
;   TerminatedCString s_CVampireBoss_chooseDestW_00656d16
;   CHero*[4] g_HeroActors
;   int g_LocalHeroIndex
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e7510
        ;   Label: core_vampboss.cpp_CVampireBoss_chooseDestWayPoint_FUN_005e7510
    PUSH ESI                            ; 005e7511
    PUSH EDI                            ; 005e7512
    PUSH EBP                            ; 005e7513
    SUB ESP,0x24                        ; 005e7514
    MOV EBP,dword ptr [ESP + 0x38]      ; 005e7517
    MOV EDX,0xcb045fed                  ; 005e751b
    LEA EDI,[EBP + 0x20]                ; 005e7520
    MOV dword ptr [EBP + 0xce908],0x0   ; 005e7523
    XOR EBX,EBX                         ; 005e752d
    MOV ESI,EBP                         ; 005e752f
    MOV dword ptr [ESP + 0x14],EDX      ; 005e7531
    CMP dword ptr [ESI + 0xce90c],0x0   ; 005e7535
        ;   Label: LAB_005e7535
    JZ 0x005e75c5                       ; 005e753c
        ;   XREF to: 005e75c5 (CONDITIONAL_JUMP)  ; LAB_005e75c5
    MOV EAX,[0x02db87d0]                ; 005e7542 | g_LocalHeroIndex
        ;   Label: LAB_005e7542
    MOV EDX,dword ptr [EAX*0x4 + 0x2db87c0] ; 005e7547 | g_HeroActors
    MOV EAX,dword ptr [ESI + 0xce90c]   ; 005e754e
    FLD float ptr [EAX + 0x20]          ; 005e7554
    FSUB float ptr [EDX + 0x20]         ; 005e7557
    FMUL ST0                            ; 005e755a
    FLD float ptr [EAX + 0x20]          ; 005e755c
    FSUB float ptr [EDI]                ; 005e755f
    FMUL ST0                            ; 005e7561
    FLD float ptr [EAX + 0x24]          ; 005e7563
    FSUB float ptr [EDX + 0x24]         ; 005e7566
    FMUL ST0                            ; 005e7569
    FLD float ptr [EAX + 0x24]          ; 005e756b
    FSUB float ptr [EDI + 0x4]          ; 005e756e
    FMUL ST0                            ; 005e7571
    FLD float ptr [EAX + 0x28]          ; 005e7573
    FXCH                                ; 005e7576
    FADDP ST3,ST0                       ; 005e7578
    FSUB float ptr [EDI + 0x8]          ; 005e757a
    FMUL ST0                            ; 005e757d
    FLD float ptr [EAX + 0x28]          ; 005e757f
    FXCH ST2                            ; 005e7582
    FADDP ST4,ST0                       ; 005e7584
    FXCH                                ; 005e7586
    FSUB float ptr [EDX + 0x28]         ; 005e7588
    FMUL ST0                            ; 005e758b
    FXCH                                ; 005e758d
    FADDP ST2,ST0                       ; 005e758f
    FADDP ST2,ST0                       ; 005e7591
    FADDP                               ; 005e7593
    FST float ptr [ESP + 0x18]          ; 005e7595
    FCOMP float ptr [ESP + 0x14]        ; 005e7599
    FNSTSW AX                           ; 005e759d
    SAHF                                ; 005e759f
    JBE 0x005e75b0                      ; 005e75a0
        ;   XREF to: 005e75b0 (CONDITIONAL_JUMP)  ; LAB_005e75b0
    MOV EAX,dword ptr [ESP + 0x18]      ; 005e75a2
    MOV dword ptr [EBP + 0xce908],EBX   ; 005e75a6
    MOV dword ptr [ESP + 0x14],EAX      ; 005e75ac
    INC EBX                             ; 005e75b0
        ;   Label: LAB_005e75b0
    ADD ESI,0x4                         ; 005e75b1
    CMP EBX,0x4                         ; 005e75b4
    JL 0x005e7535                       ; 005e75b7
        ;   XREF to: 005e7535 (CONDITIONAL_JUMP)  ; LAB_005e7535
    ADD ESP,0x24                        ; 005e75bd
    POP EBP                             ; 005e75c0
    POP EDI                             ; 005e75c1
    POP ESI                             ; 005e75c2
    POP EBX                             ; 005e75c3
    RET                                 ; 005e75c4
    PUSH EBX                            ; 005e75c5
        ;   Label: LAB_005e75c5
    MOV EAX,0x656d01                    ; 005e75c6 | = "..\\core\\vampboss.cpp"
    MOV EDX,0x423                       ; 005e75cb
    PUSH 0x656d16                       ; 005e75d0 | = "CVampireBoss::chooseDestWayPoint - wa..."
    MOV [0x02f0ca48],EAX                ; 005e75d5 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 005e75da | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005e75e0
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005e75e5
    JMP 0x005e7542                      ; 005e75e8
        ;   XREF to: 005e7542 (UNCONDITIONAL_JUMP)  ; LAB_005e7542

