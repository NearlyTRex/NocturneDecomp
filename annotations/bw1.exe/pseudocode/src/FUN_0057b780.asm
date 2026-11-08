; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057b780(void)
;
; Local Variables:
; undefined8       Stack[-0x1e0]:8  local_1e0
; undefined8       Stack[-0x1d8]:8  local_1d8
; undefined8       Stack[-0x1d0]:8  local_1d0
; undefined8       Stack[-0x1c8]:8  local_1c8
; undefined8       Stack[-0x1c0]:8  local_1c0
; undefined4       Stack[-0x1b8]:4  local_1b8
; undefined        Stack[-0x1b4]:1  local_1b4
; undefined        Stack[-0x18c]:1  local_18c
; undefined        Stack[-0x164]:1  local_164
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined        Stack[-0x100]:1  local_100
; undefined        Stack[-0xf4]:1  local_f4
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined        Stack[-0xd0]:1  local_d0
; undefined        Stack[-0xc4]:1  local_c4
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x94]:1  local_94
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined        Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   FUN_0057cc00 at 0057cc3d
;   FUN_0057ce10 at 0057ce4f
;
; Referenced Globals:
;   TerminatedCString s_castle_005f58ee
;   undefined4 DAT_005f58f6
;   undefined4 DAT_005f58fe
;   undefined4 DAT_005f5906
;   undefined4 DAT_005f590e
;   undefined4 DAT_005f5916
;   undefined4 DAT_005f591a
;   undefined4 DAT_005f591e
;   undefined4 DAT_005f5926
;   undefined4 DAT_005f592e
;   undefined4 DAT_005f5936
;   undefined4 DAT_005f593e
;   undefined4 DAT_0061d95c
;   undefined4 DAT_00622c18
;   undefined4 DAT_01ccc3e8
;   ... and 17 more
;
; Called Functions:
;   FUN_0044dd70
;   FUN_0044de40
;   FUN_0045f690
;   FUN_00557110
;   FUN_00573ec0
;   FUN_00573f20
;   FUN_005c1210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057b780
        ;   Label: FUN_0057b780
    PUSH ESI                            ; 0057b781
    PUSH EDI                            ; 0057b782
    PUSH EBP                            ; 0057b783
    MOV EBP,ESP                         ; 0057b784
    SUB ESP,0x1b4                       ; 0057b786
    AND ESP,0xfffffff8                  ; 0057b78c
    MOV EAX,[0x0061d95c]                ; 0057b78f | DAT_0061d95c
    CMP dword ptr [EAX + 0x25c],0x0     ; 0057b794 | DAT_01ccf5ec
    JNZ 0x0057ba22                      ; 0057b79b
        ;   XREF to: 0057ba22 (CONDITIONAL_JUMP)  ; LAB_0057ba22
    LEA EDI,[ESP + 0xd4]                ; 0057b7a1
    MOV ESI,0x1fe37f0                   ; 0057b7a8
    MOVSD ES:EDI,ESI                    ; 0057b7ad | DAT_01fe37f0
    MOVSD ES:EDI,ESI                    ; 0057b7ae | DAT_01fe37f4
    MOVSD ES:EDI,ESI                    ; 0057b7af | DAT_01fe37f8
    LEA EDI,[ESP + 0x17c]               ; 0057b7b0
    LEA ESI,[ESP + 0xd4]                ; 0057b7b7
    LEA EAX,[ESP + 0x17c]               ; 0057b7be
    LEA EDX,[ESP + 0x170]               ; 0057b7c5
    MOVSD ES:EDI,ESI                    ; 0057b7cc
    MOVSD ES:EDI,ESI                    ; 0057b7cd
    MOVSD ES:EDI,ESI                    ; 0057b7ce
    CMP EDX,EAX                         ; 0057b7cf
    JZ 0x0057b7fd                       ; 0057b7d1
        ;   XREF to: 0057b7fd (CONDITIONAL_JUMP)  ; LAB_0057b7fd
    MOV EAX,dword ptr [ESP + 0x17c]     ; 0057b7d3
    MOV dword ptr [ESP + 0x170],EAX     ; 0057b7da
    MOV EAX,dword ptr [ESP + 0x180]     ; 0057b7e1
    MOV dword ptr [ESP + 0x174],EAX     ; 0057b7e8
    MOV EAX,dword ptr [ESP + 0x184]     ; 0057b7ef
    MOV dword ptr [ESP + 0x178],EAX     ; 0057b7f6
    FLD float ptr [ESP + 0x170]         ; 0057b7fd
        ;   Label: LAB_0057b7fd
    FLD float ptr [ESP + 0x174]         ; 0057b804
    FLD float ptr [ESP + 0x178]         ; 0057b80b
    LEA EDI,[ESP + 0x158]               ; 0057b812
    LEA ESI,[ESP + 0xec]                ; 0057b819
    FXCH ST2                            ; 0057b820
    FSUB float ptr [0x02c82a6c]         ; 0057b822 | DAT_02c82a6c
    FXCH                                ; 0057b828
    FSUB float ptr [0x02c82a70]         ; 0057b82a | DAT_02c82a70
    FXCH ST2                            ; 0057b830
    FSUB float ptr [0x02c82a74]         ; 0057b832 | DAT_02c82a74
    FXCH                                ; 0057b838
    FSTP float ptr [ESP + 0xec]         ; 0057b83a
    FXCH                                ; 0057b841
    FSTP float ptr [ESP + 0xf0]         ; 0057b843
    FSTP float ptr [ESP + 0xf4]         ; 0057b84a
    MOVSD ES:EDI,ESI                    ; 0057b851
    MOVSD ES:EDI,ESI                    ; 0057b852
    MOVSD ES:EDI,ESI                    ; 0057b853
    FLD float ptr [ESP + 0x15c]         ; 0057b854
    FMUL ST0                            ; 0057b85b
    FLD float ptr [ESP + 0x158]         ; 0057b85d
    FMUL ST0                            ; 0057b864
    FADDP                               ; 0057b866
    FLD float ptr [ESP + 0x160]         ; 0057b868
    FMUL ST0                            ; 0057b86f
    FADDP                               ; 0057b871
    FSQRT                               ; 0057b873
    FCOMP double ptr [0x005f58f6]       ; 0057b875 | DAT_005f58f6
    FNSTSW AX                           ; 0057b87b
    SAHF                                ; 0057b87d
    JC 0x0057ba1b                       ; 0057b87e
        ;   XREF to: 0057ba1b (CONDITIONAL_JUMP)  ; LAB_0057ba1b
    MOV ECX,0xa                         ; 0057b884
    LEA EDI,[ESP + 0x14]                ; 0057b889
    MOV ESI,0x1fe37fc                   ; 0057b88d
    MOVSD.REP ES:EDI,ESI                ; 0057b892 | DAT_01fe37fc | DAT_01fe3800
    MOV ECX,0xa                         ; 0057b894
    LEA EDI,[ESP + 0x64]                ; 0057b899
    LEA ESI,[ESP + 0x14]                ; 0057b89d
    MOVSD.REP ES:EDI,ESI                ; 0057b8a1
        ;   Label: LAB_0057b8a1
    FLD float ptr [ESP + 0x178]         ; 0057b8a3
    SUB ESP,0x8                         ; 0057b8aa
    FSTP double ptr [ESP]               ; 0057b8ad
    FLD float ptr [ESP + 0x17c]         ; 0057b8b0
    SUB ESP,0x8                         ; 0057b8b7
    LEA ESI,[ESP + 0xd8]                ; 0057b8ba
    FSTP double ptr [ESP]               ; 0057b8c1
    FLD float ptr [ESP + 0x180]         ; 0057b8c4
    SUB ESP,0x8                         ; 0057b8cb
    LEA EDI,[ESP + 0x128]               ; 0057b8ce
    FSTP double ptr [ESP]               ; 0057b8d5
    XOR EBX,EBX                         ; 0057b8d8
    CALL FUN_00573ec0                   ; 0057b8da
        ;   XREF to: 00573ec0 (UNCONDITIONAL_CALL)  ; undefined FUN_00573ec0()
    ADD ESP,0x18                        ; 0057b8df
    LEA EAX,[ESP + 0xe0]                ; 0057b8e2
    MOV ECX,0x3f800000                  ; 0057b8e9
    PUSH EAX                            ; 0057b8ee
    LEA EAX,[ESP + 0x68]                ; 0057b8ef
    MOV dword ptr [ESP + 0xe4],ECX      ; 0057b8f3
    PUSH EAX                            ; 0057b8fa
    MOV dword ptr [ESP + 0xec],EBX      ; 0057b8fb
    MOV dword ptr [ESP + 0xf0],EBX      ; 0057b902
    CALL FUN_0045f690                   ; 0057b909
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f690()
    LEA ESI,[ESP + 0xd0]                ; 0057b90e
    ADD ESP,0x8                         ; 0057b915
    MOV EAX,0x3f800000                  ; 0057b918
    MOV dword ptr [ESP + 0x140],EBX     ; 0057b91d
    MOV dword ptr [ESP + 0x144],EAX     ; 0057b924
    LEA EAX,[ESP + 0x140]               ; 0057b92b
    MOV dword ptr [ESP + 0x148],EBX     ; 0057b932
    PUSH EAX                            ; 0057b939
    LEA EAX,[ESP + 0x68]                ; 0057b93a
    MOVSD ES:EDI,ESI                    ; 0057b93e
    MOVSD ES:EDI,ESI                    ; 0057b93f
    MOVSD ES:EDI,ESI                    ; 0057b940
    PUSH EAX                            ; 0057b941
    LEA ESI,[ESP + 0x13c]               ; 0057b942
    LEA EDI,[ESP + 0xc4]                ; 0057b949
    CALL FUN_0045f690                   ; 0057b950
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f690()
    LEA ESI,[ESP + 0x13c]               ; 0057b955
    ADD ESP,0x8                         ; 0057b95c
    LEA EAX,[ESP + 0x98]                ; 0057b95f
    MOV dword ptr [ESP + 0x98],EBX      ; 0057b966
    MOV dword ptr [ESP + 0x9c],EBX      ; 0057b96d
    MOVSD ES:EDI,ESI                    ; 0057b974
    MOVSD ES:EDI,ESI                    ; 0057b975
    MOVSD ES:EDI,ESI                    ; 0057b976
    PUSH EAX                            ; 0057b977
    MOV ESI,0x3f800000                  ; 0057b978
    LEA EAX,[ESP + 0x68]                ; 0057b97d
    MOV dword ptr [ESP + 0xa4],ESI      ; 0057b981
    PUSH EAX                            ; 0057b988
    LEA ESI,[ESP + 0x10c]               ; 0057b989
    LEA EDI,[ESP + 0xac]                ; 0057b990
    CALL FUN_0045f690                   ; 0057b997
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f690()
    LEA ESI,[ESP + 0x10c]               ; 0057b99c
    ADD ESP,0x8                         ; 0057b9a3
    MOVSD ES:EDI,ESI                    ; 0057b9a6
    MOVSD ES:EDI,ESI                    ; 0057b9a7
    MOVSD ES:EDI,ESI                    ; 0057b9a8
    PUSH dword ptr [ESP + 0xac]         ; 0057b9a9
    PUSH dword ptr [ESP + 0xac]         ; 0057b9b0
    PUSH dword ptr [ESP + 0xac]         ; 0057b9b7
    PUSH dword ptr [ESP + 0xd0]         ; 0057b9be
    PUSH dword ptr [ESP + 0xd0]         ; 0057b9c5
    PUSH dword ptr [ESP + 0xd0]         ; 0057b9cc
    PUSH dword ptr [ESP + 0x130]        ; 0057b9d3
    PUSH dword ptr [ESP + 0x130]        ; 0057b9da
    PUSH dword ptr [ESP + 0x130]        ; 0057b9e1
    CALL FUN_00573f20                   ; 0057b9e8
        ;   XREF to: 00573f20 (UNCONDITIONAL_CALL)  ; undefined FUN_00573f20()
    MOV EAX,[0x0061d95c]                ; 0057b9ed | DAT_0061d95c
    ADD ESP,0x24                        ; 0057b9f2
    MOV EDX,dword ptr [EAX + 0x25c]     ; 0057b9f5 | DAT_01ccf5ec
    MOV dword ptr [0x02c82a78],EBX      ; 0057b9fb | DAT_02c82a78
    TEST EDX,EDX                        ; 0057ba01
    JZ 0x0057baa0                       ; 0057ba03
        ;   XREF to: 0057baa0 (CONDITIONAL_JUMP)  ; LAB_0057baa0
    LEA EAX,[ESP + 0x170]               ; 0057ba09
        ;   Label: LAB_0057ba09
    CMP EAX,0x2c82a6c                   ; 0057ba10
    JNZ 0x0057bdca                      ; 0057ba15
        ;   XREF to: 0057bdca (CONDITIONAL_JUMP)  ; LAB_0057bdca
    MOV ESP,EBP                         ; 0057ba1b
        ;   Label: LAB_0057ba1b
    POP EBP                             ; 0057ba1d
    POP EDI                             ; 0057ba1e
    POP ESI                             ; 0057ba1f
    POP EBX                             ; 0057ba20
    RET                                 ; 0057ba21
    LEA EDI,[ESP + 0x128]               ; 0057ba22
        ;   Label: LAB_0057ba22
    MOV ESI,0x1ccc3e8                   ; 0057ba29
    MOVSD ES:EDI,ESI                    ; 0057ba2e | DAT_01ccc3e8
    MOVSD ES:EDI,ESI                    ; 0057ba2f | DAT_01ccc3ec
    MOVSD ES:EDI,ESI                    ; 0057ba30 | DAT_01ccc3f0
    LEA EDI,[ESP + 0x8c]                ; 0057ba31
    LEA ESI,[ESP + 0x128]               ; 0057ba38
    LEA EDX,[ESP + 0x8c]                ; 0057ba3f
    LEA EAX,[ESP + 0x170]               ; 0057ba46
    MOVSD ES:EDI,ESI                    ; 0057ba4d
    MOVSD ES:EDI,ESI                    ; 0057ba4e
    MOVSD ES:EDI,ESI                    ; 0057ba4f
    CMP EAX,EDX                         ; 0057ba50
    JZ 0x0057ba7e                       ; 0057ba52
        ;   XREF to: 0057ba7e (CONDITIONAL_JUMP)  ; LAB_0057ba7e
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0057ba54
    MOV dword ptr [ESP + 0x170],EAX     ; 0057ba5b
    MOV EAX,dword ptr [ESP + 0x90]      ; 0057ba62
    MOV dword ptr [ESP + 0x174],EAX     ; 0057ba69
    MOV EAX,dword ptr [ESP + 0x94]      ; 0057ba70
    MOV dword ptr [ESP + 0x178],EAX     ; 0057ba77
    MOV ECX,0xa                         ; 0057ba7e
        ;   Label: LAB_0057ba7e
    LEA EDI,[ESP + 0x3c]                ; 0057ba83
    MOV ESI,0x1ccc3f4                   ; 0057ba87
    MOVSD.REP ES:EDI,ESI                ; 0057ba8c | DAT_01ccc3f4 | DAT_01ccc3f8
    MOV ECX,0xa                         ; 0057ba8e
    LEA EDI,[ESP + 0x64]                ; 0057ba93
    LEA ESI,[ESP + 0x3c]                ; 0057ba97
    JMP 0x0057b8a1                      ; 0057ba9b
        ;   XREF to: 0057b8a1 (UNCONDITIONAL_JUMP)  ; LAB_0057b8a1
    PUSH 0x6                            ; 0057baa0
        ;   Label: LAB_0057baa0
    MOV EAX,[0x00622c18]                ; 0057baa2 | DAT_00622c18
    PUSH 0x5f58ee                       ; 0057baa7 | = "castle"
    ADD EAX,0x14d0f0                    ; 0057baac
    PUSH EAX                            ; 0057bab1
    CALL FUN_005c1210                   ; 0057bab2
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1210()
    ADD ESP,0xc                         ; 0057bab7
    TEST EAX,EAX                        ; 0057baba
    JNZ 0x0057bbcf                      ; 0057babc
        ;   XREF to: 0057bbcf (CONDITIONAL_JUMP)  ; LAB_0057bbcf
    MOV dword ptr [ESP + 0x1a8],0x1     ; 0057bac2
    MOV EAX,dword ptr [ESP + 0x1a8]     ; 0057bacd
        ;   Label: LAB_0057bacd
    MOV EBX,0x1                         ; 0057bad4
    MOV dword ptr [ESP + 0x1ac],EAX     ; 0057bad9
    MOV EDX,dword ptr [0x01fe3930]      ; 0057bae0 | DAT_01fe3930
        ;   Label: LAB_0057bae0
    IMUL EDX,EBX                        ; 0057bae6
    MOV EAX,EDX                         ; 0057bae9
    SAR EDX,0x1f                        ; 0057baeb
    SHL EDX,0x5                         ; 0057baee
    SBB EAX,EDX                         ; 0057baf1
    SAR EAX,0x5                         ; 0057baf3
    MOV EDI,dword ptr [ESP + 0x1ac]     ; 0057baf6
    MOV EDX,dword ptr [0x01fe3934]      ; 0057bafd | DAT_01fe3934
    IMUL EDX,EDI                        ; 0057bb03
    MOV ESI,EAX                         ; 0057bb06
    MOV EAX,EDX                         ; 0057bb08
    SAR EDX,0x1f                        ; 0057bb0a
    SHL EDX,0x5                         ; 0057bb0d
    SBB EAX,EDX                         ; 0057bb10
    SAR EAX,0x5                         ; 0057bb12
    PUSH EAX                            ; 0057bb15
    PUSH ESI                            ; 0057bb16
    PUSH 0x1fe37ec                      ; 0057bb17
    LEA ESI,[ESP + 0x104]               ; 0057bb1c
    LEA EDI,[ESP + 0x158]               ; 0057bb23
    CALL FUN_0044dd70                   ; 0057bb2a
        ;   XREF to: 0044dd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044dd70()
    LEA ESI,[ESP + 0x104]               ; 0057bb2f
    ADD ESP,0xc                         ; 0057bb36
    MOVSD ES:EDI,ESI                    ; 0057bb39
    MOVSD ES:EDI,ESI                    ; 0057bb3a
    MOVSD ES:EDI,ESI                    ; 0057bb3b
    XOR EAX,EAX                         ; 0057bb3c
    MOV EDX,dword ptr [ESP + 0x154]     ; 0057bb3e
    MOV dword ptr [ESP + 0x10],EAX      ; 0057bb45
    CMP EDX,0x7fffffff                  ; 0057bb49
    JL 0x0057bc1a                       ; 0057bb4f
        ;   XREF to: 0057bc1a (CONDITIONAL_JUMP)  ; LAB_0057bc1a
    MOV dword ptr [ESP + 0x10],0x3f800000 ; 0057bb55
    FLD float ptr [ESP + 0x10]          ; 0057bb5d
        ;   Label: LAB_0057bb5d
    FLDZ                                ; 0057bb61
    FCOMPP                              ; 0057bb63
    FNSTSW AX                           ; 0057bb65
    SAHF                                ; 0057bb67
    JNC 0x0057bb78                      ; 0057bb68
        ;   XREF to: 0057bb78 (CONDITIONAL_JUMP)  ; LAB_0057bb78
    FLD float ptr [ESP + 0x10]          ; 0057bb6a
    FADD float ptr [0x005f593e]         ; 0057bb6e | DAT_005f593e
    FSTP float ptr [ESP + 0x10]         ; 0057bb74
    FLD float ptr [ESP + 0x10]          ; 0057bb78
        ;   Label: LAB_0057bb78
    FMUL ST0                            ; 0057bb7c
    FST float ptr [ESP + 0x10]          ; 0057bb7e
    FLD1                                ; 0057bb82
    FCOMPP                              ; 0057bb84
    FNSTSW AX                           ; 0057bb86
    SAHF                                ; 0057bb88
    JNC 0x0057bb93                      ; 0057bb89
        ;   XREF to: 0057bb93 (CONDITIONAL_JUMP)  ; LAB_0057bb93
    MOV dword ptr [ESP + 0x10],0x3f800000 ; 0057bb8b
    FLD float ptr [ESP + 0x10]          ; 0057bb93
        ;   Label: LAB_0057bb93
    FMUL float ptr [0x005f5916]         ; 0057bb97 | DAT_005f5916
    FADD float ptr [0x02c82a78]         ; 0057bb9d | DAT_02c82a78
    ADD EBX,0x2                         ; 0057bba3
    FSTP float ptr [0x02c82a78]         ; 0057bba6 | DAT_02c82a78
    CMP EBX,0x21                        ; 0057bbac
    JNZ 0x0057bae0                      ; 0057bbaf
        ;   XREF to: 0057bae0 (CONDITIONAL_JUMP)  ; LAB_0057bae0
    MOV EBX,dword ptr [ESP + 0x1a8]     ; 0057bbb5
    ADD EBX,0x2                         ; 0057bbbc
    MOV dword ptr [ESP + 0x1a8],EBX     ; 0057bbbf
    CMP EBX,0x21                        ; 0057bbc6
    JNZ 0x0057bacd                      ; 0057bbc9
        ;   XREF to: 0057bacd (CONDITIONAL_JUMP)  ; LAB_0057bacd
    FLD float ptr [0x02c82a78]          ; 0057bbcf | DAT_02c82a78
        ;   Label: LAB_0057bbcf
    FMUL ST0                            ; 0057bbd5
    FST float ptr [0x02c82a78]          ; 0057bbd7 | DAT_02c82a78
    FLDZ                                ; 0057bbdd
    FCOMPP                              ; 0057bbdf
    FNSTSW AX                           ; 0057bbe1
    SAHF                                ; 0057bbe3
    JNC 0x0057bbf8                      ; 0057bbe4
        ;   XREF to: 0057bbf8 (CONDITIONAL_JUMP)  ; LAB_0057bbf8
    FLD float ptr [0x02c82a78]          ; 0057bbe6 | DAT_02c82a78
    FADD float ptr [0x005f591a]         ; 0057bbec | DAT_005f591a
    FSTP float ptr [0x02c82a78]         ; 0057bbf2 | DAT_02c82a78
    FLD float ptr [0x02c82a78]          ; 0057bbf8 | DAT_02c82a78
        ;   Label: LAB_0057bbf8
    FLD1                                ; 0057bbfe
    FCOMPP                              ; 0057bc00
    FNSTSW AX                           ; 0057bc02
    SAHF                                ; 0057bc04
    JNC 0x0057ba09                      ; 0057bc05
        ;   XREF to: 0057ba09 (CONDITIONAL_JUMP)  ; LAB_0057ba09
    MOV dword ptr [0x02c82a78],0x3f800000 ; 0057bc0b | DAT_02c82a78
    JMP 0x0057ba09                      ; 0057bc15
        ;   XREF to: 0057ba09 (UNCONDITIONAL_JUMP)  ; LAB_0057ba09
    LEA ECX,[EDX + 0xfffffd00]          ; 0057bc1a
        ;   Label: LAB_0057bc1a
    MOV dword ptr [ESP + 0x154],ECX     ; 0057bc20
    CMP ECX,0x1                         ; 0057bc27
    JGE 0x0057bc37                      ; 0057bc2a
        ;   XREF to: 0057bc37 (CONDITIONAL_JUMP)  ; LAB_0057bc37
    MOV dword ptr [ESP + 0x154],0x1     ; 0057bc2c
    LEA EAX,[ESP + 0x14c]               ; 0057bc37
        ;   Label: LAB_0057bc37
    PUSH EAX                            ; 0057bc3e
    PUSH 0x1fe37ec                      ; 0057bc3f
    LEA ESI,[ESP + 0x19c]               ; 0057bc44
    LEA EDI,[ESP + 0xb8]                ; 0057bc4b
    CALL FUN_0044de40                   ; 0057bc52
        ;   XREF to: 0044de40 (UNCONDITIONAL_CALL)  ; undefined FUN_0044de40()
    LEA ESI,[ESP + 0x19c]               ; 0057bc57
    ADD ESP,0x8                         ; 0057bc5e
    MOVSD ES:EDI,ESI                    ; 0057bc61
    MOVSD ES:EDI,ESI                    ; 0057bc62
    MOVSD ES:EDI,ESI                    ; 0057bc63
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0057bc64
    MOV dword ptr [ESP + 0x1b0],EAX     ; 0057bc6b
    FILD dword ptr [ESP + 0x1b0]        ; 0057bc72
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0057bc79
    FLD double ptr [0x005f58fe]         ; 0057bc80 | DAT_005f58fe
    FXCH                                ; 0057bc86
    FMUL ST1                            ; 0057bc88
    MOV dword ptr [ESP + 0x1b0],EAX     ; 0057bc8a
    MOV EAX,dword ptr [ESP + 0xb8]      ; 0057bc91
    FILD dword ptr [ESP + 0x1b0]        ; 0057bc98
    MOV dword ptr [ESP + 0x1b0],EAX     ; 0057bc9f
    FMUL ST2                            ; 0057bca6
    FILD dword ptr [ESP + 0x1b0]        ; 0057bca8
    FMULP ST3                           ; 0057bcaf
    LEA EDI,[ESP + 0x188]               ; 0057bcb1
    LEA ESI,[ESP + 0x164]               ; 0057bcb8
    FXCH                                ; 0057bcbf
    FST float ptr [ESP + 0x11c]         ; 0057bcc1
    FXCH                                ; 0057bcc8
    FSTP float ptr [ESP + 0x120]        ; 0057bcca
    FSUB float ptr [ESP + 0x170]        ; 0057bcd1
    FLD float ptr [ESP + 0x120]         ; 0057bcd8
    FXCH                                ; 0057bcdf
    FSTP float ptr [ESP + 0x164]        ; 0057bce1
    FXCH                                ; 0057bce8
    FSTP float ptr [ESP + 0x124]        ; 0057bcea
    FSUB float ptr [ESP + 0x174]        ; 0057bcf1
    FLD float ptr [ESP + 0x124]         ; 0057bcf8
    FSUB float ptr [ESP + 0x178]        ; 0057bcff
    FXCH                                ; 0057bd06
    FSTP float ptr [ESP + 0x168]        ; 0057bd08
    FSTP float ptr [ESP + 0x16c]        ; 0057bd0f
    MOVSD ES:EDI,ESI                    ; 0057bd16
    MOVSD ES:EDI,ESI                    ; 0057bd17
    MOVSD ES:EDI,ESI                    ; 0057bd18
    FLD float ptr [ESP + 0x18c]         ; 0057bd19
    FMUL ST0                            ; 0057bd20
    FLD float ptr [ESP + 0x188]         ; 0057bd22
    FMUL ST0                            ; 0057bd29
    FADDP                               ; 0057bd2b
    FLD float ptr [ESP + 0x190]         ; 0057bd2d
    FMUL ST0                            ; 0057bd34
    FADDP                               ; 0057bd36
    FSQRT                               ; 0057bd38
    FST double ptr [ESP + 0x8]          ; 0057bd3a
    FCOMP double ptr [0x005f591e]       ; 0057bd3e | DAT_005f591e
    FNSTSW AX                           ; 0057bd44
    SAHF                                ; 0057bd46
    JBE 0x0057bd61                      ; 0057bd47
        ;   XREF to: 0057bd61 (CONDITIONAL_JUMP)  ; LAB_0057bd61
    FLD double ptr [ESP + 0x8]          ; 0057bd49
    FADD double ptr [0x005f5926]        ; 0057bd4d | DAT_005f5926
    FMUL double ptr [0x005f5906]        ; 0057bd53 | DAT_005f5906
    FADD float ptr [ESP + 0x10]         ; 0057bd59
    FSTP float ptr [ESP + 0x10]         ; 0057bd5d
    LEA EAX,[ESP + 0x11c]               ; 0057bd61
        ;   Label: LAB_0057bd61
    FLD1                                ; 0057bd68
    PUSH EAX                            ; 0057bd6a
    MOV EAX,[0x00622c18]                ; 0057bd6b | DAT_00622c18
    FADD float ptr [ESP + 0x124]        ; 0057bd70
    PUSH EAX                            ; 0057bd77 | DAT_01e82168
    FSTP float ptr [ESP + 0x128]        ; 0057bd78
    CALL FUN_00557110                   ; 0057bd7f
        ;   XREF to: 00557110 (UNCONDITIONAL_CALL)  ; undefined FUN_00557110()
    MOV dword ptr [ESP + 0x1b8],EAX     ; 0057bd84
    FLD float ptr [ESP + 0x1b8]         ; 0057bd8b
    ADD ESP,0x8                         ; 0057bd92
    FSUB float ptr [ESP + 0x120]        ; 0057bd95
    FST double ptr [ESP]                ; 0057bd9c
    FCOMP double ptr [0x005f592e]       ; 0057bd9f | DAT_005f592e
    FNSTSW AX                           ; 0057bda5
    SAHF                                ; 0057bda7
    JBE 0x0057bb5d                      ; 0057bda8
        ;   XREF to: 0057bb5d (CONDITIONAL_JUMP)  ; LAB_0057bb5d
    FLD double ptr [ESP]                ; 0057bdae
    FADD double ptr [0x005f5936]        ; 0057bdb1 | DAT_005f5936
    FMUL double ptr [0x005f590e]        ; 0057bdb7 | DAT_005f590e
    FADD float ptr [ESP + 0x10]         ; 0057bdbd
    FSTP float ptr [ESP + 0x10]         ; 0057bdc1
    JMP 0x0057bb5d                      ; 0057bdc5
        ;   XREF to: 0057bb5d (UNCONDITIONAL_JUMP)  ; LAB_0057bb5d
    MOV EAX,dword ptr [ESP + 0x170]     ; 0057bdca
        ;   Label: LAB_0057bdca
    MOV [0x02c82a6c],EAX                ; 0057bdd1 | DAT_02c82a6c
    MOV EAX,dword ptr [ESP + 0x174]     ; 0057bdd6
    MOV [0x02c82a70],EAX                ; 0057bddd | DAT_02c82a70
    MOV EAX,dword ptr [ESP + 0x178]     ; 0057bde2
    MOV [0x02c82a74],EAX                ; 0057bde9 | DAT_02c82a74
    MOV ESP,EBP                         ; 0057bdee
    POP EBP                             ; 0057bdf0
    POP EDI                             ; 0057bdf1
    POP ESI                             ; 0057bdf2
    POP EBX                             ; 0057bdf3
    RET                                 ; 0057bdf4

