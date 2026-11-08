; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00552f50(undefined4 param_1,int param_2)
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
;   FUN_00522b90 at 00522d78
;   FUN_00553140 at 005531ba
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_00857cd4
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01c4eff8
;   undefined4 DAT_01c4effc
;   undefined4 DAT_01c4f000
;   undefined4 DAT_01c4f004
;
; Called Functions:
;   FUN_0044d1d0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00552f50
        ;   Label: FUN_00552f50
    SUB ESP,0x1c                        ; 00552f51
    CMP dword ptr [0x00857cd4],0x0      ; 00552f54 | DAT_00857cd4
    JZ 0x005530f5                       ; 00552f5b
        ;   XREF to: 005530f5 (CONDITIONAL_JUMP)  ; LAB_005530f5
    PUSH EDI                            ; 00552f61
    PUSH ESI                            ; 00552f62
    PUSH EBX                            ; 00552f63
    MOV EBX,dword ptr [ESP + 0x34]      ; 00552f64
    MOV EAX,[0x00612560]                ; 00552f68 | DAT_00612560
    MOV EDI,dword ptr [0x01c4f000]      ; 00552f6d | DAT_01c4f000
    MOV ECX,dword ptr [0x01c4eff8]      ; 00552f73 | DAT_01c4eff8
    MOV ESI,dword ptr [EAX]             ; 00552f79 | DAT_01bc120c
    MOV EAX,[0x01c4f000]                ; 00552f7b | DAT_01c4f000
    MOV EBP,dword ptr [0x01c4f004]      ; 00552f80 | DAT_01c4f004
    SUB EAX,ECX                         ; 00552f86
    MOV EDX,dword ptr [0x01c4effc]      ; 00552f88 | DAT_01c4effc
    MOV dword ptr [ESP + 0x20],EAX      ; 00552f8e
    MOV EAX,[0x01c4effc]                ; 00552f92 | DAT_01c4effc
    ADD EDI,ECX                         ; 00552f97
    SUB EBP,EAX                         ; 00552f99
    MOV EAX,[0x01c4f004]                ; 00552f9b | DAT_01c4f004
    XOR ECX,ECX                         ; 00552fa0
    ADD EAX,EDX                         ; 00552fa2
    MOV dword ptr [ESP + 0x1c],ECX      ; 00552fa4
    MOV dword ptr [ESP + 0x24],EAX      ; 00552fa8
    TEST EBX,EBX                        ; 00552fac
    JLE 0x005530b3                      ; 00552fae
        ;   XREF to: 005530b3 (CONDITIONAL_JUMP)  ; LAB_005530b3
    MOV AH,byte ptr [ESI + 0x13]        ; 00552fb4
        ;   Label: LAB_00552fb4
    MOV ECX,ESI                         ; 00552fb7
    TEST AH,0x80                        ; 00552fb9
    JZ 0x005530fa                       ; 00552fbc
        ;   XREF to: 005530fa (CONDITIONAL_JUMP)  ; LAB_005530fa
    MOV EAX,dword ptr [ESI + 0x8]       ; 00552fc2
    MOV EBX,dword ptr [ESI]             ; 00552fc5
    NEG EAX                             ; 00552fc7
    CMP EAX,EBX                         ; 00552fc9
    JGE 0x00552ffc                      ; 00552fcb
        ;   XREF to: 00552ffc (CONDITIONAL_JUMP)  ; LAB_00552ffc
    MOV EDX,dword ptr [ESI + 0x8]       ; 00552fcd
    CMP EBX,EDX                         ; 00552fd0
    JGE 0x00552ffc                      ; 00552fd2
        ;   XREF to: 00552ffc (CONDITIONAL_JUMP)  ; LAB_00552ffc
    MOV EBX,EDX                         ; 00552fd4
    MOV EAX,dword ptr [ESI]             ; 00552fd6
    MOV EDX,dword ptr [0x01c4eff8]      ; 00552fd8 | DAT_01c4eff8
    IMUL EDX                            ; 00552fde
    IDIV EBX                            ; 00552fe0
    MOV EBX,dword ptr [0x01c4f000]      ; 00552fe2 | DAT_01c4f000
    MOV EDX,dword ptr [ESP + 0x20]      ; 00552fe8
    ADD EAX,EBX                         ; 00552fec
    CMP EAX,EDX                         ; 00552fee
    JLE 0x00552ff6                      ; 00552ff0
        ;   XREF to: 00552ff6 (CONDITIONAL_JUMP)  ; LAB_00552ff6
    MOV dword ptr [ESP + 0x20],EAX      ; 00552ff2
    CMP EAX,EDI                         ; 00552ff6
        ;   Label: LAB_00552ff6
    JGE 0x00552ffc                      ; 00552ff8
        ;   XREF to: 00552ffc (CONDITIONAL_JUMP)  ; LAB_00552ffc
    MOV EDI,EAX                         ; 00552ffa
    MOV EAX,dword ptr [ECX + 0x8]       ; 00552ffc
        ;   Label: LAB_00552ffc
    MOV EBX,dword ptr [ECX + 0x4]       ; 00552fff
    NEG EAX                             ; 00553002
    CMP EAX,EBX                         ; 00553004
    JGE 0x00553038                      ; 00553006
        ;   XREF to: 00553038 (CONDITIONAL_JUMP)  ; LAB_00553038
    MOV EDX,dword ptr [ECX + 0x8]       ; 00553008
    CMP EBX,EDX                         ; 0055300b
    JGE 0x00553038                      ; 0055300d
        ;   XREF to: 00553038 (CONDITIONAL_JUMP)  ; LAB_00553038
    MOV EBX,EDX                         ; 0055300f
    MOV EAX,dword ptr [ECX + 0x4]       ; 00553011
    MOV EDX,dword ptr [0x01c4effc]      ; 00553014 | DAT_01c4effc
    IMUL EDX                            ; 0055301a
    IDIV EBX                            ; 0055301c
    MOV EBX,dword ptr [0x01c4f004]      ; 0055301e | DAT_01c4f004
    MOV EDX,dword ptr [ESP + 0x24]      ; 00553024
    ADD EAX,EBX                         ; 00553028
    CMP EAX,EDX                         ; 0055302a
    JLE 0x00553032                      ; 0055302c
        ;   XREF to: 00553032 (CONDITIONAL_JUMP)  ; LAB_00553032
    MOV dword ptr [ESP + 0x24],EAX      ; 0055302e
    CMP EAX,EBP                         ; 00553032
        ;   Label: LAB_00553032
    JGE 0x00553038                      ; 00553034
        ;   XREF to: 00553038 (CONDITIONAL_JUMP)  ; LAB_00553038
    MOV EBP,EAX                         ; 00553036
    MOV EBX,dword ptr [ECX + 0x8]       ; 00553038
        ;   Label: LAB_00553038
    CMP EBX,dword ptr [ECX]             ; 0055303b
    JG 0x00553050                       ; 0055303d
        ;   XREF to: 00553050 (CONDITIONAL_JUMP)  ; LAB_00553050
    MOV EDX,dword ptr [0x01c4f000]      ; 0055303f | DAT_01c4f000
    MOV EAX,[0x01c4eff8]                ; 00553045 | DAT_01c4eff8
    ADD EAX,EDX                         ; 0055304a
    MOV dword ptr [ESP + 0x20],EAX      ; 0055304c
    MOV EAX,dword ptr [ECX + 0x8]       ; 00553050
        ;   Label: LAB_00553050
    MOV EBX,dword ptr [ECX]             ; 00553053
    NEG EAX                             ; 00553055
    CMP EAX,EBX                         ; 00553057
    JL 0x00553068                       ; 00553059
        ;   XREF to: 00553068 (CONDITIONAL_JUMP)  ; LAB_00553068
    MOV EAX,[0x01c4eff8]                ; 0055305b | DAT_01c4eff8
    MOV EDI,dword ptr [0x01c4f000]      ; 00553060 | DAT_01c4f000
    SUB EDI,EAX                         ; 00553066
    MOV EDX,dword ptr [ECX + 0x8]       ; 00553068
        ;   Label: LAB_00553068
    CMP EDX,dword ptr [ECX + 0x4]       ; 0055306b
    JG 0x0055307e                       ; 0055306e
        ;   XREF to: 0055307e (CONDITIONAL_JUMP)  ; LAB_0055307e
    MOV EBX,dword ptr [0x01c4f004]      ; 00553070 | DAT_01c4f004
    MOV EBP,dword ptr [0x01c4effc]      ; 00553076 | DAT_01c4effc
    ADD EBP,EBX                         ; 0055307c
    MOV EAX,dword ptr [ECX + 0x8]       ; 0055307e
        ;   Label: LAB_0055307e
    MOV EDX,dword ptr [ECX + 0x4]       ; 00553081
    NEG EAX                             ; 00553084
    CMP EAX,EDX                         ; 00553086
    JL 0x0055309b                       ; 00553088
        ;   XREF to: 0055309b (CONDITIONAL_JUMP)  ; LAB_0055309b
    MOV ECX,dword ptr [0x01c4effc]      ; 0055308a | DAT_01c4effc
    MOV EAX,[0x01c4f004]                ; 00553090 | DAT_01c4f004
    SUB EAX,ECX                         ; 00553095
    MOV dword ptr [ESP + 0x24],EAX      ; 00553097
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0055309b
        ;   Label: LAB_0055309b
    MOV EDX,dword ptr [ESP + 0x34]      ; 0055309f
    INC EAX                             ; 005530a3
    ADD ESI,0x30                        ; 005530a4
    MOV dword ptr [ESP + 0x1c],EAX      ; 005530a7
    CMP EAX,EDX                         ; 005530ab
    JL 0x00552fb4                       ; 005530ad
        ;   XREF to: 00552fb4 (CONDITIONAL_JUMP)  ; LAB_00552fb4
    MOV ECX,dword ptr [ESP + 0x20]      ; 005530b3
        ;   Label: LAB_005530b3
    MOV EBX,dword ptr [ESP + 0x24]      ; 005530b7
    MOV EDX,dword ptr [0x00857cd4]      ; 005530bb | DAT_00857cd4
    SAR EBX,0x10                        ; 005530c1
    SAR EBP,0x10                        ; 005530c4
    PUSH EBX                            ; 005530c7
    SAR ECX,0x10                        ; 005530c8
    PUSH EBP                            ; 005530cb
    SAR EDI,0x10                        ; 005530cc
    PUSH ECX                            ; 005530cf
    MOV dword ptr [ESP + 0x18],EDI      ; 005530d0
    MOV dword ptr [ESP + 0x20],EBP      ; 005530d4
    PUSH EDI                            ; 005530d8
    MOV dword ptr [ESP + 0x30],ECX      ; 005530d9
    MOV dword ptr [ESP + 0x34],EBX      ; 005530dd
    PUSH EDX                            ; 005530e1
    MOV dword ptr [ESP + 0x24],ECX      ; 005530e2
    MOV dword ptr [ESP + 0x2c],EBX      ; 005530e6
    CALL FUN_0044d1d0                   ; 005530ea
        ;   XREF to: 0044d1d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044d1d0()
    ADD ESP,0x14                        ; 005530ef
    POP EBX                             ; 005530f2
    POP ESI                             ; 005530f3
    POP EDI                             ; 005530f4
    ADD ESP,0x1c                        ; 005530f5
        ;   Label: LAB_005530f5
    POP EBP                             ; 005530f8
    RET                                 ; 005530f9
    MOV EBX,dword ptr [ESI + 0x10]      ; 005530fa
        ;   Label: LAB_005530fa
    CMP EDI,EBX                         ; 005530fd
    JLE 0x00553103                      ; 005530ff
        ;   XREF to: 00553103 (CONDITIONAL_JUMP)  ; LAB_00553103
    MOV EDI,EBX                         ; 00553101
    MOV EAX,dword ptr [ESP + 0x20]      ; 00553103
        ;   Label: LAB_00553103
    MOV EDX,dword ptr [ECX + 0x10]      ; 00553107
    CMP EAX,EDX                         ; 0055310a
    JGE 0x00553112                      ; 0055310c
        ;   XREF to: 00553112 (CONDITIONAL_JUMP)  ; LAB_00553112
    MOV dword ptr [ESP + 0x20],EDX      ; 0055310e
    MOV EBX,dword ptr [ECX + 0x14]      ; 00553112
        ;   Label: LAB_00553112
    CMP EBP,EBX                         ; 00553115
    JLE 0x0055311b                      ; 00553117
        ;   XREF to: 0055311b (CONDITIONAL_JUMP)  ; LAB_0055311b
    MOV EBP,EBX                         ; 00553119
    MOV EAX,dword ptr [ESP + 0x24]      ; 0055311b
        ;   Label: LAB_0055311b
    MOV EDX,dword ptr [ECX + 0x14]      ; 0055311f
    CMP EAX,EDX                         ; 00553122
    JGE 0x0055309b                      ; 00553124
        ;   XREF to: 0055309b (CONDITIONAL_JUMP)  ; LAB_0055309b
    MOV dword ptr [ESP + 0x24],EDX      ; 0055312a
    JMP 0x0055309b                      ; 0055312e
        ;   XREF to: 0055309b (UNCONDITIONAL_JUMP)  ; LAB_0055309b

