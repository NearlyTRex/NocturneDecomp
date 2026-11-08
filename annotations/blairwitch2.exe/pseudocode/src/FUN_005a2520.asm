; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a2520(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_005a2500 = 005a253e
;   TerminatedCString s_phantomhandswing0_wav_005eff27
;   TerminatedCString s_phantomteleport0_wav_005eff3e
;   TerminatedCString s_phandslap0_wav_005eff54
;   undefined4 DAT_005fef98
;   undefined4 DAT_005fef9c
;   undefined4 DAT_0061c068
;
; Called Functions:
;   FUN_0055ae50
;   FUN_0059f740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a2520
        ;   Label: FUN_005a2520
    PUSH ESI                            ; 005a2521
    PUSH EBP                            ; 005a2522
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a2523
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a2527
    SUB EAX,0x1fa4                      ; 005a252b
    XOR ESI,ESI                         ; 005a2530
    CMP EAX,0x4                         ; 005a2532
    JA 0x005a255b                       ; 005a2535
        ;   XREF to: 005a255b (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5a2500]  ; 005a2537 | caseD_1fa4 | caseD_1fa5 | caseD_1fa6
        ;   Label: switchD
    MOV EBP,dword ptr [EBX + 0x11854]   ; 005a253e
        ;   Label: caseD_1fa4
    PUSH 0x40000000                     ; 005a2544
    PUSH EBP                            ; 005a2549
    PUSH dword ptr [0x005fef98]         ; 005a254a | DAT_005fef98
    PUSH EBX                            ; 005a2550
        ;   Label: LAB_005a2550
    CALL FUN_0059f740                   ; 005a2551
        ;   XREF to: 0059f740 (UNCONDITIONAL_CALL)  ; undefined FUN_0059f740()
    ADD ESP,0x10                        ; 005a2556
    MOV ESI,EAX                         ; 005a2559
    TEST ESI,ESI                        ; 005a255b
        ;   Label: default
    JNZ 0x005a25e4                      ; 005a255d
        ;   XREF to: 005a25e4 (CONDITIONAL_JUMP)  ; LAB_005a25e4
    POP EBP                             ; 005a2563
    POP ESI                             ; 005a2564
    POP EBX                             ; 005a2565
    RET                                 ; 005a2566
    PUSH EDI                            ; 005a2567
        ;   Label: caseD_1fa5
    MOV EDI,dword ptr [EBX + 0x11854]   ; 005a2568
    PUSH 0x3f800000                     ; 005a256e
    PUSH EDI                            ; 005a2573
    PUSH dword ptr [0x005fef9c]         ; 005a2574 | DAT_005fef9c
    PUSH EBX                            ; 005a257a
    CALL FUN_0059f740                   ; 005a257b
        ;   XREF to: 0059f740 (UNCONDITIONAL_CALL)  ; undefined FUN_0059f740()
    ADD ESP,0x10                        ; 005a2580
    MOV ESI,EAX                         ; 005a2583
    POP EDI                             ; 005a2585
    TEST ESI,ESI                        ; 005a2586
    JNZ 0x005a25e4                      ; 005a2588
        ;   XREF to: 005a25e4 (CONDITIONAL_JUMP)  ; LAB_005a25e4
    POP EBP                             ; 005a258a
    POP ESI                             ; 005a258b
    POP EBX                             ; 005a258c
    RET                                 ; 005a258d
    MOV ESI,dword ptr [EBX + 0x11850]   ; 005a258e
        ;   Label: caseD_1fa6
    PUSH 0x3f800000                     ; 005a2594
    PUSH ESI                            ; 005a2599
    PUSH dword ptr [0x005fef9c]         ; 005a259a | DAT_005fef9c
    JMP 0x005a2550                      ; 005a25a0
        ;   XREF to: 005a2550 (UNCONDITIONAL_JUMP)  ; LAB_005a2550
    LEA EAX,[EBX + 0x20]                ; 005a25a2
        ;   Label: caseD_1fa7
    PUSH EAX                            ; 005a25a5
    PUSH 0x5eff27                       ; 005a25a6 | = "phantomhandswing0?.wav"
    PUSH EBX                            ; 005a25ab
    MOV ECX,dword ptr [0x0061c068]      ; 005a25ac | DAT_0061c068
    PUSH ECX                            ; 005a25b2
    CALL FUN_0055ae50                   ; 005a25b3
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; undefined FUN_0055ae50()
    ADD ESP,0x10                        ; 005a25b8
    TEST ESI,ESI                        ; 005a25bb
    JNZ 0x005a25e4                      ; 005a25bd
        ;   XREF to: 005a25e4 (CONDITIONAL_JUMP)  ; LAB_005a25e4
    POP EBP                             ; 005a25bf
    POP ESI                             ; 005a25c0
    POP EBX                             ; 005a25c1
    RET                                 ; 005a25c2
    LEA EAX,[EBX + 0x20]                ; 005a25c3
        ;   Label: caseD_1fa8
    PUSH EAX                            ; 005a25c6
    PUSH 0x5eff3e                       ; 005a25c7 | = "phantomteleport0?.wav"
    PUSH EBX                            ; 005a25cc
    MOV EDX,dword ptr [0x0061c068]      ; 005a25cd | DAT_0061c068
    PUSH EDX                            ; 005a25d3
    CALL FUN_0055ae50                   ; 005a25d4
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; undefined FUN_0055ae50()
    ADD ESP,0x10                        ; 005a25d9
    TEST ESI,ESI                        ; 005a25dc
    JNZ 0x005a25e4                      ; 005a25de
        ;   XREF to: 005a25e4 (CONDITIONAL_JUMP)  ; LAB_005a25e4
    POP EBP                             ; 005a25e0
    POP ESI                             ; 005a25e1
    POP EBX                             ; 005a25e2
    RET                                 ; 005a25e3
    LEA EAX,[EBX + 0x20]                ; 005a25e4
        ;   Label: LAB_005a25e4
    PUSH EAX                            ; 005a25e7
    PUSH 0x5eff54                       ; 005a25e8 | = "phandslap0?.wav"
    PUSH EBX                            ; 005a25ed
    MOV EAX,[0x0061c068]                ; 005a25ee | DAT_0061c068
    PUSH EAX                            ; 005a25f3
    CALL FUN_0055ae50                   ; 005a25f4
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; undefined FUN_0055ae50()
    ADD ESP,0x10                        ; 005a25f9
    POP EBP                             ; 005a25fc
    POP ESI                             ; 005a25fd
    POP EBX                             ; 005a25fe
    RET                                 ; 005a25ff

