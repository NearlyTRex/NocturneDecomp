; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046f610(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x128]:1  local_128
; undefined        Stack[-0xf8]:1  local_f8
; undefined        Stack[-0xc8]:1  local_c8
; undefined        Stack[-0x98]:1  local_98
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x2c]:1  local_2c
; undefined        Stack[-0x20]:1  local_20
; undefined        Stack[-0x14]:1  local_14
;
; XREF[3]:
;   FUN_00469550 at 0046a2b4
;   FUN_00471af0 at 00471d5a
;   FUN_00475920 at 00475bd0
;
; Called Functions:
;   FUN_0046f740
;   FUN_005b5200
;   FUN_005b5760
;   FUN_005b5930
;   FUN_005b6270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046f610
        ;   Label: FUN_0046f610
    PUSH EBP                            ; 0046f611
    SUB ESP,0x120                       ; 0046f612
    MOV EBX,dword ptr [ESP + 0x12c]     ; 0046f618
    MOV EDX,dword ptr [EBX + 0x20004]   ; 0046f61f
    TEST EDX,EDX                        ; 0046f625
    JZ 0x0046f732                       ; 0046f627
        ;   XREF to: 0046f732 (CONDITIONAL_JUMP)  ; LAB_0046f732
    CMP EDX,dword ptr [EBX + 0x25b0]    ; 0046f62d
    JZ 0x0046f732                       ; 0046f633
        ;   XREF to: 0046f732 (CONDITIONAL_JUMP)  ; LAB_0046f732
    CMP EDX,dword ptr [EBX + 0x2628]    ; 0046f639
    JZ 0x0046f732                       ; 0046f63f
        ;   XREF to: 0046f732 (CONDITIONAL_JUMP)  ; LAB_0046f732
    PUSH EDI                            ; 0046f645
    PUSH ESI                            ; 0046f646
    MOV EBP,dword ptr [ESP + 0x138]     ; 0046f647
    MOV ESI,0x1                         ; 0046f64e
    TEST EBP,EBP                        ; 0046f653
    JZ 0x0046f659                       ; 0046f655
        ;   XREF to: 0046f659 (CONDITIONAL_JUMP)  ; LAB_0046f659
    XOR ESI,ESI                         ; 0046f657
    PUSH ESI                            ; 0046f659
        ;   Label: LAB_0046f659
    MOV EAX,dword ptr [EBX + 0x20004]   ; 0046f65a
    PUSH EAX                            ; 0046f660
    PUSH EBX                            ; 0046f661
    LEA ESI,[ESP + 0x14]                ; 0046f662
    LEA EDI,[ESP + 0x74]                ; 0046f666
    CALL FUN_0046f740                   ; 0046f66a
        ;   XREF to: 0046f740 (UNCONDITIONAL_CALL)  ; undefined FUN_0046f740()
    MOV ECX,0xc                         ; 0046f66f
    LEA ESI,[ESP + 0x14]                ; 0046f674
    ADD ESP,0xc                         ; 0046f678
    MOVSD.REP ES:EDI,ESI                ; 0046f67b
    LEA ESI,[EBX + 0x30]                ; 0046f67d
    PUSH ESI                            ; 0046f680
    LEA ESI,[EBX + 0x20]                ; 0046f681
    PUSH ESI                            ; 0046f684
    LEA ESI,[ESP + 0xa0]                ; 0046f685
    PUSH ESI                            ; 0046f68c
    CALL FUN_005b5760                   ; 0046f68d
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5760()
    ADD ESP,0xc                         ; 0046f692
    LEA ESI,[ESP + 0x98]                ; 0046f695
    PUSH ESI                            ; 0046f69c
    LEA ESI,[ESP + 0x6c]                ; 0046f69d
    PUSH ESI                            ; 0046f6a1
    LEA ESI,[ESP + 0xd0]                ; 0046f6a2
    LEA EDI,[ESP + 0x40]                ; 0046f6a9
    CALL FUN_005b5200                   ; 0046f6ad
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5200()
    MOV ECX,0xc                         ; 0046f6b2
    LEA ESI,[ESP + 0xd0]                ; 0046f6b7
    ADD ESP,0x8                         ; 0046f6be
    MOVSD.REP ES:EDI,ESI                ; 0046f6c1
    LEA ESI,[ESP + 0x38]                ; 0046f6c3
    LEA EDI,[ESP + 0x104]               ; 0046f6c7
    MOV EBX,dword ptr [EBX + 0x20004]   ; 0046f6ce
    PUSH ESI                            ; 0046f6d4
    LEA ESI,[ESP + 0xfc]                ; 0046f6d5
    MOV EBP,dword ptr [EBX + 0x154]     ; 0046f6dc
    CALL FUN_005b5930                   ; 0046f6e2
        ;   XREF to: 005b5930 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5930()
    LEA ESI,[ESP + 0xfc]                ; 0046f6e7
    ADD ESP,0x4                         ; 0046f6ee
    MOVSD ES:EDI,ESI                    ; 0046f6f1
    MOVSD ES:EDI,ESI                    ; 0046f6f2
    MOVSD ES:EDI,ESI                    ; 0046f6f3
    LEA ESI,[ESP + 0x104]               ; 0046f6f4
    PUSH ESI                            ; 0046f6fb
    LEA ESI,[ESP + 0x3c]                ; 0046f6fc
    PUSH ESI                            ; 0046f700
    LEA ESI,[ESP + 0x124]               ; 0046f701
    LEA EDI,[ESP + 0x118]               ; 0046f708
    CALL FUN_005b6270                   ; 0046f70f
        ;   XREF to: 005b6270 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6270()
    LEA ESI,[ESP + 0x124]               ; 0046f714
    ADD ESP,0x4                         ; 0046f71b
    MOVSD ES:EDI,ESI                    ; 0046f71e
    MOVSD ES:EDI,ESI                    ; 0046f71f
    MOVSD ES:EDI,ESI                    ; 0046f720
    LEA ESI,[ESP + 0x114]               ; 0046f721
    PUSH ESI                            ; 0046f728
    PUSH EBX                            ; 0046f729
    CALL dword ptr [EBP + 0x68]         ; 0046f72a
    ADD ESP,0xc                         ; 0046f72d
    POP ESI                             ; 0046f730
    POP EDI                             ; 0046f731
    ADD ESP,0x120                       ; 0046f732
        ;   Label: LAB_0046f732
    POP EBP                             ; 0046f738
    POP EBX                             ; 0046f739
    RET                                 ; 0046f73a

