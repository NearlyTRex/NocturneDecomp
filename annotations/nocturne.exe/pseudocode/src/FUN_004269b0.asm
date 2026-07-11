; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004269b0(int param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_004259f0 at 00425a22
;
; Referenced Globals:
;   undefined4 s_character-onfire-fallapart.wav_00579f99+1
;   string s_character-onfire-loop.wav_00579fb9
;   undefined4 DAT_00579fda
;   undefined4 DAT_00579fe2
;   undefined4 DAT_00579fea
;   undefined4 DAT_00579ff2
;   undefined4 DAT_00579ffa
;   undefined4 DAT_0059b08c
;   undefined4 DAT_0059b090
;   undefined4 DAT_00765aa0
;   undefined4 DAT_00765aa4
;
; Called Functions:
;   FUN_0040a240
;   FUN_004266a0
;   FUN_00427b60
;   FUN_0051e020
;   FUN_0051e0a0
;   FUN_005260f0
;   FUN_00526340
;   FUN_005263c0
;   FUN_005270d0
;   FUN_00527230
;   FUN_0055a8b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004269b0
        ;   Label: FUN_004269b0
    PUSH ESI                            ; 004269b1
    PUSH EDI                            ; 004269b2
    PUSH EBP                            ; 004269b3
    MOV EBP,ESP                         ; 004269b4
    SUB ESP,0x54                        ; 004269b6
    AND ESP,0xfffffff8                  ; 004269b9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004269bc
    LEA EDI,[EBX + 0x150]               ; 004269bf
    PUSH EDI                            ; 004269c5
    CALL FUN_0051e0a0                   ; 004269c6
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e0a0()
    ADD ESP,0x4                         ; 004269cb
    MOV EDX,dword ptr [EBX + 0xb640]    ; 004269ce
    MOV dword ptr [ESP + 0x50],EAX      ; 004269d4
    TEST EDX,EDX                        ; 004269d8
    JNZ 0x00426cd0                      ; 004269da
        ;   XREF to: 00426cd0 (CONDITIONAL_JUMP)  ; LAB_00426cd0
    CMP dword ptr [EBX + 0x2f08],0x0    ; 004269e0
    JLE 0x00426b65                      ; 004269e7
        ;   XREF to: 00426b65 (CONDITIONAL_JUMP)  ; LAB_00426b65
    PUSH EDI                            ; 004269ed
    CALL FUN_0051e0a0                   ; 004269ee
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e0a0()
    ADD ESP,0x4                         ; 004269f3
    PUSH EDI                            ; 004269f6
    MOV ESI,EAX                         ; 004269f7
    MOV dword ptr [ESP + 0x34],EAX      ; 004269f9
    CALL FUN_0051e020                   ; 004269fd
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e020()
    ADD ESP,0x4                         ; 00426a02
    MOV EDI,EAX                         ; 00426a05
    MOV EAX,dword ptr [ESI + 0x28558]   ; 00426a07
    XOR EDX,EDX                         ; 00426a0d
    TEST EAX,EAX                        ; 00426a0f
    JLE 0x00426a30                      ; 00426a11
        ;   XREF to: 00426a30 (CONDITIONAL_JUMP)  ; LAB_00426a30
    MOV ESI,dword ptr [ESP + 0x30]      ; 00426a13
    XOR EAX,EAX                         ; 00426a17
    XOR ECX,ECX                         ; 00426a19
        ;   Label: LAB_00426a19
    MOV dword ptr [EAX + 0x765aa0],ECX  ; 00426a1b | DAT_00765aa0 | DAT_00765aa4
    INC EDX                             ; 00426a21
    MOV ECX,dword ptr [ESI + 0x28558]   ; 00426a22
    ADD EAX,0x4                         ; 00426a28
    CMP EDX,ECX                         ; 00426a2b
    JL 0x00426a19                       ; 00426a2d
        ;   XREF to: 00426a19 (CONDITIONAL_JUMP)  ; LAB_00426a19
    NOP                                 ; 00426a2f
    MOV ESI,dword ptr [EBX + 0x2f08]    ; 00426a30
        ;   Label: LAB_00426a30
    XOR EAX,EAX                         ; 00426a36
    TEST ESI,ESI                        ; 00426a38
    JLE 0x00426a7e                      ; 00426a3a
        ;   XREF to: 00426a7e (CONDITIONAL_JUMP)  ; LAB_00426a7e
    FLD float ptr [0x0059b090]          ; 00426a3c | DAT_0059b090
    FLD double ptr [0x00579fda]         ; 00426a42 | DAT_00579fda
    MOV ESI,EBX                         ; 00426a48
    FLD float ptr [ESI + 0x2f28]        ; 00426a4a
        ;   Label: LAB_00426a4a
    MOV EDX,dword ptr [ESI + 0x2f18]    ; 00426a50
    FMUL ST1                            ; 00426a56
    FLD float ptr [EDX*0x4 + 0x765aa0]  ; 00426a58 | DAT_00765aa0
    FLD ST3                             ; 00426a5f
    FDIVP ST2,ST0                       ; 00426a61
    FADDP                               ; 00426a63
    INC EAX                             ; 00426a65
    FSTP float ptr [EDX*0x4 + 0x765aa0] ; 00426a66 | DAT_00765aa0
    MOV EDX,dword ptr [EBX + 0x2f08]    ; 00426a6d
    ADD ESI,0x18                        ; 00426a73
    CMP EAX,EDX                         ; 00426a76
    JL 0x00426a4a                       ; 00426a78
        ;   XREF to: 00426a4a (CONDITIONAL_JUMP)  ; LAB_00426a4a
    FSTP ST0                            ; 00426a7a
    FSTP ST0                            ; 00426a7c
    MOV EAX,dword ptr [ESP + 0x30]      ; 00426a7e
        ;   Label: LAB_00426a7e
    XOR ESI,ESI                         ; 00426a82
    MOV EDX,dword ptr [EAX + 0x28558]   ; 00426a84
    MOV dword ptr [ESP + 0x3c],ESI      ; 00426a8a
    TEST EDX,EDX                        ; 00426a8e
    JLE 0x00426b0e                      ; 00426a90
        ;   XREF to: 00426b0e (CONDITIONAL_JUMP)  ; LAB_00426b0e
    LEA EAX,[EBX + 0x150]               ; 00426a96
    MOV dword ptr [ESP + 0x34],EDI      ; 00426a9c
    MOV dword ptr [ESP + 0x24],EAX      ; 00426aa0
    XOR EDI,EDI                         ; 00426aa4
    FLD float ptr [EDI + 0x765aa0]      ; 00426aa6 | DAT_00765aa0 | DAT_00765aa4
        ;   Label: LAB_00426aa6
    FCOMP double ptr [0x00579fda]       ; 00426aac | DAT_00579fda
    FNSTSW AX                           ; 00426ab2
    SAHF                                ; 00426ab4
    JC 0x00426ab8                       ; 00426ab5
        ;   XREF to: 00426ab8 (CONDITIONAL_JUMP)  ; LAB_00426ab8
    INC ESI                             ; 00426ab7
    MOV EAX,dword ptr [ESP + 0x34]      ; 00426ab8
        ;   Label: LAB_00426ab8
    CMP dword ptr [EAX + 0x288c],-0x1   ; 00426abc
    JNZ 0x00426ac6                      ; 00426ac3
        ;   XREF to: 00426ac6 (CONDITIONAL_JUMP)  ; LAB_00426ac6
    INC ESI                             ; 00426ac5
    MOV ECX,dword ptr [ESP + 0x24]      ; 00426ac6
        ;   Label: LAB_00426ac6
    PUSH ECX                            ; 00426aca
    CALL FUN_0051e020                   ; 00426acb
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e020()
    MOV EAX,dword ptr [EDI + EAX*0x1 + 0x26fc] ; 00426ad0
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2290] ; 00426ad7
    ADD ESP,0x4                         ; 00426ade
    TEST EDX,EDX                        ; 00426ae1
    JZ 0x00426d24                       ; 00426ae3
        ;   XREF to: 00426d24 (CONDITIONAL_JUMP)  ; LAB_00426d24
    MOV ECX,dword ptr [ESP + 0x34]      ; 00426ae9
        ;   Label: LAB_00426ae9
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00426aed
    MOV EDX,dword ptr [ESP + 0x30]      ; 00426af1
    ADD EDI,0x4                         ; 00426af5
    ADD ECX,0x4                         ; 00426af8
    INC EAX                             ; 00426afb
    MOV dword ptr [ESP + 0x34],ECX      ; 00426afc
    MOV ECX,dword ptr [EDX + 0x28558]   ; 00426b00
    MOV dword ptr [ESP + 0x3c],EAX      ; 00426b06
    CMP EAX,ECX                         ; 00426b0a
    JL 0x00426aa6                       ; 00426b0c
        ;   XREF to: 00426aa6 (CONDITIONAL_JUMP)  ; LAB_00426aa6
    MOV EAX,dword ptr [ESP + 0x30]      ; 00426b0e
        ;   Label: LAB_00426b0e
    CMP ESI,dword ptr [EAX + 0x28558]   ; 00426b12
    JNZ 0x00426b2e                      ; 00426b18
        ;   XREF to: 00426b2e (CONDITIONAL_JUMP)  ; LAB_00426b2e
    MOV dword ptr [EBX + 0xb644],0x3f800000 ; 00426b1a
    MOV dword ptr [EBX + 0xb640],0x1    ; 00426b24
    FILD dword ptr [EBX + 0x2f08]       ; 00426b2e
        ;   Label: LAB_00426b2e
    FMUL double ptr [0x00579fe2]        ; 00426b34 | DAT_00579fe2
    FMUL double ptr [0x00579fea]        ; 00426b3a | DAT_00579fea
    FADD double ptr [0x00579ff2]        ; 00426b40 | DAT_00579ff2
    MOV EAX,dword ptr [EBX + 0xb63c]    ; 00426b46
    FSTP float ptr [ESP + 0x1c]         ; 00426b4c
    PUSH dword ptr [ESP + 0x1c]         ; 00426b50
    PUSH EAX                            ; 00426b54
    CALL FUN_005270d0                   ; 00426b55
        ;   XREF to: 005270d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005270d0()
    ADD ESP,0x8                         ; 00426b5a
    TEST EAX,EAX                        ; 00426b5d
    JZ 0x00426d2a                       ; 00426b5f
        ;   XREF to: 00426d2a (CONDITIONAL_JUMP)  ; LAB_00426d2a
    XOR ECX,ECX                         ; 00426b65
        ;   Label: LAB_00426b65
    MOV ESI,dword ptr [EBX + 0x2f08]    ; 00426b67
    MOV dword ptr [ESP + 0x40],ECX      ; 00426b6d
    TEST ESI,ESI                        ; 00426b71
    JLE 0x00426c64                      ; 00426b73
        ;   XREF to: 00426c64 (CONDITIONAL_JUMP)  ; LAB_00426c64
    LEA EAX,[EBX + 0xfd0]               ; 00426b79
    MOV dword ptr [ESP + 0x28],EAX      ; 00426b7f
    LEA EAX,[EBX + 0x33c4]              ; 00426b83
    LEA ESI,[EBX + 0x2f14]              ; 00426b89
    MOV dword ptr [ESP + 0x20],EAX      ; 00426b8f
    MOV dword ptr [ESP + 0x44],EBX      ; 00426b93
    LEA EDI,[EBX + 0x33e4]              ; 00426b97
    MOV EAX,dword ptr [ESI]             ; 00426b9d
        ;   Label: LAB_00426b9d
    CMP dword ptr [EBX + EAX*0x4 + 0x2290],0x0 ; 00426b9f
    JZ 0x00426c37                       ; 00426ba7
        ;   XREF to: 00426c37 (CONDITIONAL_JUMP)  ; LAB_00426c37
    MOV dword ptr [EBX + 0xfc],0x1      ; 00426bad
    IMUL EAX,dword ptr [ESI + 0x4],0x30 ; 00426bb7
    ADD EAX,dword ptr [ESP + 0x28]      ; 00426bbb
    PUSH EAX                            ; 00426bbf
    LEA EAX,[ESI + 0x8]                 ; 00426bc0
    PUSH EAX                            ; 00426bc3
    LEA EAX,[ESP + 0x14]                ; 00426bc4
    PUSH EAX                            ; 00426bc8
    CALL FUN_0055a8b0                   ; 00426bc9
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a8b0()
    ADD ESP,0xc                         ; 00426bce
    PUSH EAX                            ; 00426bd1
    LEA EAX,[ESP + 0x4]                 ; 00426bd2
    PUSH EAX                            ; 00426bd6
    PUSH EBX                            ; 00426bd7
    CALL FUN_0040a240                   ; 00426bd8
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a240()
    ADD ESP,0xc                         ; 00426bdd
    IMUL EDX,dword ptr [ESP + 0x40],0x29c ; 00426be0
    MOV ECX,dword ptr [EAX]             ; 00426be8
    MOV dword ptr [EDI],ECX             ; 00426bea
    MOV ECX,dword ptr [EAX + 0x4]       ; 00426bec
    MOV dword ptr [EDI + 0x4],ECX       ; 00426bef
    MOV ECX,dword ptr [EAX + 0x8]       ; 00426bf2
    MOV dword ptr [EDI + 0x8],ECX       ; 00426bf5
    FLD double ptr [0x00579ffa]         ; 00426bf8 | DAT_00579ffa
    FLD float ptr [ESI + 0x14]          ; 00426bfe
    FMUL ST1                            ; 00426c01
    MOV EAX,dword ptr [ESP + 0x44]      ; 00426c03
    FSTP float ptr [EAX + 0x3514]       ; 00426c07
    MOV ECX,dword ptr [ESI + 0x14]      ; 00426c0d
    MOV dword ptr [EAX + 0x3518],ECX    ; 00426c10
    FLD float ptr [ESI + 0x14]          ; 00426c16
    MOV ECX,dword ptr [ESP + 0x20]      ; 00426c19
    FMULP                               ; 00426c1d
    ADD EDX,ECX                         ; 00426c1f
    PUSH dword ptr [EBP + 0x18]         ; 00426c21
    PUSH EDX                            ; 00426c24
    FSTP float ptr [EAX + 0x351c]       ; 00426c25
    MOV EAX,dword ptr [EDX + 0x14c]     ; 00426c2b
    CALL dword ptr [EAX + 0x4]          ; 00426c31
    ADD ESP,0x8                         ; 00426c34
    MOV EAX,dword ptr [ESP + 0x44]      ; 00426c37
        ;   Label: LAB_00426c37
    MOV EDX,dword ptr [ESP + 0x40]      ; 00426c3b
    ADD ESI,0x18                        ; 00426c3f
    ADD EDI,0x29c                       ; 00426c42
    MOV ECX,dword ptr [EBX + 0x2f08]    ; 00426c48
    ADD EAX,0x29c                       ; 00426c4e
    INC EDX                             ; 00426c53
    MOV dword ptr [ESP + 0x44],EAX      ; 00426c54
    MOV dword ptr [ESP + 0x40],EDX      ; 00426c58
    CMP EDX,ECX                         ; 00426c5c
    JL 0x00426b9d                       ; 00426c5e
        ;   XREF to: 00426b9d (CONDITIONAL_JUMP)  ; LAB_00426b9d
    MOV ESI,dword ptr [EBX + 0x260c]    ; 00426c64
        ;   Label: LAB_00426c64
    TEST ESI,ESI                        ; 00426c6a
    JNZ 0x00426cc9                      ; 00426c6c
        ;   XREF to: 00426cc9 (CONDITIONAL_JUMP)  ; LAB_00426cc9
    MOV EAX,dword ptr [EBX + 0x2f08]    ; 00426c6e
    MOV dword ptr [ESP + 0x38],ESI      ; 00426c74
    TEST EAX,EAX                        ; 00426c78
    JLE 0x00426cc9                      ; 00426c7a
        ;   XREF to: 00426cc9 (CONDITIONAL_JUMP)  ; LAB_00426cc9
    FLD float ptr [EBP + 0x18]          ; 00426c7c
    LEA EAX,[EBX + 0x2f14]              ; 00426c7f
    FMUL float ptr [0x0059b08c]         ; 00426c85 | DAT_0059b08c
    MOV dword ptr [ESP + 0x48],EAX      ; 00426c8b
    FSTP float ptr [ESP + 0x2c]         ; 00426c8f
    MOV EAX,dword ptr [ESP + 0x48]      ; 00426c93
        ;   Label: LAB_00426c93
    MOV dword ptr [ESP + 0x4c],EAX      ; 00426c97
    MOV EAX,dword ptr [EAX]             ; 00426c9b
    CMP dword ptr [EBX + EAX*0x4 + 0x2290],0x0 ; 00426c9d
    JNZ 0x00426d5d                      ; 00426ca5
        ;   XREF to: 00426d5d (CONDITIONAL_JUMP)  ; LAB_00426d5d
    MOV ESI,dword ptr [ESP + 0x48]      ; 00426cab
        ;   Label: LAB_00426cab
    MOV EDI,dword ptr [ESP + 0x38]      ; 00426caf
    MOV EDX,dword ptr [EBX + 0x2f08]    ; 00426cb3
    ADD ESI,0x18                        ; 00426cb9
    INC EDI                             ; 00426cbc
    MOV dword ptr [ESP + 0x48],ESI      ; 00426cbd
    MOV dword ptr [ESP + 0x38],EDI      ; 00426cc1
    CMP EDI,EDX                         ; 00426cc5
    JL 0x00426c93                       ; 00426cc7
        ;   XREF to: 00426c93 (CONDITIONAL_JUMP)  ; LAB_00426c93
    MOV ESP,EBP                         ; 00426cc9
        ;   Label: LAB_00426cc9
    POP EBP                             ; 00426ccb
    POP EDI                             ; 00426ccc
    POP ESI                             ; 00426ccd
    POP EBX                             ; 00426cce
    RET                                 ; 00426ccf
    FLD float ptr [EBX + 0xb644]        ; 00426cd0
        ;   Label: LAB_00426cd0
    FSUB float ptr [EBP + 0x18]         ; 00426cd6
    FST float ptr [EBX + 0xb644]        ; 00426cd9
    FLDZ                                ; 00426cdf
    FCOMPP                              ; 00426ce1
    FNSTSW AX                           ; 00426ce3
    SAHF                                ; 00426ce5
    JBE 0x00426b65                      ; 00426ce6
        ;   XREF to: 00426b65 (CONDITIONAL_JUMP)  ; LAB_00426b65
    MOV EDX,dword ptr [EBX + 0xb63c]    ; 00426cec
    PUSH EDX                            ; 00426cf2
    CALL FUN_00527230                   ; 00426cf3
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined FUN_00527230()
    ADD ESP,0x4                         ; 00426cf8
    PUSH 0x579f9a                       ; 00426cfb | s_character-onfire-fallapart.wav_00579f99+1
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00426d00
    PUSH EBX                            ; 00426d06
    CALL dword ptr [EAX + 0x24]         ; 00426d07
    ADD ESP,0x8                         ; 00426d0a
    PUSH 0x0                            ; 00426d0d
    PUSH 0xbf800000                     ; 00426d0f
    PUSH 0x0                            ; 00426d14
    PUSH EBX                            ; 00426d16
    CALL FUN_00427b60                   ; 00426d17
        ;   XREF to: 00427b60 (UNCONDITIONAL_CALL)  ; undefined FUN_00427b60()
    ADD ESP,0x10                        ; 00426d1c
    JMP 0x00426b65                      ; 00426d1f
        ;   XREF to: 00426b65 (UNCONDITIONAL_JUMP)  ; LAB_00426b65
    INC ESI                             ; 00426d24
        ;   Label: LAB_00426d24
    JMP 0x00426ae9                      ; 00426d25
        ;   XREF to: 00426ae9 (UNCONDITIONAL_JUMP)  ; LAB_00426ae9
    CALL FUN_00526340                   ; 00426d2a
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; undefined FUN_00526340()
        ;   Label: LAB_00426d2a
    PUSH dword ptr [ESP + 0x1c]         ; 00426d2f
    CALL FUN_005260f0                   ; 00426d33
        ;   XREF to: 005260f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005260f0()
    ADD ESP,0x4                         ; 00426d38
    PUSH 0x579fb9                       ; 00426d3b | = "character-onfire-loop.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00426d40
    PUSH EBX                            ; 00426d46
    CALL dword ptr [EAX + 0x28]         ; 00426d47
    ADD ESP,0x8                         ; 00426d4a
    MOV dword ptr [EBX + 0xb63c],EAX    ; 00426d4d
    CALL FUN_005263c0                   ; 00426d53
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005263c0()
    JMP 0x00426b65                      ; 00426d58
        ;   XREF to: 00426b65 (UNCONDITIONAL_JUMP)  ; LAB_00426b65
    FLD float ptr [ESP + 0x2c]          ; 00426d5d
        ;   Label: LAB_00426d5d
    FMUL float ptr [EBX + 0x2f10]       ; 00426d61
    MOV EAX,dword ptr [ESP + 0x48]      ; 00426d67
    FADD float ptr [EAX + 0x14]         ; 00426d6b
    FST float ptr [EAX + 0x14]          ; 00426d6e
    FCOMP float ptr [0x0059b090]        ; 00426d71 | DAT_0059b090
    FNSTSW AX                           ; 00426d77
    SAHF                                ; 00426d79
    JBE 0x00426cab                      ; 00426d7a
        ;   XREF to: 00426cab (CONDITIONAL_JUMP)  ; LAB_00426cab
    MOV EAX,dword ptr [ESP + 0x48]      ; 00426d80
    MOV EDX,dword ptr [0x0059b090]      ; 00426d84 | DAT_0059b090
    MOV dword ptr [EAX + 0x14],EDX      ; 00426d8a
    MOV EAX,dword ptr [ESP + 0x50]      ; 00426d8d
    MOV EDI,dword ptr [EAX + 0x28558]   ; 00426d91
    XOR ESI,ESI                         ; 00426d97
    TEST EDI,EDI                        ; 00426d99
    JLE 0x00426de8                      ; 00426d9b
        ;   XREF to: 00426de8 (CONDITIONAL_JUMP)  ; LAB_00426de8
    MOV EDI,EAX                         ; 00426d9d
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00426d9f
        ;   Label: LAB_00426d9f
    MOV EAX,dword ptr [EDI + 0x2857c]   ; 00426da3
    MOV ECX,dword ptr [EDX + 0x4]       ; 00426da9
    CMP EAX,ECX                         ; 00426dac
    JNZ 0x00426dd6                      ; 00426dae
        ;   XREF to: 00426dd6 (CONDITIONAL_JUMP)  ; LAB_00426dd6
    MOV EDX,dword ptr [EBX + 0x2f08]    ; 00426db0
    XOR EAX,ECX                         ; 00426db6
    TEST EDX,EDX                        ; 00426db8
    JLE 0x00426dca                      ; 00426dba
        ;   XREF to: 00426dca (CONDITIONAL_JUMP)  ; LAB_00426dca
    MOV EDX,EBX                         ; 00426dbc
    CMP ESI,dword ptr [EDX + 0x2f18]    ; 00426dbe
        ;   Label: LAB_00426dbe
    JNZ 0x00426e40                      ; 00426dc4
        ;   XREF to: 00426e40 (CONDITIONAL_JUMP)  ; LAB_00426e40
    CMP EAX,dword ptr [EBX + 0x2f08]    ; 00426dca
        ;   Label: LAB_00426dca
    JZ 0x00426e57                       ; 00426dd0
        ;   XREF to: 00426e57 (CONDITIONAL_JUMP)  ; LAB_00426e57
    MOV EAX,dword ptr [ESP + 0x50]      ; 00426dd6
        ;   Label: LAB_00426dd6
    INC ESI                             ; 00426dda
    MOV EDX,dword ptr [EAX + 0x28558]   ; 00426ddb
    ADD EDI,0x24                        ; 00426de1
    CMP ESI,EDX                         ; 00426de4
    JL 0x00426d9f                       ; 00426de6
        ;   XREF to: 00426d9f (CONDITIONAL_JUMP)  ; LAB_00426d9f
    MOV ECX,dword ptr [EBX + 0x2f08]    ; 00426de8
        ;   Label: LAB_00426de8
    XOR EAX,EAX                         ; 00426dee
    TEST ECX,ECX                        ; 00426df0
    JLE 0x00426e10                      ; 00426df2
        ;   XREF to: 00426e10 (CONDITIONAL_JUMP)  ; LAB_00426e10
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00426df4
    IMUL EDI,dword ptr [EDX + 0x4],0x24 ; 00426df8
    ADD EDI,dword ptr [ESP + 0x50]      ; 00426dfc
    MOV EDX,EBX                         ; 00426e00
    MOV ECX,dword ptr [EDI + 0x2857c]   ; 00426e02
        ;   Label: LAB_00426e02
    CMP ECX,dword ptr [EDX + 0x2f18]    ; 00426e08
    JNZ 0x00426e6b                      ; 00426e0e
        ;   XREF to: 00426e6b (CONDITIONAL_JUMP)  ; LAB_00426e6b
    CMP EAX,dword ptr [EBX + 0x2f08]    ; 00426e10
        ;   Label: LAB_00426e10
    JNZ 0x00426cab                      ; 00426e16
        ;   XREF to: 00426cab (CONDITIONAL_JUMP)  ; LAB_00426cab
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00426e1c
    IMUL EAX,dword ptr [EAX + 0x4],0x24 ; 00426e20
    MOV EDX,dword ptr [ESP + 0x50]      ; 00426e24
    ADD EAX,EDX                         ; 00426e28
    MOV ECX,dword ptr [EAX + 0x2857c]   ; 00426e2a
    PUSH ECX                            ; 00426e30
    PUSH EDX                            ; 00426e31
    PUSH EBX                            ; 00426e32
    CALL FUN_004266a0                   ; 00426e33
        ;   XREF to: 004266a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004266a0()
    ADD ESP,0xc                         ; 00426e38
    JMP 0x00426cab                      ; 00426e3b
        ;   XREF to: 00426cab (UNCONDITIONAL_JUMP)  ; LAB_00426cab
    INC EAX                             ; 00426e40
        ;   Label: LAB_00426e40
    MOV ECX,dword ptr [EBX + 0x2f08]    ; 00426e41
    ADD EDX,0x18                        ; 00426e47
    CMP EAX,ECX                         ; 00426e4a
    JL 0x00426dbe                       ; 00426e4c
        ;   XREF to: 00426dbe (CONDITIONAL_JUMP)  ; LAB_00426dbe
    JMP 0x00426dca                      ; 00426e52
        ;   XREF to: 00426dca (UNCONDITIONAL_JUMP)  ; LAB_00426dca
    PUSH ESI                            ; 00426e57
        ;   Label: LAB_00426e57
    MOV ECX,dword ptr [ESP + 0x54]      ; 00426e58
    PUSH ECX                            ; 00426e5c
    PUSH EBX                            ; 00426e5d
    CALL FUN_004266a0                   ; 00426e5e
        ;   XREF to: 004266a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004266a0()
    ADD ESP,0xc                         ; 00426e63
    JMP 0x00426dd6                      ; 00426e66
        ;   XREF to: 00426dd6 (UNCONDITIONAL_JUMP)  ; LAB_00426dd6
    INC EAX                             ; 00426e6b
        ;   Label: LAB_00426e6b
    MOV ECX,dword ptr [EBX + 0x2f08]    ; 00426e6c
    ADD EDX,0x18                        ; 00426e72
    CMP EAX,ECX                         ; 00426e75
    JL 0x00426e02                       ; 00426e77
        ;   XREF to: 00426e02 (CONDITIONAL_JUMP)  ; LAB_00426e02
    JMP 0x00426e10                      ; 00426e79
        ;   XREF to: 00426e10 (UNCONDITIONAL_JUMP)  ; LAB_00426e10

