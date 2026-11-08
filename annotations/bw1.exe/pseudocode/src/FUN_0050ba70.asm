; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050ba70(void)
;
; Local Variables:
; undefined4       Stack[-0xa68]:4  local_a68
; undefined4       Stack[-0xa64]:4  local_a64
; undefined8       Stack[-0xa60]:8  local_a60
; undefined8       Stack[-0xa58]:8  local_a58
; undefined8       Stack[-0xa50]:8  local_a50
; undefined4       Stack[-0xa48]:4  local_a48
; undefined4       Stack[-0xa44]:4  local_a44
; undefined4       Stack[-0xa40]:4  local_a40
; undefined4       Stack[-0xa3c]:4  local_a3c
; undefined        Stack[-0xa38]:1  local_a38
; undefined1       Stack[-0x678]:1  local_678
; undefined1       Stack[-0x677]:1  local_677
; undefined4       Stack[-0x570]:4  local_570
; undefined        Stack[-0x560]:1  local_560
; undefined        Stack[-0x448]:1  local_448
; undefined1       Stack[-0x447]:1  local_447
; undefined        Stack[-0x348]:1  local_348
; undefined1       Stack[-0x347]:1  local_347
; undefined        Stack[-0x248]:1  local_248
; undefined1       Stack[-0x247]:1  local_247
; undefined        Stack[-0x148]:1  local_148
; undefined1       Stack[-0x147]:1  local_147
; undefined8       Stack[-0x48]:8  local_48
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0050c990 at 0050cbe9
;
; Referenced Globals:
;   void* switchdataD_0050ba40 = 0050c312
;   undefined4 s_Sound_005e8021+1
;   TerminatedCString s_Muted_005e802b
;   undefined4 DAT_005e8031
;   TerminatedCString s_Sound_effects_005e8034
;   undefined4 DAT_005e8045
;   undefined4 DAT_005e8048
;   TerminatedCString s_Sound_effects_Off_005e804b
;   TerminatedCString s_Dialog_005e805f
;   undefined4 DAT_005e8069
;   undefined4 DAT_005e806c
;   TerminatedCString s_Dialog_Off_005e806f
;   TerminatedCString s_Music_Vol_005e807c
;   undefined4 DAT_005e8089
;   undefined4 DAT_005e808c
;   ... and 42 more
;
; Called Functions:
;   FUN_004994d0
;   FUN_0049a620
;   FUN_0049a710
;   FUN_0049a8b0
;   FUN_004cbf10
;   FUN_004cbf20
;   FUN_00509c90
;   FUN_00509e20
;   FUN_00521e40
;   FUN_00531090
;   FUN_00555770
;   FUN_005729f0
;   FUN_00572ac0
;   FUN_00572b40
;   FUN_00572d20
;   ... and 30 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050ba70
        ;   Label: FUN_0050ba70
    PUSH ESI                            ; 0050ba71
    PUSH EDI                            ; 0050ba72
    PUSH EBP                            ; 0050ba73
    MOV EBP,ESP                         ; 0050ba74
    SUB ESP,0xa50                       ; 0050ba76
    AND ESP,0xfffffff8                  ; 0050ba7c
    MOV ECX,dword ptr [0x0061d95c]      ; 0050ba7f | DAT_0061d95c
    XOR EDX,EDX                         ; 0050ba85
    PUSH ECX                            ; 0050ba87
    MOV dword ptr [ESP + 0xa24],EDX     ; 0050ba88
    CALL FUN_004cbf10                   ; 0050ba8f
        ;   XREF to: 004cbf10 (UNCONDITIONAL_CALL)  ; undefined FUN_004cbf10()
    MOV EDX,0x1d20008                   ; 0050ba94
    ADD ESP,0x4                         ; 0050ba99
    XOR EAX,EAX                         ; 0050ba9c
    MOV dword ptr [EAX + 0x1d20a08],EDX ; 0050ba9e
        ;   Label: LAB_0050ba9e
    ADD EAX,0x4                         ; 0050baa4
    ADD EDX,0x100                       ; 0050baa7
    CMP EAX,0x28                        ; 0050baad
    JNZ 0x0050ba9e                      ; 0050bab0
        ;   XREF to: 0050ba9e (CONDITIONAL_JUMP)  ; LAB_0050ba9e
    MOV EBX,dword ptr [0x0061d95c]      ; 0050bab2 | DAT_0061d95c
        ;   Label: LAB_0050bab2
    PUSH EBX                            ; 0050bab8
    CALL FUN_004cbf20                   ; 0050bab9
        ;   XREF to: 004cbf20 (UNCONDITIONAL_CALL)  ; undefined FUN_004cbf20()
    ADD ESP,0x4                         ; 0050babe
    PUSH 0x10000                        ; 0050bac1
    PUSH 0xc350                         ; 0050bac6
    PUSH 0xc350                         ; 0050bacb
    MOV EAX,[0x00622c18]                ; 0050bad0 | DAT_00622c18
    PUSH EAX                            ; 0050bad5
    MOV dword ptr [EAX + 0x15ae84],0x1  ; 0050bad6 | DAT_01fdcfec
    CALL FUN_00555770                   ; 0050bae0
        ;   XREF to: 00555770 (UNCONDITIONAL_CALL)  ; undefined FUN_00555770()
    ADD ESP,0x10                        ; 0050bae5
    MOV EAX,[0x00622c18]                ; 0050bae8 | DAT_00622c18
    PUSH 0x1d1e380                      ; 0050baed
    MOV dword ptr [EAX + 0x15ae94],0xdac ; 0050baf2 | DAT_01fdcffc
    CALL FUN_00521e40                   ; 0050bafc
        ;   XREF to: 00521e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00521e40()
    ADD ESP,0x4                         ; 0050bb01
    XOR ESI,ESI                         ; 0050bb04
    MOV EAX,[0x00622c18]                ; 0050bb06 | DAT_00622c18
    PUSH 0x5e8022                       ; 0050bb0b | s_Sound_005e8021+1
    MOV dword ptr [ESP + 0xa38],ESI     ; 0050bb10
    MOV dword ptr [EAX + 0x15ae84],0x0  ; 0050bb17 | DAT_01fdcfec
    CALL FUN_00531090                   ; 0050bb21
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050bb26
    MOV EDI,0x1d20008                   ; 0050bb29
    MOV ESI,EAX                         ; 0050bb2e
    PUSH EDI                            ; 0050bb30
    MOV AL,byte ptr [ESI]               ; 0050bb31
        ;   Label: LAB_0050bb31
    MOV byte ptr [EDI],AL               ; 0050bb33 | DAT_01d20008 | DAT_01d2000a
    CMP AL,0x0                          ; 0050bb35
    JZ 0x0050bb49                       ; 0050bb37
        ;   XREF to: 0050bb49 (CONDITIONAL_JUMP)  ; LAB_0050bb49
    MOV AL,byte ptr [ESI + 0x1]         ; 0050bb39
    ADD ESI,0x2                         ; 0050bb3c
    MOV byte ptr [EDI + 0x1],AL         ; 0050bb3f | DAT_01d20009 | DAT_01d2000b
    ADD EDI,0x2                         ; 0050bb42
    CMP AL,0x0                          ; 0050bb45
    JNZ 0x0050bb31                      ; 0050bb47
        ;   XREF to: 0050bb31 (CONDITIONAL_JUMP)  ; LAB_0050bb31
    POP EDI                             ; 0050bb49
        ;   Label: LAB_0050bb49
    CALL FUN_005735f0                   ; 0050bb4a
        ;   XREF to: 005735f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005735f0()
    TEST EAX,EAX                        ; 0050bb4f
    JNZ 0x0050c360                      ; 0050bb51
        ;   XREF to: 0050c360 (CONDITIONAL_JUMP)  ; LAB_0050c360
    PUSH 0x5e8031                       ; 0050bb57 | DAT_005e8031
    CALL FUN_00531090                   ; 0050bb5c
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
        ;   Label: LAB_0050bb5c
    ADD ESP,0x4                         ; 0050bb61
    MOV ESI,EAX                         ; 0050bb64
    PUSH EDI                            ; 0050bb66 | DAT_01d20008
    SUB ECX,ECX                         ; 0050bb67
    DEC ECX                             ; 0050bb69
    MOV AL,0x0                          ; 0050bb6a
    SCASB.REPNE ES:EDI                  ; 0050bb6c | DAT_01d20008 | DAT_01d20009
    DEC EDI                             ; 0050bb6e
    MOV AL,byte ptr [ESI]               ; 0050bb6f
        ;   Label: LAB_0050bb6f
    MOV byte ptr [EDI],AL               ; 0050bb71 | DAT_01d20008 | DAT_01d2000a | DAT_01d20009
    CMP AL,0x0                          ; 0050bb73
    JZ 0x0050bb87                       ; 0050bb75
        ;   XREF to: 0050bb87 (CONDITIONAL_JUMP)  ; LAB_0050bb87
    MOV AL,byte ptr [ESI + 0x1]         ; 0050bb77
    ADD ESI,0x2                         ; 0050bb7a
    MOV byte ptr [EDI + 0x1],AL         ; 0050bb7d | DAT_01d20009 | DAT_01d2000b | DAT_01d2000a
    ADD EDI,0x2                         ; 0050bb80
    CMP AL,0x0                          ; 0050bb83
    JNZ 0x0050bb6f                      ; 0050bb85
        ;   XREF to: 0050bb6f (CONDITIONAL_JUMP)  ; LAB_0050bb6f
    POP EDI                             ; 0050bb87
        ;   Label: LAB_0050bb87
    MOV EDI,dword ptr [ESP + 0xa34]     ; 0050bb88
    PUSH 0x0                            ; 0050bb8f
    INC EDI                             ; 0050bb91
    CALL FUN_00573cd0                   ; 0050bb92
        ;   XREF to: 00573cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00573cd0()
    MOV dword ptr [ESP + 0xa38],EDI     ; 0050bb97
    MOV EBX,EDI                         ; 0050bb9e
    ADD ESP,0x4                         ; 0050bba0
    SHL EBX,0x8                         ; 0050bba3
    LEA EDX,[EDI + 0x1]                 ; 0050bba6
    ADD EBX,0x1d20008                   ; 0050bba9
    MOV dword ptr [ESP + 0xa24],EDX     ; 0050bbaf
    TEST EAX,EAX                        ; 0050bbb6
    JZ 0x0050c36a                       ; 0050bbb8
        ;   XREF to: 0050c36a (CONDITIONAL_JUMP)  ; LAB_0050c36a
    PUSH 0x5e8034                       ; 0050bbbe | = "Sound effects : "
    CALL FUN_00531090                   ; 0050bbc3
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050bbc8
    PUSH EAX                            ; 0050bbcb
    PUSH EBX                            ; 0050bbcc
    CALL FUN_005bfb40                   ; 0050bbcd
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x8                         ; 0050bbd2
    PUSH 0x0                            ; 0050bbd5
    CALL FUN_00573bc0                   ; 0050bbd7
        ;   XREF to: 00573bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00573bc0()
    MOV dword ptr [ESP + 0xa50],EAX     ; 0050bbdc
    FLD float ptr [ESP + 0xa50]         ; 0050bbe3
    FMUL float ptr [0x005e815e]         ; 0050bbea | DAT_005e815e
    FDIV float ptr [0x00603974]         ; 0050bbf0 | DAT_00603974
    FADD double ptr [0x005e816a]        ; 0050bbf6 | DAT_005e816a
    ADD ESP,0x4                         ; 0050bbfc
    CALL FUN_005c03a0                   ; 0050bbff
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0xa4c]       ; 0050bc04
    MOV EAX,dword ptr [ESP + 0xa4c]     ; 0050bc0b
    PUSH EAX                            ; 0050bc12
    PUSH 0x5e8045                       ; 0050bc13 | DAT_005e8045
    LEA EAX,[ESP + 0x820]               ; 0050bc18
    PUSH EAX                            ; 0050bc1f
    CALL FUN_005bfb40                   ; 0050bc20
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0xc                         ; 0050bc25
    LEA ESI,[ESP + 0x818]               ; 0050bc28
    MOV EDI,EBX                         ; 0050bc2f
    PUSH EDI                            ; 0050bc31
    SUB ECX,ECX                         ; 0050bc32
    DEC ECX                             ; 0050bc34
    MOV AL,0x0                          ; 0050bc35
    SCASB.REPNE ES:EDI                  ; 0050bc37 | DAT_01d20008 | DAT_01d20009
    DEC EDI                             ; 0050bc39
    MOV AL,byte ptr [ESI]               ; 0050bc3a
        ;   Label: LAB_0050bc3a
    MOV byte ptr [EDI],AL               ; 0050bc3c | DAT_01d20008 | DAT_01d20009
    CMP AL,0x0                          ; 0050bc3e
    JZ 0x0050bc52                       ; 0050bc40
        ;   XREF to: 0050bc52 (CONDITIONAL_JUMP)  ; LAB_0050bc52
    MOV AL,byte ptr [ESI + 0x1]         ; 0050bc42
    ADD ESI,0x2                         ; 0050bc45
    MOV byte ptr [EDI + 0x1],AL         ; 0050bc48 | DAT_01d20009
    ADD EDI,0x2                         ; 0050bc4b
    CMP AL,0x0                          ; 0050bc4e
    JNZ 0x0050bc3a                      ; 0050bc50
        ;   XREF to: 0050bc3a (CONDITIONAL_JUMP)  ; LAB_0050bc3a
    POP EDI                             ; 0050bc52
        ;   Label: LAB_0050bc52
    PUSH 0x5e8048                       ; 0050bc53 | DAT_005e8048
    CALL FUN_00531090                   ; 0050bc58
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050bc5d
    MOV ESI,EAX                         ; 0050bc60
    PUSH EDI                            ; 0050bc62
    SUB ECX,ECX                         ; 0050bc63
    DEC ECX                             ; 0050bc65
    MOV AL,0x0                          ; 0050bc66
    SCASB.REPNE ES:EDI                  ; 0050bc68 | DAT_01d20008 | DAT_01d20009
    DEC EDI                             ; 0050bc6a
    MOV AL,byte ptr [ESI]               ; 0050bc6b
        ;   Label: LAB_0050bc6b
    MOV byte ptr [EDI],AL               ; 0050bc6d | DAT_01d20008 | DAT_01d20009
    CMP AL,0x0                          ; 0050bc6f
    JZ 0x0050bc83                       ; 0050bc71
        ;   XREF to: 0050bc83 (CONDITIONAL_JUMP)  ; LAB_0050bc83
    MOV AL,byte ptr [ESI + 0x1]         ; 0050bc73
    ADD ESI,0x2                         ; 0050bc76
    MOV byte ptr [EDI + 0x1],AL         ; 0050bc79 | DAT_01d20009
    ADD EDI,0x2                         ; 0050bc7c
    CMP AL,0x0                          ; 0050bc7f
    JNZ 0x0050bc6b                      ; 0050bc81
        ;   XREF to: 0050bc6b (CONDITIONAL_JUMP)  ; LAB_0050bc6b
    POP EDI                             ; 0050bc83
        ;   Label: LAB_0050bc83
    MOV ESI,dword ptr [ESP + 0xa24]     ; 0050bc84
    PUSH 0x2                            ; 0050bc8b
        ;   Label: LAB_0050bc8b
    CALL FUN_00573cd0                   ; 0050bc8d
        ;   XREF to: 00573cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00573cd0()
    MOV EBX,ESI                         ; 0050bc92
    ADD ESP,0x4                         ; 0050bc94
    SHL EBX,0x8                         ; 0050bc97
    INC ESI                             ; 0050bc9a
    ADD EBX,0x1d20008                   ; 0050bc9b
    MOV dword ptr [ESP + 0xa30],ESI     ; 0050bca1
    TEST EAX,EAX                        ; 0050bca8
    JZ 0x0050c38d                       ; 0050bcaa
        ;   XREF to: 0050c38d (CONDITIONAL_JUMP)  ; LAB_0050c38d
    PUSH 0x5e805f                       ; 0050bcb0 | = "Dialog : "
    CALL FUN_00531090                   ; 0050bcb5
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050bcba
    MOV EDI,EBX                         ; 0050bcbd
    MOV ESI,EAX                         ; 0050bcbf
    PUSH EDI                            ; 0050bcc1
    MOV AL,byte ptr [ESI]               ; 0050bcc2
        ;   Label: LAB_0050bcc2
    MOV byte ptr [EDI],AL               ; 0050bcc4 | DAT_01d20008
    CMP AL,0x0                          ; 0050bcc6
    JZ 0x0050bcda                       ; 0050bcc8
        ;   XREF to: 0050bcda (CONDITIONAL_JUMP)  ; LAB_0050bcda
    MOV AL,byte ptr [ESI + 0x1]         ; 0050bcca
    ADD ESI,0x2                         ; 0050bccd
    MOV byte ptr [EDI + 0x1],AL         ; 0050bcd0 | DAT_01d20009
    ADD EDI,0x2                         ; 0050bcd3
    CMP AL,0x0                          ; 0050bcd6
    JNZ 0x0050bcc2                      ; 0050bcd8
        ;   XREF to: 0050bcc2 (CONDITIONAL_JUMP)  ; LAB_0050bcc2
    POP EDI                             ; 0050bcda
        ;   Label: LAB_0050bcda
    PUSH 0x2                            ; 0050bcdb
    CALL FUN_00573bc0                   ; 0050bcdd
        ;   XREF to: 00573bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00573bc0()
    MOV dword ptr [ESP + 0xa50],EAX     ; 0050bce2
    FLD float ptr [ESP + 0xa50]         ; 0050bce9
    FMUL float ptr [0x005e815e]         ; 0050bcf0 | DAT_005e815e
    FDIV float ptr [0x00603978]         ; 0050bcf6 | DAT_00603978
    FADD double ptr [0x005e816a]        ; 0050bcfc | DAT_005e816a
    ADD ESP,0x4                         ; 0050bd02
    CALL FUN_005c03a0                   ; 0050bd05
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0xa4c]       ; 0050bd0a
    MOV EDX,dword ptr [ESP + 0xa4c]     ; 0050bd11
    PUSH EDX                            ; 0050bd18
    PUSH 0x5e8069                       ; 0050bd19 | DAT_005e8069
    LEA EAX,[ESP + 0x920]               ; 0050bd1e
    PUSH EAX                            ; 0050bd25
    CALL FUN_005bfb40                   ; 0050bd26
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0xc                         ; 0050bd2b
    LEA ESI,[ESP + 0x918]               ; 0050bd2e
    PUSH EDI                            ; 0050bd35
    SUB ECX,ECX                         ; 0050bd36
    DEC ECX                             ; 0050bd38
    MOV AL,0x0                          ; 0050bd39
    SCASB.REPNE ES:EDI                  ; 0050bd3b | DAT_01d20008 | DAT_01d20009
    DEC EDI                             ; 0050bd3d
    MOV AL,byte ptr [ESI]               ; 0050bd3e
        ;   Label: LAB_0050bd3e
    MOV byte ptr [EDI],AL               ; 0050bd40 | DAT_01d20008 | DAT_01d20009
    CMP AL,0x0                          ; 0050bd42
    JZ 0x0050bd56                       ; 0050bd44
        ;   XREF to: 0050bd56 (CONDITIONAL_JUMP)  ; LAB_0050bd56
    MOV AL,byte ptr [ESI + 0x1]         ; 0050bd46
    ADD ESI,0x2                         ; 0050bd49
    MOV byte ptr [EDI + 0x1],AL         ; 0050bd4c | DAT_01d20009
    ADD EDI,0x2                         ; 0050bd4f
    CMP AL,0x0                          ; 0050bd52
    JNZ 0x0050bd3e                      ; 0050bd54
        ;   XREF to: 0050bd3e (CONDITIONAL_JUMP)  ; LAB_0050bd3e
    POP EDI                             ; 0050bd56
        ;   Label: LAB_0050bd56
    PUSH 0x5e806c                       ; 0050bd57 | DAT_005e806c
    CALL FUN_00531090                   ; 0050bd5c
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050bd61
    MOV ESI,EAX                         ; 0050bd64
    PUSH EDI                            ; 0050bd66
    SUB ECX,ECX                         ; 0050bd67
    DEC ECX                             ; 0050bd69
    MOV AL,0x0                          ; 0050bd6a
    SCASB.REPNE ES:EDI                  ; 0050bd6c | DAT_01d20008 | DAT_01d20009
    DEC EDI                             ; 0050bd6e
    MOV AL,byte ptr [ESI]               ; 0050bd6f
        ;   Label: LAB_0050bd6f
    MOV byte ptr [EDI],AL               ; 0050bd71 | DAT_01d20008 | DAT_01d20009
    CMP AL,0x0                          ; 0050bd73
    JZ 0x0050bd87                       ; 0050bd75
        ;   XREF to: 0050bd87 (CONDITIONAL_JUMP)  ; LAB_0050bd87
    MOV AL,byte ptr [ESI + 0x1]         ; 0050bd77
    ADD ESI,0x2                         ; 0050bd7a
    MOV byte ptr [EDI + 0x1],AL         ; 0050bd7d | DAT_01d20009
    ADD EDI,0x2                         ; 0050bd80
    CMP AL,0x0                          ; 0050bd83
    JNZ 0x0050bd6f                      ; 0050bd85
        ;   XREF to: 0050bd6f (CONDITIONAL_JUMP)  ; LAB_0050bd6f
    POP EDI                             ; 0050bd87
        ;   Label: LAB_0050bd87
    MOV ESI,dword ptr [ESP + 0xa30]     ; 0050bd88
    PUSH 0x1                            ; 0050bd8f
        ;   Label: LAB_0050bd8f
    CALL FUN_00573cd0                   ; 0050bd91
        ;   XREF to: 00573cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00573cd0()
    MOV EBX,ESI                         ; 0050bd96
    ADD ESP,0x4                         ; 0050bd98
    SHL EBX,0x8                         ; 0050bd9b
    INC ESI                             ; 0050bd9e
    ADD EBX,0x1d20008                   ; 0050bd9f
    MOV dword ptr [ESP + 0xa2c],ESI     ; 0050bda5
    TEST EAX,EAX                        ; 0050bdac
    JZ 0x0050c3a9                       ; 0050bdae
        ;   XREF to: 0050c3a9 (CONDITIONAL_JUMP)  ; LAB_0050c3a9
    PUSH 0x5e807c                       ; 0050bdb4 | = "Music Vol : "
    CALL FUN_00531090                   ; 0050bdb9
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050bdbe
    MOV EDI,EBX                         ; 0050bdc1
    MOV ESI,EAX                         ; 0050bdc3
    PUSH EDI                            ; 0050bdc5
    MOV AL,byte ptr [ESI]               ; 0050bdc6
        ;   Label: LAB_0050bdc6
    MOV byte ptr [EDI],AL               ; 0050bdc8 | DAT_01d20008
    CMP AL,0x0                          ; 0050bdca
    JZ 0x0050bdde                       ; 0050bdcc
        ;   XREF to: 0050bdde (CONDITIONAL_JUMP)  ; LAB_0050bdde
    MOV AL,byte ptr [ESI + 0x1]         ; 0050bdce
    ADD ESI,0x2                         ; 0050bdd1
    MOV byte ptr [EDI + 0x1],AL         ; 0050bdd4 | DAT_01d20009
    ADD EDI,0x2                         ; 0050bdd7
    CMP AL,0x0                          ; 0050bdda
    JNZ 0x0050bdc6                      ; 0050bddc
        ;   XREF to: 0050bdc6 (CONDITIONAL_JUMP)  ; LAB_0050bdc6
    POP EDI                             ; 0050bdde
        ;   Label: LAB_0050bdde
    PUSH 0x1                            ; 0050bddf
    CALL FUN_00573bc0                   ; 0050bde1
        ;   XREF to: 00573bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00573bc0()
    MOV dword ptr [ESP + 0xa50],EAX     ; 0050bde6
    FLD float ptr [ESP + 0xa50]         ; 0050bded
    FMUL float ptr [0x005e815e]         ; 0050bdf4 | DAT_005e815e
    FDIV float ptr [0x00603970]         ; 0050bdfa | DAT_00603970
    FADD double ptr [0x005e816a]        ; 0050be00 | DAT_005e816a
    ADD ESP,0x4                         ; 0050be06
    CALL FUN_005c03a0                   ; 0050be09
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0xa4c]       ; 0050be0e
    MOV ECX,dword ptr [ESP + 0xa4c]     ; 0050be15
    PUSH ECX                            ; 0050be1c
    PUSH 0x5e8089                       ; 0050be1d | DAT_005e8089
    LEA EAX,[ESP + 0x620]               ; 0050be22
    PUSH EAX                            ; 0050be29
    CALL FUN_005bfb40                   ; 0050be2a
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0xc                         ; 0050be2f
    LEA ESI,[ESP + 0x618]               ; 0050be32
    PUSH EDI                            ; 0050be39
    SUB ECX,ECX                         ; 0050be3a
    DEC ECX                             ; 0050be3c
    MOV AL,0x0                          ; 0050be3d
    SCASB.REPNE ES:EDI                  ; 0050be3f | DAT_01d20008 | DAT_01d20009
    DEC EDI                             ; 0050be41
    MOV AL,byte ptr [ESI]               ; 0050be42
        ;   Label: LAB_0050be42
    MOV byte ptr [EDI],AL               ; 0050be44 | DAT_01d20008 | DAT_01d20009
    CMP AL,0x0                          ; 0050be46
    JZ 0x0050be5a                       ; 0050be48
        ;   XREF to: 0050be5a (CONDITIONAL_JUMP)  ; LAB_0050be5a
    MOV AL,byte ptr [ESI + 0x1]         ; 0050be4a
    ADD ESI,0x2                         ; 0050be4d
    MOV byte ptr [EDI + 0x1],AL         ; 0050be50 | DAT_01d20009
    ADD EDI,0x2                         ; 0050be53
    CMP AL,0x0                          ; 0050be56
    JNZ 0x0050be42                      ; 0050be58
        ;   XREF to: 0050be42 (CONDITIONAL_JUMP)  ; LAB_0050be42
    POP EDI                             ; 0050be5a
        ;   Label: LAB_0050be5a
    PUSH 0x5e808c                       ; 0050be5b | DAT_005e808c
    CALL FUN_00531090                   ; 0050be60
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050be65
    MOV ESI,EAX                         ; 0050be68
    PUSH EDI                            ; 0050be6a
    SUB ECX,ECX                         ; 0050be6b
    DEC ECX                             ; 0050be6d
    MOV AL,0x0                          ; 0050be6e
    SCASB.REPNE ES:EDI                  ; 0050be70 | DAT_01d20008 | DAT_01d20009
    DEC EDI                             ; 0050be72
    MOV AL,byte ptr [ESI]               ; 0050be73
        ;   Label: LAB_0050be73
    MOV byte ptr [EDI],AL               ; 0050be75 | DAT_01d20008 | DAT_01d20009
    CMP AL,0x0                          ; 0050be77
    JZ 0x0050be8b                       ; 0050be79
        ;   XREF to: 0050be8b (CONDITIONAL_JUMP)  ; LAB_0050be8b
    MOV AL,byte ptr [ESI + 0x1]         ; 0050be7b
    ADD ESI,0x2                         ; 0050be7e
    MOV byte ptr [EDI + 0x1],AL         ; 0050be81 | DAT_01d20009
    ADD EDI,0x2                         ; 0050be84
    CMP AL,0x0                          ; 0050be87
    JNZ 0x0050be73                      ; 0050be89
        ;   XREF to: 0050be73 (CONDITIONAL_JUMP)  ; LAB_0050be73
    POP EDI                             ; 0050be8b
        ;   Label: LAB_0050be8b
    MOV EAX,dword ptr [ESP + 0xa2c]     ; 0050be8c
    MOV dword ptr [ESP + 0xa3c],EAX     ; 0050be93
    PUSH 0x5e809f                       ; 0050be9a | = "Output rate : "
        ;   Label: LAB_0050be9a
    CALL FUN_00531090                   ; 0050be9f
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050bea4
    MOV EDI,dword ptr [ESP + 0xa3c]     ; 0050bea7
    SHL EDI,0x8                         ; 0050beae
    MOV ESI,EAX                         ; 0050beb1
    ADD EDI,0x1d20008                   ; 0050beb3
    PUSH EDI                            ; 0050beb9
    MOV AL,byte ptr [ESI]               ; 0050beba
        ;   Label: LAB_0050beba
    MOV byte ptr [EDI],AL               ; 0050bebc | DAT_01d20008
    CMP AL,0x0                          ; 0050bebe
    JZ 0x0050bed2                       ; 0050bec0
        ;   XREF to: 0050bed2 (CONDITIONAL_JUMP)  ; LAB_0050bed2
    MOV AL,byte ptr [ESI + 0x1]         ; 0050bec2
    ADD ESI,0x2                         ; 0050bec5
    MOV byte ptr [EDI + 0x1],AL         ; 0050bec8 | DAT_01d20009
    ADD EDI,0x2                         ; 0050becb
    CMP AL,0x0                          ; 0050bece
    JNZ 0x0050beba                      ; 0050bed0
        ;   XREF to: 0050beba (CONDITIONAL_JUMP)  ; LAB_0050beba
    POP EDI                             ; 0050bed2
        ;   Label: LAB_0050bed2
    CALL FUN_00575220                   ; 0050bed3
        ;   XREF to: 00575220 (UNCONDITIONAL_CALL)  ; undefined FUN_00575220()
    PUSH EAX                            ; 0050bed8
    PUSH 0x5e80ae                       ; 0050bed9 | DAT_005e80ae
    LEA EAX,[ESP + 0x720]               ; 0050bede
    PUSH EAX                            ; 0050bee5
    CALL FUN_005bfb40                   ; 0050bee6
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0xc                         ; 0050beeb
    LEA ESI,[ESP + 0x718]               ; 0050beee
    PUSH EDI                            ; 0050bef5
    SUB ECX,ECX                         ; 0050bef6
    DEC ECX                             ; 0050bef8
    MOV AL,0x0                          ; 0050bef9
    SCASB.REPNE ES:EDI                  ; 0050befb | DAT_01d20008 | DAT_01d20009
    DEC EDI                             ; 0050befd
    MOV AL,byte ptr [ESI]               ; 0050befe
        ;   Label: LAB_0050befe
    MOV byte ptr [EDI],AL               ; 0050bf00 | DAT_01d20008 | DAT_01d20009
    CMP AL,0x0                          ; 0050bf02
    JZ 0x0050bf16                       ; 0050bf04
        ;   XREF to: 0050bf16 (CONDITIONAL_JUMP)  ; LAB_0050bf16
    MOV AL,byte ptr [ESI + 0x1]         ; 0050bf06
    ADD ESI,0x2                         ; 0050bf09
    MOV byte ptr [EDI + 0x1],AL         ; 0050bf0c | DAT_01d20009
    ADD EDI,0x2                         ; 0050bf0f
    CMP AL,0x0                          ; 0050bf12
    JNZ 0x0050befe                      ; 0050bf14
        ;   XREF to: 0050befe (CONDITIONAL_JUMP)  ; LAB_0050befe
    POP EDI                             ; 0050bf16
        ;   Label: LAB_0050bf16
    PUSH 0x5e80b1                       ; 0050bf17 | DAT_005e80b1
    CALL FUN_00531090                   ; 0050bf1c
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050bf21
    MOV ESI,EAX                         ; 0050bf24
    PUSH EDI                            ; 0050bf26
    SUB ECX,ECX                         ; 0050bf27
    DEC ECX                             ; 0050bf29
    MOV AL,0x0                          ; 0050bf2a
    SCASB.REPNE ES:EDI                  ; 0050bf2c | DAT_01d20008 | DAT_01d20009
    DEC EDI                             ; 0050bf2e
    MOV AL,byte ptr [ESI]               ; 0050bf2f
        ;   Label: LAB_0050bf2f
    MOV byte ptr [EDI],AL               ; 0050bf31 | DAT_01d20008 | DAT_01d20009
    CMP AL,0x0                          ; 0050bf33
    JZ 0x0050bf47                       ; 0050bf35
        ;   XREF to: 0050bf47 (CONDITIONAL_JUMP)  ; LAB_0050bf47
    MOV AL,byte ptr [ESI + 0x1]         ; 0050bf37
    ADD ESI,0x2                         ; 0050bf3a
    MOV byte ptr [EDI + 0x1],AL         ; 0050bf3d | DAT_01d20009
    ADD EDI,0x2                         ; 0050bf40
    CMP AL,0x0                          ; 0050bf43
    JNZ 0x0050bf2f                      ; 0050bf45
        ;   XREF to: 0050bf2f (CONDITIONAL_JUMP)  ; LAB_0050bf2f
    POP EDI                             ; 0050bf47
        ;   Label: LAB_0050bf47
    MOV EBX,dword ptr [ESP + 0xa3c]     ; 0050bf48
    PUSH 0x5e80b4                       ; 0050bf4f | = "Output quality : "
    INC EBX                             ; 0050bf54
    CALL FUN_00531090                   ; 0050bf55
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    MOV dword ptr [ESP + 0xa40],EBX     ; 0050bf5a
    MOV EDI,EBX                         ; 0050bf61
    ADD ESP,0x4                         ; 0050bf63
    SHL EDI,0x8                         ; 0050bf66
    MOV ESI,EAX                         ; 0050bf69
    ADD EDI,0x1d20008                   ; 0050bf6b
    PUSH EDI                            ; 0050bf71
    MOV AL,byte ptr [ESI]               ; 0050bf72
        ;   Label: LAB_0050bf72
    MOV byte ptr [EDI],AL               ; 0050bf74 | DAT_01d20008
    CMP AL,0x0                          ; 0050bf76
    JZ 0x0050bf8a                       ; 0050bf78
        ;   XREF to: 0050bf8a (CONDITIONAL_JUMP)  ; LAB_0050bf8a
    MOV AL,byte ptr [ESI + 0x1]         ; 0050bf7a
    ADD ESI,0x2                         ; 0050bf7d
    MOV byte ptr [EDI + 0x1],AL         ; 0050bf80 | DAT_01d20009
    ADD EDI,0x2                         ; 0050bf83
    CMP AL,0x0                          ; 0050bf86
    JNZ 0x0050bf72                      ; 0050bf88
        ;   XREF to: 0050bf72 (CONDITIONAL_JUMP)  ; LAB_0050bf72
    POP EDI                             ; 0050bf8a
        ;   Label: LAB_0050bf8a
    CALL FUN_00575200                   ; 0050bf8b
        ;   XREF to: 00575200 (UNCONDITIONAL_CALL)  ; undefined FUN_00575200()
    PUSH EAX                            ; 0050bf90
    PUSH 0x5e80c6                       ; 0050bf91 | DAT_005e80c6
    LEA EAX,[ESP + 0x720]               ; 0050bf96
    PUSH EAX                            ; 0050bf9d
    CALL FUN_005bfb40                   ; 0050bf9e
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0xc                         ; 0050bfa3
    LEA ESI,[ESP + 0x718]               ; 0050bfa6
    PUSH EDI                            ; 0050bfad
    SUB ECX,ECX                         ; 0050bfae
    DEC ECX                             ; 0050bfb0
    MOV AL,0x0                          ; 0050bfb1
    SCASB.REPNE ES:EDI                  ; 0050bfb3 | DAT_01d20008 | DAT_01d20009
    DEC EDI                             ; 0050bfb5
    MOV AL,byte ptr [ESI]               ; 0050bfb6
        ;   Label: LAB_0050bfb6
    MOV byte ptr [EDI],AL               ; 0050bfb8 | DAT_01d20008 | DAT_01d20009
    CMP AL,0x0                          ; 0050bfba
    JZ 0x0050bfce                       ; 0050bfbc
        ;   XREF to: 0050bfce (CONDITIONAL_JUMP)  ; LAB_0050bfce
    MOV AL,byte ptr [ESI + 0x1]         ; 0050bfbe
    ADD ESI,0x2                         ; 0050bfc1
    MOV byte ptr [EDI + 0x1],AL         ; 0050bfc4 | DAT_01d20009
    ADD EDI,0x2                         ; 0050bfc7
    CMP AL,0x0                          ; 0050bfca
    JNZ 0x0050bfb6                      ; 0050bfcc
        ;   XREF to: 0050bfb6 (CONDITIONAL_JUMP)  ; LAB_0050bfb6
    POP EDI                             ; 0050bfce
        ;   Label: LAB_0050bfce
    PUSH 0x5e80c9                       ; 0050bfcf | DAT_005e80c9
    CALL FUN_00531090                   ; 0050bfd4
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050bfd9
    MOV ESI,EAX                         ; 0050bfdc
    PUSH EDI                            ; 0050bfde
    SUB ECX,ECX                         ; 0050bfdf
    DEC ECX                             ; 0050bfe1
    MOV AL,0x0                          ; 0050bfe2
    SCASB.REPNE ES:EDI                  ; 0050bfe4 | DAT_01d20008 | DAT_01d20009
    DEC EDI                             ; 0050bfe6
    MOV AL,byte ptr [ESI]               ; 0050bfe7
        ;   Label: LAB_0050bfe7
    MOV byte ptr [EDI],AL               ; 0050bfe9 | DAT_01d20008 | DAT_01d20009
    CMP AL,0x0                          ; 0050bfeb
    JZ 0x0050bfff                       ; 0050bfed
        ;   XREF to: 0050bfff (CONDITIONAL_JUMP)  ; LAB_0050bfff
    MOV AL,byte ptr [ESI + 0x1]         ; 0050bfef
    ADD ESI,0x2                         ; 0050bff2
    MOV byte ptr [EDI + 0x1],AL         ; 0050bff5 | DAT_01d20009
    ADD EDI,0x2                         ; 0050bff8
    CMP AL,0x0                          ; 0050bffb
    JNZ 0x0050bfe7                      ; 0050bffd
        ;   XREF to: 0050bfe7 (CONDITIONAL_JUMP)  ; LAB_0050bfe7
    POP EDI                             ; 0050bfff
        ;   Label: LAB_0050bfff
    LEA ESI,[EBX + 0x1]                 ; 0050c000
    CALL FUN_00575240                   ; 0050c003
        ;   XREF to: 00575240 (UNCONDITIONAL_CALL)  ; undefined FUN_00575240()
    MOV dword ptr [ESP + 0xa3c],ESI     ; 0050c008
    CMP EAX,0x1                         ; 0050c00f
    JNC 0x0050c3f4                      ; 0050c012
        ;   XREF to: 0050c3f4 (CONDITIONAL_JUMP)  ; LAB_0050c3f4
    PUSH 0x5e80cd                       ; 0050c018 | = "Output type : MONO"
        ;   Label: LAB_0050c018
    CALL FUN_00531090                   ; 0050c01d
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050c022
    PUSH EAX                            ; 0050c025
    MOV EAX,dword ptr [ESP + 0xa40]     ; 0050c026
    SHL EAX,0x8                         ; 0050c02d
    MOV EDX,dword ptr [ESP + 0xa40]     ; 0050c030
    ADD EAX,0x1d20008                   ; 0050c037
    INC EDX                             ; 0050c03c
    PUSH EAX                            ; 0050c03d
    MOV dword ptr [ESP + 0xa44],EDX     ; 0050c03e
    CALL FUN_005bfb40                   ; 0050c045
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
        ;   Label: LAB_0050c045
    ADD ESP,0x8                         ; 0050c04a
    CALL FUN_005756d0                   ; 0050c04d
        ;   XREF to: 005756d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005756d0()
    MOV EBX,EAX                         ; 0050c052
    TEST EAX,EAX                        ; 0050c054
    JL 0x0050c065                       ; 0050c056
        ;   XREF to: 0050c065 (CONDITIONAL_JUMP)  ; LAB_0050c065
    CALL FUN_005752c0                   ; 0050c058
        ;   XREF to: 005752c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005752c0()
    CMP EBX,EAX                         ; 0050c05d
    JL 0x0050c404                       ; 0050c05f
        ;   XREF to: 0050c404 (CONDITIONAL_JUMP)  ; LAB_0050c404
    XOR ECX,ECX                         ; 0050c065
        ;   Label: LAB_0050c065
    XOR AH,AH                           ; 0050c067
    MOV dword ptr [ESP + 0x4f0],ECX     ; 0050c069
    MOV byte ptr [ESP + 0x3e8],AH       ; 0050c070
    PUSH 0x5e80f5                       ; 0050c077 | = "Device : "
        ;   Label: LAB_0050c077
    CALL FUN_00531090                   ; 0050c07c
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050c081
    MOV EDI,dword ptr [ESP + 0xa3c]     ; 0050c084
    SHL EDI,0x8                         ; 0050c08b
    MOV ESI,EAX                         ; 0050c08e
    ADD EDI,0x1d20008                   ; 0050c090
    MOV EBX,dword ptr [ESP + 0xa3c]     ; 0050c096
    PUSH EDI                            ; 0050c09d
    MOV AL,byte ptr [ESI]               ; 0050c09e
        ;   Label: LAB_0050c09e
    MOV byte ptr [EDI],AL               ; 0050c0a0 | DAT_01d20008
    CMP AL,0x0                          ; 0050c0a2
    JZ 0x0050c0b6                       ; 0050c0a4
        ;   XREF to: 0050c0b6 (CONDITIONAL_JUMP)  ; LAB_0050c0b6
    MOV AL,byte ptr [ESI + 0x1]         ; 0050c0a6
    ADD ESI,0x2                         ; 0050c0a9
    MOV byte ptr [EDI + 0x1],AL         ; 0050c0ac | DAT_01d20009
    ADD EDI,0x2                         ; 0050c0af
    CMP AL,0x0                          ; 0050c0b2
    JNZ 0x0050c09e                      ; 0050c0b4
        ;   XREF to: 0050c09e (CONDITIONAL_JUMP)  ; LAB_0050c09e
    POP EDI                             ; 0050c0b6
        ;   Label: LAB_0050c0b6
    LEA ESI,[ESP + 0x3e8]               ; 0050c0b7
    INC EBX                             ; 0050c0be
    PUSH EDI                            ; 0050c0bf
    SUB ECX,ECX                         ; 0050c0c0
    DEC ECX                             ; 0050c0c2
    MOV AL,0x0                          ; 0050c0c3
    SCASB.REPNE ES:EDI                  ; 0050c0c5 | DAT_01d20008 | DAT_01d20009
    DEC EDI                             ; 0050c0c7
    MOV AL,byte ptr [ESI]               ; 0050c0c8
        ;   Label: LAB_0050c0c8
    MOV byte ptr [EDI],AL               ; 0050c0ca | DAT_01d20008 | DAT_01d20009
    CMP AL,0x0                          ; 0050c0cc
    JZ 0x0050c0e0                       ; 0050c0ce
        ;   XREF to: 0050c0e0 (CONDITIONAL_JUMP)  ; LAB_0050c0e0
    MOV AL,byte ptr [ESI + 0x1]         ; 0050c0d0
    ADD ESI,0x2                         ; 0050c0d3
    MOV byte ptr [EDI + 0x1],AL         ; 0050c0d6 | DAT_01d20009
    ADD EDI,0x2                         ; 0050c0d9
    CMP AL,0x0                          ; 0050c0dc
    JNZ 0x0050c0c8                      ; 0050c0de
        ;   XREF to: 0050c0c8 (CONDITIONAL_JUMP)  ; LAB_0050c0c8
    POP EDI                             ; 0050c0e0
        ;   Label: LAB_0050c0e0
    MOV ESI,dword ptr [ESP + 0x4f0]     ; 0050c0e1
    MOV dword ptr [ESP + 0xa3c],EBX     ; 0050c0e8
    TEST ESI,ESI                        ; 0050c0ef
    JLE 0x0050c13b                      ; 0050c0f1
        ;   XREF to: 0050c13b (CONDITIONAL_JUMP)  ; LAB_0050c13b
    MOV EDI,EBX                         ; 0050c0f3
    SHL EDI,0x8                         ; 0050c0f5
    CALL FUN_00575570                   ; 0050c0f8
        ;   XREF to: 00575570 (UNCONDITIONAL_CALL)  ; undefined FUN_00575570()
    ADD EDI,0x1d20008                   ; 0050c0fd
    TEST EAX,EAX                        ; 0050c103
    JLE 0x0050c41a                      ; 0050c105
        ;   XREF to: 0050c41a (CONDITIONAL_JUMP)  ; LAB_0050c41a
    PUSH 0x5e80ff                       ; 0050c10b | = "Hardware mixing: Enabled"
    CALL FUN_00531090                   ; 0050c110
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
        ;   Label: LAB_0050c110
    ADD ESP,0x4                         ; 0050c115
    MOV ESI,EAX                         ; 0050c118
    PUSH EDI                            ; 0050c11a
    MOV AL,byte ptr [ESI]               ; 0050c11b
        ;   Label: LAB_0050c11b
    MOV byte ptr [EDI],AL               ; 0050c11d | DAT_01d20008
    CMP AL,0x0                          ; 0050c11f
    JZ 0x0050c133                       ; 0050c121
        ;   XREF to: 0050c133 (CONDITIONAL_JUMP)  ; LAB_0050c133
    MOV AL,byte ptr [ESI + 0x1]         ; 0050c123
    ADD ESI,0x2                         ; 0050c126
    MOV byte ptr [EDI + 0x1],AL         ; 0050c129 | DAT_01d20009
    ADD EDI,0x2                         ; 0050c12c
    CMP AL,0x0                          ; 0050c12f
    JNZ 0x0050c11b                      ; 0050c131
        ;   XREF to: 0050c11b (CONDITIONAL_JUMP)  ; LAB_0050c11b
    POP EDI                             ; 0050c133
        ;   Label: LAB_0050c133
    INC dword ptr [ESP + 0xa3c]         ; 0050c134
    IMUL EAX,dword ptr [0x01c43530],0x18 ; 0050c13b | DAT_01c43530
        ;   Label: LAB_0050c13b
    MOV ECX,dword ptr [0x01d1ee98]      ; 0050c142 | DAT_01d1ee98
    ADD ECX,EAX                         ; 0050c148
    MOV dword ptr [0x01d1ee98],ECX      ; 0050c14a | DAT_01d1ee98
    CMP ECX,0x80000                     ; 0050c150
    JL 0x0050c164                       ; 0050c156
        ;   XREF to: 0050c164 (CONDITIONAL_JUMP)  ; LAB_0050c164
    LEA ESI,[ECX + 0xfff80000]          ; 0050c158
    MOV dword ptr [0x01d1ee98],ESI      ; 0050c15e | DAT_01d1ee98
    CALL FUN_00575550                   ; 0050c164
        ;   XREF to: 00575550 (UNCONDITIONAL_CALL)  ; undefined FUN_00575550()
        ;   Label: LAB_0050c164
    TEST EAX,EAX                        ; 0050c169
    JZ 0x0050c2c6                       ; 0050c16b
        ;   XREF to: 0050c2c6 (CONDITIONAL_JUMP)  ; LAB_0050c2c6
    CALL FUN_00575240                   ; 0050c171
        ;   XREF to: 00575240 (UNCONDITIONAL_CALL)  ; undefined FUN_00575240()
    MOV EBX,EAX                         ; 0050c176
    MOV dword ptr [ESP + 0xa40],EAX     ; 0050c178
    MOV EAX,[0x0061b498]                ; 0050c17f | DAT_0061b498
    MOV EDX,EAX                         ; 0050c184
    MOV ESI,0x14                        ; 0050c186
    SAR EDX,0x1f                        ; 0050c18b
    IDIV ESI                            ; 0050c18e
    MOV dword ptr [ESP + 0xa48],EAX     ; 0050c190
    MOV EAX,[0x0061b498]                ; 0050c197 | DAT_0061b498
    MOV EDX,EAX                         ; 0050c19c
    SAR EDX,0x1f                        ; 0050c19e
    IDIV EBX                            ; 0050c1a1
    MOV EDX,dword ptr [ESP + 0xa48]     ; 0050c1a3
    ADD EDX,EDX                         ; 0050c1aa
    MOV dword ptr [ESP + 0xa44],EAX     ; 0050c1ac
    SUB EAX,EDX                         ; 0050c1b3
    MOV EDX,EAX                         ; 0050c1b5
    SAR EDX,0x1f                        ; 0050c1b7
    SHL EDX,0x2                         ; 0050c1ba
    SBB EAX,EDX                         ; 0050c1bd
    SAR EAX,0x2                         ; 0050c1bf
    MOV dword ptr [ESP + 0xa4c],EAX     ; 0050c1c2
    FILD dword ptr [ESP + 0xa4c]        ; 0050c1c9
    FLD1                                ; 0050c1d0
    FDIVRP                              ; 0050c1d2
    MOV dword ptr [ESP + 0x24],EAX      ; 0050c1d4
    FLD double ptr [0x005e8172]         ; 0050c1d8 | DAT_005e8172
    CALL FUN_005c18f4                   ; 0050c1de
        ;   XREF to: 005c18f4 (UNCONDITIONAL_CALL)  ; undefined FUN_005c18f4()
    XOR ESI,ESI                         ; 0050c1e3
    FSTP double ptr [ESP]               ; 0050c1e5
    TEST EBX,EBX                        ; 0050c1e8
    JLE 0x0050c2c6                      ; 0050c1ea
        ;   XREF to: 0050c2c6 (CONDITIONAL_JUMP)  ; LAB_0050c2c6
    MOV EDX,0x40690000                  ; 0050c1f0
        ;   Label: LAB_0050c1f0
    XOR EAX,EAX                         ; 0050c1f5
    MOV ECX,dword ptr [ESP + 0x24]      ; 0050c1f7
    MOV dword ptr [ESP + 0x8],EAX       ; 0050c1fb
    MOV dword ptr [ESP + 0xc],EDX       ; 0050c1ff
    TEST ECX,ECX                        ; 0050c203
    JLE 0x0050c2b6                      ; 0050c205
        ;   XREF to: 0050c2b6 (CONDITIONAL_JUMP)  ; LAB_0050c2b6
    MOV EAX,dword ptr [ESP + 0xa44]     ; 0050c20b
    IMUL EAX,ESI                        ; 0050c212
    ADD EAX,dword ptr [ESP + 0xa48]     ; 0050c215
    LEA EDI,[ECX*0x4 + 0x0]             ; 0050c21c
    MOV EBX,EAX                         ; 0050c223
    ADD EDI,EAX                         ; 0050c225
    FLD double ptr [ESP + 0x8]          ; 0050c227
        ;   Label: LAB_0050c227
    FMUL double ptr [ESP]               ; 0050c22b
    FST double ptr [ESP + 0xa18]        ; 0050c22e
    SUB ESP,0x4                         ; 0050c235
    FSTP float ptr [ESP]                ; 0050c238
    FLD double ptr [ESP + 0xc]          ; 0050c23b
    SUB ESP,0x4                         ; 0050c23f
    FSTP float ptr [ESP]                ; 0050c242
    PUSH ESI                            ; 0050c245
    CALL FUN_00576590                   ; 0050c246
        ;   XREF to: 00576590 (UNCONDITIONAL_CALL)  ; undefined FUN_00576590()
    MOV dword ptr [ESP + 0xa58],EAX     ; 0050c24b
    FLD float ptr [ESP + 0xa58]         ; 0050c252
    ADD ESP,0xc                         ; 0050c259
    FILD dword ptr [0x0061b49c]         ; 0050c25c | DAT_0061b49c
    FXCH                                ; 0050c262
    FMUL ST1                            ; 0050c264
    MOV EAX,[0x0061b49c]                ; 0050c266 | DAT_0061b49c
    FMUL float ptr [0x005e8162]         ; 0050c26b | DAT_005e8162
    DEC EAX                             ; 0050c271
    FSUBP                               ; 0050c272
    MOV EDX,EAX                         ; 0050c274
    CALL FUN_005c03a0                   ; 0050c276
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0xa4c]       ; 0050c27b
    SUB EDX,dword ptr [ESP + 0xa4c]     ; 0050c282
    INC EDX                             ; 0050c289
    PUSH EDX                            ; 0050c28a
    PUSH EAX                            ; 0050c28b
    PUSH EBX                            ; 0050c28c
    CALL FUN_00509c90                   ; 0050c28d
        ;   XREF to: 00509c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00509c90()
    ADD ESP,0xc                         ; 0050c292
    MOV EAX,dword ptr [ESP + 0xa18]     ; 0050c295
    MOV dword ptr [ESP + 0x8],EAX       ; 0050c29c
    MOV EAX,dword ptr [ESP + 0xa1c]     ; 0050c2a0
    ADD EBX,0x4                         ; 0050c2a7
    MOV dword ptr [ESP + 0xc],EAX       ; 0050c2aa
    CMP EBX,EDI                         ; 0050c2ae
    JL 0x0050c227                       ; 0050c2b0
        ;   XREF to: 0050c227 (CONDITIONAL_JUMP)  ; LAB_0050c227
    MOV EDI,dword ptr [ESP + 0xa40]     ; 0050c2b6
        ;   Label: LAB_0050c2b6
    INC ESI                             ; 0050c2bd
    CMP ESI,EDI                         ; 0050c2be
    JL 0x0050c1f0                       ; 0050c2c0
        ;   XREF to: 0050c1f0 (CONDITIONAL_JUMP)  ; LAB_0050c1f0
    PUSH 0x5e812d                       ; 0050c2c6 | = "Sound Options"
        ;   Label: LAB_0050c2c6
    CALL FUN_00531090                   ; 0050c2cb
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050c2d0
    PUSH EAX                            ; 0050c2d3
    PUSH 0x19                           ; 0050c2d4
    LEA EAX,[ESP + 0xa28]               ; 0050c2d6
    PUSH EAX                            ; 0050c2dd
    MOV ESI,dword ptr [ESP + 0xa48]     ; 0050c2de
    PUSH ESI                            ; 0050c2e5
    PUSH 0x1d20a08                      ; 0050c2e6
    CALL FUN_00509e20                   ; 0050c2eb
        ;   XREF to: 00509e20 (UNCONDITIONAL_CALL)  ; undefined FUN_00509e20()
    ADD ESP,0x14                        ; 0050c2f0
    MOV EDI,0x3e4ccccd                  ; 0050c2f3
    MOV EBX,EAX                         ; 0050c2f8
    CALL FUN_005acff0                   ; 0050c2fa
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005acff0()
    MOV dword ptr [ESP + 0xa38],EDI     ; 0050c2ff
    CMP EBX,0x8                         ; 0050c306
    JA 0x0050c341                       ; 0050c309
        ;   XREF to: 0050c341 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EBX*0x4 + 0x50ba40]  ; 0050c30b | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CALL FUN_005735f0                   ; 0050c312
        ;   XREF to: 005735f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005735f0()
        ;   Label: caseD_0
    TEST EAX,EAX                        ; 0050c317
    SETZ AL                             ; 0050c319
    AND EAX,0xff                        ; 0050c31c
    PUSH EAX                            ; 0050c321
    CALL FUN_00573600                   ; 0050c322
        ;   XREF to: 00573600 (UNCONDITIONAL_CALL)  ; undefined FUN_00573600()
    ADD ESP,0x4                         ; 0050c327
    CALL FUN_005735f0                   ; 0050c32a
        ;   XREF to: 005735f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005735f0()
    TEST EAX,EAX                        ; 0050c32f
    JNZ 0x0050c341                      ; 0050c331
        ;   XREF to: 0050c341 (CONDITIONAL_JUMP)  ; default
    MOV EAX,[0x006236b8]                ; 0050c333 | DAT_006236b8
        ;   Label: LAB_0050c333
    PUSH EAX                            ; 0050c338
    CALL FUN_0057d6a0                   ; 0050c339
        ;   XREF to: 0057d6a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d6a0()
        ;   Label: LAB_0050c339
    ADD ESP,0x4                         ; 0050c33e
    PUSH 0x1                            ; 0050c341
        ;   Label: default
    MOV EAX,[0x0061f2a4]                ; 0050c343 | DAT_0061f2a4
    PUSH EAX                            ; 0050c348 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0050c349 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0050c34b
    ADD ESP,0x8                         ; 0050c34e
    TEST EAX,EAX                        ; 0050c351
    JZ 0x0050bab2                       ; 0050c353
        ;   XREF to: 0050bab2 (CONDITIONAL_JUMP)  ; LAB_0050bab2
    MOV ESP,EBP                         ; 0050c359
    POP EBP                             ; 0050c35b
    POP EDI                             ; 0050c35c
    POP ESI                             ; 0050c35d
    POP EBX                             ; 0050c35e
    RET                                 ; 0050c35f
    PUSH 0x5e802b                       ; 0050c360 | = "Muted"
        ;   Label: LAB_0050c360
    JMP 0x0050bb5c                      ; 0050c365
        ;   XREF to: 0050bb5c (UNCONDITIONAL_JUMP)  ; LAB_0050bb5c
    PUSH 0x5e804b                       ; 0050c36a | = "Sound effects : Off"
        ;   Label: LAB_0050c36a
    CALL FUN_00531090                   ; 0050c36f
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050c374
    PUSH EAX                            ; 0050c377
    PUSH EBX                            ; 0050c378
    MOV ESI,dword ptr [ESP + 0xa2c]     ; 0050c379
    CALL FUN_005bfb40                   ; 0050c380
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x8                         ; 0050c385
    JMP 0x0050bc8b                      ; 0050c388
        ;   XREF to: 0050bc8b (UNCONDITIONAL_JUMP)  ; LAB_0050bc8b
    PUSH 0x5e806f                       ; 0050c38d | = "Dialog : Off"
        ;   Label: LAB_0050c38d
    CALL FUN_00531090                   ; 0050c392
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050c397
    PUSH EAX                            ; 0050c39a
    PUSH EBX                            ; 0050c39b
    CALL FUN_005bfb40                   ; 0050c39c
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x8                         ; 0050c3a1
    JMP 0x0050bd8f                      ; 0050c3a4
        ;   XREF to: 0050bd8f (UNCONDITIONAL_JUMP)  ; LAB_0050bd8f
    PUSH 0x5e808f                       ; 0050c3a9 | = "Music Vol : Off"
        ;   Label: LAB_0050c3a9
    CALL FUN_00531090                   ; 0050c3ae
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050c3b3
    PUSH EAX                            ; 0050c3b6
    PUSH EBX                            ; 0050c3b7
    MOV dword ptr [ESP + 0xa44],ESI     ; 0050c3b8
    CALL FUN_005bfb40                   ; 0050c3bf
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x8                         ; 0050c3c4
    JMP 0x0050be9a                      ; 0050c3c7
        ;   XREF to: 0050be9a (UNCONDITIONAL_JUMP)  ; LAB_0050be9a
    PUSH 0x5e80e0                       ; 0050c3cc | = "Output type : STEREO"
        ;   Label: LAB_0050c3cc
    CALL FUN_00531090                   ; 0050c3d1
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050c3d6
    PUSH EAX                            ; 0050c3d9
    MOV EAX,ESI                         ; 0050c3da
    SHL EAX,0x8                         ; 0050c3dc
    ADD EAX,0x1d20008                   ; 0050c3df
    LEA EDI,[ESI + 0x1]                 ; 0050c3e4
    PUSH EAX                            ; 0050c3e7
    MOV dword ptr [ESP + 0xa44],EDI     ; 0050c3e8
    JMP 0x0050c045                      ; 0050c3ef
        ;   XREF to: 0050c045 (UNCONDITIONAL_JUMP)  ; LAB_0050c045
    JBE 0x0050c018                      ; 0050c3f4
        ;   XREF to: 0050c018 (CONDITIONAL_JUMP)  ; LAB_0050c018
        ;   Label: LAB_0050c3f4
    CMP EAX,0x2                         ; 0050c3fa
    JZ 0x0050c3cc                       ; 0050c3fd
        ;   XREF to: 0050c3cc (CONDITIONAL_JUMP)  ; LAB_0050c3cc
    JMP 0x0050c018                      ; 0050c3ff
        ;   XREF to: 0050c018 (UNCONDITIONAL_JUMP)  ; LAB_0050c018
    LEA EAX,[ESP + 0x3e8]               ; 0050c404
        ;   Label: LAB_0050c404
    PUSH EAX                            ; 0050c40b
    PUSH EBX                            ; 0050c40c
    CALL FUN_00575350                   ; 0050c40d
        ;   XREF to: 00575350 (UNCONDITIONAL_CALL)  ; undefined FUN_00575350()
    ADD ESP,0x8                         ; 0050c412
    JMP 0x0050c077                      ; 0050c415
        ;   XREF to: 0050c077 (UNCONDITIONAL_JUMP)  ; LAB_0050c077
    PUSH 0x5e8118                       ; 0050c41a | = "Hardware mixing: Off"
        ;   Label: LAB_0050c41a
    JMP 0x0050c110                      ; 0050c41f
        ;   XREF to: 0050c110 (UNCONDITIONAL_JUMP)  ; LAB_0050c110
    PUSH 0x0                            ; 0050c424
        ;   Label: caseD_1
    CALL FUN_00573bc0                   ; 0050c426
        ;   XREF to: 00573bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00573bc0()
    MOV dword ptr [ESP + 0xa50],EAX     ; 0050c42b
    FLD float ptr [ESP + 0xa50]         ; 0050c432
    FDIV float ptr [0x00603974]         ; 0050c439 | DAT_00603974
    ADD ESP,0x4                         ; 0050c43f
    MOV EDX,dword ptr [0x01d1ee8c]      ; 0050c442 | DAT_01d1ee8c
    FSTP float ptr [ESP + 0x18]         ; 0050c448
    CMP EDX,0x1                         ; 0050c44c
    JNZ 0x0050c4e3                      ; 0050c44f
        ;   XREF to: 0050c4e3 (CONDITIONAL_JUMP)  ; LAB_0050c4e3
    PUSH 0x0                            ; 0050c455
    CALL FUN_00573cd0                   ; 0050c457
        ;   XREF to: 00573cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00573cd0()
    ADD ESP,0x4                         ; 0050c45c
    TEST EAX,EAX                        ; 0050c45f
    JZ 0x0050c4cd                       ; 0050c461
        ;   XREF to: 0050c4cd (CONDITIONAL_JUMP)  ; LAB_0050c4cd
    FLD float ptr [ESP + 0x18]          ; 0050c463
    FSUB float ptr [ESP + 0xa38]        ; 0050c467
    FST float ptr [ESP + 0x18]          ; 0050c46e
    FCOMP double ptr [0x005e8192]       ; 0050c472 | DAT_005e8192
    FNSTSW AX                           ; 0050c478
    SAHF                                ; 0050c47a
    JNC 0x0050c48d                      ; 0050c47b
        ;   XREF to: 0050c48d (CONDITIONAL_JUMP)  ; LAB_0050c48d
    XOR EDI,EDI                         ; 0050c47d
    PUSH EDI                            ; 0050c47f
    PUSH EDI                            ; 0050c480
    MOV dword ptr [ESP + 0x20],EDI      ; 0050c481
    CALL FUN_00573c50                   ; 0050c485
        ;   XREF to: 00573c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00573c50()
        ;   Label: LAB_0050c485
    ADD ESP,0x8                         ; 0050c48a
    FLD float ptr [ESP + 0x18]          ; 0050c48d
        ;   Label: LAB_0050c48d
    FMUL float ptr [0x00603974]         ; 0050c491 | DAT_00603974
    SUB ESP,0x4                         ; 0050c497
    FSTP float ptr [ESP]                ; 0050c49a
    PUSH 0x0                            ; 0050c49d
    CALL FUN_00573b30                   ; 0050c49f
        ;   XREF to: 00573b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00573b30()
    ADD ESP,0x8                         ; 0050c4a4
    CALL FUN_00572ac0                   ; 0050c4a7
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00572ac0()
    PUSH 0x1                            ; 0050c4ac
    CALL FUN_005729f0                   ; 0050c4ae
        ;   XREF to: 005729f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005729f0()
    ADD ESP,0x4                         ; 0050c4b3
    PUSH 0x5e813b                       ; 0050c4b6 | = "colt45-0.wav"
    CALL FUN_00572d20                   ; 0050c4bb
        ;   XREF to: 00572d20 (UNCONDITIONAL_CALL)  ; undefined FUN_00572d20()
    ADD ESP,0x4                         ; 0050c4c0
    CALL FUN_00572b40                   ; 0050c4c3
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00572b40()
    JMP 0x0050c341                      ; 0050c4c8
        ;   XREF to: 0050c341 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 0050c4cd
        ;   Label: LAB_0050c4cd
    PUSH EAX                            ; 0050c4cf
    MOV ESI,0x3f800000                  ; 0050c4d0
    CALL FUN_00573c50                   ; 0050c4d5
        ;   XREF to: 00573c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00573c50()
    ADD ESP,0x8                         ; 0050c4da
    MOV dword ptr [ESP + 0x18],ESI      ; 0050c4dd
    JMP 0x0050c48d                      ; 0050c4e1
        ;   XREF to: 0050c48d (UNCONDITIONAL_JUMP)  ; LAB_0050c48d
    PUSH 0x0                            ; 0050c4e3
        ;   Label: LAB_0050c4e3
    CALL FUN_00573cd0                   ; 0050c4e5
        ;   XREF to: 00573cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00573cd0()
    ADD ESP,0x4                         ; 0050c4ea
    TEST EAX,EAX                        ; 0050c4ed
    JZ 0x0050c538                       ; 0050c4ef
        ;   XREF to: 0050c538 (CONDITIONAL_JUMP)  ; LAB_0050c538
    FLD float ptr [ESP + 0x18]          ; 0050c4f1
    FADD float ptr [ESP + 0xa38]        ; 0050c4f5
    FST float ptr [ESP + 0x18]          ; 0050c4fc
    FCOMP double ptr [0x005e8182]       ; 0050c500 | DAT_005e8182
    FNSTSW AX                           ; 0050c506
    SAHF                                ; 0050c508
    JA 0x0050c52b                       ; 0050c509
        ;   XREF to: 0050c52b (CONDITIONAL_JUMP)  ; LAB_0050c52b
    FLD float ptr [ESP + 0x18]          ; 0050c50b
    FCOMP double ptr [0x005e818a]       ; 0050c50f | DAT_005e818a
    FNSTSW AX                           ; 0050c515
    SAHF                                ; 0050c517
    JBE 0x0050c48d                      ; 0050c518
        ;   XREF to: 0050c48d (CONDITIONAL_JUMP)  ; LAB_0050c48d
    MOV dword ptr [ESP + 0x18],0x3f800000 ; 0050c51e
    JMP 0x0050c48d                      ; 0050c526
        ;   XREF to: 0050c48d (UNCONDITIONAL_JUMP)  ; LAB_0050c48d
    XOR EBX,EBX                         ; 0050c52b
        ;   Label: LAB_0050c52b
    PUSH EBX                            ; 0050c52d
    PUSH EBX                            ; 0050c52e
    MOV dword ptr [ESP + 0x20],EBX      ; 0050c52f
    JMP 0x0050c485                      ; 0050c533
        ;   XREF to: 0050c485 (UNCONDITIONAL_JUMP)  ; LAB_0050c485
    PUSH 0x1                            ; 0050c538
        ;   Label: LAB_0050c538
    PUSH EAX                            ; 0050c53a
    CALL FUN_00573c50                   ; 0050c53b
        ;   XREF to: 00573c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00573c50()
    ADD ESP,0x8                         ; 0050c540
    MOV dword ptr [ESP + 0x18],EDI      ; 0050c543
    JMP 0x0050c48d                      ; 0050c547
        ;   XREF to: 0050c48d (UNCONDITIONAL_JUMP)  ; LAB_0050c48d
    PUSH 0x2                            ; 0050c54c
        ;   Label: caseD_2
    CALL FUN_00573bc0                   ; 0050c54e
        ;   XREF to: 00573bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00573bc0()
    MOV dword ptr [ESP + 0xa50],EAX     ; 0050c553
    FLD float ptr [ESP + 0xa50]         ; 0050c55a
    FDIV float ptr [0x00603978]         ; 0050c561 | DAT_00603978
    ADD ESP,0x4                         ; 0050c567
    MOV ECX,dword ptr [0x01d1ee8c]      ; 0050c56a | DAT_01d1ee8c
    FSTP float ptr [ESP + 0x20]         ; 0050c570
    CMP ECX,0x1                         ; 0050c574
    JNZ 0x0050c5e8                      ; 0050c577
        ;   XREF to: 0050c5e8 (CONDITIONAL_JUMP)  ; LAB_0050c5e8
    PUSH 0x2                            ; 0050c579
    CALL FUN_00573cd0                   ; 0050c57b
        ;   XREF to: 00573cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00573cd0()
    ADD ESP,0x4                         ; 0050c580
    TEST EAX,EAX                        ; 0050c583
    JZ 0x0050c5d1                       ; 0050c585
        ;   XREF to: 0050c5d1 (CONDITIONAL_JUMP)  ; LAB_0050c5d1
    FLD float ptr [ESP + 0x20]          ; 0050c587
    FSUB float ptr [ESP + 0xa38]        ; 0050c58b
    FST float ptr [ESP + 0x20]          ; 0050c592
    FCOMP double ptr [0x005e8192]       ; 0050c596 | DAT_005e8192
    FNSTSW AX                           ; 0050c59c
    SAHF                                ; 0050c59e
    JNC 0x0050c5b2                      ; 0050c59f
        ;   XREF to: 0050c5b2 (CONDITIONAL_JUMP)  ; LAB_0050c5b2
    XOR EAX,EAX                         ; 0050c5a1
    PUSH EAX                            ; 0050c5a3
    PUSH 0x2                            ; 0050c5a4
    MOV dword ptr [ESP + 0x28],EAX      ; 0050c5a6
    CALL FUN_00573c50                   ; 0050c5aa
        ;   XREF to: 00573c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00573c50()
        ;   Label: LAB_0050c5aa
    ADD ESP,0x8                         ; 0050c5af
    FLD float ptr [ESP + 0x20]          ; 0050c5b2
        ;   Label: LAB_0050c5b2
    FMUL float ptr [0x00603978]         ; 0050c5b6 | DAT_00603978
    SUB ESP,0x4                         ; 0050c5bc
    FSTP float ptr [ESP]                ; 0050c5bf
    PUSH 0x2                            ; 0050c5c2
    CALL FUN_00573b30                   ; 0050c5c4
        ;   XREF to: 00573b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00573b30()
    ADD ESP,0x8                         ; 0050c5c9
    JMP 0x0050c341                      ; 0050c5cc
        ;   XREF to: 0050c341 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 0050c5d1
        ;   Label: LAB_0050c5d1
    PUSH 0x2                            ; 0050c5d3
    MOV EDI,0x3f800000                  ; 0050c5d5
    CALL FUN_00573c50                   ; 0050c5da
        ;   XREF to: 00573c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00573c50()
    ADD ESP,0x8                         ; 0050c5df
    MOV dword ptr [ESP + 0x20],EDI      ; 0050c5e2
    JMP 0x0050c5b2                      ; 0050c5e6
        ;   XREF to: 0050c5b2 (UNCONDITIONAL_JUMP)  ; LAB_0050c5b2
    PUSH 0x2                            ; 0050c5e8
        ;   Label: LAB_0050c5e8
    CALL FUN_00573cd0                   ; 0050c5ea
        ;   XREF to: 00573cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00573cd0()
    ADD ESP,0x4                         ; 0050c5ef
    TEST EAX,EAX                        ; 0050c5f2
    JZ 0x0050c637                       ; 0050c5f4
        ;   XREF to: 0050c637 (CONDITIONAL_JUMP)  ; LAB_0050c637
    FLD float ptr [ESP + 0x20]          ; 0050c5f6
    FADD float ptr [ESP + 0xa38]        ; 0050c5fa
    FST float ptr [ESP + 0x20]          ; 0050c601
    FCOMP double ptr [0x005e8182]       ; 0050c605 | DAT_005e8182
    FNSTSW AX                           ; 0050c60b
    SAHF                                ; 0050c60d
    JA 0x0050c629                       ; 0050c60e
        ;   XREF to: 0050c629 (CONDITIONAL_JUMP)  ; LAB_0050c629
    FLD float ptr [ESP + 0x20]          ; 0050c610
    FCOMP double ptr [0x005e818a]       ; 0050c614 | DAT_005e818a
    FNSTSW AX                           ; 0050c61a
    SAHF                                ; 0050c61c
    JBE 0x0050c5b2                      ; 0050c61d
        ;   XREF to: 0050c5b2 (CONDITIONAL_JUMP)  ; LAB_0050c5b2
    MOV dword ptr [ESP + 0x20],0x3f800000 ; 0050c61f
    JMP 0x0050c5b2                      ; 0050c627
        ;   XREF to: 0050c5b2 (UNCONDITIONAL_JUMP)  ; LAB_0050c5b2
    XOR ESI,ESI                         ; 0050c629
        ;   Label: LAB_0050c629
    PUSH ESI                            ; 0050c62b
    PUSH 0x2                            ; 0050c62c
    MOV dword ptr [ESP + 0x28],ESI      ; 0050c62e
    JMP 0x0050c5aa                      ; 0050c632
        ;   XREF to: 0050c5aa (UNCONDITIONAL_JUMP)  ; LAB_0050c5aa
    PUSH 0x1                            ; 0050c637
        ;   Label: LAB_0050c637
    PUSH 0x2                            ; 0050c639
    CALL FUN_00573c50                   ; 0050c63b
        ;   XREF to: 00573c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00573c50()
    ADD ESP,0x8                         ; 0050c640
    MOV dword ptr [ESP + 0x20],EDI      ; 0050c643
    JMP 0x0050c5b2                      ; 0050c647
        ;   XREF to: 0050c5b2 (UNCONDITIONAL_JUMP)  ; LAB_0050c5b2
    PUSH 0x1                            ; 0050c64c
        ;   Label: caseD_3
    CALL FUN_00573bc0                   ; 0050c64e
        ;   XREF to: 00573bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00573bc0()
    MOV dword ptr [ESP + 0xa50],EAX     ; 0050c653
    FLD float ptr [ESP + 0xa50]         ; 0050c65a
    FDIV float ptr [0x00603970]         ; 0050c661 | DAT_00603970
    ADD ESP,0x4                         ; 0050c667
    MOV EAX,[0x01d1ee8c]                ; 0050c66a | DAT_01d1ee8c
    FSTP float ptr [ESP + 0x1c]         ; 0050c66f
    CMP EAX,0x1                         ; 0050c673
    JNZ 0x0050c6f9                      ; 0050c676
        ;   XREF to: 0050c6f9 (CONDITIONAL_JUMP)  ; LAB_0050c6f9
    PUSH EAX                            ; 0050c67c
    CALL FUN_00573cd0                   ; 0050c67d
        ;   XREF to: 00573cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00573cd0()
    ADD ESP,0x4                         ; 0050c682
    TEST EAX,EAX                        ; 0050c685
    JZ 0x0050c6d3                       ; 0050c687
        ;   XREF to: 0050c6d3 (CONDITIONAL_JUMP)  ; LAB_0050c6d3
    FLD float ptr [ESP + 0x1c]          ; 0050c689
    FSUB float ptr [ESP + 0xa38]        ; 0050c68d
    FST float ptr [ESP + 0x1c]          ; 0050c694
    FCOMP double ptr [0x005e8192]       ; 0050c698 | DAT_005e8192
    FNSTSW AX                           ; 0050c69e
    SAHF                                ; 0050c6a0
    JNC 0x0050c6b4                      ; 0050c6a1
        ;   XREF to: 0050c6b4 (CONDITIONAL_JUMP)  ; LAB_0050c6b4
    XOR EDX,EDX                         ; 0050c6a3
    PUSH EDX                            ; 0050c6a5
    PUSH 0x1                            ; 0050c6a6
    MOV dword ptr [ESP + 0x24],EDX      ; 0050c6a8
    CALL FUN_00573c50                   ; 0050c6ac
        ;   XREF to: 00573c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00573c50()
        ;   Label: LAB_0050c6ac
    ADD ESP,0x8                         ; 0050c6b1
    FLD float ptr [ESP + 0x1c]          ; 0050c6b4
        ;   Label: LAB_0050c6b4
    FMUL float ptr [0x00603970]         ; 0050c6b8 | DAT_00603970
    SUB ESP,0x4                         ; 0050c6be
    FSTP float ptr [ESP]                ; 0050c6c1
    PUSH 0x1                            ; 0050c6c4
    CALL FUN_00573b30                   ; 0050c6c6
        ;   XREF to: 00573b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00573b30()
    ADD ESP,0x8                         ; 0050c6cb
    JMP 0x0050c341                      ; 0050c6ce
        ;   XREF to: 0050c341 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 0050c6d3
        ;   Label: LAB_0050c6d3
    PUSH 0x1                            ; 0050c6d5
    CALL FUN_00573c50                   ; 0050c6d7
        ;   XREF to: 00573c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00573c50()
    ADD ESP,0x8                         ; 0050c6dc
    MOV EDI,dword ptr [0x006236b8]      ; 0050c6df | DAT_006236b8
    PUSH EDI                            ; 0050c6e5
    CALL FUN_0057d6a0                   ; 0050c6e6
        ;   XREF to: 0057d6a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d6a0()
    MOV EAX,0x3f800000                  ; 0050c6eb
    ADD ESP,0x4                         ; 0050c6f0
    MOV dword ptr [ESP + 0x1c],EAX      ; 0050c6f3
    JMP 0x0050c6b4                      ; 0050c6f7
        ;   XREF to: 0050c6b4 (UNCONDITIONAL_JUMP)  ; LAB_0050c6b4
    PUSH 0x1                            ; 0050c6f9
        ;   Label: LAB_0050c6f9
    CALL FUN_00573cd0                   ; 0050c6fb
        ;   XREF to: 00573cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00573cd0()
    ADD ESP,0x4                         ; 0050c700
    TEST EAX,EAX                        ; 0050c703
    JZ 0x0050c74e                       ; 0050c705
        ;   XREF to: 0050c74e (CONDITIONAL_JUMP)  ; LAB_0050c74e
    FLD float ptr [ESP + 0x1c]          ; 0050c707
    FADD float ptr [0x005e817a]         ; 0050c70b | DAT_005e817a
    FST float ptr [ESP + 0x1c]          ; 0050c711
    FST double ptr [ESP + 0x10]         ; 0050c715
    FCOMP double ptr [0x005e8182]       ; 0050c719 | DAT_005e8182
    FNSTSW AX                           ; 0050c71f
    SAHF                                ; 0050c721
    JA 0x0050c740                       ; 0050c722
        ;   XREF to: 0050c740 (CONDITIONAL_JUMP)  ; LAB_0050c740
    FLD double ptr [ESP + 0x10]         ; 0050c724
    FCOMP double ptr [0x005e818a]       ; 0050c728 | DAT_005e818a
    FNSTSW AX                           ; 0050c72e
    SAHF                                ; 0050c730
    JBE 0x0050c6b4                      ; 0050c731
        ;   XREF to: 0050c6b4 (CONDITIONAL_JUMP)  ; LAB_0050c6b4
    MOV dword ptr [ESP + 0x1c],0x3f800000 ; 0050c733
    JMP 0x0050c6b4                      ; 0050c73b
        ;   XREF to: 0050c6b4 (UNCONDITIONAL_JUMP)  ; LAB_0050c6b4
    XOR ESI,ESI                         ; 0050c740
        ;   Label: LAB_0050c740
    PUSH ESI                            ; 0050c742
    PUSH 0x1                            ; 0050c743
    MOV dword ptr [ESP + 0x24],ESI      ; 0050c745
    JMP 0x0050c6ac                      ; 0050c749
        ;   XREF to: 0050c6ac (UNCONDITIONAL_JUMP)  ; LAB_0050c6ac
    PUSH 0x1                            ; 0050c74e
        ;   Label: LAB_0050c74e
    PUSH 0x1                            ; 0050c750
    CALL FUN_00573c50                   ; 0050c752
        ;   XREF to: 00573c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00573c50()
    ADD ESP,0x8                         ; 0050c757
    MOV EDX,dword ptr [0x006236b8]      ; 0050c75a | DAT_006236b8
    PUSH EDX                            ; 0050c760
    CALL FUN_0057d6a0                   ; 0050c761
        ;   XREF to: 0057d6a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d6a0()
    ADD ESP,0x4                         ; 0050c766
    MOV dword ptr [ESP + 0x1c],EDI      ; 0050c769
    JMP 0x0050c6b4                      ; 0050c76d
        ;   XREF to: 0050c6b4 (UNCONDITIONAL_JUMP)  ; LAB_0050c6b4
    CALL FUN_00575220                   ; 0050c772
        ;   XREF to: 00575220 (UNCONDITIONAL_CALL)  ; undefined FUN_00575220()
        ;   Label: caseD_4
    MOV ESI,dword ptr [0x01d1ee8c]      ; 0050c777 | DAT_01d1ee8c
    MOV EBX,EAX                         ; 0050c77d
    CMP ESI,0x1                         ; 0050c77f
    JNZ 0x0050c7da                      ; 0050c782
        ;   XREF to: 0050c7da (CONDITIONAL_JUMP)  ; LAB_0050c7da
    CMP EAX,0x5622                      ; 0050c784
    JNZ 0x0050c7c5                      ; 0050c789
        ;   XREF to: 0050c7c5 (CONDITIONAL_JUMP)  ; LAB_0050c7c5
    MOV EBX,0x2b2a                      ; 0050c78b
        ;   Label: LAB_0050c78b
    CALL FUN_00575570                   ; 0050c790
        ;   XREF to: 00575570 (UNCONDITIONAL_CALL)  ; undefined FUN_00575570()
        ;   Label: LAB_0050c790
    TEST EAX,EAX                        ; 0050c795
    JLE 0x0050c79e                      ; 0050c797
        ;   XREF to: 0050c79e (CONDITIONAL_JUMP)  ; LAB_0050c79e
    MOV EBX,0xac44                      ; 0050c799
    CALL FUN_00575220                   ; 0050c79e
        ;   XREF to: 00575220 (UNCONDITIONAL_CALL)  ; undefined FUN_00575220()
        ;   Label: LAB_0050c79e
    CMP EBX,EAX                         ; 0050c7a3
    JZ 0x0050c341                       ; 0050c7a5
        ;   XREF to: 0050c341 (CONDITIONAL_JUMP)  ; default
    CALL FUN_005750e0                   ; 0050c7ab
        ;   XREF to: 005750e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005750e0()
    PUSH EBX                            ; 0050c7b0
    CALL FUN_005752a0                   ; 0050c7b1
        ;   XREF to: 005752a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005752a0()
    ADD ESP,0x4                         ; 0050c7b6
    MOV EDI,dword ptr [0x006236b8]      ; 0050c7b9 | DAT_006236b8
    PUSH EDI                            ; 0050c7bf
    JMP 0x0050c339                      ; 0050c7c0
        ;   XREF to: 0050c339 (UNCONDITIONAL_JUMP)  ; LAB_0050c339
    CMP EAX,0xac44                      ; 0050c7c5
        ;   Label: LAB_0050c7c5
    JNZ 0x0050c7d3                      ; 0050c7ca
        ;   XREF to: 0050c7d3 (CONDITIONAL_JUMP)  ; LAB_0050c7d3
    MOV EBX,0x5622                      ; 0050c7cc
    JMP 0x0050c790                      ; 0050c7d1
        ;   XREF to: 0050c790 (UNCONDITIONAL_JUMP)  ; LAB_0050c790
    MOV EBX,0xac44                      ; 0050c7d3
        ;   Label: LAB_0050c7d3
    JMP 0x0050c790                      ; 0050c7d8
        ;   XREF to: 0050c790 (UNCONDITIONAL_JUMP)  ; LAB_0050c790
    CMP EAX,0x5622                      ; 0050c7da
        ;   Label: LAB_0050c7da
    JGE 0x0050c7e8                      ; 0050c7df
        ;   XREF to: 0050c7e8 (CONDITIONAL_JUMP)  ; LAB_0050c7e8
    MOV EBX,0x5622                      ; 0050c7e1
    JMP 0x0050c790                      ; 0050c7e6
        ;   XREF to: 0050c790 (UNCONDITIONAL_JUMP)  ; LAB_0050c790
    CMP EAX,0xac44                      ; 0050c7e8
        ;   Label: LAB_0050c7e8
    JGE 0x0050c78b                      ; 0050c7ed
        ;   XREF to: 0050c78b (CONDITIONAL_JUMP)  ; LAB_0050c78b
    MOV EBX,0xac44                      ; 0050c7ef
    JMP 0x0050c790                      ; 0050c7f4
        ;   XREF to: 0050c790 (UNCONDITIONAL_JUMP)  ; LAB_0050c790
    CALL FUN_00575200                   ; 0050c7f6
        ;   XREF to: 00575200 (UNCONDITIONAL_CALL)  ; undefined FUN_00575200()
        ;   Label: caseD_5
    CMP EAX,0x10                        ; 0050c7fb
    JNZ 0x0050c83a                      ; 0050c7fe
        ;   XREF to: 0050c83a (CONDITIONAL_JUMP)  ; LAB_0050c83a
    MOV EBX,0x8                         ; 0050c800
    CALL FUN_00575560                   ; 0050c805
        ;   XREF to: 00575560 (UNCONDITIONAL_CALL)  ; undefined FUN_00575560()
        ;   Label: LAB_0050c805
    TEST EAX,EAX                        ; 0050c80a
    JLE 0x0050c813                      ; 0050c80c
        ;   XREF to: 0050c813 (CONDITIONAL_JUMP)  ; LAB_0050c813
    MOV EBX,0x10                        ; 0050c80e
    CALL FUN_00575200                   ; 0050c813
        ;   XREF to: 00575200 (UNCONDITIONAL_CALL)  ; undefined FUN_00575200()
        ;   Label: LAB_0050c813
    CMP EBX,EAX                         ; 0050c818
    JZ 0x0050c341                       ; 0050c81a
        ;   XREF to: 0050c341 (CONDITIONAL_JUMP)  ; default
    CALL FUN_005750e0                   ; 0050c820
        ;   XREF to: 005750e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005750e0()
    PUSH EBX                            ; 0050c825
    CALL FUN_00575260                   ; 0050c826
        ;   XREF to: 00575260 (UNCONDITIONAL_CALL)  ; undefined FUN_00575260()
    ADD ESP,0x4                         ; 0050c82b
    MOV ECX,dword ptr [0x006236b8]      ; 0050c82e | DAT_006236b8
    PUSH ECX                            ; 0050c834
    JMP 0x0050c339                      ; 0050c835
        ;   XREF to: 0050c339 (UNCONDITIONAL_JUMP)  ; LAB_0050c339
    MOV EBX,0x10                        ; 0050c83a
        ;   Label: LAB_0050c83a
    JMP 0x0050c805                      ; 0050c83f
        ;   XREF to: 0050c805 (UNCONDITIONAL_JUMP)  ; LAB_0050c805
    CALL FUN_00575240                   ; 0050c841
        ;   XREF to: 00575240 (UNCONDITIONAL_CALL)  ; undefined FUN_00575240()
        ;   Label: caseD_6
    CMP EAX,0x1                         ; 0050c846
    SETZ AL                             ; 0050c849
    AND EAX,0xff                        ; 0050c84c
    LEA EBX,[EAX + 0x1]                 ; 0050c851
    CALL FUN_00575560                   ; 0050c854
        ;   XREF to: 00575560 (UNCONDITIONAL_CALL)  ; undefined FUN_00575560()
    TEST EAX,EAX                        ; 0050c859
    JLE 0x0050c862                      ; 0050c85b
        ;   XREF to: 0050c862 (CONDITIONAL_JUMP)  ; LAB_0050c862
    MOV EBX,0x2                         ; 0050c85d
    CALL FUN_00575240                   ; 0050c862
        ;   XREF to: 00575240 (UNCONDITIONAL_CALL)  ; undefined FUN_00575240()
        ;   Label: LAB_0050c862
    CMP EBX,EAX                         ; 0050c867
    JZ 0x0050c341                       ; 0050c869
        ;   XREF to: 0050c341 (CONDITIONAL_JUMP)  ; default
    CALL FUN_005750e0                   ; 0050c86f
        ;   XREF to: 005750e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005750e0()
    PUSH EBX                            ; 0050c874
    CALL FUN_00575280                   ; 0050c875
        ;   XREF to: 00575280 (UNCONDITIONAL_CALL)  ; undefined FUN_00575280()
    ADD ESP,0x4                         ; 0050c87a
    MOV EDX,dword ptr [0x006236b8]      ; 0050c87d | DAT_006236b8
    PUSH EDX                            ; 0050c883
    JMP 0x0050c339                      ; 0050c884
        ;   XREF to: 0050c339 (UNCONDITIONAL_JUMP)  ; LAB_0050c339
    LEA EAX,[ESP + 0x28]                ; 0050c889
        ;   Label: caseD_7
    PUSH EAX                            ; 0050c88d
    XOR EBX,EBX                         ; 0050c88e
    CALL FUN_0049a620                   ; 0050c890
        ;   XREF to: 0049a620 (UNCONDITIONAL_CALL)  ; undefined FUN_0049a620()
    ADD ESP,0x4                         ; 0050c895
    CALL FUN_005752c0                   ; 0050c898
        ;   XREF to: 005752c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005752c0()
        ;   Label: LAB_0050c898
    CMP EBX,EAX                         ; 0050c89d
    JGE 0x0050c8ca                      ; 0050c89f
        ;   XREF to: 0050c8ca (CONDITIONAL_JUMP)  ; LAB_0050c8ca
    LEA EAX,[ESP + 0x500]               ; 0050c8a1
    PUSH EAX                            ; 0050c8a8
    PUSH EBX                            ; 0050c8a9
    CALL FUN_00575350                   ; 0050c8aa
        ;   XREF to: 00575350 (UNCONDITIONAL_CALL)  ; undefined FUN_00575350()
    ADD ESP,0x8                         ; 0050c8af
    LEA EAX,[ESP + 0x500]               ; 0050c8b2
    PUSH EAX                            ; 0050c8b9
    LEA EAX,[ESP + 0x2c]                ; 0050c8ba
    PUSH EAX                            ; 0050c8be
    INC EBX                             ; 0050c8bf
    CALL FUN_004994d0                   ; 0050c8c0
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004994d0()
    ADD ESP,0x8                         ; 0050c8c5
    JMP 0x0050c898                      ; 0050c8c8
        ;   XREF to: 0050c898 (UNCONDITIONAL_JUMP)  ; LAB_0050c898
    PUSH 0x0                            ; 0050c8ca
        ;   Label: LAB_0050c8ca
    CALL FUN_005756d0                   ; 0050c8cc
        ;   XREF to: 005756d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005756d0()
    PUSH EAX                            ; 0050c8d1
    PUSH 0x5e8148                       ; 0050c8d2 | = "Select sound device"
    LEA EAX,[ESP + 0x34]                ; 0050c8d7
    PUSH EAX                            ; 0050c8db
    CALL FUN_0049a8b0                   ; 0050c8dc
        ;   XREF to: 0049a8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049a8b0()
    MOV EBX,EAX                         ; 0050c8e1
    ADD ESP,0x10                        ; 0050c8e3
    TEST EAX,EAX                        ; 0050c8e6
    JL 0x0050c926                       ; 0050c8e8
        ;   XREF to: 0050c926 (CONDITIONAL_JUMP)  ; LAB_0050c926
    CALL FUN_00575670                   ; 0050c8ea
        ;   XREF to: 00575670 (UNCONDITIONAL_CALL)  ; undefined FUN_00575670()
    PUSH EBX                            ; 0050c8ef
    CALL FUN_005754d0                   ; 0050c8f0
        ;   XREF to: 005754d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005754d0()
    ADD ESP,0x4                         ; 0050c8f5
    CALL FUN_005755c0                   ; 0050c8f8
        ;   XREF to: 005755c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005755c0()
    CALL FUN_00575560                   ; 0050c8fd
        ;   XREF to: 00575560 (UNCONDITIONAL_CALL)  ; undefined FUN_00575560()
    TEST EAX,EAX                        ; 0050c902
    JLE 0x0050c917                      ; 0050c904
        ;   XREF to: 0050c917 (CONDITIONAL_JUMP)  ; LAB_0050c917
    PUSH 0xac44                         ; 0050c906
    PUSH 0x2                            ; 0050c90b
    PUSH 0x10                           ; 0050c90d
    CALL FUN_00575120                   ; 0050c90f
        ;   XREF to: 00575120 (UNCONDITIONAL_CALL)  ; undefined FUN_00575120()
    ADD ESP,0xc                         ; 0050c914
    MOV EDX,dword ptr [0x006236b8]      ; 0050c917 | DAT_006236b8
        ;   Label: LAB_0050c917
    PUSH EDX                            ; 0050c91d
    CALL FUN_0057d6a0                   ; 0050c91e
        ;   XREF to: 0057d6a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d6a0()
    ADD ESP,0x4                         ; 0050c923
    PUSH 0x0                            ; 0050c926
        ;   Label: LAB_0050c926
    LEA EAX,[ESP + 0x2c]                ; 0050c928
    PUSH EAX                            ; 0050c92c
    CALL FUN_0049a710                   ; 0050c92d
        ;   XREF to: 0049a710 (UNCONDITIONAL_CALL)  ; undefined FUN_0049a710()
    ADD ESP,0x8                         ; 0050c932
    JMP 0x0050c341                      ; 0050c935
        ;   XREF to: 0050c341 (UNCONDITIONAL_JUMP)  ; default
    CALL FUN_00575670                   ; 0050c93a
        ;   XREF to: 00575670 (UNCONDITIONAL_CALL)  ; undefined FUN_00575670()
        ;   Label: caseD_8
    CALL FUN_00575570                   ; 0050c93f
        ;   XREF to: 00575570 (UNCONDITIONAL_CALL)  ; undefined FUN_00575570()
    TEST EAX,EAX                        ; 0050c944
    JLE 0x0050c95c                      ; 0050c946
        ;   XREF to: 0050c95c (CONDITIONAL_JUMP)  ; LAB_0050c95c
    PUSH 0x0                            ; 0050c948
    CALL FUN_00575580                   ; 0050c94a
        ;   XREF to: 00575580 (UNCONDITIONAL_CALL)  ; undefined FUN_00575580()
    ADD ESP,0x4                         ; 0050c94f
    CALL FUN_005755c0                   ; 0050c952
        ;   XREF to: 005755c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005755c0()
    JMP 0x0050c333                      ; 0050c957
        ;   XREF to: 0050c333 (UNCONDITIONAL_JUMP)  ; LAB_0050c333
    PUSH 0x2                            ; 0050c95c
        ;   Label: LAB_0050c95c
    CALL FUN_00575580                   ; 0050c95e
        ;   XREF to: 00575580 (UNCONDITIONAL_CALL)  ; undefined FUN_00575580()
    ADD ESP,0x4                         ; 0050c963
    CALL FUN_005755c0                   ; 0050c966
        ;   XREF to: 005755c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005755c0()
    JMP 0x0050c333                      ; 0050c96b
        ;   XREF to: 0050c333 (UNCONDITIONAL_JUMP)  ; LAB_0050c333

