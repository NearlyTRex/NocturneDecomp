; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00469b40(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,undefined4 param_7)
;
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_00469e10 at 00469e2c
;   FUN_0046a3e0 at 0046a404
;
; Referenced Globals:
;   void* switchdataD_00469af4 = 00469bfd
;   void* switchdataD_00469b14 = 00469d56
;   undefined4 DAT_01bdd7bc
;   undefined4 DAT_01bdd7c0
;   undefined4 DAT_01bdd7c4
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01c6b5b0
;   undefined4 DAT_01c6b5b4
;
; Called Functions:
;   FUN_00402440
;   FUN_00402540
;   FUN_00402600
;   FUN_004026d0
;   FUN_00402800
;   FUN_00402810
;   FUN_00402830
;   FUN_00402840
;   FUN_00402850
;   FUN_004b0cb0
;   FUN_004b0da0
;   FUN_004b0ea0
;   FUN_004b0fa0
;   FUN_004b12e0
;   FUN_004b1300
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00469b40
        ;   Label: FUN_00469b40
    PUSH ESI                            ; 00469b41
    PUSH EDI                            ; 00469b42
    PUSH EBP                            ; 00469b43
    SUB ESP,0x20                        ; 00469b44
    MOV EAX,dword ptr [ESP + 0x34]      ; 00469b47
    MOV EDI,dword ptr [ESP + 0x38]      ; 00469b4b
    MOV ESI,dword ptr [ESP + 0x3c]      ; 00469b4f
    MOV EBX,dword ptr [ESP + 0x44]      ; 00469b53
    MOV EBP,dword ptr [ESP + 0x48]      ; 00469b57
    MOV ECX,dword ptr [ESP + 0x40]      ; 00469b5b
    MOV EDX,dword ptr [EAX + 0x8]       ; 00469b5f
    ADD ECX,EDX                         ; 00469b62
    ADD ESI,EDX                         ; 00469b64
    MOV EDX,dword ptr [EAX + 0xc]       ; 00469b66
    ADD EBX,EDX                         ; 00469b69
    ADD EBP,EDX                         ; 00469b6b
    MOV EDX,dword ptr [0x01c6b5a8]      ; 00469b6d | DAT_01c6b5a8
    MOV dword ptr [ESP + 0x4],EDX       ; 00469b73
    MOV EDX,dword ptr [0x01c6b5b0]      ; 00469b77 | DAT_01c6b5b0
    MOV dword ptr [ESP + 0x14],EDX      ; 00469b7d
    MOV EDX,dword ptr [0x01c6b5ac]      ; 00469b81 | DAT_01c6b5ac
    MOV dword ptr [ESP + 0x8],EDX       ; 00469b87
    MOV EDX,dword ptr [0x01c6b5b4]      ; 00469b8b | DAT_01c6b5b4
    MOV dword ptr [ESP + 0x10],EDX      ; 00469b91
    MOV EDX,dword ptr [EAX + 0x10]      ; 00469b95
    MOV dword ptr [0x01c6b5a8],EDX      ; 00469b98 | DAT_01c6b5a8
    MOV EDX,dword ptr [EAX + 0x18]      ; 00469b9e
    MOV dword ptr [0x01c6b5b0],EDX      ; 00469ba1 | DAT_01c6b5b0
    MOV EDX,dword ptr [EAX + 0x14]      ; 00469ba7
    MOV EAX,dword ptr [EAX + 0x1c]      ; 00469baa
    MOV [0x01c6b5b4],EAX                ; 00469bad | DAT_01c6b5b4
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00469bb2
    SHL EAX,0x2                         ; 00469bb6
    MOV dword ptr [ESP + 0x40],ECX      ; 00469bb9
    MOV dword ptr [ESP + 0x1c],EAX      ; 00469bbd
    MOV EAX,[0x01bdd7c4]                ; 00469bc1 | DAT_01bdd7c4
    MOV dword ptr [0x01c6b5ac],EDX      ; 00469bc6 | DAT_01c6b5ac
    TEST EAX,EAX                        ; 00469bcc
    JZ 0x00469dcb                       ; 00469bce
        ;   XREF to: 00469dcb (CONDITIONAL_JUMP)  ; LAB_00469dcb
    CALL FUN_004b12e0                   ; 00469bd4
        ;   XREF to: 004b12e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b12e0()
    MOV ECX,dword ptr [0x01bdd7bc]      ; 00469bd9 | DAT_01bdd7bc
    PUSH ECX                            ; 00469bdf
    MOV dword ptr [ESP + 0x4],EAX       ; 00469be0
    CALL FUN_004b1300                   ; 00469be4
        ;   XREF to: 004b1300 (UNCONDITIONAL_CALL)  ; undefined FUN_004b1300()
    ADD ESP,0x4                         ; 00469be9
    CMP dword ptr [ESP + 0x4c],0x7      ; 00469bec
    JA 0x00469c13                       ; 00469bf1
        ;   XREF to: 00469c13 (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00469bf3
    JMP dword ptr [EAX + 0x469af4]      ; 00469bf7 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH EDI                            ; 00469bfd
        ;   Label: caseD_0
    PUSH -0x1                           ; 00469bfe
    PUSH -0x3                           ; 00469c00
    PUSH EBX                            ; 00469c02
    PUSH ESI                            ; 00469c03
    MOV EBP,dword ptr [0x01bdd7c4]      ; 00469c04 | DAT_01bdd7c4
    PUSH EBP                            ; 00469c0a
        ;   Label: LAB_00469c0a
    CALL FUN_004b0cb0                   ; 00469c0b
        ;   XREF to: 004b0cb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0cb0()
    ADD ESP,0x18                        ; 00469c10
        ;   Label: LAB_00469c10
    MOV EAX,dword ptr [ESP]             ; 00469c13
        ;   Label: default
    PUSH EAX                            ; 00469c16
    CALL FUN_004b1300                   ; 00469c17
        ;   XREF to: 004b1300 (UNCONDITIONAL_CALL)  ; undefined FUN_004b1300()
    ADD ESP,0x4                         ; 00469c1c
        ;   Label: LAB_00469c1c
    MOV EAX,dword ptr [ESP + 0x4]       ; 00469c1f
    MOV [0x01c6b5a8],EAX                ; 00469c23 | DAT_01c6b5a8
    MOV EAX,dword ptr [ESP + 0x14]      ; 00469c28
    MOV [0x01c6b5b0],EAX                ; 00469c2c | DAT_01c6b5b0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00469c31
    MOV [0x01c6b5ac],EAX                ; 00469c35 | DAT_01c6b5ac
    MOV EAX,dword ptr [ESP + 0x10]      ; 00469c3a
    MOV [0x01c6b5b4],EAX                ; 00469c3e | DAT_01c6b5b4
    ADD ESP,0x20                        ; 00469c43
    POP EBP                             ; 00469c46
    POP EDI                             ; 00469c47
    POP ESI                             ; 00469c48
    POP EBX                             ; 00469c49
    RET                                 ; 00469c4a
    PUSH EDI                            ; 00469c4b
        ;   Label: caseD_1
    PUSH -0x1                           ; 00469c4c
    PUSH -0x3                           ; 00469c4e
    PUSH EBX                            ; 00469c50
    PUSH ESI                            ; 00469c51
    MOV EDI,dword ptr [0x01bdd7c4]      ; 00469c52 | DAT_01bdd7c4
    PUSH EDI                            ; 00469c58
    CALL FUN_004b0da0                   ; 00469c59
        ;   XREF to: 004b0da0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0da0()
    JMP 0x00469c10                      ; 00469c5e
        ;   XREF to: 00469c10 (UNCONDITIONAL_JUMP)  ; LAB_00469c10
    PUSH EDI                            ; 00469c60
        ;   Label: caseD_2
    PUSH -0x1                           ; 00469c61
    PUSH -0x3                           ; 00469c63
    PUSH EBX                            ; 00469c65
    PUSH ESI                            ; 00469c66
    MOV ESI,dword ptr [0x01bdd7c4]      ; 00469c67 | DAT_01bdd7c4
    PUSH ESI                            ; 00469c6d
    CALL FUN_004b0ea0                   ; 00469c6e
        ;   XREF to: 004b0ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0ea0()
    JMP 0x00469c10                      ; 00469c73
        ;   XREF to: 00469c10 (UNCONDITIONAL_JUMP)  ; LAB_00469c10
    MOV EBP,dword ptr [0x01bdd7c4]      ; 00469c75 | DAT_01bdd7c4
        ;   Label: caseD_3
    MOV EDX,dword ptr [EBP + 0x41f0]    ; 00469c7b
    MOV EAX,EDX                         ; 00469c81
    SAR EDX,0x1f                        ; 00469c83
    SUB EAX,EDX                         ; 00469c86
    SAR EAX,0x1                         ; 00469c88
    PUSH EDI                            ; 00469c8a
    PUSH -0x1                           ; 00469c8b
    PUSH -0x3                           ; 00469c8d
    SUB EBX,EAX                         ; 00469c8f
    PUSH EBX                            ; 00469c91
    PUSH ESI                            ; 00469c92
    JMP 0x00469c0a                      ; 00469c93
        ;   XREF to: 00469c0a (UNCONDITIONAL_JUMP)  ; LAB_00469c0a
    MOV EBP,dword ptr [0x01bdd7c4]      ; 00469c98 | DAT_01bdd7c4
        ;   Label: caseD_4
    MOV EDX,dword ptr [EBP + 0x41f0]    ; 00469c9e
    MOV EAX,EDX                         ; 00469ca4
    SAR EDX,0x1f                        ; 00469ca6
    SUB EAX,EDX                         ; 00469ca9
    SAR EAX,0x1                         ; 00469cab
    PUSH EDI                            ; 00469cad
    PUSH -0x1                           ; 00469cae
    PUSH -0x3                           ; 00469cb0
    SUB EBX,EAX                         ; 00469cb2
    PUSH EBX                            ; 00469cb4
    PUSH ESI                            ; 00469cb5
    PUSH EBP                            ; 00469cb6
    CALL FUN_004b0ea0                   ; 00469cb7
        ;   XREF to: 004b0ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0ea0()
    JMP 0x00469c10                      ; 00469cbc
        ;   XREF to: 00469c10 (UNCONDITIONAL_JUMP)  ; LAB_00469c10
    PUSH EDI                            ; 00469cc1
        ;   Label: caseD_5
    PUSH -0x1                           ; 00469cc2
    PUSH -0x3                           ; 00469cc4
    PUSH EBX                            ; 00469cc6
    MOV ECX,dword ptr [ESP + 0x50]      ; 00469cc7
    PUSH ECX                            ; 00469ccb
    PUSH ESI                            ; 00469ccc
    MOV EBX,dword ptr [0x01bdd7c4]      ; 00469ccd | DAT_01bdd7c4
    PUSH EBX                            ; 00469cd3
    CALL FUN_004b0fa0                   ; 00469cd4
        ;   XREF to: 004b0fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0fa0()
    ADD ESP,0x1c                        ; 00469cd9
    JMP 0x00469c13                      ; 00469cdc
        ;   XREF to: 00469c13 (UNCONDITIONAL_JUMP)  ; default
    ADD EBX,EBP                         ; 00469ce1
        ;   Label: caseD_6
    MOV EBP,dword ptr [0x01bdd7c4]      ; 00469ce3 | DAT_01bdd7c4
    LEA EDX,[EBX + 0x1]                 ; 00469ce9
    MOV EAX,dword ptr [EBP + 0x41f0]    ; 00469cec
    SUB EDX,EAX                         ; 00469cf2
    MOV EAX,EDX                         ; 00469cf4
    SAR EDX,0x1f                        ; 00469cf6
    SUB EAX,EDX                         ; 00469cf9
    SAR EAX,0x1                         ; 00469cfb
    PUSH EDI                            ; 00469cfd
    PUSH -0x1                           ; 00469cfe
    PUSH -0x3                           ; 00469d00
    PUSH EAX                            ; 00469d02
    PUSH ESI                            ; 00469d03
    JMP 0x00469c0a                      ; 00469d04
        ;   XREF to: 00469c0a (UNCONDITIONAL_JUMP)  ; LAB_00469c0a
    ADD EBX,EBP                         ; 00469d09
        ;   Label: caseD_7
    MOV EBP,dword ptr [0x01bdd7c4]      ; 00469d0b | DAT_01bdd7c4
    INC EBX                             ; 00469d11
    MOV EDX,dword ptr [EBP + 0x41f0]    ; 00469d12
    SUB EBX,EDX                         ; 00469d18
    MOV EDX,EBX                         ; 00469d1a
    MOV EAX,EBX                         ; 00469d1c
    SAR EDX,0x1f                        ; 00469d1e
    SUB EAX,EDX                         ; 00469d21
    SAR EAX,0x1                         ; 00469d23
    PUSH EDI                            ; 00469d25
    PUSH -0x1                           ; 00469d26
    PUSH -0x3                           ; 00469d28
    PUSH EAX                            ; 00469d2a
    MOV EDX,dword ptr [ESP + 0x50]      ; 00469d2b
    PUSH EDX                            ; 00469d2f
    PUSH ESI                            ; 00469d30
    PUSH EBP                            ; 00469d31
    CALL FUN_004b0fa0                   ; 00469d32
        ;   XREF to: 004b0fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0fa0()
    ADD ESP,0x1c                        ; 00469d37
    JMP 0x00469c13                      ; 00469d3a
        ;   XREF to: 00469c13 (UNCONDITIONAL_JUMP)  ; default
    PUSH EBX                            ; 00469d3f
        ;   Label: caseD_1
    PUSH ESI                            ; 00469d40
    PUSH EDI                            ; 00469d41
    CALL FUN_00402540                   ; 00469d42
        ;   XREF to: 00402540 (UNCONDITIONAL_CALL)  ; undefined FUN_00402540()
    JMP 0x00469d5e                      ; 00469d47
        ;   XREF to: 00469d5e (UNCONDITIONAL_JUMP)  ; LAB_00469d5e
    PUSH EBX                            ; 00469d49
        ;   Label: caseD_2
    PUSH ESI                            ; 00469d4a
    PUSH EDI                            ; 00469d4b
    CALL FUN_00402600                   ; 00469d4c
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; undefined FUN_00402600()
    JMP 0x00469d5e                      ; 00469d51
        ;   XREF to: 00469d5e (UNCONDITIONAL_JUMP)  ; LAB_00469d5e
    SUB EBX,0x5                         ; 00469d53
        ;   Label: caseD_3
    PUSH EBX                            ; 00469d56
        ;   Label: caseD_0
    PUSH ESI                            ; 00469d57
        ;   Label: LAB_00469d57
    PUSH EDI                            ; 00469d58
    CALL FUN_00402440                   ; 00469d59
        ;   XREF to: 00402440 (UNCONDITIONAL_CALL)  ; undefined FUN_00402440()
    ADD ESP,0xc                         ; 00469d5e
        ;   Label: LAB_00469d5e
    MOV EAX,dword ptr [ESP + 0x18]      ; 00469d61
        ;   Label: default
    PUSH EAX                            ; 00469d65
    CALL FUN_00402850                   ; 00469d66
        ;   XREF to: 00402850 (UNCONDITIONAL_CALL)  ; undefined FUN_00402850()
    ADD ESP,0x4                         ; 00469d6b
    MOV EDX,dword ptr [ESP + 0xc]       ; 00469d6e
    PUSH EDX                            ; 00469d72
    CALL FUN_00402810                   ; 00469d73
        ;   XREF to: 00402810 (UNCONDITIONAL_CALL)  ; undefined FUN_00402810()
    JMP 0x00469c1c                      ; 00469d78
        ;   XREF to: 00469c1c (UNCONDITIONAL_JUMP)  ; LAB_00469c1c
    SUB EBX,0x5                         ; 00469d7d
        ;   Label: caseD_4
    PUSH EBX                            ; 00469d80
    PUSH ESI                            ; 00469d81
    PUSH EDI                            ; 00469d82
    CALL FUN_00402600                   ; 00469d83
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; undefined FUN_00402600()
    JMP 0x00469d5e                      ; 00469d88
        ;   XREF to: 00469d5e (UNCONDITIONAL_JUMP)  ; LAB_00469d5e
    PUSH EBX                            ; 00469d8a
        ;   Label: caseD_5
    MOV EBP,dword ptr [ESP + 0x44]      ; 00469d8b
    PUSH EBP                            ; 00469d8f
    PUSH ESI                            ; 00469d90
    PUSH EDI                            ; 00469d91
    CALL FUN_004026d0                   ; 00469d92
        ;   XREF to: 004026d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004026d0()
    ADD ESP,0x10                        ; 00469d97
    JMP 0x00469d61                      ; 00469d9a
        ;   XREF to: 00469d61 (UNCONDITIONAL_JUMP)  ; default
    LEA EDX,[EBX + EBP*0x1 + -0xa]      ; 00469d9c
        ;   Label: caseD_6
    MOV EAX,EDX                         ; 00469da0
    SAR EDX,0x1f                        ; 00469da2
    SUB EAX,EDX                         ; 00469da5
    SAR EAX,0x1                         ; 00469da7
    PUSH EAX                            ; 00469da9
    JMP 0x00469d57                      ; 00469daa
        ;   XREF to: 00469d57 (UNCONDITIONAL_JUMP)  ; LAB_00469d57
    LEA EDX,[EBX + EBP*0x1 + -0xa]      ; 00469dac
        ;   Label: caseD_7
    MOV EAX,EDX                         ; 00469db0
    SAR EDX,0x1f                        ; 00469db2
    SUB EAX,EDX                         ; 00469db5
    SAR EAX,0x1                         ; 00469db7
    PUSH EAX                            ; 00469db9
    MOV EBX,dword ptr [ESP + 0x44]      ; 00469dba
    PUSH EBX                            ; 00469dbe
    PUSH ESI                            ; 00469dbf
    PUSH EDI                            ; 00469dc0
    CALL FUN_004026d0                   ; 00469dc1
        ;   XREF to: 004026d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004026d0()
    ADD ESP,0x10                        ; 00469dc6
    JMP 0x00469d61                      ; 00469dc9
        ;   XREF to: 00469d61 (UNCONDITIONAL_JUMP)  ; default
    CALL FUN_00402800                   ; 00469dcb
        ;   XREF to: 00402800 (UNCONDITIONAL_CALL)  ; undefined FUN_00402800()
        ;   Label: LAB_00469dcb
    MOV dword ptr [ESP + 0xc],EAX       ; 00469dd0
    CALL FUN_00402840                   ; 00469dd4
        ;   XREF to: 00402840 (UNCONDITIONAL_CALL)  ; undefined FUN_00402840()
    MOV dword ptr [ESP + 0x18],EAX      ; 00469dd9
    CALL FUN_00402830                   ; 00469ddd
        ;   XREF to: 00402830 (UNCONDITIONAL_CALL)  ; undefined FUN_00402830()
    MOV EDX,dword ptr [0x01bdd7c0]      ; 00469de2 | DAT_01bdd7c0
    PUSH EDX                            ; 00469de8
    CALL FUN_00402850                   ; 00469de9
        ;   XREF to: 00402850 (UNCONDITIONAL_CALL)  ; undefined FUN_00402850()
    ADD ESP,0x4                         ; 00469dee
    CMP dword ptr [ESP + 0x4c],0x7      ; 00469df1
    JA 0x00469d61                       ; 00469df6
        ;   XREF to: 00469d61 (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00469dfc
    JMP dword ptr [EAX + 0x469b14]      ; 00469e00 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD

