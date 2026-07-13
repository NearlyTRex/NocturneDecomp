; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00553910(void)
;
; Local Variables:
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[39]:
;   FUN_00403fb0 at 00404003
;   FUN_0046f7e0 at 0046f8c5
;   FUN_0046fb40 at 0046fc95
;   FUN_0046fcd0 at 0046fe25
;   FUN_0046fe60 at 0046ffb5
;   FUN_0046fff0 at 00470092
;   FUN_00470eb0 at 004710ea
;   FUN_00471760 at 00471a1d
;   FUN_00474d70 at 00474e1b
;   FUN_0049d960 at 0049d9e0
;   ... and 29 more
;
; Referenced Globals:
;   string s_..\\wincore\\wddvmem.cpp_00597ae0
;   string s_Unable_to_lock_front_buffer_00597af7
;   string s_..\\wincore\\wddvmem.cpp_00597b13
;   string s_Unable_to_unlock_front_buffer_00597b2a
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_005b7624
;   undefined4 DAT_005c5010
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd2fa4
;   undefined4 DAT_01c02594
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_02ddf554
;   undefined4 DAT_02ddf564
;   ... and 1 more
;
; Called Functions:
;   FUN_004c8440
;   FUN_00532ba0
;   FUN_00553470
;   FUN_00553520
;   FUN_00553ba0
;   FUN_005591c0
;   FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553910
        ;   Label: FUN_00553910
    PUSH ESI                            ; 00553911
    PUSH EDI                            ; 00553912
    PUSH EBP                            ; 00553913
    MOV EBP,ESP                         ; 00553914
    SUB ESP,0x7c                        ; 00553916
    MOV EDX,dword ptr [0x01c02594]      ; 00553919 | DAT_01c02594
    TEST EDX,EDX                        ; 0055391f
    JNZ 0x005539d2                      ; 00553921
        ;   XREF to: 005539d2 (CONDITIONAL_JUMP)  ; LAB_005539d2
    MOV ECX,dword ptr [0x02ddf564]      ; 00553927 | DAT_02ddf564
    TEST ECX,ECX                        ; 0055392d
    JNZ 0x005539b0                      ; 0055392f
        ;   XREF to: 005539b0 (CONDITIONAL_JUMP)  ; LAB_005539b0
    CMP dword ptr [0x02ddf56c],0x0      ; 00553935 | DAT_02ddf56c
    JZ 0x005539eb                       ; 0055393c
        ;   XREF to: 005539eb (CONDITIONAL_JUMP)  ; LAB_005539eb
    MOV EBX,dword ptr [0x005c5010]      ; 00553942 | DAT_005c5010
    MOV dword ptr [0x02ddf56c],EDX      ; 00553948 | DAT_02ddf56c
    CALL FUN_00553470                   ; 0055394e
        ;   XREF to: 00553470 (UNCONDITIONAL_CALL)  ; undefined FUN_00553470()
    MOV ESI,dword ptr [0x005b7620]      ; 00553953 | DAT_005b7620
    XOR EDI,EDI                         ; 00553959
    TEST ESI,ESI                        ; 0055395b
    JLE 0x005539a1                      ; 0055395d
        ;   XREF to: 005539a1 (CONDITIONAL_JUMP)  ; LAB_005539a1
    XOR ESI,ESI                         ; 0055395f
    MOV ECX,dword ptr [0x005b761c]      ; 00553961 | DAT_005b761c
        ;   Label: LAB_00553961
    MOV EAX,dword ptr [ESI + 0x1bd2fa0] ; 00553967 | DAT_01bd2fa0 | DAT_01bd2fa4
    XOR EDX,EDX                         ; 0055396d
    TEST ECX,ECX                        ; 0055396f
    JLE 0x00553994                      ; 00553971
        ;   XREF to: 00553994 (CONDITIONAL_JUMP)  ; LAB_00553994
    MOV CL,byte ptr [EBX]               ; 00553973
        ;   Label: LAB_00553973
    MOV byte ptr [EAX],CL               ; 00553975
    MOV CL,byte ptr [EBX + 0x1]         ; 00553977
    ADD EBX,0x4                         ; 0055397a
    MOV byte ptr [EAX + 0x1],CL         ; 0055397d
    MOV CL,byte ptr [EBX + -0x2]        ; 00553980
    INC EDX                             ; 00553983
    MOV byte ptr [EAX + 0x2],CL         ; 00553984
    MOV ECX,dword ptr [0x005b761c]      ; 00553987 | DAT_005b761c
    ADD EAX,0x3                         ; 0055398d
    CMP EDX,ECX                         ; 00553990
    JL 0x00553973                       ; 00553992
        ;   XREF to: 00553973 (CONDITIONAL_JUMP)  ; LAB_00553973
    MOV EAX,[0x005b7620]                ; 00553994 | DAT_005b7620
        ;   Label: LAB_00553994
    INC EDI                             ; 00553999
    ADD ESI,0x4                         ; 0055399a
    CMP EDI,EAX                         ; 0055399d
    JL 0x00553961                       ; 0055399f
        ;   XREF to: 00553961 (CONDITIONAL_JUMP)  ; LAB_00553961
    CALL FUN_00553520                   ; 005539a1
        ;   XREF to: 00553520 (UNCONDITIONAL_CALL)  ; undefined FUN_00553520()
        ;   Label: LAB_005539a1
    MOV dword ptr [0x02ddf56c],0x1      ; 005539a6 | DAT_02ddf56c
    MOV EBX,dword ptr [0x02ddf554]      ; 005539b0 | DAT_02ddf554
        ;   Label: LAB_005539b0
    TEST EBX,EBX                        ; 005539b6
    JNZ 0x00553b2f                      ; 005539b8
        ;   XREF to: 00553b2f (CONDITIONAL_JUMP)  ; LAB_00553b2f
    XOR ESI,ESI                         ; 005539be
        ;   Label: LAB_005539be
    MOV dword ptr [0x02ddf564],ESI      ; 005539c0 | DAT_02ddf564
    CALL FUN_005591c0                   ; 005539c6
        ;   XREF to: 005591c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005591c0()
    MOV ESP,EBP                         ; 005539cb
    POP EBP                             ; 005539cd
    POP EDI                             ; 005539ce
    POP ESI                             ; 005539cf
    POP EBX                             ; 005539d0
    RET                                 ; 005539d1
    CALL FUN_00532ba0                   ; 005539d2
        ;   XREF to: 00532ba0 (UNCONDITIONAL_CALL)  ; undefined FUN_00532ba0()
        ;   Label: LAB_005539d2
    XOR ESI,ESI                         ; 005539d7
    MOV dword ptr [0x02ddf564],ESI      ; 005539d9 | DAT_02ddf564
    CALL FUN_005591c0                   ; 005539df
        ;   XREF to: 005591c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005591c0()
    MOV ESP,EBP                         ; 005539e4
    POP EBP                             ; 005539e6
    POP EDI                             ; 005539e7
    POP ESI                             ; 005539e8
    POP EBX                             ; 005539e9
    RET                                 ; 005539ea
    MOV EAX,[0x005c5010]                ; 005539eb | DAT_005c5010
        ;   Label: LAB_005539eb
    MOV dword ptr [EBP + -0x10],EAX     ; 005539f0
    MOV EAX,[0x005b7624]                ; 005539f3 | DAT_005b7624
    MOV EDX,EAX                         ; 005539f8
    SAR EDX,0x1f                        ; 005539fa
    SHL EDX,0x3                         ; 005539fd
    SBB EAX,EDX                         ; 00553a00
    SAR EAX,0x3                         ; 00553a02
    MOV EDX,dword ptr [0x005b761c]      ; 00553a05 | DAT_005b761c
    IMUL EDX,EAX                        ; 00553a0b
    PUSH 0x6c                           ; 00553a0e
    PUSH ECX                            ; 00553a10
    MOV dword ptr [EBP + -0xc],EDX      ; 00553a11
    LEA EAX,[EBP + -0x7c]               ; 00553a14
    PUSH EAX                            ; 00553a17
    CALL FUN_00563cc0                   ; 00553a18
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00563cc0()
    ADD ESP,0xc                         ; 00553a1d
    PUSH 0x0                            ; 00553a20
    PUSH 0x1                            ; 00553a22
    LEA EDX,[EBP + -0x7c]               ; 00553a24
    MOV ESI,0x6c                        ; 00553a27
    PUSH EDX                            ; 00553a2c
    MOV EAX,[0x02ddf554]                ; 00553a2d | DAT_02ddf554
    MOV dword ptr [EBP + -0x7c],ESI     ; 00553a32
    PUSH 0x0                            ; 00553a35
    MOV EBX,dword ptr [EAX]             ; 00553a37
    PUSH EAX                            ; 00553a39
    CALL dword ptr [EBX + 0x64]         ; 00553a3a
    TEST EAX,EAX                        ; 00553a3d
    JZ 0x00553a63                       ; 00553a3f
        ;   XREF to: 00553a63 (CONDITIONAL_JUMP)  ; LAB_00553a63
    MOV EDI,0x597ae0                    ; 00553a41 | = "..\\wincore\\wddvmem.cpp"
    MOV EAX,0x346                       ; 00553a46
    PUSH 0x597af7                       ; 00553a4b | = "Unable to lock front buffer"
    MOV dword ptr [0x01cc4800],EDI      ; 00553a50 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 00553a56 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00553a5b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00553a60
    MOV EAX,dword ptr [EBP + -0x58]     ; 00553a63
        ;   Label: LAB_00553a63
    MOV dword ptr [EBP + -0x8],EAX      ; 00553a66
    XOR EDX,EDX                         ; 00553a69
    MOV ECX,dword ptr [0x005b7620]      ; 00553a6b | DAT_005b7620
    MOV dword ptr [EBP + -0x4],EDX      ; 00553a71
    TEST ECX,ECX                        ; 00553a74
    JLE 0x00553ae0                      ; 00553a76
        ;   XREF to: 00553ae0 (CONDITIONAL_JUMP)  ; LAB_00553ae0
    MOV ECX,dword ptr [EBP + 0xfffffff4] ; 00553a78
        ;   Label: LAB_00553a78
    MOV ESI,dword ptr [EBP + 0xfffffff0] ; 00553a7e
    MOV EDI,dword ptr [EBP + 0xfffffff8] ; 00553a84
    MOVQ MM0,qword ptr [ESI]            ; 00553a8a
        ;   Label: LAB_00553a8a
    MOVQ MM1,qword ptr [ESI + 0x8]      ; 00553a8d
    MOVQ MM2,qword ptr [ESI + 0x10]     ; 00553a91
    MOVQ MM3,qword ptr [ESI + 0x18]     ; 00553a95
    MOVQ qword ptr [EDI],MM0            ; 00553a99
    MOVQ qword ptr [EDI + 0x8],MM1      ; 00553a9c
    MOVQ qword ptr [EDI + 0x10],MM2     ; 00553aa0
    MOVQ qword ptr [EDI + 0x18],MM3     ; 00553aa4
    ADD ESI,0x20                        ; 00553aa8
    ADD EDI,0x20                        ; 00553aab
    SUB ECX,0x20                        ; 00553aae
    JG 0x00553a8a                       ; 00553ab1
        ;   XREF to: 00553a8a (CONDITIONAL_JUMP)  ; LAB_00553a8a
    EMMS                                ; 00553ab3
    MOV EAX,dword ptr [EBP + -0xc]      ; 00553ab5
    ADD dword ptr [EBP + -0x10],EAX     ; 00553ab8
    MOV EAX,dword ptr [EBP + -0x6c]     ; 00553abb
    ADD dword ptr [EBP + -0x8],EAX      ; 00553abe
    MOV ECX,dword ptr [EBP + -0x4]      ; 00553ac1
    INC ECX                             ; 00553ac4
    MOV EBX,dword ptr [0x005b7620]      ; 00553ac5 | DAT_005b7620
    MOV dword ptr [EBP + -0x4],ECX      ; 00553acb
    CMP ECX,EBX                         ; 00553ace
    JL 0x00553a78                       ; 00553ad0
        ;   XREF to: 00553a78 (CONDITIONAL_JUMP)  ; LAB_00553a78
    LEA EAX,[EAX]                       ; 00553ad2
    LEA EDX,[EDX]                       ; 00553ad8
    MOV EAX,EAX                         ; 00553ade
    PUSH 0x0                            ; 00553ae0
        ;   Label: LAB_00553ae0
    MOV EAX,[0x02ddf554]                ; 00553ae2 | DAT_02ddf554
    PUSH EAX                            ; 00553ae7
    MOV EDX,dword ptr [EAX]             ; 00553ae8
    CALL dword ptr [EDX + 0x80]         ; 00553aea
    TEST EAX,EAX                        ; 00553af0
    JZ 0x005539be                       ; 00553af2
        ;   XREF to: 005539be (CONDITIONAL_JUMP)  ; LAB_005539be
    MOV ESI,0x597b13                    ; 00553af8 | = "..\\wincore\\wddvmem.cpp"
    MOV EDI,0x368                       ; 00553afd
    PUSH 0x597b2a                       ; 00553b02 | = "Unable to unlock front buffer"
    MOV dword ptr [0x01cc4800],ESI      ; 00553b07 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 00553b0d | DAT_01cc4804
    CALL FUN_004c8440                   ; 00553b13
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00553b18
    XOR ESI,ESI                         ; 00553b1b
    MOV dword ptr [0x02ddf564],ESI      ; 00553b1d | DAT_02ddf564
    CALL FUN_005591c0                   ; 00553b23
        ;   XREF to: 005591c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005591c0()
    MOV ESP,EBP                         ; 00553b28
    POP EBP                             ; 00553b2a
    POP EDI                             ; 00553b2b
    POP ESI                             ; 00553b2c
    POP EBX                             ; 00553b2d
    RET                                 ; 00553b2e
    PUSH 0x1                            ; 00553b2f
        ;   Label: LAB_00553b2f
    PUSH 0x0                            ; 00553b31
    MOV EDX,dword ptr [EBX]             ; 00553b33
    PUSH EBX                            ; 00553b35
    CALL dword ptr [EDX + 0x2c]         ; 00553b36
    TEST EAX,EAX                        ; 00553b39
    JZ 0x005539be                       ; 00553b3b
        ;   XREF to: 005539be (CONDITIONAL_JUMP)  ; LAB_005539be
    CMP EAX,0x887601c2                  ; 00553b41
    JNZ 0x005539be                      ; 00553b46
        ;   XREF to: 005539be (CONDITIONAL_JUMP)  ; LAB_005539be
    CALL FUN_00553ba0                   ; 00553b4c
        ;   XREF to: 00553ba0 (UNCONDITIONAL_CALL)  ; undefined FUN_00553ba0()
    XOR ESI,ESI                         ; 00553b51
    MOV dword ptr [0x02ddf564],ESI      ; 00553b53 | DAT_02ddf564
    CALL FUN_005591c0                   ; 00553b59
        ;   XREF to: 005591c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005591c0()
    MOV ESP,EBP                         ; 00553b5e
    POP EBP                             ; 00553b60
    POP EDI                             ; 00553b61
    POP ESI                             ; 00553b62
    POP EBX                             ; 00553b63
    RET                                 ; 00553b64

