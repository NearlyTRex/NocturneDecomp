; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0058aab0(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x1e0]:4  local_1e0
; undefined        Stack[-0x1dc]:1  local_1dc
; undefined        Stack[-0x1cc]:1  local_1cc
; undefined        Stack[-0x1bc]:1  local_1bc
; undefined        Stack[-0x1ac]:1  local_1ac
; undefined        Stack[-0x19c]:1  local_19c
; undefined        Stack[-0x18c]:1  local_18c
; undefined        Stack[-0x17c]:1  local_17c
; undefined        Stack[-0x16c]:1  local_16c
; undefined        Stack[-0x15c]:1  local_15c
; undefined        Stack[-0x14c]:1  local_14c
; undefined        Stack[-0x13c]:1  local_13c
; undefined        Stack[-0x12c]:1  local_12c
; undefined        Stack[-0x11c]:1  local_11c
; undefined        Stack[-0x10c]:1  local_10c
; undefined        Stack[-0xfc]:1  local_fc
; undefined        Stack[-0xec]:1  local_ec
; undefined        Stack[-0xdc]:1  local_dc
; undefined        Stack[-0xcc]:1  local_cc
; undefined        Stack[-0xbc]:1  local_bc
; undefined        Stack[-0xac]:1  local_ac
; undefined        Stack[-0x9c]:1  local_9c
; undefined        Stack[-0x8c]:1  local_8c
; undefined        Stack[-0x7c]:1  local_7c
; undefined        Stack[-0x6c]:1  local_6c
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x4c]:1  local_4c
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
;   FUN_0058a360 at 0058a83b
;
; Referenced Globals:
;   undefined4 DAT_005f6b89
;   undefined4 DAT_006081e0
;   undefined4 DAT_02c8360c
;   undefined4 DAT_02c83610
;   undefined4 DAT_02c83614
;   undefined4 DAT_02c83618
;
; Called Functions:
;   FUN_005240c0
;   FUN_00525110
;   FUN_00568100
;   FUN_00568d60
;   FUN_00569f30
;   FUN_005b77b0
;   FUN_005b7940
;   FUN_005b7af0
;   FUN_005b7b30
;   FUN_005b7b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058aab0
        ;   Label: FUN_0058aab0
    PUSH ESI                            ; 0058aab1
    PUSH EDI                            ; 0058aab2
    PUSH EBP                            ; 0058aab3
    MOV EBP,ESP                         ; 0058aab4
    SUB ESP,0x1cc                       ; 0058aab6
    AND ESP,0xfffffff8                  ; 0058aabc
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058aabf
    CMP dword ptr [EBP + 0x18],0x0      ; 0058aac2
    JZ 0x0058adad                       ; 0058aac6
        ;   XREF to: 0058adad (CONDITIONAL_JUMP)  ; LAB_0058adad
    PUSH 0xbfc90fdb                     ; 0058aacc
    MOV EAX,[0x02c83610]                ; 0058aad1 | DAT_02c83610
    LEA ESI,[ESP + 0x8]                 ; 0058aad6
    MOV dword ptr [ESP + 0x1c0],EAX     ; 0058aada
    MOV EAX,[0x02c83618]                ; 0058aae1 | DAT_02c83618
    LEA EDI,[ESP + 0x18]                ; 0058aae6
    MOV dword ptr [ESP + 0x1bc],EAX     ; 0058aaea
    CALL FUN_005b7b30                   ; 0058aaf1
        ;   XREF to: 005b7b30 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7b30()
    LEA ESI,[ESP + 0x8]                 ; 0058aaf6
    ADD ESP,0x4                         ; 0058aafa
    MOVSD ES:EDI,ESI                    ; 0058aafd
    MOVSD ES:EDI,ESI                    ; 0058aafe
    MOVSD ES:EDI,ESI                    ; 0058aaff
    MOVSD ES:EDI,ESI                    ; 0058ab00
    PUSH 0xbfc90fdb                     ; 0058ab01
    LEA ESI,[ESP + 0xf8]                ; 0058ab06
    LEA EDI,[ESP + 0x28]                ; 0058ab0d
    CALL FUN_005b7b70                   ; 0058ab11
        ;   XREF to: 005b7b70 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7b70()
    ADD ESP,0x4                         ; 0058ab16
    LEA EAX,[EBX + 0x1ffc0]             ; 0058ab19
    LEA ESI,[ESP + 0xf4]                ; 0058ab1f
    MOV dword ptr [ESP + 0x1c0],EAX     ; 0058ab26
        ;   Label: LAB_0058ab26
    MOVSD ES:EDI,ESI                    ; 0058ab2d
    MOVSD ES:EDI,ESI                    ; 0058ab2e
    MOVSD ES:EDI,ESI                    ; 0058ab2f
    MOVSD ES:EDI,ESI                    ; 0058ab30
    MOV EAX,dword ptr [EBX + 0x2c9c]    ; 0058ab31
    MOV dword ptr [ESP],EAX             ; 0058ab37
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 0058ab3a
    FLD float ptr [EAX + 0x14]          ; 0058ab41
    FLD1                                ; 0058ab44
    FSUBRP                              ; 0058ab46
    FLD float ptr [ESP]                 ; 0058ab48
    FXCH                                ; 0058ab4b
    FMUL ST1                            ; 0058ab4d
    FLD1                                ; 0058ab4f
    FSUBRP                              ; 0058ab51
    FMULP                               ; 0058ab53
    FST float ptr [ESP]                 ; 0058ab55
    FLDZ                                ; 0058ab58
    FCOMPP                              ; 0058ab5a
    FNSTSW AX                           ; 0058ab5c
    SAHF                                ; 0058ab5e
    JNC 0x0058ada6                      ; 0058ab5f
        ;   XREF to: 0058ada6 (CONDITIONAL_JUMP)  ; LAB_0058ada6
    MOV EAX,dword ptr [EBX + 0x2c98]    ; 0058ab65
    SHL EAX,0x3                         ; 0058ab6b
    MOV ESI,EAX                         ; 0058ab6e
    SHL EAX,0x3                         ; 0058ab70
    SUB EAX,ESI                         ; 0058ab73
    LEA ESI,[EBX + 0x27c8]              ; 0058ab75
    ADD EAX,ESI                         ; 0058ab7b
    PUSH 0x1                            ; 0058ab7d
    ADD EAX,0x8                         ; 0058ab7f
    PUSH EAX                            ; 0058ab82
    LEA EAX,[EBX + 0x158]               ; 0058ab83
    PUSH EAX                            ; 0058ab89
    MOV dword ptr [ESP + 0x1d0],EAX     ; 0058ab8a
    CALL FUN_00569f30                   ; 0058ab91
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f30()
    ADD ESP,0x4                         ; 0058ab96
    PUSH EAX                            ; 0058ab99
    CALL FUN_005240c0                   ; 0058ab9a
        ;   XREF to: 005240c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005240c0()
    ADD ESP,0xc                         ; 0058ab9f
    PUSH dword ptr [EBX + 0x2c9c]       ; 0058aba2
    PUSH EAX                            ; 0058aba8
    MOV EDI,dword ptr [ESP + 0x1cc]     ; 0058aba9
    PUSH EDI                            ; 0058abb0
    MOV ESI,EAX                         ; 0058abb1
    CALL FUN_00525110                   ; 0058abb3
        ;   XREF to: 00525110 (UNCONDITIONAL_CALL)  ; undefined FUN_00525110()
    MOV dword ptr [ESP + 0x1d4],EAX     ; 0058abb8
    FLD float ptr [ESP + 0x1d4]         ; 0058abbf
    ADD ESP,0xc                         ; 0058abc6
    PUSH 0x567360                       ; 0058abc9 | LAB_00567360
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 0058abce
    PUSH EAX                            ; 0058abd5
    PUSH dword ptr [ESP + 0x8]          ; 0058abd6
    FSTP float ptr [ESP + 0x1b8]        ; 0058abda
    PUSH dword ptr [ESP + 0x1b8]        ; 0058abe1
    PUSH ESI                            ; 0058abe8
    PUSH EDI                            ; 0058abe9
    CALL FUN_00568100                   ; 0058abea
        ;   XREF to: 00568100 (UNCONDITIONAL_CALL)  ; undefined FUN_00568100()
    ADD ESP,0x18                        ; 0058abef
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 0058abf2
    LEA ESI,[ESP + 0x194]               ; 0058abf9
    PUSH dword ptr [EAX + 0xc]          ; 0058ac00
    LEA EDI,[ESP + 0x78]                ; 0058ac03
    CALL FUN_005b7b30                   ; 0058ac07
        ;   XREF to: 005b7b30 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7b30()
    ADD ESP,0x4                         ; 0058ac0c
    LEA EAX,[ESP + 0x74]                ; 0058ac0f
    LEA ESI,[ESP + 0x194]               ; 0058ac13
    PUSH EAX                            ; 0058ac1a
    MOVSD ES:EDI,ESI                    ; 0058ac1b
    MOVSD ES:EDI,ESI                    ; 0058ac1c
    MOVSD ES:EDI,ESI                    ; 0058ac1d
    MOVSD ES:EDI,ESI                    ; 0058ac1e
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 0058ac1f
    LEA ESI,[ESP + 0x48]                ; 0058ac26
    PUSH dword ptr [EAX + 0x8]          ; 0058ac2a
    LEA EDI,[ESP + 0x6c]                ; 0058ac2d
    CALL FUN_005b7af0                   ; 0058ac31
        ;   XREF to: 005b7af0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7af0()
    LEA ESI,[ESP + 0x4c]                ; 0058ac36
    ADD ESP,0x4                         ; 0058ac3a
    LEA EAX,[ESP + 0x68]                ; 0058ac3d
    MOVSD ES:EDI,ESI                    ; 0058ac41
    MOVSD ES:EDI,ESI                    ; 0058ac42
    MOVSD ES:EDI,ESI                    ; 0058ac43
    MOVSD ES:EDI,ESI                    ; 0058ac44
    PUSH EAX                            ; 0058ac45
    LEA ESI,[ESP + 0x13c]               ; 0058ac46
    LEA EDI,[ESP + 0x5c]                ; 0058ac4d
    CALL FUN_005b77b0                   ; 0058ac51
        ;   XREF to: 005b77b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77b0()
    ADD ESP,0x8                         ; 0058ac56
    LEA ESI,[ESP + 0x134]               ; 0058ac59
    LEA EAX,[ESP + 0x14]                ; 0058ac60
    PUSH 0x3f733333                     ; 0058ac64
    PUSH EAX                            ; 0058ac69
    MOVSD ES:EDI,ESI                    ; 0058ac6a
    MOVSD ES:EDI,ESI                    ; 0058ac6b
    MOVSD ES:EDI,ESI                    ; 0058ac6c
    MOVSD ES:EDI,ESI                    ; 0058ac6d
    PUSH 0x6081e0                       ; 0058ac6e | DAT_006081e0
    LEA ESI,[ESP + 0x150]               ; 0058ac73
    LEA EDI,[ESP + 0x90]                ; 0058ac7a
    CALL FUN_005b7940                   ; 0058ac81
        ;   XREF to: 005b7940 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7940()
    ADD ESP,0xc                         ; 0058ac86
    LEA EAX,[ESP + 0x54]                ; 0058ac89
    PUSH dword ptr [ESP]                ; 0058ac8d
    LEA ESI,[ESP + 0x148]               ; 0058ac90
    PUSH EAX                            ; 0058ac97
    LEA EAX,[ESP + 0x8c]                ; 0058ac98
    MOVSD ES:EDI,ESI                    ; 0058ac9f
    MOVSD ES:EDI,ESI                    ; 0058aca0
    MOVSD ES:EDI,ESI                    ; 0058aca1
    MOVSD ES:EDI,ESI                    ; 0058aca2
    PUSH EAX                            ; 0058aca3
    LEA ESI,[ESP + 0x130]               ; 0058aca4
    LEA EDI,[ESP + 0xa0]                ; 0058acab
    CALL FUN_005b77b0                   ; 0058acb2
        ;   XREF to: 005b77b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77b0()
    LEA ESI,[ESP + 0x130]               ; 0058acb7
    ADD ESP,0x8                         ; 0058acbe
    LEA EAX,[ESP + 0x98]                ; 0058acc1
    MOVSD ES:EDI,ESI                    ; 0058acc8
    MOVSD ES:EDI,ESI                    ; 0058acc9
    MOVSD ES:EDI,ESI                    ; 0058acca
    MOVSD ES:EDI,ESI                    ; 0058accb
    PUSH EAX                            ; 0058accc
    MOV EDI,dword ptr [ESP + 0x1c4]     ; 0058accd
    LEA EAX,[EBX + 0x808]               ; 0058acd4
    SHL EDI,0x4                         ; 0058acda
    ADD EAX,EDI                         ; 0058acdd
    PUSH EAX                            ; 0058acdf
    LEA ESI,[ESP + 0x180]               ; 0058ace0
    MOV dword ptr [ESP + 0x1c0],EAX     ; 0058ace7
    CALL FUN_005b7940                   ; 0058acee
        ;   XREF to: 005b7940 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7940()
    LEA EAX,[EBX + EDI*0x1]             ; 0058acf3
    MOV EDI,EAX                         ; 0058acf6
    LEA ESI,[ESP + 0x180]               ; 0058acf8
    ADD ESP,0xc                         ; 0058acff
    LEA EDI,[EDI + 0x808]               ; 0058ad02
    MOV dword ptr [ESP + 0x1b0],EAX     ; 0058ad08
    MOVSD ES:EDI,ESI                    ; 0058ad0f
    MOVSD ES:EDI,ESI                    ; 0058ad10
    MOVSD ES:EDI,ESI                    ; 0058ad11
    MOVSD ES:EDI,ESI                    ; 0058ad12
    LEA EAX,[ESP + 0x54]                ; 0058ad13
    PUSH EAX                            ; 0058ad17
    LEA EAX,[ESP + 0x28]                ; 0058ad18
    PUSH EAX                            ; 0058ad1c
    LEA EAX,[ESP + 0x1c]                ; 0058ad1d
    PUSH EAX                            ; 0058ad21
    LEA ESI,[ESP + 0x160]               ; 0058ad22
    LEA EDI,[ESP + 0xc0]                ; 0058ad29
    CALL FUN_005b77b0                   ; 0058ad30
        ;   XREF to: 005b77b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77b0()
    LEA ESI,[ESP + 0x160]               ; 0058ad35
    ADD ESP,0x8                         ; 0058ad3c
    LEA EAX,[ESP + 0xb8]                ; 0058ad3f
    MOVSD ES:EDI,ESI                    ; 0058ad46
    MOVSD ES:EDI,ESI                    ; 0058ad47
    MOVSD ES:EDI,ESI                    ; 0058ad48
    MOVSD ES:EDI,ESI                    ; 0058ad49
    PUSH EAX                            ; 0058ad4a
    LEA ESI,[ESP + 0x16c]               ; 0058ad4b
    LEA EDI,[ESP + 0xac]                ; 0058ad52
    CALL FUN_005b77b0                   ; 0058ad59
        ;   XREF to: 005b77b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77b0()
    LEA ESI,[ESP + 0x16c]               ; 0058ad5e
    ADD ESP,0x8                         ; 0058ad65
    MOVSD ES:EDI,ESI                    ; 0058ad68
    MOVSD ES:EDI,ESI                    ; 0058ad69
    MOVSD ES:EDI,ESI                    ; 0058ad6a
    MOVSD ES:EDI,ESI                    ; 0058ad6b
    PUSH 0x567360                       ; 0058ad6c | LAB_00567360
    MOV ESI,dword ptr [ESP + 0x1bc]     ; 0058ad71
    PUSH ESI                            ; 0058ad78
    LEA EAX,[ESP + 0xac]                ; 0058ad79
    PUSH dword ptr [ESP + 0x8]          ; 0058ad80
    PUSH EAX                            ; 0058ad84
    MOV EDI,dword ptr [ESP + 0x1d4]     ; 0058ad85
    PUSH EDI                            ; 0058ad8c
    CALL FUN_00568d60                   ; 0058ad8d
        ;   XREF to: 00568d60 (UNCONDITIONAL_CALL)  ; undefined FUN_00568d60()
    FLD float ptr [EBX + 0x20060]       ; 0058ad92
    ADD ESP,0x14                        ; 0058ad98
    FCOMP double ptr [0x005f6b89]       ; 0058ad9b | DAT_005f6b89
    FNSTSW AX                           ; 0058ada1
    SAHF                                ; 0058ada3
    JA 0x0058ae0c                       ; 0058ada4
        ;   XREF to: 0058ae0c (CONDITIONAL_JUMP)  ; LAB_0058ae0c
    MOV ESP,EBP                         ; 0058ada6
        ;   Label: LAB_0058ada6
    POP EBP                             ; 0058ada8
    POP EDI                             ; 0058ada9
    POP ESI                             ; 0058adaa
    POP EBX                             ; 0058adab
    RET                                 ; 0058adac
    PUSH 0x3fc90fdb                     ; 0058adad
        ;   Label: LAB_0058adad
    MOV EAX,[0x02c8360c]                ; 0058adb2 | DAT_02c8360c
    LEA ESI,[ESP + 0xc8]                ; 0058adb7
    MOV dword ptr [ESP + 0x1c0],EAX     ; 0058adbe
    MOV EAX,[0x02c83614]                ; 0058adc5 | DAT_02c83614
    LEA EDI,[ESP + 0x18]                ; 0058adca
    MOV dword ptr [ESP + 0x1bc],EAX     ; 0058adce
    CALL FUN_005b7b30                   ; 0058add5
        ;   XREF to: 005b7b30 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7b30()
    LEA ESI,[ESP + 0xc8]                ; 0058adda
    ADD ESP,0x4                         ; 0058ade1
    MOVSD ES:EDI,ESI                    ; 0058ade4
    MOVSD ES:EDI,ESI                    ; 0058ade5
    MOVSD ES:EDI,ESI                    ; 0058ade6
    MOVSD ES:EDI,ESI                    ; 0058ade7
    PUSH 0x3fc90fdb                     ; 0058ade8
    LEA ESI,[ESP + 0x38]                ; 0058aded
    LEA EDI,[ESP + 0x28]                ; 0058adf1
    CALL FUN_005b7b70                   ; 0058adf5
        ;   XREF to: 005b7b70 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7b70()
    ADD ESP,0x4                         ; 0058adfa
    LEA EAX,[EBX + 0x1ffe0]             ; 0058adfd
    LEA ESI,[ESP + 0x34]                ; 0058ae03
    JMP 0x0058ab26                      ; 0058ae07
        ;   XREF to: 0058ab26 (UNCONDITIONAL_JUMP)  ; LAB_0058ab26
    PUSH 0x3fc90fdb                     ; 0058ae0c
        ;   Label: LAB_0058ae0c
    LEA ESI,[ESP + 0x188]               ; 0058ae11
    LEA EDI,[ESP + 0xe8]                ; 0058ae18
    CALL FUN_005b7af0                   ; 0058ae1f
        ;   XREF to: 005b7af0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7af0()
    ADD ESP,0x4                         ; 0058ae24
    LEA EAX,[ESP + 0xe4]                ; 0058ae27
    LEA ESI,[ESP + 0x184]               ; 0058ae2e
    PUSH EAX                            ; 0058ae35
    LEA EAX,[ESP + 0x88]                ; 0058ae36
    MOVSD ES:EDI,ESI                    ; 0058ae3d
    MOVSD ES:EDI,ESI                    ; 0058ae3e
    MOVSD ES:EDI,ESI                    ; 0058ae3f
    MOVSD ES:EDI,ESI                    ; 0058ae40
    PUSH EAX                            ; 0058ae41
    LEA ESI,[ESP + 0x10c]               ; 0058ae42
    LEA EDI,[ESP + 0xdc]                ; 0058ae49
    CALL FUN_005b77b0                   ; 0058ae50
        ;   XREF to: 005b77b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77b0()
    LEA ESI,[ESP + 0x10c]               ; 0058ae55
    ADD ESP,0x8                         ; 0058ae5c
    MOVSD ES:EDI,ESI                    ; 0058ae5f
    MOVSD ES:EDI,ESI                    ; 0058ae60
    MOVSD ES:EDI,ESI                    ; 0058ae61
    MOVSD ES:EDI,ESI                    ; 0058ae62
    LEA EAX,[ESP + 0xd4]                ; 0058ae63
    PUSH dword ptr [EBX + 0x20060]      ; 0058ae6a
    PUSH EAX                            ; 0058ae70
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 0058ae71
    PUSH EAX                            ; 0058ae78
    LEA ESI,[ESP + 0x120]               ; 0058ae79
    CALL FUN_005b7940                   ; 0058ae80
        ;   XREF to: 005b7940 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7940()
    ADD ESP,0xc                         ; 0058ae85
    MOV EDI,dword ptr [ESP + 0x1b0]     ; 0058ae88
    LEA ESI,[ESP + 0x114]               ; 0058ae8f
    LEA EDI,[EDI + 0x808]               ; 0058ae96
    MOVSD ES:EDI,ESI                    ; 0058ae9c
    MOVSD ES:EDI,ESI                    ; 0058ae9d
    MOVSD ES:EDI,ESI                    ; 0058ae9e
    MOVSD ES:EDI,ESI                    ; 0058ae9f
    MOV ESP,EBP                         ; 0058aea0
    POP EBP                             ; 0058aea2
    POP EDI                             ; 0058aea3
    POP ESI                             ; 0058aea4
    POP EBX                             ; 0058aea5
    RET                                 ; 0058aea6

