; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0050bdb0(int *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x198]:4  local_198
; undefined        Stack[-0x194]:1  local_194
; undefined        Stack[-0x94]:1  local_94
; undefined4       Stack[-0x30]:4  local_30
; undefined1       Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x2b]:4  local_2b
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_004b6170 at 004b64dc
;   FUN_0050cf50 at 0050d515
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005e06a5
;   TerminatedCString s_CNetGame_syncPlayers_don_005e06b9
;   TerminatedCString s_Syncing_stage_d_005e06f1
;   TerminatedCString s_Waiting_on_005e0703
;   undefined4 DAT_005e070f
;   TerminatedCString s_Waiting_on_sync_code_d_f_005e0750
;   TerminatedCString s_core_netgame_cpp_005e0777
;   TerminatedCString s_CNetGame_syncPlayers_inv_005e078b
;   undefined4 DAT_005e07b5
;   undefined4 DAT_005e07bd
;   undefined4 DAT_005e07c5
;   undefined4 DAT_00617dd4
;   undefined4 DAT_01d02f84
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   ... and 3 more
;
; Called Functions:
;   FUN_00401fe0
;   FUN_004032b0
;   FUN_004e4500
;   FUN_0050c190
;   FUN_0050cd90
;   FUN_0050d840
;   FUN_0055b1f0
;   FUN_00589560
;   FUN_0058e9e0
;   FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050bdb0
        ;   Label: FUN_0050bdb0
    PUSH ESI                            ; 0050bdb1
    PUSH EDI                            ; 0050bdb2
    PUSH EBP                            ; 0050bdb3
    MOV EBP,ESP                         ; 0050bdb4
    SUB ESP,0x188                       ; 0050bdb6
    AND ESP,0xfffffff8                  ; 0050bdbc
    MOV ESI,dword ptr [EBP + 0x14]      ; 0050bdbf
    CALL FUN_004032b0                   ; 0050bdc2
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    CMP dword ptr [EBP + 0x18],0x1      ; 0050bdc7
    JL 0x0050c02d                       ; 0050bdcb
        ;   XREF to: 0050c02d (CONDITIONAL_JUMP)  ; LAB_0050c02d
    CMP dword ptr [ESI],0x0             ; 0050bdd1
        ;   Label: LAB_0050bdd1
    JZ 0x0050c055                       ; 0050bdd4
        ;   XREF to: 0050c055 (CONDITIONAL_JUMP)  ; LAB_0050c055
    MOV dword ptr [ESI + 0x4],0x2       ; 0050bdda
    CALL FUN_0058e9e0                   ; 0050bde1
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0058e9e0()
    MOV EDX,EAX                         ; 0050bde6
    MOV EBX,0x12                        ; 0050bde8
    SAR EDX,0x1f                        ; 0050bded
    IDIV EBX                            ; 0050bdf0
    MOV ECX,dword ptr [0x01d34e34]      ; 0050bdf2 | DAT_01d34e34
    MOV EDX,EAX                         ; 0050bdf8
    SUB EAX,ECX                         ; 0050bdfa
    MOV dword ptr [0x01d34e34],EDX      ; 0050bdfc | DAT_01d34e34
    TEST EAX,EAX                        ; 0050be02
    JL 0x0050c061                       ; 0050be04
        ;   XREF to: 0050c061 (CONDITIONAL_JUMP)  ; LAB_0050c061
    CMP EAX,0x20000                     ; 0050be0a
    JLE 0x0050be16                      ; 0050be0f
        ;   XREF to: 0050be16 (CONDITIONAL_JUMP)  ; LAB_0050be16
    MOV EAX,0x20000                     ; 0050be11
    MOV EBX,dword ptr [0x01d34e38]      ; 0050be16 | DAT_01d34e38
        ;   Label: LAB_0050be16
    ADD EBX,EAX                         ; 0050be1c
    MOV EAX,dword ptr [ESI + 0x124]     ; 0050be1e
    SHL EAX,0x7                         ; 0050be24
    MOV EDX,dword ptr [EBP + 0x18]      ; 0050be27
    MOV dword ptr [ESI + EAX*0x1 + 0x5c],EDX ; 0050be2a
    MOV EDI,dword ptr [ESI]             ; 0050be2e
    MOV dword ptr [0x01d34e38],EBX      ; 0050be30 | DAT_01d34e38
    CMP EDI,0x1                         ; 0050be36
    JNZ 0x0050c076                      ; 0050be39
        ;   XREF to: 0050c076 (CONDITIONAL_JUMP)  ; LAB_0050c076
    LEA EAX,[EBX + 0xffe20000]          ; 0050be3f
    MOV dword ptr [ESP + 0x178],EAX     ; 0050be45
    LEA EAX,[ESI + 0x20]                ; 0050be4c
    MOV dword ptr [ESP + 0x17c],EAX     ; 0050be4f
    CALL FUN_0055b1f0                   ; 0050be56
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055b1f0()
        ;   Label: LAB_0050be56
    MOV EBX,dword ptr [EBP + 0x18]      ; 0050be5b
    PUSH EBX                            ; 0050be5e
    PUSH 0x5e06f1                       ; 0050be5f | = "Syncing stage %d."
    LEA EAX,[ESP + 0xc]                 ; 0050be64
    PUSH EAX                            ; 0050be68
    CALL FUN_005b7790                   ; 0050be69
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0xc                         ; 0050be6e
    PUSH 0xb                            ; 0050be71
    PUSH 0x0                            ; 0050be73
    LEA EAX,[ESP + 0xc]                 ; 0050be75
    PUSH EAX                            ; 0050be79
    CALL FUN_00401fe0                   ; 0050be7a
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 0050be7f
    PUSH 0x16                           ; 0050be82
    PUSH 0x0                            ; 0050be84
    PUSH 0x5e0703                       ; 0050be86 | = "Waiting on:"
    MOV EDI,0x1                         ; 0050be8b
    MOV EBX,0x21                        ; 0050be90
    CALL FUN_00401fe0                   ; 0050be95
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 0050be9a
    MOV EDX,dword ptr [ESI + 0x1c]      ; 0050be9d
    XOR EAX,EAX                         ; 0050bea0
    MOV dword ptr [ESP + 0x180],EDI     ; 0050bea2
    MOV dword ptr [ESP + 0x184],EAX     ; 0050bea9
    TEST EDX,EDX                        ; 0050beb0
    JLE 0x0050bf33                      ; 0050beb2
        ;   XREF to: 0050bf33 (CONDITIONAL_JUMP)  ; LAB_0050bf33
    MOV EDI,ESI                         ; 0050beb8
    MOV EAX,dword ptr [ESP + 0x184]     ; 0050beba
        ;   Label: LAB_0050beba
    MOV ECX,dword ptr [EBP + 0x18]      ; 0050bec1
    MOV EDX,dword ptr [EDI + 0x5c]      ; 0050bec4
    SHL EAX,0x7                         ; 0050bec7
    CMP EDX,ECX                         ; 0050beca
    JGE 0x0050bf17                      ; 0050becc
        ;   XREF to: 0050bf17 (CONDITIONAL_JUMP)  ; LAB_0050bf17
    PUSH EBX                            ; 0050bece
    XOR EDX,EDX                         ; 0050becf
    MOV ECX,dword ptr [ESP + 0x180]     ; 0050bed1
    PUSH EDX                            ; 0050bed8
    ADD EAX,ECX                         ; 0050bed9
    PUSH EAX                            ; 0050bedb
    MOV dword ptr [ESP + 0x18c],EDX     ; 0050bedc
    CALL FUN_00401fe0                   ; 0050bee3
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 0050bee8
    MOV EAX,dword ptr [EDI + 0x5c]      ; 0050beeb
    PUSH EAX                            ; 0050beee
    PUSH 0x5e070f                       ; 0050beef | DAT_005e070f
    LEA EAX,[ESP + 0xc]                 ; 0050bef4
    PUSH EAX                            ; 0050bef8
    CALL FUN_005b7790                   ; 0050bef9
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0xc                         ; 0050befe
    PUSH EBX                            ; 0050bf01
    PUSH 0xc8                           ; 0050bf02
    LEA EAX,[ESP + 0xc]                 ; 0050bf07
    PUSH EAX                            ; 0050bf0b
    ADD EBX,0xb                         ; 0050bf0c
    CALL FUN_00401fe0                   ; 0050bf0f
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 0050bf14
    MOV ECX,dword ptr [ESP + 0x184]     ; 0050bf17
        ;   Label: LAB_0050bf17
    ADD EDI,0x80                        ; 0050bf1e
    INC ECX                             ; 0050bf24
    MOV EDX,dword ptr [ESI + 0x1c]      ; 0050bf25
    MOV dword ptr [ESP + 0x184],ECX     ; 0050bf28
    CMP ECX,EDX                         ; 0050bf2f
    JL 0x0050beba                       ; 0050bf31
        ;   XREF to: 0050beba (CONDITIONAL_JUMP)  ; LAB_0050beba
    CMP dword ptr [ESP + 0x180],0x0     ; 0050bf33
        ;   Label: LAB_0050bf33
    JNZ 0x0050c119                      ; 0050bf3b
        ;   XREF to: 0050c119 (CONDITIONAL_JUMP)  ; LAB_0050c119
    CALL FUN_00589560                   ; 0050bf41
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; undefined FUN_00589560()
    PUSH ESI                            ; 0050bf46
    CALL FUN_0050c190                   ; 0050bf47
        ;   XREF to: 0050c190 (UNCONDITIONAL_CALL)  ; undefined FUN_0050c190()
    ADD ESP,0x4                         ; 0050bf4c
    MOV EAX,[0x01d34e38]                ; 0050bf4f | DAT_01d34e38
    MOV EBX,dword ptr [ESP + 0x178]     ; 0050bf54
    SUB EAX,EBX                         ; 0050bf5b
    MOV dword ptr [ESP + 0x174],EAX     ; 0050bf5d
    FILD dword ptr [ESP + 0x174]        ; 0050bf64
    FMUL double ptr [0x005e07b5]        ; 0050bf6b | DAT_005e07b5
    FST float ptr [ESP]                 ; 0050bf71
    FLDZ                                ; 0050bf74
    FCOMPP                              ; 0050bf76
    FNSTSW AX                           ; 0050bf78
    SAHF                                ; 0050bf7a
    JBE 0x0050bf82                      ; 0050bf7b
        ;   XREF to: 0050bf82 (CONDITIONAL_JUMP)  ; LAB_0050bf82
    XOR EDI,EDI                         ; 0050bf7d
    MOV dword ptr [ESP],EDI             ; 0050bf7f
    FLD float ptr [ESP]                 ; 0050bf82
        ;   Label: LAB_0050bf82
    FCOMP double ptr [0x005e07bd]       ; 0050bf85 | DAT_005e07bd
    FNSTSW AX                           ; 0050bf8b
    SAHF                                ; 0050bf8d
    JBE 0x0050bf97                      ; 0050bf8e
        ;   XREF to: 0050bf97 (CONDITIONAL_JUMP)  ; LAB_0050bf97
    MOV dword ptr [ESP],0x41f00000      ; 0050bf90
    FLD float ptr [ESP]                 ; 0050bf97
        ;   Label: LAB_0050bf97
    FCOMP double ptr [0x005e07c5]       ; 0050bf9a | DAT_005e07c5
    FNSTSW AX                           ; 0050bfa0
    SAHF                                ; 0050bfa2
    JBE 0x0050c007                      ; 0050bfa3
        ;   XREF to: 0050c007 (CONDITIONAL_JUMP)  ; LAB_0050c007
    MOV EAX,[0x01d34e38]                ; 0050bfa5 | DAT_01d34e38
    MOV dword ptr [ESP + 0x178],EAX     ; 0050bfaa
    MOV AH,0x8                          ; 0050bfb1
    MOV EDX,0x9                         ; 0050bfb3
    MOV byte ptr [ESP + 0x16c],AH       ; 0050bfb8
    MOV EAX,dword ptr [EBP + 0x18]      ; 0050bfbf
    MOV dword ptr [ESP + 0x168],EDX     ; 0050bfc2
    MOV dword ptr [ESP + 0x16d],EAX     ; 0050bfc9
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0050bfd0
    XOR EBX,EBX                         ; 0050bfd3
    TEST ECX,ECX                        ; 0050bfd5
    JLE 0x0050c007                      ; 0050bfd7
        ;   XREF to: 0050c007 (CONDITIONAL_JUMP)  ; LAB_0050c007
    MOV EDI,ESI                         ; 0050bfd9
    MOV ECX,dword ptr [EBP + 0x18]      ; 0050bfdb
        ;   Label: LAB_0050bfdb
    CMP ECX,dword ptr [EDI + 0x5c]      ; 0050bfde
    JLE 0x0050c068                      ; 0050bfe1
        ;   XREF to: 0050c068 (CONDITIONAL_JUMP)  ; LAB_0050c068
    LEA EAX,[ESP + 0x168]               ; 0050bfe7
    PUSH EAX                            ; 0050bfee
    PUSH EBX                            ; 0050bfef
    PUSH ESI                            ; 0050bff0
    CALL FUN_0050cd90                   ; 0050bff1
        ;   XREF to: 0050cd90 (UNCONDITIONAL_CALL)  ; undefined FUN_0050cd90()
    ADD ESP,0xc                         ; 0050bff6
        ;   Label: LAB_0050bff6
    INC EBX                             ; 0050bff9
    MOV EDX,dword ptr [ESI + 0x1c]      ; 0050bffa
    ADD EDI,0x80                        ; 0050bffd
    CMP EBX,EDX                         ; 0050c003
    JL 0x0050bfdb                       ; 0050c005
        ;   XREF to: 0050bfdb (CONDITIONAL_JUMP)  ; LAB_0050bfdb
    PUSH 0x1                            ; 0050c007
        ;   Label: LAB_0050c007
    MOV EAX,[0x00617dd4]                ; 0050c009 | DAT_00617dd4
    PUSH EAX                            ; 0050c00e | DAT_01d02f84
    MOV EBX,dword ptr [EAX]             ; 0050c00f | DAT_01d02f84
    CALL dword ptr [EBX + 0x4]          ; 0050c011
    ADD ESP,0x8                         ; 0050c014
    TEST EAX,EAX                        ; 0050c017
    JZ 0x0050be56                       ; 0050c019
        ;   XREF to: 0050be56 (CONDITIONAL_JUMP)  ; LAB_0050be56
    CALL FUN_004032b0                   ; 0050c01f
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    XOR EAX,EAX                         ; 0050c024
    MOV ESP,EBP                         ; 0050c026
        ;   Label: caseD_0
    POP EBP                             ; 0050c028
    POP EDI                             ; 0050c029
    POP ESI                             ; 0050c02a
    POP EBX                             ; 0050c02b
    RET                                 ; 0050c02c
    MOV ECX,0x5e06a5                    ; 0050c02d | = "..\\core\\netgame.cpp"
        ;   Label: LAB_0050c02d
    MOV EBX,0x337                       ; 0050c032
    PUSH 0x5e06b9                       ; 0050c037 | = "CNetGame::syncPlayers - don't use 0!"
    MOV dword ptr [0x01d046a0],ECX      ; 0050c03c | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0050c042 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0050c048
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0050c04d
    JMP 0x0050bdd1                      ; 0050c050
        ;   XREF to: 0050bdd1 (UNCONDITIONAL_JUMP)  ; LAB_0050bdd1
    MOV EAX,0x1                         ; 0050c055
        ;   Label: LAB_0050c055
    MOV ESP,EBP                         ; 0050c05a
    POP EBP                             ; 0050c05c
    POP EDI                             ; 0050c05d
    POP ESI                             ; 0050c05e
    POP EBX                             ; 0050c05f
    RET                                 ; 0050c060
    XOR EAX,EAX                         ; 0050c061
        ;   Label: LAB_0050c061
    JMP 0x0050be16                      ; 0050c063
        ;   XREF to: 0050be16 (UNCONDITIONAL_JUMP)  ; LAB_0050be16
    PUSH 0x40000000                     ; 0050c068
        ;   Label: LAB_0050c068
    PUSH EBX                            ; 0050c06d
    PUSH ESI                            ; 0050c06e
    CALL FUN_0050d840                   ; 0050c06f
        ;   XREF to: 0050d840 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d840()
    JMP 0x0050bff6                      ; 0050c074
        ;   XREF to: 0050bff6 (UNCONDITIONAL_JUMP)  ; LAB_0050bff6
    CMP EDI,0x2                         ; 0050c076
        ;   Label: LAB_0050c076
    JNZ 0x0050c0f6                      ; 0050c079
        ;   XREF to: 0050c0f6 (CONDITIONAL_JUMP)  ; LAB_0050c0f6
    CMP EDX,0x4                         ; 0050c07f
    JGE 0x0050c055                      ; 0050c082
        ;   XREF to: 0050c055 (CONDITIONAL_JUMP)  ; LAB_0050c055
    XOR EDI,EDI                         ; 0050c084
    MOV EDX,dword ptr [EBP + 0x18]      ; 0050c086
        ;   Label: LAB_0050c086
    CMP EDX,dword ptr [0x01d34e40]      ; 0050c089 | DAT_01d34e40
    JLE 0x0050c119                      ; 0050c08f
        ;   XREF to: 0050c119 (CONDITIONAL_JUMP)  ; LAB_0050c119
    CALL FUN_0055b1f0                   ; 0050c095
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055b1f0()
    MOV ECX,dword ptr [EBP + 0x18]      ; 0050c09a
    PUSH ECX                            ; 0050c09d
    PUSH 0x5e0750                       ; 0050c09e | = "Waiting on sync code %d from server..."
    LEA EAX,[ESP + 0x10c]               ; 0050c0a3
    PUSH EAX                            ; 0050c0aa
    CALL FUN_005b7790                   ; 0050c0ab
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0xc                         ; 0050c0b0
    PUSH 0xb                            ; 0050c0b3
    PUSH EDI                            ; 0050c0b5
    LEA EAX,[ESP + 0x10c]               ; 0050c0b6
    PUSH EAX                            ; 0050c0bd
    CALL FUN_00401fe0                   ; 0050c0be
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 0050c0c3
    CALL FUN_00589560                   ; 0050c0c6
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; undefined FUN_00589560()
    PUSH ESI                            ; 0050c0cb
    CALL FUN_0050c190                   ; 0050c0cc
        ;   XREF to: 0050c190 (UNCONDITIONAL_CALL)  ; undefined FUN_0050c190()
    ADD ESP,0x4                         ; 0050c0d1
    MOV EAX,[0x00617dd4]                ; 0050c0d4 | DAT_00617dd4
    PUSH 0x1                            ; 0050c0d9
    MOV EBX,dword ptr [EAX]             ; 0050c0db | DAT_01d02f84
    PUSH EAX                            ; 0050c0dd | DAT_01d02f84
    CALL dword ptr [EBX + 0x4]          ; 0050c0de
    ADD ESP,0x8                         ; 0050c0e1
    TEST EAX,EAX                        ; 0050c0e4
    JZ 0x0050c086                       ; 0050c0e6
        ;   XREF to: 0050c086 (CONDITIONAL_JUMP)  ; LAB_0050c086
    CALL FUN_004032b0                   ; 0050c0e8
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    XOR EAX,EAX                         ; 0050c0ed
    MOV ESP,EBP                         ; 0050c0ef
    POP EBP                             ; 0050c0f1
    POP EDI                             ; 0050c0f2
    POP ESI                             ; 0050c0f3
    POP EBX                             ; 0050c0f4
    RET                                 ; 0050c0f5
    MOV EDX,0x5e0777                    ; 0050c0f6 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_0050c0f6
    MOV ECX,0x3c0                       ; 0050c0fb
    PUSH 0x5e078b                       ; 0050c100 | = "CNetGame::syncPlayers - invalid mode"
    MOV dword ptr [0x01d046a0],EDX      ; 0050c105 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0050c10b | DAT_01d046a4
    CALL FUN_004e4500                   ; 0050c111
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0050c116
    MOV EAX,0x1                         ; 0050c119
        ;   Label: LAB_0050c119
    MOV ESP,EBP                         ; 0050c11e
    POP EBP                             ; 0050c120
    POP EDI                             ; 0050c121
    POP ESI                             ; 0050c122
    POP EBX                             ; 0050c123
    RET                                 ; 0050c124

