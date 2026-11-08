; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a4600(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_005a45e0 = 005a461e
;   TerminatedCString s_phantomhandswing0_wav_005f03a2
;   TerminatedCString s_phantomteleport0_wav_005f03b9
;   TerminatedCString s_phandslap0_wav_005f03cf
;   undefined4 DAT_005ff548
;   undefined4 DAT_005ff54c
;   undefined4 DAT_0061c068
;
; Called Functions:
;   FUN_0055ae50
;   FUN_0059f740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4600
        ;   Label: FUN_005a4600
    PUSH ESI                            ; 005a4601
    PUSH EBP                            ; 005a4602
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a4603
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a4607
    SUB EAX,0x1fa4                      ; 005a460b
    XOR ESI,ESI                         ; 005a4610
    CMP EAX,0x4                         ; 005a4612
    JA 0x005a463b                       ; 005a4615
        ;   XREF to: 005a463b (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5a45e0]  ; 005a4617 | caseD_1fa4 | caseD_1fa5 | caseD_1fa6
        ;   Label: switchD
    MOV EBP,dword ptr [EBX + 0x11854]   ; 005a461e
        ;   Label: caseD_1fa4
    PUSH 0x40000000                     ; 005a4624
    PUSH EBP                            ; 005a4629
    PUSH dword ptr [0x005ff548]         ; 005a462a | DAT_005ff548
    PUSH EBX                            ; 005a4630
        ;   Label: LAB_005a4630
    CALL FUN_0059f740                   ; 005a4631
        ;   XREF to: 0059f740 (UNCONDITIONAL_CALL)  ; undefined FUN_0059f740()
    ADD ESP,0x10                        ; 005a4636
    MOV ESI,EAX                         ; 005a4639
    TEST ESI,ESI                        ; 005a463b
        ;   Label: default
    JNZ 0x005a46c4                      ; 005a463d
        ;   XREF to: 005a46c4 (CONDITIONAL_JUMP)  ; LAB_005a46c4
    POP EBP                             ; 005a4643
    POP ESI                             ; 005a4644
    POP EBX                             ; 005a4645
    RET                                 ; 005a4646
    PUSH EDI                            ; 005a4647
        ;   Label: caseD_1fa5
    MOV EDI,dword ptr [EBX + 0x11854]   ; 005a4648
    PUSH 0x3f800000                     ; 005a464e
    PUSH EDI                            ; 005a4653
    PUSH dword ptr [0x005ff54c]         ; 005a4654 | DAT_005ff54c
    PUSH EBX                            ; 005a465a
    CALL FUN_0059f740                   ; 005a465b
        ;   XREF to: 0059f740 (UNCONDITIONAL_CALL)  ; undefined FUN_0059f740()
    ADD ESP,0x10                        ; 005a4660
    MOV ESI,EAX                         ; 005a4663
    POP EDI                             ; 005a4665
    TEST ESI,ESI                        ; 005a4666
    JNZ 0x005a46c4                      ; 005a4668
        ;   XREF to: 005a46c4 (CONDITIONAL_JUMP)  ; LAB_005a46c4
    POP EBP                             ; 005a466a
    POP ESI                             ; 005a466b
    POP EBX                             ; 005a466c
    RET                                 ; 005a466d
    MOV ESI,dword ptr [EBX + 0x11850]   ; 005a466e
        ;   Label: caseD_1fa6
    PUSH 0x3f800000                     ; 005a4674
    PUSH ESI                            ; 005a4679
    PUSH dword ptr [0x005ff54c]         ; 005a467a | DAT_005ff54c
    JMP 0x005a4630                      ; 005a4680
        ;   XREF to: 005a4630 (UNCONDITIONAL_JUMP)  ; LAB_005a4630
    LEA EAX,[EBX + 0x20]                ; 005a4682
        ;   Label: caseD_1fa7
    PUSH EAX                            ; 005a4685
    PUSH 0x5f03a2                       ; 005a4686 | = "phantomhandswing0?.wav"
    PUSH EBX                            ; 005a468b
    MOV ECX,dword ptr [0x0061c068]      ; 005a468c | DAT_0061c068
    PUSH ECX                            ; 005a4692
    CALL FUN_0055ae50                   ; 005a4693
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; undefined FUN_0055ae50()
    ADD ESP,0x10                        ; 005a4698
    TEST ESI,ESI                        ; 005a469b
    JNZ 0x005a46c4                      ; 005a469d
        ;   XREF to: 005a46c4 (CONDITIONAL_JUMP)  ; LAB_005a46c4
    POP EBP                             ; 005a469f
    POP ESI                             ; 005a46a0
    POP EBX                             ; 005a46a1
    RET                                 ; 005a46a2
    LEA EAX,[EBX + 0x20]                ; 005a46a3
        ;   Label: caseD_1fa8
    PUSH EAX                            ; 005a46a6
    PUSH 0x5f03b9                       ; 005a46a7 | = "phantomteleport0?.wav"
    PUSH EBX                            ; 005a46ac
    MOV EDX,dword ptr [0x0061c068]      ; 005a46ad | DAT_0061c068
    PUSH EDX                            ; 005a46b3
    CALL FUN_0055ae50                   ; 005a46b4
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; undefined FUN_0055ae50()
    ADD ESP,0x10                        ; 005a46b9
    TEST ESI,ESI                        ; 005a46bc
    JNZ 0x005a46c4                      ; 005a46be
        ;   XREF to: 005a46c4 (CONDITIONAL_JUMP)  ; LAB_005a46c4
    POP EBP                             ; 005a46c0
    POP ESI                             ; 005a46c1
    POP EBX                             ; 005a46c2
    RET                                 ; 005a46c3
    LEA EAX,[EBX + 0x20]                ; 005a46c4
        ;   Label: LAB_005a46c4
    PUSH EAX                            ; 005a46c7
    PUSH 0x5f03cf                       ; 005a46c8 | = "phandslap0?.wav"
    PUSH EBX                            ; 005a46cd
    MOV EAX,[0x0061c068]                ; 005a46ce | DAT_0061c068
    PUSH EAX                            ; 005a46d3
    CALL FUN_0055ae50                   ; 005a46d4
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; undefined FUN_0055ae50()
    ADD ESP,0x10                        ; 005a46d9
    POP EBP                             ; 005a46dc
    POP ESI                             ; 005a46dd
    POP EBX                             ; 005a46de
    RET                                 ; 005a46df

