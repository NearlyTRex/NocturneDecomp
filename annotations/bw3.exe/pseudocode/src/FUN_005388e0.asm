; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005388e0(undefined4 param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   FUN_004fa490 at 004fa678
;   FUN_00538ad0 at 00538b4a
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_00874584
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c6b598
;   undefined4 DAT_01c6b59c
;   undefined4 DAT_01c6b5a0
;   undefined4 DAT_01c6b5a4
;
; Called Functions:
;   FUN_00449310
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005388e0
        ;   Label: FUN_005388e0
    SUB ESP,0x1c                        ; 005388e1
    CMP dword ptr [0x00874584],0x0      ; 005388e4 | DAT_00874584
    JZ 0x00538a85                       ; 005388eb
        ;   XREF to: 00538a85 (CONDITIONAL_JUMP)  ; LAB_00538a85
    PUSH EDI                            ; 005388f1
    PUSH ESI                            ; 005388f2
    PUSH EBX                            ; 005388f3
    MOV EBX,dword ptr [ESP + 0x34]      ; 005388f4
    MOV EAX,[0x005f2afc]                ; 005388f8 | DAT_005f2afc
    MOV EDI,dword ptr [0x01c6b5a0]      ; 005388fd | DAT_01c6b5a0
    MOV ECX,dword ptr [0x01c6b598]      ; 00538903 | DAT_01c6b598
    MOV ESI,dword ptr [EAX]             ; 00538909 | DAT_01bdd7e4
    MOV EAX,[0x01c6b5a0]                ; 0053890b | DAT_01c6b5a0
    MOV EBP,dword ptr [0x01c6b5a4]      ; 00538910 | DAT_01c6b5a4
    SUB EAX,ECX                         ; 00538916
    MOV EDX,dword ptr [0x01c6b59c]      ; 00538918 | DAT_01c6b59c
    MOV dword ptr [ESP + 0x20],EAX      ; 0053891e
    MOV EAX,[0x01c6b59c]                ; 00538922 | DAT_01c6b59c
    ADD EDI,ECX                         ; 00538927
    SUB EBP,EAX                         ; 00538929
    MOV EAX,[0x01c6b5a4]                ; 0053892b | DAT_01c6b5a4
    XOR ECX,ECX                         ; 00538930
    ADD EAX,EDX                         ; 00538932
    MOV dword ptr [ESP + 0x1c],ECX      ; 00538934
    MOV dword ptr [ESP + 0x24],EAX      ; 00538938
    TEST EBX,EBX                        ; 0053893c
    JLE 0x00538a43                      ; 0053893e
        ;   XREF to: 00538a43 (CONDITIONAL_JUMP)  ; LAB_00538a43
    MOV AH,byte ptr [ESI + 0x13]        ; 00538944
        ;   Label: LAB_00538944
    MOV ECX,ESI                         ; 00538947
    TEST AH,0x80                        ; 00538949
    JZ 0x00538a8a                       ; 0053894c
        ;   XREF to: 00538a8a (CONDITIONAL_JUMP)  ; LAB_00538a8a
    MOV EAX,dword ptr [ESI + 0x8]       ; 00538952
    MOV EBX,dword ptr [ESI]             ; 00538955
    NEG EAX                             ; 00538957
    CMP EAX,EBX                         ; 00538959
    JGE 0x0053898c                      ; 0053895b
        ;   XREF to: 0053898c (CONDITIONAL_JUMP)  ; LAB_0053898c
    MOV EDX,dword ptr [ESI + 0x8]       ; 0053895d
    CMP EBX,EDX                         ; 00538960
    JGE 0x0053898c                      ; 00538962
        ;   XREF to: 0053898c (CONDITIONAL_JUMP)  ; LAB_0053898c
    MOV EBX,EDX                         ; 00538964
    MOV EAX,dword ptr [ESI]             ; 00538966
    MOV EDX,dword ptr [0x01c6b598]      ; 00538968 | DAT_01c6b598
    IMUL EDX                            ; 0053896e
    IDIV EBX                            ; 00538970
    MOV EBX,dword ptr [0x01c6b5a0]      ; 00538972 | DAT_01c6b5a0
    MOV EDX,dword ptr [ESP + 0x20]      ; 00538978
    ADD EAX,EBX                         ; 0053897c
    CMP EAX,EDX                         ; 0053897e
    JLE 0x00538986                      ; 00538980
        ;   XREF to: 00538986 (CONDITIONAL_JUMP)  ; LAB_00538986
    MOV dword ptr [ESP + 0x20],EAX      ; 00538982
    CMP EAX,EDI                         ; 00538986
        ;   Label: LAB_00538986
    JGE 0x0053898c                      ; 00538988
        ;   XREF to: 0053898c (CONDITIONAL_JUMP)  ; LAB_0053898c
    MOV EDI,EAX                         ; 0053898a
    MOV EAX,dword ptr [ECX + 0x8]       ; 0053898c
        ;   Label: LAB_0053898c
    MOV EBX,dword ptr [ECX + 0x4]       ; 0053898f
    NEG EAX                             ; 00538992
    CMP EAX,EBX                         ; 00538994
    JGE 0x005389c8                      ; 00538996
        ;   XREF to: 005389c8 (CONDITIONAL_JUMP)  ; LAB_005389c8
    MOV EDX,dword ptr [ECX + 0x8]       ; 00538998
    CMP EBX,EDX                         ; 0053899b
    JGE 0x005389c8                      ; 0053899d
        ;   XREF to: 005389c8 (CONDITIONAL_JUMP)  ; LAB_005389c8
    MOV EBX,EDX                         ; 0053899f
    MOV EAX,dword ptr [ECX + 0x4]       ; 005389a1
    MOV EDX,dword ptr [0x01c6b59c]      ; 005389a4 | DAT_01c6b59c
    IMUL EDX                            ; 005389aa
    IDIV EBX                            ; 005389ac
    MOV EBX,dword ptr [0x01c6b5a4]      ; 005389ae | DAT_01c6b5a4
    MOV EDX,dword ptr [ESP + 0x24]      ; 005389b4
    ADD EAX,EBX                         ; 005389b8
    CMP EAX,EDX                         ; 005389ba
    JLE 0x005389c2                      ; 005389bc
        ;   XREF to: 005389c2 (CONDITIONAL_JUMP)  ; LAB_005389c2
    MOV dword ptr [ESP + 0x24],EAX      ; 005389be
    CMP EAX,EBP                         ; 005389c2
        ;   Label: LAB_005389c2
    JGE 0x005389c8                      ; 005389c4
        ;   XREF to: 005389c8 (CONDITIONAL_JUMP)  ; LAB_005389c8
    MOV EBP,EAX                         ; 005389c6
    MOV EBX,dword ptr [ECX + 0x8]       ; 005389c8
        ;   Label: LAB_005389c8
    CMP EBX,dword ptr [ECX]             ; 005389cb
    JG 0x005389e0                       ; 005389cd
        ;   XREF to: 005389e0 (CONDITIONAL_JUMP)  ; LAB_005389e0
    MOV EDX,dword ptr [0x01c6b5a0]      ; 005389cf | DAT_01c6b5a0
    MOV EAX,[0x01c6b598]                ; 005389d5 | DAT_01c6b598
    ADD EAX,EDX                         ; 005389da
    MOV dword ptr [ESP + 0x20],EAX      ; 005389dc
    MOV EAX,dword ptr [ECX + 0x8]       ; 005389e0
        ;   Label: LAB_005389e0
    MOV EBX,dword ptr [ECX]             ; 005389e3
    NEG EAX                             ; 005389e5
    CMP EAX,EBX                         ; 005389e7
    JL 0x005389f8                       ; 005389e9
        ;   XREF to: 005389f8 (CONDITIONAL_JUMP)  ; LAB_005389f8
    MOV EAX,[0x01c6b598]                ; 005389eb | DAT_01c6b598
    MOV EDI,dword ptr [0x01c6b5a0]      ; 005389f0 | DAT_01c6b5a0
    SUB EDI,EAX                         ; 005389f6
    MOV EDX,dword ptr [ECX + 0x8]       ; 005389f8
        ;   Label: LAB_005389f8
    CMP EDX,dword ptr [ECX + 0x4]       ; 005389fb
    JG 0x00538a0e                       ; 005389fe
        ;   XREF to: 00538a0e (CONDITIONAL_JUMP)  ; LAB_00538a0e
    MOV EBX,dword ptr [0x01c6b5a4]      ; 00538a00 | DAT_01c6b5a4
    MOV EBP,dword ptr [0x01c6b59c]      ; 00538a06 | DAT_01c6b59c
    ADD EBP,EBX                         ; 00538a0c
    MOV EAX,dword ptr [ECX + 0x8]       ; 00538a0e
        ;   Label: LAB_00538a0e
    MOV EDX,dword ptr [ECX + 0x4]       ; 00538a11
    NEG EAX                             ; 00538a14
    CMP EAX,EDX                         ; 00538a16
    JL 0x00538a2b                       ; 00538a18
        ;   XREF to: 00538a2b (CONDITIONAL_JUMP)  ; LAB_00538a2b
    MOV ECX,dword ptr [0x01c6b59c]      ; 00538a1a | DAT_01c6b59c
    MOV EAX,[0x01c6b5a4]                ; 00538a20 | DAT_01c6b5a4
    SUB EAX,ECX                         ; 00538a25
    MOV dword ptr [ESP + 0x24],EAX      ; 00538a27
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00538a2b
        ;   Label: LAB_00538a2b
    MOV EDX,dword ptr [ESP + 0x34]      ; 00538a2f
    INC EAX                             ; 00538a33
    ADD ESI,0x30                        ; 00538a34
    MOV dword ptr [ESP + 0x1c],EAX      ; 00538a37
    CMP EAX,EDX                         ; 00538a3b
    JL 0x00538944                       ; 00538a3d
        ;   XREF to: 00538944 (CONDITIONAL_JUMP)  ; LAB_00538944
    MOV ECX,dword ptr [ESP + 0x20]      ; 00538a43
        ;   Label: LAB_00538a43
    MOV EBX,dword ptr [ESP + 0x24]      ; 00538a47
    MOV EDX,dword ptr [0x00874584]      ; 00538a4b | DAT_00874584
    SAR EBX,0x10                        ; 00538a51
    SAR EBP,0x10                        ; 00538a54
    PUSH EBX                            ; 00538a57
    SAR ECX,0x10                        ; 00538a58
    PUSH EBP                            ; 00538a5b
    SAR EDI,0x10                        ; 00538a5c
    PUSH ECX                            ; 00538a5f
    MOV dword ptr [ESP + 0x18],EDI      ; 00538a60
    MOV dword ptr [ESP + 0x20],EBP      ; 00538a64
    PUSH EDI                            ; 00538a68
    MOV dword ptr [ESP + 0x30],ECX      ; 00538a69
    MOV dword ptr [ESP + 0x34],EBX      ; 00538a6d
    PUSH EDX                            ; 00538a71
    MOV dword ptr [ESP + 0x24],ECX      ; 00538a72
    MOV dword ptr [ESP + 0x2c],EBX      ; 00538a76
    CALL FUN_00449310                   ; 00538a7a
        ;   XREF to: 00449310 (UNCONDITIONAL_CALL)  ; undefined FUN_00449310()
    ADD ESP,0x14                        ; 00538a7f
    POP EBX                             ; 00538a82
    POP ESI                             ; 00538a83
    POP EDI                             ; 00538a84
    ADD ESP,0x1c                        ; 00538a85
        ;   Label: LAB_00538a85
    POP EBP                             ; 00538a88
    RET                                 ; 00538a89
    MOV EBX,dword ptr [ESI + 0x10]      ; 00538a8a
        ;   Label: LAB_00538a8a
    CMP EDI,EBX                         ; 00538a8d
    JLE 0x00538a93                      ; 00538a8f
        ;   XREF to: 00538a93 (CONDITIONAL_JUMP)  ; LAB_00538a93
    MOV EDI,EBX                         ; 00538a91
    MOV EAX,dword ptr [ESP + 0x20]      ; 00538a93
        ;   Label: LAB_00538a93
    MOV EDX,dword ptr [ECX + 0x10]      ; 00538a97
    CMP EAX,EDX                         ; 00538a9a
    JGE 0x00538aa2                      ; 00538a9c
        ;   XREF to: 00538aa2 (CONDITIONAL_JUMP)  ; LAB_00538aa2
    MOV dword ptr [ESP + 0x20],EDX      ; 00538a9e
    MOV EBX,dword ptr [ECX + 0x14]      ; 00538aa2
        ;   Label: LAB_00538aa2
    CMP EBP,EBX                         ; 00538aa5
    JLE 0x00538aab                      ; 00538aa7
        ;   XREF to: 00538aab (CONDITIONAL_JUMP)  ; LAB_00538aab
    MOV EBP,EBX                         ; 00538aa9
    MOV EAX,dword ptr [ESP + 0x24]      ; 00538aab
        ;   Label: LAB_00538aab
    MOV EDX,dword ptr [ECX + 0x14]      ; 00538aaf
    CMP EAX,EDX                         ; 00538ab2
    JGE 0x00538a2b                      ; 00538ab4
        ;   XREF to: 00538a2b (CONDITIONAL_JUMP)  ; LAB_00538a2b
    MOV dword ptr [ESP + 0x24],EDX      ; 00538aba
    JMP 0x00538a2b                      ; 00538abe
        ;   XREF to: 00538a2b (UNCONDITIONAL_JUMP)  ; LAB_00538a2b

