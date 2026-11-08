; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a9580(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Chasing_005f0934
;   TerminatedCString s_Alert_005f093c
;   TerminatedCString s_SleepComplete_005f0942
;   TerminatedCString s_Sleep_005f0950
;   undefined4 DAT_006006ac
;   undefined4 DAT_006006b0
;   undefined4 DAT_006006b4
;   undefined4 DAT_006006b8
;   undefined4 DAT_0265370c
;
; Called Functions:
;   FUN_00408d70
;   FUN_004222d0
;   FUN_00423850
;   FUN_00488110
;   FUN_005035c0
;   FUN_00503620
;   FUN_00503e60
;   FUN_00591530
;   FUN_0059d7f0
;   FUN_0059d8e0
;   FUN_0059dcb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9580
        ;   Label: FUN_005a9580
    PUSH ESI                            ; 005a9581
    SUB ESP,0x7c                        ; 005a9582
    MOV EBX,dword ptr [ESP + 0x88]      ; 005a9585
    PUSH EBX                            ; 005a958c
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005a958d
    CALL dword ptr [EAX + 0x17c]        ; 005a9593
    ADD ESP,0x4                         ; 005a9599
    TEST EAX,EAX                        ; 005a959c
    JZ 0x005a9645                       ; 005a959e
        ;   XREF to: 005a9645 (CONDITIONAL_JUMP)  ; LAB_005a9645
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 005a95a4
    LEA EAX,[EBX + 0x20]                ; 005a95aa
    FLD float ptr [EDX + 0x20]          ; 005a95ad
    FSUB float ptr [EAX]                ; 005a95b0
    FMUL ST0                            ; 005a95b2
    FLD float ptr [EDX + 0x28]          ; 005a95b4
    FSUB float ptr [EAX + 0x8]          ; 005a95b7
    FMUL ST0                            ; 005a95ba
    FADDP                               ; 005a95bc
    FSQRT                               ; 005a95be
    ADD EDX,0x20                        ; 005a95c0
    FCOMP float ptr [0x006006ac]        ; 005a95c3 | DAT_006006ac
    FNSTSW AX                           ; 005a95c9
    SAHF                                ; 005a95cb
    JA 0x005a964b                       ; 005a95cc
        ;   XREF to: 005a964b (CONDITIONAL_JUMP)  ; LAB_005a964b
    PUSH EDX                            ; 005a95d2
    PUSH EBX                            ; 005a95d3
    CALL FUN_00423850                   ; 005a95d4
        ;   XREF to: 00423850 (UNCONDITIONAL_CALL)  ; undefined FUN_00423850()
    ADD ESP,0x8                         ; 005a95d9
    PUSH 0x1                            ; 005a95dc
    PUSH 0x5                            ; 005a95de
    LEA ESI,[EBX + 0x2b4]               ; 005a95e0
    PUSH ESI                            ; 005a95e6
    CALL FUN_00503620                   ; 005a95e7
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 005a95ec
    PUSH ESI                            ; 005a95ef
    CALL FUN_005035c0                   ; 005a95f0
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005a95f5
    ADD ESP,0x4                         ; 005a95f8
    CMP EAX,0x5                         ; 005a95fb
    JNZ 0x005a9638                      ; 005a95fe
        ;   XREF to: 005a9638 (CONDITIONAL_JUMP)  ; LAB_005a9638
    PUSH ESI                            ; 005a9600
    CALL FUN_00503e60                   ; 005a9601
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00503e60()
    MOV dword ptr [ESP + 0x7c],EAX      ; 005a9606
    FLD float ptr [ESP + 0x7c]          ; 005a960a
    ADD ESP,0x4                         ; 005a960e
    FST float ptr [ESP + 0x74]          ; 005a9611
    FCOMP float ptr [0x006006b0]        ; 005a9615 | DAT_006006b0
    FNSTSW AX                           ; 005a961b
    SAHF                                ; 005a961d
    JC 0x005a9638                       ; 005a961e
        ;   XREF to: 005a9638 (CONDITIONAL_JUMP)  ; LAB_005a9638
    FLD float ptr [ESP + 0x74]          ; 005a9620
    FCOMP float ptr [0x006006b4]        ; 005a9624 | DAT_006006b4
    FNSTSW AX                           ; 005a962a
    SAHF                                ; 005a962c
    JA 0x005a9638                       ; 005a962d
        ;   XREF to: 005a9638 (CONDITIONAL_JUMP)  ; LAB_005a9638
    CMP dword ptr [EBX + 0x113d0],0x0   ; 005a962f
    JZ 0x005a9685                       ; 005a9636
        ;   XREF to: 005a9685 (CONDITIONAL_JUMP)  ; LAB_005a9685
    CMP dword ptr [EBX + 0x1185c],0x2   ; 005a9638
        ;   Label: LAB_005a9638
    JG 0x005a972d                       ; 005a963f
        ;   XREF to: 005a972d (CONDITIONAL_JUMP)  ; LAB_005a972d
    ADD ESP,0x7c                        ; 005a9645
        ;   Label: LAB_005a9645
    POP ESI                             ; 005a9648
    POP EBX                             ; 005a9649
    RET                                 ; 005a964a
    PUSH 0x3f000000                     ; 005a964b
        ;   Label: LAB_005a964b
    ADD EBX,0x10af8                     ; 005a9650
    FLD float ptr [0x006006ac]          ; 005a9656 | DAT_006006ac
    MOV dword ptr [EBX + 0x8a0],0x0     ; 005a965c
    PUSH EBX                            ; 005a9666
    FSTP float ptr [EBX + 0x89c]        ; 005a9667
    CALL FUN_0059dcb0                   ; 005a966d
        ;   XREF to: 0059dcb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059dcb0()
    ADD ESP,0x8                         ; 005a9672
    PUSH 0x5f0934                       ; 005a9675 | = "Chasing"
    PUSH EBX                            ; 005a967a
    CALL FUN_0059d8e0                   ; 005a967b
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d8e0()
    ADD ESP,0x8                         ; 005a9680
    JMP 0x005a9645                      ; 005a9683
        ;   XREF to: 005a9645 (UNCONDITIONAL_JUMP)  ; LAB_005a9645
    PUSH EDI                            ; 005a9685
        ;   Label: LAB_005a9685
    MOV EDX,dword ptr [EBX + 0x11854]   ; 005a9686
    LEA EAX,[EDX*0x4 + 0x0]             ; 005a968c
    SUB EAX,EDX                         ; 005a9693
    SHL EAX,0x4                         ; 005a9695
    LEA EDX,[EBX + 0x1134]              ; 005a9698
    ADD EAX,EDX                         ; 005a969e
    MOV ECX,dword ptr [EBX + 0x1185c]   ; 005a96a0
    PUSH EAX                            ; 005a96a6
    LEA ESI,[ESP + 0x44]                ; 005a96a7
    INC ECX                             ; 005a96ab
    PUSH 0x265370c                      ; 005a96ac | DAT_0265370c
    MOV dword ptr [EBX + 0x1185c],ECX   ; 005a96b1
    LEA EDI,[ESP + 0x60]                ; 005a96b7
    CALL FUN_00591530                   ; 005a96bb
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    ADD ESP,0x8                         ; 005a96c0
    LEA EAX,[ESP + 0x58]                ; 005a96c3
    LEA ESI,[ESP + 0x40]                ; 005a96c7
    PUSH EAX                            ; 005a96cb
    MOVSD ES:EDI,ESI                    ; 005a96cc
    MOVSD ES:EDI,ESI                    ; 005a96cd
    MOVSD ES:EDI,ESI                    ; 005a96ce
    PUSH EBX                            ; 005a96cf
    LEA ESI,[ESP + 0x54]                ; 005a96d0
    LEA EDI,[ESP + 0x6c]                ; 005a96d4
    CALL FUN_00408d70                   ; 005a96d8
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    ADD ESP,0x8                         ; 005a96dd
    LEA EAX,[ESP + 0x4]                 ; 005a96e0
    LEA ESI,[ESP + 0x4c]                ; 005a96e4
    PUSH EAX                            ; 005a96e8
    MOVSD ES:EDI,ESI                    ; 005a96e9
    MOVSD ES:EDI,ESI                    ; 005a96ea
    MOVSD ES:EDI,ESI                    ; 005a96eb
    CALL FUN_004222d0                   ; 005a96ec
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004222d0()
    MOV EAX,[0x006006b8]                ; 005a96f1 | DAT_006006b8
    ADD ESP,0x4                         ; 005a96f6
    MOV dword ptr [ESP + 0x8],EAX       ; 005a96f9
    LEA EAX,[ESP + 0x4]                 ; 005a96fd
    PUSH EAX                            ; 005a9701
    LEA EAX,[ESP + 0x68]                ; 005a9702
    PUSH 0x3f800000                     ; 005a9706
    PUSH EAX                            ; 005a970b
    PUSH EBX                            ; 005a970c
    MOV dword ptr [ESP + 0x48],EBX      ; 005a970d
    MOV dword ptr [ESP + 0x4c],EBX      ; 005a9711
    CALL FUN_00488110                   ; 005a9715
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; undefined FUN_00488110()
    ADD ESP,0x10                        ; 005a971a
    POP EDI                             ; 005a971d
    CMP dword ptr [EBX + 0x1185c],0x2   ; 005a971e
    JG 0x005a972d                       ; 005a9725
        ;   XREF to: 005a972d (CONDITIONAL_JUMP)  ; LAB_005a972d
    ADD ESP,0x7c                        ; 005a9727
    POP ESI                             ; 005a972a
    POP EBX                             ; 005a972b
    RET                                 ; 005a972c
    PUSH 0x5f093c                       ; 005a972d | = "Alert"
        ;   Label: LAB_005a972d
    ADD EBX,0x10af8                     ; 005a9732
    PUSH 0x5f0942                       ; 005a9738 | = "SleepComplete"
    MOV dword ptr [EBX + 0xd64],0x0     ; 005a973d
    PUSH EBX                            ; 005a9747
    MOV dword ptr [EBX + 0xd60],0x0     ; 005a9748
    CALL FUN_0059d7f0                   ; 005a9752
        ;   XREF to: 0059d7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d7f0()
    ADD ESP,0xc                         ; 005a9757
    PUSH 0x5f0950                       ; 005a975a | = "Sleep"
    PUSH EBX                            ; 005a975f
    CALL FUN_0059d8e0                   ; 005a9760
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d8e0()
    ADD ESP,0x8                         ; 005a9765
    ADD ESP,0x7c                        ; 005a9768
    POP ESI                             ; 005a976b
    POP EBX                             ; 005a976c
    RET                                 ; 005a976d

