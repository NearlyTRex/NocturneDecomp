; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0043a7a0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_bow_wav_005ce21d
;   undefined4 DAT_005ce22e
;   undefined4 DAT_005ce236
;   undefined4 DAT_00614d30
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_0061c068
;   undefined4 DAT_007bdc94
;   undefined4 DAT_01cb8280
;   undefined4 DAT_01e661b8
;   undefined4 DAT_01fb32c8
;   undefined4 DAT_01fb32cc
;   undefined4 DAT_01fb32d0
;   undefined4 DAT_01fb32d4
;   undefined4 DAT_01fb32d8
;   undefined4 DAT_01fb32dc
;   ... and 6 more
;
; Called Functions:
;   FUN_00408cf0
;   FUN_00408d70
;   FUN_00408de0
;   FUN_0040c8f0
;   FUN_004222d0
;   FUN_0049d2c0
;   FUN_004c6d40
;   FUN_004c72d0
;   FUN_00535ee0
;   FUN_00537e00
;   FUN_00537e30
;   FUN_00537eb0
;   FUN_0055ae50
;   FUN_00578550
;   FUN_00578570
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043a7a0
        ;   Label: FUN_0043a7a0
    PUSH ESI                            ; 0043a7a1
    PUSH EDI                            ; 0043a7a2
    PUSH EBP                            ; 0043a7a3
    MOV EBP,ESP                         ; 0043a7a4
    SUB ESP,0x144                       ; 0043a7a6
    AND ESP,0xfffffff8                  ; 0043a7ac
    MOV EBX,dword ptr [EBP + 0x14]      ; 0043a7af
    PUSH EBX                            ; 0043a7b2
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0043a7b3
    LEA ESI,[ESP + 0xa0]                ; 0043a7b9
    LEA EDI,[ESP + 0xac]                ; 0043a7c0
    CALL dword ptr [EAX + 0xe8]         ; 0043a7c7
    ADD ESP,0x4                         ; 0043a7cd
    LEA EAX,[ESP + 0xa8]                ; 0043a7d0
    LEA ESI,[ESP + 0x9c]                ; 0043a7d7
    PUSH EAX                            ; 0043a7de
    MOVSD ES:EDI,ESI                    ; 0043a7df
    MOVSD ES:EDI,ESI                    ; 0043a7e0
    MOVSD ES:EDI,ESI                    ; 0043a7e1
    PUSH EBX                            ; 0043a7e2
    LEA ESI,[ESP + 0xe0]                ; 0043a7e3
    CALL FUN_00408d70                   ; 0043a7ea
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    ADD ESP,0x8                         ; 0043a7ef
    LEA EDI,[ESP + 0x48]                ; 0043a7f2
    LEA ESI,[ESP + 0xd8]                ; 0043a7f6
    PUSH EBX                            ; 0043a7fd
    MOVSD ES:EDI,ESI                    ; 0043a7fe
    MOVSD ES:EDI,ESI                    ; 0043a7ff
    MOVSD ES:EDI,ESI                    ; 0043a800
    CALL FUN_0058a290                   ; 0043a801
        ;   XREF to: 0058a290 (UNCONDITIONAL_CALL)  ; undefined FUN_0058a290()
    ADD ESP,0x4                         ; 0043a806
    TEST EAX,EAX                        ; 0043a809
    JNZ 0x0043a814                      ; 0043a80b
        ;   XREF to: 0043a814 (CONDITIONAL_JUMP)  ; LAB_0043a814
    MOV ESP,EBP                         ; 0043a80d
    POP EBP                             ; 0043a80f
    POP EDI                             ; 0043a810
    POP ESI                             ; 0043a811
    POP EBX                             ; 0043a812
    RET                                 ; 0043a813
    MOV EAX,dword ptr [EBX + 0x444]     ; 0043a814
        ;   Label: LAB_0043a814
    MOV dword ptr [ESP + 0x98],EAX      ; 0043a81a
    LEA EAX,[ESP + 0x90]                ; 0043a821
    LEA ESI,[ESP + 0xcc]                ; 0043a828
    PUSH EAX                            ; 0043a82f
    LEA EDI,[ESP + 0x100]               ; 0043a830
    XOR EDX,EDX                         ; 0043a837
    PUSH EBX                            ; 0043a839
    MOV dword ptr [ESP + 0x98],EDX      ; 0043a83a
    MOV dword ptr [ESP + 0x9c],EDX      ; 0043a841
    CALL FUN_00408cf0                   ; 0043a848
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408cf0()
    ADD ESP,0x8                         ; 0043a84d
    LEA ESI,[ESP + 0xcc]                ; 0043a850
    FLD float ptr [ESP + 0x48]          ; 0043a857
    FLD float ptr [ESP + 0x4c]          ; 0043a85b
    MOVSD ES:EDI,ESI                    ; 0043a85f
    MOVSD ES:EDI,ESI                    ; 0043a860
    MOVSD ES:EDI,ESI                    ; 0043a861
    FLD float ptr [ESP + 0x50]          ; 0043a862
    LEA EDI,[ESP + 0xe4]                ; 0043a866
    LEA ESI,[ESP + 0x120]               ; 0043a86d
    FXCH ST2                            ; 0043a874
    FADD float ptr [ESP + 0xfc]         ; 0043a876
    FXCH                                ; 0043a87d
    FADD float ptr [ESP + 0x100]        ; 0043a87f
    FXCH ST2                            ; 0043a886
    FADD float ptr [ESP + 0x104]        ; 0043a888
    FXCH                                ; 0043a88f
    FSTP float ptr [ESP + 0x120]        ; 0043a891
    FXCH                                ; 0043a898
    FSTP float ptr [ESP + 0x124]        ; 0043a89a
    FSTP float ptr [ESP + 0x128]        ; 0043a8a1
    MOVSD ES:EDI,ESI                    ; 0043a8a8
    MOVSD ES:EDI,ESI                    ; 0043a8a9
    MOVSD ES:EDI,ESI                    ; 0043a8aa
    FLD float ptr [EBX + 0x444]         ; 0043a8ab
    FDIVR double ptr [0x005ce22e]       ; 0043a8b1 | DAT_005ce22e
    FLD float ptr [ESP + 0xfc]          ; 0043a8b7
    FXCH                                ; 0043a8be
    FSTP float ptr [ESP + 0x130]        ; 0043a8c0
    FMUL float ptr [ESP + 0x130]        ; 0043a8c7
    FLD float ptr [ESP + 0x100]         ; 0043a8ce
    FMUL float ptr [ESP + 0x130]        ; 0043a8d5
    FLD float ptr [ESP + 0x104]         ; 0043a8dc
    FMUL float ptr [ESP + 0x130]        ; 0043a8e3
    FLD float ptr [ESP + 0x48]          ; 0043a8ea
    FLD float ptr [ESP + 0x4c]          ; 0043a8ee
    LEA EDI,[ESP + 0x108]               ; 0043a8f2
    LEA ESI,[ESP + 0x6c]                ; 0043a8f9
    FXCH ST4                            ; 0043a8fd
    FSTP float ptr [ESP + 0x6c]         ; 0043a8ff
    FXCH ST2                            ; 0043a903
    FSTP float ptr [ESP + 0x70]         ; 0043a905
    FSTP float ptr [ESP + 0x74]         ; 0043a909
    MOVSD ES:EDI,ESI                    ; 0043a90d
    MOVSD ES:EDI,ESI                    ; 0043a90e
    MOVSD ES:EDI,ESI                    ; 0043a90f
    FLD float ptr [ESP + 0x50]          ; 0043a910
    LEA EDI,[ESP + 0x114]               ; 0043a914
    LEA ESI,[ESP + 0x54]                ; 0043a91b
    FXCH                                ; 0043a91f
    FSUB float ptr [ESP + 0x108]        ; 0043a921
    FXCH ST2                            ; 0043a928
    FSUB float ptr [ESP + 0x10c]        ; 0043a92a
    FXCH                                ; 0043a931
    FSUB float ptr [ESP + 0x110]        ; 0043a933
    FXCH ST2                            ; 0043a93a
    FSTP float ptr [ESP + 0x54]         ; 0043a93c
    FSTP float ptr [ESP + 0x58]         ; 0043a940
    FSTP float ptr [ESP + 0x5c]         ; 0043a944
    MOVSD ES:EDI,ESI                    ; 0043a948
    MOVSD ES:EDI,ESI                    ; 0043a949
    MOVSD ES:EDI,ESI                    ; 0043a94a
    MOV ESI,dword ptr [0x0061b5a8]      ; 0043a94b | DAT_0061b5a8
    PUSH ESI                            ; 0043a951 | DAT_01e661b8
    CALL FUN_00537e00                   ; 0043a952
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; undefined FUN_00537e00()
    ADD ESP,0x4                         ; 0043a957
    PUSH 0x1                            ; 0043a95a
    MOV EDI,dword ptr [0x0061b5a8]      ; 0043a95c | DAT_0061b5a8
    PUSH EDI                            ; 0043a962 | DAT_01e661b8
    CALL FUN_00537eb0                   ; 0043a963
        ;   XREF to: 00537eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00537eb0()
    ADD ESP,0x8                         ; 0043a968
    PUSH EBX                            ; 0043a96b
    MOV EAX,[0x0061b5a8]                ; 0043a96c | DAT_0061b5a8
    PUSH EAX                            ; 0043a971 | DAT_01e661b8
    CALL FUN_00537e30                   ; 0043a972
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; undefined FUN_00537e30()
    MOV EDX,dword ptr [EBX + 0x460]     ; 0043a977
    ADD ESP,0x8                         ; 0043a97d
    TEST EDX,EDX                        ; 0043a980
    JNZ 0x0043aa19                      ; 0043a982
        ;   XREF to: 0043aa19 (CONDITIONAL_JUMP)  ; LAB_0043aa19
    XOR EDI,EDI                         ; 0043a988
        ;   Label: LAB_0043a988
    MOV dword ptr [ESP + 0x12c],EDI     ; 0043a98a
    LEA EAX,[ESP + 0xe4]                ; 0043a991
        ;   Label: LAB_0043a991
    PUSH EAX                            ; 0043a998
    LEA EAX,[ESP + 0x118]               ; 0043a999
    PUSH EAX                            ; 0043a9a0
    MOV EAX,[0x0061b5a8]                ; 0043a9a1 | DAT_0061b5a8
    PUSH EAX                            ; 0043a9a6 | DAT_01e661b8
    CALL FUN_00535ee0                   ; 0043a9a7
        ;   XREF to: 00535ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_00535ee0()
    MOV dword ptr [ESP + 0x14c],EAX     ; 0043a9ac
    FLD float ptr [ESP + 0x14c]         ; 0043a9b3
    ADD ESP,0xc                         ; 0043a9ba
    FLDZ                                ; 0043a9bd
    FXCH                                ; 0043a9bf
    FST float ptr [ESP + 0x8]           ; 0043a9c1
    FSTP double ptr [ESP]               ; 0043a9c5
    FCOMP double ptr [ESP]              ; 0043a9c8
    FNSTSW AX                           ; 0043a9cb
    SAHF                                ; 0043a9cd
    JBE 0x0043aa2e                      ; 0043a9ce
        ;   XREF to: 0043aa2e (CONDITIONAL_JUMP)  ; LAB_0043aa2e
    MOV EDI,dword ptr [0x0061b5a8]      ; 0043a9d0 | DAT_0061b5a8
        ;   Label: LAB_0043a9d0
    PUSH EDI                            ; 0043a9d6 | DAT_01e661b8
    CALL FUN_00537e00                   ; 0043a9d7
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; undefined FUN_00537e00()
    ADD ESP,0x4                         ; 0043a9dc
    FLD float ptr [ESP + 0x8]           ; 0043a9df
    FLD1                                ; 0043a9e3
    FCOMPP                              ; 0043a9e5
    FNSTSW AX                           ; 0043a9e7
    SAHF                                ; 0043a9e9
    LEA EAX,[ESP + 0x48]                ; 0043a9ea
    PUSH EAX                            ; 0043a9ee
    PUSH 0x5ce21d                       ; 0043a9ef | = "bow-!.wav"
    PUSH EBX                            ; 0043a9f4
    MOV EAX,[0x0061c068]                ; 0043a9f5 | DAT_0061c068
    PUSH EAX                            ; 0043a9fa
    CALL FUN_0055ae50                   ; 0043a9fb
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; undefined FUN_0055ae50()
    MOV EAX,0x1                         ; 0043aa00
    ADD ESP,0x10                        ; 0043aa05
    MOV dword ptr [EBX + 0x45c],0x3f2a7efa ; 0043aa08
    MOV ESP,EBP                         ; 0043aa12
    POP EBP                             ; 0043aa14
    POP EDI                             ; 0043aa15
    POP ESI                             ; 0043aa16
    POP EBX                             ; 0043aa17
    RET                                 ; 0043aa18
    PUSH EDX                            ; 0043aa19
        ;   Label: LAB_0043aa19
    MOV ESI,dword ptr [0x0061b5a8]      ; 0043aa1a | DAT_0061b5a8
    PUSH ESI                            ; 0043aa20 | DAT_01e661b8
    CALL FUN_00537e30                   ; 0043aa21
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; undefined FUN_00537e30()
    ADD ESP,0x8                         ; 0043aa26
    JMP 0x0043a988                      ; 0043aa29
        ;   XREF to: 0043a988 (UNCONDITIONAL_JUMP)  ; LAB_0043a988
    FLD1                                ; 0043aa2e
        ;   Label: LAB_0043aa2e
    FCOMP double ptr [ESP]              ; 0043aa30
    FNSTSW AX                           ; 0043aa33
    SAHF                                ; 0043aa35
    JC 0x0043a9d0                       ; 0043aa36
        ;   XREF to: 0043a9d0 (CONDITIONAL_JUMP)  ; LAB_0043a9d0
    MOV EDX,dword ptr [0x007bdc94]      ; 0043aa38 | DAT_007bdc94
    MOV EAX,[0x0061b5a8]                ; 0043aa3e | DAT_0061b5a8
    PUSH EDX                            ; 0043aa43
    MOV ECX,dword ptr [EAX + 0x14d144]  ; 0043aa44 | DAT_01fb32fc
    PUSH ECX                            ; 0043aa4a
    CALL FUN_0040c8f0                   ; 0043aa4b
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    ADD ESP,0x8                         ; 0043aa50
    MOV dword ptr [ESP + 0x13c],EAX     ; 0043aa53
    TEST EAX,EAX                        ; 0043aa5a
    JZ 0x0043aa7b                       ; 0043aa5c
        ;   XREF to: 0043aa7b (CONDITIONAL_JUMP)  ; LAB_0043aa7b
    PUSH EAX                            ; 0043aa5e
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 0043aa5f
    CALL dword ptr [ESI + 0x114]        ; 0043aa65
    ADD ESP,0x4                         ; 0043aa6b
    TEST EAX,EAX                        ; 0043aa6e
    JLE 0x0043aa7b                      ; 0043aa70
        ;   XREF to: 0043aa7b (CONDITIONAL_JUMP)  ; LAB_0043aa7b
    XOR ESI,ESI                         ; 0043aa72
    MOV dword ptr [ESP + 0x13c],ESI     ; 0043aa74
    MOV EDI,dword ptr [0x01cb8280]      ; 0043aa7b | DAT_01cb8280
        ;   Label: LAB_0043aa7b
    MOV EAX,[0x0061b5a8]                ; 0043aa81 | DAT_0061b5a8
    PUSH EDI                            ; 0043aa86
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0043aa87 | DAT_01fb32fc
    PUSH EDX                            ; 0043aa8d
    CALL FUN_0040c8f0                   ; 0043aa8e
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    MOV ECX,dword ptr [0x02653628]      ; 0043aa93 | DAT_02653628
    ADD ESP,0x8                         ; 0043aa99
    MOV EDI,EAX                         ; 0043aa9c
    MOV EAX,[0x0061b5a8]                ; 0043aa9e | DAT_0061b5a8
    PUSH ECX                            ; 0043aaa3
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 0043aaa4 | DAT_01fb32fc
    PUSH ESI                            ; 0043aaaa
    CALL FUN_0040c8f0                   ; 0043aaab
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    ADD ESP,0x8                         ; 0043aab0
    MOV ESI,EAX                         ; 0043aab3
    MOV dword ptr [ESP + 0x134],EAX     ; 0043aab5
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0043aabc
    TEST EAX,EAX                        ; 0043aac3
    JNZ 0x0043ab37                      ; 0043aac5
        ;   XREF to: 0043ab37 (CONDITIONAL_JUMP)  ; LAB_0043ab37
    TEST EDI,EDI                        ; 0043aac7
    JNZ 0x0043ad9b                      ; 0043aac9
        ;   XREF to: 0043ad9b (CONDITIONAL_JUMP)  ; LAB_0043ad9b
    TEST ESI,ESI                        ; 0043aacf
    JZ 0x0043addd                       ; 0043aad1
        ;   XREF to: 0043addd (CONDITIONAL_JUMP)  ; LAB_0043addd
    PUSH ESI                            ; 0043aad7
    CALL FUN_00578550                   ; 0043aad8
        ;   XREF to: 00578550 (UNCONDITIONAL_CALL)  ; undefined FUN_00578550()
    ADD ESP,0x4                         ; 0043aadd
    PUSH EBX                            ; 0043aae0
    PUSH ESI                            ; 0043aae1
    CALL FUN_00578570                   ; 0043aae2
        ;   XREF to: 00578570 (UNCONDITIONAL_CALL)  ; undefined FUN_00578570()
    ADD ESP,0x8                         ; 0043aae7
    TEST EAX,EAX                        ; 0043aaea
    JZ 0x0043ab1b                       ; 0043aaec
        ;   XREF to: 0043ab1b (CONDITIONAL_JUMP)  ; LAB_0043ab1b
    PUSH EBX                            ; 0043aaee
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0043aaef
    CALL dword ptr [EAX + 0xf4]         ; 0043aaf5
    MOV dword ptr [ESP + 0x144],EAX     ; 0043aafb
    FLD float ptr [ESP + 0x144]         ; 0043ab02
    ADD ESP,0x4                         ; 0043ab09
    SUB ESP,0x4                         ; 0043ab0c
    FSTP float ptr [ESP]                ; 0043ab0f
    PUSH ESI                            ; 0043ab12
    CALL FUN_005785b0                   ; 0043ab13
        ;   XREF to: 005785b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005785b0()
    ADD ESP,0x8                         ; 0043ab18
    MOV ESI,dword ptr [ESP + 0x134]     ; 0043ab1b
        ;   Label: LAB_0043ab1b
    PUSH ESI                            ; 0043ab22
    MOV EDI,dword ptr [0x0061b5a8]      ; 0043ab23 | DAT_0061b5a8
    PUSH EDI                            ; 0043ab29 | DAT_01e661b8
    CALL FUN_00537e30                   ; 0043ab2a
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; undefined FUN_00537e30()
    ADD ESP,0x8                         ; 0043ab2f
    JMP 0x0043adc0                      ; 0043ab32
        ;   XREF to: 0043adc0 (UNCONDITIONAL_JUMP)  ; LAB_0043adc0
    MOV EDX,dword ptr [ESP + 0x13c]     ; 0043ab37
        ;   Label: LAB_0043ab37
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 0043ab3e
    PUSH EDX                            ; 0043ab44
    CALL dword ptr [EAX + 0xe8]         ; 0043ab45
    ADD ESP,0x4                         ; 0043ab4b
    TEST EAX,EAX                        ; 0043ab4e
    JZ 0x0043ab85                       ; 0043ab50
        ;   XREF to: 0043ab85 (CONDITIONAL_JUMP)  ; LAB_0043ab85
    CMP dword ptr [ESP + 0x12c],0x0     ; 0043ab52
    JNZ 0x0043a9d0                      ; 0043ab5a
        ;   XREF to: 0043a9d0 (CONDITIONAL_JUMP)  ; LAB_0043a9d0
    MOV ESI,dword ptr [EBX + 0x6c4]     ; 0043ab60
    MOV ECX,dword ptr [0x0061b5a8]      ; 0043ab66 | DAT_0061b5a8
    INC ESI                             ; 0043ab6c
    PUSH ECX                            ; 0043ab6d | DAT_01e661b8
    MOV dword ptr [EBX + 0x6c4],ESI     ; 0043ab6e
    CALL FUN_00537e00                   ; 0043ab74
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; undefined FUN_00537e00()
    ADD ESP,0x4                         ; 0043ab79
    XOR EAX,EAX                         ; 0043ab7c
    MOV ESP,EBP                         ; 0043ab7e
    POP EBP                             ; 0043ab80
    POP EDI                             ; 0043ab81
    POP ESI                             ; 0043ab82
    POP EBX                             ; 0043ab83
    RET                                 ; 0043ab84
    LEA EAX,[ESP + 0xc]                 ; 0043ab85
        ;   Label: LAB_0043ab85
    PUSH EAX                            ; 0043ab89
    CALL FUN_004222d0                   ; 0043ab8a
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004222d0()
    MOV EAX,[0x0061b5a8]                ; 0043ab8f | DAT_0061b5a8
    ADD ESP,0x4                         ; 0043ab94
    MOV EAX,dword ptr [EAX + 0x14d148]  ; 0043ab97 | DAT_01fb3300
    MOV dword ptr [ESP + 0xc],EAX       ; 0043ab9d
    PUSH EBX                            ; 0043aba1
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0043aba2
    LEA EDI,[ESP + 0xb8]                ; 0043aba8
    CALL dword ptr [EAX + 0xf4]         ; 0043abaf
    MOV ECX,0x3ecccccd                  ; 0043abb5
    MOV dword ptr [ESP + 0x144],EAX     ; 0043abba
    MOV ESI,dword ptr [0x0061b5a8]      ; 0043abc1 | DAT_0061b5a8
    FLD float ptr [ESP + 0x144]         ; 0043abc7
    ADD ESP,0x4                         ; 0043abce
    LEA EAX,[ESI + 0x14d11c]            ; 0043abd1
    MOV dword ptr [ESP + 0x14],ECX      ; 0043abd7
    FSTP float ptr [ESP + 0x10]         ; 0043abdb
    FLD float ptr [EAX]                 ; 0043abdf | DAT_01fb32d4
    FLD float ptr [EAX + 0x4]           ; 0043abe1 | DAT_01fb32d8
    FLD float ptr [EAX + 0x8]           ; 0043abe4 | DAT_01fb32dc
    FXCH ST2                            ; 0043abe7
    FSUB float ptr [ESI + 0x14d110]     ; 0043abe9 | DAT_01fb32c8
    FXCH                                ; 0043abef
    FSUB float ptr [ESI + 0x14d114]     ; 0043abf1 | DAT_01fb32cc
    FXCH ST2                            ; 0043abf7
    FSUB float ptr [ESI + 0x14d118]     ; 0043abf9 | DAT_01fb32d0
    FXCH                                ; 0043abff
    FSTP float ptr [ESP + 0xc0]         ; 0043ac01
    FXCH                                ; 0043ac08
    FSTP float ptr [ESP + 0xc4]         ; 0043ac0a
    LEA ESI,[ESP + 0xc0]                ; 0043ac11
    FSTP float ptr [ESP + 0xc8]         ; 0043ac18
    MOVSD ES:EDI,ESI                    ; 0043ac1f
    MOVSD ES:EDI,ESI                    ; 0043ac20
    MOVSD ES:EDI,ESI                    ; 0043ac21
    FLD float ptr [ESP + 0xb8]          ; 0043ac22
    FMUL ST0                            ; 0043ac29
    FLD float ptr [ESP + 0xb4]          ; 0043ac2b
    FMUL ST0                            ; 0043ac32
    FADDP                               ; 0043ac34
    FLD float ptr [ESP + 0xbc]          ; 0043ac36
    FMUL ST0                            ; 0043ac3d
    FADDP                               ; 0043ac3f
    FSQRT                               ; 0043ac41
    FDIVR double ptr [0x005ce236]       ; 0043ac43 | DAT_005ce236
    FLD float ptr [ESP + 0xb4]          ; 0043ac49
    FXCH                                ; 0043ac50
    FSTP float ptr [ESP + 0x138]        ; 0043ac52
    FMUL float ptr [ESP + 0x138]        ; 0043ac59
    FLD float ptr [ESP + 0xb8]          ; 0043ac60
    FMUL float ptr [ESP + 0x138]        ; 0043ac67
    FLD float ptr [ESP + 0xbc]          ; 0043ac6e
    FMUL float ptr [ESP + 0x138]        ; 0043ac75
    LEA EDI,[ESP + 0xf0]                ; 0043ac7c
    LEA ESI,[ESP + 0x78]                ; 0043ac83
    FXCH ST2                            ; 0043ac87
    FSTP float ptr [ESP + 0x78]         ; 0043ac89
    FSTP float ptr [ESP + 0x7c]         ; 0043ac8d
    FSTP float ptr [ESP + 0x80]         ; 0043ac91
    MOVSD ES:EDI,ESI                    ; 0043ac98
    MOVSD ES:EDI,ESI                    ; 0043ac99
    MOVSD ES:EDI,ESI                    ; 0043ac9a
    LEA EAX,[ESP + 0x18]                ; 0043ac9b
    LEA ESI,[ESP + 0xf0]                ; 0043ac9f
    CMP EAX,ESI                         ; 0043aca6
    JZ 0x0043accb                       ; 0043aca8
        ;   XREF to: 0043accb (CONDITIONAL_JUMP)  ; LAB_0043accb
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0043acaa
    MOV dword ptr [ESP + 0x18],EAX      ; 0043acb1
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0043acb5
    MOV dword ptr [ESP + 0x1c],EAX      ; 0043acbc
    MOV EAX,dword ptr [ESP + 0xf8]      ; 0043acc0
    MOV dword ptr [ESP + 0x20],EAX      ; 0043acc7
    MOV EAX,[0x0061b5a8]                ; 0043accb | DAT_0061b5a8
        ;   Label: LAB_0043accb
    ADD EAX,0x14d138                    ; 0043acd0
    PUSH EAX                            ; 0043acd5 | DAT_01fb32f0
    MOV ESI,dword ptr [ESP + 0x140]     ; 0043acd6
    PUSH ESI                            ; 0043acdd
    LEA ESI,[ESP + 0x8c]                ; 0043acde
    LEA EDI,[ESP + 0x68]                ; 0043ace5
    CALL FUN_00408de0                   ; 0043ace9
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408de0()
    LEA ESI,[ESP + 0x8c]                ; 0043acee
    ADD ESP,0x8                         ; 0043acf5
    MOVSD ES:EDI,ESI                    ; 0043acf8
    MOVSD ES:EDI,ESI                    ; 0043acf9
    MOVSD ES:EDI,ESI                    ; 0043acfa
    LEA EAX,[ESP + 0x28]                ; 0043acfb
    LEA ESI,[ESP + 0x60]                ; 0043acff
    CMP EAX,ESI                         ; 0043ad03
    JZ 0x0043ad1f                       ; 0043ad05
        ;   XREF to: 0043ad1f (CONDITIONAL_JUMP)  ; LAB_0043ad1f
    MOV EAX,dword ptr [ESP + 0x60]      ; 0043ad07
    MOV dword ptr [ESP + 0x28],EAX      ; 0043ad0b
    MOV EAX,dword ptr [ESP + 0x64]      ; 0043ad0f
    MOV dword ptr [ESP + 0x2c],EAX      ; 0043ad13
    MOV EAX,dword ptr [ESP + 0x68]      ; 0043ad17
    MOV dword ptr [ESP + 0x30],EAX      ; 0043ad1b
    MOV EAX,dword ptr [EBX + 0x6c8]     ; 0043ad1f
        ;   Label: LAB_0043ad1f
    MOV EDI,0x68                        ; 0043ad25
    MOV dword ptr [ESP + 0x34],EAX      ; 0043ad2a
    MOV dword ptr [ESP + 0x3c],EDI      ; 0043ad2e
    MOV EAX,0x3e19999a                  ; 0043ad32
    MOV dword ptr [ESP + 0x40],EBX      ; 0043ad37
    MOV dword ptr [ESP + 0x38],EAX      ; 0043ad3b
    PUSH EBX                            ; 0043ad3f
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0043ad40
    CALL dword ptr [EAX + 0x9c]         ; 0043ad46
    ADD ESP,0x4                         ; 0043ad4c
    MOV dword ptr [ESP + 0x44],EAX      ; 0043ad4f
    LEA EAX,[ESP + 0xc]                 ; 0043ad53
    MOV ESI,dword ptr [ESP + 0x13c]     ; 0043ad57
    PUSH EAX                            ; 0043ad5e
    MOV EDX,dword ptr [ESP + 0x140]     ; 0043ad5f
    MOV ESI,dword ptr [ESI + 0x2b0]     ; 0043ad66
    PUSH EDX                            ; 0043ad6c
    CALL dword ptr [ESI + 0x110]        ; 0043ad6d
    MOV ECX,dword ptr [EBX + 0x440]     ; 0043ad73
    ADD ESP,0x8                         ; 0043ad79
    TEST ECX,ECX                        ; 0043ad7c
    JZ 0x0043a9d0                       ; 0043ad7e
        ;   XREF to: 0043a9d0 (CONDITIONAL_JUMP)  ; LAB_0043a9d0
    MOV EAX,[0x0061b5a8]                ; 0043ad84 | DAT_0061b5a8
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 0043ad89 | DAT_01fb32fc
    PUSH ESI                            ; 0043ad8f
    PUSH EAX                            ; 0043ad90 | DAT_01e661b8
    CALL FUN_00537e30                   ; 0043ad91
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; undefined FUN_00537e30()
    ADD ESP,0x8                         ; 0043ad96
    JMP 0x0043adc0                      ; 0043ad99
        ;   XREF to: 0043adc0 (UNCONDITIONAL_JUMP)  ; LAB_0043adc0
    PUSH EDI                            ; 0043ad9b
        ;   Label: LAB_0043ad9b
    CALL FUN_004c72d0                   ; 0043ad9c
        ;   XREF to: 004c72d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c72d0()
    ADD ESP,0x4                         ; 0043ada1
    TEST EAX,EAX                        ; 0043ada4
    JZ 0x0043a9d0                       ; 0043ada6
        ;   XREF to: 0043a9d0 (CONDITIONAL_JUMP)  ; LAB_0043a9d0
    MOV EAX,[0x0061b5a8]                ; 0043adac | DAT_0061b5a8
    ADD EAX,0x14d138                    ; 0043adb1
    PUSH EAX                            ; 0043adb6 | DAT_01fb32f0
    PUSH EDI                            ; 0043adb7
    CALL FUN_004c6d40                   ; 0043adb8
        ;   XREF to: 004c6d40 (UNCONDITIONAL_CALL)  ; undefined FUN_004c6d40()
    ADD ESP,0x8                         ; 0043adbd
    MOV EDI,dword ptr [ESP + 0x12c]     ; 0043adc0
        ;   Label: LAB_0043adc0
    INC EDI                             ; 0043adc7
    MOV dword ptr [ESP + 0x12c],EDI     ; 0043adc8
    CMP EDI,0x4                         ; 0043adcf
    JL 0x0043a991                       ; 0043add2
        ;   XREF to: 0043a991 (CONDITIONAL_JUMP)  ; LAB_0043a991
    JMP 0x0043a9d0                      ; 0043add8
        ;   XREF to: 0043a9d0 (UNCONDITIONAL_JUMP)  ; LAB_0043a9d0
    MOV EAX,[0x0061b5a8]                ; 0043addd | DAT_0061b5a8
        ;   Label: LAB_0043addd
    MOV EDX,dword ptr [EAX + 0x14d134]  ; 0043ade2 | DAT_01fb32ec
    PUSH EDX                            ; 0043ade8
    LEA ESI,[EAX + 0x14d128]            ; 0043ade9
    PUSH ESI                            ; 0043adef | DAT_01fb32e0
    LEA ESI,[EBX + 0x30]                ; 0043adf0
    PUSH ESI                            ; 0043adf3
    ADD EAX,0x14d138                    ; 0043adf4
    PUSH EAX                            ; 0043adf9 | DAT_01fb32f0
    MOV ECX,dword ptr [0x00614d30]      ; 0043adfa | DAT_00614d30
    PUSH ECX                            ; 0043ae00
    CALL FUN_0049d2c0                   ; 0043ae01
        ;   XREF to: 0049d2c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049d2c0()
    ADD ESP,0x14                        ; 0043ae06
    JMP 0x0043a9d0                      ; 0043ae09
        ;   XREF to: 0043a9d0 (UNCONDITIONAL_JUMP)  ; LAB_0043a9d0

