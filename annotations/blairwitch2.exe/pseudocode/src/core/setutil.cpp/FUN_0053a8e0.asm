; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053a8e0(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x110]:1  local_110
;
; XREF[1]:
;   FUN_0052c0e0 at 0052c601
;
; Referenced Globals:
;   undefined4 DAT_005e60b1
;   TerminatedCString s_f_f_f_005e60b5
;   TerminatedCString s_f_f_f_005e60bf
;   undefined4 DAT_005e60c9
;   TerminatedCString s_f_f_f_005e60cd
;   TerminatedCString s_f_f_f_005e60d7
;   TerminatedCString s_f_f_f_005e60e1
;   undefined4 DAT_005e60eb
;   TerminatedCString s_f_f_f_005e60ef
;   TerminatedCString s_f_f_f_005e60f9
;   undefined4 DAT_005e6103
;   undefined4 DAT_005e6107
;   TerminatedCString s_core_setutil_cpp_005e610b
;   TerminatedCString s_Panning_cameras_not_supp_005e611f
;   undefined4 DAT_0061b5a8
;   ... and 12 more
;
; Called Functions:
;   FUN_00443400
;   FUN_004e4500
;   FUN_0053a870
;   FUN_005b8100
;   FUN_005b9600
;   FUN_005ba8cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053a8e0
        ;   Label: FUN_0053a8e0
    PUSH ESI                            ; 0053a8e1
    PUSH EDI                            ; 0053a8e2
    PUSH EBP                            ; 0053a8e3
    SUB ESP,0x100                       ; 0053a8e4
    MOV EBX,dword ptr [ESP + 0x114]     ; 0053a8ea
    MOV ESI,dword ptr [ESP + 0x118]     ; 0053a8f1
    PUSH EBX                            ; 0053a8f8
    CALL FUN_0053a870                   ; 0053a8f9
        ;   XREF to: 0053a870 (UNCONDITIONAL_CALL)  ; undefined FUN_0053a870()
    MOV EAX,[0x0061b5a8]                ; 0053a8fe | DAT_0061b5a8
    MOV EDX,dword ptr [EAX + 0x15acc0]  ; 0053a903 | DAT_01fc0e78
    ADD ESP,0x4                         ; 0053a909
    CMP EDX,0xb                         ; 0053a90c
    JGE 0x0053ab8e                      ; 0053a90f
        ;   XREF to: 0053ab8e (CONDITIONAL_JUMP)  ; LAB_0053ab8e
    PUSH ESI                            ; 0053a915
        ;   Label: LAB_0053a915
    PUSH 0xff                           ; 0053a916
    LEA EAX,[ESP + 0x8]                 ; 0053a91b
    PUSH EAX                            ; 0053a91f
    CALL FUN_005b9600                   ; 0053a920
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 0053a925
    PUSH EBX                            ; 0053a928
    PUSH 0x5e60b1                       ; 0053a929 | DAT_005e60b1
    LEA EAX,[ESP + 0x8]                 ; 0053a92e
    PUSH EAX                            ; 0053a932
    CALL FUN_005ba8cc                   ; 0053a933
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; undefined FUN_005ba8cc()
    MOV EAX,[0x0061b5a8]                ; 0053a938 | DAT_0061b5a8
    MOV ECX,dword ptr [EAX + 0x15acc0]  ; 0053a93d | DAT_01fc0e78
    ADD ESP,0xc                         ; 0053a943
    CMP ECX,0xb                         ; 0053a946
    JL 0x0053a95e                       ; 0053a949
        ;   XREF to: 0053a95e (CONDITIONAL_JUMP)  ; LAB_0053a95e
    PUSH ESI                            ; 0053a94b
    PUSH 0xff                           ; 0053a94c
    LEA EAX,[ESP + 0x8]                 ; 0053a951
    PUSH EAX                            ; 0053a955
    CALL FUN_005b9600                   ; 0053a956
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 0053a95b
    LEA EAX,[EBX + 0x108]               ; 0053a95e
        ;   Label: LAB_0053a95e
    PUSH EAX                            ; 0053a964
    LEA EAX,[EBX + 0x104]               ; 0053a965
    PUSH EAX                            ; 0053a96b
    LEA EAX,[EBX + 0x100]               ; 0053a96c
    PUSH EAX                            ; 0053a972
    PUSH 0x5e60b5                       ; 0053a973 | = "%f,%f,%f\n"
    PUSH ESI                            ; 0053a978
    CALL FUN_005b8100                   ; 0053a979
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    MOV EAX,[0x0061b5a8]                ; 0053a97e | DAT_0061b5a8
    MOV EDI,dword ptr [EAX + 0x15acc0]  ; 0053a983 | DAT_01fc0e78
    ADD ESP,0x14                        ; 0053a989
    CMP EDI,0xb                         ; 0053a98c
    JL 0x0053a9a4                       ; 0053a98f
        ;   XREF to: 0053a9a4 (CONDITIONAL_JUMP)  ; LAB_0053a9a4
    PUSH ESI                            ; 0053a991
    PUSH 0xff                           ; 0053a992
    LEA EAX,[ESP + 0x8]                 ; 0053a997
    PUSH EAX                            ; 0053a99b
    CALL FUN_005b9600                   ; 0053a99c
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 0053a9a1
    LEA EAX,[EBX + 0x110]               ; 0053a9a4
        ;   Label: LAB_0053a9a4
    PUSH EAX                            ; 0053a9aa
    LEA EAX,[EBX + 0x114]               ; 0053a9ab
    PUSH EAX                            ; 0053a9b1
    LEA EAX,[EBX + 0x10c]               ; 0053a9b2
    PUSH EAX                            ; 0053a9b8
    PUSH 0x5e60bf                       ; 0053a9b9 | = "%f,%f,%f\n"
    PUSH ESI                            ; 0053a9be
    CALL FUN_005b8100                   ; 0053a9bf
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    MOV EAX,[0x0061b5a8]                ; 0053a9c4 | DAT_0061b5a8
    MOV EBP,dword ptr [EAX + 0x15acc0]  ; 0053a9c9 | DAT_01fc0e78
    ADD ESP,0x14                        ; 0053a9cf
    CMP EBP,0xb                         ; 0053a9d2
    JL 0x0053a9ea                       ; 0053a9d5
        ;   XREF to: 0053a9ea (CONDITIONAL_JUMP)  ; LAB_0053a9ea
    PUSH ESI                            ; 0053a9d7
    PUSH 0xff                           ; 0053a9d8
    LEA EAX,[ESP + 0x8]                 ; 0053a9dd
    PUSH EAX                            ; 0053a9e1
    CALL FUN_005b9600                   ; 0053a9e2
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 0053a9e7
    LEA EAX,[EBX + 0x144]               ; 0053a9ea
        ;   Label: LAB_0053a9ea
    PUSH EAX                            ; 0053a9f0
    PUSH 0x5e60c9                       ; 0053a9f1 | DAT_005e60c9
    PUSH ESI                            ; 0053a9f6
    CALL FUN_005b8100                   ; 0053a9f7
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 0053a9fc
    PUSH ESI                            ; 0053a9ff
    PUSH 0xff                           ; 0053aa00
    LEA EAX,[ESP + 0x8]                 ; 0053aa05
    PUSH EAX                            ; 0053aa09
    CALL FUN_005b9600                   ; 0053aa0a
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 0053aa0f
    LEA EAX,[EBX + 0x120]               ; 0053aa12
    PUSH EAX                            ; 0053aa18
    LEA EAX,[EBX + 0x11c]               ; 0053aa19
    PUSH EAX                            ; 0053aa1f
    LEA EAX,[EBX + 0x118]               ; 0053aa20
    PUSH EAX                            ; 0053aa26
    PUSH 0x5e60cd                       ; 0053aa27 | = "%f,%f,%f\n"
    PUSH ESI                            ; 0053aa2c
    CALL FUN_005b8100                   ; 0053aa2d
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x14                        ; 0053aa32
    LEA EAX,[EBX + 0x12c]               ; 0053aa35
    PUSH EAX                            ; 0053aa3b
    LEA EAX,[EBX + 0x128]               ; 0053aa3c
    PUSH EAX                            ; 0053aa42
    LEA EAX,[EBX + 0x124]               ; 0053aa43
    PUSH EAX                            ; 0053aa49
    PUSH 0x5e60d7                       ; 0053aa4a | = "%f,%f,%f\n"
    PUSH ESI                            ; 0053aa4f
    CALL FUN_005b8100                   ; 0053aa50
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x14                        ; 0053aa55
    LEA EAX,[EBX + 0x138]               ; 0053aa58
    PUSH EAX                            ; 0053aa5e
    LEA EAX,[EBX + 0x134]               ; 0053aa5f
    PUSH EAX                            ; 0053aa65
    LEA EAX,[EBX + 0x130]               ; 0053aa66
    PUSH EAX                            ; 0053aa6c
    PUSH 0x5e60e1                       ; 0053aa6d | = "%f,%f,%f\n"
    PUSH ESI                            ; 0053aa72
    CALL FUN_005b8100                   ; 0053aa73
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    MOV EAX,[0x0061b5a8]                ; 0053aa78 | DAT_0061b5a8
    LEA EDI,[EBX + 0x154]               ; 0053aa7d
    MOV EDX,dword ptr [EAX + 0x15acc0]  ; 0053aa83 | DAT_01fc0e78
    ADD ESP,0x14                        ; 0053aa89
    CMP EDX,0x12                        ; 0053aa8c
    JL 0x0053aba6                       ; 0053aa8f
        ;   XREF to: 0053aba6 (CONDITIONAL_JUMP)  ; LAB_0053aba6
    LEA EAX,[EBX + 0x150]               ; 0053aa95
    PUSH EAX                            ; 0053aa9b
    PUSH 0x5e60eb                       ; 0053aa9c | DAT_005e60eb
    PUSH ESI                            ; 0053aaa1
    CALL FUN_005b8100                   ; 0053aaa2
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    MOV ECX,dword ptr [EBX + 0x150]     ; 0053aaa7
    ADD ESP,0xc                         ; 0053aaad
    TEST ECX,ECX                        ; 0053aab0
    JNZ 0x0053aaca                      ; 0053aab2
        ;   XREF to: 0053aaca (CONDITIONAL_JUMP)  ; LAB_0053aaca
    MOV EAX,[0x0061b5a8]                ; 0053aab4 | DAT_0061b5a8
    MOV EBP,dword ptr [EAX + 0x15acc0]  ; 0053aab9 | DAT_01fc0e78
    PUSH EBP                            ; 0053aabf
    PUSH ESI                            ; 0053aac0
    PUSH EDI                            ; 0053aac1
    CALL FUN_00443400                   ; 0053aac2
        ;   XREF to: 00443400 (UNCONDITIONAL_CALL)  ; undefined FUN_00443400()
    ADD ESP,0xc                         ; 0053aac7
    MOV EAX,[0x0061b5a8]                ; 0053aaca | DAT_0061b5a8
        ;   Label: LAB_0053aaca
    CMP dword ptr [EAX + 0x15acc0],0x17 ; 0053aacf | DAT_01fc0e78
    JL 0x0053ab31                       ; 0053aad6
        ;   XREF to: 0053ab31 (CONDITIONAL_JUMP)  ; LAB_0053ab31
    PUSH ESI                            ; 0053aad8
    PUSH 0xff                           ; 0053aad9
    LEA EAX,[ESP + 0x8]                 ; 0053aade
    PUSH EAX                            ; 0053aae2
    CALL FUN_005b9600                   ; 0053aae3
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 0053aae8
    LEA EAX,[EBX + 0x184]               ; 0053aaeb
    PUSH EAX                            ; 0053aaf1
    LEA EAX,[EBX + 0x180]               ; 0053aaf2
    PUSH EAX                            ; 0053aaf8
    LEA EAX,[EBX + 0x17c]               ; 0053aaf9
    PUSH EAX                            ; 0053aaff
    PUSH 0x5e60ef                       ; 0053ab00 | = "%f,%f,%f\n"
    PUSH ESI                            ; 0053ab05
    CALL FUN_005b8100                   ; 0053ab06
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x14                        ; 0053ab0b
    LEA EAX,[EBX + 0x190]               ; 0053ab0e
    PUSH EAX                            ; 0053ab14
    LEA EAX,[EBX + 0x18c]               ; 0053ab15
    PUSH EAX                            ; 0053ab1b
    LEA EAX,[EBX + 0x188]               ; 0053ab1c
    PUSH EAX                            ; 0053ab22
    PUSH 0x5e60f9                       ; 0053ab23 | = "%f,%f,%f\n"
    PUSH ESI                            ; 0053ab28
    CALL FUN_005b8100                   ; 0053ab29
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x14                        ; 0053ab2e
    MOV EAX,[0x0061b5a8]                ; 0053ab31 | DAT_0061b5a8
        ;   Label: LAB_0053ab31
    CMP dword ptr [EAX + 0x15acc0],0x17 ; 0053ab36 | DAT_01fc0e78
    JL 0x0053ab67                       ; 0053ab3d
        ;   XREF to: 0053ab67 (CONDITIONAL_JUMP)  ; LAB_0053ab67
    PUSH ESI                            ; 0053ab3f
    PUSH 0xff                           ; 0053ab40
    LEA EAX,[ESP + 0x8]                 ; 0053ab45
    PUSH EAX                            ; 0053ab49
    CALL FUN_005b9600                   ; 0053ab4a
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 0053ab4f
    LEA EAX,[EBX + 0x178]               ; 0053ab52
    PUSH EAX                            ; 0053ab58
    PUSH 0x5e6103                       ; 0053ab59 | DAT_005e6103
    PUSH ESI                            ; 0053ab5e
    CALL FUN_005b8100                   ; 0053ab5f
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 0053ab64
    MOV EAX,[0x0061b5a8]                ; 0053ab67 | DAT_0061b5a8
        ;   Label: LAB_0053ab67
    CMP dword ptr [EAX + 0x15acc0],0x1b ; 0053ab6c | DAT_01fc0e78
    JZ 0x0053abfe                       ; 0053ab73
        ;   XREF to: 0053abfe (CONDITIONAL_JUMP)  ; LAB_0053abfe
    MOV dword ptr [EBX + 0x140],0x0     ; 0053ab79
    ADD ESP,0x100                       ; 0053ab83
        ;   Label: LAB_0053ab83
    POP EBP                             ; 0053ab89
    POP EDI                             ; 0053ab8a
    POP ESI                             ; 0053ab8b
    POP EBX                             ; 0053ab8c
    RET                                 ; 0053ab8d
    PUSH ESI                            ; 0053ab8e
        ;   Label: LAB_0053ab8e
    PUSH 0xff                           ; 0053ab8f
    LEA EAX,[ESP + 0x8]                 ; 0053ab94
    PUSH EAX                            ; 0053ab98
    CALL FUN_005b9600                   ; 0053ab99
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 0053ab9e
    JMP 0x0053a915                      ; 0053aba1
        ;   XREF to: 0053a915 (UNCONDITIONAL_JUMP)  ; LAB_0053a915
    MOV dword ptr [EBX + 0x150],0x1     ; 0053aba6
        ;   Label: LAB_0053aba6
    MOV EBP,dword ptr [EAX + 0x15ac40]  ; 0053abb0 | DAT_01fc0df8
    ADD EAX,0x15ac40                    ; 0053abb6
    MOV dword ptr [EDI],EBP             ; 0053abbb
    MOV ECX,EDI                         ; 0053abbd
    MOV EBP,dword ptr [EAX + 0x4]       ; 0053abbf | DAT_01fc0dfc
    MOV EDX,EAX                         ; 0053abc2
    MOV dword ptr [EDI + 0x4],EBP       ; 0053abc4
    ADD EDI,0xc                         ; 0053abc7
    MOV EBP,dword ptr [EAX + 0x8]       ; 0053abca | DAT_01fc0e00
    ADD EAX,0xc                         ; 0053abcd
    MOV dword ptr [EDI + -0x4],EBP      ; 0053abd0
    CMP EDI,EAX                         ; 0053abd3
    JZ 0x0053abe7                       ; 0053abd5
        ;   XREF to: 0053abe7 (CONDITIONAL_JUMP)  ; LAB_0053abe7
    MOV EBP,dword ptr [EAX]             ; 0053abd7 | DAT_01fc0e04
    MOV dword ptr [EDI],EBP             ; 0053abd9
    MOV EBP,dword ptr [EAX + 0x4]       ; 0053abdb | DAT_01fc0e08
    MOV dword ptr [EDI + 0x4],EBP       ; 0053abde
    MOV EBP,dword ptr [EAX + 0x8]       ; 0053abe1 | DAT_01fc0e0c
    MOV dword ptr [EDI + 0x8],EBP       ; 0053abe4
    MOV EAX,dword ptr [EDX + 0x18]      ; 0053abe7 | DAT_01fc0e10
        ;   Label: LAB_0053abe7
    MOV dword ptr [ECX + 0x18],EAX      ; 0053abea
    MOV EAX,dword ptr [EDX + 0x1c]      ; 0053abed | DAT_01fc0e14
    MOV dword ptr [ECX + 0x1c],EAX      ; 0053abf0
    MOV EAX,dword ptr [EDX + 0x20]      ; 0053abf3 | DAT_01fc0e18
    MOV dword ptr [ECX + 0x20],EAX      ; 0053abf6
    JMP 0x0053aaca                      ; 0053abf9
        ;   XREF to: 0053aaca (UNCONDITIONAL_JUMP)  ; LAB_0053aaca
    PUSH ESI                            ; 0053abfe
        ;   Label: LAB_0053abfe
    PUSH 0xff                           ; 0053abff
    LEA EAX,[ESP + 0x8]                 ; 0053ac04
    PUSH EAX                            ; 0053ac08
    CALL FUN_005b9600                   ; 0053ac09
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 0053ac0e
    LEA EAX,[EBX + 0x140]               ; 0053ac11
    PUSH EAX                            ; 0053ac17
    PUSH 0x5e6107                       ; 0053ac18 | DAT_005e6107
    PUSH ESI                            ; 0053ac1d
    CALL FUN_005b8100                   ; 0053ac1e
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    MOV EBP,dword ptr [EBX + 0x140]     ; 0053ac23
    ADD ESP,0xc                         ; 0053ac29
    TEST EBP,EBP                        ; 0053ac2c
    JZ 0x0053ab83                       ; 0053ac2e
        ;   XREF to: 0053ab83 (CONDITIONAL_JUMP)  ; LAB_0053ab83
    MOV EAX,0x5e610b                    ; 0053ac34 | = "..\\core\\setutil.cpp"
    MOV EDX,0xd5                        ; 0053ac39
    PUSH 0x5e611f                       ; 0053ac3e | = "Panning cameras not supported, bucko!"
    MOV [0x01d046a0],EAX                ; 0053ac43 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0053ac48 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0053ac4e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0053ac53
    ADD ESP,0x100                       ; 0053ac56
    POP EBP                             ; 0053ac5c
    POP EDI                             ; 0053ac5d
    POP ESI                             ; 0053ac5e
    POP EBX                             ; 0053ac5f
    RET                                 ; 0053ac60

