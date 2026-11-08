; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0042a930(int param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x1c8]:1  local_1c8
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_00428ae0 at 00429ed1
;
; Referenced Globals:
;   undefined4 s_s_can_t_pick_up_s_sombod_005d54ec+1
;   TerminatedCString s_s_can_t_pick_up_s_giving_005d551f
;   TerminatedCString s_s_beginning_to_pickup_s_005d553f
;   TerminatedCString s_core_carved_cpp_005d555a
;   TerminatedCString s_Invalid_demon_townsfolk_005d556d
;   TerminatedCString s_CBodyPart_005d5593
;   TerminatedCString s_s_is_going_to_try_to_pic_005d559d
;   undefined4 DAT_005d55c5
;   undefined4 DAT_005d55cd
;   undefined4 DAT_005d55d5
;   undefined4 DAT_005d55dd
;   void* PTR_DAT_00611100 = 007db5f0
;   undefined4 DAT_00622c18
;   undefined4 DAT_007db5f0
;   undefined4 DAT_01d1d400
;   ... and 6 more
;
; Called Functions:
;   FUN_00408b40
;   FUN_0040c550
;   FUN_0040cc00
;   FUN_0040cc60
;   FUN_0041afa0
;   FUN_0041b020
;   FUN_00428550
;   FUN_0042b290
;   FUN_0042b330
;   FUN_0042be20
;   FUN_0042ccf0
;   FUN_00445430
;   FUN_005030e0
;   FUN_005247c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042a930
        ;   Label: FUN_0042a930
    PUSH ESI                            ; 0042a931
    PUSH EDI                            ; 0042a932
    PUSH EBP                            ; 0042a933
    MOV EBP,ESP                         ; 0042a934
    SUB ESP,0x224                       ; 0042a936
    AND ESP,0xfffffff8                  ; 0042a93c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042a93f
    CMP dword ptr [EAX + 0xc2c8],0x0    ; 0042a942
    JL 0x0042a9ad                       ; 0042a949
        ;   XREF to: 0042a9ad (CONDITIONAL_JUMP)  ; LAB_0042a9ad
    FLD float ptr [EAX + 0xc270]        ; 0042a94b
    FSUB float ptr [EBP + 0x18]         ; 0042a951
    FST float ptr [EAX + 0xc270]        ; 0042a954
    FLDZ                                ; 0042a95a
    FCOMPP                              ; 0042a95c
    FNSTSW AX                           ; 0042a95e
    SAHF                                ; 0042a960
    JC 0x0042a9b6                       ; 0042a961
        ;   XREF to: 0042a9b6 (CONDITIONAL_JUMP)  ; LAB_0042a9b6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042a963
        ;   Label: LAB_0042a963
    MOV EBX,dword ptr [EAX + 0x25b0]    ; 0042a966
    TEST EBX,EBX                        ; 0042a96c
    JNZ 0x0042a9ad                      ; 0042a96e
        ;   XREF to: 0042a9ad (CONDITIONAL_JUMP)  ; LAB_0042a9ad
    MOV ESI,dword ptr [EAX + 0x2628]    ; 0042a970
    TEST ESI,ESI                        ; 0042a976
    JNZ 0x0042a9ad                      ; 0042a978
        ;   XREF to: 0042a9ad (CONDITIONAL_JUMP)  ; LAB_0042a9ad
    FLD float ptr [EAX + 0xc274]        ; 0042a97a
    FLDZ                                ; 0042a980
    FCOMPP                              ; 0042a982
    FNSTSW AX                           ; 0042a984
    SAHF                                ; 0042a986
    JNC 0x0042a9f4                      ; 0042a987
        ;   XREF to: 0042a9f4 (CONDITIONAL_JUMP)  ; LAB_0042a9f4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042a989
    FLD float ptr [EAX + 0xc274]        ; 0042a98c
    FSUB float ptr [EBP + 0x18]         ; 0042a992
    FST float ptr [EAX + 0xc274]        ; 0042a995
    FLDZ                                ; 0042a99b
    FCOMPP                              ; 0042a99d
    FNSTSW AX                           ; 0042a99f
    SAHF                                ; 0042a9a1
    JBE 0x0042a9ad                      ; 0042a9a2
        ;   XREF to: 0042a9ad (CONDITIONAL_JUMP)  ; LAB_0042a9ad
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042a9a4
    MOV dword ptr [EAX + 0xc274],EBX    ; 0042a9a7
    XOR EAX,EAX                         ; 0042a9ad
        ;   Label: LAB_0042a9ad
    MOV ESP,EBP                         ; 0042a9af
    POP EBP                             ; 0042a9b1
    POP EDI                             ; 0042a9b2
    POP ESI                             ; 0042a9b3
    POP EBX                             ; 0042a9b4
    RET                                 ; 0042a9b5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042a9b6
        ;   Label: LAB_0042a9b6
    MOV ECX,dword ptr [EAX + 0xc26c]    ; 0042a9b9
    PUSH 0x41200000                     ; 0042a9bf
    INC ECX                             ; 0042a9c4
    PUSH 0x40a00000                     ; 0042a9c5
    MOV dword ptr [EAX + 0xc26c],ECX    ; 0042a9ca
    CALL FUN_0040cc00                   ; 0042a9d0
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x228],EAX     ; 0042a9d5
    FLD float ptr [ESP + 0x228]         ; 0042a9dc
    ADD ESP,0x8                         ; 0042a9e3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042a9e6
    FSTP float ptr [EAX + 0xc270]       ; 0042a9e9
    JMP 0x0042a963                      ; 0042a9ef
        ;   XREF to: 0042a963 (UNCONDITIONAL_JUMP)  ; LAB_0042a963
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042a9f4
        ;   Label: LAB_0042a9f4
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042a9f7
    MOV EDI,dword ptr [EAX + 0xc278]    ; 0042a9fa
    ADD EBX,0x20                        ; 0042aa00
    TEST EDI,EDI                        ; 0042aa03
    JNZ 0x0042aa9b                      ; 0042aa05
        ;   XREF to: 0042aa9b (CONDITIONAL_JUMP)  ; LAB_0042aa9b
    LEA EAX,[ESP + 0x70]                ; 0042aa0b
    MOV dword ptr [ESP + 0x208],ESI     ; 0042aa0f
    MOV dword ptr [ESP + 0x218],ESI     ; 0042aa16
    MOV dword ptr [ESP + 0x20c],EBX     ; 0042aa1d
    MOV dword ptr [ESP + 0x214],ESI     ; 0042aa24
    ADD EAX,0xc                         ; 0042aa2b
    MOV dword ptr [ESP + 0x21c],ESI     ; 0042aa2e
    MOV dword ptr [ESP + 0x210],EAX     ; 0042aa35
    MOV EAX,[0x00622c18]                ; 0042aa3c | DAT_00622c18
        ;   Label: LAB_0042aa3c
    MOV EBX,dword ptr [ESP + 0x218]     ; 0042aa41
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 0042aa48 | DAT_01fcf2cc
    JGE 0x0042b210                      ; 0042aa4e
        ;   XREF to: 0042b210 (CONDITIONAL_JUMP)  ; LAB_0042b210
    ADD EAX,dword ptr [ESP + 0x214]     ; 0042aa54
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 0042aa5b | DAT_01fcf2d0
    PUSH EBX                            ; 0042aa61
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042aa62
    CALL dword ptr [EAX + 0x94]         ; 0042aa68
    ADD ESP,0x4                         ; 0042aa6e
    TEST EAX,EAX                        ; 0042aa71
    JZ 0x0042b039                       ; 0042aa73
        ;   XREF to: 0042b039 (CONDITIONAL_JUMP)  ; LAB_0042b039
    MOV ECX,dword ptr [ESP + 0x218]     ; 0042aa79
        ;   Label: LAB_0042aa79
    MOV EDX,dword ptr [ESP + 0x214]     ; 0042aa80
    INC ECX                             ; 0042aa87
    ADD EDX,0x4                         ; 0042aa88
    MOV dword ptr [ESP + 0x218],ECX     ; 0042aa8b
    MOV dword ptr [ESP + 0x214],EDX     ; 0042aa92
    JMP 0x0042aa3c                      ; 0042aa99
        ;   XREF to: 0042aa3c (UNCONDITIONAL_JUMP)  ; LAB_0042aa3c
    PUSH EDI                            ; 0042aa9b
        ;   Label: LAB_0042aa9b
    MOV ESI,dword ptr [EDI + 0x154]     ; 0042aa9c
    CALL dword ptr [ESI + 0x94]         ; 0042aaa2
    ADD ESP,0x4                         ; 0042aaa8
    TEST EAX,EAX                        ; 0042aaab
    JNZ 0x0042adae                      ; 0042aaad
        ;   XREF to: 0042adae (CONDITIONAL_JUMP)  ; LAB_0042adae
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042aab3
    MOV EAX,dword ptr [EAX + 0xc278]    ; 0042aab6
    FLD float ptr [EBX]                 ; 0042aabc
    FSUB float ptr [EAX + 0x20]         ; 0042aabe
    FMUL ST0                            ; 0042aac1
    FLD float ptr [EBX + 0x8]           ; 0042aac3
    FSUB float ptr [EAX + 0x28]         ; 0042aac6
    FMUL ST0                            ; 0042aac9
    FADDP                               ; 0042aacb
    FSQRT                               ; 0042aacd
    FMUL double ptr [0x005d55c5]        ; 0042aacf | DAT_005d55c5
    FSUBR double ptr [0x005d55cd]       ; 0042aad5 | DAT_005d55cd
    FST float ptr [ESP + 0x4]           ; 0042aadb
    FLD1                                ; 0042aadf
    FCOMPP                              ; 0042aae1
    FNSTSW AX                           ; 0042aae3
    SAHF                                ; 0042aae5
    JBE 0x0042aaf0                      ; 0042aae6
        ;   XREF to: 0042aaf0 (CONDITIONAL_JUMP)  ; LAB_0042aaf0
    MOV dword ptr [ESP + 0x4],0x3f800000 ; 0042aae8
    FLD float ptr [EBP + 0x18]          ; 0042aaf0
        ;   Label: LAB_0042aaf0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042aaf3
    FMUL float ptr [ESP + 0x4]          ; 0042aaf6
    MOV EDI,dword ptr [EAX + 0xc27c]    ; 0042aafa
    PUSH EDI                            ; 0042ab00
    FADD float ptr [EAX + 0xc274]       ; 0042ab01
    PUSH EAX                            ; 0042ab07
    FSTP float ptr [EAX + 0xc274]       ; 0042ab08
    CALL FUN_0042b290                   ; 0042ab0e
        ;   XREF to: 0042b290 (UNCONDITIONAL_CALL)  ; undefined FUN_0042b290()
    ADD ESP,0x8                         ; 0042ab13
    MOV ESI,0xffffffff                  ; 0042ab16
    MOV dword ptr [ESP + 0x200],EAX     ; 0042ab1b
    TEST EAX,EAX                        ; 0042ab22
    JL 0x0042ad94                       ; 0042ab24
        ;   XREF to: 0042ad94 (CONDITIONAL_JUMP)  ; LAB_0042ad94
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042ab2a
    FLD float ptr [EAX + 0xc274]        ; 0042ab2d
    FLDZ                                ; 0042ab33
    FCOMPP                              ; 0042ab35
    FNSTSW AX                           ; 0042ab37
    SAHF                                ; 0042ab39
    JBE 0x0042ad94                      ; 0042ab3a
        ;   XREF to: 0042ad94 (CONDITIONAL_JUMP)  ; LAB_0042ad94
    MOV EDX,dword ptr [EBP + 0x14]      ; 0042ab40
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042ab43
    PUSH EDX                            ; 0042ab46
    MOV EAX,dword ptr [EAX + 0xc278]    ; 0042ab47
    PUSH EAX                            ; 0042ab4d
    MOV EBX,dword ptr [EAX + 0x154]     ; 0042ab4e
    CALL dword ptr [EBX + 0x84]         ; 0042ab54
    ADD ESP,0x8                         ; 0042ab5a
    CMP EAX,0x3                         ; 0042ab5d
    JNZ 0x0042ad94                      ; 0042ab60
        ;   XREF to: 0042ad94 (CONDITIONAL_JUMP)  ; LAB_0042ad94
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042ab66
    MOV ECX,dword ptr [EAX + 0xc27c]    ; 0042ab69
    PUSH ECX                            ; 0042ab6f
    PUSH EAX                            ; 0042ab70
    CALL FUN_0042b330                   ; 0042ab71
        ;   XREF to: 0042b330 (UNCONDITIONAL_CALL)  ; undefined FUN_0042b330()
    ADD ESP,0x8                         ; 0042ab76
    TEST EAX,EAX                        ; 0042ab79
    JZ 0x0042ad94                       ; 0042ab7b
        ;   XREF to: 0042ad94 (CONDITIONAL_JUMP)  ; LAB_0042ad94
    MOV ESI,dword ptr [EBP + 0x14]      ; 0042ab81
    MOV ESI,dword ptr [ESI + 0xc27c]    ; 0042ab84
    CMP ESI,0x2                         ; 0042ab8a
    JNC 0x0042af20                      ; 0042ab8d
        ;   XREF to: 0042af20 (CONDITIONAL_JUMP)  ; LAB_0042af20
    CMP ESI,0x1                         ; 0042ab93
    JNZ 0x0042af2f                      ; 0042ab96
        ;   XREF to: 0042af2f (CONDITIONAL_JUMP)  ; LAB_0042af2f
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042ab9c
        ;   Label: LAB_0042ab9c
    MOV EBX,dword ptr [EBX + 0xc278]    ; 0042ab9f
    PUSH EBX                            ; 0042aba5
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042aba6
    LEA ESI,[ESP + 0xbc]                ; 0042abac
    LEA EDI,[ESP + 0x8c]                ; 0042abb3
    CALL dword ptr [EAX + 0x1c]         ; 0042abba
    MOV ECX,0x6                         ; 0042abbd
    ADD ESP,0x4                         ; 0042abc2
    LEA EAX,[ESP + 0x1f8]               ; 0042abc5
    LEA ESI,[ESP + 0xb8]                ; 0042abcc
    PUSH EAX                            ; 0042abd3
    MOVSD.REP ES:EDI,ESI                ; 0042abd4
    LEA EAX,[ESP + 0x98]                ; 0042abd6
    MOV EDI,0x3f000000                  ; 0042abdd
    PUSH EAX                            ; 0042abe2
    LEA EAX,[ESP + 0x90]                ; 0042abe3
    LEA ESI,[ESP + 0x1bc]               ; 0042abea
    PUSH EAX                            ; 0042abf1
    MOV dword ptr [ESP + 0x204],EDI     ; 0042abf2
    LEA EDI,[ESP + 0x19c]               ; 0042abf9
    CALL FUN_0041b020                   ; 0042ac00
        ;   XREF to: 0041b020 (UNCONDITIONAL_CALL)  ; undefined FUN_0041b020()
    LEA ESI,[ESP + 0x1c0]               ; 0042ac05
    ADD ESP,0x8                         ; 0042ac0c
    LEA EAX,[ESP + 0x194]               ; 0042ac0f
    MOVSD ES:EDI,ESI                    ; 0042ac16
    MOVSD ES:EDI,ESI                    ; 0042ac17
    MOVSD ES:EDI,ESI                    ; 0042ac18
    PUSH EAX                            ; 0042ac19
    LEA ESI,[ESP + 0x1ec]               ; 0042ac1a
    LEA EDI,[ESP + 0x150]               ; 0042ac21
    CALL FUN_0041afa0                   ; 0042ac28
        ;   XREF to: 0041afa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041afa0()
    LEA ESI,[ESP + 0x1ec]               ; 0042ac2d
    ADD ESP,0x8                         ; 0042ac34
    LEA EAX,[ESP + 0x1cc]               ; 0042ac37
    FLD float ptr [ESP + 0x90]          ; 0042ac3e
    MOVSD ES:EDI,ESI                    ; 0042ac45
    MOVSD ES:EDI,ESI                    ; 0042ac46
    MOVSD ES:EDI,ESI                    ; 0042ac47
    PUSH EAX                            ; 0042ac48
    LEA EDI,[ESP + 0x1d0]               ; 0042ac49
    LEA ESI,[ESP + 0x14c]               ; 0042ac50
    FADD double ptr [0x005d55d5]        ; 0042ac57 | DAT_005d55d5
    PUSH EBX                            ; 0042ac5d
    FSTP float ptr [ESP + 0x158]        ; 0042ac5e
    MOVSD ES:EDI,ESI                    ; 0042ac65
    MOVSD ES:EDI,ESI                    ; 0042ac66
    MOVSD ES:EDI,ESI                    ; 0042ac67
    LEA EBX,[ESP + 0x1e0]               ; 0042ac68
    LEA ESI,[ESP + 0xfc]                ; 0042ac6f
    LEA EDI,[ESP + 0x1c8]               ; 0042ac76
    CALL FUN_00408b40                   ; 0042ac7d
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[ESP + 0xfc]                ; 0042ac82
    ADD ESP,0x8                         ; 0042ac89
    LEA EAX,[ESP + 0x1c0]               ; 0042ac8c
    MOVSD ES:EDI,ESI                    ; 0042ac93
    MOVSD ES:EDI,ESI                    ; 0042ac94
    MOVSD ES:EDI,ESI                    ; 0042ac95
    CMP EBX,EAX                         ; 0042ac96
    JZ 0x0042acc4                       ; 0042ac98
        ;   XREF to: 0042acc4 (CONDITIONAL_JUMP)  ; LAB_0042acc4
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 0042ac9a
    MOV dword ptr [ESP + 0x1d8],EAX     ; 0042aca1
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 0042aca8
    MOV dword ptr [ESP + 0x1dc],EAX     ; 0042acaf
    MOV EAX,dword ptr [ESP + 0x1c8]     ; 0042acb6
    MOV dword ptr [ESP + 0x1e0],EAX     ; 0042acbd
        ;   Label: LAB_0042acbd
    LEA EDI,[ESP + 0x118]               ; 0042acc4
        ;   Label: LAB_0042acc4
    MOV ESI,0x2c8af28                   ; 0042accb
    MOV EAX,dword ptr [ESP + 0x200]     ; 0042acd0
    MOVSD ES:EDI,ESI                    ; 0042acd7 | DAT_02c8af28
    MOVSD ES:EDI,ESI                    ; 0042acd8 | DAT_02c8af2c
    MOVSD ES:EDI,ESI                    ; 0042acd9 | DAT_02c8af30
    TEST EAX,EAX                        ; 0042acda
    JNZ 0x0042ad21                      ; 0042acdc
        ;   XREF to: 0042ad21 (CONDITIONAL_JUMP)  ; LAB_0042ad21
    MOV EDX,0xbfc00000                  ; 0042acde
    LEA EBX,[ESP + 0x118]               ; 0042ace3
    MOV dword ptr [ESP + 0x134],EAX     ; 0042acea
    MOV dword ptr [ESP + 0x138],EAX     ; 0042acf1
    LEA EAX,[ESP + 0x130]               ; 0042acf8
    MOV dword ptr [ESP + 0x130],EDX     ; 0042acff
    CMP EBX,EAX                         ; 0042ad06
    JZ 0x0042ad21                       ; 0042ad08
        ;   XREF to: 0042ad21 (CONDITIONAL_JUMP)  ; LAB_0042ad21
    XOR EDI,EDI                         ; 0042ad0a
    MOV dword ptr [ESP + 0x118],EDX     ; 0042ad0c
    MOV dword ptr [ESP + 0x11c],EDI     ; 0042ad13
    MOV dword ptr [ESP + 0x120],EDI     ; 0042ad1a
    CMP dword ptr [ESP + 0x200],0x1     ; 0042ad21
        ;   Label: LAB_0042ad21
    JNZ 0x0042ad70                      ; 0042ad29
        ;   XREF to: 0042ad70 (CONDITIONAL_JUMP)  ; LAB_0042ad70
    MOV ECX,0x3fc00000                  ; 0042ad2b
    XOR EBX,EBX                         ; 0042ad30
    LEA EAX,[ESP + 0x118]               ; 0042ad32
    MOV dword ptr [ESP + 0x158],EBX     ; 0042ad39
    MOV dword ptr [ESP + 0x15c],EBX     ; 0042ad40
    LEA EBX,[ESP + 0x154]               ; 0042ad47
    MOV dword ptr [ESP + 0x154],ECX     ; 0042ad4e
    CMP EAX,EBX                         ; 0042ad55
    JZ 0x0042ad70                       ; 0042ad57
        ;   XREF to: 0042ad70 (CONDITIONAL_JUMP)  ; LAB_0042ad70
    XOR EAX,EAX                         ; 0042ad59
    MOV dword ptr [ESP + 0x118],ECX     ; 0042ad5b
    MOV dword ptr [ESP + 0x11c],EAX     ; 0042ad62
    MOV dword ptr [ESP + 0x120],EAX     ; 0042ad69
    PUSH 0x0                            ; 0042ad70
        ;   Label: LAB_0042ad70
    LEA EAX,[ESP + 0x11c]               ; 0042ad72
    PUSH 0x0                            ; 0042ad79
    PUSH EAX                            ; 0042ad7b
    PUSH 0x0                            ; 0042ad7c
    LEA EAX,[ESP + 0x1e8]               ; 0042ad7e
    PUSH EAX                            ; 0042ad85
    MOV ECX,dword ptr [EBP + 0x14]      ; 0042ad86
    PUSH ECX                            ; 0042ad89
    CALL FUN_0042ccf0                   ; 0042ad8a
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042ccf0()
    ADD ESP,0x18                        ; 0042ad8f
    MOV ESI,EAX                         ; 0042ad92
    TEST ESI,ESI                        ; 0042ad94
        ;   Label: LAB_0042ad94
    JL 0x0042af65                       ; 0042ad96
        ;   XREF to: 0042af65 (CONDITIONAL_JUMP)  ; LAB_0042af65
    JG 0x0042afcf                       ; 0042ad9c
        ;   XREF to: 0042afcf (CONDITIONAL_JUMP)  ; LAB_0042afcf
    MOV EAX,0x1                         ; 0042ada2
    MOV ESP,EBP                         ; 0042ada7
    POP EBP                             ; 0042ada9
    POP EDI                             ; 0042adaa
    POP ESI                             ; 0042adab
    POP EBX                             ; 0042adac
    RET                                 ; 0042adad
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042adae
        ;   Label: LAB_0042adae
    MOV EDX,dword ptr [EAX + 0xc278]    ; 0042adb1
    PUSH EDX                            ; 0042adb7
    PUSH EAX                            ; 0042adb8
    PUSH 0x5d54ed                       ; 0042adb9 | s_s_can_t_pick_up_s_sombod_005d54ec+1
    MOV EBX,dword ptr [0x00611100]      ; 0042adbe | PTR_DAT_00611100
    PUSH EBX                            ; 0042adc4 | DAT_007db5f0
    CALL FUN_00445430                   ; 0042adc5
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    ADD ESP,0x10                        ; 0042adca
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042adcd
    MOV dword ptr [EAX + 0xc278],0x0    ; 0042add0
    PUSH EAX                            ; 0042adda
    MOV dword ptr [EAX + 0xc274],0x0    ; 0042addb
    CALL FUN_0042be20                   ; 0042ade5
        ;   XREF to: 0042be20 (UNCONDITIONAL_CALL)  ; undefined FUN_0042be20()
    ADD ESP,0x4                         ; 0042adea
    XOR EAX,EAX                         ; 0042aded
    MOV ESP,EBP                         ; 0042adef
    POP EBP                             ; 0042adf1
    POP EDI                             ; 0042adf2
    POP ESI                             ; 0042adf3
    POP EBX                             ; 0042adf4
    RET                                 ; 0042adf5
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042adf6
        ;   Label: LAB_0042adf6
    MOV EBX,dword ptr [EBX + 0xc278]    ; 0042adf9
    PUSH EBX                            ; 0042adff
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042ae00
    LEA ESI,[ESP + 0xd4]                ; 0042ae06
    LEA EDI,[ESP + 0xa4]                ; 0042ae0d
    CALL dword ptr [EAX + 0x1c]         ; 0042ae14
    MOV ECX,0x6                         ; 0042ae17
    ADD ESP,0x4                         ; 0042ae1c
    LEA EAX,[ESP + 0x1f4]               ; 0042ae1f
    LEA ESI,[ESP + 0xd0]                ; 0042ae26
    PUSH EAX                            ; 0042ae2d
    MOVSD.REP ES:EDI,ESI                ; 0042ae2e
    LEA EAX,[ESP + 0xb0]                ; 0042ae30
    MOV ESI,0x3f000000                  ; 0042ae37
    PUSH EAX                            ; 0042ae3c
    LEA EAX,[ESP + 0xa8]                ; 0042ae3d
    MOV dword ptr [ESP + 0x1fc],ESI     ; 0042ae44
    PUSH EAX                            ; 0042ae4b
    LEA ESI,[ESP + 0x178]               ; 0042ae4c
    LEA EDI,[ESP + 0x1b4]               ; 0042ae53
    CALL FUN_0041b020                   ; 0042ae5a
        ;   XREF to: 0041b020 (UNCONDITIONAL_CALL)  ; undefined FUN_0041b020()
    LEA ESI,[ESP + 0x178]               ; 0042ae5f
    ADD ESP,0x8                         ; 0042ae66
    LEA EAX,[ESP + 0x1ac]               ; 0042ae69
    MOVSD ES:EDI,ESI                    ; 0042ae70
    MOVSD ES:EDI,ESI                    ; 0042ae71
    MOVSD ES:EDI,ESI                    ; 0042ae72
    PUSH EAX                            ; 0042ae73
    LEA ESI,[ESP + 0x114]               ; 0042ae74
    LEA EDI,[ESP + 0x12c]               ; 0042ae7b
    CALL FUN_0041afa0                   ; 0042ae82
        ;   XREF to: 0041afa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041afa0()
    LEA ESI,[ESP + 0x114]               ; 0042ae87
    ADD ESP,0x8                         ; 0042ae8e
    LEA EAX,[ESP + 0x100]               ; 0042ae91
    FLD float ptr [ESP + 0xa8]          ; 0042ae98
    MOVSD ES:EDI,ESI                    ; 0042ae9f
    MOVSD ES:EDI,ESI                    ; 0042aea0
    MOVSD ES:EDI,ESI                    ; 0042aea1
    PUSH EAX                            ; 0042aea2
    LEA EDI,[ESP + 0x104]               ; 0042aea3
    LEA ESI,[ESP + 0x128]               ; 0042aeaa
    FADD double ptr [0x005d55d5]        ; 0042aeb1 | DAT_005d55d5
    PUSH EBX                            ; 0042aeb7
    FSTP float ptr [ESP + 0x134]        ; 0042aeb8
    MOVSD ES:EDI,ESI                    ; 0042aebf
    MOVSD ES:EDI,ESI                    ; 0042aec0
    MOVSD ES:EDI,ESI                    ; 0042aec1
    LEA EBX,[ESP + 0x168]               ; 0042aec2
    LEA ESI,[ESP + 0x144]               ; 0042aec9
    LEA EDI,[ESP + 0x168]               ; 0042aed0
    CALL FUN_00408b40                   ; 0042aed7
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[ESP + 0x144]               ; 0042aedc
    ADD ESP,0x8                         ; 0042aee3
    LEA EAX,[ESP + 0x1d8]               ; 0042aee6
    MOVSD ES:EDI,ESI                    ; 0042aeed
    MOVSD ES:EDI,ESI                    ; 0042aeee
    MOVSD ES:EDI,ESI                    ; 0042aeef
    CMP EAX,EBX                         ; 0042aef0
    JZ 0x0042acc4                       ; 0042aef2
        ;   XREF to: 0042acc4 (CONDITIONAL_JUMP)  ; LAB_0042acc4
    MOV EAX,dword ptr [ESP + 0x160]     ; 0042aef8
    MOV dword ptr [ESP + 0x1d8],EAX     ; 0042aeff
    MOV EAX,dword ptr [ESP + 0x164]     ; 0042af06
    MOV dword ptr [ESP + 0x1dc],EAX     ; 0042af0d
    MOV EAX,dword ptr [ESP + 0x168]     ; 0042af14
    JMP 0x0042acbd                      ; 0042af1b
        ;   XREF to: 0042acbd (UNCONDITIONAL_JUMP)  ; LAB_0042acbd
    JBE 0x0042adf6                      ; 0042af20
        ;   XREF to: 0042adf6 (CONDITIONAL_JUMP)  ; LAB_0042adf6
        ;   Label: LAB_0042af20
    CMP ESI,0x3                         ; 0042af26
    JZ 0x0042ab9c                       ; 0042af29
        ;   XREF to: 0042ab9c (CONDITIONAL_JUMP)  ; LAB_0042ab9c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042af2f
        ;   Label: LAB_0042af2f
    MOV EBX,dword ptr [EBX + 0xc278]    ; 0042af32
    LEA EAX,[ESP + 0x1d8]               ; 0042af38
    ADD EBX,0x20                        ; 0042af3f
    CMP EAX,EBX                         ; 0042af42
    JZ 0x0042acc4                       ; 0042af44
        ;   XREF to: 0042acc4 (CONDITIONAL_JUMP)  ; LAB_0042acc4
    MOV EAX,dword ptr [EBX]             ; 0042af4a
    MOV dword ptr [ESP + 0x1d8],EAX     ; 0042af4c
    MOV EAX,dword ptr [EBX + 0x4]       ; 0042af53
    MOV dword ptr [ESP + 0x1dc],EAX     ; 0042af56
    MOV EAX,dword ptr [EBX + 0x8]       ; 0042af5d
    JMP 0x0042acbd                      ; 0042af60
        ;   XREF to: 0042acbd (UNCONDITIONAL_JUMP)  ; LAB_0042acbd
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042af65
        ;   Label: LAB_0042af65
    MOV ECX,dword ptr [EAX + 0xc278]    ; 0042af68
    PUSH ECX                            ; 0042af6e
    PUSH EAX                            ; 0042af6f
    PUSH 0x5d551f                       ; 0042af70 | = "%s can't pick up %s, giving up\n"
    MOV ESI,dword ptr [0x00611100]      ; 0042af75 | PTR_DAT_00611100
    PUSH ESI                            ; 0042af7b | DAT_007db5f0
    MOV EBX,EAX                         ; 0042af7c
    CALL FUN_00445430                   ; 0042af7e
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    MOV EAX,EBX                         ; 0042af83
    ADD ESP,0x10                        ; 0042af85
    MOV dword ptr [EAX + 0xc278],0x0    ; 0042af88
    PUSH EAX                            ; 0042af92
    MOV dword ptr [EAX + 0xc274],0x41a00000 ; 0042af93
    CALL FUN_0042be20                   ; 0042af9d
        ;   XREF to: 0042be20 (UNCONDITIONAL_CALL)  ; undefined FUN_0042be20()
    ADD ESP,0x4                         ; 0042afa2
    XOR EAX,EAX                         ; 0042afa5
    MOV ESP,EBP                         ; 0042afa7
    POP EBP                             ; 0042afa9
    POP EDI                             ; 0042afaa
    POP ESI                             ; 0042afab
    POP EBX                             ; 0042afac
    RET                                 ; 0042afad
    PUSH 0x1                            ; 0042afae
        ;   Label: LAB_0042afae
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042afb0
    PUSH 0x19                           ; 0042afb3
    ADD EAX,0x158                       ; 0042afb5
    PUSH EAX                            ; 0042afba
    CALL FUN_005247c0                   ; 0042afbb
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0042afc0
    MOV EAX,0x1                         ; 0042afc3
        ;   Label: LAB_0042afc3
    MOV ESP,EBP                         ; 0042afc8
    POP EBP                             ; 0042afca
    POP EDI                             ; 0042afcb
    POP ESI                             ; 0042afcc
    POP EBX                             ; 0042afcd
    RET                                 ; 0042afce
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042afcf
        ;   Label: LAB_0042afcf
    MOV EBX,dword ptr [EAX + 0xc278]    ; 0042afd2
    PUSH EBX                            ; 0042afd8
    PUSH EAX                            ; 0042afd9
    PUSH 0x5d553f                       ; 0042afda | = "%s beginning to pickup %s\n"
    MOV EDI,dword ptr [0x00611100]      ; 0042afdf | PTR_DAT_00611100
    PUSH EDI                            ; 0042afe5 | DAT_007db5f0
    MOV ESI,EAX                         ; 0042afe6
    CALL FUN_00445430                   ; 0042afe8
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    MOV EAX,ESI                         ; 0042afed
    MOV EAX,dword ptr [EAX + 0xc27c]    ; 0042afef
    ADD ESP,0x10                        ; 0042aff5
    CMP EAX,0x2                         ; 0042aff8
    JNC 0x0042b004                      ; 0042affb
        ;   XREF to: 0042b004 (CONDITIONAL_JUMP)  ; LAB_0042b004
    CMP EAX,0x1                         ; 0042affd
    JZ 0x0042afae                       ; 0042b000
        ;   XREF to: 0042afae (CONDITIONAL_JUMP)  ; LAB_0042afae
    JMP 0x0042b00b                      ; 0042b002
        ;   XREF to: 0042b00b (UNCONDITIONAL_JUMP)  ; LAB_0042b00b
    JBE 0x0042afc3                      ; 0042b004
        ;   XREF to: 0042afc3 (CONDITIONAL_JUMP)  ; LAB_0042afc3
        ;   Label: LAB_0042b004
    CMP EAX,0x3                         ; 0042b006
    JZ 0x0042afae                       ; 0042b009
        ;   XREF to: 0042afae (CONDITIONAL_JUMP)  ; LAB_0042afae
    MOV EAX,0x5d555a                    ; 0042b00b | = "..\\core\\carved.cpp"
        ;   Label: LAB_0042b00b
    MOV EDX,0x4d7                       ; 0042b010
    PUSH 0x5d556d                       ; 0042b015 | = "Invalid demon townsfolk object shape!"
    MOV [0x01d1d400],EAX                ; 0042b01a | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0042b01f | DAT_01d1d404
    CALL FUN_005030e0                   ; 0042b025
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0042b02a
    MOV EAX,0x1                         ; 0042b02d
    MOV ESP,EBP                         ; 0042b032
    POP EBP                             ; 0042b034
    POP EDI                             ; 0042b035
    POP ESI                             ; 0042b036
    POP EBX                             ; 0042b037
    RET                                 ; 0042b038
    MOV ECX,dword ptr [EBP + 0x14]      ; 0042b039
        ;   Label: LAB_0042b039
    PUSH ECX                            ; 0042b03c
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042b03d
    PUSH EBX                            ; 0042b043
    CALL dword ptr [EAX + 0x84]         ; 0042b044
    ADD ESP,0x8                         ; 0042b04a
    CMP EAX,0x3                         ; 0042b04d
    JNZ 0x0042aa79                      ; 0042b050
        ;   XREF to: 0042aa79 (CONDITIONAL_JUMP)  ; LAB_0042aa79
    PUSH EBX                            ; 0042b056
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042b057
    LEA ESI,[ESP + 0x5c]                ; 0042b05d
    LEA EDI,[ESP + 0x74]                ; 0042b061
    CALL dword ptr [EAX + 0x1c]         ; 0042b065
    MOV ECX,0x6                         ; 0042b068
    ADD ESP,0x4                         ; 0042b06d
    LEA ESI,[ESP + 0x58]                ; 0042b070
    MOV EAX,dword ptr [ESP + 0x210]     ; 0042b074
    MOVSD.REP ES:EDI,ESI                ; 0042b07b
    FLD float ptr [EAX + 0x4]           ; 0042b07d
    FLD float ptr [EAX + 0x8]           ; 0042b080
    FLD float ptr [EAX]                 ; 0042b083
    LEA EDI,[ESP + 0x184]               ; 0042b085
    LEA ESI,[ESP + 0x178]               ; 0042b08c
    LEA EAX,[ESP + 0x184]               ; 0042b093
    FSUB float ptr [ESP + 0x70]         ; 0042b09a
    FXCH ST2                            ; 0042b09e
    FSUB float ptr [ESP + 0x74]         ; 0042b0a0
    FXCH                                ; 0042b0a4
    FSUB float ptr [ESP + 0x78]         ; 0042b0a6
    FXCH ST2                            ; 0042b0aa
    FSTP float ptr [ESP + 0x178]        ; 0042b0ac
    FSTP float ptr [ESP + 0x17c]        ; 0042b0b3
    FSTP float ptr [ESP + 0x180]        ; 0042b0ba
    PUSH EAX                            ; 0042b0c1
    MOVSD ES:EDI,ESI                    ; 0042b0c2
    MOVSD ES:EDI,ESI                    ; 0042b0c3
    MOVSD ES:EDI,ESI                    ; 0042b0c4
    CALL FUN_00428550                   ; 0042b0c5
        ;   XREF to: 00428550 (UNCONDITIONAL_CALL)  ; undefined FUN_00428550()
    ADD ESP,0x4                         ; 0042b0ca
    MOV dword ptr [ESP + 0x204],EAX     ; 0042b0cd
    TEST EAX,EAX                        ; 0042b0d4
    JZ 0x0042aa79                       ; 0042b0d6
        ;   XREF to: 0042aa79 (CONDITIONAL_JUMP)  ; LAB_0042aa79
    PUSH EAX                            ; 0042b0dc
    MOV ESI,dword ptr [EBP + 0x14]      ; 0042b0dd
    PUSH ESI                            ; 0042b0e0
    CALL FUN_0042b330                   ; 0042b0e1
        ;   XREF to: 0042b330 (UNCONDITIONAL_CALL)  ; undefined FUN_0042b330()
    ADD ESP,0x8                         ; 0042b0e6
    TEST EAX,EAX                        ; 0042b0e9
    JZ 0x0042aa79                       ; 0042b0eb
        ;   XREF to: 0042aa79 (CONDITIONAL_JUMP)  ; LAB_0042aa79
    PUSH 0x5d5593                       ; 0042b0f1 | = "CBodyPart"
    PUSH EBX                            ; 0042b0f6
    CALL FUN_0040c550                   ; 0042b0f7
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 0042b0fc
    TEST EAX,EAX                        ; 0042b0ff
    JZ 0x0042b11d                       ; 0042b101
        ;   XREF to: 0042b11d (CONDITIONAL_JUMP)  ; LAB_0042b11d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042b103
    MOV ESI,dword ptr [EBX + 0x6c]      ; 0042b106
    MOV EAX,dword ptr [EAX + 0xc26c]    ; 0042b109
    AND ESI,0x3                         ; 0042b10f
    AND EAX,0x3                         ; 0042b112
    CMP ESI,EAX                         ; 0042b115
    JNZ 0x0042aa79                      ; 0042b117
        ;   XREF to: 0042aa79 (CONDITIONAL_JUMP)  ; LAB_0042aa79
    LEA EAX,[EBX + 0x20]                ; 0042b11d
        ;   Label: LAB_0042b11d
    MOV ESI,dword ptr [ESP + 0x20c]     ; 0042b120
    LEA EDI,[ESP + 0xe8]                ; 0042b127
    FLD float ptr [EAX]                 ; 0042b12e
    FLD float ptr [EAX + 0x4]           ; 0042b130
    FLD float ptr [EAX + 0x8]           ; 0042b133
    FXCH ST2                            ; 0042b136
    FSUB float ptr [ESI]                ; 0042b138
    FXCH                                ; 0042b13a
    FSUB float ptr [ESI + 0x4]          ; 0042b13c
    FXCH ST2                            ; 0042b13f
    FSUB float ptr [ESI + 0x8]          ; 0042b141
    FXCH                                ; 0042b144
    FSTP float ptr [ESP + 0x19c]        ; 0042b146
    FXCH                                ; 0042b14d
    FSTP float ptr [ESP + 0x1a0]        ; 0042b14f
    LEA ESI,[ESP + 0x19c]               ; 0042b156
    FSTP float ptr [ESP + 0x1a4]        ; 0042b15d
    MOVSD ES:EDI,ESI                    ; 0042b164
    MOVSD ES:EDI,ESI                    ; 0042b165
    MOVSD ES:EDI,ESI                    ; 0042b166
    FLD float ptr [ESP + 0xec]          ; 0042b167
    FMUL ST0                            ; 0042b16e
    FST float ptr [ESP + 0xec]          ; 0042b170
    FMUL float ptr [ESP + 0xec]         ; 0042b177
    FST float ptr [ESP + 0xec]          ; 0042b17e
    FMUL float ptr [ESP + 0xec]         ; 0042b185
    FLD float ptr [ESP + 0xe8]          ; 0042b18c
    FMUL ST0                            ; 0042b193
    FADDP                               ; 0042b195
    FLD float ptr [ESP + 0xf0]          ; 0042b197
    FMUL ST0                            ; 0042b19e
    FADDP                               ; 0042b1a0
    FSQRT                               ; 0042b1a2
    FST float ptr [ESP]                 ; 0042b1a4
    FCOMP double ptr [0x005d55cd]       ; 0042b1a7 | DAT_005d55cd
    FNSTSW AX                           ; 0042b1ad
    SAHF                                ; 0042b1af
    JC 0x0042aa79                       ; 0042b1b0
        ;   XREF to: 0042aa79 (CONDITIONAL_JUMP)  ; LAB_0042aa79
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042b1b6
    FLD float ptr [EAX + 0xc268]        ; 0042b1b9
    FMUL float ptr [0x005d55dd]         ; 0042b1bf | DAT_005d55dd
    FCOMP float ptr [ESP]               ; 0042b1c5
    FNSTSW AX                           ; 0042b1c8
    SAHF                                ; 0042b1ca
    JC 0x0042aa79                       ; 0042b1cb
        ;   XREF to: 0042aa79 (CONDITIONAL_JUMP)  ; LAB_0042aa79
    MOV EAX,dword ptr [ESP + 0x21c]     ; 0042b1d1
    MOV dword ptr [ESP + EAX*0x1 + 0x30],EBX ; 0042b1d8
    MOV EBX,dword ptr [ESP + 0x21c]     ; 0042b1dc
    MOV EAX,dword ptr [ESP + 0x204]     ; 0042b1e3
    MOV dword ptr [ESP + EBX*0x1 + 0x8],EAX ; 0042b1ea
    MOV EAX,dword ptr [ESP + 0x208]     ; 0042b1ee
    LEA EDI,[EBX + 0x4]                 ; 0042b1f5
    INC EAX                             ; 0042b1f8
    MOV dword ptr [ESP + 0x21c],EDI     ; 0042b1f9
    MOV dword ptr [ESP + 0x208],EAX     ; 0042b200
    CMP EDI,0x28                        ; 0042b207
    JL 0x0042aa79                       ; 0042b20a
        ;   XREF to: 0042aa79 (CONDITIONAL_JUMP)  ; LAB_0042aa79
    MOV ECX,dword ptr [ESP + 0x208]     ; 0042b210
        ;   Label: LAB_0042b210
    CMP ECX,0x1                         ; 0042b217
    JL 0x0042a9ad                       ; 0042b21a
        ;   XREF to: 0042a9ad (CONDITIONAL_JUMP)  ; LAB_0042a9ad
    LEA EAX,[ECX + -0x1]                ; 0042b220
    PUSH EAX                            ; 0042b223
    PUSH 0x0                            ; 0042b224
    CALL FUN_0040cc60                   ; 0042b226
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc60()
    ADD ESP,0x8                         ; 0042b22b
    MOV ESI,dword ptr [EBP + 0x14]      ; 0042b22e
    MOV EBX,dword ptr [ESP + EAX*0x4 + 0x30] ; 0042b231
    MOV dword ptr [ESI + 0xc278],EBX    ; 0042b235
    MOV EAX,dword ptr [ESP + EAX*0x4 + 0x8] ; 0042b23b
    MOV EBX,dword ptr [ESI + 0xc26c]    ; 0042b23f
    MOV dword ptr [ESI + 0xc274],0xc2200000 ; 0042b245
    INC EBX                             ; 0042b24f
    MOV dword ptr [ESI + 0xc27c],EAX    ; 0042b250
    MOV dword ptr [ESI + 0xc26c],EBX    ; 0042b256
    MOV EDI,ESI                         ; 0042b25c
    MOV ESI,dword ptr [ESI + 0xc278]    ; 0042b25e
    PUSH ESI                            ; 0042b264
    PUSH EDI                            ; 0042b265
    PUSH 0x5d559d                       ; 0042b266 | = "%s is going to try to pick up %s\n"
    MOV EAX,[0x00611100]                ; 0042b26b | PTR_DAT_00611100
    PUSH EAX                            ; 0042b270 | DAT_007db5f0
    CALL FUN_00445430                   ; 0042b271
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    MOV EAX,0x1                         ; 0042b276
    ADD ESP,0x10                        ; 0042b27b
    MOV ESP,EBP                         ; 0042b27e
    POP EBP                             ; 0042b280
    POP EDI                             ; 0042b281
    POP ESI                             ; 0042b282
    POP EBX                             ; 0042b283
    RET                                 ; 0042b284

