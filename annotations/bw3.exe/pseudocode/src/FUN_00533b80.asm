; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00533b80(int param_1,undefined4 param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   FUN_00534420 at 00534594
;   FUN_00534890 at 00534f28
;   FUN_00535a80 at 00535bae
;   FUN_005365c0 at 0053674c
;   FUN_00536990 at 00536b08
;   FUN_00540cf0 at 00540dd9
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005f4a58
;   undefined4 DAT_00603b2c
;   undefined4 DAT_00603b38
;   undefined4 DAT_00606aa0
;   undefined4 DAT_00606b20
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_0203b37c
;   undefined4 DAT_02cfd950
;
; Called Functions:
;   FUN_00460f20
;   FUN_0046ce90
;   FUN_0046d0d0
;   FUN_0046d100
;   FUN_0046d540
;   FUN_0046f480
;   FUN_00476070
;   FUN_00477060
;   FUN_004771c0
;   FUN_004ca940
;   FUN_004f5610
;   FUN_0053adf0
;   FUN_0053af20
;   FUN_0053afa0
;   FUN_005723d0
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00533b80
        ;   Label: FUN_00533b80
    PUSH ESI                            ; 00533b81
    PUSH EDI                            ; 00533b82
    PUSH EBP                            ; 00533b83
    SUB ESP,0xc                         ; 00533b84
    MOV EBX,dword ptr [ESP + 0x20]      ; 00533b87
    MOV ESI,dword ptr [ESP + 0x28]      ; 00533b8b
    PUSH 0x603b2c                       ; 00533b8f | DAT_00603b2c
    MOV EDX,dword ptr [0x005f2afc]      ; 00533b94 | DAT_005f2afc
    PUSH EDX                            ; 00533b9a | DAT_01bdd7e4
    CALL FUN_0046d100                   ; 00533b9b
        ;   XREF to: 0046d100 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d100()
    ADD ESP,0x8                         ; 00533ba0
    MOV ECX,dword ptr [0x005f2afc]      ; 00533ba3 | DAT_005f2afc
    PUSH 0x3e800000                     ; 00533ba9
    PUSH ECX                            ; 00533bae | DAT_01bdd7e4
    CALL FUN_0046d0d0                   ; 00533baf
        ;   XREF to: 0046d0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d0d0()
    ADD ESP,0x8                         ; 00533bb4
    TEST ESI,ESI                        ; 00533bb7
    JZ 0x00533d61                       ; 00533bb9
        ;   XREF to: 00533d61 (CONDITIONAL_JUMP)  ; LAB_00533d61
    MOV EDI,dword ptr [EBX + 0x15aeb8]  ; 00533bbf
    TEST EDI,EDI                        ; 00533bc5
    JL 0x00533d61                       ; 00533bc7
        ;   XREF to: 00533d61 (CONDITIONAL_JUMP)  ; LAB_00533d61
    IMUL EAX,EDI,0x1a4                  ; 00533bcd
    ADD EAX,EBX                         ; 00533bd3
    MOV EDX,dword ptr [EAX + 0x198]     ; 00533bd5
    CMP EDX,0x1                         ; 00533bdb
    JGE 0x00533d44                      ; 00533bde
        ;   XREF to: 00533d44 (CONDITIONAL_JUMP)  ; LAB_00533d44
    MOV ESI,0x2                         ; 00533be4
        ;   Label: LAB_00533be4
    XOR EAX,EAX                         ; 00533be9
        ;   Label: LAB_00533be9
    PUSH EAX                            ; 00533beb
        ;   Label: LAB_00533beb
    PUSH dword ptr [ESP + 0x28]         ; 00533bec
    PUSH 0x203b37c                      ; 00533bf0 | DAT_0203b37c
    CALL FUN_00476070                   ; 00533bf5
        ;   XREF to: 00476070 (UNCONDITIONAL_CALL)  ; undefined FUN_00476070()
    ADD ESP,0xc                         ; 00533bfa
    CMP ESI,0x2                         ; 00533bfd
    JNZ 0x00533c2b                      ; 00533c00
        ;   XREF to: 00533c2b (CONDITIONAL_JUMP)  ; LAB_00533c2b
    IMUL EAX,dword ptr [EBX + 0x15aeb8],0x1a4 ; 00533c02
    LEA ESI,[EBX + 0x4]                 ; 00533c0c
    ADD EAX,ESI                         ; 00533c0f
    LEA ESI,[EAX + 0x198]               ; 00533c11
    PUSH ESI                            ; 00533c17
    ADD EAX,0x194                       ; 00533c18
    PUSH EAX                            ; 00533c1d
    PUSH 0x203b37c                      ; 00533c1e | DAT_0203b37c
    CALL FUN_004771c0                   ; 00533c23
        ;   XREF to: 004771c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004771c0()
    ADD ESP,0xc                         ; 00533c28
    MOV ECX,dword ptr [0x005f2afc]      ; 00533c2b | DAT_005f2afc
        ;   Label: LAB_00533c2b
    PUSH ECX                            ; 00533c31 | DAT_01bdd7e4
    CALL FUN_0046d540                   ; 00533c32
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d540()
    ADD ESP,0x4                         ; 00533c37
    TEST EAX,EAX                        ; 00533c3a
    JNZ 0x00533dcd                      ; 00533c3c
        ;   XREF to: 00533dcd (CONDITIONAL_JUMP)  ; LAB_00533dcd
    CMP dword ptr [0x01c6cee8],0x0      ; 00533c42 | DAT_01c6cee8
    JNZ 0x00533c54                      ; 00533c49
        ;   XREF to: 00533c54 (CONDITIONAL_JUMP)  ; LAB_00533c54
    PUSH EBX                            ; 00533c4b
    CALL FUN_0053afa0                   ; 00533c4c
        ;   XREF to: 0053afa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053afa0()
    ADD ESP,0x4                         ; 00533c51
    MOV EDX,dword ptr [0x01c6cee8]      ; 00533c54 | DAT_01c6cee8
        ;   Label: LAB_00533c54
    TEST EDX,EDX                        ; 00533c5a
    JNZ 0x00533ccb                      ; 00533c5c
        ;   XREF to: 00533ccb (CONDITIONAL_JUMP)  ; LAB_00533ccb
    CMP dword ptr [EBX + 0x15aca4],0x0  ; 00533c5e
    JZ 0x00533c97                       ; 00533c65
        ;   XREF to: 00533c97 (CONDITIONAL_JUMP)  ; LAB_00533c97
    MOV EAX,ESP                         ; 00533c67
    PUSH EAX                            ; 00533c69
    MOV EAX,[0x005f2afc]                ; 00533c6a | DAT_005f2afc
    MOV dword ptr [ESP + 0x4],EDX       ; 00533c6f
    PUSH EAX                            ; 00533c73 | DAT_01bdd7e4
    MOV dword ptr [ESP + 0xc],EDX       ; 00533c74
    MOV dword ptr [ESP + 0x10],EDX      ; 00533c78
    CALL FUN_0046ce90                   ; 00533c7c
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ce90()
    ADD ESP,0x8                         ; 00533c81
    PUSH -0x1                           ; 00533c84
    XOR ESI,ESI                         ; 00533c86
    PUSH ESI                            ; 00533c88
    PUSH ESI                            ; 00533c89
    PUSH 0x203b70c                      ; 00533c8a
    CALL FUN_00460f20                   ; 00533c8f
        ;   XREF to: 00460f20 (UNCONDITIONAL_CALL)  ; undefined FUN_00460f20()
    ADD ESP,0x10                        ; 00533c94
    CMP dword ptr [EBX + 0x15aca0],0x0  ; 00533c97
        ;   Label: LAB_00533c97
    JZ 0x00533d71                       ; 00533c9e
        ;   XREF to: 00533d71 (CONDITIONAL_JUMP)  ; LAB_00533d71
    CMP dword ptr [EBX + 0x15ac9c],0x0  ; 00533ca4
        ;   Label: LAB_00533ca4
    JZ 0x00533da0                       ; 00533cab
        ;   XREF to: 00533da0 (CONDITIONAL_JUMP)  ; LAB_00533da0
    CMP dword ptr [EBX + 0x15acb8],0x0  ; 00533cb1
        ;   Label: LAB_00533cb1
    JZ 0x00533ccb                       ; 00533cb8
        ;   XREF to: 00533ccb (CONDITIONAL_JUMP)  ; LAB_00533ccb
    PUSH 0x1                            ; 00533cba
    MOV ESI,dword ptr [0x00606aa0]      ; 00533cbc | DAT_00606aa0
    PUSH ESI                            ; 00533cc2
    CALL FUN_005723d0                   ; 00533cc3
        ;   XREF to: 005723d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005723d0()
    ADD ESP,0x8                         ; 00533cc8
    MOV EBP,dword ptr [EBX + 0x15acc8]  ; 00533ccb
        ;   Label: LAB_00533ccb
    XOR EDI,EDI                         ; 00533cd1
    TEST EBP,EBP                        ; 00533cd3
    JLE 0x00533d3c                      ; 00533cd5
        ;   XREF to: 00533d3c (CONDITIONAL_JUMP)  ; LAB_00533d3c
    MOV ESI,EBX                         ; 00533cd7
    MOV EAX,dword ptr [ESI + 0x15accc]  ; 00533cd9
        ;   Label: LAB_00533cd9
    ADD EAX,0x21c                       ; 00533cdf
    PUSH EAX                            ; 00533ce4
    CALL FUN_004f5610                   ; 00533ce5
        ;   XREF to: 004f5610 (UNCONDITIONAL_CALL)  ; undefined FUN_004f5610()
    MOV EAX,dword ptr [ESI + 0x15accc]  ; 00533cea
    MOV EBP,dword ptr [EAX + 0x1b0]     ; 00533cf0
    ADD ESP,0x4                         ; 00533cf6
    TEST EBP,EBP                        ; 00533cf9
    JZ 0x00533d06                       ; 00533cfb
        ;   XREF to: 00533d06 (CONDITIONAL_JUMP)  ; LAB_00533d06
    PUSH EAX                            ; 00533cfd
    CALL FUN_004ca940                   ; 00533cfe
        ;   XREF to: 004ca940 (UNCONDITIONAL_CALL)  ; undefined FUN_004ca940()
    ADD ESP,0x4                         ; 00533d03
    PUSH 0x1                            ; 00533d06
        ;   Label: LAB_00533d06
    PUSH EDI                            ; 00533d08
    PUSH EBX                            ; 00533d09
    CALL FUN_0053adf0                   ; 00533d0a
        ;   XREF to: 0053adf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053adf0()
    ADD ESP,0xc                         ; 00533d0f
    PUSH 0x0                            ; 00533d12
    PUSH dword ptr [ESP + 0x28]         ; 00533d14
    PUSH 0x203b37c                      ; 00533d18 | DAT_0203b37c
    CALL FUN_00476070                   ; 00533d1d
        ;   XREF to: 00476070 (UNCONDITIONAL_CALL)  ; undefined FUN_00476070()
    ADD ESP,0xc                         ; 00533d22
    PUSH EBX                            ; 00533d25
    ADD ESI,0x4                         ; 00533d26
    INC EDI                             ; 00533d29
    CALL FUN_0053af20                   ; 00533d2a
        ;   XREF to: 0053af20 (UNCONDITIONAL_CALL)  ; undefined FUN_0053af20()
    MOV ECX,dword ptr [EBX + 0x15acc8]  ; 00533d2f
    ADD ESP,0x4                         ; 00533d35
    CMP EDI,ECX                         ; 00533d38
    JL 0x00533cd9                       ; 00533d3a
        ;   XREF to: 00533cd9 (CONDITIONAL_JUMP)  ; LAB_00533cd9
    ADD ESP,0xc                         ; 00533d3c
        ;   Label: LAB_00533d3c
    POP EBP                             ; 00533d3f
    POP EDI                             ; 00533d40
    POP ESI                             ; 00533d41
    POP EBX                             ; 00533d42
    RET                                 ; 00533d43
    MOV ECX,dword ptr [EAX + 0x19c]     ; 00533d44
        ;   Label: LAB_00533d44
    TEST ECX,ECX                        ; 00533d4a
    JZ 0x00533be4                       ; 00533d4c
        ;   XREF to: 00533be4 (CONDITIONAL_JUMP)  ; LAB_00533be4
    PUSH ECX                            ; 00533d52
    PUSH EDX                            ; 00533d53
    PUSH 0x203b37c                      ; 00533d54 | DAT_0203b37c
    CALL FUN_00477060                   ; 00533d59
        ;   XREF to: 00477060 (UNCONDITIONAL_CALL)  ; undefined FUN_00477060()
    ADD ESP,0xc                         ; 00533d5e
    CMP ESI,0x1                         ; 00533d61
        ;   Label: LAB_00533d61
    JNZ 0x00533be9                      ; 00533d64
        ;   XREF to: 00533be9 (CONDITIONAL_JUMP)  ; LAB_00533be9
    MOV EAX,ESI                         ; 00533d6a
    JMP 0x00533beb                      ; 00533d6c
        ;   XREF to: 00533beb (UNCONDITIONAL_JUMP)  ; LAB_00533beb
    CMP dword ptr [EBX + 0x161640],0x0  ; 00533d71
        ;   Label: LAB_00533d71
    JZ 0x00533ca4                       ; 00533d78
        ;   XREF to: 00533ca4 (CONDITIONAL_JUMP)  ; LAB_00533ca4
    MOV ESI,dword ptr [EBX + 0x161664]  ; 00533d7e
    PUSH ESI                            ; 00533d84
    LEA EAX,[EBX + 0x161644]            ; 00533d85
    PUSH EAX                            ; 00533d8b
    MOV EDI,dword ptr [0x005f4a58]      ; 00533d8c | DAT_005f4a58
    PUSH EDI                            ; 00533d92
    CALL FUN_0046f480                   ; 00533d93
        ;   XREF to: 0046f480 (UNCONDITIONAL_CALL)  ; undefined FUN_0046f480()
    ADD ESP,0xc                         ; 00533d98
    JMP 0x00533ca4                      ; 00533d9b
        ;   XREF to: 00533ca4 (UNCONDITIONAL_JUMP)  ; LAB_00533ca4
    MOV EAX,[0x00606b20]                ; 00533da0 | DAT_00606b20
        ;   Label: LAB_00533da0
    PUSH EAX                            ; 00533da5 | DAT_02cfd950
    CALL FUN_00577290                   ; 00533da6
        ;   XREF to: 00577290 (UNCONDITIONAL_CALL)  ; undefined FUN_00577290()
    MOV EAX,[0x00606b20]                ; 00533dab | DAT_00606b20
    MOV EDX,dword ptr [EAX]             ; 00533db0 | DAT_02cfd950
    ADD ESP,0x4                         ; 00533db2
    TEST EDX,EDX                        ; 00533db5
    JNZ 0x00533cb1                      ; 00533db7
        ;   XREF to: 00533cb1 (CONDITIONAL_JUMP)  ; LAB_00533cb1
    PUSH 0x1                            ; 00533dbd
    PUSH EAX                            ; 00533dbf | DAT_02cfd950
    CALL FUN_00577760                   ; 00533dc0
        ;   XREF to: 00577760 (UNCONDITIONAL_CALL)  ; undefined FUN_00577760()
    ADD ESP,0x8                         ; 00533dc5
    JMP 0x00533cb1                      ; 00533dc8
        ;   XREF to: 00533cb1 (UNCONDITIONAL_JUMP)  ; LAB_00533cb1
    CMP dword ptr [0x00603b38],0x0      ; 00533dcd | DAT_00603b38
        ;   Label: LAB_00533dcd
    JZ 0x00533d3c                       ; 00533dd4
        ;   XREF to: 00533d3c (CONDITIONAL_JUMP)  ; LAB_00533d3c
    MOV EBP,dword ptr [EBX + 0x15acc8]  ; 00533dda
    XOR EDI,EDI                         ; 00533de0
    TEST EBP,EBP                        ; 00533de2
    JLE 0x00533d3c                      ; 00533de4
        ;   XREF to: 00533d3c (CONDITIONAL_JUMP)  ; LAB_00533d3c
    MOV ESI,EBX                         ; 00533dea
    MOV EAX,dword ptr [ESI + 0x15accc]  ; 00533dec
        ;   Label: LAB_00533dec
    ADD EAX,0x21c                       ; 00533df2
    PUSH EAX                            ; 00533df7
    CALL FUN_004f5610                   ; 00533df8
        ;   XREF to: 004f5610 (UNCONDITIONAL_CALL)  ; undefined FUN_004f5610()
    MOV EAX,dword ptr [ESI + 0x15accc]  ; 00533dfd
    MOV EDX,dword ptr [EAX + 0x1b0]     ; 00533e03
    ADD ESP,0x4                         ; 00533e09
    TEST EDX,EDX                        ; 00533e0c
    JZ 0x00533e19                       ; 00533e0e
        ;   XREF to: 00533e19 (CONDITIONAL_JUMP)  ; LAB_00533e19
    PUSH EAX                            ; 00533e10
    CALL FUN_004ca940                   ; 00533e11
        ;   XREF to: 004ca940 (UNCONDITIONAL_CALL)  ; undefined FUN_004ca940()
    ADD ESP,0x4                         ; 00533e16
    PUSH 0x0                            ; 00533e19
        ;   Label: LAB_00533e19
    PUSH EDI                            ; 00533e1b
    PUSH EBX                            ; 00533e1c
    CALL FUN_0053adf0                   ; 00533e1d
        ;   XREF to: 0053adf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053adf0()
    ADD ESP,0xc                         ; 00533e22
    PUSH 0x0                            ; 00533e25
    PUSH dword ptr [ESP + 0x28]         ; 00533e27
    PUSH 0x203b37c                      ; 00533e2b | DAT_0203b37c
    CALL FUN_00476070                   ; 00533e30
        ;   XREF to: 00476070 (UNCONDITIONAL_CALL)  ; undefined FUN_00476070()
    ADD ESP,0xc                         ; 00533e35
    PUSH EBX                            ; 00533e38
    ADD ESI,0x4                         ; 00533e39
    INC EDI                             ; 00533e3c
    CALL FUN_0053af20                   ; 00533e3d
        ;   XREF to: 0053af20 (UNCONDITIONAL_CALL)  ; undefined FUN_0053af20()
    MOV EAX,dword ptr [EBX + 0x15acc8]  ; 00533e42
    ADD ESP,0x4                         ; 00533e48
    CMP EDI,EAX                         ; 00533e4b
    JGE 0x00533d3c                      ; 00533e4d
        ;   XREF to: 00533d3c (CONDITIONAL_JUMP)  ; LAB_00533d3c
    JMP 0x00533dec                      ; 00533e53
        ;   XREF to: 00533dec (UNCONDITIONAL_JUMP)  ; LAB_00533dec

