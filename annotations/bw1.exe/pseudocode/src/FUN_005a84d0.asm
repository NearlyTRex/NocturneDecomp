; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a84d0(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_modelName_005f9091+2
;   TerminatedCString s_tireCount_005f909d
;   TerminatedCString s_static_bpos_005f90a7
;   TerminatedCString s_radius_005f90b3
;   TerminatedCString s_width_005f90ba
;   TerminatedCString s_curTime_005f90c0
;   TerminatedCString s_totalTime_005f90c8
;   TerminatedCString s_courseName_005f90d2
;   TerminatedCString s_lastMobsterLeft_005f90dd
;   TerminatedCString s_lastMobsterRight_005f90ed
;   undefined4 DAT_00625c44
;
; Called Functions:
;   FUN_0040b1c0
;   FUN_0040b440
;   FUN_0040b5f0
;   FUN_0040b670
;   FUN_0040b6f0
;   FUN_0040b770
;   FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a84d0
        ;   Label: FUN_005a84d0
    PUSH EBP                            ; 005a84d1
    SUB ESP,0x8                         ; 005a84d2
    MOV EDX,dword ptr [ESP + 0x14]      ; 005a84d5
    PUSH EDX                            ; 005a84d9
    CALL FUN_0040c040                   ; 005a84da
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c040()
    ADD ESP,0x4                         ; 005a84df
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a84e2
    PUSH 0x5f9093                       ; 005a84e6 | s_modelName_005f9091+2
    ADD EAX,0x158                       ; 005a84eb
    PUSH EAX                            ; 005a84f0
    CALL FUN_0040b770                   ; 005a84f1
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b770()
    ADD ESP,0x8                         ; 005a84f6
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a84f9
    PUSH 0x5f909d                       ; 005a84fd | = "tireCount"
    ADD EAX,0x938                       ; 005a8502
    PUSH EAX                            ; 005a8507
    CALL FUN_0040b670                   ; 005a8508
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 005a850d
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a8510
    MOV ECX,dword ptr [EAX + 0x938]     ; 005a8514
    XOR EBX,EBX                         ; 005a851a
    TEST ECX,ECX                        ; 005a851c
    JLE 0x005a85b9                      ; 005a851e
        ;   XREF to: 005a85b9 (CONDITIONAL_JUMP)  ; LAB_005a85b9
    PUSH EDI                            ; 005a8524
    PUSH ESI                            ; 005a8525
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005a8526
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005a852a
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005a852e
    ADD EAX,0x93c                       ; 005a8532
    ADD ESI,0x94c                       ; 005a8537
    ADD EBP,0x948                       ; 005a853d
    ADD EDI,0x950                       ; 005a8543
    MOV dword ptr [ESP + 0xc],EAX       ; 005a8549
    IMUL EAX,EBX,0x1b4                  ; 005a854d
        ;   Label: LAB_005a854d
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a8553
    PUSH 0x0                            ; 005a8557
    ADD EDX,EAX                         ; 005a8559
    PUSH EDI                            ; 005a855b
    MOV dword ptr [ESP + 0x10],EDX      ; 005a855c
    CALL FUN_0040b770                   ; 005a8560
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b770()
    ADD ESP,0x8                         ; 005a8565
    PUSH 0x5f90a7                       ; 005a8568 | = "static_bpos"
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a856d
    PUSH EAX                            ; 005a8571
    CALL FUN_0040b1c0                   ; 005a8572
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b1c0()
    ADD ESP,0x8                         ; 005a8577
    PUSH 0x5f90b3                       ; 005a857a | = "radius"
    PUSH EBP                            ; 005a857f
    CALL FUN_0040b5f0                   ; 005a8580
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 005a8585
    PUSH 0x5f90ba                       ; 005a8588 | = "width"
    PUSH ESI                            ; 005a858d
    CALL FUN_0040b5f0                   ; 005a858e
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 005a8593
    ADD EDI,0x1b4                       ; 005a8596
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005a859c
    INC EBX                             ; 005a85a0
    ADD EBP,0x1b4                       ; 005a85a1
    MOV EDX,dword ptr [EAX + 0x938]     ; 005a85a7
    ADD ESI,0x1b4                       ; 005a85ad
    CMP EBX,EDX                         ; 005a85b3
    JL 0x005a854d                       ; 005a85b5
        ;   XREF to: 005a854d (CONDITIONAL_JUMP)  ; LAB_005a854d
    POP ESI                             ; 005a85b7
    POP EDI                             ; 005a85b8
    CMP dword ptr [0x00625c44],0x2      ; 005a85b9 | DAT_00625c44
        ;   Label: LAB_005a85b9
    JGE 0x005a85d1                      ; 005a85c0
        ;   XREF to: 005a85d1 (CONDITIONAL_JUMP)  ; LAB_005a85d1
    CMP dword ptr [0x00625c44],0x3      ; 005a85c2 | DAT_00625c44
    JGE 0x005a8625                      ; 005a85c9
        ;   XREF to: 005a8625 (CONDITIONAL_JUMP)  ; LAB_005a8625
    ADD ESP,0x8                         ; 005a85cb
    POP EBP                             ; 005a85ce
    POP EBX                             ; 005a85cf
    RET                                 ; 005a85d0
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a85d1
        ;   Label: LAB_005a85d1
    PUSH 0x5f90c0                       ; 005a85d5 | = "curTime"
    ADD EAX,0x102c                      ; 005a85da
    PUSH EAX                            ; 005a85df
    CALL FUN_0040b5f0                   ; 005a85e0
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 005a85e5
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a85e8
    PUSH 0x5f90c8                       ; 005a85ec | = "totalTime"
    ADD EAX,0x1030                      ; 005a85f1
    PUSH EAX                            ; 005a85f6
    CALL FUN_0040b5f0                   ; 005a85f7
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 005a85fc
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a85ff
    PUSH 0x5f90d2                       ; 005a8603 | = "courseName"
    ADD EAX,0x1034                      ; 005a8608
    PUSH EAX                            ; 005a860d
    CALL FUN_0040b440                   ; 005a860e
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 005a8613
    CMP dword ptr [0x00625c44],0x3      ; 005a8616 | DAT_00625c44
    JGE 0x005a8625                      ; 005a861d
        ;   XREF to: 005a8625 (CONDITIONAL_JUMP)  ; LAB_005a8625
    ADD ESP,0x8                         ; 005a861f
    POP EBP                             ; 005a8622
    POP EBX                             ; 005a8623
    RET                                 ; 005a8624
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a8625
        ;   Label: LAB_005a8625
    PUSH 0x5f90dd                       ; 005a8629 | = "lastMobsterLeft"
    ADD EBX,0x1070                      ; 005a862e
    PUSH EBX                            ; 005a8634
    CALL FUN_0040b6f0                   ; 005a8635
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 005a863a
    PUSH 0x5f90ed                       ; 005a863d | = "lastMobsterRight"
    PUSH EBX                            ; 005a8642
    CALL FUN_0040b6f0                   ; 005a8643
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 005a8648
    ADD ESP,0x8                         ; 005a864b
    POP EBP                             ; 005a864e
    POP EBX                             ; 005a864f
    RET                                 ; 005a8650

