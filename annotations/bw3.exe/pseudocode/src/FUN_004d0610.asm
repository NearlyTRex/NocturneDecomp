; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d0610(int param_1,uint param_2,uint param_3)
;
; Local Variables:
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004d07f0 at 004d087b
;
; Referenced Globals:
;   undefined4 DAT_0060b024
;
; Called Functions:
;   FUN_004d0000
;   FUN_004d0500
;   FUN_004d05f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d0610
        ;   Label: FUN_004d0610
    PUSH ESI                            ; 004d0611
    PUSH EDI                            ; 004d0612
    PUSH EBP                            ; 004d0613
    SUB ESP,0x74                        ; 004d0614
    MOV EBX,dword ptr [ESP + 0x88]      ; 004d0617
    MOV EDI,dword ptr [ESP + 0x8c]      ; 004d061e
    MOV EBP,dword ptr [ESP + 0x90]      ; 004d0625
    MOV ESI,EDI                         ; 004d062c
    MOV EDX,dword ptr [EBX + 0x30]      ; 004d062e
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004d0631
    SUB EBP,EDX                         ; 004d0634
    SUB ESI,EAX                         ; 004d0636
    MOV EDX,dword ptr [EBX + 0x10]      ; 004d0638
    MOV ECX,dword ptr [EBX + 0x14]      ; 004d063b
    ADD ESI,EDX                         ; 004d063e
    MOV EAX,dword ptr [EBX + 0xc]       ; 004d0640
    PUSH ESI                            ; 004d0643
    ADD EBP,ECX                         ; 004d0644
    MOV EDX,dword ptr [ESP + 0x94]      ; 004d0646
    PUSH EBP                            ; 004d064d
    MOV ECX,dword ptr [EBX + 0x8]       ; 004d064e
    AND EDX,EAX                         ; 004d0651
    PUSH EBX                            ; 004d0653
    AND EDI,ECX                         ; 004d0654
    MOV dword ptr [ESP + 0x9c],EDX      ; 004d0656
    CALL FUN_004d0000                   ; 004d065d
        ;   XREF to: 004d0000 (UNCONDITIONAL_CALL)  ; undefined FUN_004d0000()
    ADD ESP,0xc                         ; 004d0662
    MOV dword ptr [EBX + 0x4c],EAX      ; 004d0665
    LEA EAX,[ESI + 0x1]                 ; 004d0668
    PUSH EAX                            ; 004d066b
    PUSH EBP                            ; 004d066c
    PUSH EBX                            ; 004d066d
    MOV dword ptr [ESP + 0x7c],EAX      ; 004d066e
    CALL FUN_004d0000                   ; 004d0672
        ;   XREF to: 004d0000 (UNCONDITIONAL_CALL)  ; undefined FUN_004d0000()
    ADD ESP,0xc                         ; 004d0677
    MOV dword ptr [EBX + 0x50],EAX      ; 004d067a
    MOV EAX,dword ptr [ESP + 0x70]      ; 004d067d
    PUSH EAX                            ; 004d0681
    INC EBP                             ; 004d0682
    PUSH EBP                            ; 004d0683
    PUSH EBX                            ; 004d0684
    CALL FUN_004d0000                   ; 004d0685
        ;   XREF to: 004d0000 (UNCONDITIONAL_CALL)  ; undefined FUN_004d0000()
    ADD ESP,0xc                         ; 004d068a
    PUSH ESI                            ; 004d068d
    PUSH EBP                            ; 004d068e
    PUSH EBX                            ; 004d068f
    MOV dword ptr [EBX + 0x54],EAX      ; 004d0690
    CALL FUN_004d0000                   ; 004d0693
        ;   XREF to: 004d0000 (UNCONDITIONAL_CALL)  ; undefined FUN_004d0000()
    MOV ESI,dword ptr [EBX + 0x4c]      ; 004d0698
    LEA EBP,[ESI*0x4 + 0x0]             ; 004d069b
    SUB EBP,ESI                         ; 004d06a2
    MOV ESI,dword ptr [EBX + 0x50]      ; 004d06a4
    MOV dword ptr [EBX + 0x58],EAX      ; 004d06a7
    LEA EAX,[ESI*0x4 + 0x0]             ; 004d06aa
    SUB EAX,ESI                         ; 004d06b1
    MOV ESI,EAX                         ; 004d06b3
    SHL ESI,0x4                         ; 004d06b5
    MOV EDX,dword ptr [ESI + 0x60b024]  ; 004d06b8 | DAT_0060b024
    MOV ESI,dword ptr [EBX + 0x54]      ; 004d06be
    LEA EAX,[ESI*0x4 + 0x0]             ; 004d06c1
    SUB EAX,ESI                         ; 004d06c8
    SHL EBP,0x4                         ; 004d06ca
    SHL EAX,0x4                         ; 004d06cd
    MOV ESI,dword ptr [EBX + 0x58]      ; 004d06d0
    MOV ECX,dword ptr [EAX + 0x60b024]  ; 004d06d3 | DAT_0060b024
    LEA EAX,[ESI*0x4 + 0x0]             ; 004d06d9
    MOV EBP,dword ptr [EBP + 0x60b024]  ; 004d06e0 | DAT_0060b024
    SUB EAX,ESI                         ; 004d06e6
    AND EBP,EDX                         ; 004d06e8
    SHL EAX,0x4                         ; 004d06ea
    AND EBP,ECX                         ; 004d06ed
    MOV EAX,dword ptr [EAX + 0x60b024]  ; 004d06ef | DAT_0060b024
    AND EAX,EBP                         ; 004d06f5
    ADD ESP,0xc                         ; 004d06f7
    TEST EAX,0x80000000                 ; 004d06fa
    JZ 0x004d070d                       ; 004d06ff
        ;   XREF to: 004d070d (CONDITIONAL_JUMP)  ; LAB_004d070d
    TEST AL,0xff                        ; 004d0701
    JZ 0x004d070d                       ; 004d0703
        ;   XREF to: 004d070d (CONDITIONAL_JUMP)  ; LAB_004d070d
    ADD ESP,0x74                        ; 004d0705
    POP EBP                             ; 004d0708
    POP EDI                             ; 004d0709
    POP ESI                             ; 004d070a
    POP EBX                             ; 004d070b
    RET                                 ; 004d070c
    MOV ESI,dword ptr [ESP + 0x90]      ; 004d070d
        ;   Label: LAB_004d070d
    PUSH ESI                            ; 004d0714
    PUSH EDI                            ; 004d0715
    PUSH EBX                            ; 004d0716
    CALL FUN_004d0500                   ; 004d0717
        ;   XREF to: 004d0500 (UNCONDITIONAL_CALL)  ; undefined FUN_004d0500()
    MOV EAX,ESI                         ; 004d071c
    AND EDI,0x1                         ; 004d071e
    AND EAX,0x1                         ; 004d0721
    ADD ESP,0xc                         ; 004d0724
    CMP EDI,EAX                         ; 004d0727
    JNZ 0x004d0788                      ; 004d0729
        ;   XREF to: 004d0788 (CONDITIONAL_JUMP)  ; LAB_004d0788
    MOV dword ptr [ESP + 0x4],0x3       ; 004d072b
    MOV EAX,dword ptr [EBX + 0x4c]      ; 004d0733
    MOV dword ptr [ESP + 0x20],EAX      ; 004d0736
    MOV EAX,dword ptr [EBX + 0x50]      ; 004d073a
    MOV dword ptr [ESP + 0x1c],EAX      ; 004d073d
    MOV EAX,dword ptr [EBX + 0x54]      ; 004d0741
    MOV dword ptr [ESP + 0x18],EAX      ; 004d0744
    MOV EAX,ESP                         ; 004d0748
    PUSH EAX                            ; 004d074a
    PUSH EBX                            ; 004d074b
    CALL FUN_004d05f0                   ; 004d074c
        ;   XREF to: 004d05f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d05f0()
    MOV EDX,0x3                         ; 004d0751
    ADD ESP,0x8                         ; 004d0756
    MOV dword ptr [ESP + 0x3c],EDX      ; 004d0759
    MOV EAX,dword ptr [EBX + 0x4c]      ; 004d075d
    MOV dword ptr [ESP + 0x58],EAX      ; 004d0760
    MOV EAX,dword ptr [EBX + 0x54]      ; 004d0764
    MOV dword ptr [ESP + 0x54],EAX      ; 004d0767
    MOV EAX,dword ptr [EBX + 0x58]      ; 004d076b
    MOV dword ptr [ESP + 0x50],EAX      ; 004d076e
    LEA EAX,[ESP + 0x38]                ; 004d0772
    PUSH EAX                            ; 004d0776
    PUSH EBX                            ; 004d0777
    CALL FUN_004d05f0                   ; 004d0778
        ;   XREF to: 004d05f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d05f0()
    ADD ESP,0x8                         ; 004d077d
    ADD ESP,0x74                        ; 004d0780
    POP EBP                             ; 004d0783
    POP EDI                             ; 004d0784
    POP ESI                             ; 004d0785
    POP EBX                             ; 004d0786
    RET                                 ; 004d0787
    MOV EDI,0x3                         ; 004d0788
        ;   Label: LAB_004d0788
    MOV dword ptr [ESP + 0x4],EDI       ; 004d078d
    MOV EAX,dword ptr [EBX + 0x4c]      ; 004d0791
    MOV dword ptr [ESP + 0x20],EAX      ; 004d0794
    MOV EAX,dword ptr [EBX + 0x50]      ; 004d0798
    MOV dword ptr [ESP + 0x1c],EAX      ; 004d079b
    MOV EAX,dword ptr [EBX + 0x58]      ; 004d079f
    MOV dword ptr [ESP + 0x18],EAX      ; 004d07a2
    MOV EAX,ESP                         ; 004d07a6
    PUSH EAX                            ; 004d07a8
    PUSH EBX                            ; 004d07a9
    CALL FUN_004d05f0                   ; 004d07aa
        ;   XREF to: 004d05f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d05f0()
    ADD ESP,0x8                         ; 004d07af
    MOV dword ptr [ESP + 0x3c],EDI      ; 004d07b2
    MOV EAX,dword ptr [EBX + 0x50]      ; 004d07b6
    MOV dword ptr [ESP + 0x58],EAX      ; 004d07b9
    MOV EAX,dword ptr [EBX + 0x54]      ; 004d07bd
    MOV dword ptr [ESP + 0x54],EAX      ; 004d07c0
    MOV EAX,dword ptr [EBX + 0x58]      ; 004d07c4
    MOV dword ptr [ESP + 0x50],EAX      ; 004d07c7
    LEA EAX,[ESP + 0x38]                ; 004d07cb
    PUSH EAX                            ; 004d07cf
    PUSH EBX                            ; 004d07d0
    CALL FUN_004d05f0                   ; 004d07d1
        ;   XREF to: 004d05f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d05f0()
    ADD ESP,0x8                         ; 004d07d6
    ADD ESP,0x74                        ; 004d07d9
    POP EBP                             ; 004d07dc
    POP EDI                             ; 004d07dd
    POP ESI                             ; 004d07de
    POP EBX                             ; 004d07df
    RET                                 ; 004d07e0

